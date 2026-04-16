const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QBrush = @import("libqt6").QBrush;
const QChart = @import("libqt6").QChart;
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
const qabstractscrollarea_enums = @import("../libqabstractscrollarea.zig").enums;
const qchartview_enums = enums;
const qframe_enums = @import("../libqframe.zig").enums;
const qgraphicsscene_enums = @import("../libqgraphicsscene.zig").enums;
const qgraphicsview_enums = @import("../libqgraphicsview.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpainter_enums = @import("../libqpainter.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html)
pub const QChartView = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QChartView,

    pub const _is_QChartView = {};
    pub const _is_QGraphicsView = {};
    pub const _is_QAbstractScrollArea = {};
    pub const _is_QFrame = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QChartView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QChartView {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QChartView_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QChartView object.
    ///
    pub fn New2() QChartView {
        return .{ .ptr = qtc.QChartView_new2() };
    }

    /// New3 constructs a new QChartView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` chart: QChart `
    ///
    pub fn New3(chart: anytype) QChartView {
        comptime _ = @TypeOf(chart)._is_QChart;
        return .{ .ptr = qtc.QChartView_new3(@ptrCast(chart.ptr)) };
    }

    /// New4 constructs a new QChartView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` chart: QChart `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New4(chart: anytype, parent: anytype) QChartView {
        comptime _ = @TypeOf(chart)._is_QChart;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QChartView_new4(@ptrCast(chart.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn MetaObject(self: QChartView) QMetaObject {
        return .{ .ptr = qtc.QChartView_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QChartView, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QChartView_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QChartView `
    ///
    pub fn SuperMetaObject(self: QChartView) QMetaObject {
        return .{ .ptr = qtc.QChartView_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QChartView, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QChartView_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView `
    ///
    /// ` callback: *const fn (self: QChartView, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QChartView, callback: *const fn (QChartView, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QChartView_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QChartView, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QChartView_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QChartView, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QChartView_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView `
    ///
    /// ` callback: *const fn (self: QChartView, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QChartView, callback: *const fn (QChartView, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QChartView_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QChartView, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QChartView_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchartview.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#setRubberBand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` rubberBands: *const flag of qchartview_enums.RubberBand `
    ///
    pub fn SetRubberBand(self: QChartView, rubberBands: *const i32) void {
        qtc.QChartView_SetRubberBand(@ptrCast(self.ptr), @ptrCast(rubberBands));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#rubberBand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qchartview_enums.RubberBand `
    ///
    pub fn RubberBand(self: QChartView) i32 {
        return qtc.QChartView_RubberBand(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#chart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Chart(self: QChartView) QChart {
        return .{ .ptr = qtc.QChartView_Chart(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#setChart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` chart: QChart `
    ///
    pub fn SetChart(self: QChartView, chart: anytype) void {
        comptime _ = @TypeOf(chart)._is_QChart;
        qtc.QChartView_SetChart(@ptrCast(self.ptr), @ptrCast(chart.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#resizeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QChartView_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView `
    ///
    /// ` callback: *const fn (self: QChartView, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: QChartView, callback: *const fn (QChartView, QResizeEvent) callconv(.c) void) void {
        qtc.QChartView_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QChartView_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QChartView_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView `
    ///
    /// ` callback: *const fn (self: QChartView, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QChartView, callback: *const fn (QChartView, QMouseEvent) callconv(.c) void) void {
        qtc.QChartView_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QChartView_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mouseMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QChartView_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mouseMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView `
    ///
    /// ` callback: *const fn (self: QChartView, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QChartView, callback: *const fn (QChartView, QMouseEvent) callconv(.c) void) void {
        qtc.QChartView_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mouseMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QChartView_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mouseReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QChartView_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mouseReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView `
    ///
    /// ` callback: *const fn (self: QChartView, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QChartView, callback: *const fn (QChartView, QMouseEvent) callconv(.c) void) void {
        qtc.QChartView_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mouseReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QChartView_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchartview.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchartview.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#renderHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qpainter_enums.RenderHint `
    ///
    pub fn RenderHints(self: QChartView) i32 {
        return qtc.QGraphicsView_RenderHints(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` hint: qpainter_enums.RenderHint `
    ///
    pub fn SetRenderHint(self: QChartView, hint: i32) void {
        qtc.QGraphicsView_SetRenderHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` hints: flag of qpainter_enums.RenderHint `
    ///
    pub fn SetRenderHints(self: QChartView, hints: i32) void {
        qtc.QGraphicsView_SetRenderHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QChartView) i32 {
        return qtc.QGraphicsView_Alignment(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QChartView, alignment: i32) void {
        qtc.QGraphicsView_SetAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#transformationAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsview_enums.ViewportAnchor `
    ///
    pub fn TransformationAnchor(self: QChartView) i32 {
        return qtc.QGraphicsView_TransformationAnchor(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setTransformationAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` anchor: qgraphicsview_enums.ViewportAnchor `
    ///
    pub fn SetTransformationAnchor(self: QChartView, anchor: i32) void {
        qtc.QGraphicsView_SetTransformationAnchor(@ptrCast(self.ptr), @bitCast(anchor));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#resizeAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsview_enums.ViewportAnchor `
    ///
    pub fn ResizeAnchor(self: QChartView) i32 {
        return qtc.QGraphicsView_ResizeAnchor(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setResizeAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` anchor: qgraphicsview_enums.ViewportAnchor `
    ///
    pub fn SetResizeAnchor(self: QChartView, anchor: i32) void {
        qtc.QGraphicsView_SetResizeAnchor(@ptrCast(self.ptr), @bitCast(anchor));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportUpdateMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsview_enums.ViewportUpdateMode `
    ///
    pub fn ViewportUpdateMode(self: QChartView) i32 {
        return qtc.QGraphicsView_ViewportUpdateMode(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setViewportUpdateMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` mode: qgraphicsview_enums.ViewportUpdateMode `
    ///
    pub fn SetViewportUpdateMode(self: QChartView, mode: i32) void {
        qtc.QGraphicsView_SetViewportUpdateMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#optimizationFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgraphicsview_enums.OptimizationFlag `
    ///
    pub fn OptimizationFlags(self: QChartView) i32 {
        return qtc.QGraphicsView_OptimizationFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` flag: qgraphicsview_enums.OptimizationFlag `
    ///
    pub fn SetOptimizationFlag(self: QChartView, flag: i32) void {
        qtc.QGraphicsView_SetOptimizationFlag(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` flags: flag of qgraphicsview_enums.OptimizationFlag `
    ///
    pub fn SetOptimizationFlags(self: QChartView, flags: i32) void {
        qtc.QGraphicsView_SetOptimizationFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsview_enums.DragMode `
    ///
    pub fn DragMode(self: QChartView) i32 {
        return qtc.QGraphicsView_DragMode(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setDragMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` mode: qgraphicsview_enums.DragMode `
    ///
    pub fn SetDragMode(self: QChartView, mode: i32) void {
        qtc.QGraphicsView_SetDragMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandSelectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ItemSelectionMode `
    ///
    pub fn RubberBandSelectionMode(self: QChartView) i32 {
        return qtc.QGraphicsView_RubberBandSelectionMode(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setRubberBandSelectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn SetRubberBandSelectionMode(self: QChartView, mode: i32) void {
        qtc.QGraphicsView_SetRubberBandSelectionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn RubberBandRect(self: QChartView) QRect {
        return .{ .ptr = qtc.QGraphicsView_RubberBandRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#cacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgraphicsview_enums.CacheModeFlag `
    ///
    pub fn CacheMode(self: QChartView) i32 {
        return qtc.QGraphicsView_CacheMode(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` mode: flag of qgraphicsview_enums.CacheModeFlag `
    ///
    pub fn SetCacheMode(self: QChartView, mode: i32) void {
        qtc.QGraphicsView_SetCacheMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#resetCachedContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ResetCachedContent(self: QChartView) void {
        qtc.QGraphicsView_ResetCachedContent(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#isInteractive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn IsInteractive(self: QChartView) bool {
        return qtc.QGraphicsView_IsInteractive(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setInteractive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` allowed: bool `
    ///
    pub fn SetInteractive(self: QChartView, allowed: bool) void {
        qtc.QGraphicsView_SetInteractive(@ptrCast(self.ptr), allowed);
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Scene(self: QChartView) QGraphicsScene {
        return .{ .ptr = qtc.QGraphicsView_Scene(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` scene: QGraphicsScene `
    ///
    pub fn SetScene(self: QChartView, scene: anytype) void {
        comptime _ = @TypeOf(scene)._is_QGraphicsScene;
        qtc.QGraphicsView_SetScene(@ptrCast(self.ptr), @ptrCast(scene.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#sceneRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn SceneRect(self: QChartView) QRectF {
        return .{ .ptr = qtc.QGraphicsView_SceneRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setSceneRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SetSceneRect(self: QChartView, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_SetSceneRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setSceneRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetSceneRect2(self: QChartView, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsView_SetSceneRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Transform(self: QChartView) QTransform {
        return .{ .ptr = qtc.QGraphicsView_Transform(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ViewportTransform(self: QChartView) QTransform {
        return .{ .ptr = qtc.QGraphicsView_ViewportTransform(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#isTransformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn IsTransformed(self: QChartView) bool {
        return qtc.QGraphicsView_IsTransformed(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` matrix: QTransform `
    ///
    pub fn SetTransform(self: QChartView, matrix: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QGraphicsView_SetTransform(@ptrCast(self.ptr), @ptrCast(matrix.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#resetTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ResetTransform(self: QChartView) void {
        qtc.QGraphicsView_ResetTransform(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` angle: f64 `
    ///
    pub fn Rotate(self: QChartView, angle: f64) void {
        qtc.QGraphicsView_Rotate(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` sx: f64 `
    ///
    /// ` sy: f64 `
    ///
    pub fn Scale(self: QChartView, sx: f64, sy: f64) void {
        qtc.QGraphicsView_Scale(@ptrCast(self.ptr), @bitCast(sx), @bitCast(sy));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#shear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` sh: f64 `
    ///
    /// ` sv: f64 `
    ///
    pub fn Shear(self: QChartView, sh: f64, sv: f64) void {
        qtc.QGraphicsView_Shear(@ptrCast(self.ptr), @bitCast(sh), @bitCast(sv));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Translate(self: QChartView, dx: f64, dy: f64) void {
        qtc.QGraphicsView_Translate(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` pos: QPointF `
    ///
    pub fn CenterOn(self: QChartView, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsView_CenterOn(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn CenterOn2(self: QChartView, x: f64, y: f64) void {
        qtc.QGraphicsView_CenterOn2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn CenterOn3(self: QChartView, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsView_CenterOn3(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` rect: QRectF `
    ///
    pub fn EnsureVisible(self: QChartView, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_EnsureVisible(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn EnsureVisible2(self: QChartView, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsView_EnsureVisible2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn EnsureVisible3(self: QChartView, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsView_EnsureVisible3(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` rect: QRectF `
    ///
    pub fn FitInView(self: QChartView, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_FitInView(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn FitInView2(self: QChartView, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsView_FitInView2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn FitInView3(self: QChartView, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsView_FitInView3(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render(self: QChartView, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsView_Render(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items(self: QChartView, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsView_Items(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qchartview.Items: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: QPoint `
    ///
    pub fn Items2(self: QChartView, allocator: std.mem.Allocator, pos: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(pos)._is_QPoint;
        const _arr: qtc.libqt_list = qtc.QGraphicsView_Items2(@ptrCast(self.ptr), @ptrCast(pos.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qchartview.Items2: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Items3(self: QChartView, allocator: std.mem.Allocator, x: i32, y: i32) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsView_Items3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qchartview.Items3: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rect: QRect `
    ///
    pub fn Items4(self: QChartView, allocator: std.mem.Allocator, rect: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(rect)._is_QRect;
        const _arr: qtc.libqt_list = qtc.QGraphicsView_Items4(@ptrCast(self.ptr), @ptrCast(rect.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qchartview.Items4: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
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
    pub fn Items5(self: QChartView, allocator: std.mem.Allocator, x: i32, y: i32, w: i32, h: i32) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsView_Items5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qchartview.Items5: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn Items7(self: QChartView, allocator: std.mem.Allocator, path: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        const _arr: qtc.libqt_list = qtc.QGraphicsView_Items7(@ptrCast(self.ptr), @ptrCast(path.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qchartview.Items7: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` pos: QPoint `
    ///
    pub fn ItemAt(self: QChartView, pos: anytype) QGraphicsItem {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QGraphicsView_ItemAt(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ItemAt2(self: QChartView, x: i32, y: i32) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsView_ItemAt2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` point: QPoint `
    ///
    pub fn MapToScene(self: QChartView, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPoint;
        return .{ .ptr = qtc.QGraphicsView_MapToScene(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapToScene4(self: QChartView, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsView_MapToScene4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapFromScene(self: QChartView, point: anytype) QPoint {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsView_MapFromScene(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapFromScene4(self: QChartView, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsView_MapFromScene4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn MapToScene5(self: QChartView, x: i32, y: i32) QPointF {
        return .{ .ptr = qtc.QGraphicsView_MapToScene5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapFromScene5(self: QChartView, x: f64, y: f64) QPoint {
        return .{ .ptr = qtc.QGraphicsView_MapFromScene5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#backgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn BackgroundBrush(self: QChartView) QBrush {
        return .{ .ptr = qtc.QGraphicsView_BackgroundBrush(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setBackgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBackgroundBrush(self: QChartView, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QGraphicsView_SetBackgroundBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#foregroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ForegroundBrush(self: QChartView) QBrush {
        return .{ .ptr = qtc.QGraphicsView_ForegroundBrush(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setForegroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetForegroundBrush(self: QChartView, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QGraphicsView_SetForegroundBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#updateScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` rects: []QRectF `
    ///
    pub fn UpdateScene(self: QChartView, rects: []QRectF) void {
        const rects_list = qtc.libqt_list{
            .len = rects.len,
            .data = @ptrCast(rects.ptr),
        };
        qtc.QGraphicsView_UpdateScene(@ptrCast(self.ptr), rects_list);
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn InvalidateScene(self: QChartView) void {
        qtc.QGraphicsView_InvalidateScene(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#updateSceneRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` rect: QRectF `
    ///
    pub fn UpdateSceneRect(self: QChartView, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_UpdateSceneRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` viewportRect: QRect `
    ///
    /// ` fromScenePoint: QPointF `
    ///
    /// ` toScenePoint: QPointF `
    ///
    pub fn RubberBandChanged(self: QChartView, viewportRect: anytype, fromScenePoint: anytype, toScenePoint: anytype) void {
        comptime _ = @TypeOf(viewportRect)._is_QRect;
        comptime _ = @TypeOf(fromScenePoint)._is_QPointF;
        comptime _ = @TypeOf(toScenePoint)._is_QPointF;
        qtc.QGraphicsView_RubberBandChanged(@ptrCast(self.ptr), @ptrCast(viewportRect.ptr), @ptrCast(fromScenePoint.ptr), @ptrCast(toScenePoint.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView `
    ///
    /// ` callback: *const fn (self: QChartView, viewportRect: QRect, fromScenePoint: QPointF, toScenePoint: QPointF) callconv(.c) void `
    ///
    pub fn OnRubberBandChanged(self: QChartView, callback: *const fn (QChartView, QRect, QPointF, QPointF) callconv(.c) void) void {
        qtc.QGraphicsView_Connect_RubberBandChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` hint: qpainter_enums.RenderHint `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetRenderHint2(self: QChartView, hint: i32, enabled: bool) void {
        qtc.QGraphicsView_SetRenderHint2(@ptrCast(self.ptr), @bitCast(hint), enabled);
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` flag: qgraphicsview_enums.OptimizationFlag `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetOptimizationFlag2(self: QChartView, flag: i32, enabled: bool) void {
        qtc.QGraphicsView_SetOptimizationFlag2(@ptrCast(self.ptr), @bitCast(flag), enabled);
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` matrix: QTransform `
    ///
    /// ` combine: bool `
    ///
    pub fn SetTransform2(self: QChartView, matrix: anytype, combine: bool) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QGraphicsView_SetTransform2(@ptrCast(self.ptr), @ptrCast(matrix.ptr), combine);
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn EnsureVisible22(self: QChartView, rect: anytype, xmargin: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_EnsureVisible22(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xmargin));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn EnsureVisible32(self: QChartView, rect: anytype, xmargin: i32, ymargin: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_EnsureVisible32(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
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
    pub fn EnsureVisible5(self: QChartView, x: f64, y: f64, w: f64, h: f64, xmargin: i32) void {
        qtc.QGraphicsView_EnsureVisible5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xmargin));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
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
    pub fn EnsureVisible6(self: QChartView, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsView_EnsureVisible6(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn EnsureVisible23(self: QChartView, item: anytype, xmargin: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsView_EnsureVisible23(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(xmargin));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn EnsureVisible33(self: QChartView, item: anytype, xmargin: i32, ymargin: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsView_EnsureVisible33(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` rect: QRectF `
    ///
    /// ` aspectRadioMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn FitInView22(self: QChartView, rect: anytype, aspectRadioMode: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_FitInView22(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(aspectRadioMode));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
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
    pub fn FitInView5(self: QChartView, x: f64, y: f64, w: f64, h: f64, aspectRadioMode: i32) void {
        qtc.QGraphicsView_FitInView5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(aspectRadioMode));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` aspectRadioMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn FitInView23(self: QChartView, item: anytype, aspectRadioMode: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsView_FitInView23(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(aspectRadioMode));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` target: QRectF `
    ///
    pub fn Render2(self: QChartView, painter: anytype, target: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(target)._is_QRectF;
        qtc.QGraphicsView_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` target: QRectF `
    ///
    /// ` source: QRect `
    ///
    pub fn Render3(self: QChartView, painter: anytype, target: anytype, source: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(target)._is_QRectF;
        comptime _ = @TypeOf(source)._is_QRect;
        qtc.QGraphicsView_Render3(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(target.ptr), @ptrCast(source.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` target: QRectF `
    ///
    /// ` source: QRect `
    ///
    /// ` aspectRatioMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Render4(self: QChartView, painter: anytype, target: anytype, source: anytype, aspectRatioMode: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(target)._is_QRectF;
        comptime _ = @TypeOf(source)._is_QRect;
        qtc.QGraphicsView_Render4(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(target.ptr), @ptrCast(source.ptr), @bitCast(aspectRatioMode));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rect: QRect `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn Items22(self: QChartView, allocator: std.mem.Allocator, rect: anytype, mode: i32) []QGraphicsItem {
        comptime _ = @TypeOf(rect)._is_QRect;
        const _arr: qtc.libqt_list = qtc.QGraphicsView_Items22(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qchartview.Items22: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
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
    pub fn Items52(self: QChartView, allocator: std.mem.Allocator, x: i32, y: i32, w: i32, h: i32, mode: i32) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsView_Items52(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qchartview.Items52: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn Items24(self: QChartView, allocator: std.mem.Allocator, path: anytype, mode: i32) []QGraphicsItem {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        const _arr: qtc.libqt_list = qtc.QGraphicsView_Items24(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qchartview.Items24: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` rect: QRectF `
    ///
    pub fn InvalidateScene1(self: QChartView, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_InvalidateScene1(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` rect: QRectF `
    ///
    /// ` layers: flag of qgraphicsscene_enums.SceneLayer `
    ///
    pub fn InvalidateScene2(self: QChartView, rect: anytype, layers: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsView_InvalidateScene2(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(layers));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn VerticalScrollBarPolicy(self: QChartView) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetVerticalScrollBarPolicy(self: QChartView, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn VerticalScrollBar(self: QChartView) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetVerticalScrollBar(self: QChartView, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn HorizontalScrollBarPolicy(self: QChartView) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetHorizontalScrollBarPolicy(self: QChartView, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn HorizontalScrollBar(self: QChartView) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetHorizontalScrollBar(self: QChartView, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn CornerWidget(self: QChartView) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetCornerWidget(self: QChartView, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` widget: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddScrollBarWidget(self: QChartView, widget: anytype, alignment: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn ScrollBarWidgets(self: QChartView, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("qchartview.ScrollBarWidgets: Memory allocation failed");
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
    /// ` self: QChartView `
    ///
    pub fn Viewport(self: QChartView) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_Viewport(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetViewport(self: QChartView, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn MaximumViewportSize(self: QChartView) QSize {
        return .{ .ptr = qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SizeAdjustPolicy(self: QChartView) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SetSizeAdjustPolicy(self: QChartView, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn FrameStyle(self: QChartView) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` frameStyle: i32 `
    ///
    pub fn SetFrameStyle(self: QChartView, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self.ptr), @bitCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn FrameWidth(self: QChartView) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn FrameShape(self: QChartView) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` frameShape: qframe_enums.Shape `
    ///
    pub fn SetFrameShape(self: QChartView, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self.ptr), @bitCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn FrameShadow(self: QChartView) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` frameShadow: qframe_enums.Shadow `
    ///
    pub fn SetFrameShadow(self: QChartView, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self.ptr), @bitCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn LineWidth(self: QChartView) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: QChartView, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self.ptr), @bitCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn MidLineWidth(self: QChartView) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: QChartView, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn FrameRect(self: QChartView) QRect {
        return .{ .ptr = qtc.QFrame_FrameRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` frameRect: QRect `
    ///
    pub fn SetFrameRect(self: QChartView, frameRect: anytype) void {
        comptime _ = @TypeOf(frameRect)._is_QRect;
        qtc.QFrame_SetFrameRect(@ptrCast(self.ptr), @ptrCast(frameRect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn WinId(self: QChartView) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn CreateWinId(self: QChartView) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn InternalWinId(self: QChartView) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn EffectiveWinId(self: QChartView) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Style(self: QChartView) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QChartView, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn IsTopLevel(self: QChartView) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn IsWindow(self: QChartView) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn IsModal(self: QChartView) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: QChartView) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: QChartView, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn IsEnabled(self: QChartView) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: QChartView, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QChartView, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: QChartView, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: QChartView, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn FrameGeometry(self: QChartView) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Geometry(self: QChartView) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn NormalGeometry(self: QChartView) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn X(self: QChartView) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Y(self: QChartView) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Pos(self: QChartView) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn FrameSize(self: QChartView) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Size(self: QChartView) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Width(self: QChartView) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Height(self: QChartView) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Rect(self: QChartView) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ChildrenRect(self: QChartView) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ChildrenRegion(self: QChartView) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn MinimumSize(self: QChartView) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn MaximumSize(self: QChartView) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn MinimumWidth(self: QChartView) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn MinimumHeight(self: QChartView) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn MaximumWidth(self: QChartView) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn MaximumHeight(self: QChartView) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: QChartView, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: QChartView, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: QChartView, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: QChartView, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: QChartView, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: QChartView, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: QChartView, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: QChartView, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn SizeIncrement(self: QChartView) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: QChartView, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: QChartView, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn BaseSize(self: QChartView) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: QChartView, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: QChartView, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: QChartView, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: QChartView, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: QChartView, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: QChartView, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: QChartView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: QChartView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: QChartView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: QChartView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: QChartView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: QChartView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: QChartView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: QChartView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: QChartView, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QChartView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: QChartView, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QChartView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: QChartView, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QChartView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: QChartView, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QChartView `
    ///
    pub fn Window(self: QChartView) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn NativeParentWidget(self: QChartView) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn TopLevelWidget(self: QChartView) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Palette(self: QChartView) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QChartView, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: QChartView, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: QChartView) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: QChartView, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: QChartView) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Font(self: QChartView) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QChartView, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn FontMetrics(self: QChartView) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn FontInfo(self: QChartView) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Cursor(self: QChartView) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QChartView, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn UnsetCursor(self: QChartView) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: QChartView, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn HasMouseTracking(self: QChartView) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn UnderMouse(self: QChartView) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: QChartView, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn HasTabletTracking(self: QChartView) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QChartView, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: QChartView, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Mask(self: QChartView) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ClearMask(self: QChartView) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Grab(self: QChartView) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn GraphicsEffect(self: QChartView) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: QChartView, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: QChartView, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: QChartView, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: QChartView, windowTitle: []const u8) void {
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
    /// ` self: QChartView `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: QChartView, styleSheet: []const u8) void {
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
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: QChartView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchartview.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: QChartView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchartview.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: QChartView, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn WindowIcon(self: QChartView) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: QChartView, windowIconText: []const u8) void {
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
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: QChartView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchartview.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: QChartView, windowRole: []const u8) void {
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
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: QChartView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchartview.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: QChartView, filePath: []const u8) void {
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
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: QChartView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchartview.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: QChartView, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn WindowOpacity(self: QChartView) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn IsWindowModified(self: QChartView) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QChartView, toolTip: []const u8) void {
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
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QChartView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchartview.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: QChartView, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ToolTipDuration(self: QChartView) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QChartView, statusTip: []const u8) void {
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
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: QChartView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchartview.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QChartView, whatsThis: []const u8) void {
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
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QChartView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchartview.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: QChartView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchartview.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: QChartView, name: []const u8) void {
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
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: QChartView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchartview.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: QChartView, description: []const u8) void {
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
    /// ` self: QChartView `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QChartView, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QChartView) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn UnsetLayoutDirection(self: QChartView) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QChartView, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Locale(self: QChartView) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn UnsetLocale(self: QChartView) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn IsRightToLeft(self: QChartView) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn IsLeftToRight(self: QChartView) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn SetFocus(self: QChartView) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn IsActiveWindow(self: QChartView) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ActivateWindow(self: QChartView) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ClearFocus(self: QChartView) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: QChartView, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: QChartView) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: QChartView, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn HasFocus(self: QChartView) bool {
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
    /// ` self: QChartView `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: QChartView, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn FocusProxy(self: QChartView) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: QChartView) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: QChartView, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn GrabMouse(self: QChartView) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: QChartView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ReleaseMouse(self: QChartView) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn GrabKeyboard(self: QChartView) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ReleaseKeyboard(self: QChartView) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: QChartView, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: QChartView, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: QChartView, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: QChartView, id: i32) void {
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
    /// ` self: QChartView `
    ///
    pub fn UpdatesEnabled(self: QChartView) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: QChartView, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn GraphicsProxyWidget(self: QChartView) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Update(self: QChartView) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Repaint(self: QChartView) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: QChartView, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: QChartView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: QChartView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: QChartView, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: QChartView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: QChartView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: QChartView, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Show(self: QChartView) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Hide(self: QChartView) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ShowMinimized(self: QChartView) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ShowMaximized(self: QChartView) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ShowFullScreen(self: QChartView) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ShowNormal(self: QChartView) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Close(self: QChartView) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Raise(self: QChartView) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Lower(self: QChartView) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: QChartView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: QChartView, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: QChartView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: QChartView, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: QChartView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: QChartView, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: QChartView, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: QChartView, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qchartview.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: QChartView, geometry: []u8) bool {
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
    /// ` self: QChartView `
    ///
    pub fn AdjustSize(self: QChartView) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn IsVisible(self: QChartView) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: QChartView, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn IsHidden(self: QChartView) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn IsMinimized(self: QChartView) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn IsMaximized(self: QChartView) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn IsFullScreen(self: QChartView) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: QChartView) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: QChartView, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: QChartView, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn SizePolicy(self: QChartView) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QChartView, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QChartView, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn VisibleRegion(self: QChartView) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: QChartView, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: QChartView, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ContentsMargins(self: QChartView) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ContentsRect(self: QChartView) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Layout(self: QChartView) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: QChartView, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn UpdateGeometry(self: QChartView) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: QChartView, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: QChartView, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: QChartView, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: QChartView, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn FocusWidget(self: QChartView) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn NextInFocusChain(self: QChartView) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn PreviousInFocusChain(self: QChartView) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn AcceptDrops(self: QChartView) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: QChartView, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: QChartView, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QChartView, actions: []QAction) void {
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
    /// ` self: QChartView `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QChartView, before: anytype, actions: []QAction) void {
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
    /// ` self: QChartView `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: QChartView, before: anytype, action: anytype) void {
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
    /// ` self: QChartView `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: QChartView, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: QChartView, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qchartview.Actions: Memory allocation failed");
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
    /// ` self: QChartView `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: QChartView, text: []const u8) QAction {
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
    /// ` self: QChartView `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: QChartView, icon: anytype, text: []const u8) QAction {
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
    /// ` self: QChartView `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: QChartView, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QChartView `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: QChartView, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QChartView `
    ///
    pub fn ParentWidget(self: QChartView) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: QChartView, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: QChartView) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: QChartView, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: QChartView, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: QChartView) i32 {
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
    /// ` self: QChartView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: QChartView, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: QChartView, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: QChartView, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: QChartView, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: QChartView, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn EnsurePolished(self: QChartView) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: QChartView, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn AutoFillBackground(self: QChartView) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: QChartView, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn BackingStore(self: QChartView) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn WindowHandle(self: QChartView) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Screen(self: QChartView) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: QChartView, screen: anytype) void {
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
    /// ` self: QChartView `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: QChartView, title: []const u8) void {
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
    /// ` self: QChartView `
    ///
    /// ` callback: *const fn (self: QChartView, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: QChartView, callback: *const fn (QChartView, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: QChartView, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView `
    ///
    /// ` callback: *const fn (self: QChartView, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: QChartView, callback: *const fn (QChartView, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: QChartView, iconText: []const u8) void {
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
    /// ` self: QChartView `
    ///
    /// ` callback: *const fn (self: QChartView, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: QChartView, callback: *const fn (QChartView, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: QChartView, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView `
    ///
    /// ` callback: *const fn (self: QChartView, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: QChartView, callback: *const fn (QChartView, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: QChartView) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: QChartView, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: QChartView, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QChartView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: QChartView, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QChartView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: QChartView, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QChartView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: QChartView, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QChartView `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: QChartView, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QChartView, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: QChartView, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: QChartView, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: QChartView, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: QChartView, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: QChartView, param1: i32, on: bool) void {
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
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QChartView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchartview.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QChartView, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn IsWidgetType(self: QChartView) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn IsWindowType(self: QChartView) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn IsQuickItemType(self: QChartView) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn SignalsBlocked(self: QChartView) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QChartView, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Thread(self: QChartView) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QChartView, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QChartView, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QChartView, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QChartView, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QChartView, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QChartView, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qchartview.Children: Memory allocation failed");
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
    /// ` self: QChartView `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QChartView, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QChartView, obj: anytype) void {
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
    /// ` self: QChartView `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QChartView, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QChartView `
    ///
    pub fn Disconnect3(self: QChartView) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QChartView, receiver: anytype) bool {
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
    /// ` self: QChartView `
    ///
    pub fn DumpObjectTree(self: QChartView) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn DumpObjectInfo(self: QChartView) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QChartView, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QChartView `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QChartView, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QChartView, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qchartview.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qchartview.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QChartView `
    ///
    pub fn BindingStorage(self: QChartView) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn BindingStorage2(self: QChartView) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Destroyed(self: QChartView) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView `
    ///
    /// ` callback: *const fn (self: QChartView) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QChartView, callback: *const fn (QChartView) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Parent(self: QChartView) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QChartView, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn DeleteLater(self: QChartView) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QChartView, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QChartView, time: i64, timerType: i32) i32 {
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
    /// ` self: QChartView `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QChartView, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QChartView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QChartView, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QChartView, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QChartView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QChartView, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QChartView `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QChartView, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QChartView `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QChartView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView `
    ///
    /// ` callback: *const fn (self: QChartView, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QChartView, callback: *const fn (QChartView, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn PaintingActive(self: QChartView) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn WidthMM(self: QChartView) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn HeightMM(self: QChartView) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn LogicalDpiX(self: QChartView) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn LogicalDpiY(self: QChartView) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn PhysicalDpiX(self: QChartView) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn PhysicalDpiY(self: QChartView) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn DevicePixelRatio(self: QChartView) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn DevicePixelRatioF(self: QChartView) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ColorCount(self: QChartView) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Depth(self: QChartView) i32 {
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

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn SizeHint(self: QChartView) QSize {
        return .{ .ptr = qtc.QChartView_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn SuperSizeHint(self: QChartView) QSize {
        return .{ .ptr = qtc.QChartView_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QChartView, callback: *const fn () callconv(.c) QSize) void {
        qtc.QChartView_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QChartView, query: i32) QVariant {
        return .{ .ptr = qtc.QChartView_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QChartView, query: i32) QVariant {
        return .{ .ptr = qtc.QChartView_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: QChartView, callback: *const fn (QChartView, i32) callconv(.c) QVariant) void {
        qtc.QChartView_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetupViewport(self: QChartView, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QChartView_SetupViewport(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetupViewport` instead
    ///
    pub const QBaseSetupViewport = SuperSetupViewport;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperSetupViewport(self: QChartView, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QChartView_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnSetupViewport(self: QChartView, callback: *const fn (QChartView, QWidget) callconv(.c) void) void {
        qtc.QChartView_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QChartView, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QChartView_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QChartView, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QChartView_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QChartView, callback: *const fn (QChartView, QEvent) callconv(.c) bool) void {
        qtc.QChartView_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QEvent `
    ///
    pub fn ViewportEvent(self: QChartView, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QChartView_ViewportEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperViewportEvent` instead
    ///
    pub const QBaseViewportEvent = SuperViewportEvent;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperViewportEvent(self: QChartView, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QChartView_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnViewportEvent(self: QChartView, callback: *const fn (QChartView, QEvent) callconv(.c) bool) void {
        qtc.QChartView_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.QChartView_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.QChartView_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: QChartView, callback: *const fn (QChartView, QContextMenuEvent) callconv(.c) void) void {
        qtc.QChartView_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QChartView_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QChartView_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: QChartView, callback: *const fn (QChartView, QDragEnterEvent) callconv(.c) void) void {
        qtc.QChartView_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QChartView_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QChartView_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: QChartView, callback: *const fn (QChartView, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QChartView_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QChartView_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QChartView_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: QChartView, callback: *const fn (QChartView, QDragMoveEvent) callconv(.c) void) void {
        qtc.QChartView_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QChartView_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QChartView_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: QChartView, callback: *const fn (QChartView, QDropEvent) callconv(.c) void) void {
        qtc.QChartView_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QChartView_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QChartView_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QChartView, callback: *const fn (QChartView, QFocusEvent) callconv(.c) void) void {
        qtc.QChartView_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: QChartView, next: bool) bool {
        return qtc.QChartView_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: QChartView, next: bool) bool {
        return qtc.QChartView_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: QChartView, callback: *const fn (QChartView, bool) callconv(.c) bool) void {
        qtc.QChartView_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QChartView_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QChartView_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QChartView, callback: *const fn (QChartView, QFocusEvent) callconv(.c) void) void {
        qtc.QChartView_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QChartView_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QChartView_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QChartView, callback: *const fn (QChartView, QKeyEvent) callconv(.c) void) void {
        qtc.QChartView_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QChartView_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QChartView_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QChartView, callback: *const fn (QChartView, QKeyEvent) callconv(.c) void) void {
        qtc.QChartView_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QChartView_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QChartView_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QChartView, callback: *const fn (QChartView, QMouseEvent) callconv(.c) void) void {
        qtc.QChartView_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QChartView_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QChartView_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QChartView, callback: *const fn (QChartView, QWheelEvent) callconv(.c) void) void {
        qtc.QChartView_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QChartView_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QChartView_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: QChartView, callback: *const fn (QChartView, QPaintEvent) callconv(.c) void) void {
        qtc.QChartView_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn ScrollContentsBy(self: QChartView, dx: i32, dy: i32) void {
        qtc.QChartView_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `SuperScrollContentsBy` instead
    ///
    pub const QBaseScrollContentsBy = SuperScrollContentsBy;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollContentsBy(self: QChartView, dx: i32, dy: i32) void {
        qtc.QChartView_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn OnScrollContentsBy(self: QChartView, callback: *const fn (QChartView, i32, i32) callconv(.c) void) void {
        qtc.QChartView_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QChartView_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QChartView_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: QChartView, callback: *const fn (QChartView, QShowEvent) callconv(.c) void) void {
        qtc.QChartView_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QChartView_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QChartView_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: QChartView, callback: *const fn (QChartView, QInputMethodEvent) callconv(.c) void) void {
        qtc.QChartView_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn DrawBackground(self: QChartView, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QChartView_DrawBackground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `SuperDrawBackground` instead
    ///
    pub const QBaseDrawBackground = SuperDrawBackground;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SuperDrawBackground(self: QChartView, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QChartView_SuperDrawBackground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, painter: QPainter, rect: QRectF) callconv(.c) void `
    ///
    pub fn OnDrawBackground(self: QChartView, callback: *const fn (QChartView, QPainter, QRectF) callconv(.c) void) void {
        qtc.QChartView_OnDrawBackground(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn DrawForeground(self: QChartView, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QChartView_DrawForeground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `SuperDrawForeground` instead
    ///
    pub const QBaseDrawForeground = SuperDrawForeground;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SuperDrawForeground(self: QChartView, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QChartView_SuperDrawForeground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, painter: QPainter, rect: QRectF) callconv(.c) void `
    ///
    pub fn OnDrawForeground(self: QChartView, callback: *const fn (QChartView, QPainter, QRectF) callconv(.c) void) void {
        qtc.QChartView_OnDrawForeground(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawItems)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` numItems: i32 `
    ///
    /// ` items: *QGraphicsItem.ptr `
    ///
    /// ` options: QStyleOptionGraphicsItem `
    ///
    pub fn DrawItems(self: QChartView, painter: anytype, numItems: i32, items: *?*anyopaque, options: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(options)._is_QStyleOptionGraphicsItem;
        qtc.QChartView_DrawItems(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(numItems), @ptrCast(items), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `SuperDrawItems` instead
    ///
    pub const QBaseDrawItems = SuperDrawItems;

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawItems)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` numItems: i32 `
    ///
    /// ` items: *QGraphicsItem.ptr `
    ///
    /// ` options: QStyleOptionGraphicsItem `
    ///
    pub fn SuperDrawItems(self: QChartView, painter: anytype, numItems: i32, items: *?*anyopaque, options: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(options)._is_QStyleOptionGraphicsItem;
        qtc.QChartView_SuperDrawItems(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(numItems), @ptrCast(items), @ptrCast(options.ptr));
    }

    /// Inherited from QGraphicsView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawItems)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, painter: QPainter, numItems: i32, items: *QGraphicsItem.ptr, options: QStyleOptionGraphicsItem) callconv(.c) void `
    ///
    pub fn OnDrawItems(self: QChartView, callback: *const fn (QChartView, QPainter, i32, *?*anyopaque, QStyleOptionGraphicsItem) callconv(.c) void) void {
        qtc.QChartView_OnDrawItems(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn MinimumSizeHint(self: QChartView) QSize {
        return .{ .ptr = qtc.QChartView_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QChartView `
    ///
    pub fn SuperMinimumSizeHint(self: QChartView) QSize {
        return .{ .ptr = qtc.QChartView_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: QChartView, callback: *const fn () callconv(.c) QSize) void {
        qtc.QChartView_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn EventFilter(self: QChartView, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QChartView_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
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
    /// ` self: QChartView `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn SuperEventFilter(self: QChartView, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QChartView_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QChartView, callback: *const fn (QChartView, QObject, QEvent) callconv(.c) bool) void {
        qtc.QChartView_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ViewportSizeHint(self: QChartView) QSize {
        return .{ .ptr = qtc.QChartView_ViewportSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QChartView `
    ///
    pub fn SuperViewportSizeHint(self: QChartView) QSize {
        return .{ .ptr = qtc.QChartView_SuperViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnViewportSizeHint(self: QChartView, callback: *const fn () callconv(.c) QSize) void {
        qtc.QChartView_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: QChartView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QChartView_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QChartView `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: QChartView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QChartView_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: QChartView, callback: *const fn (QChartView, QEvent) callconv(.c) void) void {
        qtc.QChartView_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn InitStyleOption(self: QChartView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QChartView_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: QChartView `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn SuperInitStyleOption(self: QChartView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QChartView_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: QChartView, callback: *const fn (QChartView, QStyleOptionFrame) callconv(.c) void) void {
        qtc.QChartView_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn DevType(self: QChartView) i32 {
        return qtc.QChartView_DevType(@ptrCast(self.ptr));
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
    /// ` self: QChartView `
    ///
    pub fn SuperDevType(self: QChartView) i32 {
        return qtc.QChartView_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QChartView, callback: *const fn () callconv(.c) i32) void {
        qtc.QChartView_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QChartView, visible: bool) void {
        qtc.QChartView_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QChartView `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: QChartView, visible: bool) void {
        qtc.QChartView_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: QChartView, callback: *const fn (QChartView, bool) callconv(.c) void) void {
        qtc.QChartView_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QChartView, param1: i32) i32 {
        return qtc.QChartView_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QChartView `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QChartView, param1: i32) i32 {
        return qtc.QChartView_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QChartView, callback: *const fn (QChartView, i32) callconv(.c) i32) void {
        qtc.QChartView_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn HasHeightForWidth(self: QChartView) bool {
        return qtc.QChartView_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QChartView `
    ///
    pub fn SuperHasHeightForWidth(self: QChartView) bool {
        return qtc.QChartView_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QChartView, callback: *const fn () callconv(.c) bool) void {
        qtc.QChartView_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn PaintEngine(self: QChartView) QPaintEngine {
        return .{ .ptr = qtc.QChartView_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QChartView `
    ///
    pub fn SuperPaintEngine(self: QChartView) QPaintEngine {
        return .{ .ptr = qtc.QChartView_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QChartView, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QChartView_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QChartView_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QChartView `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QChartView_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: QChartView, callback: *const fn (QChartView, QEnterEvent) callconv(.c) void) void {
        qtc.QChartView_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QChartView_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QChartView `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QChartView_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: QChartView, callback: *const fn (QChartView, QEvent) callconv(.c) void) void {
        qtc.QChartView_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QChartView_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QChartView `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QChartView_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: QChartView, callback: *const fn (QChartView, QMoveEvent) callconv(.c) void) void {
        qtc.QChartView_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QChartView_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QChartView `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QChartView_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: QChartView, callback: *const fn (QChartView, QCloseEvent) callconv(.c) void) void {
        qtc.QChartView_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QChartView_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QChartView `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QChartView_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: QChartView, callback: *const fn (QChartView, QTabletEvent) callconv(.c) void) void {
        qtc.QChartView_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QChartView_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QChartView `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QChartView_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: QChartView, callback: *const fn (QChartView, QActionEvent) callconv(.c) void) void {
        qtc.QChartView_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QChartView_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QChartView `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QChartView_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: QChartView, callback: *const fn (QChartView, QHideEvent) callconv(.c) void) void {
        qtc.QChartView_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: QChartView, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QChartView_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QChartView `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: QChartView, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QChartView_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: QChartView, callback: *const fn (QChartView, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QChartView_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QChartView, param1: i32) i32 {
        return qtc.QChartView_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QChartView `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QChartView, param1: i32) i32 {
        return qtc.QChartView_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QChartView, callback: *const fn (QChartView, i32) callconv(.c) i32) void {
        qtc.QChartView_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QChartView, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QChartView_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QChartView `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QChartView, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QChartView_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QChartView, callback: *const fn (QChartView, QPainter) callconv(.c) void) void {
        qtc.QChartView_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QChartView, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QChartView_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QChartView `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QChartView, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QChartView_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QChartView, callback: *const fn (QChartView, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QChartView_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn SharedPainter(self: QChartView) QPainter {
        return .{ .ptr = qtc.QChartView_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QChartView `
    ///
    pub fn SuperSharedPainter(self: QChartView) QPainter {
        return .{ .ptr = qtc.QChartView_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QChartView, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QChartView_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QChartView_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QChartView `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QChartView_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QChartView, callback: *const fn (QChartView, QTimerEvent) callconv(.c) void) void {
        qtc.QChartView_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QChartView_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QChartView `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QChartView_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QChartView, callback: *const fn (QChartView, QChildEvent) callconv(.c) void) void {
        qtc.QChartView_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QChartView_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QChartView `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QChartView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QChartView_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QChartView, callback: *const fn (QChartView, QEvent) callconv(.c) void) void {
        qtc.QChartView_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QChartView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QChartView_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QChartView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QChartView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QChartView_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QChartView, callback: *const fn (QChartView, QMetaMethod) callconv(.c) void) void {
        qtc.QChartView_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QChartView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QChartView_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QChartView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QChartView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QChartView_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QChartView, callback: *const fn (QChartView, QMetaMethod) callconv(.c) void) void {
        qtc.QChartView_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetViewportMargins(self: QChartView, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QChartView_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: QChartView `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SuperSetViewportMargins(self: QChartView, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QChartView_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn OnSetViewportMargins(self: QChartView, callback: *const fn (QChartView, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QChartView_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn ViewportMargins(self: QChartView) QMargins {
        return .{ .ptr = qtc.QChartView_ViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: QChartView `
    ///
    pub fn SuperViewportMargins(self: QChartView) QMargins {
        return .{ .ptr = qtc.QChartView_SuperViewportMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn () callconv(.c) QMargins `
    ///
    pub fn OnViewportMargins(self: QChartView, callback: *const fn () callconv(.c) QMargins) void {
        qtc.QChartView_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` param1: QPainter `
    ///
    pub fn DrawFrame(self: QChartView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QChartView_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QChartView `
    ///
    /// ` param1: QPainter `
    ///
    pub fn SuperDrawFrame(self: QChartView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QChartView_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, param1: QPainter) callconv(.c) void `
    ///
    pub fn OnDrawFrame(self: QChartView, callback: *const fn (QChartView, QPainter) callconv(.c) void) void {
        qtc.QChartView_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn UpdateMicroFocus(self: QChartView) void {
        qtc.QChartView_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QChartView `
    ///
    pub fn SuperUpdateMicroFocus(self: QChartView) void {
        qtc.QChartView_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: QChartView, callback: *const fn () callconv(.c) void) void {
        qtc.QChartView_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Create(self: QChartView) void {
        qtc.QChartView_Create(@ptrCast(self.ptr));
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
    /// ` self: QChartView `
    ///
    pub fn SuperCreate(self: QChartView) void {
        qtc.QChartView_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: QChartView, callback: *const fn () callconv(.c) void) void {
        qtc.QChartView_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Destroy(self: QChartView) void {
        qtc.QChartView_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QChartView `
    ///
    pub fn SuperDestroy(self: QChartView) void {
        qtc.QChartView_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: QChartView, callback: *const fn () callconv(.c) void) void {
        qtc.QChartView_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn FocusNextChild(self: QChartView) bool {
        return qtc.QChartView_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QChartView `
    ///
    pub fn SuperFocusNextChild(self: QChartView) bool {
        return qtc.QChartView_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: QChartView, callback: *const fn () callconv(.c) bool) void {
        qtc.QChartView_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn FocusPreviousChild(self: QChartView) bool {
        return qtc.QChartView_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QChartView `
    ///
    pub fn SuperFocusPreviousChild(self: QChartView) bool {
        return qtc.QChartView_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: QChartView, callback: *const fn () callconv(.c) bool) void {
        qtc.QChartView_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn Sender(self: QChartView) QObject {
        return .{ .ptr = qtc.QChartView_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QChartView `
    ///
    pub fn SuperSender(self: QChartView) QObject {
        return .{ .ptr = qtc.QChartView_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QChartView, callback: *const fn () callconv(.c) QObject) void {
        qtc.QChartView_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    pub fn SenderSignalIndex(self: QChartView) i32 {
        return qtc.QChartView_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QChartView `
    ///
    pub fn SuperSenderSignalIndex(self: QChartView) i32 {
        return qtc.QChartView_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QChartView, callback: *const fn () callconv(.c) i32) void {
        qtc.QChartView_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QChartView, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QChartView_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QChartView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QChartView, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QChartView_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QChartView, callback: *const fn (QChartView, [*:0]const u8) callconv(.c) i32) void {
        qtc.QChartView_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QChartView, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QChartView_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QChartView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QChartView, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QChartView_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QChartView, callback: *const fn (QChartView, QMetaMethod) callconv(.c) bool) void {
        qtc.QChartView_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChartView `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QChartView, metricA: i32, metricB: i32) f64 {
        return qtc.QChartView_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QChartView `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QChartView, metricA: i32, metricB: i32) f64 {
        return qtc.QChartView_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView`
    ///
    /// ` callback: *const fn (self: QChartView, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QChartView, callback: *const fn (QChartView, i32, i32) callconv(.c) f64) void {
        qtc.QChartView_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QChartView `
    ///
    /// ` callback: *const fn (self: QChartView, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QChartView, callback: *const fn (QChartView, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#dtor.QChartView)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QChartView `
    ///
    pub fn Delete(self: QChartView) void {
        qtc.QChartView_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#public-types)
pub const enums = struct {
    pub const RubberBand = enum(i32) {
        pub const NoRubberBand: i32 = 0;
        pub const VerticalRubberBand: i32 = 1;
        pub const HorizontalRubberBand: i32 = 2;
        pub const RectangleRubberBand: i32 = 3;
        pub const ClickThroughRubberBand: i32 = 128;
    };
};
