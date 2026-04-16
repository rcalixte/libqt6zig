const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractAxis = @import("libqt6").QAbstractAxis;
const QAbstractSeries = @import("libqt6").QAbstractSeries;
const QAction = @import("libqt6").QAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBrush = @import("libqt6").QBrush;
const QChildEvent = @import("libqt6").QChildEvent;
const QCloseEvent = @import("libqt6").QCloseEvent;
const QCursor = @import("libqt6").QCursor;
const QEasingCurve = @import("libqt6").QEasingCurve;
const QEvent = @import("libqt6").QEvent;
const QFocusEvent = @import("libqt6").QFocusEvent;
const QFont = @import("libqt6").QFont;
const QGraphicsEffect = @import("libqt6").QGraphicsEffect;
const QGraphicsItem = @import("libqt6").QGraphicsItem;
const QGraphicsItemGroup = @import("libqt6").QGraphicsItemGroup;
const QGraphicsLayout = @import("libqt6").QGraphicsLayout;
const QGraphicsLayoutItem = @import("libqt6").QGraphicsLayoutItem;
const QGraphicsObject = @import("libqt6").QGraphicsObject;
const QGraphicsScene = @import("libqt6").QGraphicsScene;
const QGraphicsSceneContextMenuEvent = @import("libqt6").QGraphicsSceneContextMenuEvent;
const QGraphicsSceneDragDropEvent = @import("libqt6").QGraphicsSceneDragDropEvent;
const QGraphicsSceneHoverEvent = @import("libqt6").QGraphicsSceneHoverEvent;
const QGraphicsSceneMouseEvent = @import("libqt6").QGraphicsSceneMouseEvent;
const QGraphicsSceneMoveEvent = @import("libqt6").QGraphicsSceneMoveEvent;
const QGraphicsSceneResizeEvent = @import("libqt6").QGraphicsSceneResizeEvent;
const QGraphicsSceneWheelEvent = @import("libqt6").QGraphicsSceneWheelEvent;
const QGraphicsTransform = @import("libqt6").QGraphicsTransform;
const QGraphicsWidget = @import("libqt6").QGraphicsWidget;
const QHideEvent = @import("libqt6").QHideEvent;
const QInputMethodEvent = @import("libqt6").QInputMethodEvent;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QKeySequence = @import("libqt6").QKeySequence;
const QLegend = @import("libqt6").QLegend;
const QLocale = @import("libqt6").QLocale;
const QMargins = @import("libqt6").QMargins;
const QMarginsF = @import("libqt6").QMarginsF;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPainter = @import("libqt6").QPainter;
const QPainterPath = @import("libqt6").QPainterPath;
const QPalette = @import("libqt6").QPalette;
const QPen = @import("libqt6").QPen;
const QPointF = @import("libqt6").QPointF;
const QRectF = @import("libqt6").QRectF;
const QRegion = @import("libqt6").QRegion;
const QShowEvent = @import("libqt6").QShowEvent;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QStyle = @import("libqt6").QStyle;
const QStyleOption = @import("libqt6").QStyleOption;
const QStyleOptionGraphicsItem = @import("libqt6").QStyleOptionGraphicsItem;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qchart_enums = enums;
const qgraphicsitem_enums = @import("../libqgraphicsitem.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html)
pub const QChart = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QChart,

    pub const _is_QChart = {};
    pub const _is_QGraphicsWidget = {};
    pub const _is_QGraphicsObject = {};
    pub const _is_QObject = {};
    pub const _is_QGraphicsItem = {};
    pub const _is_QGraphicsLayoutItem = {};

    /// New constructs a new QChart object.
    ///
    pub fn New() QChart {
        return .{ .ptr = qtc.QChart_new() };
    }

    /// New2 constructs a new QChart object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QGraphicsItem `
    ///
    pub fn New2(parent: anytype) QChart {
        comptime _ = @TypeOf(parent)._is_QGraphicsItem;
        return .{ .ptr = qtc.QChart_new2(@ptrCast(parent.ptr)) };
    }

    /// New3 constructs a new QChart object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QGraphicsItem `
    ///
    /// ` wFlags: flag of qnamespace_enums.WindowType `
    ///
    pub fn New3(parent: anytype, wFlags: i32) QChart {
        comptime _ = @TypeOf(parent)._is_QGraphicsItem;
        return .{ .ptr = qtc.QChart_new3(@ptrCast(parent.ptr), @bitCast(wFlags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn MetaObject(self: QChart) QMetaObject {
        return .{ .ptr = qtc.QChart_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QChart, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QChart_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QChart `
    ///
    pub fn SuperMetaObject(self: QChart) QMetaObject {
        return .{ .ptr = qtc.QChart_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QChart, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QChart_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QChart, callback: *const fn (QChart, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QChart_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QChart, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QChart_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QChart, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QChart_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QChart, callback: *const fn (QChart, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QChart_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QChart, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QChart_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchart.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#addSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn AddSeries(self: QChart, series: anytype) void {
        comptime _ = @TypeOf(series)._is_QAbstractSeries;
        qtc.QChart_AddSeries(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#removeSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn RemoveSeries(self: QChart, series: anytype) void {
        comptime _ = @TypeOf(series)._is_QAbstractSeries;
        qtc.QChart_RemoveSeries(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#removeAllSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn RemoveAllSeries(self: QChart) void {
        qtc.QChart_RemoveAllSeries(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Series(self: QChart, allocator: std.mem.Allocator) []QAbstractSeries {
        const _arr: qtc.libqt_list = qtc.QChart_Series(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractSeries, _arr.len) catch @panic("qchart.Series: Memory allocation failed");
        const _data: [*]QtC.QAbstractSeries = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAxisX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn SetAxisX(self: QChart, axis: anytype) void {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        qtc.QChart_SetAxisX(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAxisY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn SetAxisY(self: QChart, axis: anytype) void {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        qtc.QChart_SetAxisY(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#axisX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn AxisX(self: QChart) QAbstractAxis {
        return .{ .ptr = qtc.QChart_AxisX(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#axisY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn AxisY(self: QChart) QAbstractAxis {
        return .{ .ptr = qtc.QChart_AxisY(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#addAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` axis: QAbstractAxis `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddAxis(self: QChart, axis: anytype, alignment: i32) void {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        qtc.QChart_AddAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#removeAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn RemoveAxis(self: QChart, axis: anytype) void {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        qtc.QChart_RemoveAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#axes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Axes(self: QChart, allocator: std.mem.Allocator) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QChart_Axes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("qchart.Axes: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#createDefaultAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn CreateDefaultAxes(self: QChart) void {
        qtc.QChart_CreateDefaultAxes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` theme: qchart_enums.ChartTheme `
    ///
    pub fn SetTheme(self: QChart, theme: i32) void {
        qtc.QChart_SetTheme(@ptrCast(self.ptr), @bitCast(theme));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#theme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ## Returns:
    ///
    /// ` qchart_enums.ChartTheme `
    ///
    pub fn Theme(self: QChart) i32 {
        return qtc.QChart_Theme(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: QChart, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QChart_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: QChart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QChart_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchart.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setTitleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` font: QFont `
    ///
    pub fn SetTitleFont(self: QChart, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QChart_SetTitleFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#titleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn TitleFont(self: QChart) QFont {
        return .{ .ptr = qtc.QChart_TitleFont(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setTitleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetTitleBrush(self: QChart, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QChart_SetTitleBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#titleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn TitleBrush(self: QChart) QBrush {
        return .{ .ptr = qtc.QChart_TitleBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setBackgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBackgroundBrush(self: QChart, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QChart_SetBackgroundBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#backgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn BackgroundBrush(self: QChart) QBrush {
        return .{ .ptr = qtc.QChart_BackgroundBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setBackgroundPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetBackgroundPen(self: QChart, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QChart_SetBackgroundPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#backgroundPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn BackgroundPen(self: QChart) QPen {
        return .{ .ptr = qtc.QChart_BackgroundPen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SetBackgroundVisible(self: QChart) void {
        qtc.QChart_SetBackgroundVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#isBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsBackgroundVisible(self: QChart) bool {
        return qtc.QChart_IsBackgroundVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setDropShadowEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SetDropShadowEnabled(self: QChart) void {
        qtc.QChart_SetDropShadowEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#isDropShadowEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsDropShadowEnabled(self: QChart) bool {
        return qtc.QChart_IsDropShadowEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setBackgroundRoundness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` diameter: f64 `
    ///
    pub fn SetBackgroundRoundness(self: QChart, diameter: f64) void {
        qtc.QChart_SetBackgroundRoundness(@ptrCast(self.ptr), @bitCast(diameter));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#backgroundRoundness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn BackgroundRoundness(self: QChart) f64 {
        return qtc.QChart_BackgroundRoundness(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAnimationOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` options: flag of qchart_enums.AnimationOption `
    ///
    pub fn SetAnimationOptions(self: QChart, options: i32) void {
        qtc.QChart_SetAnimationOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#animationOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ## Returns:
    ///
    /// ` flag of qchart_enums.AnimationOption `
    ///
    pub fn AnimationOptions(self: QChart) i32 {
        return qtc.QChart_AnimationOptions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAnimationDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SetAnimationDuration(self: QChart, msecs: i32) void {
        qtc.QChart_SetAnimationDuration(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#animationDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn AnimationDuration(self: QChart) i32 {
        return qtc.QChart_AnimationDuration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAnimationEasingCurve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` curve: QEasingCurve `
    ///
    pub fn SetAnimationEasingCurve(self: QChart, curve: anytype) void {
        comptime _ = @TypeOf(curve)._is_QEasingCurve;
        qtc.QChart_SetAnimationEasingCurve(@ptrCast(self.ptr), @ptrCast(curve.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#animationEasingCurve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn AnimationEasingCurve(self: QChart) QEasingCurve {
        return .{ .ptr = qtc.QChart_AnimationEasingCurve(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ZoomIn(self: QChart) void {
        qtc.QChart_ZoomIn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ZoomOut(self: QChart) void {
        qtc.QChart_ZoomOut(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn ZoomIn2(self: QChart, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QChart_ZoomIn2(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#zoom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` factor: f64 `
    ///
    pub fn Zoom(self: QChart, factor: f64) void {
        qtc.QChart_Zoom(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#zoomReset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ZoomReset(self: QChart) void {
        qtc.QChart_ZoomReset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#isZoomed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsZoomed(self: QChart) bool {
        return qtc.QChart_IsZoomed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Scroll(self: QChart, dx: f64, dy: f64) void {
        qtc.QChart_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#legend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Legend(self: QChart) QLegend {
        return .{ .ptr = qtc.QChart_Legend(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetMargins(self: QChart, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QChart_SetMargins(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#margins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Margins(self: QChart) QMargins {
        return .{ .ptr = qtc.QChart_Margins(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#plotArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn PlotArea(self: QChart) QRectF {
        return .{ .ptr = qtc.QChart_PlotArea(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setPlotArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SetPlotArea(self: QChart, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QChart_SetPlotArea(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setPlotAreaBackgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetPlotAreaBackgroundBrush(self: QChart, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QChart_SetPlotAreaBackgroundBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#plotAreaBackgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn PlotAreaBackgroundBrush(self: QChart) QBrush {
        return .{ .ptr = qtc.QChart_PlotAreaBackgroundBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setPlotAreaBackgroundPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetPlotAreaBackgroundPen(self: QChart, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QChart_SetPlotAreaBackgroundPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#plotAreaBackgroundPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn PlotAreaBackgroundPen(self: QChart) QPen {
        return .{ .ptr = qtc.QChart_PlotAreaBackgroundPen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setPlotAreaBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SetPlotAreaBackgroundVisible(self: QChart) void {
        qtc.QChart_SetPlotAreaBackgroundVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#isPlotAreaBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsPlotAreaBackgroundVisible(self: QChart) bool {
        return qtc.QChart_IsPlotAreaBackgroundVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setLocalizeNumbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` localize: bool `
    ///
    pub fn SetLocalizeNumbers(self: QChart, localize: bool) void {
        qtc.QChart_SetLocalizeNumbers(@ptrCast(self.ptr), localize);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#localizeNumbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn LocalizeNumbers(self: QChart) bool {
        return qtc.QChart_LocalizeNumbers(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QChart, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QChart_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Locale(self: QChart) QLocale {
        return .{ .ptr = qtc.QChart_Locale(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#mapToValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` position: QPointF `
    ///
    pub fn MapToValue(self: QChart, position: anytype) QPointF {
        comptime _ = @TypeOf(position)._is_QPointF;
        return .{ .ptr = qtc.QChart_MapToValue(@ptrCast(self.ptr), @ptrCast(position.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#mapToPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` value: QPointF `
    ///
    pub fn MapToPosition(self: QChart, value: anytype) QPointF {
        comptime _ = @TypeOf(value)._is_QPointF;
        return .{ .ptr = qtc.QChart_MapToPosition(@ptrCast(self.ptr), @ptrCast(value.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#chartType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ## Returns:
    ///
    /// ` qchart_enums.ChartType `
    ///
    pub fn ChartType(self: QChart) i32 {
        return qtc.QChart_ChartType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#plotAreaChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` plotArea: QRectF `
    ///
    pub fn PlotAreaChanged(self: QChart, plotArea: anytype) void {
        comptime _ = @TypeOf(plotArea)._is_QRectF;
        qtc.QChart_PlotAreaChanged(@ptrCast(self.ptr), @ptrCast(plotArea.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#plotAreaChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart, plotArea: QRectF) callconv(.c) void `
    ///
    pub fn OnPlotAreaChanged(self: QChart, callback: *const fn (QChart, QRectF) callconv(.c) void) void {
        qtc.QChart_Connect_PlotAreaChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchart.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchart.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAxisX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` axis: QAbstractAxis `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn SetAxisX2(self: QChart, axis: anytype, series: anytype) void {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        comptime _ = @TypeOf(series)._is_QAbstractSeries;
        qtc.QChart_SetAxisX2(@ptrCast(self.ptr), @ptrCast(axis.ptr), @ptrCast(series.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAxisY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` axis: QAbstractAxis `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn SetAxisY2(self: QChart, axis: anytype, series: anytype) void {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        comptime _ = @TypeOf(series)._is_QAbstractSeries;
        qtc.QChart_SetAxisY2(@ptrCast(self.ptr), @ptrCast(axis.ptr), @ptrCast(series.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#axisX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn AxisX1(self: QChart, series: anytype) QAbstractAxis {
        comptime _ = @TypeOf(series)._is_QAbstractSeries;
        return .{ .ptr = qtc.QChart_AxisX1(@ptrCast(self.ptr), @ptrCast(series.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#axisY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn AxisY1(self: QChart, series: anytype) QAbstractAxis {
        comptime _ = @TypeOf(series)._is_QAbstractSeries;
        return .{ .ptr = qtc.QChart_AxisY1(@ptrCast(self.ptr), @ptrCast(series.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#axes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` orientation: flag of qnamespace_enums.Orientation `
    ///
    pub fn Axes1(self: QChart, allocator: std.mem.Allocator, orientation: i32) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QChart_Axes1(@ptrCast(self.ptr), @bitCast(orientation));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("qchart.Axes1: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#axes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` orientation: flag of qnamespace_enums.Orientation `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn Axes2(self: QChart, allocator: std.mem.Allocator, orientation: i32, series: anytype) []QAbstractAxis {
        comptime _ = @TypeOf(series)._is_QAbstractSeries;
        const _arr: qtc.libqt_list = qtc.QChart_Axes2(@ptrCast(self.ptr), @bitCast(orientation), @ptrCast(series.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("qchart.Axes2: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` visible: bool `
    ///
    pub fn SetBackgroundVisible1(self: QChart, visible: bool) void {
        qtc.QChart_SetBackgroundVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setDropShadowEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetDropShadowEnabled1(self: QChart, enabled: bool) void {
        qtc.QChart_SetDropShadowEnabled1(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setPlotAreaBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` visible: bool `
    ///
    pub fn SetPlotAreaBackgroundVisible1(self: QChart, visible: bool) void {
        qtc.QChart_SetPlotAreaBackgroundVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#mapToValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` position: QPointF `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn MapToValue2(self: QChart, position: anytype, series: anytype) QPointF {
        comptime _ = @TypeOf(position)._is_QPointF;
        comptime _ = @TypeOf(series)._is_QAbstractSeries;
        return .{ .ptr = qtc.QChart_MapToValue2(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(series.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#mapToPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` value: QPointF `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn MapToPosition2(self: QChart, value: anytype, series: anytype) QPointF {
        comptime _ = @TypeOf(value)._is_QPointF;
        comptime _ = @TypeOf(series)._is_QAbstractSeries;
        return .{ .ptr = qtc.QChart_MapToPosition2(@ptrCast(self.ptr), @ptrCast(value.ptr), @ptrCast(series.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Layout(self: QChart) QGraphicsLayout {
        return .{ .ptr = qtc.QGraphicsWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` layout: QGraphicsLayout `
    ///
    pub fn SetLayout(self: QChart, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QGraphicsLayout;
        qtc.QGraphicsWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn AdjustSize(self: QChart) void {
        qtc.QGraphicsWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QChart) i32 {
        return qtc.QGraphicsWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QChart, direction: i32) void {
        qtc.QGraphicsWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn UnsetLayoutDirection(self: QChart) void {
        qtc.QGraphicsWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Style(self: QChart) QStyle {
        return .{ .ptr = qtc.QGraphicsWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QChart, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QGraphicsWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Font(self: QChart) QFont {
        return .{ .ptr = qtc.QGraphicsWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QChart, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QGraphicsWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Palette(self: QChart) QPalette {
        return .{ .ptr = qtc.QGraphicsWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QChart, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QGraphicsWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn AutoFillBackground(self: QChart) bool {
        return qtc.QGraphicsWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: QChart, enabled: bool) void {
        qtc.QGraphicsWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` size: QSizeF `
    ///
    pub fn Resize(self: QChart, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsWidget_Resize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn Resize2(self: QChart, w: f64, h: f64) void {
        qtc.QGraphicsWidget_Resize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Size(self: QChart) QSizeF {
        return .{ .ptr = qtc.QGraphicsWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetGeometry2(self: QChart, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsWidget_SetGeometry2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Rect(self: QChart) QRectF {
        return .{ .ptr = qtc.QGraphicsWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` left: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` right: f64 `
    ///
    /// ` bottom: f64 `
    ///
    pub fn SetContentsMargins(self: QChart, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn SetContentsMargins2(self: QChart, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        qtc.QGraphicsWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` left: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` right: f64 `
    ///
    /// ` bottom: f64 `
    ///
    pub fn SetWindowFrameMargins(self: QChart, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsWidget_SetWindowFrameMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn SetWindowFrameMargins2(self: QChart, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        qtc.QGraphicsWidget_SetWindowFrameMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn GetWindowFrameMargins(self: QChart, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsWidget_GetWindowFrameMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn UnsetWindowFrameMargins(self: QChart) void {
        qtc.QGraphicsWidget_UnsetWindowFrameMargins(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn WindowFrameGeometry(self: QChart) QRectF {
        return .{ .ptr = qtc.QGraphicsWidget_WindowFrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn WindowFrameRect(self: QChart) QRectF {
        return .{ .ptr = qtc.QGraphicsWidget_WindowFrameRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: QChart) i32 {
        return qtc.QGraphicsWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: QChart) i32 {
        return qtc.QGraphicsWidget_WindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` wFlags: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: QChart, wFlags: i32) void {
        qtc.QGraphicsWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(wFlags));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsActiveWindow(self: QChart) bool {
        return qtc.QGraphicsWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetWindowTitle(self: QChart, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QGraphicsWidget_SetWindowTitle(@ptrCast(self.ptr), title_str);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: QChart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGraphicsWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchart.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: QChart) i32 {
        return qtc.QGraphicsWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: QChart, policy: i32) void {
        qtc.QGraphicsWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` first: QGraphicsWidget `
    ///
    /// ` second: QGraphicsWidget `
    ///
    pub fn SetTabOrder(first: anytype, second: anytype) void {
        comptime _ = @TypeOf(first)._is_QGraphicsWidget;
        comptime _ = @TypeOf(second)._is_QGraphicsWidget;
        qtc.QGraphicsWidget_SetTabOrder(@ptrCast(first.ptr), @ptrCast(second.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn FocusWidget(self: QChart) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` sequence: QKeySequence `
    ///
    pub fn GrabShortcut(self: QChart, sequence: anytype) i32 {
        comptime _ = @TypeOf(sequence)._is_QKeySequence;
        return qtc.QGraphicsWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(sequence.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: QChart, id: i32) void {
        qtc.QGraphicsWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: QChart, id: i32) void {
        qtc.QGraphicsWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: QChart, id: i32) void {
        qtc.QGraphicsWidget_SetShortcutAutoRepeat(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: QChart, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QGraphicsWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QChart, actions: []QAction) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QGraphicsWidget_AddActions(@ptrCast(self.ptr), actions_list);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QChart, before: anytype, actions: []QAction) void {
        comptime _ = @TypeOf(before)._is_QAction;
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QGraphicsWidget_InsertActions(@ptrCast(self.ptr), @ptrCast(before.ptr), actions_list);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: QChart, before: anytype, action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QGraphicsWidget_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: QChart, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QGraphicsWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: QChart, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QGraphicsWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qchart.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` attribute: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: QChart, attribute: i32) void {
        qtc.QGraphicsWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(attribute));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` attribute: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: QChart, attribute: i32) bool {
        return qtc.QGraphicsWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(attribute));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn GeometryChanged(self: QChart) void {
        qtc.QGraphicsWidget_GeometryChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart) callconv(.c) void `
    ///
    pub fn OnGeometryChanged(self: QChart, callback: *const fn (QChart) callconv(.c) void) void {
        qtc.QGraphicsWidget_Connect_GeometryChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn LayoutChanged(self: QChart) void {
        qtc.QGraphicsWidget_LayoutChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart) callconv(.c) void `
    ///
    pub fn OnLayoutChanged(self: QChart, callback: *const fn (QChart) callconv(.c) void) void {
        qtc.QGraphicsWidget_Connect_LayoutChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Close(self: QChart) bool {
        return qtc.QGraphicsWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` sequence: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: QChart, sequence: anytype, context: i32) i32 {
        comptime _ = @TypeOf(sequence)._is_QKeySequence;
        return qtc.QGraphicsWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(sequence.ptr), @bitCast(context));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` id: i32 `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetShortcutEnabled2(self: QChart, id: i32, enabled: bool) void {
        qtc.QGraphicsWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enabled);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` id: i32 `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: QChart, id: i32, enabled: bool) void {
        qtc.QGraphicsWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enabled);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` attribute: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: QChart, attribute: i32, on: bool) void {
        qtc.QGraphicsWidget_SetAttribute2(@ptrCast(self.ptr), @bitCast(attribute), on);
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: QChart, typeVal: i32) void {
        qtc.QGraphicsObject_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: QChart, typeVal: i32) void {
        qtc.QGraphicsObject_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ParentChanged(self: QChart) void {
        qtc.QGraphicsObject_ParentChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart) callconv(.c) void `
    ///
    pub fn OnParentChanged(self: QChart, callback: *const fn (QChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ParentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn OpacityChanged(self: QChart) void {
        qtc.QGraphicsObject_OpacityChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: QChart, callback: *const fn (QChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn VisibleChanged(self: QChart) void {
        qtc.QGraphicsObject_VisibleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: QChart, callback: *const fn (QChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn EnabledChanged(self: QChart) void {
        qtc.QGraphicsObject_EnabledChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart) callconv(.c) void `
    ///
    pub fn OnEnabledChanged(self: QChart, callback: *const fn (QChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn XChanged(self: QChart) void {
        qtc.QGraphicsObject_XChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart) callconv(.c) void `
    ///
    pub fn OnXChanged(self: QChart, callback: *const fn (QChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_XChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn YChanged(self: QChart) void {
        qtc.QGraphicsObject_YChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart) callconv(.c) void `
    ///
    pub fn OnYChanged(self: QChart, callback: *const fn (QChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_YChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ZChanged(self: QChart) void {
        qtc.QGraphicsObject_ZChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart) callconv(.c) void `
    ///
    pub fn OnZChanged(self: QChart, callback: *const fn (QChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ZChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn RotationChanged(self: QChart) void {
        qtc.QGraphicsObject_RotationChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart) callconv(.c) void `
    ///
    pub fn OnRotationChanged(self: QChart, callback: *const fn (QChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_RotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ScaleChanged(self: QChart) void {
        qtc.QGraphicsObject_ScaleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart) callconv(.c) void `
    ///
    pub fn OnScaleChanged(self: QChart, callback: *const fn (QChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ScaleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ChildrenChanged(self: QChart) void {
        qtc.QGraphicsObject_ChildrenChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart) callconv(.c) void `
    ///
    pub fn OnChildrenChanged(self: QChart, callback: *const fn (QChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ChildrenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn WidthChanged(self: QChart) void {
        qtc.QGraphicsObject_WidthChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart) callconv(.c) void `
    ///
    pub fn OnWidthChanged(self: QChart, callback: *const fn (QChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_WidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn HeightChanged(self: QChart) void {
        qtc.QGraphicsObject_HeightChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart) callconv(.c) void `
    ///
    pub fn OnHeightChanged(self: QChart, callback: *const fn (QChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_HeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QChart, typeVal: i32, flags: i32) void {
        qtc.QGraphicsObject_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QChart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchart.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QChart, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsWidgetType(self: QChart) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsWindowType(self: QChart) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsQuickItemType(self: QChart) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SignalsBlocked(self: QChart) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QChart, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Thread(self: QChart) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QChart, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QChart, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QChart, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QChart, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QChart, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QChart, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qchart.Children: Memory allocation failed");
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
    /// ` self: QChart `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QChart, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QChart, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QChart, obj: anytype) void {
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
    /// ` self: QChart `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QChart, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QChart `
    ///
    pub fn Disconnect3(self: QChart) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QChart, receiver: anytype) bool {
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
    /// ` self: QChart `
    ///
    pub fn DumpObjectTree(self: QChart) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn DumpObjectInfo(self: QChart) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QChart, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QChart `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QChart, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QChart, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qchart.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qchart.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QChart `
    ///
    pub fn BindingStorage(self: QChart) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn BindingStorage2(self: QChart) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Destroyed(self: QChart) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QChart, callback: *const fn (QChart) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Parent(self: QChart) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QChart, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn DeleteLater(self: QChart) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QChart, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QChart, time: i64, timerType: i32) i32 {
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
    /// ` self: QChart `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QChart, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QChart, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QChart, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QChart, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QChart `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QChart, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QChart `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QChart, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QChart, callback: *const fn (QChart, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Scene(self: QChart) QGraphicsScene {
        return .{ .ptr = qtc.QGraphicsItem_Scene(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ParentItem(self: QChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_ParentItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn TopLevelItem(self: QChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_TopLevelItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ParentObject(self: QChart) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ParentObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ParentWidget(self: QChart) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn TopLevelWidget(self: QChart) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Window(self: QChart) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Panel(self: QChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_Panel(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` parent: QGraphicsItem `
    ///
    pub fn SetParentItem(self: QChart, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QGraphicsItem;
        qtc.QGraphicsItem_SetParentItem(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildItems(self: QChart, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_ChildItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qchart.ChildItems: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsWidget(self: QChart) bool {
        return qtc.QGraphicsItem_IsWidget(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsWindow(self: QChart) bool {
        return qtc.QGraphicsItem_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsPanel(self: QChart) bool {
        return qtc.QGraphicsItem_IsPanel(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ToGraphicsObject(self: QChart) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ToGraphicsObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ToGraphicsObject2(self: QChart) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ToGraphicsObject2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Group(self: QChart) QGraphicsItemGroup {
        return .{ .ptr = qtc.QGraphicsItem_Group(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` group: QGraphicsItemGroup `
    ///
    pub fn SetGroup(self: QChart, group: anytype) void {
        comptime _ = @TypeOf(group)._is_QGraphicsItemGroup;
        qtc.QGraphicsItem_SetGroup(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn Flags(self: QChart) i32 {
        return qtc.QGraphicsItem_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` flag: qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn SetFlag(self: QChart, flag: i32) void {
        qtc.QGraphicsItem_SetFlag(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` flags: flag of qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn SetFlags(self: QChart, flags: i32) void {
        qtc.QGraphicsItem_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsitem_enums.CacheMode `
    ///
    pub fn CacheMode(self: QChart) i32 {
        return qtc.QGraphicsItem_CacheMode(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` mode: qgraphicsitem_enums.CacheMode `
    ///
    pub fn SetCacheMode(self: QChart, mode: i32) void {
        qtc.QGraphicsItem_SetCacheMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsitem_enums.PanelModality `
    ///
    pub fn PanelModality(self: QChart) i32 {
        return qtc.QGraphicsItem_PanelModality(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` panelModality: qgraphicsitem_enums.PanelModality `
    ///
    pub fn SetPanelModality(self: QChart, panelModality: i32) void {
        qtc.QGraphicsItem_SetPanelModality(@ptrCast(self.ptr), @bitCast(panelModality));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsBlockedByModalPanel(self: QChart) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QChart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGraphicsItem_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qchart.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QChart, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QGraphicsItem_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Cursor(self: QChart) QCursor {
        return .{ .ptr = qtc.QGraphicsItem_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QChart, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QGraphicsItem_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn HasCursor(self: QChart) bool {
        return qtc.QGraphicsItem_HasCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn UnsetCursor(self: QChart) void {
        qtc.QGraphicsItem_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsVisible(self: QChart) bool {
        return qtc.QGraphicsItem_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` parent: QGraphicsItem `
    ///
    pub fn IsVisibleTo(self: QChart, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QGraphicsItem;
        return qtc.QGraphicsItem_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QChart, visible: bool) void {
        qtc.QGraphicsItem_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Hide(self: QChart) void {
        qtc.QGraphicsItem_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Show(self: QChart) void {
        qtc.QGraphicsItem_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsEnabled(self: QChart) bool {
        return qtc.QGraphicsItem_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QChart, enabled: bool) void {
        qtc.QGraphicsItem_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsSelected(self: QChart) bool {
        return qtc.QGraphicsItem_IsSelected(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` selected: bool `
    ///
    pub fn SetSelected(self: QChart, selected: bool) void {
        qtc.QGraphicsItem_SetSelected(@ptrCast(self.ptr), selected);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn AcceptDrops(self: QChart) bool {
        return qtc.QGraphicsItem_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: QChart, on: bool) void {
        qtc.QGraphicsItem_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Opacity(self: QChart) f64 {
        return qtc.QGraphicsItem_Opacity(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn EffectiveOpacity(self: QChart) f64 {
        return qtc.QGraphicsItem_EffectiveOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: QChart, opacity: f64) void {
        qtc.QGraphicsItem_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn GraphicsEffect(self: QChart) QGraphicsEffect {
        return .{ .ptr = qtc.QGraphicsItem_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: QChart, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QGraphicsItem_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn AcceptedMouseButtons(self: QChart) i32 {
        return qtc.QGraphicsItem_AcceptedMouseButtons(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn SetAcceptedMouseButtons(self: QChart, buttons: i32) void {
        qtc.QGraphicsItem_SetAcceptedMouseButtons(@ptrCast(self.ptr), @bitCast(buttons));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn AcceptHoverEvents(self: QChart) bool {
        return qtc.QGraphicsItem_AcceptHoverEvents(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAcceptHoverEvents(self: QChart, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptHoverEvents(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn AcceptTouchEvents(self: QChart) bool {
        return qtc.QGraphicsItem_AcceptTouchEvents(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAcceptTouchEvents(self: QChart, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptTouchEvents(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn FiltersChildEvents(self: QChart) bool {
        return qtc.QGraphicsItem_FiltersChildEvents(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetFiltersChildEvents(self: QChart, enabled: bool) void {
        qtc.QGraphicsItem_SetFiltersChildEvents(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn HandlesChildEvents(self: QChart) bool {
        return qtc.QGraphicsItem_HandlesChildEvents(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetHandlesChildEvents(self: QChart, enabled: bool) void {
        qtc.QGraphicsItem_SetHandlesChildEvents(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsActive(self: QChart) bool {
        return qtc.QGraphicsItem_IsActive(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` active: bool `
    ///
    pub fn SetActive(self: QChart, active: bool) void {
        qtc.QGraphicsItem_SetActive(@ptrCast(self.ptr), active);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn HasFocus(self: QChart) bool {
        return qtc.QGraphicsItem_HasFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SetFocus(self: QChart) void {
        qtc.QGraphicsItem_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ClearFocus(self: QChart) void {
        qtc.QGraphicsItem_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn FocusProxy(self: QChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn SetFocusProxy(self: QChart, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsItem_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn FocusItem(self: QChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn FocusScopeItem(self: QChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusScopeItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn GrabMouse(self: QChart) void {
        qtc.QGraphicsItem_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn UngrabMouse(self: QChart) void {
        qtc.QGraphicsItem_UngrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn GrabKeyboard(self: QChart) void {
        qtc.QGraphicsItem_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn UngrabKeyboard(self: QChart) void {
        qtc.QGraphicsItem_UngrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Pos(self: QChart) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn X(self: QChart) f64 {
        return qtc.QGraphicsItem_X(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` x: f64 `
    ///
    pub fn SetX(self: QChart, x: f64) void {
        qtc.QGraphicsItem_SetX(@ptrCast(self.ptr), @bitCast(x));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Y(self: QChart) f64 {
        return qtc.QGraphicsItem_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` y: f64 `
    ///
    pub fn SetY(self: QChart, y: f64) void {
        qtc.QGraphicsItem_SetY(@ptrCast(self.ptr), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ScenePos(self: QChart) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_ScenePos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetPos(self: QChart, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsItem_SetPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn SetPos2(self: QChart, x: f64, y: f64) void {
        qtc.QGraphicsItem_SetPos2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn MoveBy(self: QChart, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_MoveBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn EnsureVisible(self: QChart) void {
        qtc.QGraphicsItem_EnsureVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn EnsureVisible2(self: QChart, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsItem_EnsureVisible2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Transform(self: QChart) QTransform {
        return .{ .ptr = qtc.QGraphicsItem_Transform(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SceneTransform(self: QChart) QTransform {
        return .{ .ptr = qtc.QGraphicsItem_SceneTransform(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` viewportTransform: QTransform `
    ///
    pub fn DeviceTransform(self: QChart, viewportTransform: anytype) QTransform {
        comptime _ = @TypeOf(viewportTransform)._is_QTransform;
        return .{ .ptr = qtc.QGraphicsItem_DeviceTransform(@ptrCast(self.ptr), @ptrCast(viewportTransform.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` other: QGraphicsItem `
    ///
    pub fn ItemTransform(self: QChart, other: anytype) QTransform {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_ItemTransform(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` matrix: QTransform `
    ///
    pub fn SetTransform(self: QChart, matrix: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QGraphicsItem_SetTransform(@ptrCast(self.ptr), @ptrCast(matrix.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ResetTransform(self: QChart) void {
        qtc.QGraphicsItem_ResetTransform(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` angle: f64 `
    ///
    pub fn SetRotation(self: QChart, angle: f64) void {
        qtc.QGraphicsItem_SetRotation(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Rotation(self: QChart) f64 {
        return qtc.QGraphicsItem_Rotation(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` scale: f64 `
    ///
    pub fn SetScale(self: QChart, scale: f64) void {
        qtc.QGraphicsItem_SetScale(@ptrCast(self.ptr), @bitCast(scale));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Scale(self: QChart) f64 {
        return qtc.QGraphicsItem_Scale(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Transformations(self: QChart, allocator: std.mem.Allocator) []QGraphicsTransform {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_Transformations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsTransform, _arr.len) catch @panic("qchart.Transformations: Memory allocation failed");
        const _data: [*]QtC.QGraphicsTransform = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` transformations: []QGraphicsTransform `
    ///
    pub fn SetTransformations(self: QChart, transformations: []QGraphicsTransform) void {
        const transformations_list = qtc.libqt_list{
            .len = transformations.len,
            .data = @ptrCast(transformations.ptr),
        };
        qtc.QGraphicsItem_SetTransformations(@ptrCast(self.ptr), transformations_list);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn TransformOriginPoint(self: QChart) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_TransformOriginPoint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` origin: QPointF `
    ///
    pub fn SetTransformOriginPoint(self: QChart, origin: anytype) void {
        comptime _ = @TypeOf(origin)._is_QPointF;
        qtc.QGraphicsItem_SetTransformOriginPoint(@ptrCast(self.ptr), @ptrCast(origin.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` ax: f64 `
    ///
    /// ` ay: f64 `
    ///
    pub fn SetTransformOriginPoint2(self: QChart, ax: f64, ay: f64) void {
        qtc.QGraphicsItem_SetTransformOriginPoint2(@ptrCast(self.ptr), @bitCast(ax), @bitCast(ay));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ZValue(self: QChart) f64 {
        return qtc.QGraphicsItem_ZValue(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` z: f64 `
    ///
    pub fn SetZValue(self: QChart, z: f64) void {
        qtc.QGraphicsItem_SetZValue(@ptrCast(self.ptr), @bitCast(z));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` sibling: QGraphicsItem `
    ///
    pub fn StackBefore(self: QChart, sibling: anytype) void {
        comptime _ = @TypeOf(sibling)._is_QGraphicsItem;
        qtc.QGraphicsItem_StackBefore(@ptrCast(self.ptr), @ptrCast(sibling.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ChildrenBoundingRect(self: QChart) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_ChildrenBoundingRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SceneBoundingRect(self: QChart) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_SceneBoundingRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsClipped(self: QChart) bool {
        return qtc.QGraphicsItem_IsClipped(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ClipPath(self: QChart) QPainterPath {
        return .{ .ptr = qtc.QGraphicsItem_ClipPath(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CollidingItems(self: QChart, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qchart.CollidingItems: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsObscured(self: QChart) bool {
        return qtc.QGraphicsItem_IsObscured(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn IsObscured2(self: QChart, x: f64, y: f64, w: f64, h: f64) bool {
        return qtc.QGraphicsItem_IsObscured2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` itemToDeviceTransform: QTransform `
    ///
    pub fn BoundingRegion(self: QChart, itemToDeviceTransform: anytype) QRegion {
        comptime _ = @TypeOf(itemToDeviceTransform)._is_QTransform;
        return .{ .ptr = qtc.QGraphicsItem_BoundingRegion(@ptrCast(self.ptr), @ptrCast(itemToDeviceTransform.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn BoundingRegionGranularity(self: QChart) f64 {
        return qtc.QGraphicsItem_BoundingRegionGranularity(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` granularity: f64 `
    ///
    pub fn SetBoundingRegionGranularity(self: QChart, granularity: f64) void {
        qtc.QGraphicsItem_SetBoundingRegionGranularity(@ptrCast(self.ptr), @bitCast(granularity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Update(self: QChart) void {
        qtc.QGraphicsItem_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` width: f64 `
    ///
    /// ` height: f64 `
    ///
    pub fn Update2(self: QChart, x: f64, y: f64, width: f64, height: f64) void {
        qtc.QGraphicsItem_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapToItem(self: QChart, item: anytype, point: anytype) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapToParent(self: QChart, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToParent(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapToScene(self: QChart, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToScene(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRectToItem(self: QChart, item: anytype, rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(rect.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRectToParent(self: QChart, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToParent(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRectToScene(self: QChart, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToScene(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapToItem4(self: QChart, item: anytype, path: anytype) QPainterPath {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem4(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(path.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapToParent4(self: QChart, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToParent4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapToScene4(self: QChart, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToScene4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapFromItem(self: QChart, item: anytype, point: anytype) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapFromParent(self: QChart, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapFromScene(self: QChart, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRectFromItem(self: QChart, item: anytype, rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(rect.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRectFromParent(self: QChart, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromParent(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRectFromScene(self: QChart, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromScene(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapFromItem4(self: QChart, item: anytype, path: anytype) QPainterPath {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem4(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(path.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapFromParent4(self: QChart, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapFromScene4(self: QChart, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapToItem5(self: QChart, item: anytype, x: f64, y: f64) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem5(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapToParent5(self: QChart, x: f64, y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapToParent5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapToScene5(self: QChart, x: f64, y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapToScene5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectToItem2(self: QChart, item: anytype, x: f64, y: f64, w: f64, h: f64) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectToParent2(self: QChart, x: f64, y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectToParent2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectToScene2(self: QChart, x: f64, y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectToScene2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapFromItem5(self: QChart, item: anytype, x: f64, y: f64) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem5(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapFromParent5(self: QChart, x: f64, y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapFromScene5(self: QChart, x: f64, y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectFromItem2(self: QChart, item: anytype, x: f64, y: f64, w: f64, h: f64) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectFromParent2(self: QChart, x: f64, y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromParent2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectFromScene2(self: QChart, x: f64, y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromScene2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` child: QGraphicsItem `
    ///
    pub fn IsAncestorOf(self: QChart, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QGraphicsItem;
        return qtc.QGraphicsItem_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` other: QGraphicsItem `
    ///
    pub fn CommonAncestorItem(self: QChart, other: anytype) QGraphicsItem {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_CommonAncestorItem(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsUnderMouse(self: QChart) bool {
        return qtc.QGraphicsItem_IsUnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` key: i32 `
    ///
    pub fn Data(self: QChart, key: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsItem_Data(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` key: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetData(self: QChart, key: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QGraphicsItem_SetData(@ptrCast(self.ptr), @bitCast(key), @ptrCast(value.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: QChart) i32 {
        return qtc.QGraphicsItem_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: QChart, hints: i32) void {
        qtc.QGraphicsItem_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` filterItem: QGraphicsItem `
    ///
    pub fn InstallSceneEventFilter(self: QChart, filterItem: anytype) void {
        comptime _ = @TypeOf(filterItem)._is_QGraphicsItem;
        qtc.QGraphicsItem_InstallSceneEventFilter(@ptrCast(self.ptr), @ptrCast(filterItem.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` filterItem: QGraphicsItem `
    ///
    pub fn RemoveSceneEventFilter(self: QChart, filterItem: anytype) void {
        comptime _ = @TypeOf(filterItem)._is_QGraphicsItem;
        qtc.QGraphicsItem_RemoveSceneEventFilter(@ptrCast(self.ptr), @ptrCast(filterItem.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` flag: qgraphicsitem_enums.GraphicsItemFlag `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetFlag2(self: QChart, flag: i32, enabled: bool) void {
        qtc.QGraphicsItem_SetFlag2(@ptrCast(self.ptr), @bitCast(flag), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` mode: qgraphicsitem_enums.CacheMode `
    ///
    /// ` cacheSize: QSize `
    ///
    pub fn SetCacheMode2(self: QChart, mode: i32, cacheSize: anytype) void {
        comptime _ = @TypeOf(cacheSize)._is_QSize;
        qtc.QGraphicsItem_SetCacheMode2(@ptrCast(self.ptr), @bitCast(mode), @ptrCast(cacheSize.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` blockingPanel: *QGraphicsItem.ptr `
    ///
    pub fn IsBlockedByModalPanel1(self: QChart, blockingPanel: *?*anyopaque) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel1(@ptrCast(self.ptr), @ptrCast(blockingPanel));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` focusReason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus1(self: QChart, focusReason: i32) void {
        qtc.QGraphicsItem_SetFocus1(@ptrCast(self.ptr), @bitCast(focusReason));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn EnsureVisible1(self: QChart, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible1(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn EnsureVisible22(self: QChart, rect: anytype, xmargin: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible22(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn EnsureVisible3(self: QChart, rect: anytype, xmargin: i32, ymargin: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible3(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
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
    pub fn EnsureVisible5(self: QChart, x: f64, y: f64, w: f64, h: f64, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
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
    pub fn EnsureVisible6(self: QChart, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible6(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` other: QGraphicsItem `
    ///
    /// ` ok: *bool `
    ///
    pub fn ItemTransform2(self: QChart, other: anytype, ok: *bool) QTransform {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_ItemTransform2(@ptrCast(self.ptr), @ptrCast(other.ptr), @ptrCast(ok)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` matrix: QTransform `
    ///
    /// ` combine: bool `
    ///
    pub fn SetTransform2(self: QChart, matrix: anytype, combine: bool) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QGraphicsItem_SetTransform2(@ptrCast(self.ptr), @ptrCast(matrix.ptr), combine);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn CollidingItems1(self: QChart, allocator: std.mem.Allocator, mode: i32) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems1(@ptrCast(self.ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qchart.CollidingItems1: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn IsObscured1(self: QChart, rect: anytype) bool {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return qtc.QGraphicsItem_IsObscured1(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn Update1(self: QChart, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_Update1(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    /// ` rect: QRectF `
    ///
    pub fn Scroll3(self: QChart, dx: f64, dy: f64, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_Scroll3(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` policy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QChart, policy: anytype) void {
        comptime _ = @TypeOf(policy)._is_QSizePolicy;
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(policy.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QChart, hPolicy: i32, vPolicy: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SizePolicy(self: QChart) QSizePolicy {
        return .{ .ptr = qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetMinimumSize(self: QChart, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetMinimumSize2(self: QChart, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn MinimumSize(self: QChart) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` width: f64 `
    ///
    pub fn SetMinimumWidth(self: QChart, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn MinimumWidth(self: QChart) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` height: f64 `
    ///
    pub fn SetMinimumHeight(self: QChart, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn MinimumHeight(self: QChart) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetPreferredSize(self: QChart, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetPreferredSize2(self: QChart, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn PreferredSize(self: QChart) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` width: f64 `
    ///
    pub fn SetPreferredWidth(self: QChart, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn PreferredWidth(self: QChart) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` height: f64 `
    ///
    pub fn SetPreferredHeight(self: QChart, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn PreferredHeight(self: QChart) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetMaximumSize(self: QChart, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetMaximumSize2(self: QChart, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn MaximumSize(self: QChart) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` width: f64 `
    ///
    pub fn SetMaximumWidth(self: QChart, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn MaximumWidth(self: QChart) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` height: f64 `
    ///
    pub fn SetMaximumHeight(self: QChart, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn MaximumHeight(self: QChart) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Geometry(self: QChart) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ContentsRect(self: QChart) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    pub fn EffectiveSizeHint(self: QChart, which: i32) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self.ptr), @bitCast(which)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn ParentLayoutItem(self: QChart) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` parent: QGraphicsLayoutItem `
    ///
    pub fn SetParentLayoutItem(self: QChart, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsLayout(self: QChart) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn GraphicsItem(self: QChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn OwnedByLayout(self: QChart) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` controlType: qsizepolicy_enums.ControlType `
    ///
    pub fn SetSizePolicy3(self: QChart, hPolicy: i32, vPolicy: i32, controlType: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy), @bitCast(controlType));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn EffectiveSizeHint2(self: QChart, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SetGeometry(self: QChart, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QChart_SetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetGeometry` instead
    ///
    pub const QBaseSetGeometry = SuperSetGeometry;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SuperSetGeometry(self: QChart, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QChart_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, rect: QRectF) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: QChart, callback: *const fn (QChart, QRectF) callconv(.c) void) void {
        qtc.QChart_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn GetContentsMargins(self: QChart, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QChart_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `SuperGetContentsMargins` instead
    ///
    pub const QBaseGetContentsMargins = SuperGetContentsMargins;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn SuperGetContentsMargins(self: QChart, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QChart_SuperGetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, left: *f64, top: *f64, right: *f64, bottom: *f64) callconv(.c) void `
    ///
    pub fn OnGetContentsMargins(self: QChart, callback: *const fn (QChart, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QChart_OnGetContentsMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Type(self: QChart) i32 {
        return qtc.QChart_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperType` instead
    ///
    pub const QBaseType = SuperType;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SuperType(self: QChart) i32 {
        return qtc.QChart_SuperType(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnType(self: QChart, callback: *const fn () callconv(.c) i32) void {
        qtc.QChart_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionGraphicsItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn Paint(self: QChart, painter: anytype, option: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QChart_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaint` instead
    ///
    pub const QBasePaint = SuperPaint;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionGraphicsItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperPaint(self: QChart, painter: anytype, option: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QChart_SuperPaint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, painter: QPainter, option: QStyleOptionGraphicsItem, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnPaint(self: QChart, callback: *const fn (QChart, QPainter, QStyleOptionGraphicsItem, QWidget) callconv(.c) void) void {
        qtc.QChart_OnPaint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionGraphicsItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn PaintWindowFrame(self: QChart, painter: anytype, option: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QChart_PaintWindowFrame(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintWindowFrame` instead
    ///
    pub const QBasePaintWindowFrame = SuperPaintWindowFrame;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionGraphicsItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperPaintWindowFrame(self: QChart, painter: anytype, option: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QChart_SuperPaintWindowFrame(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, painter: QPainter, option: QStyleOptionGraphicsItem, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnPaintWindowFrame(self: QChart, callback: *const fn (QChart, QPainter, QStyleOptionGraphicsItem, QWidget) callconv(.c) void) void {
        qtc.QChart_OnPaintWindowFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn BoundingRect(self: QChart) QRectF {
        return .{ .ptr = qtc.QChart_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperBoundingRect` instead
    ///
    pub const QBaseBoundingRect = SuperBoundingRect;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SuperBoundingRect(self: QChart) QRectF {
        return .{ .ptr = qtc.QChart_SuperBoundingRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    pub fn OnBoundingRect(self: QChart, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QChart_OnBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Shape(self: QChart) QPainterPath {
        return .{ .ptr = qtc.QChart_Shape(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperShape` instead
    ///
    pub const QBaseShape = SuperShape;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SuperShape(self: QChart) QPainterPath {
        return .{ .ptr = qtc.QChart_SuperShape(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn () callconv(.c) QPainterPath `
    ///
    pub fn OnShape(self: QChart, callback: *const fn () callconv(.c) QPainterPath) void {
        qtc.QChart_OnShape(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` option: QStyleOption `
    ///
    pub fn InitStyleOption(self: QChart, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        qtc.QChart_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` option: QStyleOption `
    ///
    pub fn SuperInitStyleOption(self: QChart, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        qtc.QChart_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, option: QStyleOption) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: QChart, callback: *const fn (QChart, QStyleOption) callconv(.c) void) void {
        qtc.QChart_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn SizeHint(self: QChart, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QChart_SizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn SuperSizeHint(self: QChart, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QChart_SuperSizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, which: qnamespace_enums.SizeHint, constraint: QSizeF) callconv(.c) QSizeF `
    ///
    pub fn OnSizeHint(self: QChart, callback: *const fn (QChart, i32, QSizeF) callconv(.c) QSizeF) void {
        qtc.QChart_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn UpdateGeometry(self: QChart) void {
        qtc.QChart_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateGeometry` instead
    ///
    pub const QBaseUpdateGeometry = SuperUpdateGeometry;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SuperUpdateGeometry(self: QChart) void {
        qtc.QChart_SuperUpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateGeometry(self: QChart, callback: *const fn () callconv(.c) void) void {
        qtc.QChart_OnUpdateGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` change: qgraphicsitem_enums.GraphicsItemChange `
    ///
    /// ` value: QVariant `
    ///
    pub fn ItemChange(self: QChart, change: i32, value: anytype) QVariant {
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QChart_ItemChange(@ptrCast(self.ptr), @bitCast(change), @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperItemChange` instead
    ///
    pub const QBaseItemChange = SuperItemChange;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` change: qgraphicsitem_enums.GraphicsItemChange `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperItemChange(self: QChart, change: i32, value: anytype) QVariant {
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QChart_SuperItemChange(@ptrCast(self.ptr), @bitCast(change), @ptrCast(value.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, change: qgraphicsitem_enums.GraphicsItemChange, value: QVariant) callconv(.c) QVariant `
    ///
    pub fn OnItemChange(self: QChart, callback: *const fn (QChart, i32, QVariant) callconv(.c) QVariant) void {
        qtc.QChart_OnItemChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn PropertyChange(self: QChart, propertyName: []const u8, value: anytype) QVariant {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QChart_PropertyChange(@ptrCast(self.ptr), propertyName_str, @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperPropertyChange` instead
    ///
    pub const QBasePropertyChange = SuperPropertyChange;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperPropertyChange(self: QChart, propertyName: []const u8, value: anytype) QVariant {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QChart_SuperPropertyChange(@ptrCast(self.ptr), propertyName_str, @ptrCast(value.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, propertyName: [*:0]const u8, value: QVariant) callconv(.c) QVariant `
    ///
    pub fn OnPropertyChange(self: QChart, callback: *const fn (QChart, [*:0]const u8, QVariant) callconv(.c) QVariant) void {
        qtc.QChart_OnPropertyChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SceneEvent(self: QChart, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QChart_SceneEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperSceneEvent` instead
    ///
    pub const QBaseSceneEvent = SuperSceneEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperSceneEvent(self: QChart, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QChart_SuperSceneEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnSceneEvent(self: QChart, callback: *const fn (QChart, QEvent) callconv(.c) bool) void {
        qtc.QChart_OnSceneEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` e: QEvent `
    ///
    pub fn WindowFrameEvent(self: QChart, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QChart_WindowFrameEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperWindowFrameEvent` instead
    ///
    pub const QBaseWindowFrameEvent = SuperWindowFrameEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperWindowFrameEvent(self: QChart, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QChart_SuperWindowFrameEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnWindowFrameEvent(self: QChart, callback: *const fn (QChart, QEvent) callconv(.c) bool) void {
        qtc.QChart_OnWindowFrameEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` pos: QPointF `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowFrameSection `
    ///
    pub fn WindowFrameSectionAt(self: QChart, pos: anytype) i32 {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return qtc.QChart_WindowFrameSectionAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `SuperWindowFrameSectionAt` instead
    ///
    pub const QBaseWindowFrameSectionAt = SuperWindowFrameSectionAt;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` pos: QPointF `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowFrameSection `
    ///
    pub fn SuperWindowFrameSectionAt(self: QChart, pos: anytype) i32 {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return qtc.QChart_SuperWindowFrameSectionAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, pos: QPointF) callconv(.c) i32 `
    ///
    pub fn OnWindowFrameSectionAt(self: QChart, callback: *const fn (QChart, QPointF) callconv(.c) i32) void {
        qtc.QChart_OnWindowFrameSectionAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QChart, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QChart_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QChart, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QChart_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QChart, callback: *const fn (QChart, QEvent) callconv(.c) bool) void {
        qtc.QChart_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn ChangeEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QChart_ChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperChangeEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QChart_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: QChart, callback: *const fn (QChart, QEvent) callconv(.c) void) void {
        qtc.QChart_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QChart_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCloseEvent` instead
    ///
    pub const QBaseCloseEvent = SuperCloseEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QChart_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: QChart, callback: *const fn (QChart, QCloseEvent) callconv(.c) void) void {
        qtc.QChart_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QChart_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QChart_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QChart, callback: *const fn (QChart, QFocusEvent) callconv(.c) void) void {
        qtc.QChart_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: QChart, next: bool) bool {
        return qtc.QChart_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: QChart, next: bool) bool {
        return qtc.QChart_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: QChart, callback: *const fn (QChart, bool) callconv(.c) bool) void {
        qtc.QChart_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QChart_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QChart_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QChart, callback: *const fn (QChart, QFocusEvent) callconv(.c) void) void {
        qtc.QChart_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QChart_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperHideEvent` instead
    ///
    pub const QBaseHideEvent = SuperHideEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QChart_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: QChart, callback: *const fn (QChart, QHideEvent) callconv(.c) void) void {
        qtc.QChart_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneMoveEvent `
    ///
    pub fn MoveEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMoveEvent;
        qtc.QChart_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMoveEvent` instead
    ///
    pub const QBaseMoveEvent = SuperMoveEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMoveEvent;
        qtc.QChart_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QGraphicsSceneMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: QChart, callback: *const fn (QChart, QGraphicsSceneMoveEvent) callconv(.c) void) void {
        qtc.QChart_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn PolishEvent(self: QChart) void {
        qtc.QChart_PolishEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperPolishEvent` instead
    ///
    pub const QBasePolishEvent = SuperPolishEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SuperPolishEvent(self: QChart) void {
        qtc.QChart_SuperPolishEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnPolishEvent(self: QChart, callback: *const fn () callconv(.c) void) void {
        qtc.QChart_OnPolishEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneResizeEvent `
    ///
    pub fn ResizeEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneResizeEvent;
        qtc.QChart_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneResizeEvent `
    ///
    pub fn SuperResizeEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneResizeEvent;
        qtc.QChart_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QGraphicsSceneResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: QChart, callback: *const fn (QChart, QGraphicsSceneResizeEvent) callconv(.c) void) void {
        qtc.QChart_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QChart_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QChart_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: QChart, callback: *const fn (QChart, QShowEvent) callconv(.c) void) void {
        qtc.QChart_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneHoverEvent `
    ///
    pub fn HoverMoveEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHoverEvent;
        qtc.QChart_HoverMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperHoverMoveEvent` instead
    ///
    pub const QBaseHoverMoveEvent = SuperHoverMoveEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneHoverEvent `
    ///
    pub fn SuperHoverMoveEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHoverEvent;
        qtc.QChart_SuperHoverMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn OnHoverMoveEvent(self: QChart, callback: *const fn (QChart, QGraphicsSceneHoverEvent) callconv(.c) void) void {
        qtc.QChart_OnHoverMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneHoverEvent `
    ///
    pub fn HoverLeaveEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHoverEvent;
        qtc.QChart_HoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperHoverLeaveEvent` instead
    ///
    pub const QBaseHoverLeaveEvent = SuperHoverLeaveEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneHoverEvent `
    ///
    pub fn SuperHoverLeaveEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHoverEvent;
        qtc.QChart_SuperHoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn OnHoverLeaveEvent(self: QChart, callback: *const fn (QChart, QGraphicsSceneHoverEvent) callconv(.c) void) void {
        qtc.QChart_OnHoverLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn GrabMouseEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QChart_GrabMouseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperGrabMouseEvent` instead
    ///
    pub const QBaseGrabMouseEvent = SuperGrabMouseEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperGrabMouseEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QChart_SuperGrabMouseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QEvent) callconv(.c) void `
    ///
    pub fn OnGrabMouseEvent(self: QChart, callback: *const fn (QChart, QEvent) callconv(.c) void) void {
        qtc.QChart_OnGrabMouseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn UngrabMouseEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QChart_UngrabMouseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperUngrabMouseEvent` instead
    ///
    pub const QBaseUngrabMouseEvent = SuperUngrabMouseEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperUngrabMouseEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QChart_SuperUngrabMouseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QEvent) callconv(.c) void `
    ///
    pub fn OnUngrabMouseEvent(self: QChart, callback: *const fn (QChart, QEvent) callconv(.c) void) void {
        qtc.QChart_OnUngrabMouseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn GrabKeyboardEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QChart_GrabKeyboardEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperGrabKeyboardEvent` instead
    ///
    pub const QBaseGrabKeyboardEvent = SuperGrabKeyboardEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperGrabKeyboardEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QChart_SuperGrabKeyboardEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QEvent) callconv(.c) void `
    ///
    pub fn OnGrabKeyboardEvent(self: QChart, callback: *const fn (QChart, QEvent) callconv(.c) void) void {
        qtc.QChart_OnGrabKeyboardEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn UngrabKeyboardEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QChart_UngrabKeyboardEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperUngrabKeyboardEvent` instead
    ///
    pub const QBaseUngrabKeyboardEvent = SuperUngrabKeyboardEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperUngrabKeyboardEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QChart_SuperUngrabKeyboardEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QEvent) callconv(.c) void `
    ///
    pub fn OnUngrabKeyboardEvent(self: QChart, callback: *const fn (QChart, QEvent) callconv(.c) void) void {
        qtc.QChart_OnUngrabKeyboardEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QChart, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QChart_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QChart `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QChart, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QChart_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QChart, callback: *const fn (QChart, QObject, QEvent) callconv(.c) bool) void {
        qtc.QChart_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QChart_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QChart `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QChart_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QChart, callback: *const fn (QChart, QTimerEvent) callconv(.c) void) void {
        qtc.QChart_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QChart_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QChart `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QChart_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QChart, callback: *const fn (QChart, QChildEvent) callconv(.c) void) void {
        qtc.QChart_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QChart_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QChart_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QChart, callback: *const fn (QChart, QEvent) callconv(.c) void) void {
        qtc.QChart_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QChart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QChart_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QChart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QChart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QChart_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QChart, callback: *const fn (QChart, QMetaMethod) callconv(.c) void) void {
        qtc.QChart_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QChart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QChart_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QChart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QChart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QChart_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QChart, callback: *const fn (QChart, QMetaMethod) callconv(.c) void) void {
        qtc.QChart_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` phase: i32 `
    ///
    pub fn Advance(self: QChart, phase: i32) void {
        qtc.QChart_Advance(@ptrCast(self.ptr), @bitCast(phase));
    }

    /// ### DEPRECATED: Use `SuperAdvance` instead
    ///
    pub const QBaseAdvance = SuperAdvance;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` phase: i32 `
    ///
    pub fn SuperAdvance(self: QChart, phase: i32) void {
        qtc.QChart_SuperAdvance(@ptrCast(self.ptr), @bitCast(phase));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, phase: i32) callconv(.c) void `
    ///
    pub fn OnAdvance(self: QChart, callback: *const fn (QChart, i32) callconv(.c) void) void {
        qtc.QChart_OnAdvance(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` point: QPointF `
    ///
    pub fn Contains(self: QChart, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QChart_Contains(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `SuperContains` instead
    ///
    pub const QBaseContains = SuperContains;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` point: QPointF `
    ///
    pub fn SuperContains(self: QChart, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QChart_SuperContains(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, point: QPointF) callconv(.c) bool `
    ///
    pub fn OnContains(self: QChart, callback: *const fn (QChart, QPointF) callconv(.c) bool) void {
        qtc.QChart_OnContains(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` other: QGraphicsItem `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn CollidesWithItem(self: QChart, other: anytype, mode: i32) bool {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return qtc.QChart_CollidesWithItem(@ptrCast(self.ptr), @ptrCast(other.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `SuperCollidesWithItem` instead
    ///
    pub const QBaseCollidesWithItem = SuperCollidesWithItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` other: QGraphicsItem `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn SuperCollidesWithItem(self: QChart, other: anytype, mode: i32) bool {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return qtc.QChart_SuperCollidesWithItem(@ptrCast(self.ptr), @ptrCast(other.ptr), @bitCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, other: QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool `
    ///
    pub fn OnCollidesWithItem(self: QChart, callback: *const fn (QChart, QGraphicsItem, i32) callconv(.c) bool) void {
        qtc.QChart_OnCollidesWithItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn CollidesWithPath(self: QChart, path: anytype, mode: i32) bool {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return qtc.QChart_CollidesWithPath(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `SuperCollidesWithPath` instead
    ///
    pub const QBaseCollidesWithPath = SuperCollidesWithPath;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn SuperCollidesWithPath(self: QChart, path: anytype, mode: i32) bool {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return qtc.QChart_SuperCollidesWithPath(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, path: QPainterPath, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool `
    ///
    pub fn OnCollidesWithPath(self: QChart, callback: *const fn (QChart, QPainterPath, i32) callconv(.c) bool) void {
        qtc.QChart_OnCollidesWithPath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn IsObscuredBy(self: QChart, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return qtc.QChart_IsObscuredBy(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsObscuredBy` instead
    ///
    pub const QBaseIsObscuredBy = SuperIsObscuredBy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn SuperIsObscuredBy(self: QChart, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return qtc.QChart_SuperIsObscuredBy(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, item: QGraphicsItem) callconv(.c) bool `
    ///
    pub fn OnIsObscuredBy(self: QChart, callback: *const fn (QChart, QGraphicsItem) callconv(.c) bool) void {
        qtc.QChart_OnIsObscuredBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn OpaqueArea(self: QChart) QPainterPath {
        return .{ .ptr = qtc.QChart_OpaqueArea(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperOpaqueArea` instead
    ///
    pub const QBaseOpaqueArea = SuperOpaqueArea;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SuperOpaqueArea(self: QChart) QPainterPath {
        return .{ .ptr = qtc.QChart_SuperOpaqueArea(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn () callconv(.c) QPainterPath `
    ///
    pub fn OnOpaqueArea(self: QChart, callback: *const fn () callconv(.c) QPainterPath) void {
        qtc.QChart_OnOpaqueArea(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` watched: QGraphicsItem `
    ///
    /// ` event: QEvent `
    ///
    pub fn SceneEventFilter(self: QChart, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QGraphicsItem;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QChart_SceneEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperSceneEventFilter` instead
    ///
    pub const QBaseSceneEventFilter = SuperSceneEventFilter;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` watched: QGraphicsItem `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperSceneEventFilter(self: QChart, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QGraphicsItem;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QChart_SuperSceneEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, watched: QGraphicsItem, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnSceneEventFilter(self: QChart, callback: *const fn (QChart, QGraphicsItem, QEvent) callconv(.c) bool) void {
        qtc.QChart_OnSceneEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneContextMenuEvent;
        qtc.QChart_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneContextMenuEvent;
        qtc.QChart_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QGraphicsSceneContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: QChart, callback: *const fn (QChart, QGraphicsSceneContextMenuEvent) callconv(.c) void) void {
        qtc.QChart_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn DragEnterEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QChart_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragEnterEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QChart_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: QChart, callback: *const fn (QChart, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QChart_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn DragLeaveEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QChart_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QChart_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: QChart, callback: *const fn (QChart, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QChart_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn DragMoveEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QChart_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragMoveEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QChart_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: QChart, callback: *const fn (QChart, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QChart_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn DropEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QChart_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDropEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QChart_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: QChart, callback: *const fn (QChart, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QChart_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneHoverEvent `
    ///
    pub fn HoverEnterEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHoverEvent;
        qtc.QChart_HoverEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperHoverEnterEvent` instead
    ///
    pub const QBaseHoverEnterEvent = SuperHoverEnterEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneHoverEvent `
    ///
    pub fn SuperHoverEnterEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHoverEvent;
        qtc.QChart_SuperHoverEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn OnHoverEnterEvent(self: QChart, callback: *const fn (QChart, QGraphicsSceneHoverEvent) callconv(.c) void) void {
        qtc.QChart_OnHoverEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QChart_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QChart_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QChart, callback: *const fn (QChart, QKeyEvent) callconv(.c) void) void {
        qtc.QChart_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QChart_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QChart_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QChart, callback: *const fn (QChart, QKeyEvent) callconv(.c) void) void {
        qtc.QChart_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn MousePressEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QChart_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QChart_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QChart, callback: *const fn (QChart, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QChart_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QChart_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QChart_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QChart, callback: *const fn (QChart, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QChart_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QChart_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QChart_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QChart, callback: *const fn (QChart, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QChart_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QChart_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QChart_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QChart, callback: *const fn (QChart, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QChart_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneWheelEvent `
    ///
    pub fn WheelEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneWheelEvent;
        qtc.QChart_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QGraphicsSceneWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneWheelEvent;
        qtc.QChart_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QGraphicsSceneWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QChart, callback: *const fn (QChart, QGraphicsSceneWheelEvent) callconv(.c) void) void {
        qtc.QChart_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QChart_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QChart_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, event: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: QChart, callback: *const fn (QChart, QInputMethodEvent) callconv(.c) void) void {
        qtc.QChart_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QChart, query: i32) QVariant {
        return .{ .ptr = qtc.QChart_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QChart, query: i32) QVariant {
        return .{ .ptr = qtc.QChart_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: QChart, callback: *const fn (QChart, i32) callconv(.c) QVariant) void {
        qtc.QChart_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    pub fn SupportsExtension(self: QChart, extension: i32) bool {
        return qtc.QChart_SupportsExtension(@ptrCast(self.ptr), @bitCast(extension));
    }

    /// ### DEPRECATED: Use `SuperSupportsExtension` instead
    ///
    pub const QBaseSupportsExtension = SuperSupportsExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    pub fn SuperSupportsExtension(self: QChart, extension: i32) bool {
        return qtc.QChart_SuperSupportsExtension(@ptrCast(self.ptr), @bitCast(extension));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, extension: qgraphicsitem_enums.Extension) callconv(.c) bool `
    ///
    pub fn OnSupportsExtension(self: QChart, callback: *const fn (QChart, i32) callconv(.c) bool) void {
        qtc.QChart_OnSupportsExtension(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    /// ` variant: QVariant `
    ///
    pub fn SetExtension(self: QChart, extension: i32, variant: anytype) void {
        comptime _ = @TypeOf(variant)._is_QVariant;
        qtc.QChart_SetExtension(@ptrCast(self.ptr), @bitCast(extension), @ptrCast(variant.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetExtension` instead
    ///
    pub const QBaseSetExtension = SuperSetExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    /// ` variant: QVariant `
    ///
    pub fn SuperSetExtension(self: QChart, extension: i32, variant: anytype) void {
        comptime _ = @TypeOf(variant)._is_QVariant;
        qtc.QChart_SuperSetExtension(@ptrCast(self.ptr), @bitCast(extension), @ptrCast(variant.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, extension: qgraphicsitem_enums.Extension, variant: QVariant) callconv(.c) void `
    ///
    pub fn OnSetExtension(self: QChart, callback: *const fn (QChart, i32, QVariant) callconv(.c) void) void {
        qtc.QChart_OnSetExtension(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` variant: QVariant `
    ///
    pub fn Extension(self: QChart, variant: anytype) QVariant {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QChart_Extension(@ptrCast(self.ptr), @ptrCast(variant.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperExtension` instead
    ///
    pub const QBaseExtension = SuperExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` variant: QVariant `
    ///
    pub fn SuperExtension(self: QChart, variant: anytype) QVariant {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QChart_SuperExtension(@ptrCast(self.ptr), @ptrCast(variant.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, variant: QVariant) callconv(.c) QVariant `
    ///
    pub fn OnExtension(self: QChart, callback: *const fn (QChart, QVariant) callconv(.c) QVariant) void {
        qtc.QChart_OnExtension(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn IsEmpty(self: QChart) bool {
        return qtc.QChart_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsEmpty` instead
    ///
    pub const QBaseIsEmpty = SuperIsEmpty;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SuperIsEmpty(self: QChart) bool {
        return qtc.QChart_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: QChart, callback: *const fn () callconv(.c) bool) void {
        qtc.QChart_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn UpdateMicroFocus(self: QChart) void {
        qtc.QChart_UpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateMicroFocus` instead
    ///
    pub const QBaseUpdateMicroFocus = SuperUpdateMicroFocus;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SuperUpdateMicroFocus(self: QChart) void {
        qtc.QChart_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: QChart, callback: *const fn () callconv(.c) void) void {
        qtc.QChart_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn Sender(self: QChart) QObject {
        return .{ .ptr = qtc.QChart_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QChart `
    ///
    pub fn SuperSender(self: QChart) QObject {
        return .{ .ptr = qtc.QChart_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QChart, callback: *const fn () callconv(.c) QObject) void {
        qtc.QChart_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SenderSignalIndex(self: QChart) i32 {
        return qtc.QChart_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QChart `
    ///
    pub fn SuperSenderSignalIndex(self: QChart) i32 {
        return qtc.QChart_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QChart, callback: *const fn () callconv(.c) i32) void {
        qtc.QChart_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QChart, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QChart_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QChart, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QChart_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QChart, callback: *const fn (QChart, [*:0]const u8) callconv(.c) i32) void {
        qtc.QChart_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QChart, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QChart_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QChart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QChart, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QChart_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QChart, callback: *const fn (QChart, QMetaMethod) callconv(.c) bool) void {
        qtc.QChart_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn AddToIndex(self: QChart) void {
        qtc.QChart_AddToIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperAddToIndex` instead
    ///
    pub const QBaseAddToIndex = SuperAddToIndex;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SuperAddToIndex(self: QChart) void {
        qtc.QChart_SuperAddToIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAddToIndex(self: QChart, callback: *const fn () callconv(.c) void) void {
        qtc.QChart_OnAddToIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn RemoveFromIndex(self: QChart) void {
        qtc.QChart_RemoveFromIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperRemoveFromIndex` instead
    ///
    pub const QBaseRemoveFromIndex = SuperRemoveFromIndex;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SuperRemoveFromIndex(self: QChart) void {
        qtc.QChart_SuperRemoveFromIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRemoveFromIndex(self: QChart, callback: *const fn () callconv(.c) void) void {
        qtc.QChart_OnRemoveFromIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn PrepareGeometryChange(self: QChart) void {
        qtc.QChart_PrepareGeometryChange(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperPrepareGeometryChange` instead
    ///
    pub const QBasePrepareGeometryChange = SuperPrepareGeometryChange;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    pub fn SuperPrepareGeometryChange(self: QChart) void {
        qtc.QChart_SuperPrepareGeometryChange(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnPrepareGeometryChange(self: QChart, callback: *const fn () callconv(.c) void) void {
        qtc.QChart_OnPrepareGeometryChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn SetGraphicsItem(self: QChart, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QChart_SetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetGraphicsItem` instead
    ///
    pub const QBaseSetGraphicsItem = SuperSetGraphicsItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn SuperSetGraphicsItem(self: QChart, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QChart_SuperSetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, item: QGraphicsItem) callconv(.c) void `
    ///
    pub fn OnSetGraphicsItem(self: QChart, callback: *const fn (QChart, QGraphicsItem) callconv(.c) void) void {
        qtc.QChart_OnSetGraphicsItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` ownedByLayout: bool `
    ///
    pub fn SetOwnedByLayout(self: QChart, ownedByLayout: bool) void {
        qtc.QChart_SetOwnedByLayout(@ptrCast(self.ptr), ownedByLayout);
    }

    /// ### DEPRECATED: Use `SuperSetOwnedByLayout` instead
    ///
    pub const QBaseSetOwnedByLayout = SuperSetOwnedByLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChart `
    ///
    /// ` ownedByLayout: bool `
    ///
    pub fn SuperSetOwnedByLayout(self: QChart, ownedByLayout: bool) void {
        qtc.QChart_SuperSetOwnedByLayout(@ptrCast(self.ptr), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart`
    ///
    /// ` callback: *const fn (self: QChart, ownedByLayout: bool) callconv(.c) void `
    ///
    pub fn OnSetOwnedByLayout(self: QChart, callback: *const fn (QChart, bool) callconv(.c) void) void {
        qtc.QChart_OnSetOwnedByLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QChart `
    ///
    /// ` callback: *const fn (self: QChart, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QChart, callback: *const fn (QChart, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#dtor.QChart)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QChart `
    ///
    pub fn Delete(self: QChart) void {
        qtc.QChart_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#public-types)
pub const enums = struct {
    pub const ChartType = enum(i32) {
        pub const ChartTypeUndefined: i32 = 0;
        pub const ChartTypeCartesian: i32 = 1;
        pub const ChartTypePolar: i32 = 2;
    };

    pub const ChartTheme = enum(i32) {
        pub const ChartThemeLight: i32 = 0;
        pub const ChartThemeBlueCerulean: i32 = 1;
        pub const ChartThemeDark: i32 = 2;
        pub const ChartThemeBrownSand: i32 = 3;
        pub const ChartThemeBlueNcs: i32 = 4;
        pub const ChartThemeHighContrast: i32 = 5;
        pub const ChartThemeBlueIcy: i32 = 6;
        pub const ChartThemeQt: i32 = 7;
    };

    pub const AnimationOption = enum(i32) {
        pub const NoAnimation: i32 = 0;
        pub const GridAxisAnimations: i32 = 1;
        pub const SeriesAnimations: i32 = 2;
        pub const AllAnimations: i32 = 3;
    };
};
