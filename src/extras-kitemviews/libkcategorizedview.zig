const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KCategoryDrawer = @import("libqt6").KCategoryDrawer;
const QAbstractItemDelegate = @import("libqt6").QAbstractItemDelegate;
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
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
const QItemSelection = @import("libqt6").QItemSelection;
const QItemSelectionModel = @import("libqt6").QItemSelectionModel;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QKeySequence = @import("libqt6").QKeySequence;
const QLayout = @import("libqt6").QLayout;
const QLocale = @import("libqt6").QLocale;
const QMargins = @import("libqt6").QMargins;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QModelIndex = @import("libqt6").QModelIndex;
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
const QScrollBar = @import("libqt6").QScrollBar;
const QShowEvent = @import("libqt6").QShowEvent;
const QSize = @import("libqt6").QSize;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QStyle = @import("libqt6").QStyle;
const QStyleOptionFrame = @import("libqt6").QStyleOptionFrame;
const QStyleOptionViewItem = @import("libqt6").QStyleOptionViewItem;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qabstractitemdelegate_enums = @import("../libqabstractitemdelegate.zig").enums;
const qabstractitemview_enums = @import("../libqabstractitemview.zig").enums;
const qabstractscrollarea_enums = @import("../libqabstractscrollarea.zig").enums;
const qframe_enums = @import("../libqframe.zig").enums;
const qitemselectionmodel_enums = @import("../libqitemselectionmodel.zig").enums;
const qlistview_enums = @import("../libqlistview.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kcategorizedview.html)
pub const KCategorizedView = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCategorizedView,

    pub const _is_KCategorizedView = {};
    pub const _is_QListView = {};
    pub const _is_QAbstractItemView = {};
    pub const _is_QAbstractScrollArea = {};
    pub const _is_QFrame = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new KCategorizedView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) KCategorizedView {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KCategorizedView_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new KCategorizedView object.
    ///
    pub fn New2() KCategorizedView {
        return .{ .ptr = qtc.KCategorizedView_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn MetaObject(self: KCategorizedView) QMetaObject {
        return .{ .ptr = qtc.KCategorizedView_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KCategorizedView, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KCategorizedView_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedView `
    ///
    pub fn SuperMetaObject(self: KCategorizedView) QMetaObject {
        return .{ .ptr = qtc.KCategorizedView_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KCategorizedView, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCategorizedView_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KCategorizedView, callback: *const fn (KCategorizedView, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KCategorizedView_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KCategorizedView, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCategorizedView_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KCategorizedView, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCategorizedView_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KCategorizedView, callback: *const fn (KCategorizedView, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KCategorizedView_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KCategorizedView, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCategorizedView_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorizedview.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SetModel(self: KCategorizedView, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.KCategorizedView_SetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#setModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, model: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn OnSetModel(self: KCategorizedView, callback: *const fn (KCategorizedView, QAbstractItemModel) callconv(.c) void) void {
        qtc.KCategorizedView_OnSetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetModel` instead
    ///
    pub const QBaseSetModel = SuperSetModel;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#setModel)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SuperSetModel(self: KCategorizedView, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.KCategorizedView_SuperSetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#setGridSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` size: QSize `
    ///
    pub fn SetGridSize(self: KCategorizedView, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.KCategorizedView_SetGridSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#setGridSizeOwn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` size: QSize `
    ///
    pub fn SetGridSizeOwn(self: KCategorizedView, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.KCategorizedView_SetGridSizeOwn(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#visualRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn VisualRect(self: KCategorizedView, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedView_VisualRect(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#visualRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, index: QModelIndex) callconv(.c) QRect `
    ///
    pub fn OnVisualRect(self: KCategorizedView, callback: *const fn (KCategorizedView, QModelIndex) callconv(.c) QRect) void {
        qtc.KCategorizedView_OnVisualRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVisualRect` instead
    ///
    pub const QBaseVisualRect = SuperVisualRect;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#visualRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperVisualRect(self: KCategorizedView, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedView_SuperVisualRect(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#categoryDrawer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn CategoryDrawer(self: KCategorizedView) KCategoryDrawer {
        return .{ .ptr = qtc.KCategorizedView_CategoryDrawer(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#setCategoryDrawer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` categoryDrawer: KCategoryDrawer `
    ///
    pub fn SetCategoryDrawer(self: KCategorizedView, categoryDrawer: anytype) void {
        comptime _ = @TypeOf(categoryDrawer)._is_KCategoryDrawer;
        qtc.KCategorizedView_SetCategoryDrawer(@ptrCast(self.ptr), @ptrCast(categoryDrawer.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#categorySpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn CategorySpacing(self: KCategorizedView) i32 {
        return qtc.KCategorizedView_CategorySpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#setCategorySpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` categorySpacing: i32 `
    ///
    pub fn SetCategorySpacing(self: KCategorizedView, categorySpacing: i32) void {
        qtc.KCategorizedView_SetCategorySpacing(@ptrCast(self.ptr), @bitCast(categorySpacing));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#alternatingBlockColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn AlternatingBlockColors(self: KCategorizedView) bool {
        return qtc.KCategorizedView_AlternatingBlockColors(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#setAlternatingBlockColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAlternatingBlockColors(self: KCategorizedView, enable: bool) void {
        qtc.KCategorizedView_SetAlternatingBlockColors(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#collapsibleBlocks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn CollapsibleBlocks(self: KCategorizedView) bool {
        return qtc.KCategorizedView_CollapsibleBlocks(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#setCollapsibleBlocks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetCollapsibleBlocks(self: KCategorizedView, enable: bool) void {
        qtc.KCategorizedView_SetCollapsibleBlocks(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#block)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` category: []const u8 `
    ///
    pub fn Block(self: KCategorizedView, allocator: std.mem.Allocator, category: []const u8) []QModelIndex {
        const category_str = qtc.libqt_string{
            .len = category.len,
            .data = category.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KCategorizedView_Block(@ptrCast(self.ptr), category_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("kcategorizedview.Block: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#block)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` representative: QModelIndex `
    ///
    pub fn Block2(self: KCategorizedView, allocator: std.mem.Allocator, representative: anytype) []QModelIndex {
        comptime _ = @TypeOf(representative)._is_QModelIndex;
        const _arr: qtc.libqt_list = qtc.KCategorizedView_Block2(@ptrCast(self.ptr), @ptrCast(representative.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("kcategorizedview.Block2: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#indexAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` point: QPoint `
    ///
    pub fn IndexAt(self: KCategorizedView, point: anytype) QModelIndex {
        comptime _ = @TypeOf(point)._is_QPoint;
        return .{ .ptr = qtc.KCategorizedView_IndexAt(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#indexAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, point: QPoint) callconv(.c) QModelIndex `
    ///
    pub fn OnIndexAt(self: KCategorizedView, callback: *const fn (KCategorizedView, QPoint) callconv(.c) QModelIndex) void {
        qtc.KCategorizedView_OnIndexAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndexAt` instead
    ///
    pub const QBaseIndexAt = SuperIndexAt;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#indexAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` point: QPoint `
    ///
    pub fn SuperIndexAt(self: KCategorizedView, point: anytype) QModelIndex {
        comptime _ = @TypeOf(point)._is_QPoint;
        return .{ .ptr = qtc.KCategorizedView_SuperIndexAt(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Reset(self: KCategorizedView) void {
        qtc.KCategorizedView_Reset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#reset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReset(self: KCategorizedView, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedView_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#reset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperReset(self: KCategorizedView) void {
        qtc.KCategorizedView_SuperReset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#categorySpacingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` spacing: i32 `
    ///
    pub fn CategorySpacingChanged(self: KCategorizedView, spacing: i32) void {
        qtc.KCategorizedView_CategorySpacingChanged(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#categorySpacingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, spacing: i32) callconv(.c) void `
    ///
    pub fn OnCategorySpacingChanged(self: KCategorizedView, callback: *const fn (KCategorizedView, i32) callconv(.c) void) void {
        qtc.KCategorizedView_Connect_CategorySpacingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#alternatingBlockColorsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` enable: bool `
    ///
    pub fn AlternatingBlockColorsChanged(self: KCategorizedView, enable: bool) void {
        qtc.KCategorizedView_AlternatingBlockColorsChanged(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#alternatingBlockColorsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, enable: bool) callconv(.c) void `
    ///
    pub fn OnAlternatingBlockColorsChanged(self: KCategorizedView, callback: *const fn (KCategorizedView, bool) callconv(.c) void) void {
        qtc.KCategorizedView_Connect_AlternatingBlockColorsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#collapsibleBlocksChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` enable: bool `
    ///
    pub fn CollapsibleBlocksChanged(self: KCategorizedView, enable: bool) void {
        qtc.KCategorizedView_CollapsibleBlocksChanged(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#collapsibleBlocksChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, enable: bool) callconv(.c) void `
    ///
    pub fn OnCollapsibleBlocksChanged(self: KCategorizedView, callback: *const fn (KCategorizedView, bool) callconv(.c) void) void {
        qtc.KCategorizedView_Connect_CollapsibleBlocksChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#paintEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.KCategorizedView_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#paintEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QPaintEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#paintEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.KCategorizedView_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#resizeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KCategorizedView_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QResizeEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KCategorizedView_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#setSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` rect: QRect `
    ///
    /// ` flags: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SetSelection(self: KCategorizedView, rect: anytype, flags: i32) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KCategorizedView_SetSelection(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#setSelection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, rect: QRect, flags: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void `
    ///
    pub fn OnSetSelection(self: KCategorizedView, callback: *const fn (KCategorizedView, QRect, i32) callconv(.c) void) void {
        qtc.KCategorizedView_OnSetSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSelection` instead
    ///
    pub const QBaseSetSelection = SuperSetSelection;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#setSelection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` rect: QRect `
    ///
    /// ` flags: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SuperSetSelection(self: KCategorizedView, rect: anytype, flags: i32) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KCategorizedView_SuperSetSelection(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#mouseMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KCategorizedView_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#mouseMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QMouseEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#mouseMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KCategorizedView_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KCategorizedView_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QMouseEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KCategorizedView_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#mouseReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KCategorizedView_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#mouseReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QMouseEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#mouseReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KCategorizedView_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#leaveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KCategorizedView_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#leaveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLeaveEvent` instead
    ///
    pub const QBaseLeaveEvent = SuperLeaveEvent;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#leaveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KCategorizedView_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#startDrag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` supportedActions: flag of qnamespace_enums.DropAction `
    ///
    pub fn StartDrag(self: KCategorizedView, supportedActions: i32) void {
        qtc.KCategorizedView_StartDrag(@ptrCast(self.ptr), @bitCast(supportedActions));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#startDrag)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, supportedActions: flag of qnamespace_enums.DropAction) callconv(.c) void `
    ///
    pub fn OnStartDrag(self: KCategorizedView, callback: *const fn (KCategorizedView, i32) callconv(.c) void) void {
        qtc.KCategorizedView_OnStartDrag(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStartDrag` instead
    ///
    pub const QBaseStartDrag = SuperStartDrag;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#startDrag)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` supportedActions: flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperStartDrag(self: KCategorizedView, supportedActions: i32) void {
        qtc.KCategorizedView_SuperStartDrag(@ptrCast(self.ptr), @bitCast(supportedActions));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#dragMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KCategorizedView_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#dragMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QDragMoveEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#dragMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KCategorizedView_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#dragEnterEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KCategorizedView_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#dragEnterEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QDragEnterEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#dragEnterEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KCategorizedView_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#dragLeaveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KCategorizedView_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#dragLeaveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QDragLeaveEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#dragLeaveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KCategorizedView_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#dropEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KCategorizedView_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#dropEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QDropEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#dropEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KCategorizedView_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#moveCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` cursorAction: qabstractitemview_enums.CursorAction `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn MoveCursor(self: KCategorizedView, cursorAction: i32, modifiers: i32) QModelIndex {
        return .{ .ptr = qtc.KCategorizedView_MoveCursor(@ptrCast(self.ptr), @bitCast(cursorAction), @bitCast(modifiers)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#moveCursor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, cursorAction: qabstractitemview_enums.CursorAction, modifiers: flag of qnamespace_enums.KeyboardModifier) callconv(.c) QModelIndex `
    ///
    pub fn OnMoveCursor(self: KCategorizedView, callback: *const fn (KCategorizedView, i32, i32) callconv(.c) QModelIndex) void {
        qtc.KCategorizedView_OnMoveCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMoveCursor` instead
    ///
    pub const QBaseMoveCursor = SuperMoveCursor;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#moveCursor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` cursorAction: qabstractitemview_enums.CursorAction `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SuperMoveCursor(self: KCategorizedView, cursorAction: i32, modifiers: i32) QModelIndex {
        return .{ .ptr = qtc.KCategorizedView_SuperMoveCursor(@ptrCast(self.ptr), @bitCast(cursorAction), @bitCast(modifiers)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#rowsAboutToBeRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn RowsAboutToBeRemoved(self: KCategorizedView, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KCategorizedView_RowsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#rowsAboutToBeRemoved)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, parent: QModelIndex, start: i32, end: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeRemoved(self: KCategorizedView, callback: *const fn (KCategorizedView, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KCategorizedView_OnRowsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRowsAboutToBeRemoved` instead
    ///
    pub const QBaseRowsAboutToBeRemoved = SuperRowsAboutToBeRemoved;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#rowsAboutToBeRemoved)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn SuperRowsAboutToBeRemoved(self: KCategorizedView, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KCategorizedView_SuperRowsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#updateGeometries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn UpdateGeometries(self: KCategorizedView) void {
        qtc.KCategorizedView_UpdateGeometries(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#updateGeometries)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateGeometries(self: KCategorizedView, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedView_OnUpdateGeometries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateGeometries` instead
    ///
    pub const QBaseUpdateGeometries = SuperUpdateGeometries;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#updateGeometries)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperUpdateGeometries(self: KCategorizedView) void {
        qtc.KCategorizedView_SuperUpdateGeometries(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#currentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` current: QModelIndex `
    ///
    /// ` previous: QModelIndex `
    ///
    pub fn CurrentChanged(self: KCategorizedView, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.KCategorizedView_CurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#currentChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, current: QModelIndex, previous: QModelIndex) callconv(.c) void `
    ///
    pub fn OnCurrentChanged(self: KCategorizedView, callback: *const fn (KCategorizedView, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.KCategorizedView_OnCurrentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCurrentChanged` instead
    ///
    pub const QBaseCurrentChanged = SuperCurrentChanged;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#currentChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` current: QModelIndex `
    ///
    /// ` previous: QModelIndex `
    ///
    pub fn SuperCurrentChanged(self: KCategorizedView, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.KCategorizedView_SuperCurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn DataChanged(self: KCategorizedView, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.KCategorizedView_DataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#dataChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, topLeft: QModelIndex, bottomRight: QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn OnDataChanged(self: KCategorizedView, callback: *const fn (KCategorizedView, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
        qtc.KCategorizedView_OnDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDataChanged` instead
    ///
    pub const QBaseDataChanged = SuperDataChanged;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#dataChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn SuperDataChanged(self: KCategorizedView, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.KCategorizedView_SuperDataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#rowsInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn RowsInserted(self: KCategorizedView, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KCategorizedView_RowsInserted(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#rowsInserted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, parent: QModelIndex, start: i32, end: i32) callconv(.c) void `
    ///
    pub fn OnRowsInserted(self: KCategorizedView, callback: *const fn (KCategorizedView, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KCategorizedView_OnRowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRowsInserted` instead
    ///
    pub const QBaseRowsInserted = SuperRowsInserted;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#rowsInserted)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn SuperRowsInserted(self: KCategorizedView, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KCategorizedView_SuperRowsInserted(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#slotLayoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SlotLayoutChanged(self: KCategorizedView) void {
        qtc.KCategorizedView_SlotLayoutChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#slotLayoutChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotLayoutChanged(self: KCategorizedView, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedView_OnSlotLayoutChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotLayoutChanged` instead
    ///
    pub const QBaseSlotLayoutChanged = SuperSlotLayoutChanged;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#slotLayoutChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperSlotLayoutChanged(self: KCategorizedView) void {
        qtc.KCategorizedView_SuperSlotLayoutChanged(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorizedview.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorizedview.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setMovement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` movement: qlistview_enums.Movement `
    ///
    pub fn SetMovement(self: KCategorizedView, movement: i32) void {
        qtc.QListView_SetMovement(@ptrCast(self.ptr), @bitCast(movement));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#movement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qlistview_enums.Movement `
    ///
    pub fn Movement(self: KCategorizedView) i32 {
        return qtc.QListView_Movement(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setFlow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` flow: qlistview_enums.Flow `
    ///
    pub fn SetFlow(self: KCategorizedView, flow: i32) void {
        qtc.QListView_SetFlow(@ptrCast(self.ptr), @bitCast(flow));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#flow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qlistview_enums.Flow `
    ///
    pub fn Flow(self: KCategorizedView) i32 {
        return qtc.QListView_Flow(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setWrapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetWrapping(self: KCategorizedView, enable: bool) void {
        qtc.QListView_SetWrapping(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isWrapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IsWrapping(self: KCategorizedView) bool {
        return qtc.QListView_IsWrapping(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setResizeMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` mode: qlistview_enums.ResizeMode `
    ///
    pub fn SetResizeMode(self: KCategorizedView, mode: i32) void {
        qtc.QListView_SetResizeMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qlistview_enums.ResizeMode `
    ///
    pub fn ResizeMode(self: KCategorizedView) i32 {
        return qtc.QListView_ResizeMode(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setLayoutMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` mode: qlistview_enums.LayoutMode `
    ///
    pub fn SetLayoutMode(self: KCategorizedView, mode: i32) void {
        qtc.QListView_SetLayoutMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#layoutMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qlistview_enums.LayoutMode `
    ///
    pub fn LayoutMode(self: KCategorizedView) i32 {
        return qtc.QListView_LayoutMode(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` space: i32 `
    ///
    pub fn SetSpacing(self: KCategorizedView, space: i32) void {
        qtc.QListView_SetSpacing(@ptrCast(self.ptr), @bitCast(space));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#spacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Spacing(self: KCategorizedView) i32 {
        return qtc.QListView_Spacing(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setBatchSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` batchSize: i32 `
    ///
    pub fn SetBatchSize(self: KCategorizedView, batchSize: i32) void {
        qtc.QListView_SetBatchSize(@ptrCast(self.ptr), @bitCast(batchSize));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#batchSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn BatchSize(self: KCategorizedView) i32 {
        return qtc.QListView_BatchSize(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#gridSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn GridSize(self: KCategorizedView) QSize {
        return .{ .ptr = qtc.QListView_GridSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setViewMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` mode: qlistview_enums.ViewMode `
    ///
    pub fn SetViewMode(self: KCategorizedView, mode: i32) void {
        qtc.QListView_SetViewMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qlistview_enums.ViewMode `
    ///
    pub fn ViewMode(self: KCategorizedView) i32 {
        return qtc.QListView_ViewMode(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#clearPropertyFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ClearPropertyFlags(self: KCategorizedView) void {
        qtc.QListView_ClearPropertyFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isRowHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` row: i32 `
    ///
    pub fn IsRowHidden(self: KCategorizedView, row: i32) bool {
        return qtc.QListView_IsRowHidden(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRowHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` row: i32 `
    ///
    /// ` hide: bool `
    ///
    pub fn SetRowHidden(self: KCategorizedView, row: i32, hide: bool) void {
        qtc.QListView_SetRowHidden(@ptrCast(self.ptr), @bitCast(row), hide);
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setModelColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` column: i32 `
    ///
    pub fn SetModelColumn(self: KCategorizedView, column: i32) void {
        qtc.QListView_SetModelColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#modelColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ModelColumn(self: KCategorizedView) i32 {
        return qtc.QListView_ModelColumn(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setUniformItemSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUniformItemSizes(self: KCategorizedView, enable: bool) void {
        qtc.QListView_SetUniformItemSizes(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#uniformItemSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn UniformItemSizes(self: KCategorizedView) bool {
        return qtc.QListView_UniformItemSizes(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setWordWrap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` on: bool `
    ///
    pub fn SetWordWrap(self: KCategorizedView, on: bool) void {
        qtc.QListView_SetWordWrap(@ptrCast(self.ptr), on);
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wordWrap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn WordWrap(self: KCategorizedView) bool {
        return qtc.QListView_WordWrap(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelectionRectVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` show: bool `
    ///
    pub fn SetSelectionRectVisible(self: KCategorizedView, show: bool) void {
        qtc.QListView_SetSelectionRectVisible(@ptrCast(self.ptr), show);
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isSelectionRectVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IsSelectionRectVisible(self: KCategorizedView) bool {
        return qtc.QListView_IsSelectionRectVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setItemAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetItemAlignment(self: KCategorizedView, alignment: i32) void {
        qtc.QListView_SetItemAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#itemAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn ItemAlignment(self: KCategorizedView) i32 {
        return qtc.QListView_ItemAlignment(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn IndexesMoved(self: KCategorizedView, indexes: []QModelIndex) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        qtc.QListView_IndexesMoved(@ptrCast(self.ptr), indexes_list);
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, indexes: qtc.libqt_list ([]QModelIndex)) callconv(.c) void `
    ///
    pub fn OnIndexesMoved(self: KCategorizedView, callback: *const fn (KCategorizedView, qtc.libqt_list) callconv(.c) void) void {
        qtc.QListView_Connect_IndexesMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Model(self: KCategorizedView) QAbstractItemModel {
        return .{ .ptr = qtc.QAbstractItemView_Model(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SelectionModel(self: KCategorizedView) QItemSelectionModel {
        return .{ .ptr = qtc.QAbstractItemView_SelectionModel(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn SetItemDelegate(self: KCategorizedView, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ItemDelegate(self: KCategorizedView) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegate(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` mode: qabstractitemview_enums.SelectionMode `
    ///
    pub fn SetSelectionMode(self: KCategorizedView, mode: i32) void {
        qtc.QAbstractItemView_SetSelectionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.SelectionMode `
    ///
    pub fn SelectionMode(self: KCategorizedView) i32 {
        return qtc.QAbstractItemView_SelectionMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` behavior: qabstractitemview_enums.SelectionBehavior `
    ///
    pub fn SetSelectionBehavior(self: KCategorizedView, behavior: i32) void {
        qtc.QAbstractItemView_SetSelectionBehavior(@ptrCast(self.ptr), @bitCast(behavior));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.SelectionBehavior `
    ///
    pub fn SelectionBehavior(self: KCategorizedView) i32 {
        return qtc.QAbstractItemView_SelectionBehavior(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn CurrentIndex(self: KCategorizedView) QModelIndex {
        return .{ .ptr = qtc.QAbstractItemView_CurrentIndex(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn RootIndex(self: KCategorizedView) QModelIndex {
        return .{ .ptr = qtc.QAbstractItemView_RootIndex(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` triggers: flag of qabstractitemview_enums.EditTrigger `
    ///
    pub fn SetEditTriggers(self: KCategorizedView, triggers: i32) void {
        qtc.QAbstractItemView_SetEditTriggers(@ptrCast(self.ptr), @bitCast(triggers));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractitemview_enums.EditTrigger `
    ///
    pub fn EditTriggers(self: KCategorizedView) i32 {
        return qtc.QAbstractItemView_EditTriggers(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` mode: qabstractitemview_enums.ScrollMode `
    ///
    pub fn SetVerticalScrollMode(self: KCategorizedView, mode: i32) void {
        qtc.QAbstractItemView_SetVerticalScrollMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.ScrollMode `
    ///
    pub fn VerticalScrollMode(self: KCategorizedView) i32 {
        return qtc.QAbstractItemView_VerticalScrollMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ResetVerticalScrollMode(self: KCategorizedView) void {
        qtc.QAbstractItemView_ResetVerticalScrollMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` mode: qabstractitemview_enums.ScrollMode `
    ///
    pub fn SetHorizontalScrollMode(self: KCategorizedView, mode: i32) void {
        qtc.QAbstractItemView_SetHorizontalScrollMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.ScrollMode `
    ///
    pub fn HorizontalScrollMode(self: KCategorizedView) i32 {
        return qtc.QAbstractItemView_HorizontalScrollMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ResetHorizontalScrollMode(self: KCategorizedView) void {
        qtc.QAbstractItemView_ResetHorizontalScrollMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAutoScroll(self: KCategorizedView, enable: bool) void {
        qtc.QAbstractItemView_SetAutoScroll(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn HasAutoScroll(self: KCategorizedView) bool {
        return qtc.QAbstractItemView_HasAutoScroll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` margin: i32 `
    ///
    pub fn SetAutoScrollMargin(self: KCategorizedView, margin: i32) void {
        qtc.QAbstractItemView_SetAutoScrollMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn AutoScrollMargin(self: KCategorizedView) i32 {
        return qtc.QAbstractItemView_AutoScrollMargin(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabKeyNavigation(self: KCategorizedView, enable: bool) void {
        qtc.QAbstractItemView_SetTabKeyNavigation(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn TabKeyNavigation(self: KCategorizedView) bool {
        return qtc.QAbstractItemView_TabKeyNavigation(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetDropIndicatorShown(self: KCategorizedView, enable: bool) void {
        qtc.QAbstractItemView_SetDropIndicatorShown(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ShowDropIndicator(self: KCategorizedView) bool {
        return qtc.QAbstractItemView_ShowDropIndicator(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetDragEnabled(self: KCategorizedView, enable: bool) void {
        qtc.QAbstractItemView_SetDragEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn DragEnabled(self: KCategorizedView) bool {
        return qtc.QAbstractItemView_DragEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` overwrite: bool `
    ///
    pub fn SetDragDropOverwriteMode(self: KCategorizedView, overwrite: bool) void {
        qtc.QAbstractItemView_SetDragDropOverwriteMode(@ptrCast(self.ptr), overwrite);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn DragDropOverwriteMode(self: KCategorizedView) bool {
        return qtc.QAbstractItemView_DragDropOverwriteMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` behavior: qabstractitemview_enums.DragDropMode `
    ///
    pub fn SetDragDropMode(self: KCategorizedView, behavior: i32) void {
        qtc.QAbstractItemView_SetDragDropMode(@ptrCast(self.ptr), @bitCast(behavior));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DragDropMode `
    ///
    pub fn DragDropMode(self: KCategorizedView) i32 {
        return qtc.QAbstractItemView_DragDropMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` dropAction: qnamespace_enums.DropAction `
    ///
    pub fn SetDefaultDropAction(self: KCategorizedView, dropAction: i32) void {
        qtc.QAbstractItemView_SetDefaultDropAction(@ptrCast(self.ptr), @bitCast(dropAction));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn DefaultDropAction(self: KCategorizedView) i32 {
        return qtc.QAbstractItemView_DefaultDropAction(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAlternatingRowColors(self: KCategorizedView, enable: bool) void {
        qtc.QAbstractItemView_SetAlternatingRowColors(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn AlternatingRowColors(self: KCategorizedView) bool {
        return qtc.QAbstractItemView_AlternatingRowColors(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` size: QSize `
    ///
    pub fn SetIconSize(self: KCategorizedView, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QAbstractItemView_SetIconSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IconSize(self: KCategorizedView) QSize {
        return .{ .ptr = qtc.QAbstractItemView_IconSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` mode: qnamespace_enums.TextElideMode `
    ///
    pub fn SetTextElideMode(self: KCategorizedView, mode: i32) void {
        qtc.QAbstractItemView_SetTextElideMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TextElideMode `
    ///
    pub fn TextElideMode(self: KCategorizedView) i32 {
        return qtc.QAbstractItemView_TextElideMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SizeHintForIndex(self: KCategorizedView, index: anytype) QSize {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_SizeHintForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn OpenPersistentEditor(self: KCategorizedView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_OpenPersistentEditor(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ClosePersistentEditor(self: KCategorizedView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_ClosePersistentEditor(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IsPersistentEditorOpen(self: KCategorizedView, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QAbstractItemView_IsPersistentEditorOpen(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetIndexWidget(self: KCategorizedView, index: anytype, widget: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractItemView_SetIndexWidget(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IndexWidget(self: KCategorizedView, index: anytype) QWidget {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_IndexWidget(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` row: i32 `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn SetItemDelegateForRow(self: KCategorizedView, row: i32, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegateForRow(@ptrCast(self.ptr), @bitCast(row), @ptrCast(delegate.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` row: i32 `
    ///
    pub fn ItemDelegateForRow(self: KCategorizedView, row: i32) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegateForRow(@ptrCast(self.ptr), @bitCast(row)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` column: i32 `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn SetItemDelegateForColumn(self: KCategorizedView, column: i32, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegateForColumn(@ptrCast(self.ptr), @bitCast(column), @ptrCast(delegate.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` column: i32 `
    ///
    pub fn ItemDelegateForColumn(self: KCategorizedView, column: i32) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegateForColumn(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ItemDelegate2(self: KCategorizedView, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegate2(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Edit(self: KCategorizedView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Edit(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ClearSelection(self: KCategorizedView) void {
        qtc.QAbstractItemView_ClearSelection(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetCurrentIndex(self: KCategorizedView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_SetCurrentIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ScrollToTop(self: KCategorizedView) void {
        qtc.QAbstractItemView_ScrollToTop(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ScrollToBottom(self: KCategorizedView) void {
        qtc.QAbstractItemView_ScrollToBottom(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Update(self: KCategorizedView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Update(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Pressed(self: KCategorizedView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Pressed(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnPressed(self: KCategorizedView, callback: *const fn (KCategorizedView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Clicked(self: KCategorizedView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Clicked(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnClicked(self: KCategorizedView, callback: *const fn (KCategorizedView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn DoubleClicked(self: KCategorizedView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_DoubleClicked(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: KCategorizedView, callback: *const fn (KCategorizedView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Activated(self: KCategorizedView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Activated(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnActivated(self: KCategorizedView, callback: *const fn (KCategorizedView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Activated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Entered(self: KCategorizedView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Entered(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnEntered(self: KCategorizedView, callback: *const fn (KCategorizedView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Entered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ViewportEntered(self: KCategorizedView) void {
        qtc.QAbstractItemView_ViewportEntered(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView) callconv(.c) void `
    ///
    pub fn OnViewportEntered(self: KCategorizedView, callback: *const fn (KCategorizedView) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_ViewportEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` size: QSize `
    ///
    pub fn IconSizeChanged(self: KCategorizedView, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QAbstractItemView_IconSizeChanged(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, size: QSize) callconv(.c) void `
    ///
    pub fn OnIconSizeChanged(self: KCategorizedView, callback: *const fn (KCategorizedView, QSize) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_IconSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn VerticalScrollBarPolicy(self: KCategorizedView) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetVerticalScrollBarPolicy(self: KCategorizedView, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn VerticalScrollBar(self: KCategorizedView) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetVerticalScrollBar(self: KCategorizedView, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn HorizontalScrollBarPolicy(self: KCategorizedView) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetHorizontalScrollBarPolicy(self: KCategorizedView, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn HorizontalScrollBar(self: KCategorizedView) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetHorizontalScrollBar(self: KCategorizedView, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn CornerWidget(self: KCategorizedView) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetCornerWidget(self: KCategorizedView, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` widget: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddScrollBarWidget(self: KCategorizedView, widget: anytype, alignment: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn ScrollBarWidgets(self: KCategorizedView, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("kcategorizedview.ScrollBarWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Viewport(self: KCategorizedView) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_Viewport(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetViewport(self: KCategorizedView, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn MaximumViewportSize(self: KCategorizedView) QSize {
        return .{ .ptr = qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SizeAdjustPolicy(self: KCategorizedView) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SetSizeAdjustPolicy(self: KCategorizedView, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn FrameStyle(self: KCategorizedView) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` frameStyle: i32 `
    ///
    pub fn SetFrameStyle(self: KCategorizedView, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self.ptr), @bitCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn FrameWidth(self: KCategorizedView) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn FrameShape(self: KCategorizedView) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` frameShape: qframe_enums.Shape `
    ///
    pub fn SetFrameShape(self: KCategorizedView, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self.ptr), @bitCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn FrameShadow(self: KCategorizedView) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` frameShadow: qframe_enums.Shadow `
    ///
    pub fn SetFrameShadow(self: KCategorizedView, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self.ptr), @bitCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn LineWidth(self: KCategorizedView) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: KCategorizedView, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self.ptr), @bitCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn MidLineWidth(self: KCategorizedView) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: KCategorizedView, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn FrameRect(self: KCategorizedView) QRect {
        return .{ .ptr = qtc.QFrame_FrameRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` frameRect: QRect `
    ///
    pub fn SetFrameRect(self: KCategorizedView, frameRect: anytype) void {
        comptime _ = @TypeOf(frameRect)._is_QRect;
        qtc.QFrame_SetFrameRect(@ptrCast(self.ptr), @ptrCast(frameRect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn WinId(self: KCategorizedView) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn CreateWinId(self: KCategorizedView) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn InternalWinId(self: KCategorizedView) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn EffectiveWinId(self: KCategorizedView) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Style(self: KCategorizedView) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: KCategorizedView, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IsTopLevel(self: KCategorizedView) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IsWindow(self: KCategorizedView) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IsModal(self: KCategorizedView) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: KCategorizedView) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: KCategorizedView, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IsEnabled(self: KCategorizedView) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: KCategorizedView, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: KCategorizedView, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: KCategorizedView, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: KCategorizedView, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn FrameGeometry(self: KCategorizedView) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Geometry(self: KCategorizedView) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn NormalGeometry(self: KCategorizedView) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn X(self: KCategorizedView) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Y(self: KCategorizedView) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Pos(self: KCategorizedView) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn FrameSize(self: KCategorizedView) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Size(self: KCategorizedView) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Width(self: KCategorizedView) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Height(self: KCategorizedView) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Rect(self: KCategorizedView) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ChildrenRect(self: KCategorizedView) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ChildrenRegion(self: KCategorizedView) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn MinimumSize(self: KCategorizedView) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn MaximumSize(self: KCategorizedView) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn MinimumWidth(self: KCategorizedView) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn MinimumHeight(self: KCategorizedView) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn MaximumWidth(self: KCategorizedView) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn MaximumHeight(self: KCategorizedView) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: KCategorizedView, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: KCategorizedView, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: KCategorizedView, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: KCategorizedView, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: KCategorizedView, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: KCategorizedView, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: KCategorizedView, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: KCategorizedView, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SizeIncrement(self: KCategorizedView) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: KCategorizedView, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: KCategorizedView, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn BaseSize(self: KCategorizedView) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: KCategorizedView, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: KCategorizedView, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: KCategorizedView, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: KCategorizedView, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: KCategorizedView, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: KCategorizedView, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: KCategorizedView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: KCategorizedView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: KCategorizedView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: KCategorizedView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: KCategorizedView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: KCategorizedView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: KCategorizedView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: KCategorizedView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: KCategorizedView, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: KCategorizedView, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: KCategorizedView, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: KCategorizedView, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KCategorizedView `
    ///
    pub fn Window(self: KCategorizedView) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn NativeParentWidget(self: KCategorizedView) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn TopLevelWidget(self: KCategorizedView) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Palette(self: KCategorizedView) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: KCategorizedView, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: KCategorizedView, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: KCategorizedView) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: KCategorizedView, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: KCategorizedView) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Font(self: KCategorizedView) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KCategorizedView, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn FontMetrics(self: KCategorizedView) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn FontInfo(self: KCategorizedView) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Cursor(self: KCategorizedView) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: KCategorizedView, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn UnsetCursor(self: KCategorizedView) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: KCategorizedView, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn HasMouseTracking(self: KCategorizedView) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn UnderMouse(self: KCategorizedView) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: KCategorizedView, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn HasTabletTracking(self: KCategorizedView) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: KCategorizedView, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: KCategorizedView, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Mask(self: KCategorizedView) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ClearMask(self: KCategorizedView) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: KCategorizedView, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: KCategorizedView, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Grab(self: KCategorizedView) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn GraphicsEffect(self: KCategorizedView) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: KCategorizedView, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: KCategorizedView, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: KCategorizedView, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: KCategorizedView, windowTitle: []const u8) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: KCategorizedView, styleSheet: []const u8) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: KCategorizedView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorizedview.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: KCategorizedView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorizedview.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: KCategorizedView, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn WindowIcon(self: KCategorizedView) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: KCategorizedView, windowIconText: []const u8) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: KCategorizedView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorizedview.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: KCategorizedView, windowRole: []const u8) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: KCategorizedView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorizedview.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: KCategorizedView, filePath: []const u8) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: KCategorizedView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorizedview.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: KCategorizedView, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn WindowOpacity(self: KCategorizedView) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IsWindowModified(self: KCategorizedView) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: KCategorizedView, toolTip: []const u8) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KCategorizedView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorizedview.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: KCategorizedView, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ToolTipDuration(self: KCategorizedView) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KCategorizedView, statusTip: []const u8) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KCategorizedView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorizedview.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: KCategorizedView, whatsThis: []const u8) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KCategorizedView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorizedview.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: KCategorizedView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorizedview.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: KCategorizedView, name: []const u8) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: KCategorizedView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorizedview.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: KCategorizedView, description: []const u8) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: KCategorizedView, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: KCategorizedView) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn UnsetLayoutDirection(self: KCategorizedView) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: KCategorizedView, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Locale(self: KCategorizedView) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn UnsetLocale(self: KCategorizedView) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IsRightToLeft(self: KCategorizedView) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IsLeftToRight(self: KCategorizedView) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SetFocus(self: KCategorizedView) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IsActiveWindow(self: KCategorizedView) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ActivateWindow(self: KCategorizedView) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ClearFocus(self: KCategorizedView) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: KCategorizedView, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: KCategorizedView) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: KCategorizedView, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn HasFocus(self: KCategorizedView) bool {
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
    /// ` self: KCategorizedView `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: KCategorizedView, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn FocusProxy(self: KCategorizedView) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: KCategorizedView) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: KCategorizedView, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn GrabMouse(self: KCategorizedView) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: KCategorizedView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ReleaseMouse(self: KCategorizedView) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn GrabKeyboard(self: KCategorizedView) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ReleaseKeyboard(self: KCategorizedView) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: KCategorizedView, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: KCategorizedView, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: KCategorizedView, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: KCategorizedView, id: i32) void {
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
    /// ` self: KCategorizedView `
    ///
    pub fn UpdatesEnabled(self: KCategorizedView) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: KCategorizedView, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn GraphicsProxyWidget(self: KCategorizedView) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Repaint(self: KCategorizedView) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: KCategorizedView, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: KCategorizedView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: KCategorizedView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: KCategorizedView, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: KCategorizedView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: KCategorizedView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: KCategorizedView, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Show(self: KCategorizedView) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Hide(self: KCategorizedView) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ShowMinimized(self: KCategorizedView) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ShowMaximized(self: KCategorizedView) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ShowFullScreen(self: KCategorizedView) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ShowNormal(self: KCategorizedView) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Close(self: KCategorizedView) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Raise(self: KCategorizedView) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Lower(self: KCategorizedView) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: KCategorizedView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: KCategorizedView, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: KCategorizedView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: KCategorizedView, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: KCategorizedView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: KCategorizedView, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: KCategorizedView, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: KCategorizedView, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcategorizedview.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: KCategorizedView, geometry: []u8) bool {
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
    /// ` self: KCategorizedView `
    ///
    pub fn AdjustSize(self: KCategorizedView) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IsVisible(self: KCategorizedView) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: KCategorizedView, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IsHidden(self: KCategorizedView) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IsMinimized(self: KCategorizedView) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IsMaximized(self: KCategorizedView) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IsFullScreen(self: KCategorizedView) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: KCategorizedView) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: KCategorizedView, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: KCategorizedView, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SizePolicy(self: KCategorizedView) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: KCategorizedView, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: KCategorizedView, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn VisibleRegion(self: KCategorizedView) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: KCategorizedView, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: KCategorizedView, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ContentsMargins(self: KCategorizedView) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ContentsRect(self: KCategorizedView) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Layout(self: KCategorizedView) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: KCategorizedView, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn UpdateGeometry(self: KCategorizedView) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: KCategorizedView, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: KCategorizedView, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: KCategorizedView, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: KCategorizedView, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn FocusWidget(self: KCategorizedView) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn NextInFocusChain(self: KCategorizedView) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn PreviousInFocusChain(self: KCategorizedView) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn AcceptDrops(self: KCategorizedView) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: KCategorizedView, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: KCategorizedView, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: KCategorizedView, actions: []QAction) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: KCategorizedView, before: anytype, actions: []QAction) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: KCategorizedView, before: anytype, action: anytype) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KCategorizedView, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KCategorizedView, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("kcategorizedview.Actions: Memory allocation failed");
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
    /// ` self: KCategorizedView `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: KCategorizedView, text: []const u8) QAction {
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
    /// ` self: KCategorizedView `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: KCategorizedView, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KCategorizedView `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: KCategorizedView, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KCategorizedView `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: KCategorizedView, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KCategorizedView `
    ///
    pub fn ParentWidget(self: KCategorizedView) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: KCategorizedView, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: KCategorizedView) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: KCategorizedView, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: KCategorizedView, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: KCategorizedView) i32 {
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
    /// ` self: KCategorizedView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: KCategorizedView, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: KCategorizedView, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: KCategorizedView, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: KCategorizedView, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: KCategorizedView, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn EnsurePolished(self: KCategorizedView) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: KCategorizedView, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn AutoFillBackground(self: KCategorizedView) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: KCategorizedView, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn BackingStore(self: KCategorizedView) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn WindowHandle(self: KCategorizedView) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Screen(self: KCategorizedView) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: KCategorizedView, screen: anytype) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: KCategorizedView, title: []const u8) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: KCategorizedView, callback: *const fn (KCategorizedView, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: KCategorizedView, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: KCategorizedView, callback: *const fn (KCategorizedView, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: KCategorizedView, iconText: []const u8) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: KCategorizedView, callback: *const fn (KCategorizedView, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: KCategorizedView, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: KCategorizedView, callback: *const fn (KCategorizedView, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: KCategorizedView) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: KCategorizedView, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: KCategorizedView, target: anytype, targetOffset: anytype) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: KCategorizedView, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: KCategorizedView, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: KCategorizedView, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: KCategorizedView, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: KCategorizedView, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: KCategorizedView, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: KCategorizedView, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: KCategorizedView, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: KCategorizedView, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: KCategorizedView, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: KCategorizedView, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: KCategorizedView, param1: i32, on: bool) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KCategorizedView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorizedview.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KCategorizedView, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IsWidgetType(self: KCategorizedView) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IsWindowType(self: KCategorizedView) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn IsQuickItemType(self: KCategorizedView) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SignalsBlocked(self: KCategorizedView) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KCategorizedView, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Thread(self: KCategorizedView) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KCategorizedView, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KCategorizedView, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KCategorizedView, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KCategorizedView, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KCategorizedView, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KCategorizedView, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kcategorizedview.Children: Memory allocation failed");
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
    /// ` self: KCategorizedView `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KCategorizedView, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KCategorizedView, obj: anytype) void {
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
    /// ` self: KCategorizedView `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KCategorizedView, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KCategorizedView `
    ///
    pub fn Disconnect3(self: KCategorizedView) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KCategorizedView, receiver: anytype) bool {
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
    /// ` self: KCategorizedView `
    ///
    pub fn DumpObjectTree(self: KCategorizedView) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn DumpObjectInfo(self: KCategorizedView) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KCategorizedView, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KCategorizedView `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KCategorizedView, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KCategorizedView, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kcategorizedview.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcategorizedview.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KCategorizedView `
    ///
    pub fn BindingStorage(self: KCategorizedView) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn BindingStorage2(self: KCategorizedView) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Destroyed(self: KCategorizedView) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KCategorizedView, callback: *const fn (KCategorizedView) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Parent(self: KCategorizedView) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KCategorizedView, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn DeleteLater(self: KCategorizedView) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KCategorizedView, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KCategorizedView, time: i64, timerType: i32) i32 {
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
    /// ` self: KCategorizedView `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KCategorizedView, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KCategorizedView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KCategorizedView, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KCategorizedView, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KCategorizedView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KCategorizedView, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCategorizedView `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KCategorizedView, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KCategorizedView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KCategorizedView, callback: *const fn (KCategorizedView, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn PaintingActive(self: KCategorizedView) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn WidthMM(self: KCategorizedView) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn HeightMM(self: KCategorizedView) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn LogicalDpiX(self: KCategorizedView) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn LogicalDpiY(self: KCategorizedView) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn PhysicalDpiX(self: KCategorizedView) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn PhysicalDpiY(self: KCategorizedView) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn DevicePixelRatio(self: KCategorizedView) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn DevicePixelRatioF(self: KCategorizedView) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ColorCount(self: KCategorizedView) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Depth(self: KCategorizedView) i32 {
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

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` hint: qabstractitemview_enums.ScrollHint `
    ///
    pub fn ScrollTo(self: KCategorizedView, index: anytype, hint: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KCategorizedView_ScrollTo(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `SuperScrollTo` instead
    ///
    pub const QBaseScrollTo = SuperScrollTo;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` hint: qabstractitemview_enums.ScrollHint `
    ///
    pub fn SuperScrollTo(self: KCategorizedView, index: anytype, hint: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KCategorizedView_SuperScrollTo(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(hint));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, index: QModelIndex, hint: qabstractitemview_enums.ScrollHint) callconv(.c) void `
    ///
    pub fn OnScrollTo(self: KCategorizedView, callback: *const fn (KCategorizedView, QModelIndex, i32) callconv(.c) void) void {
        qtc.KCategorizedView_OnScrollTo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn DoItemsLayout(self: KCategorizedView) void {
        qtc.KCategorizedView_DoItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDoItemsLayout` instead
    ///
    pub const QBaseDoItemsLayout = SuperDoItemsLayout;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperDoItemsLayout(self: KCategorizedView) void {
        qtc.KCategorizedView_SuperDoItemsLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDoItemsLayout(self: KCategorizedView, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedView_OnDoItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetRootIndex(self: KCategorizedView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KCategorizedView_SetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetRootIndex` instead
    ///
    pub const QBaseSetRootIndex = SuperSetRootIndex;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSetRootIndex(self: KCategorizedView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KCategorizedView_SuperSetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnSetRootIndex(self: KCategorizedView, callback: *const fn (KCategorizedView, QModelIndex) callconv(.c) void) void {
        qtc.KCategorizedView_OnSetRootIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` e: QEvent `
    ///
    pub fn Event(self: KCategorizedView, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.KCategorizedView_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEvent(self: KCategorizedView, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.KCategorizedView_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QEvent) callconv(.c) bool) void {
        qtc.KCategorizedView_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn ScrollContentsBy(self: KCategorizedView, dx: i32, dy: i32) void {
        qtc.KCategorizedView_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `SuperScrollContentsBy` instead
    ///
    pub const QBaseScrollContentsBy = SuperScrollContentsBy;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollContentsBy(self: KCategorizedView, dx: i32, dy: i32) void {
        qtc.KCategorizedView_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn OnScrollContentsBy(self: KCategorizedView, callback: *const fn (KCategorizedView, i32, i32) callconv(.c) void) void {
        qtc.KCategorizedView_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn WheelEvent(self: KCategorizedView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.KCategorizedView_WheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: KCategorizedView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.KCategorizedView_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, e: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QWheelEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` e: QTimerEvent `
    ///
    pub fn TimerEvent(self: KCategorizedView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QTimerEvent;
        qtc.KCategorizedView_TimerEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` e: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KCategorizedView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QTimerEvent;
        qtc.KCategorizedView_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, e: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QTimerEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    pub fn InitViewItemOption(self: KCategorizedView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        qtc.KCategorizedView_InitViewItemOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitViewItemOption` instead
    ///
    pub const QBaseInitViewItemOption = SuperInitViewItemOption;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    pub fn SuperInitViewItemOption(self: KCategorizedView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        qtc.KCategorizedView_SuperInitViewItemOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, option: QStyleOptionViewItem) callconv(.c) void `
    ///
    pub fn OnInitViewItemOption(self: KCategorizedView, callback: *const fn (KCategorizedView, QStyleOptionViewItem) callconv(.c) void) void {
        qtc.KCategorizedView_OnInitViewItemOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn HorizontalOffset(self: KCategorizedView) i32 {
        return qtc.KCategorizedView_HorizontalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperHorizontalOffset` instead
    ///
    pub const QBaseHorizontalOffset = SuperHorizontalOffset;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperHorizontalOffset(self: KCategorizedView) i32 {
        return qtc.KCategorizedView_SuperHorizontalOffset(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnHorizontalOffset(self: KCategorizedView, callback: *const fn () callconv(.c) i32) void {
        qtc.KCategorizedView_OnHorizontalOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn VerticalOffset(self: KCategorizedView) i32 {
        return qtc.KCategorizedView_VerticalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperVerticalOffset` instead
    ///
    pub const QBaseVerticalOffset = SuperVerticalOffset;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperVerticalOffset(self: KCategorizedView) i32 {
        return qtc.KCategorizedView_SuperVerticalOffset(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnVerticalOffset(self: KCategorizedView, callback: *const fn () callconv(.c) i32) void {
        qtc.KCategorizedView_OnVerticalOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn VisualRegionForSelection(self: KCategorizedView, selection: anytype) QRegion {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.KCategorizedView_VisualRegionForSelection(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperVisualRegionForSelection` instead
    ///
    pub const QBaseVisualRegionForSelection = SuperVisualRegionForSelection;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn SuperVisualRegionForSelection(self: KCategorizedView, selection: anytype) QRegion {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.KCategorizedView_SuperVisualRegionForSelection(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, selection: QItemSelection) callconv(.c) QRegion `
    ///
    pub fn OnVisualRegionForSelection(self: KCategorizedView, callback: *const fn (KCategorizedView, QItemSelection) callconv(.c) QRegion) void {
        qtc.KCategorizedView_OnVisualRegionForSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedIndexes(self: KCategorizedView, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.KCategorizedView_SelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("kcategorizedview.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperSelectedIndexes` instead
    ///
    pub const QBaseSelectedIndexes = SuperSelectedIndexes;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperSelectedIndexes(self: KCategorizedView, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.KCategorizedView_SuperSelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("kcategorizedview.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn OnSelectedIndexes(self: KCategorizedView, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KCategorizedView_OnSelectedIndexes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IsIndexHidden(self: KCategorizedView, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KCategorizedView_IsIndexHidden(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsIndexHidden` instead
    ///
    pub const QBaseIsIndexHidden = SuperIsIndexHidden;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperIsIndexHidden(self: KCategorizedView, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KCategorizedView_SuperIsIndexHidden(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnIsIndexHidden(self: KCategorizedView, callback: *const fn (KCategorizedView, QModelIndex) callconv(.c) bool) void {
        qtc.KCategorizedView_OnIsIndexHidden(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` selected: QItemSelection `
    ///
    /// ` deselected: QItemSelection `
    ///
    pub fn SelectionChanged(self: KCategorizedView, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.KCategorizedView_SelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// ### DEPRECATED: Use `SuperSelectionChanged` instead
    ///
    pub const QBaseSelectionChanged = SuperSelectionChanged;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` selected: QItemSelection `
    ///
    /// ` deselected: QItemSelection `
    ///
    pub fn SuperSelectionChanged(self: KCategorizedView, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.KCategorizedView_SuperSelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, selected: QItemSelection, deselected: QItemSelection) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: KCategorizedView, callback: *const fn (KCategorizedView, QItemSelection, QItemSelection) callconv(.c) void) void {
        qtc.KCategorizedView_OnSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ViewportSizeHint(self: KCategorizedView) QSize {
        return .{ .ptr = qtc.KCategorizedView_ViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperViewportSizeHint` instead
    ///
    pub const QBaseViewportSizeHint = SuperViewportSizeHint;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperViewportSizeHint(self: KCategorizedView) QSize {
        return .{ .ptr = qtc.KCategorizedView_SuperViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnViewportSizeHint(self: KCategorizedView, callback: *const fn () callconv(.c) QSize) void {
        qtc.KCategorizedView_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` selectionModel: QItemSelectionModel `
    ///
    pub fn SetSelectionModel(self: KCategorizedView, selectionModel: anytype) void {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        qtc.KCategorizedView_SetSelectionModel(@ptrCast(self.ptr), @ptrCast(selectionModel.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetSelectionModel` instead
    ///
    pub const QBaseSetSelectionModel = SuperSetSelectionModel;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` selectionModel: QItemSelectionModel `
    ///
    pub fn SuperSetSelectionModel(self: KCategorizedView, selectionModel: anytype) void {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        qtc.KCategorizedView_SuperSetSelectionModel(@ptrCast(self.ptr), @ptrCast(selectionModel.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, selectionModel: QItemSelectionModel) callconv(.c) void `
    ///
    pub fn OnSetSelectionModel(self: KCategorizedView, callback: *const fn (KCategorizedView, QItemSelectionModel) callconv(.c) void) void {
        qtc.KCategorizedView_OnSetSelectionModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` search: []const u8 `
    ///
    pub fn KeyboardSearch(self: KCategorizedView, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.KCategorizedView_KeyboardSearch(@ptrCast(self.ptr), search_str);
    }

    /// ### DEPRECATED: Use `SuperKeyboardSearch` instead
    ///
    pub const QBaseKeyboardSearch = SuperKeyboardSearch;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` search: []const u8 `
    ///
    pub fn SuperKeyboardSearch(self: KCategorizedView, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.KCategorizedView_SuperKeyboardSearch(@ptrCast(self.ptr), search_str);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, search: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnKeyboardSearch(self: KCategorizedView, callback: *const fn (KCategorizedView, [*:0]const u8) callconv(.c) void) void {
        qtc.KCategorizedView_OnKeyboardSearch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` row: i32 `
    ///
    pub fn SizeHintForRow(self: KCategorizedView, row: i32) i32 {
        return qtc.KCategorizedView_SizeHintForRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `SuperSizeHintForRow` instead
    ///
    pub const QBaseSizeHintForRow = SuperSizeHintForRow;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` row: i32 `
    ///
    pub fn SuperSizeHintForRow(self: KCategorizedView, row: i32) i32 {
        return qtc.KCategorizedView_SuperSizeHintForRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, row: i32) callconv(.c) i32 `
    ///
    pub fn OnSizeHintForRow(self: KCategorizedView, callback: *const fn (KCategorizedView, i32) callconv(.c) i32) void {
        qtc.KCategorizedView_OnSizeHintForRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` column: i32 `
    ///
    pub fn SizeHintForColumn(self: KCategorizedView, column: i32) i32 {
        return qtc.KCategorizedView_SizeHintForColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `SuperSizeHintForColumn` instead
    ///
    pub const QBaseSizeHintForColumn = SuperSizeHintForColumn;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` column: i32 `
    ///
    pub fn SuperSizeHintForColumn(self: KCategorizedView, column: i32) i32 {
        return qtc.KCategorizedView_SuperSizeHintForColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, column: i32) callconv(.c) i32 `
    ///
    pub fn OnSizeHintForColumn(self: KCategorizedView, callback: *const fn (KCategorizedView, i32) callconv(.c) i32) void {
        qtc.KCategorizedView_OnSizeHintForColumn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ItemDelegateForIndex(self: KCategorizedView, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedView_ItemDelegateForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperItemDelegateForIndex` instead
    ///
    pub const QBaseItemDelegateForIndex = SuperItemDelegateForIndex;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperItemDelegateForIndex(self: KCategorizedView, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedView_SuperItemDelegateForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, index: QModelIndex) callconv(.c) QAbstractItemDelegate `
    ///
    pub fn OnItemDelegateForIndex(self: KCategorizedView, callback: *const fn (KCategorizedView, QModelIndex) callconv(.c) QAbstractItemDelegate) void {
        qtc.KCategorizedView_OnItemDelegateForIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: KCategorizedView, query: i32) QVariant {
        return .{ .ptr = qtc.KCategorizedView_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: KCategorizedView, query: i32) QVariant {
        return .{ .ptr = qtc.KCategorizedView_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: KCategorizedView, callback: *const fn (KCategorizedView, i32) callconv(.c) QVariant) void {
        qtc.KCategorizedView_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SelectAll(self: KCategorizedView) void {
        qtc.KCategorizedView_SelectAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSelectAll` instead
    ///
    pub const QBaseSelectAll = SuperSelectAll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperSelectAll(self: KCategorizedView) void {
        qtc.KCategorizedView_SuperSelectAll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSelectAll(self: KCategorizedView, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedView_OnSelectAll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn UpdateEditorData(self: KCategorizedView) void {
        qtc.KCategorizedView_UpdateEditorData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateEditorData` instead
    ///
    pub const QBaseUpdateEditorData = SuperUpdateEditorData;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperUpdateEditorData(self: KCategorizedView) void {
        qtc.KCategorizedView_SuperUpdateEditorData(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateEditorData(self: KCategorizedView, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedView_OnUpdateEditorData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn UpdateEditorGeometries(self: KCategorizedView) void {
        qtc.KCategorizedView_UpdateEditorGeometries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateEditorGeometries` instead
    ///
    pub const QBaseUpdateEditorGeometries = SuperUpdateEditorGeometries;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperUpdateEditorGeometries(self: KCategorizedView) void {
        qtc.KCategorizedView_SuperUpdateEditorGeometries(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateEditorGeometries(self: KCategorizedView, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedView_OnUpdateEditorGeometries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` action: i32 `
    ///
    pub fn VerticalScrollbarAction(self: KCategorizedView, action: i32) void {
        qtc.KCategorizedView_VerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `SuperVerticalScrollbarAction` instead
    ///
    pub const QBaseVerticalScrollbarAction = SuperVerticalScrollbarAction;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` action: i32 `
    ///
    pub fn SuperVerticalScrollbarAction(self: KCategorizedView, action: i32) void {
        qtc.KCategorizedView_SuperVerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, action: i32) callconv(.c) void `
    ///
    pub fn OnVerticalScrollbarAction(self: KCategorizedView, callback: *const fn (KCategorizedView, i32) callconv(.c) void) void {
        qtc.KCategorizedView_OnVerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` action: i32 `
    ///
    pub fn HorizontalScrollbarAction(self: KCategorizedView, action: i32) void {
        qtc.KCategorizedView_HorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `SuperHorizontalScrollbarAction` instead
    ///
    pub const QBaseHorizontalScrollbarAction = SuperHorizontalScrollbarAction;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` action: i32 `
    ///
    pub fn SuperHorizontalScrollbarAction(self: KCategorizedView, action: i32) void {
        qtc.KCategorizedView_SuperHorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, action: i32) callconv(.c) void `
    ///
    pub fn OnHorizontalScrollbarAction(self: KCategorizedView, callback: *const fn (KCategorizedView, i32) callconv(.c) void) void {
        qtc.KCategorizedView_OnHorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` value: i32 `
    ///
    pub fn VerticalScrollbarValueChanged(self: KCategorizedView, value: i32) void {
        qtc.KCategorizedView_VerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `SuperVerticalScrollbarValueChanged` instead
    ///
    pub const QBaseVerticalScrollbarValueChanged = SuperVerticalScrollbarValueChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` value: i32 `
    ///
    pub fn SuperVerticalScrollbarValueChanged(self: KCategorizedView, value: i32) void {
        qtc.KCategorizedView_SuperVerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, value: i32) callconv(.c) void `
    ///
    pub fn OnVerticalScrollbarValueChanged(self: KCategorizedView, callback: *const fn (KCategorizedView, i32) callconv(.c) void) void {
        qtc.KCategorizedView_OnVerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` value: i32 `
    ///
    pub fn HorizontalScrollbarValueChanged(self: KCategorizedView, value: i32) void {
        qtc.KCategorizedView_HorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `SuperHorizontalScrollbarValueChanged` instead
    ///
    pub const QBaseHorizontalScrollbarValueChanged = SuperHorizontalScrollbarValueChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` value: i32 `
    ///
    pub fn SuperHorizontalScrollbarValueChanged(self: KCategorizedView, value: i32) void {
        qtc.KCategorizedView_SuperHorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, value: i32) callconv(.c) void `
    ///
    pub fn OnHorizontalScrollbarValueChanged(self: KCategorizedView, callback: *const fn (KCategorizedView, i32) callconv(.c) void) void {
        qtc.KCategorizedView_OnHorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` editor: QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn CloseEditor(self: KCategorizedView, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.KCategorizedView_CloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `SuperCloseEditor` instead
    ///
    pub const QBaseCloseEditor = SuperCloseEditor;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` editor: QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn SuperCloseEditor(self: KCategorizedView, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.KCategorizedView_SuperCloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, editor: QWidget, hint: qabstractitemdelegate_enums.EndEditHint) callconv(.c) void `
    ///
    pub fn OnCloseEditor(self: KCategorizedView, callback: *const fn (KCategorizedView, QWidget, i32) callconv(.c) void) void {
        qtc.KCategorizedView_OnCloseEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` editor: QWidget `
    ///
    pub fn CommitData(self: KCategorizedView, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.KCategorizedView_CommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### DEPRECATED: Use `SuperCommitData` instead
    ///
    pub const QBaseCommitData = SuperCommitData;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` editor: QWidget `
    ///
    pub fn SuperCommitData(self: KCategorizedView, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.KCategorizedView_SuperCommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, editor: QWidget) callconv(.c) void `
    ///
    pub fn OnCommitData(self: KCategorizedView, callback: *const fn (KCategorizedView, QWidget) callconv(.c) void) void {
        qtc.KCategorizedView_OnCommitData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` editor: QObject `
    ///
    pub fn EditorDestroyed(self: KCategorizedView, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QObject;
        qtc.KCategorizedView_EditorDestroyed(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### DEPRECATED: Use `SuperEditorDestroyed` instead
    ///
    pub const QBaseEditorDestroyed = SuperEditorDestroyed;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` editor: QObject `
    ///
    pub fn SuperEditorDestroyed(self: KCategorizedView, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QObject;
        qtc.KCategorizedView_SuperEditorDestroyed(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, editor: QObject) callconv(.c) void `
    ///
    pub fn OnEditorDestroyed(self: KCategorizedView, callback: *const fn (KCategorizedView, QObject) callconv(.c) void) void {
        qtc.KCategorizedView_OnEditorDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` trigger: qabstractitemview_enums.EditTrigger `
    ///
    /// ` event: QEvent `
    ///
    pub fn Edit2(self: KCategorizedView, index: anytype, trigger: i32, event: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCategorizedView_Edit2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(trigger), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEdit2` instead
    ///
    pub const QBaseEdit2 = SuperEdit2;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` trigger: qabstractitemview_enums.EditTrigger `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEdit2(self: KCategorizedView, index: anytype, trigger: i32, event: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCategorizedView_SuperEdit2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(trigger), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, index: QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEdit2(self: KCategorizedView, callback: *const fn (KCategorizedView, QModelIndex, i32, QEvent) callconv(.c) bool) void {
        qtc.KCategorizedView_OnEdit2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SelectionCommand(self: KCategorizedView, index: anytype, event: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCategorizedView_SelectionCommand(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperSelectionCommand` instead
    ///
    pub const QBaseSelectionCommand = SuperSelectionCommand;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SuperSelectionCommand(self: KCategorizedView, index: anytype, event: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCategorizedView_SuperSelectionCommand(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, index: QModelIndex, event: QEvent) callconv(.c) i32 `
    ///
    pub fn OnSelectionCommand(self: KCategorizedView, callback: *const fn (KCategorizedView, QModelIndex, QEvent) callconv(.c) i32) void {
        qtc.KCategorizedView_OnSelectionCommand(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: KCategorizedView, next: bool) bool {
        return qtc.KCategorizedView_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: KCategorizedView, next: bool) bool {
        return qtc.KCategorizedView_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: KCategorizedView, callback: *const fn (KCategorizedView, bool) callconv(.c) bool) void {
        qtc.KCategorizedView_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QEvent `
    ///
    pub fn ViewportEvent(self: KCategorizedView, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCategorizedView_ViewportEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperViewportEvent` instead
    ///
    pub const QBaseViewportEvent = SuperViewportEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperViewportEvent(self: KCategorizedView, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCategorizedView_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnViewportEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QEvent) callconv(.c) bool) void {
        qtc.KCategorizedView_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KCategorizedView_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KCategorizedView_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QMouseEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KCategorizedView_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KCategorizedView_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QFocusEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KCategorizedView_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KCategorizedView_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QFocusEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KCategorizedView_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KCategorizedView_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QKeyEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.KCategorizedView_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.KCategorizedView_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QInputMethodEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` object: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KCategorizedView, object: anytype, event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCategorizedView_EventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` object: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KCategorizedView, object: anytype, event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCategorizedView_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, object: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KCategorizedView, callback: *const fn (KCategorizedView, QObject, QEvent) callconv(.c) bool) void {
        qtc.KCategorizedView_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn MinimumSizeHint(self: KCategorizedView) QSize {
        return .{ .ptr = qtc.KCategorizedView_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperMinimumSizeHint(self: KCategorizedView) QSize {
        return .{ .ptr = qtc.KCategorizedView_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: KCategorizedView, callback: *const fn () callconv(.c) QSize) void {
        qtc.KCategorizedView_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SizeHint(self: KCategorizedView) QSize {
        return .{ .ptr = qtc.KCategorizedView_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperSizeHint(self: KCategorizedView) QSize {
        return .{ .ptr = qtc.KCategorizedView_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: KCategorizedView, callback: *const fn () callconv(.c) QSize) void {
        qtc.KCategorizedView_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SetupViewport(self: KCategorizedView, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.KCategorizedView_SetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetupViewport` instead
    ///
    pub const QBaseSetupViewport = SuperSetupViewport;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SuperSetupViewport(self: KCategorizedView, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.KCategorizedView_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, viewport: QWidget) callconv(.c) void `
    ///
    pub fn OnSetupViewport(self: KCategorizedView, callback: *const fn (KCategorizedView, QWidget) callconv(.c) void) void {
        qtc.KCategorizedView_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: KCategorizedView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.KCategorizedView_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: KCategorizedView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.KCategorizedView_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, param1: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QContextMenuEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: KCategorizedView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KCategorizedView_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: KCategorizedView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KCategorizedView_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn InitStyleOption(self: KCategorizedView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.KCategorizedView_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn SuperInitStyleOption(self: KCategorizedView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.KCategorizedView_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: KCategorizedView, callback: *const fn (KCategorizedView, QStyleOptionFrame) callconv(.c) void) void {
        qtc.KCategorizedView_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn DevType(self: KCategorizedView) i32 {
        return qtc.KCategorizedView_DevType(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedView `
    ///
    pub fn SuperDevType(self: KCategorizedView) i32 {
        return qtc.KCategorizedView_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: KCategorizedView, callback: *const fn () callconv(.c) i32) void {
        qtc.KCategorizedView_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: KCategorizedView, visible: bool) void {
        qtc.KCategorizedView_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: KCategorizedView `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: KCategorizedView, visible: bool) void {
        qtc.KCategorizedView_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: KCategorizedView, callback: *const fn (KCategorizedView, bool) callconv(.c) void) void {
        qtc.KCategorizedView_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: KCategorizedView, param1: i32) i32 {
        return qtc.KCategorizedView_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KCategorizedView `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: KCategorizedView, param1: i32) i32 {
        return qtc.KCategorizedView_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: KCategorizedView, callback: *const fn (KCategorizedView, i32) callconv(.c) i32) void {
        qtc.KCategorizedView_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn HasHeightForWidth(self: KCategorizedView) bool {
        return qtc.KCategorizedView_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedView `
    ///
    pub fn SuperHasHeightForWidth(self: KCategorizedView) bool {
        return qtc.KCategorizedView_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: KCategorizedView, callback: *const fn () callconv(.c) bool) void {
        qtc.KCategorizedView_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn PaintEngine(self: KCategorizedView) QPaintEngine {
        return .{ .ptr = qtc.KCategorizedView_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: KCategorizedView `
    ///
    pub fn SuperPaintEngine(self: KCategorizedView) QPaintEngine {
        return .{ .ptr = qtc.KCategorizedView_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: KCategorizedView, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.KCategorizedView_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KCategorizedView_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCategorizedView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KCategorizedView_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QKeyEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KCategorizedView_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCategorizedView `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KCategorizedView_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QEnterEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KCategorizedView_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCategorizedView `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KCategorizedView_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QMoveEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KCategorizedView_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCategorizedView `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KCategorizedView_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QCloseEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KCategorizedView_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCategorizedView `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KCategorizedView_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QTabletEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KCategorizedView_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCategorizedView `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KCategorizedView_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QActionEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KCategorizedView_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCategorizedView `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KCategorizedView_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QShowEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KCategorizedView_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCategorizedView `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KCategorizedView_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QHideEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: KCategorizedView, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KCategorizedView_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: KCategorizedView `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: KCategorizedView, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KCategorizedView_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KCategorizedView_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: KCategorizedView, param1: i32) i32 {
        return qtc.KCategorizedView_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KCategorizedView `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: KCategorizedView, param1: i32) i32 {
        return qtc.KCategorizedView_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: KCategorizedView, callback: *const fn (KCategorizedView, i32) callconv(.c) i32) void {
        qtc.KCategorizedView_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: KCategorizedView, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KCategorizedView_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: KCategorizedView `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: KCategorizedView, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KCategorizedView_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: KCategorizedView, callback: *const fn (KCategorizedView, QPainter) callconv(.c) void) void {
        qtc.KCategorizedView_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: KCategorizedView, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KCategorizedView_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: KCategorizedView `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: KCategorizedView, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KCategorizedView_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: KCategorizedView, callback: *const fn (KCategorizedView, QPoint) callconv(.c) QPaintDevice) void {
        qtc.KCategorizedView_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SharedPainter(self: KCategorizedView) QPainter {
        return .{ .ptr = qtc.KCategorizedView_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: KCategorizedView `
    ///
    pub fn SuperSharedPainter(self: KCategorizedView) QPainter {
        return .{ .ptr = qtc.KCategorizedView_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: KCategorizedView, callback: *const fn () callconv(.c) QPainter) void {
        qtc.KCategorizedView_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KCategorizedView_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCategorizedView `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KCategorizedView_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QChildEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KCategorizedView_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCategorizedView `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KCategorizedView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KCategorizedView_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KCategorizedView, callback: *const fn (KCategorizedView, QEvent) callconv(.c) void) void {
        qtc.KCategorizedView_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KCategorizedView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCategorizedView_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCategorizedView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KCategorizedView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCategorizedView_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KCategorizedView, callback: *const fn (KCategorizedView, QMetaMethod) callconv(.c) void) void {
        qtc.KCategorizedView_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KCategorizedView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCategorizedView_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCategorizedView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KCategorizedView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCategorizedView_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KCategorizedView, callback: *const fn (KCategorizedView, QMetaMethod) callconv(.c) void) void {
        qtc.KCategorizedView_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn ResizeContents(self: KCategorizedView, width: i32, height: i32) void {
        qtc.KCategorizedView_ResizeContents(@ptrCast(self.ptr), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `SuperResizeContents` instead
    ///
    pub const QBaseResizeContents = SuperResizeContents;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn SuperResizeContents(self: KCategorizedView, width: i32, height: i32) void {
        qtc.KCategorizedView_SuperResizeContents(@ptrCast(self.ptr), @bitCast(width), @bitCast(height));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, width: i32, height: i32) callconv(.c) void `
    ///
    pub fn OnResizeContents(self: KCategorizedView, callback: *const fn (KCategorizedView, i32, i32) callconv(.c) void) void {
        qtc.KCategorizedView_OnResizeContents(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ContentsSize(self: KCategorizedView) QSize {
        return .{ .ptr = qtc.KCategorizedView_ContentsSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperContentsSize` instead
    ///
    pub const QBaseContentsSize = SuperContentsSize;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperContentsSize(self: KCategorizedView) QSize {
        return .{ .ptr = qtc.KCategorizedView_SuperContentsSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnContentsSize(self: KCategorizedView, callback: *const fn () callconv(.c) QSize) void {
        qtc.KCategorizedView_OnContentsSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn RectForIndex(self: KCategorizedView, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedView_RectForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperRectForIndex` instead
    ///
    pub const QBaseRectForIndex = SuperRectForIndex;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperRectForIndex(self: KCategorizedView, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedView_SuperRectForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, index: QModelIndex) callconv(.c) QRect `
    ///
    pub fn OnRectForIndex(self: KCategorizedView, callback: *const fn (KCategorizedView, QModelIndex) callconv(.c) QRect) void {
        qtc.KCategorizedView_OnRectForIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` position: QPoint `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetPositionForIndex(self: KCategorizedView, position: anytype, index: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KCategorizedView_SetPositionForIndex(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetPositionForIndex` instead
    ///
    pub const QBaseSetPositionForIndex = SuperSetPositionForIndex;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` position: QPoint `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSetPositionForIndex(self: KCategorizedView, position: anytype, index: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KCategorizedView_SuperSetPositionForIndex(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, position: QPoint, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnSetPositionForIndex(self: KCategorizedView, callback: *const fn (KCategorizedView, QPoint, QModelIndex) callconv(.c) void) void {
        qtc.KCategorizedView_OnSetPositionForIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.State `
    ///
    pub fn State(self: KCategorizedView) i32 {
        return qtc.KCategorizedView_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperState` instead
    ///
    pub const QBaseState = SuperState;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.State `
    ///
    pub fn SuperState(self: KCategorizedView) i32 {
        return qtc.KCategorizedView_SuperState(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnState(self: KCategorizedView, callback: *const fn () callconv(.c) i32) void {
        qtc.KCategorizedView_OnState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` state: qabstractitemview_enums.State `
    ///
    pub fn SetState(self: KCategorizedView, state: i32) void {
        qtc.KCategorizedView_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `SuperSetState` instead
    ///
    pub const QBaseSetState = SuperSetState;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` state: qabstractitemview_enums.State `
    ///
    pub fn SuperSetState(self: KCategorizedView, state: i32) void {
        qtc.KCategorizedView_SuperSetState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, state: qabstractitemview_enums.State) callconv(.c) void `
    ///
    pub fn OnSetState(self: KCategorizedView, callback: *const fn (KCategorizedView, i32) callconv(.c) void) void {
        qtc.KCategorizedView_OnSetState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ScheduleDelayedItemsLayout(self: KCategorizedView) void {
        qtc.KCategorizedView_ScheduleDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperScheduleDelayedItemsLayout` instead
    ///
    pub const QBaseScheduleDelayedItemsLayout = SuperScheduleDelayedItemsLayout;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperScheduleDelayedItemsLayout(self: KCategorizedView) void {
        qtc.KCategorizedView_SuperScheduleDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnScheduleDelayedItemsLayout(self: KCategorizedView, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedView_OnScheduleDelayedItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ExecuteDelayedItemsLayout(self: KCategorizedView) void {
        qtc.KCategorizedView_ExecuteDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperExecuteDelayedItemsLayout` instead
    ///
    pub const QBaseExecuteDelayedItemsLayout = SuperExecuteDelayedItemsLayout;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperExecuteDelayedItemsLayout(self: KCategorizedView) void {
        qtc.KCategorizedView_SuperExecuteDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnExecuteDelayedItemsLayout(self: KCategorizedView, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedView_OnExecuteDelayedItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` region: QRegion `
    ///
    pub fn SetDirtyRegion(self: KCategorizedView, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.KCategorizedView_SetDirtyRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetDirtyRegion` instead
    ///
    pub const QBaseSetDirtyRegion = SuperSetDirtyRegion;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` region: QRegion `
    ///
    pub fn SuperSetDirtyRegion(self: KCategorizedView, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.KCategorizedView_SuperSetDirtyRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, region: QRegion) callconv(.c) void `
    ///
    pub fn OnSetDirtyRegion(self: KCategorizedView, callback: *const fn (KCategorizedView, QRegion) callconv(.c) void) void {
        qtc.KCategorizedView_OnSetDirtyRegion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn ScrollDirtyRegion(self: KCategorizedView, dx: i32, dy: i32) void {
        qtc.KCategorizedView_ScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `SuperScrollDirtyRegion` instead
    ///
    pub const QBaseScrollDirtyRegion = SuperScrollDirtyRegion;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollDirtyRegion(self: KCategorizedView, dx: i32, dy: i32) void {
        qtc.KCategorizedView_SuperScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn OnScrollDirtyRegion(self: KCategorizedView, callback: *const fn (KCategorizedView, i32, i32) callconv(.c) void) void {
        qtc.KCategorizedView_OnScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn DirtyRegionOffset(self: KCategorizedView) QPoint {
        return .{ .ptr = qtc.KCategorizedView_DirtyRegionOffset(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperDirtyRegionOffset` instead
    ///
    pub const QBaseDirtyRegionOffset = SuperDirtyRegionOffset;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperDirtyRegionOffset(self: KCategorizedView) QPoint {
        return .{ .ptr = qtc.KCategorizedView_SuperDirtyRegionOffset(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) QPoint `
    ///
    pub fn OnDirtyRegionOffset(self: KCategorizedView, callback: *const fn () callconv(.c) QPoint) void {
        qtc.KCategorizedView_OnDirtyRegionOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn StartAutoScroll(self: KCategorizedView) void {
        qtc.KCategorizedView_StartAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperStartAutoScroll` instead
    ///
    pub const QBaseStartAutoScroll = SuperStartAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperStartAutoScroll(self: KCategorizedView) void {
        qtc.KCategorizedView_SuperStartAutoScroll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStartAutoScroll(self: KCategorizedView, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedView_OnStartAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn StopAutoScroll(self: KCategorizedView) void {
        qtc.KCategorizedView_StopAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperStopAutoScroll` instead
    ///
    pub const QBaseStopAutoScroll = SuperStopAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperStopAutoScroll(self: KCategorizedView) void {
        qtc.KCategorizedView_SuperStopAutoScroll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStopAutoScroll(self: KCategorizedView, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedView_OnStopAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn DoAutoScroll(self: KCategorizedView) void {
        qtc.KCategorizedView_DoAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDoAutoScroll` instead
    ///
    pub const QBaseDoAutoScroll = SuperDoAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperDoAutoScroll(self: KCategorizedView) void {
        qtc.KCategorizedView_SuperDoAutoScroll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDoAutoScroll(self: KCategorizedView, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedView_OnDoAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DropIndicatorPosition `
    ///
    pub fn DropIndicatorPosition(self: KCategorizedView) i32 {
        return qtc.KCategorizedView_DropIndicatorPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropIndicatorPosition` instead
    ///
    pub const QBaseDropIndicatorPosition = SuperDropIndicatorPosition;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DropIndicatorPosition `
    ///
    pub fn SuperDropIndicatorPosition(self: KCategorizedView) i32 {
        return qtc.KCategorizedView_SuperDropIndicatorPosition(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDropIndicatorPosition(self: KCategorizedView, callback: *const fn () callconv(.c) i32) void {
        qtc.KCategorizedView_OnDropIndicatorPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetViewportMargins(self: KCategorizedView, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.KCategorizedView_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `SuperSetViewportMargins` instead
    ///
    pub const QBaseSetViewportMargins = SuperSetViewportMargins;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SuperSetViewportMargins(self: KCategorizedView, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.KCategorizedView_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn OnSetViewportMargins(self: KCategorizedView, callback: *const fn (KCategorizedView, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.KCategorizedView_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn ViewportMargins(self: KCategorizedView) QMargins {
        return .{ .ptr = qtc.KCategorizedView_ViewportMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperViewportMargins` instead
    ///
    pub const QBaseViewportMargins = SuperViewportMargins;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SuperViewportMargins(self: KCategorizedView) QMargins {
        return .{ .ptr = qtc.KCategorizedView_SuperViewportMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) QMargins `
    ///
    pub fn OnViewportMargins(self: KCategorizedView, callback: *const fn () callconv(.c) QMargins) void {
        qtc.KCategorizedView_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QPainter `
    ///
    pub fn DrawFrame(self: KCategorizedView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.KCategorizedView_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperDrawFrame` instead
    ///
    pub const QBaseDrawFrame = SuperDrawFrame;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` param1: QPainter `
    ///
    pub fn SuperDrawFrame(self: KCategorizedView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.KCategorizedView_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, param1: QPainter) callconv(.c) void `
    ///
    pub fn OnDrawFrame(self: KCategorizedView, callback: *const fn (KCategorizedView, QPainter) callconv(.c) void) void {
        qtc.KCategorizedView_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn UpdateMicroFocus(self: KCategorizedView) void {
        qtc.KCategorizedView_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedView `
    ///
    pub fn SuperUpdateMicroFocus(self: KCategorizedView) void {
        qtc.KCategorizedView_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: KCategorizedView, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedView_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Create(self: KCategorizedView) void {
        qtc.KCategorizedView_Create(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedView `
    ///
    pub fn SuperCreate(self: KCategorizedView) void {
        qtc.KCategorizedView_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: KCategorizedView, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedView_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Destroy(self: KCategorizedView) void {
        qtc.KCategorizedView_Destroy(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedView `
    ///
    pub fn SuperDestroy(self: KCategorizedView) void {
        qtc.KCategorizedView_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: KCategorizedView, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedView_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn FocusNextChild(self: KCategorizedView) bool {
        return qtc.KCategorizedView_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedView `
    ///
    pub fn SuperFocusNextChild(self: KCategorizedView) bool {
        return qtc.KCategorizedView_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: KCategorizedView, callback: *const fn () callconv(.c) bool) void {
        qtc.KCategorizedView_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn FocusPreviousChild(self: KCategorizedView) bool {
        return qtc.KCategorizedView_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedView `
    ///
    pub fn SuperFocusPreviousChild(self: KCategorizedView) bool {
        return qtc.KCategorizedView_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: KCategorizedView, callback: *const fn () callconv(.c) bool) void {
        qtc.KCategorizedView_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Sender(self: KCategorizedView) QObject {
        return .{ .ptr = qtc.KCategorizedView_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KCategorizedView `
    ///
    pub fn SuperSender(self: KCategorizedView) QObject {
        return .{ .ptr = qtc.KCategorizedView_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KCategorizedView, callback: *const fn () callconv(.c) QObject) void {
        qtc.KCategorizedView_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn SenderSignalIndex(self: KCategorizedView) i32 {
        return qtc.KCategorizedView_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedView `
    ///
    pub fn SuperSenderSignalIndex(self: KCategorizedView) i32 {
        return qtc.KCategorizedView_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KCategorizedView, callback: *const fn () callconv(.c) i32) void {
        qtc.KCategorizedView_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KCategorizedView, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCategorizedView_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KCategorizedView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KCategorizedView, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCategorizedView_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KCategorizedView, callback: *const fn (KCategorizedView, [*:0]const u8) callconv(.c) i32) void {
        qtc.KCategorizedView_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KCategorizedView, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCategorizedView_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCategorizedView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KCategorizedView, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCategorizedView_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KCategorizedView, callback: *const fn (KCategorizedView, QMetaMethod) callconv(.c) bool) void {
        qtc.KCategorizedView_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: KCategorizedView, metricA: i32, metricB: i32) f64 {
        return qtc.KCategorizedView_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: KCategorizedView `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: KCategorizedView, metricA: i32, metricB: i32) f64 {
        return qtc.KCategorizedView_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView`
    ///
    /// ` callback: *const fn (self: KCategorizedView, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: KCategorizedView, callback: *const fn (KCategorizedView, i32, i32) callconv(.c) f64) void {
        qtc.KCategorizedView_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedView `
    ///
    /// ` callback: *const fn (self: KCategorizedView, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KCategorizedView, callback: *const fn (KCategorizedView, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedview.html#dtor.KCategorizedView)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCategorizedView `
    ///
    pub fn Delete(self: KCategorizedView) void {
        qtc.KCategorizedView_Delete(@ptrCast(self.ptr));
    }
};
