const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QBrush = @import("libqt6").QBrush;
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
const QGraphicsItem = @import("libqt6").QGraphicsItem;
const QGraphicsProxyWidget = @import("libqt6").QGraphicsProxyWidget;
const QGraphicsScene = @import("libqt6").QGraphicsScene;
const QHideEvent = @import("libqt6").QHideEvent;
const QIcon = @import("libqt6").QIcon;
const QInputMethodEvent = @import("libqt6").QInputMethodEvent;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QKeySequence = @import("libqt6").QKeySequence;
const QLayout = @import("libqt6").QLayout;
const QLocale = @import("libqt6").QLocale;
const QMargins = @import("libqt6").QMargins;
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
const QPainterPath = @import("libqt6").QPainterPath;
const QPalette = @import("libqt6").QPalette;
const QPixmap = @import("libqt6").QPixmap;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QRegion = @import("libqt6").QRegion;
const QResizeEvent = @import("libqt6").QResizeEvent;
const QScreen = @import("libqt6").QScreen;
const QScrollBar = @import("libqt6").QScrollBar;
const QShowEvent = @import("libqt6").QShowEvent;
const QSize = @import("libqt6").QSize;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QStyle = @import("libqt6").QStyle;
const QStyleOptionFrame = @import("libqt6").QStyleOptionFrame;
const QStyleOptionGraphicsItem = @import("libqt6").QStyleOptionGraphicsItem;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qabstractscrollarea_enums = @import("libqabstractscrollarea.zig").enums;
const qframe_enums = @import("libqframe.zig").enums;
const qgraphicsscene_enums = @import("libqgraphicsscene.zig").enums;
const qgraphicsview_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpainter_enums = @import("libqpainter.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qwidget_enums = @import("libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html)
pub const QGraphicsView = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsView,

    pub const _is_QGraphicsView = {};
    pub const _is_QAbstractScrollArea = {};
    pub const _is_QFrame = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QGraphicsView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QGraphicsView {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QGraphicsView_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QGraphicsView object.
    ///
    pub fn New2() QGraphicsView {
        return .{ .ptr = qtc.QGraphicsView_new2() };
    }

    /// New3 constructs a new QGraphicsView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` scene: QGraphicsScene `
    ///
    pub fn New3(scene: anytype) QGraphicsView {
        comptime _ = @TypeOf(scene)._is_QGraphicsScene;
        return .{ .ptr = qtc.QGraphicsView_new3(@ptrCast(scene.ptr)) };
    }

    /// New4 constructs a new QGraphicsView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` scene: QGraphicsScene `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New4(scene: anytype, parent: anytype) QGraphicsView {
        comptime _ = @TypeOf(scene)._is_QGraphicsScene;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QGraphicsView_new4(@ptrCast(scene.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn MetaObject(self: QGraphicsView) QMetaObject {
        return .{ .ptr = qtc.QGraphicsView_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QGraphicsView, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGraphicsView_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsView `
    ///
    pub fn SuperMetaObject(self: QGraphicsView) QMetaObject {
        return .{ .ptr = qtc.QGraphicsView_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QGraphicsView, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsView_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QGraphicsView, callback: *const fn (QGraphicsView, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsView_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QGraphicsView, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsView_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QGraphicsView, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsView_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QGraphicsView, callback: *const fn (QGraphicsView, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsView_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QGraphicsView, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsView_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsview.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn SizeHint(self: QGraphicsView) QSize {
        return .{ .ptr = qtc.QGraphicsView_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QGraphicsView, callback: *const fn () callconv(.c) QSize) void {
        qtc.QGraphicsView_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn SuperSizeHint(self: QGraphicsView) QSize {
        return .{ .ptr = qtc.QGraphicsView_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#renderHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qpainter_enums.RenderHint `
    ///
    pub fn RenderHints(self: QGraphicsView) i32 {
        return qtc.QGraphicsView_RenderHints(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` hint: qpainter_enums.RenderHint `
    ///
    pub fn SetRenderHint(self: QGraphicsView, hint: i32) void {
        qtc.QGraphicsView_SetRenderHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` hints: flag of qpainter_enums.RenderHint `
    ///
    pub fn SetRenderHints(self: QGraphicsView, hints: i32) void {
        qtc.QGraphicsView_SetRenderHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QGraphicsView) i32 {
        return qtc.QGraphicsView_Alignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QGraphicsView, alignment: i32) void {
        qtc.QGraphicsView_SetAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#transformationAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsview_enums.ViewportAnchor `
    ///
    pub fn TransformationAnchor(self: QGraphicsView) i32 {
        return qtc.QGraphicsView_TransformationAnchor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setTransformationAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` anchor: qgraphicsview_enums.ViewportAnchor `
    ///
    pub fn SetTransformationAnchor(self: QGraphicsView, anchor: i32) void {
        qtc.QGraphicsView_SetTransformationAnchor(@ptrCast(self.ptr), @bitCast(anchor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#resizeAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsview_enums.ViewportAnchor `
    ///
    pub fn ResizeAnchor(self: QGraphicsView) i32 {
        return qtc.QGraphicsView_ResizeAnchor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setResizeAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` anchor: qgraphicsview_enums.ViewportAnchor `
    ///
    pub fn SetResizeAnchor(self: QGraphicsView, anchor: i32) void {
        qtc.QGraphicsView_SetResizeAnchor(@ptrCast(self.ptr), @bitCast(anchor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportUpdateMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsview_enums.ViewportUpdateMode `
    ///
    pub fn ViewportUpdateMode(self: QGraphicsView) i32 {
        return qtc.QGraphicsView_ViewportUpdateMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setViewportUpdateMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` mode: qgraphicsview_enums.ViewportUpdateMode `
    ///
    pub fn SetViewportUpdateMode(self: QGraphicsView, mode: i32) void {
        qtc.QGraphicsView_SetViewportUpdateMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#optimizationFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgraphicsview_enums.OptimizationFlag `
    ///
    pub fn OptimizationFlags(self: QGraphicsView) i32 {
        return qtc.QGraphicsView_OptimizationFlags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` flag: qgraphicsview_enums.OptimizationFlag `
    ///
    pub fn SetOptimizationFlag(self: QGraphicsView, flag: i32) void {
        qtc.QGraphicsView_SetOptimizationFlag(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` flags: flag of qgraphicsview_enums.OptimizationFlag `
    ///
    pub fn SetOptimizationFlags(self: QGraphicsView, flags: i32) void {
        qtc.QGraphicsView_SetOptimizationFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsview_enums.DragMode `
    ///
    pub fn DragMode(self: QGraphicsView) i32 {
        return qtc.QGraphicsView_DragMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setDragMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` mode: qgraphicsview_enums.DragMode `
    ///
    pub fn SetDragMode(self: QGraphicsView, mode: i32) void {
        qtc.QGraphicsView_SetDragMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandSelectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ItemSelectionMode `
    ///
    pub fn RubberBandSelectionMode(self: QGraphicsView) i32 {
        return qtc.QGraphicsView_RubberBandSelectionMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setRubberBandSelectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn SetRubberBandSelectionMode(self: QGraphicsView, mode: i32) void {
        qtc.QGraphicsView_SetRubberBandSelectionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn RubberBandRect(self: QGraphicsView) QRect {
        return .{ .ptr = qtc.QGraphicsView_RubberBandRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#cacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgraphicsview_enums.CacheModeFlag `
    ///
    pub fn CacheMode(self: QGraphicsView) i32 {
        return qtc.QGraphicsView_CacheMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` mode: flag of qgraphicsview_enums.CacheModeFlag `
    ///
    pub fn SetCacheMode(self: QGraphicsView, mode: i32) void {
        qtc.QGraphicsView_SetCacheMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#resetCachedContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ResetCachedContent(self: QGraphicsView) void {
        qtc.QGraphicsView_ResetCachedContent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#isInteractive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn IsInteractive(self: QGraphicsView) bool {
        return qtc.QGraphicsView_IsInteractive(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setInteractive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` allowed: bool `
    ///
    pub fn SetInteractive(self: QGraphicsView, allowed: bool) void {
        qtc.QGraphicsView_SetInteractive(@ptrCast(self.ptr), allowed);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Scene(self: QGraphicsView) QGraphicsScene {
        return .{ .ptr = qtc.QGraphicsView_Scene(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` scene: QGraphicsScene `
    ///
    pub fn SetScene(self: QGraphicsView, scene: anytype) void {
        comptime _ = @TypeOf(scene)._is_QGraphicsScene;
        qtc.QGraphicsView_SetScene(@ptrCast(self.ptr), @ptrCast(scene.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#sceneRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn SceneRect(self: QGraphicsView) QRectF {
        return .{ .ptr = qtc.QGraphicsView_SceneRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setSceneRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SetSceneRect(self: QGraphicsView, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_SetSceneRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setSceneRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetSceneRect2(self: QGraphicsView, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsView_SetSceneRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Transform(self: QGraphicsView) QTransform {
        return .{ .ptr = qtc.QGraphicsView_Transform(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ViewportTransform(self: QGraphicsView) QTransform {
        return .{ .ptr = qtc.QGraphicsView_ViewportTransform(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#isTransformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn IsTransformed(self: QGraphicsView) bool {
        return qtc.QGraphicsView_IsTransformed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` matrix: QTransform `
    ///
    pub fn SetTransform(self: QGraphicsView, matrix: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QGraphicsView_SetTransform(@ptrCast(self.ptr), @ptrCast(matrix.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#resetTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ResetTransform(self: QGraphicsView) void {
        qtc.QGraphicsView_ResetTransform(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` angle: f64 `
    ///
    pub fn Rotate(self: QGraphicsView, angle: f64) void {
        qtc.QGraphicsView_Rotate(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` sx: f64 `
    ///
    /// ` sy: f64 `
    ///
    pub fn Scale(self: QGraphicsView, sx: f64, sy: f64) void {
        qtc.QGraphicsView_Scale(@ptrCast(self.ptr), @bitCast(sx), @bitCast(sy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#shear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` sh: f64 `
    ///
    /// ` sv: f64 `
    ///
    pub fn Shear(self: QGraphicsView, sh: f64, sv: f64) void {
        qtc.QGraphicsView_Shear(@ptrCast(self.ptr), @bitCast(sh), @bitCast(sv));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Translate(self: QGraphicsView, dx: f64, dy: f64) void {
        qtc.QGraphicsView_Translate(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` pos: QPointF `
    ///
    pub fn CenterOn(self: QGraphicsView, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsView_CenterOn(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn CenterOn2(self: QGraphicsView, x: f64, y: f64) void {
        qtc.QGraphicsView_CenterOn2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn CenterOn3(self: QGraphicsView, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsView_CenterOn3(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` rect: QRectF `
    ///
    pub fn EnsureVisible(self: QGraphicsView, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_EnsureVisible(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn EnsureVisible2(self: QGraphicsView, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsView_EnsureVisible2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn EnsureVisible3(self: QGraphicsView, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsView_EnsureVisible3(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` rect: QRectF `
    ///
    pub fn FitInView(self: QGraphicsView, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_FitInView(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn FitInView2(self: QGraphicsView, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsView_FitInView2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn FitInView3(self: QGraphicsView, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsView_FitInView3(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render(self: QGraphicsView, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsView_Render(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items(self: QGraphicsView, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsView_Items(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsview.Items: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: QPoint `
    ///
    pub fn Items2(self: QGraphicsView, allocator: std.mem.Allocator, pos: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(pos)._is_QPoint;
        const _arr: qtc.libqt_list = qtc.QGraphicsView_Items2(@ptrCast(self.ptr), @ptrCast(pos.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsview.Items2: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Items3(self: QGraphicsView, allocator: std.mem.Allocator, x: i32, y: i32) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsView_Items3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsview.Items3: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rect: QRect `
    ///
    pub fn Items4(self: QGraphicsView, allocator: std.mem.Allocator, rect: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(rect)._is_QRect;
        const _arr: qtc.libqt_list = qtc.QGraphicsView_Items4(@ptrCast(self.ptr), @ptrCast(rect.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsview.Items4: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Items5(self: QGraphicsView, allocator: std.mem.Allocator, x: i32, y: i32, w: i32, h: i32) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsView_Items5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsview.Items5: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn Items7(self: QGraphicsView, allocator: std.mem.Allocator, path: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        const _arr: qtc.libqt_list = qtc.QGraphicsView_Items7(@ptrCast(self.ptr), @ptrCast(path.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsview.Items7: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` pos: QPoint `
    ///
    pub fn ItemAt(self: QGraphicsView, pos: anytype) QGraphicsItem {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QGraphicsView_ItemAt(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ItemAt2(self: QGraphicsView, x: i32, y: i32) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsView_ItemAt2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` point: QPoint `
    ///
    pub fn MapToScene(self: QGraphicsView, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPoint;
        return .{ .ptr = qtc.QGraphicsView_MapToScene(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapToScene4(self: QGraphicsView, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsView_MapToScene4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapFromScene(self: QGraphicsView, point: anytype) QPoint {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsView_MapFromScene(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapFromScene4(self: QGraphicsView, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsView_MapFromScene4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn MapToScene5(self: QGraphicsView, x: i32, y: i32) QPointF {
        return .{ .ptr = qtc.QGraphicsView_MapToScene5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapFromScene5(self: QGraphicsView, x: f64, y: f64) QPoint {
        return .{ .ptr = qtc.QGraphicsView_MapFromScene5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QGraphicsView, query: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsView_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: QGraphicsView, callback: *const fn (QGraphicsView, i32) callconv(.c) QVariant) void {
        qtc.QGraphicsView_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QGraphicsView, query: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsView_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#backgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn BackgroundBrush(self: QGraphicsView) QBrush {
        return .{ .ptr = qtc.QGraphicsView_BackgroundBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setBackgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBackgroundBrush(self: QGraphicsView, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QGraphicsView_SetBackgroundBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#foregroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ForegroundBrush(self: QGraphicsView) QBrush {
        return .{ .ptr = qtc.QGraphicsView_ForegroundBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setForegroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetForegroundBrush(self: QGraphicsView, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QGraphicsView_SetForegroundBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#updateScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` rects: []QRectF `
    ///
    pub fn UpdateScene(self: QGraphicsView, rects: []QRectF) void {
        const rects_list = qtc.libqt_list{
            .len = rects.len,
            .data = @ptrCast(rects.ptr),
        };
        qtc.QGraphicsView_UpdateScene(@ptrCast(self.ptr), rects_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn InvalidateScene(self: QGraphicsView) void {
        qtc.QGraphicsView_InvalidateScene(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#updateSceneRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` rect: QRectF `
    ///
    pub fn UpdateSceneRect(self: QGraphicsView, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_UpdateSceneRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` viewportRect: QRect `
    ///
    /// ` fromScenePoint: QPointF `
    ///
    /// ` toScenePoint: QPointF `
    ///
    pub fn RubberBandChanged(self: QGraphicsView, viewportRect: anytype, fromScenePoint: anytype, toScenePoint: anytype) void {
        comptime _ = @TypeOf(viewportRect)._is_QRect;
        comptime _ = @TypeOf(fromScenePoint)._is_QPointF;
        comptime _ = @TypeOf(toScenePoint)._is_QPointF;
        qtc.QGraphicsView_RubberBandChanged(@ptrCast(self.ptr), @ptrCast(viewportRect.ptr), @ptrCast(fromScenePoint.ptr), @ptrCast(toScenePoint.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, viewportRect: QRect, fromScenePoint: QPointF, toScenePoint: QPointF) callconv(.c) void `
    ///
    pub fn OnRubberBandChanged(self: QGraphicsView, callback: *const fn (QGraphicsView, QRect, QPointF, QPointF) callconv(.c) void) void {
        qtc.QGraphicsView_Connect_RubberBandChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetupViewport(self: QGraphicsView, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsView_SetupViewport(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnSetupViewport(self: QGraphicsView, callback: *const fn (QGraphicsView, QWidget) callconv(.c) void) void {
        qtc.QGraphicsView_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetupViewport` instead
    ///
    pub const QBaseSetupViewport = SuperSetupViewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperSetupViewport(self: QGraphicsView, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsView_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QGraphicsView, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsView_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsView_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QGraphicsView, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsView_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QEvent `
    ///
    pub fn ViewportEvent(self: QGraphicsView, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsView_ViewportEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnViewportEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsView_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperViewportEvent` instead
    ///
    pub const QBaseViewportEvent = SuperViewportEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperViewportEvent(self: QGraphicsView, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsView_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.QGraphicsView_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QContextMenuEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.QGraphicsView_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QGraphicsView_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QDragEnterEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QGraphicsView_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QGraphicsView_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QGraphicsView_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QGraphicsView_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QDragMoveEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QGraphicsView_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QGraphicsView_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QDropEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QGraphicsView_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QGraphicsView_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QFocusEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QGraphicsView_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: QGraphicsView, next: bool) bool {
        return qtc.QGraphicsView_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: QGraphicsView, callback: *const fn (QGraphicsView, bool) callconv(.c) bool) void {
        qtc.QGraphicsView_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: QGraphicsView, next: bool) bool {
        return qtc.QGraphicsView_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QGraphicsView_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QFocusEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QGraphicsView_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QGraphicsView_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QKeyEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QGraphicsView_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QGraphicsView_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QKeyEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QGraphicsView_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QGraphicsView_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QGraphicsView_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QGraphicsView_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QGraphicsView_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QGraphicsView_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QGraphicsView_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QGraphicsView_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QGraphicsView_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QGraphicsView_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QWheelEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QGraphicsView_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QGraphicsView_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QPaintEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QGraphicsView_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#resizeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QGraphicsView_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QResizeEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QGraphicsView_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn ScrollContentsBy(self: QGraphicsView, dx: i32, dy: i32) void {
        qtc.QGraphicsView_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn OnScrollContentsBy(self: QGraphicsView, callback: *const fn (QGraphicsView, i32, i32) callconv(.c) void) void {
        qtc.QGraphicsView_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperScrollContentsBy` instead
    ///
    pub const QBaseScrollContentsBy = SuperScrollContentsBy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollContentsBy(self: QGraphicsView, dx: i32, dy: i32) void {
        qtc.QGraphicsView_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QGraphicsView_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QShowEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QGraphicsView_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QGraphicsView_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QInputMethodEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QGraphicsView_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn DrawBackground(self: QGraphicsView, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_DrawBackground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, painter: QPainter, rect: QRectF) callconv(.c) void `
    ///
    pub fn OnDrawBackground(self: QGraphicsView, callback: *const fn (QGraphicsView, QPainter, QRectF) callconv(.c) void) void {
        qtc.QGraphicsView_OnDrawBackground(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawBackground` instead
    ///
    pub const QBaseDrawBackground = SuperDrawBackground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SuperDrawBackground(self: QGraphicsView, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_SuperDrawBackground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn DrawForeground(self: QGraphicsView, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_DrawForeground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, painter: QPainter, rect: QRectF) callconv(.c) void `
    ///
    pub fn OnDrawForeground(self: QGraphicsView, callback: *const fn (QGraphicsView, QPainter, QRectF) callconv(.c) void) void {
        qtc.QGraphicsView_OnDrawForeground(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawForeground` instead
    ///
    pub const QBaseDrawForeground = SuperDrawForeground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SuperDrawForeground(self: QGraphicsView, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_SuperDrawForeground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` numItems: i32 `
    ///
    /// ` items: *QGraphicsItem.ptr `
    ///
    /// ` options: QStyleOptionGraphicsItem `
    ///
    pub fn DrawItems(self: QGraphicsView, painter: anytype, numItems: i32, items: *?*anyopaque, options: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(options)._is_QStyleOptionGraphicsItem;
        qtc.QGraphicsView_DrawItems(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(numItems), @ptrCast(items), @ptrCast(options.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawItems)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, painter: QPainter, numItems: i32, items: *QGraphicsItem.ptr, options: QStyleOptionGraphicsItem) callconv(.c) void `
    ///
    pub fn OnDrawItems(self: QGraphicsView, callback: *const fn (QGraphicsView, QPainter, i32, *?*anyopaque, QStyleOptionGraphicsItem) callconv(.c) void) void {
        qtc.QGraphicsView_OnDrawItems(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawItems` instead
    ///
    pub const QBaseDrawItems = SuperDrawItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawItems)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` numItems: i32 `
    ///
    /// ` items: *QGraphicsItem.ptr `
    ///
    /// ` options: QStyleOptionGraphicsItem `
    ///
    pub fn SuperDrawItems(self: QGraphicsView, painter: anytype, numItems: i32, items: *?*anyopaque, options: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(options)._is_QStyleOptionGraphicsItem;
        qtc.QGraphicsView_SuperDrawItems(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(numItems), @ptrCast(items), @ptrCast(options.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsview.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsview.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` hint: qpainter_enums.RenderHint `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetRenderHint2(self: QGraphicsView, hint: i32, enabled: bool) void {
        qtc.QGraphicsView_SetRenderHint2(@ptrCast(self.ptr), @bitCast(hint), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` flag: qgraphicsview_enums.OptimizationFlag `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetOptimizationFlag2(self: QGraphicsView, flag: i32, enabled: bool) void {
        qtc.QGraphicsView_SetOptimizationFlag2(@ptrCast(self.ptr), @bitCast(flag), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` matrix: QTransform `
    ///
    /// ` combine: bool `
    ///
    pub fn SetTransform2(self: QGraphicsView, matrix: anytype, combine: bool) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QGraphicsView_SetTransform2(@ptrCast(self.ptr), @ptrCast(matrix.ptr), combine);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn EnsureVisible22(self: QGraphicsView, rect: anytype, xmargin: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_EnsureVisible22(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xmargin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn EnsureVisible32(self: QGraphicsView, rect: anytype, xmargin: i32, ymargin: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_EnsureVisible32(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn EnsureVisible5(self: QGraphicsView, x: f64, y: f64, w: f64, h: f64, xmargin: i32) void {
        qtc.QGraphicsView_EnsureVisible5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xmargin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn EnsureVisible6(self: QGraphicsView, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsView_EnsureVisible6(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn EnsureVisible23(self: QGraphicsView, item: anytype, xmargin: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsView_EnsureVisible23(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(xmargin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn EnsureVisible33(self: QGraphicsView, item: anytype, xmargin: i32, ymargin: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsView_EnsureVisible33(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` rect: QRectF `
    ///
    /// ` aspectRadioMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn FitInView22(self: QGraphicsView, rect: anytype, aspectRadioMode: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_FitInView22(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(aspectRadioMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` aspectRadioMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn FitInView5(self: QGraphicsView, x: f64, y: f64, w: f64, h: f64, aspectRadioMode: i32) void {
        qtc.QGraphicsView_FitInView5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(aspectRadioMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` aspectRadioMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn FitInView23(self: QGraphicsView, item: anytype, aspectRadioMode: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsView_FitInView23(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(aspectRadioMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` target: QRectF `
    ///
    pub fn Render2(self: QGraphicsView, painter: anytype, target: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(target)._is_QRectF;
        qtc.QGraphicsView_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(target.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` target: QRectF `
    ///
    /// ` source: QRect `
    ///
    pub fn Render3(self: QGraphicsView, painter: anytype, target: anytype, source: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(target)._is_QRectF;
        comptime _ = @TypeOf(source)._is_QRect;
        qtc.QGraphicsView_Render3(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(target.ptr), @ptrCast(source.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` target: QRectF `
    ///
    /// ` source: QRect `
    ///
    /// ` aspectRatioMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Render4(self: QGraphicsView, painter: anytype, target: anytype, source: anytype, aspectRatioMode: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(target)._is_QRectF;
        comptime _ = @TypeOf(source)._is_QRect;
        qtc.QGraphicsView_Render4(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(target.ptr), @ptrCast(source.ptr), @bitCast(aspectRatioMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rect: QRect `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn Items22(self: QGraphicsView, allocator: std.mem.Allocator, rect: anytype, mode: i32) []QGraphicsItem {
        comptime _ = @TypeOf(rect)._is_QRect;
        const _arr: qtc.libqt_list = qtc.QGraphicsView_Items22(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsview.Items22: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn Items52(self: QGraphicsView, allocator: std.mem.Allocator, x: i32, y: i32, w: i32, h: i32, mode: i32) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsView_Items52(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsview.Items52: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn Items24(self: QGraphicsView, allocator: std.mem.Allocator, path: anytype, mode: i32) []QGraphicsItem {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        const _arr: qtc.libqt_list = qtc.QGraphicsView_Items24(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsview.Items24: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` rect: QRectF `
    ///
    pub fn InvalidateScene1(self: QGraphicsView, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_InvalidateScene1(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` rect: QRectF `
    ///
    /// ` layers: flag of qgraphicsscene_enums.SceneLayer `
    ///
    pub fn InvalidateScene2(self: QGraphicsView, rect: anytype, layers: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_InvalidateScene2(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(layers));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn VerticalScrollBarPolicy(self: QGraphicsView) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetVerticalScrollBarPolicy(self: QGraphicsView, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn VerticalScrollBar(self: QGraphicsView) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetVerticalScrollBar(self: QGraphicsView, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn HorizontalScrollBarPolicy(self: QGraphicsView) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetHorizontalScrollBarPolicy(self: QGraphicsView, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn HorizontalScrollBar(self: QGraphicsView) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetHorizontalScrollBar(self: QGraphicsView, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn CornerWidget(self: QGraphicsView) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetCornerWidget(self: QGraphicsView, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` widget: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddScrollBarWidget(self: QGraphicsView, widget: anytype, alignment: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn ScrollBarWidgets(self: QGraphicsView, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("qgraphicsview.ScrollBarWidgets: Memory allocation failed");
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
    /// ` self: QGraphicsView `
    ///
    pub fn Viewport(self: QGraphicsView) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_Viewport(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetViewport(self: QGraphicsView, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn MaximumViewportSize(self: QGraphicsView) QSize {
        return .{ .ptr = qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SizeAdjustPolicy(self: QGraphicsView) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SetSizeAdjustPolicy(self: QGraphicsView, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn FrameStyle(self: QGraphicsView) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` frameStyle: i32 `
    ///
    pub fn SetFrameStyle(self: QGraphicsView, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self.ptr), @bitCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn FrameWidth(self: QGraphicsView) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn FrameShape(self: QGraphicsView) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` frameShape: qframe_enums.Shape `
    ///
    pub fn SetFrameShape(self: QGraphicsView, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self.ptr), @bitCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn FrameShadow(self: QGraphicsView) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` frameShadow: qframe_enums.Shadow `
    ///
    pub fn SetFrameShadow(self: QGraphicsView, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self.ptr), @bitCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn LineWidth(self: QGraphicsView) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: QGraphicsView, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self.ptr), @bitCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn MidLineWidth(self: QGraphicsView) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: QGraphicsView, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn FrameRect(self: QGraphicsView) QRect {
        return .{ .ptr = qtc.QFrame_FrameRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` frameRect: QRect `
    ///
    pub fn SetFrameRect(self: QGraphicsView, frameRect: anytype) void {
        comptime _ = @TypeOf(frameRect)._is_QRect;
        qtc.QFrame_SetFrameRect(@ptrCast(self.ptr), @ptrCast(frameRect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn WinId(self: QGraphicsView) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn CreateWinId(self: QGraphicsView) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn InternalWinId(self: QGraphicsView) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn EffectiveWinId(self: QGraphicsView) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Style(self: QGraphicsView) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QGraphicsView, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn IsTopLevel(self: QGraphicsView) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn IsWindow(self: QGraphicsView) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn IsModal(self: QGraphicsView) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: QGraphicsView) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: QGraphicsView, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn IsEnabled(self: QGraphicsView) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: QGraphicsView, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QGraphicsView, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: QGraphicsView, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: QGraphicsView, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn FrameGeometry(self: QGraphicsView) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Geometry(self: QGraphicsView) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn NormalGeometry(self: QGraphicsView) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn X(self: QGraphicsView) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Y(self: QGraphicsView) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Pos(self: QGraphicsView) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn FrameSize(self: QGraphicsView) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Size(self: QGraphicsView) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Width(self: QGraphicsView) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Height(self: QGraphicsView) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Rect(self: QGraphicsView) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ChildrenRect(self: QGraphicsView) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ChildrenRegion(self: QGraphicsView) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn MinimumSize(self: QGraphicsView) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn MaximumSize(self: QGraphicsView) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn MinimumWidth(self: QGraphicsView) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn MinimumHeight(self: QGraphicsView) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn MaximumWidth(self: QGraphicsView) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn MaximumHeight(self: QGraphicsView) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: QGraphicsView, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: QGraphicsView, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: QGraphicsView, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: QGraphicsView, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: QGraphicsView, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: QGraphicsView, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: QGraphicsView, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: QGraphicsView, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn SizeIncrement(self: QGraphicsView) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: QGraphicsView, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: QGraphicsView, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn BaseSize(self: QGraphicsView) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: QGraphicsView, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: QGraphicsView, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: QGraphicsView, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: QGraphicsView, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: QGraphicsView, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: QGraphicsView, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: QGraphicsView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: QGraphicsView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: QGraphicsView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: QGraphicsView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: QGraphicsView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: QGraphicsView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: QGraphicsView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: QGraphicsView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: QGraphicsView, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: QGraphicsView, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: QGraphicsView, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: QGraphicsView, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QGraphicsView `
    ///
    pub fn Window(self: QGraphicsView) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn NativeParentWidget(self: QGraphicsView) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn TopLevelWidget(self: QGraphicsView) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Palette(self: QGraphicsView) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QGraphicsView, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: QGraphicsView, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: QGraphicsView) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: QGraphicsView, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: QGraphicsView) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Font(self: QGraphicsView) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QGraphicsView, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn FontMetrics(self: QGraphicsView) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn FontInfo(self: QGraphicsView) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Cursor(self: QGraphicsView) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QGraphicsView, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn UnsetCursor(self: QGraphicsView) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: QGraphicsView, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn HasMouseTracking(self: QGraphicsView) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn UnderMouse(self: QGraphicsView) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: QGraphicsView, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn HasTabletTracking(self: QGraphicsView) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QGraphicsView, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: QGraphicsView, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Mask(self: QGraphicsView) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ClearMask(self: QGraphicsView) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Grab(self: QGraphicsView) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn GraphicsEffect(self: QGraphicsView) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: QGraphicsView, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: QGraphicsView, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: QGraphicsView, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: QGraphicsView, windowTitle: []const u8) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: QGraphicsView, styleSheet: []const u8) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: QGraphicsView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsview.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: QGraphicsView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsview.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: QGraphicsView, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn WindowIcon(self: QGraphicsView) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: QGraphicsView, windowIconText: []const u8) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: QGraphicsView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsview.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: QGraphicsView, windowRole: []const u8) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: QGraphicsView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsview.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: QGraphicsView, filePath: []const u8) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: QGraphicsView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsview.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: QGraphicsView, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn WindowOpacity(self: QGraphicsView) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn IsWindowModified(self: QGraphicsView) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QGraphicsView, toolTip: []const u8) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QGraphicsView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsview.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: QGraphicsView, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ToolTipDuration(self: QGraphicsView) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QGraphicsView, statusTip: []const u8) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: QGraphicsView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsview.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QGraphicsView, whatsThis: []const u8) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QGraphicsView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsview.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: QGraphicsView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsview.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: QGraphicsView, name: []const u8) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: QGraphicsView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsview.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: QGraphicsView, description: []const u8) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QGraphicsView, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QGraphicsView) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn UnsetLayoutDirection(self: QGraphicsView) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QGraphicsView, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Locale(self: QGraphicsView) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn UnsetLocale(self: QGraphicsView) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn IsRightToLeft(self: QGraphicsView) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn IsLeftToRight(self: QGraphicsView) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn SetFocus(self: QGraphicsView) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn IsActiveWindow(self: QGraphicsView) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ActivateWindow(self: QGraphicsView) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ClearFocus(self: QGraphicsView) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: QGraphicsView, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: QGraphicsView) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: QGraphicsView, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn HasFocus(self: QGraphicsView) bool {
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
    /// ` self: QGraphicsView `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: QGraphicsView, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn FocusProxy(self: QGraphicsView) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: QGraphicsView) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: QGraphicsView, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn GrabMouse(self: QGraphicsView) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: QGraphicsView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ReleaseMouse(self: QGraphicsView) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn GrabKeyboard(self: QGraphicsView) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ReleaseKeyboard(self: QGraphicsView) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: QGraphicsView, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: QGraphicsView, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: QGraphicsView, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: QGraphicsView, id: i32) void {
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
    /// ` self: QGraphicsView `
    ///
    pub fn UpdatesEnabled(self: QGraphicsView) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: QGraphicsView, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn GraphicsProxyWidget(self: QGraphicsView) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Update(self: QGraphicsView) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Repaint(self: QGraphicsView) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: QGraphicsView, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: QGraphicsView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: QGraphicsView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: QGraphicsView, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: QGraphicsView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: QGraphicsView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: QGraphicsView, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Show(self: QGraphicsView) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Hide(self: QGraphicsView) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ShowMinimized(self: QGraphicsView) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ShowMaximized(self: QGraphicsView) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ShowFullScreen(self: QGraphicsView) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ShowNormal(self: QGraphicsView) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Close(self: QGraphicsView) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Raise(self: QGraphicsView) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Lower(self: QGraphicsView) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: QGraphicsView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: QGraphicsView, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: QGraphicsView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: QGraphicsView, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: QGraphicsView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: QGraphicsView, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: QGraphicsView, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: QGraphicsView, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qgraphicsview.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: QGraphicsView, geometry: []u8) bool {
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
    /// ` self: QGraphicsView `
    ///
    pub fn AdjustSize(self: QGraphicsView) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn IsVisible(self: QGraphicsView) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: QGraphicsView, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn IsHidden(self: QGraphicsView) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn IsMinimized(self: QGraphicsView) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn IsMaximized(self: QGraphicsView) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn IsFullScreen(self: QGraphicsView) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: QGraphicsView) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: QGraphicsView, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: QGraphicsView, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn SizePolicy(self: QGraphicsView) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QGraphicsView, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QGraphicsView, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn VisibleRegion(self: QGraphicsView) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: QGraphicsView, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: QGraphicsView, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ContentsMargins(self: QGraphicsView) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ContentsRect(self: QGraphicsView) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Layout(self: QGraphicsView) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: QGraphicsView, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn UpdateGeometry(self: QGraphicsView) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: QGraphicsView, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: QGraphicsView, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: QGraphicsView, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: QGraphicsView, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn FocusWidget(self: QGraphicsView) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn NextInFocusChain(self: QGraphicsView) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn PreviousInFocusChain(self: QGraphicsView) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn AcceptDrops(self: QGraphicsView) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: QGraphicsView, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: QGraphicsView, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QGraphicsView, actions: []QAction) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QGraphicsView, before: anytype, actions: []QAction) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: QGraphicsView, before: anytype, action: anytype) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: QGraphicsView, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: QGraphicsView, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qgraphicsview.Actions: Memory allocation failed");
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
    /// ` self: QGraphicsView `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: QGraphicsView, text: []const u8) QAction {
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
    /// ` self: QGraphicsView `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: QGraphicsView, icon: anytype, text: []const u8) QAction {
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
    /// ` self: QGraphicsView `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: QGraphicsView, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QGraphicsView `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: QGraphicsView, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QGraphicsView `
    ///
    pub fn ParentWidget(self: QGraphicsView) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: QGraphicsView, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: QGraphicsView) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: QGraphicsView, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: QGraphicsView, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: QGraphicsView) i32 {
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
    /// ` self: QGraphicsView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: QGraphicsView, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: QGraphicsView, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: QGraphicsView, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: QGraphicsView, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: QGraphicsView, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn EnsurePolished(self: QGraphicsView) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: QGraphicsView, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn AutoFillBackground(self: QGraphicsView) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: QGraphicsView, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn BackingStore(self: QGraphicsView) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn WindowHandle(self: QGraphicsView) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Screen(self: QGraphicsView) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: QGraphicsView, screen: anytype) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: QGraphicsView, title: []const u8) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: QGraphicsView, callback: *const fn (QGraphicsView, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: QGraphicsView, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: QGraphicsView, callback: *const fn (QGraphicsView, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: QGraphicsView, iconText: []const u8) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: QGraphicsView, callback: *const fn (QGraphicsView, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: QGraphicsView, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: QGraphicsView, callback: *const fn (QGraphicsView, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: QGraphicsView) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: QGraphicsView, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: QGraphicsView, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: QGraphicsView, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: QGraphicsView, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: QGraphicsView, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: QGraphicsView, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QGraphicsView, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: QGraphicsView, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: QGraphicsView, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: QGraphicsView, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: QGraphicsView, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: QGraphicsView, param1: i32, on: bool) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QGraphicsView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsview.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QGraphicsView, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn IsWidgetType(self: QGraphicsView) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn IsWindowType(self: QGraphicsView) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn IsQuickItemType(self: QGraphicsView) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn SignalsBlocked(self: QGraphicsView) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QGraphicsView, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Thread(self: QGraphicsView) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QGraphicsView, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QGraphicsView, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QGraphicsView, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QGraphicsView, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QGraphicsView, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QGraphicsView, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qgraphicsview.Children: Memory allocation failed");
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
    /// ` self: QGraphicsView `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QGraphicsView, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QGraphicsView, obj: anytype) void {
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
    /// ` self: QGraphicsView `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QGraphicsView, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsView `
    ///
    pub fn Disconnect3(self: QGraphicsView) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QGraphicsView, receiver: anytype) bool {
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
    /// ` self: QGraphicsView `
    ///
    pub fn DumpObjectTree(self: QGraphicsView) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn DumpObjectInfo(self: QGraphicsView) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QGraphicsView, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsView `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QGraphicsView, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QGraphicsView, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qgraphicsview.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgraphicsview.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsView `
    ///
    pub fn BindingStorage(self: QGraphicsView) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn BindingStorage2(self: QGraphicsView) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Destroyed(self: QGraphicsView) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QGraphicsView, callback: *const fn (QGraphicsView) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Parent(self: QGraphicsView) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QGraphicsView, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn DeleteLater(self: QGraphicsView) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QGraphicsView, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QGraphicsView, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsView `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QGraphicsView, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QGraphicsView, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QGraphicsView, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QGraphicsView, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsView `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QGraphicsView, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QGraphicsView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QGraphicsView, callback: *const fn (QGraphicsView, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn PaintingActive(self: QGraphicsView) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn WidthMM(self: QGraphicsView) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn HeightMM(self: QGraphicsView) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn LogicalDpiX(self: QGraphicsView) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn LogicalDpiY(self: QGraphicsView) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn PhysicalDpiX(self: QGraphicsView) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn PhysicalDpiY(self: QGraphicsView) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn DevicePixelRatio(self: QGraphicsView) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn DevicePixelRatioF(self: QGraphicsView) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ColorCount(self: QGraphicsView) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Depth(self: QGraphicsView) i32 {
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

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn MinimumSizeHint(self: QGraphicsView) QSize {
        return .{ .ptr = qtc.QGraphicsView_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsView `
    ///
    pub fn SuperMinimumSizeHint(self: QGraphicsView) QSize {
        return .{ .ptr = qtc.QGraphicsView_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: QGraphicsView, callback: *const fn () callconv(.c) QSize) void {
        qtc.QGraphicsView_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn EventFilter(self: QGraphicsView, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QGraphicsView_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn SuperEventFilter(self: QGraphicsView, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QGraphicsView_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QGraphicsView, callback: *const fn (QGraphicsView, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsView_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ViewportSizeHint(self: QGraphicsView) QSize {
        return .{ .ptr = qtc.QGraphicsView_ViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperViewportSizeHint` instead
    ///
    pub const QBaseViewportSizeHint = SuperViewportSizeHint;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn SuperViewportSizeHint(self: QGraphicsView) QSize {
        return .{ .ptr = qtc.QGraphicsView_SuperViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnViewportSizeHint(self: QGraphicsView, callback: *const fn () callconv(.c) QSize) void {
        qtc.QGraphicsView_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: QGraphicsView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QGraphicsView_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: QGraphicsView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QGraphicsView_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn InitStyleOption(self: QGraphicsView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QGraphicsView_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: QGraphicsView `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn SuperInitStyleOption(self: QGraphicsView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QGraphicsView_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: QGraphicsView, callback: *const fn (QGraphicsView, QStyleOptionFrame) callconv(.c) void) void {
        qtc.QGraphicsView_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn DevType(self: QGraphicsView) i32 {
        return qtc.QGraphicsView_DevType(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsView `
    ///
    pub fn SuperDevType(self: QGraphicsView) i32 {
        return qtc.QGraphicsView_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QGraphicsView, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsView_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QGraphicsView, visible: bool) void {
        qtc.QGraphicsView_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QGraphicsView `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: QGraphicsView, visible: bool) void {
        qtc.QGraphicsView_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: QGraphicsView, callback: *const fn (QGraphicsView, bool) callconv(.c) void) void {
        qtc.QGraphicsView_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QGraphicsView, param1: i32) i32 {
        return qtc.QGraphicsView_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QGraphicsView `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QGraphicsView, param1: i32) i32 {
        return qtc.QGraphicsView_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QGraphicsView, callback: *const fn (QGraphicsView, i32) callconv(.c) i32) void {
        qtc.QGraphicsView_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn HasHeightForWidth(self: QGraphicsView) bool {
        return qtc.QGraphicsView_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsView `
    ///
    pub fn SuperHasHeightForWidth(self: QGraphicsView) bool {
        return qtc.QGraphicsView_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QGraphicsView, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsView_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn PaintEngine(self: QGraphicsView) QPaintEngine {
        return .{ .ptr = qtc.QGraphicsView_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsView `
    ///
    pub fn SuperPaintEngine(self: QGraphicsView) QPaintEngine {
        return .{ .ptr = qtc.QGraphicsView_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QGraphicsView, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QGraphicsView_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QGraphicsView_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGraphicsView `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QGraphicsView_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QEnterEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGraphicsView_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGraphicsView `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGraphicsView_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QGraphicsView_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGraphicsView `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QGraphicsView_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QMoveEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QGraphicsView_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGraphicsView `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QGraphicsView_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QCloseEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QGraphicsView_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGraphicsView `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QGraphicsView_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QTabletEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QGraphicsView_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGraphicsView `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QGraphicsView_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QActionEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QGraphicsView_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGraphicsView `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QGraphicsView_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QHideEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: QGraphicsView, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QGraphicsView_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QGraphicsView `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: QGraphicsView, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QGraphicsView_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QGraphicsView_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QGraphicsView, param1: i32) i32 {
        return qtc.QGraphicsView_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QGraphicsView `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QGraphicsView, param1: i32) i32 {
        return qtc.QGraphicsView_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QGraphicsView, callback: *const fn (QGraphicsView, i32) callconv(.c) i32) void {
        qtc.QGraphicsView_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QGraphicsView, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsView_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QGraphicsView `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QGraphicsView, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsView_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QGraphicsView, callback: *const fn (QGraphicsView, QPainter) callconv(.c) void) void {
        qtc.QGraphicsView_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QGraphicsView, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QGraphicsView_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QGraphicsView `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QGraphicsView, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QGraphicsView_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QGraphicsView, callback: *const fn (QGraphicsView, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QGraphicsView_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn SharedPainter(self: QGraphicsView) QPainter {
        return .{ .ptr = qtc.QGraphicsView_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsView `
    ///
    pub fn SuperSharedPainter(self: QGraphicsView) QPainter {
        return .{ .ptr = qtc.QGraphicsView_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QGraphicsView, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QGraphicsView_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGraphicsView_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGraphicsView `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGraphicsView_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QTimerEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGraphicsView_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGraphicsView `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGraphicsView_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QChildEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGraphicsView_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGraphicsView `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QGraphicsView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGraphicsView_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QGraphicsView, callback: *const fn (QGraphicsView, QEvent) callconv(.c) void) void {
        qtc.QGraphicsView_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QGraphicsView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsView_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QGraphicsView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsView_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QGraphicsView, callback: *const fn (QGraphicsView, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsView_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QGraphicsView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsView_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QGraphicsView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsView_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QGraphicsView, callback: *const fn (QGraphicsView, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsView_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetViewportMargins(self: QGraphicsView, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QGraphicsView_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: QGraphicsView `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SuperSetViewportMargins(self: QGraphicsView, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QGraphicsView_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn OnSetViewportMargins(self: QGraphicsView, callback: *const fn (QGraphicsView, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QGraphicsView_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn ViewportMargins(self: QGraphicsView) QMargins {
        return .{ .ptr = qtc.QGraphicsView_ViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsView `
    ///
    pub fn SuperViewportMargins(self: QGraphicsView) QMargins {
        return .{ .ptr = qtc.QGraphicsView_SuperViewportMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn () callconv(.c) QMargins `
    ///
    pub fn OnViewportMargins(self: QGraphicsView, callback: *const fn () callconv(.c) QMargins) void {
        qtc.QGraphicsView_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QPainter `
    ///
    pub fn DrawFrame(self: QGraphicsView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QGraphicsView_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QGraphicsView `
    ///
    /// ` param1: QPainter `
    ///
    pub fn SuperDrawFrame(self: QGraphicsView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QGraphicsView_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, param1: QPainter) callconv(.c) void `
    ///
    pub fn OnDrawFrame(self: QGraphicsView, callback: *const fn (QGraphicsView, QPainter) callconv(.c) void) void {
        qtc.QGraphicsView_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn UpdateMicroFocus(self: QGraphicsView) void {
        qtc.QGraphicsView_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsView `
    ///
    pub fn SuperUpdateMicroFocus(self: QGraphicsView) void {
        qtc.QGraphicsView_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: QGraphicsView, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsView_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Create(self: QGraphicsView) void {
        qtc.QGraphicsView_Create(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsView `
    ///
    pub fn SuperCreate(self: QGraphicsView) void {
        qtc.QGraphicsView_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: QGraphicsView, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsView_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Destroy(self: QGraphicsView) void {
        qtc.QGraphicsView_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsView `
    ///
    pub fn SuperDestroy(self: QGraphicsView) void {
        qtc.QGraphicsView_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: QGraphicsView, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsView_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn FocusNextChild(self: QGraphicsView) bool {
        return qtc.QGraphicsView_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsView `
    ///
    pub fn SuperFocusNextChild(self: QGraphicsView) bool {
        return qtc.QGraphicsView_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: QGraphicsView, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsView_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn FocusPreviousChild(self: QGraphicsView) bool {
        return qtc.QGraphicsView_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsView `
    ///
    pub fn SuperFocusPreviousChild(self: QGraphicsView) bool {
        return qtc.QGraphicsView_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: QGraphicsView, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsView_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Sender(self: QGraphicsView) QObject {
        return .{ .ptr = qtc.QGraphicsView_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsView `
    ///
    pub fn SuperSender(self: QGraphicsView) QObject {
        return .{ .ptr = qtc.QGraphicsView_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QGraphicsView, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGraphicsView_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn SenderSignalIndex(self: QGraphicsView) i32 {
        return qtc.QGraphicsView_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsView `
    ///
    pub fn SuperSenderSignalIndex(self: QGraphicsView) i32 {
        return qtc.QGraphicsView_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QGraphicsView, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsView_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QGraphicsView, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsView_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QGraphicsView, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsView_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QGraphicsView, callback: *const fn (QGraphicsView, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsView_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QGraphicsView, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsView_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QGraphicsView, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsView_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QGraphicsView, callback: *const fn (QGraphicsView, QMetaMethod) callconv(.c) bool) void {
        qtc.QGraphicsView_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QGraphicsView, metricA: i32, metricB: i32) f64 {
        return qtc.QGraphicsView_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QGraphicsView `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QGraphicsView, metricA: i32, metricB: i32) f64 {
        return qtc.QGraphicsView_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView`
    ///
    /// ` callback: *const fn (self: QGraphicsView, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QGraphicsView, callback: *const fn (QGraphicsView, i32, i32) callconv(.c) f64) void {
        qtc.QGraphicsView_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsView `
    ///
    /// ` callback: *const fn (self: QGraphicsView, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QGraphicsView, callback: *const fn (QGraphicsView, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dtor.QGraphicsView)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsView `
    ///
    pub fn Delete(self: QGraphicsView) void {
        qtc.QGraphicsView_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#public-types)
pub const enums = struct {
    pub const ViewportAnchor = enum(i32) {
        pub const NoAnchor: i32 = 0;
        pub const AnchorViewCenter: i32 = 1;
        pub const AnchorUnderMouse: i32 = 2;
    };

    pub const CacheModeFlag = enum(i32) {
        pub const CacheNone: i32 = 0;
        pub const CacheBackground: i32 = 1;
    };

    pub const DragMode = enum(i32) {
        pub const NoDrag: i32 = 0;
        pub const ScrollHandDrag: i32 = 1;
        pub const RubberBandDrag: i32 = 2;
    };

    pub const ViewportUpdateMode = enum(i32) {
        pub const FullViewportUpdate: i32 = 0;
        pub const MinimalViewportUpdate: i32 = 1;
        pub const SmartViewportUpdate: i32 = 2;
        pub const NoViewportUpdate: i32 = 3;
        pub const BoundingRectViewportUpdate: i32 = 4;
    };

    pub const OptimizationFlag = enum(i32) {
        pub const DontSavePainterState: i32 = 1;
        pub const DontAdjustForAntialiasing: i32 = 2;
        pub const IndirectPainting: i32 = 4;
    };
};
