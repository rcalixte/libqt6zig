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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QHeaderView object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _orientation: qnamespace_enums.Orientation `
    ///
    pub fn new(_orientation: i32) QHeaderView {
        return .{ .ptr = qtc.QHeaderView_new(@bitCast(_orientation)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QHeaderView object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _orientation: qnamespace_enums.Orientation `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new2(_orientation: i32, _parent: anytype) QHeaderView {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QHeaderView_new2(@bitCast(_orientation), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn metaObject(self: QHeaderView) QMetaObject {
        return .{ .ptr = qtc.QHeaderView_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QHeaderView, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QHeaderView_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    pub fn superMetaObject(self: QHeaderView) QMetaObject {
        return .{ .ptr = qtc.QHeaderView_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QHeaderView, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHeaderView_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QHeaderView, callback: *const fn (QHeaderView, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QHeaderView_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QHeaderView, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHeaderView_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QHeaderView, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHeaderView_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QHeaderView_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QHeaderView, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHeaderView_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeaderView.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setModel` instead
    ///
    pub const SetModel = setModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn setModel(self: QHeaderView, _model: anytype) void {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        qtc.QHeaderView_SetModel(@ptrCast(self.ptr), @ptrCast(_model.ptr));
    }

    /// ### DEPRECATED: Use `onSetModel` instead
    ///
    pub const OnSetModel = onSetModel;

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
    pub fn onSetModel(self: QHeaderView, callback: *const fn (QHeaderView, QAbstractItemModel) callconv(.c) void) void {
        qtc.QHeaderView_OnSetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetModel` instead
    ///
    pub const SuperSetModel = superSetModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setModel)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn superSetModel(self: QHeaderView, _model: anytype) void {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        qtc.QHeaderView_SuperSetModel(@ptrCast(self.ptr), @ptrCast(_model.ptr));
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

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
    pub fn orientation(self: QHeaderView) i32 {
        return qtc.QHeaderView_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `offset` instead
    ///
    pub const Offset = offset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#offset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn offset(self: QHeaderView) i32 {
        return qtc.QHeaderView_Offset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn length(self: QHeaderView) i32 {
        return qtc.QHeaderView_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn sizeHint(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QHeaderView_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QHeaderView, callback: *const fn () callconv(.c) QSize) void {
        qtc.QHeaderView_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn superSizeHint(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QHeaderView_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` v: bool `
    ///
    pub fn setVisible(self: QHeaderView, v: bool) void {
        qtc.QHeaderView_SetVisible(@ptrCast(self.ptr), v);
    }

    /// ### DEPRECATED: Use `onSetVisible` instead
    ///
    pub const OnSetVisible = onSetVisible;

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
    pub fn onSetVisible(self: QHeaderView, callback: *const fn (QHeaderView, bool) callconv(.c) void) void {
        qtc.QHeaderView_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetVisible` instead
    ///
    pub const SuperSetVisible = superSetVisible;

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
    pub fn superSetVisible(self: QHeaderView, v: bool) void {
        qtc.QHeaderView_SuperSetVisible(@ptrCast(self.ptr), v);
    }

    /// ### DEPRECATED: Use `sectionSizeHint` instead
    ///
    pub const SectionSizeHint = sectionSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn sectionSizeHint(self: QHeaderView, _logicalIndex: i32) i32 {
        return qtc.QHeaderView_SectionSizeHint(@ptrCast(self.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `visualIndexAt` instead
    ///
    pub const VisualIndexAt = visualIndexAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualIndexAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` position: i32 `
    ///
    pub fn visualIndexAt(self: QHeaderView, position: i32) i32 {
        return qtc.QHeaderView_VisualIndexAt(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `logicalIndexAt` instead
    ///
    pub const LogicalIndexAt = logicalIndexAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#logicalIndexAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` position: i32 `
    ///
    pub fn logicalIndexAt(self: QHeaderView, position: i32) i32 {
        return qtc.QHeaderView_LogicalIndexAt(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `logicalIndexAt2` instead
    ///
    pub const LogicalIndexAt2 = logicalIndexAt2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#logicalIndexAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn logicalIndexAt2(self: QHeaderView, _x: i32, _y: i32) i32 {
        return qtc.QHeaderView_LogicalIndexAt2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `logicalIndexAt3` instead
    ///
    pub const LogicalIndexAt3 = logicalIndexAt3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#logicalIndexAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn logicalIndexAt3(self: QHeaderView, _pos: anytype) i32 {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        return qtc.QHeaderView_LogicalIndexAt3(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `sectionSize` instead
    ///
    pub const SectionSize = sectionSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn sectionSize(self: QHeaderView, _logicalIndex: i32) i32 {
        return qtc.QHeaderView_SectionSize(@ptrCast(self.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `sectionPosition` instead
    ///
    pub const SectionPosition = sectionPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn sectionPosition(self: QHeaderView, _logicalIndex: i32) i32 {
        return qtc.QHeaderView_SectionPosition(@ptrCast(self.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `sectionViewportPosition` instead
    ///
    pub const SectionViewportPosition = sectionViewportPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionViewportPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn sectionViewportPosition(self: QHeaderView, _logicalIndex: i32) i32 {
        return qtc.QHeaderView_SectionViewportPosition(@ptrCast(self.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `moveSection` instead
    ///
    pub const MoveSection = moveSection;

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
    pub fn moveSection(self: QHeaderView, from: i32, to: i32) void {
        qtc.QHeaderView_MoveSection(@ptrCast(self.ptr), @bitCast(from), @bitCast(to));
    }

    /// ### DEPRECATED: Use `swapSections` instead
    ///
    pub const SwapSections = swapSections;

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
    pub fn swapSections(self: QHeaderView, first: i32, second: i32) void {
        qtc.QHeaderView_SwapSections(@ptrCast(self.ptr), @bitCast(first), @bitCast(second));
    }

    /// ### DEPRECATED: Use `resizeSection` instead
    ///
    pub const ResizeSection = resizeSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resizeSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    /// ` _size: i32 `
    ///
    pub fn resizeSection(self: QHeaderView, _logicalIndex: i32, _size: i32) void {
        qtc.QHeaderView_ResizeSection(@ptrCast(self.ptr), @bitCast(_logicalIndex), @bitCast(_size));
    }

    /// ### DEPRECATED: Use `resizeSections` instead
    ///
    pub const ResizeSections = resizeSections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resizeSections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` mode: qheaderview_enums.ResizeMode `
    ///
    pub fn resizeSections(self: QHeaderView, mode: i32) void {
        qtc.QHeaderView_ResizeSections(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `isSectionHidden` instead
    ///
    pub const IsSectionHidden = isSectionHidden;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isSectionHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn isSectionHidden(self: QHeaderView, _logicalIndex: i32) bool {
        return qtc.QHeaderView_IsSectionHidden(@ptrCast(self.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `setSectionHidden` instead
    ///
    pub const SetSectionHidden = setSectionHidden;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSectionHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    /// ` _hide: bool `
    ///
    pub fn setSectionHidden(self: QHeaderView, _logicalIndex: i32, _hide: bool) void {
        qtc.QHeaderView_SetSectionHidden(@ptrCast(self.ptr), @bitCast(_logicalIndex), _hide);
    }

    /// ### DEPRECATED: Use `hiddenSectionCount` instead
    ///
    pub const HiddenSectionCount = hiddenSectionCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#hiddenSectionCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn hiddenSectionCount(self: QHeaderView) i32 {
        return qtc.QHeaderView_HiddenSectionCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hideSection` instead
    ///
    pub const HideSection = hideSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#hideSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn hideSection(self: QHeaderView, _logicalIndex: i32) void {
        qtc.QHeaderView_HideSection(@ptrCast(self.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `showSection` instead
    ///
    pub const ShowSection = showSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#showSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn showSection(self: QHeaderView, _logicalIndex: i32) void {
        qtc.QHeaderView_ShowSection(@ptrCast(self.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn count(self: QHeaderView) i32 {
        return qtc.QHeaderView_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `visualIndex` instead
    ///
    pub const VisualIndex = visualIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn visualIndex(self: QHeaderView, _logicalIndex: i32) i32 {
        return qtc.QHeaderView_VisualIndex(@ptrCast(self.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `logicalIndex` instead
    ///
    pub const LogicalIndex = logicalIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#logicalIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _visualIndex: i32 `
    ///
    pub fn logicalIndex(self: QHeaderView, _visualIndex: i32) i32 {
        return qtc.QHeaderView_LogicalIndex(@ptrCast(self.ptr), @bitCast(_visualIndex));
    }

    /// ### DEPRECATED: Use `setSectionsMovable` instead
    ///
    pub const SetSectionsMovable = setSectionsMovable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSectionsMovable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` movable: bool `
    ///
    pub fn setSectionsMovable(self: QHeaderView, movable: bool) void {
        qtc.QHeaderView_SetSectionsMovable(@ptrCast(self.ptr), movable);
    }

    /// ### DEPRECATED: Use `sectionsMovable` instead
    ///
    pub const SectionsMovable = sectionsMovable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsMovable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn sectionsMovable(self: QHeaderView) bool {
        return qtc.QHeaderView_SectionsMovable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFirstSectionMovable` instead
    ///
    pub const SetFirstSectionMovable = setFirstSectionMovable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setFirstSectionMovable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` movable: bool `
    ///
    pub fn setFirstSectionMovable(self: QHeaderView, movable: bool) void {
        qtc.QHeaderView_SetFirstSectionMovable(@ptrCast(self.ptr), movable);
    }

    /// ### DEPRECATED: Use `isFirstSectionMovable` instead
    ///
    pub const IsFirstSectionMovable = isFirstSectionMovable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isFirstSectionMovable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn isFirstSectionMovable(self: QHeaderView) bool {
        return qtc.QHeaderView_IsFirstSectionMovable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSectionsClickable` instead
    ///
    pub const SetSectionsClickable = setSectionsClickable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSectionsClickable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` clickable: bool `
    ///
    pub fn setSectionsClickable(self: QHeaderView, clickable: bool) void {
        qtc.QHeaderView_SetSectionsClickable(@ptrCast(self.ptr), clickable);
    }

    /// ### DEPRECATED: Use `sectionsClickable` instead
    ///
    pub const SectionsClickable = sectionsClickable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsClickable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn sectionsClickable(self: QHeaderView) bool {
        return qtc.QHeaderView_SectionsClickable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHighlightSections` instead
    ///
    pub const SetHighlightSections = setHighlightSections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setHighlightSections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` highlight: bool `
    ///
    pub fn setHighlightSections(self: QHeaderView, highlight: bool) void {
        qtc.QHeaderView_SetHighlightSections(@ptrCast(self.ptr), highlight);
    }

    /// ### DEPRECATED: Use `highlightSections` instead
    ///
    pub const HighlightSections = highlightSections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#highlightSections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn highlightSections(self: QHeaderView) bool {
        return qtc.QHeaderView_HighlightSections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sectionResizeMode` instead
    ///
    pub const SectionResizeMode = sectionResizeMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionResizeMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    /// ## Returns:
    ///
    /// ` qheaderview_enums.ResizeMode `
    ///
    pub fn sectionResizeMode(self: QHeaderView, _logicalIndex: i32) i32 {
        return qtc.QHeaderView_SectionResizeMode(@ptrCast(self.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `setSectionResizeMode` instead
    ///
    pub const SetSectionResizeMode = setSectionResizeMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSectionResizeMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` mode: qheaderview_enums.ResizeMode `
    ///
    pub fn setSectionResizeMode(self: QHeaderView, mode: i32) void {
        qtc.QHeaderView_SetSectionResizeMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setSectionResizeMode2` instead
    ///
    pub const SetSectionResizeMode2 = setSectionResizeMode2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSectionResizeMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    /// ` mode: qheaderview_enums.ResizeMode `
    ///
    pub fn setSectionResizeMode2(self: QHeaderView, _logicalIndex: i32, mode: i32) void {
        qtc.QHeaderView_SetSectionResizeMode2(@ptrCast(self.ptr), @bitCast(_logicalIndex), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setResizeContentsPrecision` instead
    ///
    pub const SetResizeContentsPrecision = setResizeContentsPrecision;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setResizeContentsPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` precision: i32 `
    ///
    pub fn setResizeContentsPrecision(self: QHeaderView, precision: i32) void {
        qtc.QHeaderView_SetResizeContentsPrecision(@ptrCast(self.ptr), @bitCast(precision));
    }

    /// ### DEPRECATED: Use `resizeContentsPrecision` instead
    ///
    pub const ResizeContentsPrecision = resizeContentsPrecision;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resizeContentsPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn resizeContentsPrecision(self: QHeaderView) i32 {
        return qtc.QHeaderView_ResizeContentsPrecision(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stretchSectionCount` instead
    ///
    pub const StretchSectionCount = stretchSectionCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#stretchSectionCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn stretchSectionCount(self: QHeaderView) i32 {
        return qtc.QHeaderView_StretchSectionCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSortIndicatorShown` instead
    ///
    pub const SetSortIndicatorShown = setSortIndicatorShown;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSortIndicatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _show: bool `
    ///
    pub fn setSortIndicatorShown(self: QHeaderView, _show: bool) void {
        qtc.QHeaderView_SetSortIndicatorShown(@ptrCast(self.ptr), _show);
    }

    /// ### DEPRECATED: Use `isSortIndicatorShown` instead
    ///
    pub const IsSortIndicatorShown = isSortIndicatorShown;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isSortIndicatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn isSortIndicatorShown(self: QHeaderView) bool {
        return qtc.QHeaderView_IsSortIndicatorShown(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSortIndicator` instead
    ///
    pub const SetSortIndicator = setSortIndicator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSortIndicator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn setSortIndicator(self: QHeaderView, _logicalIndex: i32, order: i32) void {
        qtc.QHeaderView_SetSortIndicator(@ptrCast(self.ptr), @bitCast(_logicalIndex), @bitCast(order));
    }

    /// ### DEPRECATED: Use `sortIndicatorSection` instead
    ///
    pub const SortIndicatorSection = sortIndicatorSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn sortIndicatorSection(self: QHeaderView) i32 {
        return qtc.QHeaderView_SortIndicatorSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sortIndicatorOrder` instead
    ///
    pub const SortIndicatorOrder = sortIndicatorOrder;

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
    pub fn sortIndicatorOrder(self: QHeaderView) i32 {
        return qtc.QHeaderView_SortIndicatorOrder(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSortIndicatorClearable` instead
    ///
    pub const SetSortIndicatorClearable = setSortIndicatorClearable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSortIndicatorClearable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` clearable: bool `
    ///
    pub fn setSortIndicatorClearable(self: QHeaderView, clearable: bool) void {
        qtc.QHeaderView_SetSortIndicatorClearable(@ptrCast(self.ptr), clearable);
    }

    /// ### DEPRECATED: Use `isSortIndicatorClearable` instead
    ///
    pub const IsSortIndicatorClearable = isSortIndicatorClearable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isSortIndicatorClearable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn isSortIndicatorClearable(self: QHeaderView) bool {
        return qtc.QHeaderView_IsSortIndicatorClearable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stretchLastSection` instead
    ///
    pub const StretchLastSection = stretchLastSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#stretchLastSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn stretchLastSection(self: QHeaderView) bool {
        return qtc.QHeaderView_StretchLastSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStretchLastSection` instead
    ///
    pub const SetStretchLastSection = setStretchLastSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setStretchLastSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` stretch: bool `
    ///
    pub fn setStretchLastSection(self: QHeaderView, stretch: bool) void {
        qtc.QHeaderView_SetStretchLastSection(@ptrCast(self.ptr), stretch);
    }

    /// ### DEPRECATED: Use `cascadingSectionResizes` instead
    ///
    pub const CascadingSectionResizes = cascadingSectionResizes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#cascadingSectionResizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn cascadingSectionResizes(self: QHeaderView) bool {
        return qtc.QHeaderView_CascadingSectionResizes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCascadingSectionResizes` instead
    ///
    pub const SetCascadingSectionResizes = setCascadingSectionResizes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setCascadingSectionResizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` enable: bool `
    ///
    pub fn setCascadingSectionResizes(self: QHeaderView, enable: bool) void {
        qtc.QHeaderView_SetCascadingSectionResizes(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `defaultSectionSize` instead
    ///
    pub const DefaultSectionSize = defaultSectionSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#defaultSectionSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn defaultSectionSize(self: QHeaderView) i32 {
        return qtc.QHeaderView_DefaultSectionSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultSectionSize` instead
    ///
    pub const SetDefaultSectionSize = setDefaultSectionSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setDefaultSectionSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _size: i32 `
    ///
    pub fn setDefaultSectionSize(self: QHeaderView, _size: i32) void {
        qtc.QHeaderView_SetDefaultSectionSize(@ptrCast(self.ptr), @bitCast(_size));
    }

    /// ### DEPRECATED: Use `resetDefaultSectionSize` instead
    ///
    pub const ResetDefaultSectionSize = resetDefaultSectionSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resetDefaultSectionSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn resetDefaultSectionSize(self: QHeaderView) void {
        qtc.QHeaderView_ResetDefaultSectionSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumSectionSize` instead
    ///
    pub const MinimumSectionSize = minimumSectionSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#minimumSectionSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn minimumSectionSize(self: QHeaderView) i32 {
        return qtc.QHeaderView_MinimumSectionSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumSectionSize` instead
    ///
    pub const SetMinimumSectionSize = setMinimumSectionSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setMinimumSectionSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _size: i32 `
    ///
    pub fn setMinimumSectionSize(self: QHeaderView, _size: i32) void {
        qtc.QHeaderView_SetMinimumSectionSize(@ptrCast(self.ptr), @bitCast(_size));
    }

    /// ### DEPRECATED: Use `maximumSectionSize` instead
    ///
    pub const MaximumSectionSize = maximumSectionSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#maximumSectionSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn maximumSectionSize(self: QHeaderView) i32 {
        return qtc.QHeaderView_MaximumSectionSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSectionSize` instead
    ///
    pub const SetMaximumSectionSize = setMaximumSectionSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setMaximumSectionSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _size: i32 `
    ///
    pub fn setMaximumSectionSize(self: QHeaderView, _size: i32) void {
        qtc.QHeaderView_SetMaximumSectionSize(@ptrCast(self.ptr), @bitCast(_size));
    }

    /// ### DEPRECATED: Use `defaultAlignment` instead
    ///
    pub const DefaultAlignment = defaultAlignment;

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
    pub fn defaultAlignment(self: QHeaderView) i32 {
        return qtc.QHeaderView_DefaultAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultAlignment` instead
    ///
    pub const SetDefaultAlignment = setDefaultAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setDefaultAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setDefaultAlignment(self: QHeaderView, alignment: i32) void {
        qtc.QHeaderView_SetDefaultAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `doItemsLayout` instead
    ///
    pub const DoItemsLayout = doItemsLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#doItemsLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn doItemsLayout(self: QHeaderView) void {
        qtc.QHeaderView_DoItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoItemsLayout` instead
    ///
    pub const OnDoItemsLayout = onDoItemsLayout;

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
    pub fn onDoItemsLayout(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnDoItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDoItemsLayout` instead
    ///
    pub const SuperDoItemsLayout = superDoItemsLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#doItemsLayout)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn superDoItemsLayout(self: QHeaderView) void {
        qtc.QHeaderView_SuperDoItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sectionsMoved` instead
    ///
    pub const SectionsMoved = sectionsMoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsMoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn sectionsMoved(self: QHeaderView) bool {
        return qtc.QHeaderView_SectionsMoved(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sectionsHidden` instead
    ///
    pub const SectionsHidden = sectionsHidden;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn sectionsHidden(self: QHeaderView) bool {
        return qtc.QHeaderView_SectionsHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `saveState` instead
    ///
    pub const SaveState = saveState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#saveState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn saveState(self: QHeaderView, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QHeaderView_SaveState(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QHeaderView.saveState: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `restoreState` instead
    ///
    pub const RestoreState = restoreState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#restoreState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _state: []u8 `
    ///
    pub fn restoreState(self: QHeaderView, _state: []u8) bool {
        const state_str = qtc.libqt_string{
            .len = _state.len,
            .data = _state.ptr,
        };
        return qtc.QHeaderView_RestoreState(@ptrCast(self.ptr), state_str);
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn reset(self: QHeaderView) void {
        qtc.QHeaderView_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReset` instead
    ///
    pub const OnReset = onReset;

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
    pub fn onReset(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReset` instead
    ///
    pub const SuperReset = superReset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#reset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn superReset(self: QHeaderView) void {
        qtc.QHeaderView_SuperReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOffset` instead
    ///
    pub const SetOffset = setOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _offset: i32 `
    ///
    pub fn setOffset(self: QHeaderView, _offset: i32) void {
        qtc.QHeaderView_SetOffset(@ptrCast(self.ptr), @bitCast(_offset));
    }

    /// ### DEPRECATED: Use `setOffsetToSectionPosition` instead
    ///
    pub const SetOffsetToSectionPosition = setOffsetToSectionPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setOffsetToSectionPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _visualIndex: i32 `
    ///
    pub fn setOffsetToSectionPosition(self: QHeaderView, _visualIndex: i32) void {
        qtc.QHeaderView_SetOffsetToSectionPosition(@ptrCast(self.ptr), @bitCast(_visualIndex));
    }

    /// ### DEPRECATED: Use `setOffsetToLastSection` instead
    ///
    pub const SetOffsetToLastSection = setOffsetToLastSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setOffsetToLastSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn setOffsetToLastSection(self: QHeaderView) void {
        qtc.QHeaderView_SetOffsetToLastSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `headerDataChanged` instead
    ///
    pub const HeaderDataChanged = headerDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#headerDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _orientation: qnamespace_enums.Orientation `
    ///
    /// ` logicalFirst: i32 `
    ///
    /// ` logicalLast: i32 `
    ///
    pub fn headerDataChanged(self: QHeaderView, _orientation: i32, logicalFirst: i32, logicalLast: i32) void {
        qtc.QHeaderView_HeaderDataChanged(@ptrCast(self.ptr), @bitCast(_orientation), @bitCast(logicalFirst), @bitCast(logicalLast));
    }

    /// ### DEPRECATED: Use `sectionMoved` instead
    ///
    pub const SectionMoved = sectionMoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionMoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    /// ` oldVisualIndex: i32 `
    ///
    /// ` newVisualIndex: i32 `
    ///
    pub fn sectionMoved(self: QHeaderView, _logicalIndex: i32, oldVisualIndex: i32, newVisualIndex: i32) void {
        qtc.QHeaderView_SectionMoved(@ptrCast(self.ptr), @bitCast(_logicalIndex), @bitCast(oldVisualIndex), @bitCast(newVisualIndex));
    }

    /// ### DEPRECATED: Use `onSectionMoved` instead
    ///
    pub const OnSectionMoved = onSectionMoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionMoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, logicalIndex: i32, oldVisualIndex: i32, newVisualIndex: i32) callconv(.c) void `
    ///
    pub fn onSectionMoved(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sectionResized` instead
    ///
    pub const SectionResized = sectionResized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionResized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    /// ` oldSize: i32 `
    ///
    /// ` newSize: i32 `
    ///
    pub fn sectionResized(self: QHeaderView, _logicalIndex: i32, oldSize: i32, newSize: i32) void {
        qtc.QHeaderView_SectionResized(@ptrCast(self.ptr), @bitCast(_logicalIndex), @bitCast(oldSize), @bitCast(newSize));
    }

    /// ### DEPRECATED: Use `onSectionResized` instead
    ///
    pub const OnSectionResized = onSectionResized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionResized)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, logicalIndex: i32, oldSize: i32, newSize: i32) callconv(.c) void `
    ///
    pub fn onSectionResized(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionResized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sectionPressed` instead
    ///
    pub const SectionPressed = sectionPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn sectionPressed(self: QHeaderView, _logicalIndex: i32) void {
        qtc.QHeaderView_SectionPressed(@ptrCast(self.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `onSectionPressed` instead
    ///
    pub const OnSectionPressed = onSectionPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, logicalIndex: i32) callconv(.c) void `
    ///
    pub fn onSectionPressed(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sectionClicked` instead
    ///
    pub const SectionClicked = sectionClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn sectionClicked(self: QHeaderView, _logicalIndex: i32) void {
        qtc.QHeaderView_SectionClicked(@ptrCast(self.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `onSectionClicked` instead
    ///
    pub const OnSectionClicked = onSectionClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, logicalIndex: i32) callconv(.c) void `
    ///
    pub fn onSectionClicked(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sectionEntered` instead
    ///
    pub const SectionEntered = sectionEntered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn sectionEntered(self: QHeaderView, _logicalIndex: i32) void {
        qtc.QHeaderView_SectionEntered(@ptrCast(self.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `onSectionEntered` instead
    ///
    pub const OnSectionEntered = onSectionEntered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, logicalIndex: i32) callconv(.c) void `
    ///
    pub fn onSectionEntered(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sectionDoubleClicked` instead
    ///
    pub const SectionDoubleClicked = sectionDoubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionDoubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn sectionDoubleClicked(self: QHeaderView, _logicalIndex: i32) void {
        qtc.QHeaderView_SectionDoubleClicked(@ptrCast(self.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `onSectionDoubleClicked` instead
    ///
    pub const OnSectionDoubleClicked = onSectionDoubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionDoubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, logicalIndex: i32) callconv(.c) void `
    ///
    pub fn onSectionDoubleClicked(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionDoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sectionCountChanged` instead
    ///
    pub const SectionCountChanged = sectionCountChanged;

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
    pub fn sectionCountChanged(self: QHeaderView, oldCount: i32, newCount: i32) void {
        qtc.QHeaderView_SectionCountChanged(@ptrCast(self.ptr), @bitCast(oldCount), @bitCast(newCount));
    }

    /// ### DEPRECATED: Use `onSectionCountChanged` instead
    ///
    pub const OnSectionCountChanged = onSectionCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, oldCount: i32, newCount: i32) callconv(.c) void `
    ///
    pub fn onSectionCountChanged(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sectionHandleDoubleClicked` instead
    ///
    pub const SectionHandleDoubleClicked = sectionHandleDoubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionHandleDoubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn sectionHandleDoubleClicked(self: QHeaderView, _logicalIndex: i32) void {
        qtc.QHeaderView_SectionHandleDoubleClicked(@ptrCast(self.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `onSectionHandleDoubleClicked` instead
    ///
    pub const OnSectionHandleDoubleClicked = onSectionHandleDoubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionHandleDoubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, logicalIndex: i32) callconv(.c) void `
    ///
    pub fn onSectionHandleDoubleClicked(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SectionHandleDoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `geometriesChanged` instead
    ///
    pub const GeometriesChanged = geometriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#geometriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn geometriesChanged(self: QHeaderView) void {
        qtc.QHeaderView_GeometriesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onGeometriesChanged` instead
    ///
    pub const OnGeometriesChanged = onGeometriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#geometriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView) callconv(.c) void `
    ///
    pub fn onGeometriesChanged(self: QHeaderView, callback: *const fn (QHeaderView) callconv(.c) void) void {
        qtc.QHeaderView_Connect_GeometriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sortIndicatorChanged` instead
    ///
    pub const SortIndicatorChanged = sortIndicatorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn sortIndicatorChanged(self: QHeaderView, _logicalIndex: i32, order: i32) void {
        qtc.QHeaderView_SortIndicatorChanged(@ptrCast(self.ptr), @bitCast(_logicalIndex), @bitCast(order));
    }

    /// ### DEPRECATED: Use `onSortIndicatorChanged` instead
    ///
    pub const OnSortIndicatorChanged = onSortIndicatorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, logicalIndex: i32, order: qnamespace_enums.SortOrder) callconv(.c) void `
    ///
    pub fn onSortIndicatorChanged(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SortIndicatorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sortIndicatorClearableChanged` instead
    ///
    pub const SortIndicatorClearableChanged = sortIndicatorClearableChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorClearableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` clearable: bool `
    ///
    pub fn sortIndicatorClearableChanged(self: QHeaderView, clearable: bool) void {
        qtc.QHeaderView_SortIndicatorClearableChanged(@ptrCast(self.ptr), clearable);
    }

    /// ### DEPRECATED: Use `onSortIndicatorClearableChanged` instead
    ///
    pub const OnSortIndicatorClearableChanged = onSortIndicatorClearableChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorClearableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, clearable: bool) callconv(.c) void `
    ///
    pub fn onSortIndicatorClearableChanged(self: QHeaderView, callback: *const fn (QHeaderView, bool) callconv(.c) void) void {
        qtc.QHeaderView_Connect_SortIndicatorClearableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateSection` instead
    ///
    pub const UpdateSection = updateSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#updateSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn updateSection(self: QHeaderView, _logicalIndex: i32) void {
        qtc.QHeaderView_UpdateSection(@ptrCast(self.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `onUpdateSection` instead
    ///
    pub const OnUpdateSection = onUpdateSection;

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
    pub fn onUpdateSection(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnUpdateSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateSection` instead
    ///
    pub const SuperUpdateSection = superUpdateSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#updateSection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn superUpdateSection(self: QHeaderView, _logicalIndex: i32) void {
        qtc.QHeaderView_SuperUpdateSection(@ptrCast(self.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `resizeSections2` instead
    ///
    pub const ResizeSections2 = resizeSections2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resizeSections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn resizeSections2(self: QHeaderView) void {
        qtc.QHeaderView_ResizeSections2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onResizeSections2` instead
    ///
    pub const OnResizeSections2 = onResizeSections2;

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
    pub fn onResizeSections2(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnResizeSections2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResizeSections2` instead
    ///
    pub const SuperResizeSections2 = superResizeSections2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resizeSections)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn superResizeSections2(self: QHeaderView) void {
        qtc.QHeaderView_SuperResizeSections2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sectionsInserted` instead
    ///
    pub const SectionsInserted = sectionsInserted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` logicalFirst: i32 `
    ///
    /// ` logicalLast: i32 `
    ///
    pub fn sectionsInserted(self: QHeaderView, _parent: anytype, logicalFirst: i32, logicalLast: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QHeaderView_SectionsInserted(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(logicalFirst), @bitCast(logicalLast));
    }

    /// ### DEPRECATED: Use `onSectionsInserted` instead
    ///
    pub const OnSectionsInserted = onSectionsInserted;

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
    pub fn onSectionsInserted(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnSectionsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSectionsInserted` instead
    ///
    pub const SuperSectionsInserted = superSectionsInserted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsInserted)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` logicalFirst: i32 `
    ///
    /// ` logicalLast: i32 `
    ///
    pub fn superSectionsInserted(self: QHeaderView, _parent: anytype, logicalFirst: i32, logicalLast: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QHeaderView_SuperSectionsInserted(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(logicalFirst), @bitCast(logicalLast));
    }

    /// ### DEPRECATED: Use `sectionsAboutToBeRemoved` instead
    ///
    pub const SectionsAboutToBeRemoved = sectionsAboutToBeRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsAboutToBeRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` logicalFirst: i32 `
    ///
    /// ` logicalLast: i32 `
    ///
    pub fn sectionsAboutToBeRemoved(self: QHeaderView, _parent: anytype, logicalFirst: i32, logicalLast: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QHeaderView_SectionsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(logicalFirst), @bitCast(logicalLast));
    }

    /// ### DEPRECATED: Use `onSectionsAboutToBeRemoved` instead
    ///
    pub const OnSectionsAboutToBeRemoved = onSectionsAboutToBeRemoved;

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
    pub fn onSectionsAboutToBeRemoved(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnSectionsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSectionsAboutToBeRemoved` instead
    ///
    pub const SuperSectionsAboutToBeRemoved = superSectionsAboutToBeRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsAboutToBeRemoved)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` logicalFirst: i32 `
    ///
    /// ` logicalLast: i32 `
    ///
    pub fn superSectionsAboutToBeRemoved(self: QHeaderView, _parent: anytype, logicalFirst: i32, logicalLast: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QHeaderView_SuperSectionsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(logicalFirst), @bitCast(logicalLast));
    }

    /// ### DEPRECATED: Use `initialize` instead
    ///
    pub const Initialize = initialize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initialize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn initialize(self: QHeaderView) void {
        qtc.QHeaderView_Initialize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInitialize` instead
    ///
    pub const OnInitialize = onInitialize;

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
    pub fn onInitialize(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnInitialize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInitialize` instead
    ///
    pub const SuperInitialize = superInitialize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initialize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn superInitialize(self: QHeaderView) void {
        qtc.QHeaderView_SuperInitialize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `initializeSections` instead
    ///
    pub const InitializeSections = initializeSections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn initializeSections(self: QHeaderView) void {
        qtc.QHeaderView_InitializeSections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInitializeSections` instead
    ///
    pub const OnInitializeSections = onInitializeSections;

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
    pub fn onInitializeSections(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnInitializeSections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInitializeSections` instead
    ///
    pub const SuperInitializeSections = superInitializeSections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn superInitializeSections(self: QHeaderView) void {
        qtc.QHeaderView_SuperInitializeSections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `initializeSections2` instead
    ///
    pub const InitializeSections2 = initializeSections2;

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
    pub fn initializeSections2(self: QHeaderView, start: i32, end: i32) void {
        qtc.QHeaderView_InitializeSections2(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `onInitializeSections2` instead
    ///
    pub const OnInitializeSections2 = onInitializeSections2;

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
    pub fn onInitializeSections2(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnInitializeSections2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInitializeSections2` instead
    ///
    pub const SuperInitializeSections2 = superInitializeSections2;

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
    pub fn superInitializeSections2(self: QHeaderView, start: i32, end: i32) void {
        qtc.QHeaderView_SuperInitializeSections2(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `currentChanged` instead
    ///
    pub const CurrentChanged = currentChanged;

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
    pub fn currentChanged(self: QHeaderView, current: anytype, old: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(old)._is_QModelIndex;
        qtc.QHeaderView_CurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(old.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentChanged` instead
    ///
    pub const OnCurrentChanged = onCurrentChanged;

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
    pub fn onCurrentChanged(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QHeaderView_OnCurrentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCurrentChanged` instead
    ///
    pub const SuperCurrentChanged = superCurrentChanged;

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
    pub fn superCurrentChanged(self: QHeaderView, current: anytype, old: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(old)._is_QModelIndex;
        qtc.QHeaderView_SuperCurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(old.ptr));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QEvent `
    ///
    pub fn event(self: QHeaderView, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QHeaderView_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QHeaderView, callback: *const fn (QHeaderView, QEvent) callconv(.c) bool) void {
        qtc.QHeaderView_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    pub fn superEvent(self: QHeaderView, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QHeaderView_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#paintEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn paintEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QHeaderView_PaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

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
    pub fn onPaintEvent(self: QHeaderView, callback: *const fn (QHeaderView, QPaintEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

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
    pub fn superPaintEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QHeaderView_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mousePressEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QHeaderView_MousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

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
    pub fn onMousePressEvent(self: QHeaderView, callback: *const fn (QHeaderView, QMouseEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

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
    pub fn superMousePressEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QHeaderView_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QHeaderView_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

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
    pub fn onMouseMoveEvent(self: QHeaderView, callback: *const fn (QHeaderView, QMouseEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

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
    pub fn superMouseMoveEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QHeaderView_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QHeaderView_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

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
    pub fn onMouseReleaseEvent(self: QHeaderView, callback: *const fn (QHeaderView, QMouseEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

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
    pub fn superMouseReleaseEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QHeaderView_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseDoubleClickEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QHeaderView_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

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
    pub fn onMouseDoubleClickEvent(self: QHeaderView, callback: *const fn (QHeaderView, QMouseEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

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
    pub fn superMouseDoubleClickEvent(self: QHeaderView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QHeaderView_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `viewportEvent` instead
    ///
    pub const ViewportEvent = viewportEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#viewportEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` e: QEvent `
    ///
    pub fn viewportEvent(self: QHeaderView, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QHeaderView_ViewportEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onViewportEvent` instead
    ///
    pub const OnViewportEvent = onViewportEvent;

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
    pub fn onViewportEvent(self: QHeaderView, callback: *const fn (QHeaderView, QEvent) callconv(.c) bool) void {
        qtc.QHeaderView_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superViewportEvent` instead
    ///
    pub const SuperViewportEvent = superViewportEvent;

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
    pub fn superViewportEvent(self: QHeaderView, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QHeaderView_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `paintSection` instead
    ///
    pub const PaintSection = paintSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#paintSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` _rect: QRect `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn paintSection(self: QHeaderView, painter: anytype, _rect: anytype, _logicalIndex: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QHeaderView_PaintSection(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(_rect.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `onPaintSection` instead
    ///
    pub const OnPaintSection = onPaintSection;

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
    pub fn onPaintSection(self: QHeaderView, callback: *const fn (QHeaderView, QPainter, QRect, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnPaintSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaintSection` instead
    ///
    pub const SuperPaintSection = superPaintSection;

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
    /// ` _rect: QRect `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn superPaintSection(self: QHeaderView, painter: anytype, _rect: anytype, _logicalIndex: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QHeaderView_SuperPaintSection(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(_rect.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `sectionSizeFromContents` instead
    ///
    pub const SectionSizeFromContents = sectionSizeFromContents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionSizeFromContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn sectionSizeFromContents(self: QHeaderView, _logicalIndex: i32) QSize {
        return .{ .ptr = qtc.QHeaderView_SectionSizeFromContents(@ptrCast(self.ptr), @bitCast(_logicalIndex)) };
    }

    /// ### DEPRECATED: Use `onSectionSizeFromContents` instead
    ///
    pub const OnSectionSizeFromContents = onSectionSizeFromContents;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSectionSizeFromContents(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) QSize) void {
        qtc.QHeaderView_OnSectionSizeFromContents(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSectionSizeFromContents` instead
    ///
    pub const SuperSectionSizeFromContents = superSectionSizeFromContents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionSizeFromContents)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn superSectionSizeFromContents(self: QHeaderView, _logicalIndex: i32) QSize {
        return .{ .ptr = qtc.QHeaderView_SuperSectionSizeFromContents(@ptrCast(self.ptr), @bitCast(_logicalIndex)) };
    }

    /// ### DEPRECATED: Use `horizontalOffset` instead
    ///
    pub const HorizontalOffset = horizontalOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#horizontalOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn horizontalOffset(self: QHeaderView) i32 {
        return qtc.QHeaderView_HorizontalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHorizontalOffset` instead
    ///
    pub const OnHorizontalOffset = onHorizontalOffset;

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
    pub fn onHorizontalOffset(self: QHeaderView, callback: *const fn () callconv(.c) i32) void {
        qtc.QHeaderView_OnHorizontalOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHorizontalOffset` instead
    ///
    pub const SuperHorizontalOffset = superHorizontalOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#horizontalOffset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn superHorizontalOffset(self: QHeaderView) i32 {
        return qtc.QHeaderView_SuperHorizontalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `verticalOffset` instead
    ///
    pub const VerticalOffset = verticalOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#verticalOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn verticalOffset(self: QHeaderView) i32 {
        return qtc.QHeaderView_VerticalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVerticalOffset` instead
    ///
    pub const OnVerticalOffset = onVerticalOffset;

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
    pub fn onVerticalOffset(self: QHeaderView, callback: *const fn () callconv(.c) i32) void {
        qtc.QHeaderView_OnVerticalOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVerticalOffset` instead
    ///
    pub const SuperVerticalOffset = superVerticalOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#verticalOffset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn superVerticalOffset(self: QHeaderView) i32 {
        return qtc.QHeaderView_SuperVerticalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `updateGeometries` instead
    ///
    pub const UpdateGeometries = updateGeometries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#updateGeometries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn updateGeometries(self: QHeaderView) void {
        qtc.QHeaderView_UpdateGeometries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateGeometries` instead
    ///
    pub const OnUpdateGeometries = onUpdateGeometries;

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
    pub fn onUpdateGeometries(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnUpdateGeometries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateGeometries` instead
    ///
    pub const SuperUpdateGeometries = superUpdateGeometries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#updateGeometries)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn superUpdateGeometries(self: QHeaderView) void {
        qtc.QHeaderView_SuperUpdateGeometries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scrollContentsBy` instead
    ///
    pub const ScrollContentsBy = scrollContentsBy;

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
    pub fn scrollContentsBy(self: QHeaderView, dx: i32, dy: i32) void {
        qtc.QHeaderView_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `onScrollContentsBy` instead
    ///
    pub const OnScrollContentsBy = onScrollContentsBy;

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
    pub fn onScrollContentsBy(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superScrollContentsBy` instead
    ///
    pub const SuperScrollContentsBy = superScrollContentsBy;

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
    pub fn superScrollContentsBy(self: QHeaderView, dx: i32, dy: i32) void {
        qtc.QHeaderView_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `dataChanged` instead
    ///
    pub const DataChanged = dataChanged;

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
    pub fn dataChanged(self: QHeaderView, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QHeaderView_DataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### DEPRECATED: Use `onDataChanged` instead
    ///
    pub const OnDataChanged = onDataChanged;

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
    pub fn onDataChanged(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
        qtc.QHeaderView_OnDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDataChanged` instead
    ///
    pub const SuperDataChanged = superDataChanged;

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
    pub fn superDataChanged(self: QHeaderView, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QHeaderView_SuperDataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### DEPRECATED: Use `rowsInserted` instead
    ///
    pub const RowsInserted = rowsInserted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#rowsInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn rowsInserted(self: QHeaderView, _parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QHeaderView_RowsInserted(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `onRowsInserted` instead
    ///
    pub const OnRowsInserted = onRowsInserted;

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
    pub fn onRowsInserted(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnRowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRowsInserted` instead
    ///
    pub const SuperRowsInserted = superRowsInserted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#rowsInserted)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn superRowsInserted(self: QHeaderView, _parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QHeaderView_SuperRowsInserted(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `visualRect` instead
    ///
    pub const VisualRect = visualRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn visualRect(self: QHeaderView, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QHeaderView_VisualRect(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `onVisualRect` instead
    ///
    pub const OnVisualRect = onVisualRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onVisualRect(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex) callconv(.c) QRect) void {
        qtc.QHeaderView_OnVisualRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVisualRect` instead
    ///
    pub const SuperVisualRect = superVisualRect;

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
    pub fn superVisualRect(self: QHeaderView, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QHeaderView_SuperVisualRect(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `scrollTo` instead
    ///
    pub const ScrollTo = scrollTo;

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
    pub fn scrollTo(self: QHeaderView, index: anytype, hint: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QHeaderView_ScrollTo(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `onScrollTo` instead
    ///
    pub const OnScrollTo = onScrollTo;

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
    pub fn onScrollTo(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnScrollTo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superScrollTo` instead
    ///
    pub const SuperScrollTo = superScrollTo;

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
    pub fn superScrollTo(self: QHeaderView, index: anytype, hint: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QHeaderView_SuperScrollTo(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `indexAt` instead
    ///
    pub const IndexAt = indexAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#indexAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` p: QPoint `
    ///
    pub fn indexAt(self: QHeaderView, p: anytype) QModelIndex {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QHeaderView_IndexAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `onIndexAt` instead
    ///
    pub const OnIndexAt = onIndexAt;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIndexAt(self: QHeaderView, callback: *const fn (QHeaderView, QPoint) callconv(.c) QModelIndex) void {
        qtc.QHeaderView_OnIndexAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIndexAt` instead
    ///
    pub const SuperIndexAt = superIndexAt;

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
    pub fn superIndexAt(self: QHeaderView, p: anytype) QModelIndex {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QHeaderView_SuperIndexAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `isIndexHidden` instead
    ///
    pub const IsIndexHidden = isIndexHidden;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isIndexHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn isIndexHidden(self: QHeaderView, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QHeaderView_IsIndexHidden(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onIsIndexHidden` instead
    ///
    pub const OnIsIndexHidden = onIsIndexHidden;

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
    pub fn onIsIndexHidden(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex) callconv(.c) bool) void {
        qtc.QHeaderView_OnIsIndexHidden(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsIndexHidden` instead
    ///
    pub const SuperIsIndexHidden = superIsIndexHidden;

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
    pub fn superIsIndexHidden(self: QHeaderView, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QHeaderView_SuperIsIndexHidden(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `moveCursor` instead
    ///
    pub const MoveCursor = moveCursor;

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
    pub fn moveCursor(self: QHeaderView, param1: i32, param2: i32) QModelIndex {
        return .{ .ptr = qtc.QHeaderView_MoveCursor(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2)) };
    }

    /// ### DEPRECATED: Use `onMoveCursor` instead
    ///
    pub const OnMoveCursor = onMoveCursor;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMoveCursor(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32) callconv(.c) QModelIndex) void {
        qtc.QHeaderView_OnMoveCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMoveCursor` instead
    ///
    pub const SuperMoveCursor = superMoveCursor;

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
    pub fn superMoveCursor(self: QHeaderView, param1: i32, param2: i32) QModelIndex {
        return .{ .ptr = qtc.QHeaderView_SuperMoveCursor(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2)) };
    }

    /// ### DEPRECATED: Use `setSelection` instead
    ///
    pub const SetSelection = setSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _rect: QRect `
    ///
    /// ` flags: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn setSelection(self: QHeaderView, _rect: anytype, flags: i32) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QHeaderView_SetSelection(@ptrCast(self.ptr), @ptrCast(_rect.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `onSetSelection` instead
    ///
    pub const OnSetSelection = onSetSelection;

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
    pub fn onSetSelection(self: QHeaderView, callback: *const fn (QHeaderView, QRect, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnSetSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSelection` instead
    ///
    pub const SuperSetSelection = superSetSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSelection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _rect: QRect `
    ///
    /// ` flags: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn superSetSelection(self: QHeaderView, _rect: anytype, flags: i32) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QHeaderView_SuperSetSelection(@ptrCast(self.ptr), @ptrCast(_rect.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `visualRegionForSelection` instead
    ///
    pub const VisualRegionForSelection = visualRegionForSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualRegionForSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn visualRegionForSelection(self: QHeaderView, selection: anytype) QRegion {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.QHeaderView_VisualRegionForSelection(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### DEPRECATED: Use `onVisualRegionForSelection` instead
    ///
    pub const OnVisualRegionForSelection = onVisualRegionForSelection;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onVisualRegionForSelection(self: QHeaderView, callback: *const fn (QHeaderView, QItemSelection) callconv(.c) QRegion) void {
        qtc.QHeaderView_OnVisualRegionForSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVisualRegionForSelection` instead
    ///
    pub const SuperVisualRegionForSelection = superVisualRegionForSelection;

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
    pub fn superVisualRegionForSelection(self: QHeaderView, selection: anytype) QRegion {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.QHeaderView_SuperVisualRegionForSelection(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### DEPRECATED: Use `initStyleOptionForIndex` instead
    ///
    pub const InitStyleOptionForIndex = initStyleOptionForIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initStyleOptionForIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` option: QStyleOptionHeader `
    ///
    /// ` _logicalIndex: i32 `
    ///
    pub fn initStyleOptionForIndex(self: QHeaderView, option: anytype, _logicalIndex: i32) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionHeader;
        qtc.QHeaderView_InitStyleOptionForIndex(@ptrCast(self.ptr), @ptrCast(option.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `onInitStyleOptionForIndex` instead
    ///
    pub const OnInitStyleOptionForIndex = onInitStyleOptionForIndex;

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
    pub fn onInitStyleOptionForIndex(self: QHeaderView, callback: *const fn (QHeaderView, QStyleOptionHeader, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnInitStyleOptionForIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInitStyleOptionForIndex` instead
    ///
    pub const SuperInitStyleOptionForIndex = superInitStyleOptionForIndex;

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
    /// ` _logicalIndex: i32 `
    ///
    pub fn superInitStyleOptionForIndex(self: QHeaderView, option: anytype, _logicalIndex: i32) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionHeader;
        qtc.QHeaderView_SuperInitStyleOptionForIndex(@ptrCast(self.ptr), @ptrCast(option.ptr), @bitCast(_logicalIndex));
    }

    /// ### DEPRECATED: Use `initStyleOption` instead
    ///
    pub const InitStyleOption = initStyleOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initStyleOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` option: QStyleOptionHeader `
    ///
    pub fn initStyleOption(self: QHeaderView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionHeader;
        qtc.QHeaderView_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `onInitStyleOption` instead
    ///
    pub const OnInitStyleOption = onInitStyleOption;

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
    pub fn onInitStyleOption(self: QHeaderView, callback: *const fn (QHeaderView, QStyleOptionHeader) callconv(.c) void) void {
        qtc.QHeaderView_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInitStyleOption` instead
    ///
    pub const SuperInitStyleOption = superInitStyleOption;

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
    pub fn superInitStyleOption(self: QHeaderView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionHeader;
        qtc.QHeaderView_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeaderView.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeaderView.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `model` instead
    ///
    pub const Model = model;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn model(self: QHeaderView) QAbstractItemModel {
        return .{ .ptr = qtc.QAbstractItemView_Model(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `selectionModel` instead
    ///
    pub const SelectionModel = selectionModel;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn selectionModel(self: QHeaderView) QItemSelectionModel {
        return .{ .ptr = qtc.QAbstractItemView_SelectionModel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setItemDelegate` instead
    ///
    pub const SetItemDelegate = setItemDelegate;

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
    pub fn setItemDelegate(self: QHeaderView, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// ### DEPRECATED: Use `itemDelegate` instead
    ///
    pub const ItemDelegate = itemDelegate;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn itemDelegate(self: QHeaderView) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSelectionMode` instead
    ///
    pub const SetSelectionMode = setSelectionMode;

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
    pub fn setSelectionMode(self: QHeaderView, mode: i32) void {
        qtc.QAbstractItemView_SetSelectionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `selectionMode` instead
    ///
    pub const SelectionMode = selectionMode;

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
    pub fn selectionMode(self: QHeaderView) i32 {
        return qtc.QAbstractItemView_SelectionMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelectionBehavior` instead
    ///
    pub const SetSelectionBehavior = setSelectionBehavior;

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
    pub fn setSelectionBehavior(self: QHeaderView, behavior: i32) void {
        qtc.QAbstractItemView_SetSelectionBehavior(@ptrCast(self.ptr), @bitCast(behavior));
    }

    /// ### DEPRECATED: Use `selectionBehavior` instead
    ///
    pub const SelectionBehavior = selectionBehavior;

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
    pub fn selectionBehavior(self: QHeaderView) i32 {
        return qtc.QAbstractItemView_SelectionBehavior(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentIndex` instead
    ///
    pub const CurrentIndex = currentIndex;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn currentIndex(self: QHeaderView) QModelIndex {
        return .{ .ptr = qtc.QAbstractItemView_CurrentIndex(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rootIndex` instead
    ///
    pub const RootIndex = rootIndex;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn rootIndex(self: QHeaderView) QModelIndex {
        return .{ .ptr = qtc.QAbstractItemView_RootIndex(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setEditTriggers` instead
    ///
    pub const SetEditTriggers = setEditTriggers;

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
    pub fn setEditTriggers(self: QHeaderView, triggers: i32) void {
        qtc.QAbstractItemView_SetEditTriggers(@ptrCast(self.ptr), @bitCast(triggers));
    }

    /// ### DEPRECATED: Use `editTriggers` instead
    ///
    pub const EditTriggers = editTriggers;

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
    pub fn editTriggers(self: QHeaderView) i32 {
        return qtc.QAbstractItemView_EditTriggers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerticalScrollMode` instead
    ///
    pub const SetVerticalScrollMode = setVerticalScrollMode;

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
    pub fn setVerticalScrollMode(self: QHeaderView, mode: i32) void {
        qtc.QAbstractItemView_SetVerticalScrollMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `verticalScrollMode` instead
    ///
    pub const VerticalScrollMode = verticalScrollMode;

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
    pub fn verticalScrollMode(self: QHeaderView) i32 {
        return qtc.QAbstractItemView_VerticalScrollMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resetVerticalScrollMode` instead
    ///
    pub const ResetVerticalScrollMode = resetVerticalScrollMode;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn resetVerticalScrollMode(self: QHeaderView) void {
        qtc.QAbstractItemView_ResetVerticalScrollMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHorizontalScrollMode` instead
    ///
    pub const SetHorizontalScrollMode = setHorizontalScrollMode;

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
    pub fn setHorizontalScrollMode(self: QHeaderView, mode: i32) void {
        qtc.QAbstractItemView_SetHorizontalScrollMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `horizontalScrollMode` instead
    ///
    pub const HorizontalScrollMode = horizontalScrollMode;

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
    pub fn horizontalScrollMode(self: QHeaderView) i32 {
        return qtc.QAbstractItemView_HorizontalScrollMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resetHorizontalScrollMode` instead
    ///
    pub const ResetHorizontalScrollMode = resetHorizontalScrollMode;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn resetHorizontalScrollMode(self: QHeaderView) void {
        qtc.QAbstractItemView_ResetHorizontalScrollMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoScroll` instead
    ///
    pub const SetAutoScroll = setAutoScroll;

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
    pub fn setAutoScroll(self: QHeaderView, enable: bool) void {
        qtc.QAbstractItemView_SetAutoScroll(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `hasAutoScroll` instead
    ///
    pub const HasAutoScroll = hasAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn hasAutoScroll(self: QHeaderView) bool {
        return qtc.QAbstractItemView_HasAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoScrollMargin` instead
    ///
    pub const SetAutoScrollMargin = setAutoScrollMargin;

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
    pub fn setAutoScrollMargin(self: QHeaderView, margin: i32) void {
        qtc.QAbstractItemView_SetAutoScrollMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### DEPRECATED: Use `autoScrollMargin` instead
    ///
    pub const AutoScrollMargin = autoScrollMargin;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn autoScrollMargin(self: QHeaderView) i32 {
        return qtc.QAbstractItemView_AutoScrollMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabKeyNavigation` instead
    ///
    pub const SetTabKeyNavigation = setTabKeyNavigation;

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
    pub fn setTabKeyNavigation(self: QHeaderView, enable: bool) void {
        qtc.QAbstractItemView_SetTabKeyNavigation(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `tabKeyNavigation` instead
    ///
    pub const TabKeyNavigation = tabKeyNavigation;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn tabKeyNavigation(self: QHeaderView) bool {
        return qtc.QAbstractItemView_TabKeyNavigation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDropIndicatorShown` instead
    ///
    pub const SetDropIndicatorShown = setDropIndicatorShown;

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
    pub fn setDropIndicatorShown(self: QHeaderView, enable: bool) void {
        qtc.QAbstractItemView_SetDropIndicatorShown(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `showDropIndicator` instead
    ///
    pub const ShowDropIndicator = showDropIndicator;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn showDropIndicator(self: QHeaderView) bool {
        return qtc.QAbstractItemView_ShowDropIndicator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDragEnabled` instead
    ///
    pub const SetDragEnabled = setDragEnabled;

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
    pub fn setDragEnabled(self: QHeaderView, enable: bool) void {
        qtc.QAbstractItemView_SetDragEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `dragEnabled` instead
    ///
    pub const DragEnabled = dragEnabled;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn dragEnabled(self: QHeaderView) bool {
        return qtc.QAbstractItemView_DragEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDragDropOverwriteMode` instead
    ///
    pub const SetDragDropOverwriteMode = setDragDropOverwriteMode;

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
    pub fn setDragDropOverwriteMode(self: QHeaderView, overwrite: bool) void {
        qtc.QAbstractItemView_SetDragDropOverwriteMode(@ptrCast(self.ptr), overwrite);
    }

    /// ### DEPRECATED: Use `dragDropOverwriteMode` instead
    ///
    pub const DragDropOverwriteMode = dragDropOverwriteMode;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn dragDropOverwriteMode(self: QHeaderView) bool {
        return qtc.QAbstractItemView_DragDropOverwriteMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDragDropMode` instead
    ///
    pub const SetDragDropMode = setDragDropMode;

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
    pub fn setDragDropMode(self: QHeaderView, behavior: i32) void {
        qtc.QAbstractItemView_SetDragDropMode(@ptrCast(self.ptr), @bitCast(behavior));
    }

    /// ### DEPRECATED: Use `dragDropMode` instead
    ///
    pub const DragDropMode = dragDropMode;

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
    pub fn dragDropMode(self: QHeaderView) i32 {
        return qtc.QAbstractItemView_DragDropMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultDropAction` instead
    ///
    pub const SetDefaultDropAction = setDefaultDropAction;

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
    pub fn setDefaultDropAction(self: QHeaderView, dropAction: i32) void {
        qtc.QAbstractItemView_SetDefaultDropAction(@ptrCast(self.ptr), @bitCast(dropAction));
    }

    /// ### DEPRECATED: Use `defaultDropAction` instead
    ///
    pub const DefaultDropAction = defaultDropAction;

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
    pub fn defaultDropAction(self: QHeaderView) i32 {
        return qtc.QAbstractItemView_DefaultDropAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAlternatingRowColors` instead
    ///
    pub const SetAlternatingRowColors = setAlternatingRowColors;

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
    pub fn setAlternatingRowColors(self: QHeaderView, enable: bool) void {
        qtc.QAbstractItemView_SetAlternatingRowColors(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `alternatingRowColors` instead
    ///
    pub const AlternatingRowColors = alternatingRowColors;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn alternatingRowColors(self: QHeaderView) bool {
        return qtc.QAbstractItemView_AlternatingRowColors(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIconSize` instead
    ///
    pub const SetIconSize = setIconSize;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _size: QSize `
    ///
    pub fn setIconSize(self: QHeaderView, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QAbstractItemView_SetIconSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `iconSize` instead
    ///
    pub const IconSize = iconSize;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn iconSize(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QAbstractItemView_IconSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTextElideMode` instead
    ///
    pub const SetTextElideMode = setTextElideMode;

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
    pub fn setTextElideMode(self: QHeaderView, mode: i32) void {
        qtc.QAbstractItemView_SetTextElideMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `textElideMode` instead
    ///
    pub const TextElideMode = textElideMode;

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
    pub fn textElideMode(self: QHeaderView) i32 {
        return qtc.QAbstractItemView_TextElideMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sizeHintForIndex` instead
    ///
    pub const SizeHintForIndex = sizeHintForIndex;

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
    pub fn sizeHintForIndex(self: QHeaderView, index: anytype) QSize {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_SizeHintForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `openPersistentEditor` instead
    ///
    pub const OpenPersistentEditor = openPersistentEditor;

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
    pub fn openPersistentEditor(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_OpenPersistentEditor(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `closePersistentEditor` instead
    ///
    pub const ClosePersistentEditor = closePersistentEditor;

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
    pub fn closePersistentEditor(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_ClosePersistentEditor(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `isPersistentEditorOpen` instead
    ///
    pub const IsPersistentEditorOpen = isPersistentEditorOpen;

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
    pub fn isPersistentEditorOpen(self: QHeaderView, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QAbstractItemView_IsPersistentEditorOpen(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `setIndexWidget` instead
    ///
    pub const SetIndexWidget = setIndexWidget;

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
    pub fn setIndexWidget(self: QHeaderView, index: anytype, widget: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractItemView_SetIndexWidget(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `indexWidget` instead
    ///
    pub const IndexWidget = indexWidget;

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
    pub fn indexWidget(self: QHeaderView, index: anytype) QWidget {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_IndexWidget(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `setItemDelegateForRow` instead
    ///
    pub const SetItemDelegateForRow = setItemDelegateForRow;

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
    pub fn setItemDelegateForRow(self: QHeaderView, row: i32, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegateForRow(@ptrCast(self.ptr), @bitCast(row), @ptrCast(delegate.ptr));
    }

    /// ### DEPRECATED: Use `itemDelegateForRow` instead
    ///
    pub const ItemDelegateForRow = itemDelegateForRow;

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
    pub fn itemDelegateForRow(self: QHeaderView, row: i32) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegateForRow(@ptrCast(self.ptr), @bitCast(row)) };
    }

    /// ### DEPRECATED: Use `setItemDelegateForColumn` instead
    ///
    pub const SetItemDelegateForColumn = setItemDelegateForColumn;

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
    pub fn setItemDelegateForColumn(self: QHeaderView, column: i32, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegateForColumn(@ptrCast(self.ptr), @bitCast(column), @ptrCast(delegate.ptr));
    }

    /// ### DEPRECATED: Use `itemDelegateForColumn` instead
    ///
    pub const ItemDelegateForColumn = itemDelegateForColumn;

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
    pub fn itemDelegateForColumn(self: QHeaderView, column: i32) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegateForColumn(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `itemDelegate2` instead
    ///
    pub const ItemDelegate2 = itemDelegate2;

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
    pub fn itemDelegate2(self: QHeaderView, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegate2(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `edit` instead
    ///
    pub const Edit = edit;

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
    pub fn edit(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Edit(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `clearSelection` instead
    ///
    pub const ClearSelection = clearSelection;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn clearSelection(self: QHeaderView) void {
        qtc.QAbstractItemView_ClearSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentIndex` instead
    ///
    pub const SetCurrentIndex = setCurrentIndex;

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
    pub fn setCurrentIndex(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_SetCurrentIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `scrollToTop` instead
    ///
    pub const ScrollToTop = scrollToTop;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn scrollToTop(self: QHeaderView) void {
        qtc.QAbstractItemView_ScrollToTop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scrollToBottom` instead
    ///
    pub const ScrollToBottom = scrollToBottom;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn scrollToBottom(self: QHeaderView) void {
        qtc.QAbstractItemView_ScrollToBottom(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

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
    pub fn update(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Update(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `pressed` instead
    ///
    pub const Pressed = pressed;

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
    pub fn pressed(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Pressed(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onPressed` instead
    ///
    pub const OnPressed = onPressed;

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
    pub fn onPressed(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clicked` instead
    ///
    pub const Clicked = clicked;

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
    pub fn clicked(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Clicked(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onClicked` instead
    ///
    pub const OnClicked = onClicked;

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
    pub fn onClicked(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doubleClicked` instead
    ///
    pub const DoubleClicked = doubleClicked;

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
    pub fn doubleClicked(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_DoubleClicked(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onDoubleClicked` instead
    ///
    pub const OnDoubleClicked = onDoubleClicked;

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
    pub fn onDoubleClicked(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activated` instead
    ///
    pub const Activated = activated;

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
    pub fn activated(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Activated(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onActivated` instead
    ///
    pub const OnActivated = onActivated;

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
    pub fn onActivated(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Activated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `entered` instead
    ///
    pub const Entered = entered;

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
    pub fn entered(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Entered(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onEntered` instead
    ///
    pub const OnEntered = onEntered;

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
    pub fn onEntered(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Entered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `viewportEntered` instead
    ///
    pub const ViewportEntered = viewportEntered;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn viewportEntered(self: QHeaderView) void {
        qtc.QAbstractItemView_ViewportEntered(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onViewportEntered` instead
    ///
    pub const OnViewportEntered = onViewportEntered;

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
    pub fn onViewportEntered(self: QHeaderView, callback: *const fn (QHeaderView) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_ViewportEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `iconSizeChanged` instead
    ///
    pub const IconSizeChanged = iconSizeChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _size: QSize `
    ///
    pub fn iconSizeChanged(self: QHeaderView, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QAbstractItemView_IconSizeChanged(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `onIconSizeChanged` instead
    ///
    pub const OnIconSizeChanged = onIconSizeChanged;

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
    pub fn onIconSizeChanged(self: QHeaderView, callback: *const fn (QHeaderView, QSize) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_IconSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `verticalScrollBarPolicy` instead
    ///
    pub const VerticalScrollBarPolicy = verticalScrollBarPolicy;

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
    pub fn verticalScrollBarPolicy(self: QHeaderView) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerticalScrollBarPolicy` instead
    ///
    pub const SetVerticalScrollBarPolicy = setVerticalScrollBarPolicy;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn setVerticalScrollBarPolicy(self: QHeaderView, _verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(_verticalScrollBarPolicy));
    }

    /// ### DEPRECATED: Use `verticalScrollBar` instead
    ///
    pub const VerticalScrollBar = verticalScrollBar;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn verticalScrollBar(self: QHeaderView) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setVerticalScrollBar` instead
    ///
    pub const SetVerticalScrollBar = setVerticalScrollBar;

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
    pub fn setVerticalScrollBar(self: QHeaderView, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// ### DEPRECATED: Use `horizontalScrollBarPolicy` instead
    ///
    pub const HorizontalScrollBarPolicy = horizontalScrollBarPolicy;

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
    pub fn horizontalScrollBarPolicy(self: QHeaderView) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHorizontalScrollBarPolicy` instead
    ///
    pub const SetHorizontalScrollBarPolicy = setHorizontalScrollBarPolicy;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn setHorizontalScrollBarPolicy(self: QHeaderView, _horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(_horizontalScrollBarPolicy));
    }

    /// ### DEPRECATED: Use `horizontalScrollBar` instead
    ///
    pub const HorizontalScrollBar = horizontalScrollBar;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn horizontalScrollBar(self: QHeaderView) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setHorizontalScrollBar` instead
    ///
    pub const SetHorizontalScrollBar = setHorizontalScrollBar;

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
    pub fn setHorizontalScrollBar(self: QHeaderView, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// ### DEPRECATED: Use `cornerWidget` instead
    ///
    pub const CornerWidget = cornerWidget;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn cornerWidget(self: QHeaderView) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCornerWidget` instead
    ///
    pub const SetCornerWidget = setCornerWidget;

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
    pub fn setCornerWidget(self: QHeaderView, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `addScrollBarWidget` instead
    ///
    pub const AddScrollBarWidget = addScrollBarWidget;

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
    pub fn addScrollBarWidget(self: QHeaderView, widget: anytype, alignment: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `scrollBarWidgets` instead
    ///
    pub const ScrollBarWidgets = scrollBarWidgets;

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
    pub fn scrollBarWidgets(self: QHeaderView, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("QHeaderView.scrollBarWidgets: Memory allocation failed");
        const _data_val: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `viewport` instead
    ///
    pub const Viewport = viewport;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn viewport(self: QHeaderView) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_Viewport(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setViewport` instead
    ///
    pub const SetViewport = setViewport;

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
    pub fn setViewport(self: QHeaderView, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `maximumViewportSize` instead
    ///
    pub const MaximumViewportSize = maximumViewportSize;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn maximumViewportSize(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sizeAdjustPolicy` instead
    ///
    pub const SizeAdjustPolicy = sizeAdjustPolicy;

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
    pub fn sizeAdjustPolicy(self: QHeaderView) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSizeAdjustPolicy` instead
    ///
    pub const SetSizeAdjustPolicy = setSizeAdjustPolicy;

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
    pub fn setSizeAdjustPolicy(self: QHeaderView, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `frameStyle` instead
    ///
    pub const FrameStyle = frameStyle;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn frameStyle(self: QHeaderView) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFrameStyle` instead
    ///
    pub const SetFrameStyle = setFrameStyle;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _frameStyle: i32 `
    ///
    pub fn setFrameStyle(self: QHeaderView, _frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self.ptr), @bitCast(_frameStyle));
    }

    /// ### DEPRECATED: Use `frameWidth` instead
    ///
    pub const FrameWidth = frameWidth;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn frameWidth(self: QHeaderView) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `frameShape` instead
    ///
    pub const FrameShape = frameShape;

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
    pub fn frameShape(self: QHeaderView) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFrameShape` instead
    ///
    pub const SetFrameShape = setFrameShape;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _frameShape: qframe_enums.Shape `
    ///
    pub fn setFrameShape(self: QHeaderView, _frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self.ptr), @bitCast(_frameShape));
    }

    /// ### DEPRECATED: Use `frameShadow` instead
    ///
    pub const FrameShadow = frameShadow;

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
    pub fn frameShadow(self: QHeaderView) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFrameShadow` instead
    ///
    pub const SetFrameShadow = setFrameShadow;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _frameShadow: qframe_enums.Shadow `
    ///
    pub fn setFrameShadow(self: QHeaderView, _frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self.ptr), @bitCast(_frameShadow));
    }

    /// ### DEPRECATED: Use `lineWidth` instead
    ///
    pub const LineWidth = lineWidth;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn lineWidth(self: QHeaderView) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineWidth` instead
    ///
    pub const SetLineWidth = setLineWidth;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _lineWidth: i32 `
    ///
    pub fn setLineWidth(self: QHeaderView, _lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self.ptr), @bitCast(_lineWidth));
    }

    /// ### DEPRECATED: Use `midLineWidth` instead
    ///
    pub const MidLineWidth = midLineWidth;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn midLineWidth(self: QHeaderView) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMidLineWidth` instead
    ///
    pub const SetMidLineWidth = setMidLineWidth;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _midLineWidth: i32 `
    ///
    pub fn setMidLineWidth(self: QHeaderView, _midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(_midLineWidth));
    }

    /// ### DEPRECATED: Use `frameRect` instead
    ///
    pub const FrameRect = frameRect;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn frameRect(self: QHeaderView) QRect {
        return .{ .ptr = qtc.QFrame_FrameRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFrameRect` instead
    ///
    pub const SetFrameRect = setFrameRect;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    /// ` _frameRect: QRect `
    ///
    pub fn setFrameRect(self: QHeaderView, _frameRect: anytype) void {
        comptime _ = @TypeOf(_frameRect)._is_QRect;
        qtc.QFrame_SetFrameRect(@ptrCast(self.ptr), @ptrCast(_frameRect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// Upcasts to a QPaintDevice object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeaderView `
    ///
    pub fn asQPaintDevice(self: QHeaderView) QPaintDevice {
        return .{ .ptr = qtc.QWidget_AsQPaintDevice(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// Downcasts to a QHeaderView object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qpaintdevice: QPaintDevice `
    ///
    pub fn fromQPaintDevice(_qpaintdevice: anytype) QHeaderView {
        comptime _ = @TypeOf(_qpaintdevice)._is_QPaintDevice;
        return .{ .ptr = @ptrCast(qtc.QWidget_FromQPaintDevice(@ptrCast(_qpaintdevice.ptr))) };
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
    /// ` self: QHeaderView `
    ///
    pub fn winId(self: QHeaderView) usize {
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
    /// ` self: QHeaderView `
    ///
    pub fn createWinId(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn internalWinId(self: QHeaderView) usize {
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
    /// ` self: QHeaderView `
    ///
    pub fn effectiveWinId(self: QHeaderView) usize {
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
    /// ` self: QHeaderView `
    ///
    pub fn style(self: QHeaderView) QStyle {
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
    /// ` self: QHeaderView `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: QHeaderView, _style: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn isTopLevel(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn isWindow(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn isModal(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn windowModality(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    /// ` _windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn setWindowModality(self: QHeaderView, _windowModality: i32) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn isEnabled(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isEnabledTo(self: QHeaderView, param1: anytype) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QHeaderView, enabled: bool) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` disabled: bool `
    ///
    pub fn setDisabled(self: QHeaderView, disabled: bool) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` windowModified: bool `
    ///
    pub fn setWindowModified(self: QHeaderView, windowModified: bool) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn frameGeometry(self: QHeaderView) QRect {
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
    /// ` self: QHeaderView `
    ///
    pub fn geometry(self: QHeaderView) QRect {
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
    /// ` self: QHeaderView `
    ///
    pub fn normalGeometry(self: QHeaderView) QRect {
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
    /// ` self: QHeaderView `
    ///
    pub fn x(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    pub fn y(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    pub fn pos(self: QHeaderView) QPoint {
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
    /// ` self: QHeaderView `
    ///
    pub fn frameSize(self: QHeaderView) QSize {
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
    /// ` self: QHeaderView `
    ///
    pub fn size(self: QHeaderView) QSize {
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
    /// ` self: QHeaderView `
    ///
    pub fn width(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    pub fn height(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    pub fn rect(self: QHeaderView) QRect {
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
    /// ` self: QHeaderView `
    ///
    pub fn childrenRect(self: QHeaderView) QRect {
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
    /// ` self: QHeaderView `
    ///
    pub fn childrenRegion(self: QHeaderView) QRegion {
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
    /// ` self: QHeaderView `
    ///
    pub fn minimumSize(self: QHeaderView) QSize {
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
    /// ` self: QHeaderView `
    ///
    pub fn maximumSize(self: QHeaderView) QSize {
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
    /// ` self: QHeaderView `
    ///
    pub fn minimumWidth(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    pub fn minimumHeight(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    pub fn maximumWidth(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    pub fn maximumHeight(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    /// ` _minimumSize: QSize `
    ///
    pub fn setMinimumSize(self: QHeaderView, _minimumSize: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumSize2(self: QHeaderView, minw: i32, minh: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` _maximumSize: QSize `
    ///
    pub fn setMaximumSize(self: QHeaderView, _maximumSize: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumSize2(self: QHeaderView, maxw: i32, maxh: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` minw: i32 `
    ///
    pub fn setMinimumWidth(self: QHeaderView, minw: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumHeight(self: QHeaderView, minh: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` maxw: i32 `
    ///
    pub fn setMaximumWidth(self: QHeaderView, maxw: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumHeight(self: QHeaderView, maxh: i32) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn sizeIncrement(self: QHeaderView) QSize {
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
    /// ` self: QHeaderView `
    ///
    /// ` _sizeIncrement: QSize `
    ///
    pub fn setSizeIncrement(self: QHeaderView, _sizeIncrement: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setSizeIncrement2(self: QHeaderView, w: i32, h: i32) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn baseSize(self: QHeaderView) QSize {
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
    /// ` self: QHeaderView `
    ///
    /// ` _baseSize: QSize `
    ///
    pub fn setBaseSize(self: QHeaderView, _baseSize: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn setBaseSize2(self: QHeaderView, basew: i32, baseh: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn setFixedSize(self: QHeaderView, fixedSize: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedSize2(self: QHeaderView, w: i32, h: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` w: i32 `
    ///
    pub fn setFixedWidth(self: QHeaderView, w: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedHeight(self: QHeaderView, h: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToGlobal(self: QHeaderView, param1: anytype) QPointF {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToGlobal2(self: QHeaderView, param1: anytype) QPoint {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromGlobal(self: QHeaderView, param1: anytype) QPointF {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromGlobal2(self: QHeaderView, param1: anytype) QPoint {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToParent(self: QHeaderView, param1: anytype) QPointF {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToParent2(self: QHeaderView, param1: anytype) QPoint {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromParent(self: QHeaderView, param1: anytype) QPointF {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromParent2(self: QHeaderView, param1: anytype) QPoint {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapTo(self: QHeaderView, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapTo2(self: QHeaderView, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapFrom(self: QHeaderView, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapFrom2(self: QHeaderView, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QHeaderView `
    ///
    pub fn window(self: QHeaderView) QWidget {
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
    /// ` self: QHeaderView `
    ///
    pub fn nativeParentWidget(self: QHeaderView) QWidget {
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
    /// ` self: QHeaderView `
    ///
    pub fn topLevelWidget(self: QHeaderView) QWidget {
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
    /// ` self: QHeaderView `
    ///
    pub fn palette(self: QHeaderView) QPalette {
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
    /// ` self: QHeaderView `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QHeaderView, _palette: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` _backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setBackgroundRole(self: QHeaderView, _backgroundRole: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn backgroundRole(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    /// ` _foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setForegroundRole(self: QHeaderView, _foregroundRole: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn foregroundRole(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    pub fn font(self: QHeaderView) QFont {
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
    /// ` self: QHeaderView `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QHeaderView, _font: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn fontMetrics(self: QHeaderView) QFontMetrics {
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
    /// ` self: QHeaderView `
    ///
    pub fn fontInfo(self: QHeaderView) QFontInfo {
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
    /// ` self: QHeaderView `
    ///
    pub fn cursor(self: QHeaderView) QCursor {
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
    /// ` self: QHeaderView `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QHeaderView, _cursor: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn unsetCursor(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` enable: bool `
    ///
    pub fn setMouseTracking(self: QHeaderView, enable: bool) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn hasMouseTracking(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn underMouse(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabletTracking(self: QHeaderView, enable: bool) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn hasTabletTracking(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: QHeaderView, _mask: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` _mask: QRegion `
    ///
    pub fn setMask2(self: QHeaderView, _mask: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn mask(self: QHeaderView) QRegion {
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
    /// ` self: QHeaderView `
    ///
    pub fn clearMask(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn render(self: QHeaderView, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        const target_ = if (@hasDecl(@TypeOf(target), "asQPaintDevice")) target.asQPaintDevice() else target;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target_.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` painter: QPainter `
    ///
    pub fn render2(self: QHeaderView, painter: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn grab(self: QHeaderView) QPixmap {
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
    /// ` self: QHeaderView `
    ///
    pub fn graphicsEffect(self: QHeaderView) QGraphicsEffect {
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
    /// ` self: QHeaderView `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: QHeaderView, effect: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: QHeaderView, typeVal: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: QHeaderView, typeVal: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` _windowTitle: []const u8 `
    ///
    pub fn setWindowTitle(self: QHeaderView, _windowTitle: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` _styleSheet: []const u8 `
    ///
    pub fn setStyleSheet(self: QHeaderView, _styleSheet: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleSheet(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeaderView.styleSheet: Memory allocation failed");
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowTitle(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeaderView.windowTitle: Memory allocation failed");
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
    /// ` self: QHeaderView `
    ///
    /// ` icon: QIcon `
    ///
    pub fn setWindowIcon(self: QHeaderView, icon: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn windowIcon(self: QHeaderView) QIcon {
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
    /// ` self: QHeaderView `
    ///
    /// ` _windowIconText: []const u8 `
    ///
    pub fn setWindowIconText(self: QHeaderView, _windowIconText: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowIconText(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeaderView.windowIconText: Memory allocation failed");
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
    /// ` self: QHeaderView `
    ///
    /// ` _windowRole: []const u8 `
    ///
    pub fn setWindowRole(self: QHeaderView, _windowRole: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowRole(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeaderView.windowRole: Memory allocation failed");
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
    /// ` self: QHeaderView `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn setWindowFilePath(self: QHeaderView, filePath: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowFilePath(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeaderView.windowFilePath: Memory allocation failed");
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
    /// ` self: QHeaderView `
    ///
    /// ` level: f64 `
    ///
    pub fn setWindowOpacity(self: QHeaderView, level: f64) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn windowOpacity(self: QHeaderView) f64 {
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
    /// ` self: QHeaderView `
    ///
    pub fn isWindowModified(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QHeaderView, _toolTip: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeaderView.toolTip: Memory allocation failed");
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
    /// ` self: QHeaderView `
    ///
    /// ` msec: i32 `
    ///
    pub fn setToolTipDuration(self: QHeaderView, msec: i32) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn toolTipDuration(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: QHeaderView, _statusTip: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeaderView.statusTip: Memory allocation failed");
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
    /// ` self: QHeaderView `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: QHeaderView, _whatsThis: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeaderView.whatsThis: Memory allocation failed");
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleName(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeaderView.accessibleName: Memory allocation failed");
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
    /// ` self: QHeaderView `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setAccessibleName(self: QHeaderView, name: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleDescription(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeaderView.accessibleDescription: Memory allocation failed");
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
    /// ` self: QHeaderView `
    ///
    /// ` description: []const u8 `
    ///
    pub fn setAccessibleDescription(self: QHeaderView, description: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QHeaderView, direction: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    pub fn unsetLayoutDirection(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QHeaderView, _locale: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn locale(self: QHeaderView) QLocale {
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
    /// ` self: QHeaderView `
    ///
    pub fn unsetLocale(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn isRightToLeft(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn isLeftToRight(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn setFocus(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn isActiveWindow(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn activateWindow(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn clearFocus(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: QHeaderView, reason: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: QHeaderView, policy: i32) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn hasFocus(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` _focusProxy: QWidget `
    ///
    pub fn setFocusProxy(self: QHeaderView, _focusProxy: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn focusProxy(self: QHeaderView) QWidget {
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
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn contextMenuPolicy(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn setContextMenuPolicy(self: QHeaderView, policy: i32) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn grabMouse(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QCursor `
    ///
    pub fn grabMouse2(self: QHeaderView, param1: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn releaseMouse(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn grabKeyboard(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn releaseKeyboard(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn grabShortcut(self: QHeaderView, key: anytype) i32 {
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
    /// ` self: QHeaderView `
    ///
    /// ` id: i32 `
    ///
    pub fn releaseShortcut(self: QHeaderView, id: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutEnabled(self: QHeaderView, id: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutAutoRepeat(self: QHeaderView, id: i32) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn updatesEnabled(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` enable: bool `
    ///
    pub fn setUpdatesEnabled(self: QHeaderView, enable: bool) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn graphicsProxyWidget(self: QHeaderView) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
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
    /// ` self: QHeaderView `
    ///
    pub fn repaint(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn update2(self: QHeaderView, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QRect `
    ///
    pub fn update3(self: QHeaderView, param1: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QRegion `
    ///
    pub fn update4(self: QHeaderView, param1: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn repaint2(self: QHeaderView, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QRect `
    ///
    pub fn repaint3(self: QHeaderView, param1: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QRegion `
    ///
    pub fn repaint4(self: QHeaderView, param1: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` hidden: bool `
    ///
    pub fn setHidden(self: QHeaderView, hidden: bool) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn show(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn hide(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn showMinimized(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn showMaximized(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn showFullScreen(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn showNormal(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn close(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn raise(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn lower(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QWidget `
    ///
    pub fn stackUnder(self: QHeaderView, param1: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn move(self: QHeaderView, _x: i32, _y: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn move2(self: QHeaderView, param1: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize(self: QHeaderView, w: i32, h: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QSize `
    ///
    pub fn resize2(self: QHeaderView, param1: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: QHeaderView, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry2(self: QHeaderView, _geometry: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn saveGeometry(self: QHeaderView, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QHeaderView.saveGeometry: Memory allocation failed");
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
    /// ` self: QHeaderView `
    ///
    /// ` _geometry: []u8 `
    ///
    pub fn restoreGeometry(self: QHeaderView, _geometry: []u8) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn adjustSize(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn isVisible(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isVisibleTo(self: QHeaderView, param1: anytype) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn isHidden(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn isMinimized(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn isMaximized(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn isFullScreen(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    /// ` _state: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: QHeaderView, _state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(_state));
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
    /// ` self: QHeaderView `
    ///
    /// ` _state: flag of qnamespace_enums.WindowState `
    ///
    pub fn overrideWindowState(self: QHeaderView, _state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(_state));
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
    /// ` self: QHeaderView `
    ///
    pub fn sizePolicy(self: QHeaderView) QSizePolicy {
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
    /// ` self: QHeaderView `
    ///
    /// ` _sizePolicy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: QHeaderView, _sizePolicy: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: QHeaderView, horizontal: i32, vertical: i32) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn visibleRegion(self: QHeaderView) QRegion {
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
    pub fn setContentsMargins(self: QHeaderView, left: i32, top: i32, right: i32, bottom: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` margins: QMargins `
    ///
    pub fn setContentsMargins2(self: QHeaderView, margins: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn contentsMargins(self: QHeaderView) QMargins {
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
    /// ` self: QHeaderView `
    ///
    pub fn contentsRect(self: QHeaderView) QRect {
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
    /// ` self: QHeaderView `
    ///
    pub fn layout(self: QHeaderView) QLayout {
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
    /// ` self: QHeaderView `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: QHeaderView, _layout: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn updateGeometry(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn setParent(self: QHeaderView, _parent: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn setParent2(self: QHeaderView, _parent: anytype, f: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scroll(self: QHeaderView, dx: i32, dy: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn scroll2(self: QHeaderView, dx: i32, dy: i32, param3: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn focusWidget(self: QHeaderView) QWidget {
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
    /// ` self: QHeaderView `
    ///
    pub fn nextInFocusChain(self: QHeaderView) QWidget {
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
    /// ` self: QHeaderView `
    ///
    pub fn previousInFocusChain(self: QHeaderView) QWidget {
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
    /// ` self: QHeaderView `
    ///
    pub fn acceptDrops(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: QHeaderView, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `addAction` instead
    ///
    pub const AddAction = addAction;

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
    pub fn addAction(self: QHeaderView, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: QHeaderView, _actions: []QAction) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` before: QAction `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: QHeaderView, before: anytype, _actions: []QAction) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn insertAction(self: QHeaderView, before: anytype, action: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAction(self: QHeaderView, action: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: QHeaderView, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("QHeaderView.actions: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addAction2` instead
    ///
    pub const AddAction2 = addAction2;

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
    pub fn addAction2(self: QHeaderView, text: []const u8) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QWidget_AddAction2(@ptrCast(self.ptr), text_str) };
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
    /// ` self: QHeaderView `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction3(self: QHeaderView, icon: anytype, text: []const u8) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
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
    /// ` self: QHeaderView `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction4(self: QHeaderView, text: []const u8, shortcut: anytype) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
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
    /// ` self: QHeaderView `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction5(self: QHeaderView, icon: anytype, text: []const u8, shortcut: anytype) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
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
    /// ` self: QHeaderView `
    ///
    pub fn parentWidget(self: QHeaderView) QWidget {
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
    /// ` self: QHeaderView `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlags(self: QHeaderView, typeVal: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn windowFlags(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlag(self: QHeaderView, param1: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn overrideWindowFlags(self: QHeaderView, typeVal: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn windowType(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn childAt(self: QHeaderView, _x: i32, _y: i32) QWidget {
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
    /// ` self: QHeaderView `
    ///
    /// ` p: QPoint `
    ///
    pub fn childAt2(self: QHeaderView, p: anytype) QWidget {
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
    /// ` self: QHeaderView `
    ///
    /// ` p: QPointF `
    ///
    pub fn childAt3(self: QHeaderView, p: anytype) QWidget {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn setAttribute(self: QHeaderView, param1: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn testAttribute(self: QHeaderView, param1: i32) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn ensurePolished(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` child: QWidget `
    ///
    pub fn isAncestorOf(self: QHeaderView, child: anytype) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn autoFillBackground(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoFillBackground(self: QHeaderView, enabled: bool) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn backingStore(self: QHeaderView) QBackingStore {
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
    /// ` self: QHeaderView `
    ///
    pub fn windowHandle(self: QHeaderView) QWindow {
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
    /// ` self: QHeaderView `
    ///
    pub fn screen(self: QHeaderView) QScreen {
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
    /// ` self: QHeaderView `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: QHeaderView, _screen: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` title: []const u8 `
    ///
    pub fn windowTitleChanged(self: QHeaderView, title: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: QHeaderView, callback: *const fn (QHeaderView, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` icon: QIcon `
    ///
    pub fn windowIconChanged(self: QHeaderView, icon: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, icon: QIcon) callconv(.c) void `
    ///
    pub fn onWindowIconChanged(self: QHeaderView, callback: *const fn (QHeaderView, QIcon) callconv(.c) void) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn windowIconTextChanged(self: QHeaderView, iconText: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowIconTextChanged(self: QHeaderView, callback: *const fn (QHeaderView, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn customContextMenuRequested(self: QHeaderView, _pos: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, pos: QPoint) callconv(.c) void `
    ///
    pub fn onCustomContextMenuRequested(self: QHeaderView, callback: *const fn (QHeaderView, QPoint) callconv(.c) void) void {
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
    /// ` self: QHeaderView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: QHeaderView) i32 {
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
    /// ` self: QHeaderView `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: QHeaderView, hints: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render22(self: QHeaderView, target: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        const target_ = if (@hasDecl(@TypeOf(target), "asQPaintDevice")) target.asQPaintDevice() else target;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render22(@ptrCast(self.ptr), @ptrCast(target_.ptr), @ptrCast(targetOffset.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render3(self: QHeaderView, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        const target_ = if (@hasDecl(@TypeOf(target), "asQPaintDevice")) target.asQPaintDevice() else target;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render3(@ptrCast(self.ptr), @ptrCast(target_.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
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
    pub fn render4(self: QHeaderView, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        const target_ = if (@hasDecl(@TypeOf(target), "asQPaintDevice")) target.asQPaintDevice() else target;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render4(@ptrCast(self.ptr), @ptrCast(target_.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
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
    /// ` self: QHeaderView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render23(self: QHeaderView, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render32(self: QHeaderView, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    pub fn render42(self: QHeaderView, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn grab1(self: QHeaderView, rectangle: anytype) QPixmap {
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
    /// ` self: QHeaderView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: QHeaderView, typeVal: i32, flags: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn grabShortcut2(self: QHeaderView, key: anytype, context: i32) i32 {
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
    /// ` self: QHeaderView `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutEnabled2(self: QHeaderView, id: i32, enable: bool) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutAutoRepeat2(self: QHeaderView, id: i32, enable: bool) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setWindowFlag2(self: QHeaderView, param1: i32, on: bool) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute2(self: QHeaderView, param1: i32, on: bool) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QHeaderView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeaderView.objectName: Memory allocation failed");
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
    /// ` self: QHeaderView `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QHeaderView, name: []const u8) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn isWidgetType(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn isWindowType(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn isQuickItemType(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn signalsBlocked(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QHeaderView, b: bool) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn thread(self: QHeaderView) QThread {
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
    /// ` self: QHeaderView `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QHeaderView, _thread: anytype) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QHeaderView, interval: i32) i32 {
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
    /// ` self: QHeaderView `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QHeaderView, time: i64) i32 {
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
    /// ` self: QHeaderView `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QHeaderView, id: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QHeaderView, id: i32) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QHeaderView, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QHeaderView.children: Memory allocation failed");
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
    /// ` self: QHeaderView `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QHeaderView, filterObj: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QHeaderView, obj: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QHeaderView, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QHeaderView `
    ///
    pub fn disconnect3(self: QHeaderView) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QHeaderView, receiver: anytype) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn dumpObjectTree(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn dumpObjectInfo(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QHeaderView, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QHeaderView, name: [:0]const u8) QVariant {
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
    /// ` self: QHeaderView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QHeaderView, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QHeaderView.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QHeaderView.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QHeaderView `
    ///
    pub fn bindingStorage(self: QHeaderView) QBindingStorage {
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
    /// ` self: QHeaderView `
    ///
    pub fn bindingStorage2(self: QHeaderView) QBindingStorage {
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
    /// ` self: QHeaderView `
    ///
    pub fn destroyed(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QHeaderView, callback: *const fn (QHeaderView) callconv(.c) void) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn parent(self: QHeaderView) QObject {
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
    /// ` self: QHeaderView `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QHeaderView, classname: [:0]const u8) bool {
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
    /// ` self: QHeaderView `
    ///
    pub fn deleteLater(self: QHeaderView) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QHeaderView, interval: i32, timerType: i32) i32 {
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
    /// ` self: QHeaderView `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QHeaderView, time: i64, timerType: i32) i32 {
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
    /// ` self: QHeaderView `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QHeaderView, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QHeaderView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QHeaderView, signal: [:0]const u8) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QHeaderView, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QHeaderView, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QHeaderView, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QHeaderView, param1: anytype) void {
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
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QHeaderView, callback: *const fn (QHeaderView, QObject) callconv(.c) void) void {
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
    /// ` self: QHeaderView `
    ///
    pub fn paintingActive(self: QHeaderView) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn widthMM(self: QHeaderView) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn heightMM(self: QHeaderView) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn logicalDpiX(self: QHeaderView) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn logicalDpiY(self: QHeaderView) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn physicalDpiX(self: QHeaderView) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn physicalDpiY(self: QHeaderView) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn devicePixelRatio(self: QHeaderView) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn devicePixelRatioF(self: QHeaderView) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn colorCount(self: QHeaderView) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn depth(self: QHeaderView) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self.asQPaintDevice().ptr));
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

    /// ### DEPRECATED: Use `setSelectionModel` instead
    ///
    pub const SetSelectionModel = setSelectionModel;

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
    /// ` _selectionModel: QItemSelectionModel `
    ///
    pub fn setSelectionModel(self: QHeaderView, _selectionModel: anytype) void {
        comptime _ = @TypeOf(_selectionModel)._is_QItemSelectionModel;
        qtc.QHeaderView_SetSelectionModel(@ptrCast(self.ptr), @ptrCast(_selectionModel.ptr));
    }

    /// ### DEPRECATED: Use `superSetSelectionModel` instead
    ///
    pub const SuperSetSelectionModel = superSetSelectionModel;

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
    /// ` _selectionModel: QItemSelectionModel `
    ///
    pub fn superSetSelectionModel(self: QHeaderView, _selectionModel: anytype) void {
        comptime _ = @TypeOf(_selectionModel)._is_QItemSelectionModel;
        qtc.QHeaderView_SuperSetSelectionModel(@ptrCast(self.ptr), @ptrCast(_selectionModel.ptr));
    }

    /// ### DEPRECATED: Use `onSetSelectionModel` instead
    ///
    pub const OnSetSelectionModel = onSetSelectionModel;

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
    pub fn onSetSelectionModel(self: QHeaderView, callback: *const fn (QHeaderView, QItemSelectionModel) callconv(.c) void) void {
        qtc.QHeaderView_OnSetSelectionModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyboardSearch` instead
    ///
    pub const KeyboardSearch = keyboardSearch;

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
    pub fn keyboardSearch(self: QHeaderView, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QHeaderView_KeyboardSearch(@ptrCast(self.ptr), search_str);
    }

    /// ### DEPRECATED: Use `superKeyboardSearch` instead
    ///
    pub const SuperKeyboardSearch = superKeyboardSearch;

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
    pub fn superKeyboardSearch(self: QHeaderView, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QHeaderView_SuperKeyboardSearch(@ptrCast(self.ptr), search_str);
    }

    /// ### DEPRECATED: Use `onKeyboardSearch` instead
    ///
    pub const OnKeyboardSearch = onKeyboardSearch;

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
    pub fn onKeyboardSearch(self: QHeaderView, callback: *const fn (QHeaderView, [*:0]const u8) callconv(.c) void) void {
        qtc.QHeaderView_OnKeyboardSearch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeHintForRow` instead
    ///
    pub const SizeHintForRow = sizeHintForRow;

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
    pub fn sizeHintForRow(self: QHeaderView, row: i32) i32 {
        return qtc.QHeaderView_SizeHintForRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `superSizeHintForRow` instead
    ///
    pub const SuperSizeHintForRow = superSizeHintForRow;

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
    pub fn superSizeHintForRow(self: QHeaderView, row: i32) i32 {
        return qtc.QHeaderView_SuperSizeHintForRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `onSizeHintForRow` instead
    ///
    pub const OnSizeHintForRow = onSizeHintForRow;

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
    pub fn onSizeHintForRow(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) i32) void {
        qtc.QHeaderView_OnSizeHintForRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeHintForColumn` instead
    ///
    pub const SizeHintForColumn = sizeHintForColumn;

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
    pub fn sizeHintForColumn(self: QHeaderView, column: i32) i32 {
        return qtc.QHeaderView_SizeHintForColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `superSizeHintForColumn` instead
    ///
    pub const SuperSizeHintForColumn = superSizeHintForColumn;

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
    pub fn superSizeHintForColumn(self: QHeaderView, column: i32) i32 {
        return qtc.QHeaderView_SuperSizeHintForColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `onSizeHintForColumn` instead
    ///
    pub const OnSizeHintForColumn = onSizeHintForColumn;

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
    pub fn onSizeHintForColumn(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) i32) void {
        qtc.QHeaderView_OnSizeHintForColumn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemDelegateForIndex` instead
    ///
    pub const ItemDelegateForIndex = itemDelegateForIndex;

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
    pub fn itemDelegateForIndex(self: QHeaderView, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QHeaderView_ItemDelegateForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `superItemDelegateForIndex` instead
    ///
    pub const SuperItemDelegateForIndex = superItemDelegateForIndex;

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
    pub fn superItemDelegateForIndex(self: QHeaderView, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QHeaderView_SuperItemDelegateForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `onItemDelegateForIndex` instead
    ///
    pub const OnItemDelegateForIndex = onItemDelegateForIndex;

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
    pub fn onItemDelegateForIndex(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex) callconv(.c) QAbstractItemDelegate) void {
        qtc.QHeaderView_OnItemDelegateForIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

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
    pub fn inputMethodQuery(self: QHeaderView, query: i32) QVariant {
        return .{ .ptr = qtc.QHeaderView_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

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
    pub fn superInputMethodQuery(self: QHeaderView, query: i32) QVariant {
        return .{ .ptr = qtc.QHeaderView_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) QVariant) void {
        qtc.QHeaderView_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setRootIndex` instead
    ///
    pub const SetRootIndex = setRootIndex;

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
    pub fn setRootIndex(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QHeaderView_SetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superSetRootIndex` instead
    ///
    pub const SuperSetRootIndex = superSetRootIndex;

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
    pub fn superSetRootIndex(self: QHeaderView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QHeaderView_SuperSetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onSetRootIndex` instead
    ///
    pub const OnSetRootIndex = onSetRootIndex;

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
    pub fn onSetRootIndex(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex) callconv(.c) void) void {
        qtc.QHeaderView_OnSetRootIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectAll` instead
    ///
    pub const SelectAll = selectAll;

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
    pub fn selectAll(self: QHeaderView) void {
        qtc.QHeaderView_SelectAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSelectAll` instead
    ///
    pub const SuperSelectAll = superSelectAll;

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
    pub fn superSelectAll(self: QHeaderView) void {
        qtc.QHeaderView_SuperSelectAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelectAll` instead
    ///
    pub const OnSelectAll = onSelectAll;

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
    pub fn onSelectAll(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnSelectAll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsAboutToBeRemoved` instead
    ///
    pub const RowsAboutToBeRemoved = rowsAboutToBeRemoved;

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
    /// ` _parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn rowsAboutToBeRemoved(self: QHeaderView, _parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QHeaderView_RowsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `superRowsAboutToBeRemoved` instead
    ///
    pub const SuperRowsAboutToBeRemoved = superRowsAboutToBeRemoved;

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
    /// ` _parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn superRowsAboutToBeRemoved(self: QHeaderView, _parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QHeaderView_SuperRowsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `onRowsAboutToBeRemoved` instead
    ///
    pub const OnRowsAboutToBeRemoved = onRowsAboutToBeRemoved;

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
    pub fn onRowsAboutToBeRemoved(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnRowsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionChanged` instead
    ///
    pub const SelectionChanged = selectionChanged;

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
    pub fn selectionChanged(self: QHeaderView, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.QHeaderView_SelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// ### DEPRECATED: Use `superSelectionChanged` instead
    ///
    pub const SuperSelectionChanged = superSelectionChanged;

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
    pub fn superSelectionChanged(self: QHeaderView, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.QHeaderView_SuperSelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionChanged` instead
    ///
    pub const OnSelectionChanged = onSelectionChanged;

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
    pub fn onSelectionChanged(self: QHeaderView, callback: *const fn (QHeaderView, QItemSelection, QItemSelection) callconv(.c) void) void {
        qtc.QHeaderView_OnSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateEditorData` instead
    ///
    pub const UpdateEditorData = updateEditorData;

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
    pub fn updateEditorData(self: QHeaderView) void {
        qtc.QHeaderView_UpdateEditorData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateEditorData` instead
    ///
    pub const SuperUpdateEditorData = superUpdateEditorData;

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
    pub fn superUpdateEditorData(self: QHeaderView) void {
        qtc.QHeaderView_SuperUpdateEditorData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateEditorData` instead
    ///
    pub const OnUpdateEditorData = onUpdateEditorData;

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
    pub fn onUpdateEditorData(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnUpdateEditorData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateEditorGeometries` instead
    ///
    pub const UpdateEditorGeometries = updateEditorGeometries;

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
    pub fn updateEditorGeometries(self: QHeaderView) void {
        qtc.QHeaderView_UpdateEditorGeometries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateEditorGeometries` instead
    ///
    pub const SuperUpdateEditorGeometries = superUpdateEditorGeometries;

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
    pub fn superUpdateEditorGeometries(self: QHeaderView) void {
        qtc.QHeaderView_SuperUpdateEditorGeometries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateEditorGeometries` instead
    ///
    pub const OnUpdateEditorGeometries = onUpdateEditorGeometries;

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
    pub fn onUpdateEditorGeometries(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnUpdateEditorGeometries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `verticalScrollbarAction` instead
    ///
    pub const VerticalScrollbarAction = verticalScrollbarAction;

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
    pub fn verticalScrollbarAction(self: QHeaderView, action: i32) void {
        qtc.QHeaderView_VerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `superVerticalScrollbarAction` instead
    ///
    pub const SuperVerticalScrollbarAction = superVerticalScrollbarAction;

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
    pub fn superVerticalScrollbarAction(self: QHeaderView, action: i32) void {
        qtc.QHeaderView_SuperVerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `onVerticalScrollbarAction` instead
    ///
    pub const OnVerticalScrollbarAction = onVerticalScrollbarAction;

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
    pub fn onVerticalScrollbarAction(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnVerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `horizontalScrollbarAction` instead
    ///
    pub const HorizontalScrollbarAction = horizontalScrollbarAction;

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
    pub fn horizontalScrollbarAction(self: QHeaderView, action: i32) void {
        qtc.QHeaderView_HorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `superHorizontalScrollbarAction` instead
    ///
    pub const SuperHorizontalScrollbarAction = superHorizontalScrollbarAction;

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
    pub fn superHorizontalScrollbarAction(self: QHeaderView, action: i32) void {
        qtc.QHeaderView_SuperHorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `onHorizontalScrollbarAction` instead
    ///
    pub const OnHorizontalScrollbarAction = onHorizontalScrollbarAction;

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
    pub fn onHorizontalScrollbarAction(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnHorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `verticalScrollbarValueChanged` instead
    ///
    pub const VerticalScrollbarValueChanged = verticalScrollbarValueChanged;

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
    pub fn verticalScrollbarValueChanged(self: QHeaderView, value: i32) void {
        qtc.QHeaderView_VerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `superVerticalScrollbarValueChanged` instead
    ///
    pub const SuperVerticalScrollbarValueChanged = superVerticalScrollbarValueChanged;

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
    pub fn superVerticalScrollbarValueChanged(self: QHeaderView, value: i32) void {
        qtc.QHeaderView_SuperVerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onVerticalScrollbarValueChanged` instead
    ///
    pub const OnVerticalScrollbarValueChanged = onVerticalScrollbarValueChanged;

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
    pub fn onVerticalScrollbarValueChanged(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnVerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `horizontalScrollbarValueChanged` instead
    ///
    pub const HorizontalScrollbarValueChanged = horizontalScrollbarValueChanged;

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
    pub fn horizontalScrollbarValueChanged(self: QHeaderView, value: i32) void {
        qtc.QHeaderView_HorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `superHorizontalScrollbarValueChanged` instead
    ///
    pub const SuperHorizontalScrollbarValueChanged = superHorizontalScrollbarValueChanged;

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
    pub fn superHorizontalScrollbarValueChanged(self: QHeaderView, value: i32) void {
        qtc.QHeaderView_SuperHorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onHorizontalScrollbarValueChanged` instead
    ///
    pub const OnHorizontalScrollbarValueChanged = onHorizontalScrollbarValueChanged;

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
    pub fn onHorizontalScrollbarValueChanged(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnHorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeEditor` instead
    ///
    pub const CloseEditor = closeEditor;

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
    pub fn closeEditor(self: QHeaderView, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QHeaderView_CloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `superCloseEditor` instead
    ///
    pub const SuperCloseEditor = superCloseEditor;

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
    pub fn superCloseEditor(self: QHeaderView, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QHeaderView_SuperCloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `onCloseEditor` instead
    ///
    pub const OnCloseEditor = onCloseEditor;

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
    pub fn onCloseEditor(self: QHeaderView, callback: *const fn (QHeaderView, QWidget, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnCloseEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `commitData` instead
    ///
    pub const CommitData = commitData;

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
    pub fn commitData(self: QHeaderView, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QHeaderView_CommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### DEPRECATED: Use `superCommitData` instead
    ///
    pub const SuperCommitData = superCommitData;

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
    pub fn superCommitData(self: QHeaderView, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QHeaderView_SuperCommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### DEPRECATED: Use `onCommitData` instead
    ///
    pub const OnCommitData = onCommitData;

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
    pub fn onCommitData(self: QHeaderView, callback: *const fn (QHeaderView, QWidget) callconv(.c) void) void {
        qtc.QHeaderView_OnCommitData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `editorDestroyed` instead
    ///
    pub const EditorDestroyed = editorDestroyed;

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
    pub fn editorDestroyed(self: QHeaderView, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QObject;
        qtc.QHeaderView_EditorDestroyed(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### DEPRECATED: Use `superEditorDestroyed` instead
    ///
    pub const SuperEditorDestroyed = superEditorDestroyed;

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
    pub fn superEditorDestroyed(self: QHeaderView, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QObject;
        qtc.QHeaderView_SuperEditorDestroyed(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### DEPRECATED: Use `onEditorDestroyed` instead
    ///
    pub const OnEditorDestroyed = onEditorDestroyed;

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
    pub fn onEditorDestroyed(self: QHeaderView, callback: *const fn (QHeaderView, QObject) callconv(.c) void) void {
        qtc.QHeaderView_OnEditorDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedIndexes` instead
    ///
    pub const SelectedIndexes = selectedIndexes;

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
    pub fn selectedIndexes(self: QHeaderView, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QHeaderView_SelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QHeaderView.selectedIndexes: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `superSelectedIndexes` instead
    ///
    pub const SuperSelectedIndexes = superSelectedIndexes;

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
    pub fn superSelectedIndexes(self: QHeaderView, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QHeaderView_SuperSelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QHeaderView.selectedIndexes: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onSelectedIndexes` instead
    ///
    pub const OnSelectedIndexes = onSelectedIndexes;

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
    pub fn onSelectedIndexes(self: QHeaderView, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QHeaderView_OnSelectedIndexes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `edit2` instead
    ///
    pub const Edit2 = edit2;

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
    /// ` _event: QEvent `
    ///
    pub fn edit2(self: QHeaderView, index: anytype, trigger: i32, _event: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHeaderView_Edit2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(trigger), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEdit2` instead
    ///
    pub const SuperEdit2 = superEdit2;

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
    /// ` _event: QEvent `
    ///
    pub fn superEdit2(self: QHeaderView, index: anytype, trigger: i32, _event: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHeaderView_SuperEdit2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(trigger), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEdit2` instead
    ///
    pub const OnEdit2 = onEdit2;

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
    pub fn onEdit2(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex, i32, QEvent) callconv(.c) bool) void {
        qtc.QHeaderView_OnEdit2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionCommand` instead
    ///
    pub const SelectionCommand = selectionCommand;

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
    /// ` _event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn selectionCommand(self: QHeaderView, index: anytype, _event: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHeaderView_SelectionCommand(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superSelectionCommand` instead
    ///
    pub const SuperSelectionCommand = superSelectionCommand;

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
    /// ` _event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn superSelectionCommand(self: QHeaderView, index: anytype, _event: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHeaderView_SuperSelectionCommand(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionCommand` instead
    ///
    pub const OnSelectionCommand = onSelectionCommand;

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
    pub fn onSelectionCommand(self: QHeaderView, callback: *const fn (QHeaderView, QModelIndex, QEvent) callconv(.c) i32) void {
        qtc.QHeaderView_OnSelectionCommand(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `startDrag` instead
    ///
    pub const StartDrag = startDrag;

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
    pub fn startDrag(self: QHeaderView, supportedActions: i32) void {
        qtc.QHeaderView_StartDrag(@ptrCast(self.ptr), @bitCast(supportedActions));
    }

    /// ### DEPRECATED: Use `superStartDrag` instead
    ///
    pub const SuperStartDrag = superStartDrag;

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
    pub fn superStartDrag(self: QHeaderView, supportedActions: i32) void {
        qtc.QHeaderView_SuperStartDrag(@ptrCast(self.ptr), @bitCast(supportedActions));
    }

    /// ### DEPRECATED: Use `onStartDrag` instead
    ///
    pub const OnStartDrag = onStartDrag;

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
    pub fn onStartDrag(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnStartDrag(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `initViewItemOption` instead
    ///
    pub const InitViewItemOption = initViewItemOption;

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
    pub fn initViewItemOption(self: QHeaderView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        qtc.QHeaderView_InitViewItemOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `superInitViewItemOption` instead
    ///
    pub const SuperInitViewItemOption = superInitViewItemOption;

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
    pub fn superInitViewItemOption(self: QHeaderView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        qtc.QHeaderView_SuperInitViewItemOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `onInitViewItemOption` instead
    ///
    pub const OnInitViewItemOption = onInitViewItemOption;

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
    pub fn onInitViewItemOption(self: QHeaderView, callback: *const fn (QHeaderView, QStyleOptionViewItem) callconv(.c) void) void {
        qtc.QHeaderView_OnInitViewItemOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusNextPrevChild` instead
    ///
    pub const FocusNextPrevChild = focusNextPrevChild;

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
    pub fn focusNextPrevChild(self: QHeaderView, next: bool) bool {
        return qtc.QHeaderView_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `superFocusNextPrevChild` instead
    ///
    pub const SuperFocusNextPrevChild = superFocusNextPrevChild;

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
    pub fn superFocusNextPrevChild(self: QHeaderView, next: bool) bool {
        return qtc.QHeaderView_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `onFocusNextPrevChild` instead
    ///
    pub const OnFocusNextPrevChild = onFocusNextPrevChild;

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
    pub fn onFocusNextPrevChild(self: QHeaderView, callback: *const fn (QHeaderView, bool) callconv(.c) bool) void {
        qtc.QHeaderView_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragEnterEvent` instead
    ///
    pub const DragEnterEvent = dragEnterEvent;

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
    /// ` _event: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.QHeaderView_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragEnterEvent` instead
    ///
    pub const SuperDragEnterEvent = superDragEnterEvent;

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
    /// ` _event: QDragEnterEvent `
    ///
    pub fn superDragEnterEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.QHeaderView_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragEnterEvent` instead
    ///
    pub const OnDragEnterEvent = onDragEnterEvent;

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
    pub fn onDragEnterEvent(self: QHeaderView, callback: *const fn (QHeaderView, QDragEnterEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

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
    /// ` _event: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.QHeaderView_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

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
    /// ` _event: QDragMoveEvent `
    ///
    pub fn superDragMoveEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.QHeaderView_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

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
    pub fn onDragMoveEvent(self: QHeaderView, callback: *const fn (QHeaderView, QDragMoveEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

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
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.QHeaderView_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

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
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn superDragLeaveEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.QHeaderView_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

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
    pub fn onDragLeaveEvent(self: QHeaderView, callback: *const fn (QHeaderView, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

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
    /// ` _event: QDropEvent `
    ///
    pub fn dropEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.QHeaderView_DropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

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
    /// ` _event: QDropEvent `
    ///
    pub fn superDropEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.QHeaderView_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

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
    pub fn onDropEvent(self: QHeaderView, callback: *const fn (QHeaderView, QDropEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

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
    /// ` _event: QFocusEvent `
    ///
    pub fn focusInEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QHeaderView_FocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

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
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QHeaderView_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

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
    pub fn onFocusInEvent(self: QHeaderView, callback: *const fn (QHeaderView, QFocusEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

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
    /// ` _event: QFocusEvent `
    ///
    pub fn focusOutEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QHeaderView_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

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
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QHeaderView_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

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
    pub fn onFocusOutEvent(self: QHeaderView, callback: *const fn (QHeaderView, QFocusEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

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
    /// ` _event: QKeyEvent `
    ///
    pub fn keyPressEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QHeaderView_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

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
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QHeaderView_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

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
    pub fn onKeyPressEvent(self: QHeaderView, callback: *const fn (QHeaderView, QKeyEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

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
    /// ` _event: QResizeEvent `
    ///
    pub fn resizeEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.QHeaderView_ResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

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
    /// ` _event: QResizeEvent `
    ///
    pub fn superResizeEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.QHeaderView_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

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
    pub fn onResizeEvent(self: QHeaderView, callback: *const fn (QHeaderView, QResizeEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QHeaderView_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QHeaderView_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QHeaderView, callback: *const fn (QHeaderView, QTimerEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

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
    /// ` _event: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QHeaderView_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

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
    /// ` _event: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QHeaderView_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

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
    pub fn onInputMethodEvent(self: QHeaderView, callback: *const fn (QHeaderView, QInputMethodEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QHeaderView, object: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHeaderView_EventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QHeaderView, object: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHeaderView_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QHeaderView, callback: *const fn (QHeaderView, QObject, QEvent) callconv(.c) bool) void {
        qtc.QHeaderView_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `viewportSizeHint` instead
    ///
    pub const ViewportSizeHint = viewportSizeHint;

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
    pub fn viewportSizeHint(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QHeaderView_ViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superViewportSizeHint` instead
    ///
    pub const SuperViewportSizeHint = superViewportSizeHint;

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
    pub fn superViewportSizeHint(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QHeaderView_SuperViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onViewportSizeHint` instead
    ///
    pub const OnViewportSizeHint = onViewportSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onViewportSizeHint(self: QHeaderView, callback: *const fn () callconv(.c) QSize) void {
        qtc.QHeaderView_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumSizeHint` instead
    ///
    pub const MinimumSizeHint = minimumSizeHint;

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
    pub fn minimumSizeHint(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QHeaderView_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMinimumSizeHint` instead
    ///
    pub const SuperMinimumSizeHint = superMinimumSizeHint;

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
    pub fn superMinimumSizeHint(self: QHeaderView) QSize {
        return .{ .ptr = qtc.QHeaderView_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinimumSizeHint` instead
    ///
    pub const OnMinimumSizeHint = onMinimumSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSizeHint(self: QHeaderView, callback: *const fn () callconv(.c) QSize) void {
        qtc.QHeaderView_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setupViewport` instead
    ///
    pub const SetupViewport = setupViewport;

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
    /// ` _viewport: QWidget `
    ///
    pub fn setupViewport(self: QHeaderView, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QWidget;
        qtc.QHeaderView_SetupViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
    }

    /// ### DEPRECATED: Use `superSetupViewport` instead
    ///
    pub const SuperSetupViewport = superSetupViewport;

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
    /// ` _viewport: QWidget `
    ///
    pub fn superSetupViewport(self: QHeaderView, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QWidget;
        qtc.QHeaderView_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
    }

    /// ### DEPRECATED: Use `onSetupViewport` instead
    ///
    pub const OnSetupViewport = onSetupViewport;

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
    pub fn onSetupViewport(self: QHeaderView, callback: *const fn (QHeaderView, QWidget) callconv(.c) void) void {
        qtc.QHeaderView_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

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
    pub fn wheelEvent(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QHeaderView_WheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

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
    pub fn superWheelEvent(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QHeaderView_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

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
    pub fn onWheelEvent(self: QHeaderView, callback: *const fn (QHeaderView, QWheelEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contextMenuEvent` instead
    ///
    pub const ContextMenuEvent = contextMenuEvent;

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
    pub fn contextMenuEvent(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QHeaderView_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superContextMenuEvent` instead
    ///
    pub const SuperContextMenuEvent = superContextMenuEvent;

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
    pub fn superContextMenuEvent(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QHeaderView_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuEvent` instead
    ///
    pub const OnContextMenuEvent = onContextMenuEvent;

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
    pub fn onContextMenuEvent(self: QHeaderView, callback: *const fn (QHeaderView, QContextMenuEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changeEvent` instead
    ///
    pub const ChangeEvent = changeEvent;

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
    pub fn changeEvent(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QHeaderView_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superChangeEvent` instead
    ///
    pub const SuperChangeEvent = superChangeEvent;

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
    pub fn superChangeEvent(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QHeaderView_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onChangeEvent` instead
    ///
    pub const OnChangeEvent = onChangeEvent;

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
    pub fn onChangeEvent(self: QHeaderView, callback: *const fn (QHeaderView, QEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    pub fn devType(self: QHeaderView) i32 {
        return qtc.QHeaderView_DevType(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn superDevType(self: QHeaderView) i32 {
        return qtc.QHeaderView_SuperDevType(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDevType(self: QHeaderView, callback: *const fn () callconv(.c) i32) void {
        qtc.QHeaderView_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: QHeaderView, param1: i32) i32 {
        return qtc.QHeaderView_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: i32 `
    ///
    pub fn superHeightForWidth(self: QHeaderView, param1: i32) i32 {
        return qtc.QHeaderView_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, param1: i32) callconv(.c) i32 `
    ///
    pub fn onHeightForWidth(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) i32) void {
        qtc.QHeaderView_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    pub fn hasHeightForWidth(self: QHeaderView) bool {
        return qtc.QHeaderView_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn superHasHeightForWidth(self: QHeaderView) bool {
        return qtc.QHeaderView_SuperHasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasHeightForWidth(self: QHeaderView, callback: *const fn () callconv(.c) bool) void {
        qtc.QHeaderView_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    pub fn paintEngine(self: QHeaderView) QPaintEngine {
        return .{ .ptr = qtc.QHeaderView_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QHeaderView `
    ///
    pub fn superPaintEngine(self: QHeaderView) QPaintEngine {
        return .{ .ptr = qtc.QHeaderView_SuperPaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn onPaintEngine(self: QHeaderView, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QHeaderView_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyReleaseEvent` instead
    ///
    pub const KeyReleaseEvent = keyReleaseEvent;

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
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QHeaderView_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superKeyReleaseEvent` instead
    ///
    pub const SuperKeyReleaseEvent = superKeyReleaseEvent;

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
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QHeaderView_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyReleaseEvent` instead
    ///
    pub const OnKeyReleaseEvent = onKeyReleaseEvent;

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
    pub fn onKeyReleaseEvent(self: QHeaderView, callback: *const fn (QHeaderView, QKeyEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn enterEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QHeaderView_EnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn superEnterEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QHeaderView_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn onEnterEvent(self: QHeaderView, callback: *const fn (QHeaderView, QEnterEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QEvent `
    ///
    pub fn leaveEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QHeaderView_LeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superLeaveEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QHeaderView_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QEvent) callconv(.c) void `
    ///
    pub fn onLeaveEvent(self: QHeaderView, callback: *const fn (QHeaderView, QEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn moveEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QHeaderView_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn superMoveEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QHeaderView_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn onMoveEvent(self: QHeaderView, callback: *const fn (QHeaderView, QMoveEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn closeEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QHeaderView_CloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn superCloseEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QHeaderView_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn onCloseEvent(self: QHeaderView, callback: *const fn (QHeaderView, QCloseEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn tabletEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QHeaderView_TabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn superTabletEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QHeaderView_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn onTabletEvent(self: QHeaderView, callback: *const fn (QHeaderView, QTabletEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn actionEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QHeaderView_ActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn superActionEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QHeaderView_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QActionEvent) callconv(.c) void `
    ///
    pub fn onActionEvent(self: QHeaderView, callback: *const fn (QHeaderView, QActionEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn showEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QHeaderView_ShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn superShowEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QHeaderView_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QShowEvent) callconv(.c) void `
    ///
    pub fn onShowEvent(self: QHeaderView, callback: *const fn (QHeaderView, QShowEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn hideEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QHeaderView_HideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn superHideEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QHeaderView_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QHideEvent) callconv(.c) void `
    ///
    pub fn onHideEvent(self: QHeaderView, callback: *const fn (QHeaderView, QHideEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn nativeEvent(self: QHeaderView, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QHeaderView_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QHeaderView `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn superNativeEvent(self: QHeaderView, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QHeaderView_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn onNativeEvent(self: QHeaderView, callback: *const fn (QHeaderView, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QHeaderView_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: QHeaderView, param1: i32) i32 {
        return qtc.QHeaderView_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QHeaderView `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: QHeaderView, param1: i32) i32 {
        return qtc.QHeaderView_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn onMetric(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) i32) void {
        qtc.QHeaderView_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: QHeaderView, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QHeaderView_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: QHeaderView, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QHeaderView_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: QHeaderView, callback: *const fn (QHeaderView, QPainter) callconv(.c) void) void {
        qtc.QHeaderView_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` _offset: QPoint `
    ///
    pub fn redirected(self: QHeaderView, _offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(_offset)._is_QPoint;
        return .{ .ptr = qtc.QHeaderView_Redirected(@ptrCast(self.ptr), @ptrCast(_offset.ptr)) };
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
    /// ` self: QHeaderView `
    ///
    /// ` _offset: QPoint `
    ///
    pub fn superRedirected(self: QHeaderView, _offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(_offset)._is_QPoint;
        return .{ .ptr = qtc.QHeaderView_SuperRedirected(@ptrCast(self.ptr), @ptrCast(_offset.ptr)) };
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: QHeaderView, callback: *const fn (QHeaderView, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QHeaderView_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    pub fn sharedPainter(self: QHeaderView) QPainter {
        return .{ .ptr = qtc.QHeaderView_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QHeaderView `
    ///
    pub fn superSharedPainter(self: QHeaderView) QPainter {
        return .{ .ptr = qtc.QHeaderView_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: QHeaderView, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QHeaderView_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QHeaderView_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QHeaderView_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QHeaderView, callback: *const fn (QHeaderView, QChildEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QHeaderView_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QHeaderView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QHeaderView_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QHeaderView, callback: *const fn (QHeaderView, QEvent) callconv(.c) void) void {
        qtc.QHeaderView_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QHeaderView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHeaderView_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QHeaderView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHeaderView_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QHeaderView, callback: *const fn (QHeaderView, QMetaMethod) callconv(.c) void) void {
        qtc.QHeaderView_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QHeaderView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHeaderView_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QHeaderView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHeaderView_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QHeaderView, callback: *const fn (QHeaderView, QMetaMethod) callconv(.c) void) void {
        qtc.QHeaderView_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

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
    pub fn state(self: QHeaderView) i32 {
        return qtc.QHeaderView_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superState` instead
    ///
    pub const SuperState = superState;

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
    pub fn superState(self: QHeaderView) i32 {
        return qtc.QHeaderView_SuperState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onState` instead
    ///
    pub const OnState = onState;

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
    pub fn onState(self: QHeaderView, callback: *const fn () callconv(.c) i32) void {
        qtc.QHeaderView_OnState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

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
    /// ` _state: qabstractitemview_enums.State `
    ///
    pub fn setState(self: QHeaderView, _state: i32) void {
        qtc.QHeaderView_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `superSetState` instead
    ///
    pub const SuperSetState = superSetState;

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
    /// ` _state: qabstractitemview_enums.State `
    ///
    pub fn superSetState(self: QHeaderView, _state: i32) void {
        qtc.QHeaderView_SuperSetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `onSetState` instead
    ///
    pub const OnSetState = onSetState;

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
    pub fn onSetState(self: QHeaderView, callback: *const fn (QHeaderView, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnSetState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scheduleDelayedItemsLayout` instead
    ///
    pub const ScheduleDelayedItemsLayout = scheduleDelayedItemsLayout;

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
    pub fn scheduleDelayedItemsLayout(self: QHeaderView) void {
        qtc.QHeaderView_ScheduleDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superScheduleDelayedItemsLayout` instead
    ///
    pub const SuperScheduleDelayedItemsLayout = superScheduleDelayedItemsLayout;

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
    pub fn superScheduleDelayedItemsLayout(self: QHeaderView) void {
        qtc.QHeaderView_SuperScheduleDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onScheduleDelayedItemsLayout` instead
    ///
    pub const OnScheduleDelayedItemsLayout = onScheduleDelayedItemsLayout;

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
    pub fn onScheduleDelayedItemsLayout(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnScheduleDelayedItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `executeDelayedItemsLayout` instead
    ///
    pub const ExecuteDelayedItemsLayout = executeDelayedItemsLayout;

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
    pub fn executeDelayedItemsLayout(self: QHeaderView) void {
        qtc.QHeaderView_ExecuteDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superExecuteDelayedItemsLayout` instead
    ///
    pub const SuperExecuteDelayedItemsLayout = superExecuteDelayedItemsLayout;

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
    pub fn superExecuteDelayedItemsLayout(self: QHeaderView) void {
        qtc.QHeaderView_SuperExecuteDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onExecuteDelayedItemsLayout` instead
    ///
    pub const OnExecuteDelayedItemsLayout = onExecuteDelayedItemsLayout;

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
    pub fn onExecuteDelayedItemsLayout(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnExecuteDelayedItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setDirtyRegion` instead
    ///
    pub const SetDirtyRegion = setDirtyRegion;

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
    pub fn setDirtyRegion(self: QHeaderView, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QHeaderView_SetDirtyRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `superSetDirtyRegion` instead
    ///
    pub const SuperSetDirtyRegion = superSetDirtyRegion;

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
    pub fn superSetDirtyRegion(self: QHeaderView, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QHeaderView_SuperSetDirtyRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `onSetDirtyRegion` instead
    ///
    pub const OnSetDirtyRegion = onSetDirtyRegion;

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
    pub fn onSetDirtyRegion(self: QHeaderView, callback: *const fn (QHeaderView, QRegion) callconv(.c) void) void {
        qtc.QHeaderView_OnSetDirtyRegion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scrollDirtyRegion` instead
    ///
    pub const ScrollDirtyRegion = scrollDirtyRegion;

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
    pub fn scrollDirtyRegion(self: QHeaderView, dx: i32, dy: i32) void {
        qtc.QHeaderView_ScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `superScrollDirtyRegion` instead
    ///
    pub const SuperScrollDirtyRegion = superScrollDirtyRegion;

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
    pub fn superScrollDirtyRegion(self: QHeaderView, dx: i32, dy: i32) void {
        qtc.QHeaderView_SuperScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `onScrollDirtyRegion` instead
    ///
    pub const OnScrollDirtyRegion = onScrollDirtyRegion;

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
    pub fn onScrollDirtyRegion(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dirtyRegionOffset` instead
    ///
    pub const DirtyRegionOffset = dirtyRegionOffset;

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
    pub fn dirtyRegionOffset(self: QHeaderView) QPoint {
        return .{ .ptr = qtc.QHeaderView_DirtyRegionOffset(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superDirtyRegionOffset` instead
    ///
    pub const SuperDirtyRegionOffset = superDirtyRegionOffset;

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
    pub fn superDirtyRegionOffset(self: QHeaderView) QPoint {
        return .{ .ptr = qtc.QHeaderView_SuperDirtyRegionOffset(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onDirtyRegionOffset` instead
    ///
    pub const OnDirtyRegionOffset = onDirtyRegionOffset;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDirtyRegionOffset(self: QHeaderView, callback: *const fn () callconv(.c) QPoint) void {
        qtc.QHeaderView_OnDirtyRegionOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `startAutoScroll` instead
    ///
    pub const StartAutoScroll = startAutoScroll;

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
    pub fn startAutoScroll(self: QHeaderView) void {
        qtc.QHeaderView_StartAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superStartAutoScroll` instead
    ///
    pub const SuperStartAutoScroll = superStartAutoScroll;

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
    pub fn superStartAutoScroll(self: QHeaderView) void {
        qtc.QHeaderView_SuperStartAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStartAutoScroll` instead
    ///
    pub const OnStartAutoScroll = onStartAutoScroll;

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
    pub fn onStartAutoScroll(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnStartAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stopAutoScroll` instead
    ///
    pub const StopAutoScroll = stopAutoScroll;

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
    pub fn stopAutoScroll(self: QHeaderView) void {
        qtc.QHeaderView_StopAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superStopAutoScroll` instead
    ///
    pub const SuperStopAutoScroll = superStopAutoScroll;

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
    pub fn superStopAutoScroll(self: QHeaderView) void {
        qtc.QHeaderView_SuperStopAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStopAutoScroll` instead
    ///
    pub const OnStopAutoScroll = onStopAutoScroll;

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
    pub fn onStopAutoScroll(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnStopAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doAutoScroll` instead
    ///
    pub const DoAutoScroll = doAutoScroll;

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
    pub fn doAutoScroll(self: QHeaderView) void {
        qtc.QHeaderView_DoAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDoAutoScroll` instead
    ///
    pub const SuperDoAutoScroll = superDoAutoScroll;

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
    pub fn superDoAutoScroll(self: QHeaderView) void {
        qtc.QHeaderView_SuperDoAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoAutoScroll` instead
    ///
    pub const OnDoAutoScroll = onDoAutoScroll;

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
    pub fn onDoAutoScroll(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnDoAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropIndicatorPosition` instead
    ///
    pub const DropIndicatorPosition = dropIndicatorPosition;

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
    pub fn dropIndicatorPosition(self: QHeaderView) i32 {
        return qtc.QHeaderView_DropIndicatorPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDropIndicatorPosition` instead
    ///
    pub const SuperDropIndicatorPosition = superDropIndicatorPosition;

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
    pub fn superDropIndicatorPosition(self: QHeaderView) i32 {
        return qtc.QHeaderView_SuperDropIndicatorPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDropIndicatorPosition` instead
    ///
    pub const OnDropIndicatorPosition = onDropIndicatorPosition;

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
    pub fn onDropIndicatorPosition(self: QHeaderView, callback: *const fn () callconv(.c) i32) void {
        qtc.QHeaderView_OnDropIndicatorPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setViewportMargins` instead
    ///
    pub const SetViewportMargins = setViewportMargins;

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
    pub fn setViewportMargins(self: QHeaderView, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QHeaderView_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `superSetViewportMargins` instead
    ///
    pub const SuperSetViewportMargins = superSetViewportMargins;

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
    pub fn superSetViewportMargins(self: QHeaderView, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QHeaderView_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `onSetViewportMargins` instead
    ///
    pub const OnSetViewportMargins = onSetViewportMargins;

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
    pub fn onSetViewportMargins(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QHeaderView_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `viewportMargins` instead
    ///
    pub const ViewportMargins = viewportMargins;

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
    pub fn viewportMargins(self: QHeaderView) QMargins {
        return .{ .ptr = qtc.QHeaderView_ViewportMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superViewportMargins` instead
    ///
    pub const SuperViewportMargins = superViewportMargins;

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
    pub fn superViewportMargins(self: QHeaderView) QMargins {
        return .{ .ptr = qtc.QHeaderView_SuperViewportMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onViewportMargins` instead
    ///
    pub const OnViewportMargins = onViewportMargins;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onViewportMargins(self: QHeaderView, callback: *const fn () callconv(.c) QMargins) void {
        qtc.QHeaderView_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `drawFrame` instead
    ///
    pub const DrawFrame = drawFrame;

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
    pub fn drawFrame(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QHeaderView_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superDrawFrame` instead
    ///
    pub const SuperDrawFrame = superDrawFrame;

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
    pub fn superDrawFrame(self: QHeaderView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QHeaderView_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDrawFrame` instead
    ///
    pub const OnDrawFrame = onDrawFrame;

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
    pub fn onDrawFrame(self: QHeaderView, callback: *const fn (QHeaderView, QPainter) callconv(.c) void) void {
        qtc.QHeaderView_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    pub fn updateMicroFocus(self: QHeaderView) void {
        qtc.QHeaderView_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn superUpdateMicroFocus(self: QHeaderView) void {
        qtc.QHeaderView_SuperUpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateMicroFocus(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    pub fn create(self: QHeaderView) void {
        qtc.QHeaderView_Create(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn superCreate(self: QHeaderView) void {
        qtc.QHeaderView_SuperCreate(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCreate(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    pub fn destroy(self: QHeaderView) void {
        qtc.QHeaderView_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn superDestroy(self: QHeaderView) void {
        qtc.QHeaderView_SuperDestroy(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDestroy(self: QHeaderView, callback: *const fn () callconv(.c) void) void {
        qtc.QHeaderView_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    pub fn focusNextChild(self: QHeaderView) bool {
        return qtc.QHeaderView_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn superFocusNextChild(self: QHeaderView) bool {
        return qtc.QHeaderView_SuperFocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusNextChild(self: QHeaderView, callback: *const fn () callconv(.c) bool) void {
        qtc.QHeaderView_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    pub fn focusPreviousChild(self: QHeaderView) bool {
        return qtc.QHeaderView_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn superFocusPreviousChild(self: QHeaderView) bool {
        return qtc.QHeaderView_SuperFocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusPreviousChild(self: QHeaderView, callback: *const fn () callconv(.c) bool) void {
        qtc.QHeaderView_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    pub fn sender(self: QHeaderView) QObject {
        return .{ .ptr = qtc.QHeaderView_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QHeaderView `
    ///
    pub fn superSender(self: QHeaderView) QObject {
        return .{ .ptr = qtc.QHeaderView_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QHeaderView, callback: *const fn () callconv(.c) QObject) void {
        qtc.QHeaderView_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    pub fn senderSignalIndex(self: QHeaderView) i32 {
        return qtc.QHeaderView_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView `
    ///
    pub fn superSenderSignalIndex(self: QHeaderView) i32 {
        return qtc.QHeaderView_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QHeaderView, callback: *const fn () callconv(.c) i32) void {
        qtc.QHeaderView_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QHeaderView, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHeaderView_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QHeaderView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QHeaderView, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHeaderView_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QHeaderView, callback: *const fn (QHeaderView, [*:0]const u8) callconv(.c) i32) void {
        qtc.QHeaderView_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QHeaderView, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHeaderView_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHeaderView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QHeaderView, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHeaderView_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QHeaderView, callback: *const fn (QHeaderView, QMetaMethod) callconv(.c) bool) void {
        qtc.QHeaderView_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: QHeaderView, metricA: i32, metricB: i32) f64 {
        return qtc.QHeaderView_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QHeaderView `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: QHeaderView, metricA: i32, metricB: i32) f64 {
        return qtc.QHeaderView_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QHeaderView`
    ///
    /// ` callback: *const fn (self: QHeaderView, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: QHeaderView, callback: *const fn (QHeaderView, i32, i32) callconv(.c) f64) void {
        qtc.QHeaderView_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeaderView `
    ///
    /// ` callback: *const fn (self: QHeaderView, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QHeaderView, callback: *const fn (QHeaderView, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#dtor.QHeaderView)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QHeaderView `
    ///
    pub fn delete(self: QHeaderView) void {
        qtc.QHeaderView_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#public-types)
pub const enums = struct {
    pub const ResizeMode = enum {
        pub const Interactive: i32 = 0;
        pub const Stretch: i32 = 1;
        pub const Fixed: i32 = 2;
        pub const ResizeToContents: i32 = 3;
        pub const Custom: i32 = 2;
    };
};
