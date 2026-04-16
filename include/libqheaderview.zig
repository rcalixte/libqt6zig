const QtC = @import("qt6zig");
const qtc = @import("qt6c");
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
const QStyleOptionHeader = @import("libqt6").QStyleOptionHeader;
const QStyleOptionViewItem = @import("libqt6").QStyleOptionViewItem;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qabstractitemdelegate_enums = @import("libqabstractitemdelegate.zig").enums;
const qabstractitemview_enums = @import("libqabstractitemview.zig").enums;
const qabstractscrollarea_enums = @import("libqabstractscrollarea.zig").enums;
const qframe_enums = @import("libqframe.zig").enums;
const qheaderview_enums = enums;
const qitemselectionmodel_enums = @import("libqitemselectionmodel.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qwidget_enums = @import("libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html)
pub const QHeaderView = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHeaderView,

    pub const _is_QHeaderView = {};
    pub const _is_QAbstractItemView = {};
    pub const _is_QAbstractScrollArea = {};
    pub const _is_QFrame = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QHeaderView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn New(orientation: i32) QHeaderView {
        return .{ .ptr = qtc.QHeaderView_new(@bitCast(orientation)) };
    }

    /// New2 constructs a new QHeaderView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New2(orientation: i32, parent: anytype) QHeaderView {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QHeaderView_new2(@bitCast(orientation), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn MetaObject(self: QHeaderView) QMetaObject {
        return .{ .ptr = qtc.QHeaderView_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QHeaderView, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QHeaderView_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperMetaObject(self: QHeaderView) QMetaObject {
        return .{ .ptr = qtc.QHeaderView_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QHeaderView, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHeaderView_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QHeaderView, callback: *const fn (QHeaderView, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QHeaderView_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QHeaderView, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHeaderView_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QHeaderView, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHeaderView_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QHeaderView_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QHeaderView, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHeaderView_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qheaderview.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SetModel(self: QHeaderView, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.QHeaderView_SetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, model: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn OnSetModel(self: QHeaderView, callback: *const fn (QHeaderView, QAbstractItemModel) callconv(.c) void) void {
        qtc.QHeaderView_OnSetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetModel` instead
    ///
    pub const QBaseSetModel = SuperSetModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setModel)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SuperSetModel(self: QHeaderView, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.QHeaderView_SuperSetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn Orientation(self: QHeaderView) i32 {
        return qtc.QHeaderView_Orientation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#offset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Offset(self: QHeaderView) i32 {
        return qtc.QHeaderView_Offset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Length(self: QHeaderView) i32 {
        return qtc.QHeaderView_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SizeHint(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QHeaderView_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QHeaderView, callback: *const fn () callconv(.c) QSize) void {
        qtc.QHeaderView_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SuperSizeHint(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QHeaderView_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` v: bool `
    ///
    pub fn SetVisible(self: QHeaderView, v: bool) void {
        qtc.QHeaderView_SetVisible(@ptrCast(self.ptr), v);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setVisible)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, v: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: QHeaderView, callback: *const fn (QHeaderView, bool) callconv(.c) void) void {
        qtc.QHeaderView_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetVisible` instead
    ///
    pub const QBaseSetVisible = SuperSetVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setVisible)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` v: bool `
    ///
    pub fn SuperSetVisible(self: QHeaderView, v: bool) void {
        qtc.QHeaderView_SuperSetVisible(@ptrCast(self.ptr), v);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn SectionSizeHint(self: QHeaderView, logicalIndex: i32) i32 {
        return qtc.QHeaderView_SectionSizeHint(@ptrCast(self.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualIndexAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` position: i32 `
    ///
    pub fn VisualIndexAt(self: QHeaderView, position: i32) i32 {
        return qtc.QHeaderView_VisualIndexAt(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#logicalIndexAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` position: i32 `
    ///
    pub fn LogicalIndexAt(self: QHeaderView, position: i32) i32 {
        return qtc.QHeaderView_LogicalIndexAt(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#logicalIndexAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn LogicalIndexAt2(self: QHeaderView, x: i32, y: i32) i32 {
        return qtc.QHeaderView_LogicalIndexAt2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#logicalIndexAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` pos: QPoint `
    ///
    pub fn LogicalIndexAt3(self: QHeaderView, pos: anytype) i32 {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return qtc.QHeaderView_LogicalIndexAt3(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn SectionSize(self: QHeaderView, logicalIndex: i32) i32 {
        return qtc.QHeaderView_SectionSize(@ptrCast(self.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn SectionPosition(self: QHeaderView, logicalIndex: i32) i32 {
        return qtc.QHeaderView_SectionPosition(@ptrCast(self.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionViewportPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn SectionViewportPosition(self: QHeaderView, logicalIndex: i32) i32 {
        return qtc.QHeaderView_SectionViewportPosition(@ptrCast(self.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#moveSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` from: i32 `
    ///
    /// ` to: i32 `
    ///
    pub fn MoveSection(self: QHeaderView, from: i32, to: i32) void {
        qtc.QHeaderView_MoveSection(@ptrCast(self.ptr), @bitCast(from), @bitCast(to));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#swapSections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` first: i32 `
    ///
    /// ` second: i32 `
    ///
    pub fn SwapSections(self: QHeaderView, first: i32, second: i32) void {
        qtc.QHeaderView_SwapSections(@ptrCast(self.ptr), @bitCast(first), @bitCast(second));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resizeSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    /// ` size: i32 `
    ///
    pub fn ResizeSection(self: QHeaderView, logicalIndex: i32, size: i32) void {
        qtc.QHeaderView_ResizeSection(@ptrCast(self.ptr), @bitCast(logicalIndex), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resizeSections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` mode: qheaderview_enums.ResizeMode `
    ///
    pub fn ResizeSections(self: QHeaderView, mode: i32) void {
        qtc.QHeaderView_ResizeSections(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isSectionHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn IsSectionHidden(self: QHeaderView, logicalIndex: i32) bool {
        return qtc.QHeaderView_IsSectionHidden(@ptrCast(self.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSectionHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    /// ` hide: bool `
    ///
    pub fn SetSectionHidden(self: QHeaderView, logicalIndex: i32, hide: bool) void {
        qtc.QHeaderView_SetSectionHidden(@ptrCast(self.ptr), @bitCast(logicalIndex), hide);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#hiddenSectionCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn HiddenSectionCount(self: QHeaderView) i32 {
        return qtc.QHeaderView_HiddenSectionCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#hideSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn HideSection(self: QHeaderView, logicalIndex: i32) void {
        qtc.QHeaderView_HideSection(@ptrCast(self.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#showSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn ShowSection(self: QHeaderView, logicalIndex: i32) void {
        qtc.QHeaderView_ShowSection(@ptrCast(self.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Count(self: QHeaderView) i32 {
        return qtc.QHeaderView_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn VisualIndex(self: QHeaderView, logicalIndex: i32) i32 {
        return qtc.QHeaderView_VisualIndex(@ptrCast(self.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#logicalIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` visualIndex: i32 `
    ///
    pub fn LogicalIndex(self: QHeaderView, visualIndex: i32) i32 {
        return qtc.QHeaderView_LogicalIndex(@ptrCast(self.ptr), @bitCast(visualIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSectionsMovable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` movable: bool `
    ///
    pub fn SetSectionsMovable(self: QHeaderView, movable: bool) void {
        qtc.QHeaderView_SetSectionsMovable(@ptrCast(self.ptr), movable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsMovable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SectionsMovable(self: QHeaderView) bool {
        return qtc.QHeaderView_SectionsMovable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setFirstSectionMovable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` movable: bool `
    ///
    pub fn SetFirstSectionMovable(self: QHeaderView, movable: bool) void {
        qtc.QHeaderView_SetFirstSectionMovable(@ptrCast(self.ptr), movable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isFirstSectionMovable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsFirstSectionMovable(self: QHeaderView) bool {
        return qtc.QHeaderView_IsFirstSectionMovable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSectionsClickable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` clickable: bool `
    ///
    pub fn SetSectionsClickable(self: QHeaderView, clickable: bool) void {
        qtc.QHeaderView_SetSectionsClickable(@ptrCast(self.ptr), clickable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsClickable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SectionsClickable(self: QHeaderView) bool {
        return qtc.QHeaderView_SectionsClickable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setHighlightSections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` highlight: bool `
    ///
    pub fn SetHighlightSections(self: QHeaderView, highlight: bool) void {
        qtc.QHeaderView_SetHighlightSections(@ptrCast(self.ptr), highlight);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#highlightSections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn HighlightSections(self: QHeaderView) bool {
        return qtc.QHeaderView_HighlightSections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionResizeMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    /// ## Returns:
    ///
    /// ` qheaderview_enums.ResizeMode `
    ///
    pub fn SectionResizeMode(self: QHeaderView, logicalIndex: i32) i32 {
        return qtc.QHeaderView_SectionResizeMode(@ptrCast(self.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSectionResizeMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` mode: qheaderview_enums.ResizeMode `
    ///
    pub fn SetSectionResizeMode(self: QHeaderView, mode: i32) void {
        qtc.QHeaderView_SetSectionResizeMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSectionResizeMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    /// ` mode: qheaderview_enums.ResizeMode `
    ///
    pub fn SetSectionResizeMode2(self: QHeaderView, logicalIndex: i32, mode: i32) void {
        qtc.QHeaderView_SetSectionResizeMode2(@ptrCast(self.ptr), @bitCast(logicalIndex), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setResizeContentsPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` precision: i32 `
    ///
    pub fn SetResizeContentsPrecision(self: QHeaderView, precision: i32) void {
        qtc.QHeaderView_SetResizeContentsPrecision(@ptrCast(self.ptr), @bitCast(precision));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resizeContentsPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ResizeContentsPrecision(self: QHeaderView) i32 {
        return qtc.QHeaderView_ResizeContentsPrecision(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#stretchSectionCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn StretchSectionCount(self: QHeaderView) i32 {
        return qtc.QHeaderView_StretchSectionCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSortIndicatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` show: bool `
    ///
    pub fn SetSortIndicatorShown(self: QHeaderView, show: bool) void {
        qtc.QHeaderView_SetSortIndicatorShown(@ptrCast(self.ptr), show);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isSortIndicatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsSortIndicatorShown(self: QHeaderView) bool {
        return qtc.QHeaderView_IsSortIndicatorShown(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSortIndicator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn SetSortIndicator(self: QHeaderView, logicalIndex: i32, order: i32) void {
        qtc.QHeaderView_SetSortIndicator(@ptrCast(self.ptr), @bitCast(logicalIndex), @bitCast(order));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SortIndicatorSection(self: QHeaderView) i32 {
        return qtc.QHeaderView_SortIndicatorSection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.SortOrder `
    ///
    pub fn SortIndicatorOrder(self: QHeaderView) i32 {
        return qtc.QHeaderView_SortIndicatorOrder(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSortIndicatorClearable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` clearable: bool `
    ///
    pub fn SetSortIndicatorClearable(self: QHeaderView, clearable: bool) void {
        qtc.QHeaderView_SetSortIndicatorClearable(@ptrCast(self.ptr), clearable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isSortIndicatorClearable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsSortIndicatorClearable(self: QHeaderView) bool {
        return qtc.QHeaderView_IsSortIndicatorClearable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#stretchLastSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn StretchLastSection(self: QHeaderView) bool {
        return qtc.QHeaderView_StretchLastSection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setStretchLastSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` stretch: bool `
    ///
    pub fn SetStretchLastSection(self: QHeaderView, stretch: bool) void {
        qtc.QHeaderView_SetStretchLastSection(@ptrCast(self.ptr), stretch);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#cascadingSectionResizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn CascadingSectionResizes(self: QHeaderView) bool {
        return qtc.QHeaderView_CascadingSectionResizes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setCascadingSectionResizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetCascadingSectionResizes(self: QHeaderView, enable: bool) void {
        qtc.QHeaderView_SetCascadingSectionResizes(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#defaultSectionSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn DefaultSectionSize(self: QHeaderView) i32 {
        return qtc.QHeaderView_DefaultSectionSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setDefaultSectionSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` size: i32 `
    ///
    pub fn SetDefaultSectionSize(self: QHeaderView, size: i32) void {
        qtc.QHeaderView_SetDefaultSectionSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resetDefaultSectionSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ResetDefaultSectionSize(self: QHeaderView) void {
        qtc.QHeaderView_ResetDefaultSectionSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#minimumSectionSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn MinimumSectionSize(self: QHeaderView) i32 {
        return qtc.QHeaderView_MinimumSectionSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setMinimumSectionSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` size: i32 `
    ///
    pub fn SetMinimumSectionSize(self: QHeaderView, size: i32) void {
        qtc.QHeaderView_SetMinimumSectionSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#maximumSectionSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn MaximumSectionSize(self: QHeaderView) i32 {
        return qtc.QHeaderView_MaximumSectionSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setMaximumSectionSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` size: i32 `
    ///
    pub fn SetMaximumSectionSize(self: QHeaderView, size: i32) void {
        qtc.QHeaderView_SetMaximumSectionSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#defaultAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn DefaultAlignment(self: QHeaderView) i32 {
        return qtc.QHeaderView_DefaultAlignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setDefaultAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetDefaultAlignment(self: QHeaderView, alignment: i32) void {
        qtc.QHeaderView_SetDefaultAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#doItemsLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn DoItemsLayout(self: QHeaderView) void {
        qtc.QHeaderView_DoItemsLayout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#doItemsLayout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDoItemsLayout(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnDoItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDoItemsLayout` instead
    ///
    pub const QBaseDoItemsLayout = SuperDoItemsLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#doItemsLayout)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SuperDoItemsLayout(self: QHeaderView) void {
        qtc.QHeaderView_SuperDoItemsLayout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsMoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SectionsMoved(self: QHeaderView) bool {
        return qtc.QHeaderView_SectionsMoved(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SectionsHidden(self: QHeaderView) bool {
        return qtc.QHeaderView_SectionsHidden(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#saveState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveState(self: QHeaderView, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QHeaderView_SaveState(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qheaderview.SaveState: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#restoreState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` state: []u8 `
    ///
    pub fn RestoreState(self: QHeaderView, state: []u8) bool {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return qtc.QHeaderView_RestoreState(@ptrCast(self.ptr), state_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Reset(self: QHeaderView) void {
        qtc.QHeaderView_Reset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#reset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReset(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#reset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SuperReset(self: QHeaderView) void {
        qtc.QHeaderView_SuperReset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` offset: i32 `
    ///
    pub fn SetOffset(self: QHeaderView, offset: i32) void {
        qtc.QHeaderView_SetOffset(@ptrCast(self.ptr), @bitCast(offset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setOffsetToSectionPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` visualIndex: i32 `
    ///
    pub fn SetOffsetToSectionPosition(self: QHeaderView, visualIndex: i32) void {
        qtc.QHeaderView_SetOffsetToSectionPosition(@ptrCast(self.ptr), @bitCast(visualIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setOffsetToLastSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SetOffsetToLastSection(self: QHeaderView) void {
        qtc.QHeaderView_SetOffsetToLastSection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#headerDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` logicalFirst: i32 `
    ///
    /// ` logicalLast: i32 `
    ///
    pub fn HeaderDataChanged(self: QHeaderView, orientation: i32, logicalFirst: i32, logicalLast: i32) void {
        qtc.QHeaderView_HeaderDataChanged(@ptrCast(self.ptr), @bitCast(orientation), @bitCast(logicalFirst), @bitCast(logicalLast));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionMoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    /// ` oldVisualIndex: i32 `
    ///
    /// ` newVisualIndex: i32 `
    ///
    pub fn SectionMoved(self: QHeaderView, logicalIndex: i32, oldVisualIndex: i32, newVisualIndex: i32) void {
        qtc.QHeaderView_SectionMoved(@ptrCast(self.ptr), @bitCast(logicalIndex), @bitCast(oldVisualIndex), @bitCast(newVisualIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionMoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, logicalIndex: i32, oldVisualIndex: i32, newVisualIndex: i32) callconv(.c) void `
    ///
    pub fn OnSectionMoved(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionResized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    /// ` oldSize: i32 `
    ///
    /// ` newSize: i32 `
    ///
    pub fn SectionResized(self: QHeaderView, logicalIndex: i32, oldSize: i32, newSize: i32) void {
        qtc.QHeaderView_SectionResized(@ptrCast(self.ptr), @bitCast(logicalIndex), @bitCast(oldSize), @bitCast(newSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionResized)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, logicalIndex: i32, oldSize: i32, newSize: i32) callconv(.c) void `
    ///
    pub fn OnSectionResized(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionResized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn SectionPressed(self: QHeaderView, logicalIndex: i32) void {
        qtc.QHeaderView_SectionPressed(@ptrCast(self.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, logicalIndex: i32) callconv(.c) void `
    ///
    pub fn OnSectionPressed(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn SectionClicked(self: QHeaderView, logicalIndex: i32) void {
        qtc.QHeaderView_SectionClicked(@ptrCast(self.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, logicalIndex: i32) callconv(.c) void `
    ///
    pub fn OnSectionClicked(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn SectionEntered(self: QHeaderView, logicalIndex: i32) void {
        qtc.QHeaderView_SectionEntered(@ptrCast(self.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, logicalIndex: i32) callconv(.c) void `
    ///
    pub fn OnSectionEntered(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionDoubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn SectionDoubleClicked(self: QHeaderView, logicalIndex: i32) void {
        qtc.QHeaderView_SectionDoubleClicked(@ptrCast(self.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionDoubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, logicalIndex: i32) callconv(.c) void `
    ///
    pub fn OnSectionDoubleClicked(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionDoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` oldCount: i32 `
    ///
    /// ` newCount: i32 `
    ///
    pub fn SectionCountChanged(self: QHeaderView, oldCount: i32, newCount: i32) void {
        qtc.QHeaderView_SectionCountChanged(@ptrCast(self.ptr), @bitCast(oldCount), @bitCast(newCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, oldCount: i32, newCount: i32) callconv(.c) void `
    ///
    pub fn OnSectionCountChanged(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionHandleDoubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn SectionHandleDoubleClicked(self: QHeaderView, logicalIndex: i32) void {
        qtc.QHeaderView_SectionHandleDoubleClicked(@ptrCast(self.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionHandleDoubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, logicalIndex: i32) callconv(.c) void `
    ///
    pub fn OnSectionHandleDoubleClicked(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionHandleDoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#geometriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn GeometriesChanged(self: QHeaderView) void {
        qtc.QHeaderView_GeometriesChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#geometriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView) callconv(.c) void `
    ///
    pub fn OnGeometriesChanged(self: QHeaderView, callback: *const fn (QHeaderView) callconv(.c) void) void {
        qtc.QHeaderView_Connect_GeometriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn SortIndicatorChanged(self: QHeaderView, logicalIndex: i32, order: i32) void {
        qtc.QHeaderView_SortIndicatorChanged(@ptrCast(self.ptr), @bitCast(logicalIndex), @bitCast(order));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, logicalIndex: i32, order: qnamespace_enums.SortOrder) callconv(.c) void `
    ///
    pub fn OnSortIndicatorChanged(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SortIndicatorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorClearableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` clearable: bool `
    ///
    pub fn SortIndicatorClearableChanged(self: QHeaderView, clearable: bool) void {
        qtc.QHeaderView_SortIndicatorClearableChanged(@ptrCast(self.ptr), clearable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorClearableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, clearable: bool) callconv(.c) void `
    ///
    pub fn OnSortIndicatorClearableChanged(self: QHeaderView, callback: *const fn (QHeaderView, bool) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SortIndicatorClearableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#updateSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn UpdateSection(self: QHeaderView, logicalIndex: i32) void {
        qtc.QHeaderView_UpdateSection(@ptrCast(self.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#updateSection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, logicalIndex: i32) callconv(.c) void `
    ///
    pub fn OnUpdateSection(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnUpdateSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateSection` instead
    ///
    pub const QBaseUpdateSection = SuperUpdateSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#updateSection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn SuperUpdateSection(self: QHeaderView, logicalIndex: i32) void {
        qtc.QHeaderView_SuperUpdateSection(@ptrCast(self.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resizeSections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ResizeSections2(self: QHeaderView) void {
        qtc.QHeaderView_ResizeSections2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resizeSections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResizeSections2(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnResizeSections2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResizeSections2` instead
    ///
    pub const QBaseResizeSections2 = SuperResizeSections2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resizeSections)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SuperResizeSections2(self: QHeaderView) void {
        qtc.QHeaderView_SuperResizeSections2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` logicalFirst: i32 `
    ///
    /// ` logicalLast: i32 `
    ///
    pub fn SectionsInserted(self: QHeaderView, parent: anytype, logicalFirst: i32, logicalLast: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QHeaderView_SectionsInserted(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(logicalFirst), @bitCast(logicalLast));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsInserted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, parent: QModelIndex, logicalFirst: i32, logicalLast: i32) callconv(.c) void `
    ///
    pub fn OnSectionsInserted(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnSectionsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSectionsInserted` instead
    ///
    pub const QBaseSectionsInserted = SuperSectionsInserted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsInserted)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` logicalFirst: i32 `
    ///
    /// ` logicalLast: i32 `
    ///
    pub fn SuperSectionsInserted(self: QHeaderView, parent: anytype, logicalFirst: i32, logicalLast: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QHeaderView_SuperSectionsInserted(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(logicalFirst), @bitCast(logicalLast));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsAboutToBeRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` logicalFirst: i32 `
    ///
    /// ` logicalLast: i32 `
    ///
    pub fn SectionsAboutToBeRemoved(self: QHeaderView, parent: anytype, logicalFirst: i32, logicalLast: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QHeaderView_SectionsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(logicalFirst), @bitCast(logicalLast));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsAboutToBeRemoved)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, parent: QModelIndex, logicalFirst: i32, logicalLast: i32) callconv(.c) void `
    ///
    pub fn OnSectionsAboutToBeRemoved(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnSectionsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSectionsAboutToBeRemoved` instead
    ///
    pub const QBaseSectionsAboutToBeRemoved = SuperSectionsAboutToBeRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsAboutToBeRemoved)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` logicalFirst: i32 `
    ///
    /// ` logicalLast: i32 `
    ///
    pub fn SuperSectionsAboutToBeRemoved(self: QHeaderView, parent: anytype, logicalFirst: i32, logicalLast: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QHeaderView_SuperSectionsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(logicalFirst), @bitCast(logicalLast));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initialize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Initialize(self: QHeaderView) void {
        qtc.QHeaderView_Initialize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initialize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInitialize(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnInitialize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInitialize` instead
    ///
    pub const QBaseInitialize = SuperInitialize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initialize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SuperInitialize(self: QHeaderView) void {
        qtc.QHeaderView_SuperInitialize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn InitializeSections(self: QHeaderView) void {
        qtc.QHeaderView_InitializeSections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInitializeSections(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnInitializeSections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInitializeSections` instead
    ///
    pub const QBaseInitializeSections = SuperInitializeSections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SuperInitializeSections(self: QHeaderView) void {
        qtc.QHeaderView_SuperInitializeSections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn InitializeSections2(self: QHeaderView, start: i32, end: i32) void {
        qtc.QHeaderView_InitializeSections2(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, start: i32, end: i32) callconv(.c) void `
    ///
    pub fn OnInitializeSections2(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnInitializeSections2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInitializeSections2` instead
    ///
    pub const QBaseInitializeSections2 = SuperInitializeSections2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn SuperInitializeSections2(self: QHeaderView, start: i32, end: i32) void {
        qtc.QHeaderView_SuperInitializeSections2(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#currentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` current: QModelIndex `
    ///
    /// ` old: QModelIndex `
    ///
    pub fn CurrentChanged(self: QHeaderView, current: anytype, old: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(old)._is_QModelIndex;
        qtc.QHeaderView_CurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(old.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#currentChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, current: QModelIndex, old: QModelIndex) callconv(.c) void `
    ///
    pub fn OnCurrentChanged(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QHeaderView_OnCurrentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCurrentChanged` instead
    ///
    pub const QBaseCurrentChanged = SuperCurrentChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#currentChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` current: QModelIndex `
    ///
    /// ` old: QModelIndex `
    ///
    pub fn SuperCurrentChanged(self: QHeaderView, current: anytype, old: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(old)._is_QModelIndex;
        qtc.QHeaderView_SuperCurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(old.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QEvent `
    ///
    pub fn Event(self: QHeaderView, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QHeaderView_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QHeaderView, callback: *const fn (QHeaderView, QEvent) callconv(.c) bool) void {
        qtc.QHeaderView_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEvent(self: QHeaderView, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QHeaderView_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#paintEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn PaintEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QHeaderView_PaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#paintEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, e: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: QHeaderView, callback: *const fn (QHeaderView, QPaintEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#paintEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QHeaderView_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MousePressEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QHeaderView_MousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QHeaderView, callback: *const fn (QHeaderView, QMouseEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QHeaderView_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QHeaderView_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QHeaderView, callback: *const fn (QHeaderView, QMouseEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QHeaderView_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QHeaderView_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QHeaderView, callback: *const fn (QHeaderView, QMouseEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QHeaderView_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseDoubleClickEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QHeaderView_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseDoubleClickEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QHeaderView, callback: *const fn (QHeaderView, QMouseEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseDoubleClickEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QHeaderView_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#viewportEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QEvent `
    ///
    pub fn ViewportEvent(self: QHeaderView, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QHeaderView_ViewportEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#viewportEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnViewportEvent(self: QHeaderView, callback: *const fn (QHeaderView, QEvent) callconv(.c) bool) void {
        qtc.QHeaderView_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperViewportEvent` instead
    ///
    pub const QBaseViewportEvent = SuperViewportEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#viewportEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperViewportEvent(self: QHeaderView, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QHeaderView_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#paintSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn PaintSection(self: QHeaderView, painter: anytype, rect: anytype, logicalIndex: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QHeaderView_PaintSection(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#paintSection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, painter: QPainter, rect: QRect, logicalIndex: i32) callconv(.c) void `
    ///
    pub fn OnPaintSection(self: QHeaderView, callback: *const fn (QHeaderView, QPainter, QRect, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnPaintSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintSection` instead
    ///
    pub const QBasePaintSection = SuperPaintSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#paintSection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn SuperPaintSection(self: QHeaderView, painter: anytype, rect: anytype, logicalIndex: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QHeaderView_SuperPaintSection(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionSizeFromContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn SectionSizeFromContents(self: QHeaderView, logicalIndex: i32) QSize {
        return .{ .ptr = qtc.QHeaderView_SectionSizeFromContents(@ptrCast(self.ptr), @bitCast(logicalIndex)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionSizeFromContents)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, logicalIndex: i32) callconv(.c) QSize `
    ///
    pub fn OnSectionSizeFromContents(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) QSize) void {
        qtc.QHeaderView_OnSectionSizeFromContents(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSectionSizeFromContents` instead
    ///
    pub const QBaseSectionSizeFromContents = SuperSectionSizeFromContents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionSizeFromContents)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn SuperSectionSizeFromContents(self: QHeaderView, logicalIndex: i32) QSize {
        return .{ .ptr = qtc.QHeaderView_SuperSectionSizeFromContents(@ptrCast(self.ptr), @bitCast(logicalIndex)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#horizontalOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn HorizontalOffset(self: QHeaderView) i32 {
        return qtc.QHeaderView_HorizontalOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#horizontalOffset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnHorizontalOffset(self: QHeaderView, callback: *const fn () callconv(.c) i32) void {
        qtc.QHeaderView_OnHorizontalOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHorizontalOffset` instead
    ///
    pub const QBaseHorizontalOffset = SuperHorizontalOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#horizontalOffset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SuperHorizontalOffset(self: QHeaderView) i32 {
        return qtc.QHeaderView_SuperHorizontalOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#verticalOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn VerticalOffset(self: QHeaderView) i32 {
        return qtc.QHeaderView_VerticalOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#verticalOffset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnVerticalOffset(self: QHeaderView, callback: *const fn () callconv(.c) i32) void {
        qtc.QHeaderView_OnVerticalOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVerticalOffset` instead
    ///
    pub const QBaseVerticalOffset = SuperVerticalOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#verticalOffset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SuperVerticalOffset(self: QHeaderView) i32 {
        return qtc.QHeaderView_SuperVerticalOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#updateGeometries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn UpdateGeometries(self: QHeaderView) void {
        qtc.QHeaderView_UpdateGeometries(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#updateGeometries)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateGeometries(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnUpdateGeometries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateGeometries` instead
    ///
    pub const QBaseUpdateGeometries = SuperUpdateGeometries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#updateGeometries)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SuperUpdateGeometries(self: QHeaderView) void {
        qtc.QHeaderView_SuperUpdateGeometries(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#scrollContentsBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn ScrollContentsBy(self: QHeaderView, dx: i32, dy: i32) void {
        qtc.QHeaderView_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#scrollContentsBy)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn OnScrollContentsBy(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperScrollContentsBy` instead
    ///
    pub const QBaseScrollContentsBy = SuperScrollContentsBy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#scrollContentsBy)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollContentsBy(self: QHeaderView, dx: i32, dy: i32) void {
        qtc.QHeaderView_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn DataChanged(self: QHeaderView, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QHeaderView_DataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#dataChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, topLeft: QModelIndex, bottomRight: QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn OnDataChanged(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
        qtc.QHeaderView_OnDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDataChanged` instead
    ///
    pub const QBaseDataChanged = SuperDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#dataChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn SuperDataChanged(self: QHeaderView, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QHeaderView_SuperDataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#rowsInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn RowsInserted(self: QHeaderView, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QHeaderView_RowsInserted(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#rowsInserted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, parent: QModelIndex, start: i32, end: i32) callconv(.c) void `
    ///
    pub fn OnRowsInserted(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnRowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRowsInserted` instead
    ///
    pub const QBaseRowsInserted = SuperRowsInserted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#rowsInserted)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn SuperRowsInserted(self: QHeaderView, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QHeaderView_SuperRowsInserted(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn VisualRect(self: QHeaderView, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QHeaderView_VisualRect(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, index: QModelIndex) callconv(.c) QRect `
    ///
    pub fn OnVisualRect(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex) callconv(.c) QRect) void {
        qtc.QHeaderView_OnVisualRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVisualRect` instead
    ///
    pub const QBaseVisualRect = SuperVisualRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperVisualRect(self: QHeaderView, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QHeaderView_SuperVisualRect(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#scrollTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` hint: qabstractitemview_enums.ScrollHint `
    ///
    pub fn ScrollTo(self: QHeaderView, index: anytype, hint: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QHeaderView_ScrollTo(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(hint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#scrollTo)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, index: QModelIndex, hint: qabstractitemview_enums.ScrollHint) callconv(.c) void `
    ///
    pub fn OnScrollTo(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnScrollTo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperScrollTo` instead
    ///
    pub const QBaseScrollTo = SuperScrollTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#scrollTo)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` hint: qabstractitemview_enums.ScrollHint `
    ///
    pub fn SuperScrollTo(self: QHeaderView, index: anytype, hint: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QHeaderView_SuperScrollTo(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(hint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#indexAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` p: QPoint `
    ///
    pub fn IndexAt(self: QHeaderView, p: anytype) QModelIndex {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QHeaderView_IndexAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#indexAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, p: QPoint) callconv(.c) QModelIndex `
    ///
    pub fn OnIndexAt(self: QHeaderView, callback: *const fn (QHeaderView, QPoint) callconv(.c) QModelIndex) void {
        qtc.QHeaderView_OnIndexAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndexAt` instead
    ///
    pub const QBaseIndexAt = SuperIndexAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#indexAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` p: QPoint `
    ///
    pub fn SuperIndexAt(self: QHeaderView, p: anytype) QModelIndex {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QHeaderView_SuperIndexAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isIndexHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IsIndexHidden(self: QHeaderView, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QHeaderView_IsIndexHidden(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isIndexHidden)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnIsIndexHidden(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex) callconv(.c) bool) void {
        qtc.QHeaderView_OnIsIndexHidden(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsIndexHidden` instead
    ///
    pub const QBaseIsIndexHidden = SuperIsIndexHidden;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isIndexHidden)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperIsIndexHidden(self: QHeaderView, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QHeaderView_SuperIsIndexHidden(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#moveCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: qabstractitemview_enums.CursorAction `
    ///
    /// ` param2: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn MoveCursor(self: QHeaderView, param1: i32, param2: i32) QModelIndex {
        return .{ .ptr = qtc.QHeaderView_MoveCursor(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#moveCursor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, param1: qabstractitemview_enums.CursorAction, param2: flag of qnamespace_enums.KeyboardModifier) callconv(.c) QModelIndex `
    ///
    pub fn OnMoveCursor(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32) callconv(.c) QModelIndex) void {
        qtc.QHeaderView_OnMoveCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMoveCursor` instead
    ///
    pub const QBaseMoveCursor = SuperMoveCursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#moveCursor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: qabstractitemview_enums.CursorAction `
    ///
    /// ` param2: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SuperMoveCursor(self: QHeaderView, param1: i32, param2: i32) QModelIndex {
        return .{ .ptr = qtc.QHeaderView_SuperMoveCursor(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` rect: QRect `
    ///
    /// ` flags: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SetSelection(self: QHeaderView, rect: anytype, flags: i32) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QHeaderView_SetSelection(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSelection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, rect: QRect, flags: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void `
    ///
    pub fn OnSetSelection(self: QHeaderView, callback: *const fn (QHeaderView, QRect, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnSetSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSelection` instead
    ///
    pub const QBaseSetSelection = SuperSetSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSelection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` rect: QRect `
    ///
    /// ` flags: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SuperSetSelection(self: QHeaderView, rect: anytype, flags: i32) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QHeaderView_SuperSetSelection(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualRegionForSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn VisualRegionForSelection(self: QHeaderView, selection: anytype) QRegion {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.QHeaderView_VisualRegionForSelection(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualRegionForSelection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, selection: QItemSelection) callconv(.c) QRegion `
    ///
    pub fn OnVisualRegionForSelection(self: QHeaderView, callback: *const fn (QHeaderView, QItemSelection) callconv(.c) QRegion) void {
        qtc.QHeaderView_OnVisualRegionForSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVisualRegionForSelection` instead
    ///
    pub const QBaseVisualRegionForSelection = SuperVisualRegionForSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualRegionForSelection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn SuperVisualRegionForSelection(self: QHeaderView, selection: anytype) QRegion {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.QHeaderView_SuperVisualRegionForSelection(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initStyleOptionForIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` option: QStyleOptionHeader `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn InitStyleOptionForIndex(self: QHeaderView, option: anytype, logicalIndex: i32) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionHeader;
        qtc.QHeaderView_InitStyleOptionForIndex(@ptrCast(self.ptr), @ptrCast(option.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initStyleOptionForIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, option: QStyleOptionHeader, logicalIndex: i32) callconv(.c) void `
    ///
    pub fn OnInitStyleOptionForIndex(self: QHeaderView, callback: *const fn (QHeaderView, QStyleOptionHeader, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnInitStyleOptionForIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOptionForIndex` instead
    ///
    pub const QBaseInitStyleOptionForIndex = SuperInitStyleOptionForIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initStyleOptionForIndex)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` option: QStyleOptionHeader `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn SuperInitStyleOptionForIndex(self: QHeaderView, option: anytype, logicalIndex: i32) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionHeader;
        qtc.QHeaderView_SuperInitStyleOptionForIndex(@ptrCast(self.ptr), @ptrCast(option.ptr), @bitCast(logicalIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initStyleOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` option: QStyleOptionHeader `
    ///
    pub fn InitStyleOption(self: QHeaderView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionHeader;
        qtc.QHeaderView_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initStyleOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, option: QStyleOptionHeader) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: QHeaderView, callback: *const fn (QHeaderView, QStyleOptionHeader) callconv(.c) void) void {
        qtc.QHeaderView_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initStyleOption)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` option: QStyleOptionHeader `
    ///
    pub fn SuperInitStyleOption(self: QHeaderView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionHeader;
        qtc.QHeaderView_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qheaderview.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qheaderview.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Model(self: QHeaderView) QAbstractItemModel {
        return .{ .ptr = qtc.QAbstractItemView_Model(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SelectionModel(self: QHeaderView) QItemSelectionModel {
        return .{ .ptr = qtc.QAbstractItemView_SelectionModel(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn SetItemDelegate(self: QHeaderView, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ItemDelegate(self: QHeaderView) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegate(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` mode: qabstractitemview_enums.SelectionMode `
    ///
    pub fn SetSelectionMode(self: QHeaderView, mode: i32) void {
        qtc.QAbstractItemView_SetSelectionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.SelectionMode `
    ///
    pub fn SelectionMode(self: QHeaderView) i32 {
        return qtc.QAbstractItemView_SelectionMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` behavior: qabstractitemview_enums.SelectionBehavior `
    ///
    pub fn SetSelectionBehavior(self: QHeaderView, behavior: i32) void {
        qtc.QAbstractItemView_SetSelectionBehavior(@ptrCast(self.ptr), @bitCast(behavior));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.SelectionBehavior `
    ///
    pub fn SelectionBehavior(self: QHeaderView) i32 {
        return qtc.QAbstractItemView_SelectionBehavior(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn CurrentIndex(self: QHeaderView) QModelIndex {
        return .{ .ptr = qtc.QAbstractItemView_CurrentIndex(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn RootIndex(self: QHeaderView) QModelIndex {
        return .{ .ptr = qtc.QAbstractItemView_RootIndex(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` triggers: flag of qabstractitemview_enums.EditTrigger `
    ///
    pub fn SetEditTriggers(self: QHeaderView, triggers: i32) void {
        qtc.QAbstractItemView_SetEditTriggers(@ptrCast(self.ptr), @bitCast(triggers));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractitemview_enums.EditTrigger `
    ///
    pub fn EditTriggers(self: QHeaderView) i32 {
        return qtc.QAbstractItemView_EditTriggers(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` mode: qabstractitemview_enums.ScrollMode `
    ///
    pub fn SetVerticalScrollMode(self: QHeaderView, mode: i32) void {
        qtc.QAbstractItemView_SetVerticalScrollMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.ScrollMode `
    ///
    pub fn VerticalScrollMode(self: QHeaderView) i32 {
        return qtc.QAbstractItemView_VerticalScrollMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ResetVerticalScrollMode(self: QHeaderView) void {
        qtc.QAbstractItemView_ResetVerticalScrollMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` mode: qabstractitemview_enums.ScrollMode `
    ///
    pub fn SetHorizontalScrollMode(self: QHeaderView, mode: i32) void {
        qtc.QAbstractItemView_SetHorizontalScrollMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.ScrollMode `
    ///
    pub fn HorizontalScrollMode(self: QHeaderView) i32 {
        return qtc.QAbstractItemView_HorizontalScrollMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ResetHorizontalScrollMode(self: QHeaderView) void {
        qtc.QAbstractItemView_ResetHorizontalScrollMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAutoScroll(self: QHeaderView, enable: bool) void {
        qtc.QAbstractItemView_SetAutoScroll(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn HasAutoScroll(self: QHeaderView) bool {
        return qtc.QAbstractItemView_HasAutoScroll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` margin: i32 `
    ///
    pub fn SetAutoScrollMargin(self: QHeaderView, margin: i32) void {
        qtc.QAbstractItemView_SetAutoScrollMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn AutoScrollMargin(self: QHeaderView) i32 {
        return qtc.QAbstractItemView_AutoScrollMargin(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabKeyNavigation(self: QHeaderView, enable: bool) void {
        qtc.QAbstractItemView_SetTabKeyNavigation(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn TabKeyNavigation(self: QHeaderView) bool {
        return qtc.QAbstractItemView_TabKeyNavigation(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetDropIndicatorShown(self: QHeaderView, enable: bool) void {
        qtc.QAbstractItemView_SetDropIndicatorShown(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ShowDropIndicator(self: QHeaderView) bool {
        return qtc.QAbstractItemView_ShowDropIndicator(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetDragEnabled(self: QHeaderView, enable: bool) void {
        qtc.QAbstractItemView_SetDragEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn DragEnabled(self: QHeaderView) bool {
        return qtc.QAbstractItemView_DragEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` overwrite: bool `
    ///
    pub fn SetDragDropOverwriteMode(self: QHeaderView, overwrite: bool) void {
        qtc.QAbstractItemView_SetDragDropOverwriteMode(@ptrCast(self.ptr), overwrite);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn DragDropOverwriteMode(self: QHeaderView) bool {
        return qtc.QAbstractItemView_DragDropOverwriteMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` behavior: qabstractitemview_enums.DragDropMode `
    ///
    pub fn SetDragDropMode(self: QHeaderView, behavior: i32) void {
        qtc.QAbstractItemView_SetDragDropMode(@ptrCast(self.ptr), @bitCast(behavior));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DragDropMode `
    ///
    pub fn DragDropMode(self: QHeaderView) i32 {
        return qtc.QAbstractItemView_DragDropMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` dropAction: qnamespace_enums.DropAction `
    ///
    pub fn SetDefaultDropAction(self: QHeaderView, dropAction: i32) void {
        qtc.QAbstractItemView_SetDefaultDropAction(@ptrCast(self.ptr), @bitCast(dropAction));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn DefaultDropAction(self: QHeaderView) i32 {
        return qtc.QAbstractItemView_DefaultDropAction(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAlternatingRowColors(self: QHeaderView, enable: bool) void {
        qtc.QAbstractItemView_SetAlternatingRowColors(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn AlternatingRowColors(self: QHeaderView) bool {
        return qtc.QAbstractItemView_AlternatingRowColors(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` size: QSize `
    ///
    pub fn SetIconSize(self: QHeaderView, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QAbstractItemView_SetIconSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IconSize(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QAbstractItemView_IconSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` mode: qnamespace_enums.TextElideMode `
    ///
    pub fn SetTextElideMode(self: QHeaderView, mode: i32) void {
        qtc.QAbstractItemView_SetTextElideMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TextElideMode `
    ///
    pub fn TextElideMode(self: QHeaderView) i32 {
        return qtc.QAbstractItemView_TextElideMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SizeHintForIndex(self: QHeaderView, index: anytype) QSize {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_SizeHintForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn OpenPersistentEditor(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_OpenPersistentEditor(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ClosePersistentEditor(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_ClosePersistentEditor(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IsPersistentEditorOpen(self: QHeaderView, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QAbstractItemView_IsPersistentEditorOpen(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetIndexWidget(self: QHeaderView, index: anytype, widget: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IndexWidget(self: QHeaderView, index: anytype) QWidget {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_IndexWidget(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` row: i32 `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn SetItemDelegateForRow(self: QHeaderView, row: i32, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegateForRow(@ptrCast(self.ptr), @bitCast(row), @ptrCast(delegate.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` row: i32 `
    ///
    pub fn ItemDelegateForRow(self: QHeaderView, row: i32) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegateForRow(@ptrCast(self.ptr), @bitCast(row)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` column: i32 `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn SetItemDelegateForColumn(self: QHeaderView, column: i32, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegateForColumn(@ptrCast(self.ptr), @bitCast(column), @ptrCast(delegate.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` column: i32 `
    ///
    pub fn ItemDelegateForColumn(self: QHeaderView, column: i32) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegateForColumn(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ItemDelegate2(self: QHeaderView, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegate2(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Edit(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Edit(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ClearSelection(self: QHeaderView) void {
        qtc.QAbstractItemView_ClearSelection(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetCurrentIndex(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_SetCurrentIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ScrollToTop(self: QHeaderView) void {
        qtc.QAbstractItemView_ScrollToTop(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ScrollToBottom(self: QHeaderView) void {
        qtc.QAbstractItemView_ScrollToBottom(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Update(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Update(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Pressed(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Pressed(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnPressed(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Clicked(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Clicked(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnClicked(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn DoubleClicked(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_DoubleClicked(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Activated(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Activated(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnActivated(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Activated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Entered(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Entered(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnEntered(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Entered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ViewportEntered(self: QHeaderView) void {
        qtc.QAbstractItemView_ViewportEntered(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView) callconv(.c) void `
    ///
    pub fn OnViewportEntered(self: QHeaderView, callback: *const fn (QHeaderView) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_ViewportEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` size: QSize `
    ///
    pub fn IconSizeChanged(self: QHeaderView, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QAbstractItemView_IconSizeChanged(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, size: QSize) callconv(.c) void `
    ///
    pub fn OnIconSizeChanged(self: QHeaderView, callback: *const fn (QHeaderView, QSize) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_IconSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn VerticalScrollBarPolicy(self: QHeaderView) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetVerticalScrollBarPolicy(self: QHeaderView, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn VerticalScrollBar(self: QHeaderView) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetVerticalScrollBar(self: QHeaderView, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn HorizontalScrollBarPolicy(self: QHeaderView) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetHorizontalScrollBarPolicy(self: QHeaderView, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn HorizontalScrollBar(self: QHeaderView) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetHorizontalScrollBar(self: QHeaderView, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn CornerWidget(self: QHeaderView) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetCornerWidget(self: QHeaderView, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` widget: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddScrollBarWidget(self: QHeaderView, widget: anytype, alignment: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn ScrollBarWidgets(self: QHeaderView, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("qheaderview.ScrollBarWidgets: Memory allocation failed");
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
    /// ` self: QHeaderView `
    ///
    pub fn Viewport(self: QHeaderView) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_Viewport(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetViewport(self: QHeaderView, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn MaximumViewportSize(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SizeAdjustPolicy(self: QHeaderView) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SetSizeAdjustPolicy(self: QHeaderView, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn FrameStyle(self: QHeaderView) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` frameStyle: i32 `
    ///
    pub fn SetFrameStyle(self: QHeaderView, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self.ptr), @bitCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn FrameWidth(self: QHeaderView) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn FrameShape(self: QHeaderView) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` frameShape: qframe_enums.Shape `
    ///
    pub fn SetFrameShape(self: QHeaderView, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self.ptr), @bitCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn FrameShadow(self: QHeaderView) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` frameShadow: qframe_enums.Shadow `
    ///
    pub fn SetFrameShadow(self: QHeaderView, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self.ptr), @bitCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn LineWidth(self: QHeaderView) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: QHeaderView, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self.ptr), @bitCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn MidLineWidth(self: QHeaderView) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: QHeaderView, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn FrameRect(self: QHeaderView) QRect {
        return .{ .ptr = qtc.QFrame_FrameRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` frameRect: QRect `
    ///
    pub fn SetFrameRect(self: QHeaderView, frameRect: anytype) void {
        comptime _ = @TypeOf(frameRect)._is_QRect;
        qtc.QFrame_SetFrameRect(@ptrCast(self.ptr), @ptrCast(frameRect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn WinId(self: QHeaderView) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn CreateWinId(self: QHeaderView) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn InternalWinId(self: QHeaderView) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn EffectiveWinId(self: QHeaderView) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Style(self: QHeaderView) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QHeaderView, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsTopLevel(self: QHeaderView) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsWindow(self: QHeaderView) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsModal(self: QHeaderView) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: QHeaderView) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: QHeaderView, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsEnabled(self: QHeaderView) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: QHeaderView, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QHeaderView, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: QHeaderView, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: QHeaderView, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn FrameGeometry(self: QHeaderView) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Geometry(self: QHeaderView) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn NormalGeometry(self: QHeaderView) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn X(self: QHeaderView) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Y(self: QHeaderView) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Pos(self: QHeaderView) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn FrameSize(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Size(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Width(self: QHeaderView) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Height(self: QHeaderView) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Rect(self: QHeaderView) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ChildrenRect(self: QHeaderView) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ChildrenRegion(self: QHeaderView) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn MinimumSize(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn MaximumSize(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn MinimumWidth(self: QHeaderView) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn MinimumHeight(self: QHeaderView) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn MaximumWidth(self: QHeaderView) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn MaximumHeight(self: QHeaderView) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: QHeaderView, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: QHeaderView, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: QHeaderView, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: QHeaderView, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: QHeaderView, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: QHeaderView, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: QHeaderView, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: QHeaderView, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SizeIncrement(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: QHeaderView, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: QHeaderView, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn BaseSize(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: QHeaderView, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: QHeaderView, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: QHeaderView, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: QHeaderView, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: QHeaderView, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: QHeaderView, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: QHeaderView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: QHeaderView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: QHeaderView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: QHeaderView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: QHeaderView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: QHeaderView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: QHeaderView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: QHeaderView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: QHeaderView, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: QHeaderView, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: QHeaderView, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: QHeaderView, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QHeaderView `
    ///
    pub fn Window(self: QHeaderView) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn NativeParentWidget(self: QHeaderView) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn TopLevelWidget(self: QHeaderView) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Palette(self: QHeaderView) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QHeaderView, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: QHeaderView, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: QHeaderView) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: QHeaderView, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: QHeaderView) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Font(self: QHeaderView) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QHeaderView, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn FontMetrics(self: QHeaderView) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn FontInfo(self: QHeaderView) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Cursor(self: QHeaderView) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QHeaderView, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn UnsetCursor(self: QHeaderView) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: QHeaderView, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn HasMouseTracking(self: QHeaderView) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn UnderMouse(self: QHeaderView) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: QHeaderView, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn HasTabletTracking(self: QHeaderView) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QHeaderView, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: QHeaderView, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Mask(self: QHeaderView) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ClearMask(self: QHeaderView) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: QHeaderView, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: QHeaderView, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Grab(self: QHeaderView) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn GraphicsEffect(self: QHeaderView) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: QHeaderView, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: QHeaderView, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: QHeaderView, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: QHeaderView, windowTitle: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: QHeaderView, styleSheet: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qheaderview.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qheaderview.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: QHeaderView, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn WindowIcon(self: QHeaderView) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: QHeaderView, windowIconText: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qheaderview.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: QHeaderView, windowRole: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qheaderview.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: QHeaderView, filePath: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qheaderview.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: QHeaderView, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn WindowOpacity(self: QHeaderView) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsWindowModified(self: QHeaderView) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QHeaderView, toolTip: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qheaderview.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: QHeaderView, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ToolTipDuration(self: QHeaderView) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QHeaderView, statusTip: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qheaderview.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QHeaderView, whatsThis: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qheaderview.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qheaderview.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: QHeaderView, name: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qheaderview.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: QHeaderView, description: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QHeaderView, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QHeaderView) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn UnsetLayoutDirection(self: QHeaderView) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QHeaderView, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Locale(self: QHeaderView) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn UnsetLocale(self: QHeaderView) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsRightToLeft(self: QHeaderView) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsLeftToRight(self: QHeaderView) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SetFocus(self: QHeaderView) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsActiveWindow(self: QHeaderView) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ActivateWindow(self: QHeaderView) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ClearFocus(self: QHeaderView) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: QHeaderView, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: QHeaderView) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: QHeaderView, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn HasFocus(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: QHeaderView, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn FocusProxy(self: QHeaderView) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: QHeaderView) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: QHeaderView, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn GrabMouse(self: QHeaderView) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ReleaseMouse(self: QHeaderView) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn GrabKeyboard(self: QHeaderView) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ReleaseKeyboard(self: QHeaderView) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: QHeaderView, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: QHeaderView, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: QHeaderView, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: QHeaderView, id: i32) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn UpdatesEnabled(self: QHeaderView) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: QHeaderView, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn GraphicsProxyWidget(self: QHeaderView) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Repaint(self: QHeaderView) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: QHeaderView, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: QHeaderView, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: QHeaderView, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Show(self: QHeaderView) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Hide(self: QHeaderView) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ShowMinimized(self: QHeaderView) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ShowMaximized(self: QHeaderView) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ShowFullScreen(self: QHeaderView) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ShowNormal(self: QHeaderView) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Close(self: QHeaderView) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Raise(self: QHeaderView) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Lower(self: QHeaderView) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: QHeaderView, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: QHeaderView, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: QHeaderView, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: QHeaderView, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: QHeaderView, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qheaderview.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: QHeaderView, geometry: []u8) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn AdjustSize(self: QHeaderView) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsVisible(self: QHeaderView) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: QHeaderView, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsHidden(self: QHeaderView) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsMinimized(self: QHeaderView) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsMaximized(self: QHeaderView) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsFullScreen(self: QHeaderView) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: QHeaderView) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: QHeaderView, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: QHeaderView, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SizePolicy(self: QHeaderView) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QHeaderView, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QHeaderView, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn VisibleRegion(self: QHeaderView) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: QHeaderView, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: QHeaderView, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ContentsMargins(self: QHeaderView) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ContentsRect(self: QHeaderView) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Layout(self: QHeaderView) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: QHeaderView, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn UpdateGeometry(self: QHeaderView) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: QHeaderView, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: QHeaderView, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: QHeaderView, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: QHeaderView, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn FocusWidget(self: QHeaderView) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn NextInFocusChain(self: QHeaderView) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn PreviousInFocusChain(self: QHeaderView) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn AcceptDrops(self: QHeaderView) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: QHeaderView, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: QHeaderView, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QHeaderView, actions: []QAction) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QHeaderView, before: anytype, actions: []QAction) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: QHeaderView, before: anytype, action: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: QHeaderView, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: QHeaderView, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qheaderview.Actions: Memory allocation failed");
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
    /// ` self: QHeaderView `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: QHeaderView, text: []const u8) QAction {
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
    /// ` self: QHeaderView `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: QHeaderView, icon: anytype, text: []const u8) QAction {
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
    /// ` self: QHeaderView `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: QHeaderView, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QHeaderView `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: QHeaderView, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QHeaderView `
    ///
    pub fn ParentWidget(self: QHeaderView) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: QHeaderView, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: QHeaderView) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: QHeaderView, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: QHeaderView, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: QHeaderView, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: QHeaderView, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: QHeaderView, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: QHeaderView, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: QHeaderView, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn EnsurePolished(self: QHeaderView) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: QHeaderView, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn AutoFillBackground(self: QHeaderView) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: QHeaderView, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn BackingStore(self: QHeaderView) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn WindowHandle(self: QHeaderView) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Screen(self: QHeaderView) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: QHeaderView, screen: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: QHeaderView, title: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: QHeaderView, callback: *const fn (QHeaderView, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: QHeaderView, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: QHeaderView, callback: *const fn (QHeaderView, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: QHeaderView, iconText: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: QHeaderView, callback: *const fn (QHeaderView, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: QHeaderView, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: QHeaderView, callback: *const fn (QHeaderView, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: QHeaderView) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: QHeaderView, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: QHeaderView, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: QHeaderView, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: QHeaderView, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: QHeaderView, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: QHeaderView, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: QHeaderView, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: QHeaderView, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QHeaderView, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: QHeaderView, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: QHeaderView, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: QHeaderView, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: QHeaderView, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: QHeaderView, param1: i32, on: bool) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qheaderview.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QHeaderView, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsWidgetType(self: QHeaderView) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsWindowType(self: QHeaderView) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn IsQuickItemType(self: QHeaderView) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SignalsBlocked(self: QHeaderView) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QHeaderView, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Thread(self: QHeaderView) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QHeaderView, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QHeaderView, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QHeaderView, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QHeaderView, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QHeaderView, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QHeaderView, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qheaderview.Children: Memory allocation failed");
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
    /// ` self: QHeaderView `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QHeaderView, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QHeaderView, obj: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QHeaderView, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QHeaderView `
    ///
    pub fn Disconnect3(self: QHeaderView) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QHeaderView, receiver: anytype) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn DumpObjectTree(self: QHeaderView) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn DumpObjectInfo(self: QHeaderView) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QHeaderView, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QHeaderView, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QHeaderView, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qheaderview.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qheaderview.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QHeaderView `
    ///
    pub fn BindingStorage(self: QHeaderView) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn BindingStorage2(self: QHeaderView) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Destroyed(self: QHeaderView) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QHeaderView, callback: *const fn (QHeaderView) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Parent(self: QHeaderView) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QHeaderView, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn DeleteLater(self: QHeaderView) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QHeaderView, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QHeaderView, time: i64, timerType: i32) i32 {
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
    /// ` self: QHeaderView `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QHeaderView, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QHeaderView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QHeaderView, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QHeaderView, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QHeaderView, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QHeaderView, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QHeaderView, callback: *const fn (QHeaderView, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn PaintingActive(self: QHeaderView) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn WidthMM(self: QHeaderView) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn HeightMM(self: QHeaderView) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn LogicalDpiX(self: QHeaderView) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn LogicalDpiY(self: QHeaderView) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn PhysicalDpiX(self: QHeaderView) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn PhysicalDpiY(self: QHeaderView) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn DevicePixelRatio(self: QHeaderView) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn DevicePixelRatioF(self: QHeaderView) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ColorCount(self: QHeaderView) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Depth(self: QHeaderView) i32 {
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

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` selectionModel: QItemSelectionModel `
    ///
    pub fn SetSelectionModel(self: QHeaderView, selectionModel: anytype) void {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        qtc.QHeaderView_SetSelectionModel(@ptrCast(self.ptr), @ptrCast(selectionModel.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` selectionModel: QItemSelectionModel `
    ///
    pub fn SuperSetSelectionModel(self: QHeaderView, selectionModel: anytype) void {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        qtc.QHeaderView_SuperSetSelectionModel(@ptrCast(self.ptr), @ptrCast(selectionModel.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, selectionModel: QItemSelectionModel) callconv(.c) void `
    ///
    pub fn OnSetSelectionModel(self: QHeaderView, callback: *const fn (QHeaderView, QItemSelectionModel) callconv(.c) void) void {
        qtc.QHeaderView_OnSetSelectionModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` search: []const u8 `
    ///
    pub fn KeyboardSearch(self: QHeaderView, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QHeaderView_KeyboardSearch(@ptrCast(self.ptr), search_str);
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
    /// ` self: QHeaderView `
    ///
    /// ` search: []const u8 `
    ///
    pub fn SuperKeyboardSearch(self: QHeaderView, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QHeaderView_SuperKeyboardSearch(@ptrCast(self.ptr), search_str);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, search: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnKeyboardSearch(self: QHeaderView, callback: *const fn (QHeaderView, [*:0]const u8) callconv(.c) void) void {
        qtc.QHeaderView_OnKeyboardSearch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` row: i32 `
    ///
    pub fn SizeHintForRow(self: QHeaderView, row: i32) i32 {
        return qtc.QHeaderView_SizeHintForRow(@ptrCast(self.ptr), @bitCast(row));
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
    /// ` self: QHeaderView `
    ///
    /// ` row: i32 `
    ///
    pub fn SuperSizeHintForRow(self: QHeaderView, row: i32) i32 {
        return qtc.QHeaderView_SuperSizeHintForRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, row: i32) callconv(.c) i32 `
    ///
    pub fn OnSizeHintForRow(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) i32) void {
        qtc.QHeaderView_OnSizeHintForRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` column: i32 `
    ///
    pub fn SizeHintForColumn(self: QHeaderView, column: i32) i32 {
        return qtc.QHeaderView_SizeHintForColumn(@ptrCast(self.ptr), @bitCast(column));
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
    /// ` self: QHeaderView `
    ///
    /// ` column: i32 `
    ///
    pub fn SuperSizeHintForColumn(self: QHeaderView, column: i32) i32 {
        return qtc.QHeaderView_SuperSizeHintForColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, column: i32) callconv(.c) i32 `
    ///
    pub fn OnSizeHintForColumn(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) i32) void {
        qtc.QHeaderView_OnSizeHintForColumn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ItemDelegateForIndex(self: QHeaderView, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QHeaderView_ItemDelegateForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
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
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperItemDelegateForIndex(self: QHeaderView, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QHeaderView_SuperItemDelegateForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, index: QModelIndex) callconv(.c) QAbstractItemDelegate `
    ///
    pub fn OnItemDelegateForIndex(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex) callconv(.c) QAbstractItemDelegate) void {
        qtc.QHeaderView_OnItemDelegateForIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QHeaderView, query: i32) QVariant {
        return .{ .ptr = qtc.QHeaderView_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
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
    /// ` self: QHeaderView `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QHeaderView, query: i32) QVariant {
        return .{ .ptr = qtc.QHeaderView_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) QVariant) void {
        qtc.QHeaderView_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetRootIndex(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QHeaderView_SetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetRootIndex` instead
    ///
    pub const QBaseSetRootIndex = SuperSetRootIndex;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSetRootIndex(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QHeaderView_SuperSetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnSetRootIndex(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex) callconv(.c) void) void {
        qtc.QHeaderView_OnSetRootIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SelectAll(self: QHeaderView) void {
        qtc.QHeaderView_SelectAll(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperSelectAll(self: QHeaderView) void {
        qtc.QHeaderView_SuperSelectAll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSelectAll(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnSelectAll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn RowsAboutToBeRemoved(self: QHeaderView, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QHeaderView_RowsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `SuperRowsAboutToBeRemoved` instead
    ///
    pub const QBaseRowsAboutToBeRemoved = SuperRowsAboutToBeRemoved;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn SuperRowsAboutToBeRemoved(self: QHeaderView, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QHeaderView_SuperRowsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, parent: QModelIndex, start: i32, end: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeRemoved(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnRowsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` selected: QItemSelection `
    ///
    /// ` deselected: QItemSelection `
    ///
    pub fn SelectionChanged(self: QHeaderView, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.QHeaderView_SelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// ### DEPRECATED: Use `SuperSelectionChanged` instead
    ///
    pub const QBaseSelectionChanged = SuperSelectionChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` selected: QItemSelection `
    ///
    /// ` deselected: QItemSelection `
    ///
    pub fn SuperSelectionChanged(self: QHeaderView, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.QHeaderView_SuperSelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, selected: QItemSelection, deselected: QItemSelection) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: QHeaderView, callback: *const fn (QHeaderView, QItemSelection, QItemSelection) callconv(.c) void) void {
        qtc.QHeaderView_OnSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn UpdateEditorData(self: QHeaderView) void {
        qtc.QHeaderView_UpdateEditorData(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperUpdateEditorData(self: QHeaderView) void {
        qtc.QHeaderView_SuperUpdateEditorData(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateEditorData(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnUpdateEditorData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn UpdateEditorGeometries(self: QHeaderView) void {
        qtc.QHeaderView_UpdateEditorGeometries(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperUpdateEditorGeometries(self: QHeaderView) void {
        qtc.QHeaderView_SuperUpdateEditorGeometries(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateEditorGeometries(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnUpdateEditorGeometries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` action: i32 `
    ///
    pub fn VerticalScrollbarAction(self: QHeaderView, action: i32) void {
        qtc.QHeaderView_VerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
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
    /// ` self: QHeaderView `
    ///
    /// ` action: i32 `
    ///
    pub fn SuperVerticalScrollbarAction(self: QHeaderView, action: i32) void {
        qtc.QHeaderView_SuperVerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, action: i32) callconv(.c) void `
    ///
    pub fn OnVerticalScrollbarAction(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnVerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` action: i32 `
    ///
    pub fn HorizontalScrollbarAction(self: QHeaderView, action: i32) void {
        qtc.QHeaderView_HorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
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
    /// ` self: QHeaderView `
    ///
    /// ` action: i32 `
    ///
    pub fn SuperHorizontalScrollbarAction(self: QHeaderView, action: i32) void {
        qtc.QHeaderView_SuperHorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, action: i32) callconv(.c) void `
    ///
    pub fn OnHorizontalScrollbarAction(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnHorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` value: i32 `
    ///
    pub fn VerticalScrollbarValueChanged(self: QHeaderView, value: i32) void {
        qtc.QHeaderView_VerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
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
    /// ` self: QHeaderView `
    ///
    /// ` value: i32 `
    ///
    pub fn SuperVerticalScrollbarValueChanged(self: QHeaderView, value: i32) void {
        qtc.QHeaderView_SuperVerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, value: i32) callconv(.c) void `
    ///
    pub fn OnVerticalScrollbarValueChanged(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnVerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` value: i32 `
    ///
    pub fn HorizontalScrollbarValueChanged(self: QHeaderView, value: i32) void {
        qtc.QHeaderView_HorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
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
    /// ` self: QHeaderView `
    ///
    /// ` value: i32 `
    ///
    pub fn SuperHorizontalScrollbarValueChanged(self: QHeaderView, value: i32) void {
        qtc.QHeaderView_SuperHorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, value: i32) callconv(.c) void `
    ///
    pub fn OnHorizontalScrollbarValueChanged(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnHorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` editor: QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn CloseEditor(self: QHeaderView, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QHeaderView_CloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
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
    /// ` self: QHeaderView `
    ///
    /// ` editor: QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn SuperCloseEditor(self: QHeaderView, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QHeaderView_SuperCloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, editor: QWidget, hint: qabstractitemdelegate_enums.EndEditHint) callconv(.c) void `
    ///
    pub fn OnCloseEditor(self: QHeaderView, callback: *const fn (QHeaderView, QWidget, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnCloseEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` editor: QWidget `
    ///
    pub fn CommitData(self: QHeaderView, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QHeaderView_CommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` editor: QWidget `
    ///
    pub fn SuperCommitData(self: QHeaderView, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QHeaderView_SuperCommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, editor: QWidget) callconv(.c) void `
    ///
    pub fn OnCommitData(self: QHeaderView, callback: *const fn (QHeaderView, QWidget) callconv(.c) void) void {
        qtc.QHeaderView_OnCommitData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` editor: QObject `
    ///
    pub fn EditorDestroyed(self: QHeaderView, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QObject;
        qtc.QHeaderView_EditorDestroyed(@ptrCast(self.ptr), @ptrCast(editor.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` editor: QObject `
    ///
    pub fn SuperEditorDestroyed(self: QHeaderView, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QObject;
        qtc.QHeaderView_SuperEditorDestroyed(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, editor: QObject) callconv(.c) void `
    ///
    pub fn OnEditorDestroyed(self: QHeaderView, callback: *const fn (QHeaderView, QObject) callconv(.c) void) void {
        qtc.QHeaderView_OnEditorDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedIndexes(self: QHeaderView, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QHeaderView_SelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("qheaderview.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperSelectedIndexes` instead
    ///
    pub const QBaseSelectedIndexes = SuperSelectedIndexes;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperSelectedIndexes(self: QHeaderView, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QHeaderView_SuperSelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("qheaderview.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn OnSelectedIndexes(self: QHeaderView, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QHeaderView_OnSelectedIndexes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` trigger: qabstractitemview_enums.EditTrigger `
    ///
    /// ` event: QEvent `
    ///
    pub fn Edit2(self: QHeaderView, index: anytype, trigger: i32, event: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHeaderView_Edit2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(trigger), @ptrCast(event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` trigger: qabstractitemview_enums.EditTrigger `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEdit2(self: QHeaderView, index: anytype, trigger: i32, event: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHeaderView_SuperEdit2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(trigger), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, index: QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEdit2(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex, i32, QEvent) callconv(.c) bool) void {
        qtc.QHeaderView_OnEdit2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SelectionCommand(self: QHeaderView, index: anytype, event: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHeaderView_SelectionCommand(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SuperSelectionCommand(self: QHeaderView, index: anytype, event: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHeaderView_SuperSelectionCommand(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, index: QModelIndex, event: QEvent) callconv(.c) i32 `
    ///
    pub fn OnSelectionCommand(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex, QEvent) callconv(.c) i32) void {
        qtc.QHeaderView_OnSelectionCommand(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` supportedActions: flag of qnamespace_enums.DropAction `
    ///
    pub fn StartDrag(self: QHeaderView, supportedActions: i32) void {
        qtc.QHeaderView_StartDrag(@ptrCast(self.ptr), @bitCast(supportedActions));
    }

    /// ### DEPRECATED: Use `SuperStartDrag` instead
    ///
    pub const QBaseStartDrag = SuperStartDrag;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` supportedActions: flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperStartDrag(self: QHeaderView, supportedActions: i32) void {
        qtc.QHeaderView_SuperStartDrag(@ptrCast(self.ptr), @bitCast(supportedActions));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, supportedActions: flag of qnamespace_enums.DropAction) callconv(.c) void `
    ///
    pub fn OnStartDrag(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnStartDrag(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    pub fn InitViewItemOption(self: QHeaderView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        qtc.QHeaderView_InitViewItemOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitViewItemOption` instead
    ///
    pub const QBaseInitViewItemOption = SuperInitViewItemOption;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    pub fn SuperInitViewItemOption(self: QHeaderView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        qtc.QHeaderView_SuperInitViewItemOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, option: QStyleOptionViewItem) callconv(.c) void `
    ///
    pub fn OnInitViewItemOption(self: QHeaderView, callback: *const fn (QHeaderView, QStyleOptionViewItem) callconv(.c) void) void {
        qtc.QHeaderView_OnInitViewItemOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: QHeaderView, next: bool) bool {
        return qtc.QHeaderView_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: QHeaderView `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: QHeaderView, next: bool) bool {
        return qtc.QHeaderView_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: QHeaderView, callback: *const fn (QHeaderView, bool) callconv(.c) bool) void {
        qtc.QHeaderView_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QHeaderView_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QHeaderView_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: QHeaderView, callback: *const fn (QHeaderView, QDragEnterEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QHeaderView_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QHeaderView_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: QHeaderView, callback: *const fn (QHeaderView, QDragMoveEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QHeaderView_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QHeaderView_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: QHeaderView, callback: *const fn (QHeaderView, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QHeaderView_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QHeaderView_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: QHeaderView, callback: *const fn (QHeaderView, QDropEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QHeaderView_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QHeaderView_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QHeaderView, callback: *const fn (QHeaderView, QFocusEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QHeaderView_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QHeaderView_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QHeaderView, callback: *const fn (QHeaderView, QFocusEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QHeaderView_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QHeaderView_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QHeaderView, callback: *const fn (QHeaderView, QKeyEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QHeaderView_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QHeaderView_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: QHeaderView, callback: *const fn (QHeaderView, QResizeEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QHeaderView_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QHeaderView_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QHeaderView, callback: *const fn (QHeaderView, QTimerEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QHeaderView_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QHeaderView_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: QHeaderView, callback: *const fn (QHeaderView, QInputMethodEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` object: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QHeaderView, object: anytype, event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHeaderView_EventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` object: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QHeaderView, object: anytype, event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHeaderView_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, object: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QHeaderView, callback: *const fn (QHeaderView, QObject, QEvent) callconv(.c) bool) void {
        qtc.QHeaderView_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ViewportSizeHint(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QHeaderView_ViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperViewportSizeHint` instead
    ///
    pub const QBaseViewportSizeHint = SuperViewportSizeHint;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SuperViewportSizeHint(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QHeaderView_SuperViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnViewportSizeHint(self: QHeaderView, callback: *const fn () callconv(.c) QSize) void {
        qtc.QHeaderView_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn MinimumSizeHint(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QHeaderView_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperMinimumSizeHint(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QHeaderView_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: QHeaderView, callback: *const fn () callconv(.c) QSize) void {
        qtc.QHeaderView_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SetupViewport(self: QHeaderView, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.QHeaderView_SetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SuperSetupViewport(self: QHeaderView, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.QHeaderView_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, viewport: QWidget) callconv(.c) void `
    ///
    pub fn OnSetupViewport(self: QHeaderView, callback: *const fn (QHeaderView, QWidget) callconv(.c) void) void {
        qtc.QHeaderView_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn WheelEvent(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QHeaderView_WheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QHeaderView_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, param1: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QHeaderView, callback: *const fn (QHeaderView, QWheelEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QHeaderView_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QHeaderView_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, param1: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: QHeaderView, callback: *const fn (QHeaderView, QContextMenuEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QHeaderView_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QHeaderView_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: QHeaderView, callback: *const fn (QHeaderView, QEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn DevType(self: QHeaderView) i32 {
        return qtc.QHeaderView_DevType(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperDevType(self: QHeaderView) i32 {
        return qtc.QHeaderView_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QHeaderView, callback: *const fn () callconv(.c) i32) void {
        qtc.QHeaderView_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QHeaderView, param1: i32) i32 {
        return qtc.QHeaderView_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QHeaderView, param1: i32) i32 {
        return qtc.QHeaderView_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) i32) void {
        qtc.QHeaderView_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn HasHeightForWidth(self: QHeaderView) bool {
        return qtc.QHeaderView_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperHasHeightForWidth(self: QHeaderView) bool {
        return qtc.QHeaderView_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QHeaderView, callback: *const fn () callconv(.c) bool) void {
        qtc.QHeaderView_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn PaintEngine(self: QHeaderView) QPaintEngine {
        return .{ .ptr = qtc.QHeaderView_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperPaintEngine(self: QHeaderView) QPaintEngine {
        return .{ .ptr = qtc.QHeaderView_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QHeaderView, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QHeaderView_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QHeaderView_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QHeaderView_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QHeaderView, callback: *const fn (QHeaderView, QKeyEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QHeaderView_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QHeaderView_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: QHeaderView, callback: *const fn (QHeaderView, QEnterEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QHeaderView_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QHeaderView_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: QHeaderView, callback: *const fn (QHeaderView, QEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QHeaderView_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QHeaderView_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: QHeaderView, callback: *const fn (QHeaderView, QMoveEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QHeaderView_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QHeaderView_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: QHeaderView, callback: *const fn (QHeaderView, QCloseEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QHeaderView_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QHeaderView_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: QHeaderView, callback: *const fn (QHeaderView, QTabletEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QHeaderView_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QHeaderView_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: QHeaderView, callback: *const fn (QHeaderView, QActionEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QHeaderView_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QHeaderView_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: QHeaderView, callback: *const fn (QHeaderView, QShowEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QHeaderView_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QHeaderView_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: QHeaderView, callback: *const fn (QHeaderView, QHideEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: QHeaderView, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QHeaderView_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QHeaderView `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: QHeaderView, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QHeaderView_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: QHeaderView, callback: *const fn (QHeaderView, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QHeaderView_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QHeaderView, param1: i32) i32 {
        return qtc.QHeaderView_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QHeaderView, param1: i32) i32 {
        return qtc.QHeaderView_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) i32) void {
        qtc.QHeaderView_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QHeaderView, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QHeaderView_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QHeaderView, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QHeaderView_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QHeaderView, callback: *const fn (QHeaderView, QPainter) callconv(.c) void) void {
        qtc.QHeaderView_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QHeaderView, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QHeaderView_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QHeaderView `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QHeaderView, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QHeaderView_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QHeaderView, callback: *const fn (QHeaderView, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QHeaderView_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SharedPainter(self: QHeaderView) QPainter {
        return .{ .ptr = qtc.QHeaderView_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperSharedPainter(self: QHeaderView) QPainter {
        return .{ .ptr = qtc.QHeaderView_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QHeaderView, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QHeaderView_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QHeaderView_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QHeaderView_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QHeaderView, callback: *const fn (QHeaderView, QChildEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QHeaderView_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QHeaderView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QHeaderView_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QHeaderView, callback: *const fn (QHeaderView, QEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QHeaderView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHeaderView_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QHeaderView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHeaderView_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QHeaderView, callback: *const fn (QHeaderView, QMetaMethod) callconv(.c) void) void {
        qtc.QHeaderView_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QHeaderView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHeaderView_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QHeaderView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHeaderView_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QHeaderView, callback: *const fn (QHeaderView, QMetaMethod) callconv(.c) void) void {
        qtc.QHeaderView_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.State `
    ///
    pub fn State(self: QHeaderView) i32 {
        return qtc.QHeaderView_State(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.State `
    ///
    pub fn SuperState(self: QHeaderView) i32 {
        return qtc.QHeaderView_SuperState(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnState(self: QHeaderView, callback: *const fn () callconv(.c) i32) void {
        qtc.QHeaderView_OnState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` state: qabstractitemview_enums.State `
    ///
    pub fn SetState(self: QHeaderView, state: i32) void {
        qtc.QHeaderView_SetState(@ptrCast(self.ptr), @bitCast(state));
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
    /// ` self: QHeaderView `
    ///
    /// ` state: qabstractitemview_enums.State `
    ///
    pub fn SuperSetState(self: QHeaderView, state: i32) void {
        qtc.QHeaderView_SuperSetState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, state: qabstractitemview_enums.State) callconv(.c) void `
    ///
    pub fn OnSetState(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnSetState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ScheduleDelayedItemsLayout(self: QHeaderView) void {
        qtc.QHeaderView_ScheduleDelayedItemsLayout(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperScheduleDelayedItemsLayout(self: QHeaderView) void {
        qtc.QHeaderView_SuperScheduleDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnScheduleDelayedItemsLayout(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnScheduleDelayedItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ExecuteDelayedItemsLayout(self: QHeaderView) void {
        qtc.QHeaderView_ExecuteDelayedItemsLayout(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperExecuteDelayedItemsLayout(self: QHeaderView) void {
        qtc.QHeaderView_SuperExecuteDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnExecuteDelayedItemsLayout(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnExecuteDelayedItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` region: QRegion `
    ///
    pub fn SetDirtyRegion(self: QHeaderView, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QHeaderView_SetDirtyRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` region: QRegion `
    ///
    pub fn SuperSetDirtyRegion(self: QHeaderView, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QHeaderView_SuperSetDirtyRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, region: QRegion) callconv(.c) void `
    ///
    pub fn OnSetDirtyRegion(self: QHeaderView, callback: *const fn (QHeaderView, QRegion) callconv(.c) void) void {
        qtc.QHeaderView_OnSetDirtyRegion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn ScrollDirtyRegion(self: QHeaderView, dx: i32, dy: i32) void {
        qtc.QHeaderView_ScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
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
    /// ` self: QHeaderView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollDirtyRegion(self: QHeaderView, dx: i32, dy: i32) void {
        qtc.QHeaderView_SuperScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn OnScrollDirtyRegion(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn DirtyRegionOffset(self: QHeaderView) QPoint {
        return .{ .ptr = qtc.QHeaderView_DirtyRegionOffset(@ptrCast(self.ptr)) };
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperDirtyRegionOffset(self: QHeaderView) QPoint {
        return .{ .ptr = qtc.QHeaderView_SuperDirtyRegionOffset(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) QPoint `
    ///
    pub fn OnDirtyRegionOffset(self: QHeaderView, callback: *const fn () callconv(.c) QPoint) void {
        qtc.QHeaderView_OnDirtyRegionOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn StartAutoScroll(self: QHeaderView) void {
        qtc.QHeaderView_StartAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperStartAutoScroll(self: QHeaderView) void {
        qtc.QHeaderView_SuperStartAutoScroll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStartAutoScroll(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnStartAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn StopAutoScroll(self: QHeaderView) void {
        qtc.QHeaderView_StopAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperStopAutoScroll(self: QHeaderView) void {
        qtc.QHeaderView_SuperStopAutoScroll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStopAutoScroll(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnStopAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn DoAutoScroll(self: QHeaderView) void {
        qtc.QHeaderView_DoAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperDoAutoScroll(self: QHeaderView) void {
        qtc.QHeaderView_SuperDoAutoScroll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDoAutoScroll(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnDoAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DropIndicatorPosition `
    ///
    pub fn DropIndicatorPosition(self: QHeaderView) i32 {
        return qtc.QHeaderView_DropIndicatorPosition(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DropIndicatorPosition `
    ///
    pub fn SuperDropIndicatorPosition(self: QHeaderView) i32 {
        return qtc.QHeaderView_SuperDropIndicatorPosition(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDropIndicatorPosition(self: QHeaderView, callback: *const fn () callconv(.c) i32) void {
        qtc.QHeaderView_OnDropIndicatorPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetViewportMargins(self: QHeaderView, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QHeaderView_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: QHeaderView `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SuperSetViewportMargins(self: QHeaderView, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QHeaderView_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn OnSetViewportMargins(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn ViewportMargins(self: QHeaderView) QMargins {
        return .{ .ptr = qtc.QHeaderView_ViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperViewportMargins(self: QHeaderView) QMargins {
        return .{ .ptr = qtc.QHeaderView_SuperViewportMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) QMargins `
    ///
    pub fn OnViewportMargins(self: QHeaderView, callback: *const fn () callconv(.c) QMargins) void {
        qtc.QHeaderView_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPainter `
    ///
    pub fn DrawFrame(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QHeaderView_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPainter `
    ///
    pub fn SuperDrawFrame(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QHeaderView_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, param1: QPainter) callconv(.c) void `
    ///
    pub fn OnDrawFrame(self: QHeaderView, callback: *const fn (QHeaderView, QPainter) callconv(.c) void) void {
        qtc.QHeaderView_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn UpdateMicroFocus(self: QHeaderView) void {
        qtc.QHeaderView_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperUpdateMicroFocus(self: QHeaderView) void {
        qtc.QHeaderView_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Create(self: QHeaderView) void {
        qtc.QHeaderView_Create(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperCreate(self: QHeaderView) void {
        qtc.QHeaderView_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Destroy(self: QHeaderView) void {
        qtc.QHeaderView_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperDestroy(self: QHeaderView) void {
        qtc.QHeaderView_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn FocusNextChild(self: QHeaderView) bool {
        return qtc.QHeaderView_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperFocusNextChild(self: QHeaderView) bool {
        return qtc.QHeaderView_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: QHeaderView, callback: *const fn () callconv(.c) bool) void {
        qtc.QHeaderView_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn FocusPreviousChild(self: QHeaderView) bool {
        return qtc.QHeaderView_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperFocusPreviousChild(self: QHeaderView) bool {
        return qtc.QHeaderView_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: QHeaderView, callback: *const fn () callconv(.c) bool) void {
        qtc.QHeaderView_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Sender(self: QHeaderView) QObject {
        return .{ .ptr = qtc.QHeaderView_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperSender(self: QHeaderView) QObject {
        return .{ .ptr = qtc.QHeaderView_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QHeaderView, callback: *const fn () callconv(.c) QObject) void {
        qtc.QHeaderView_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn SenderSignalIndex(self: QHeaderView) i32 {
        return qtc.QHeaderView_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn SuperSenderSignalIndex(self: QHeaderView) i32 {
        return qtc.QHeaderView_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QHeaderView, callback: *const fn () callconv(.c) i32) void {
        qtc.QHeaderView_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QHeaderView, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHeaderView_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QHeaderView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QHeaderView, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHeaderView_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QHeaderView, callback: *const fn (QHeaderView, [*:0]const u8) callconv(.c) i32) void {
        qtc.QHeaderView_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QHeaderView, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHeaderView_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QHeaderView, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHeaderView_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QHeaderView, callback: *const fn (QHeaderView, QMetaMethod) callconv(.c) bool) void {
        qtc.QHeaderView_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QHeaderView, metricA: i32, metricB: i32) f64 {
        return qtc.QHeaderView_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QHeaderView `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QHeaderView, metricA: i32, metricB: i32) f64 {
        return qtc.QHeaderView_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32) callconv(.c) f64) void {
        qtc.QHeaderView_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QHeaderView, callback: *const fn (QHeaderView, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#dtor.QHeaderView)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QHeaderView `
    ///
    pub fn Delete(self: QHeaderView) void {
        qtc.QHeaderView_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#public-types)
pub const enums = struct {
    pub const ResizeMode = enum(i32) {
        pub const Interactive: i32 = 0;
        pub const Stretch: i32 = 1;
        pub const Fixed: i32 = 2;
        pub const ResizeToContents: i32 = 3;
        pub const Custom: i32 = 2;
    };
};
