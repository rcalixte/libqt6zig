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
const qchart_enums = @import("libqchart.zig").enums;
const qgraphicsitem_enums = @import("../libqgraphicsitem.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpolarchart_enums = enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html)
pub const QPolarChart = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPolarChart,

    pub const _is_QPolarChart = {};
    pub const _is_QChart = {};
    pub const _is_QGraphicsWidget = {};
    pub const _is_QGraphicsObject = {};
    pub const _is_QObject = {};
    pub const _is_QGraphicsItem = {};
    pub const _is_QGraphicsLayoutItem = {};

    /// New constructs a new QPolarChart object.
    ///
    pub fn New() QPolarChart {
        return .{ .ptr = qtc.QPolarChart_new() };
    }

    /// New2 constructs a new QPolarChart object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QGraphicsItem `
    ///
    pub fn New2(parent: anytype) QPolarChart {
        comptime _ = @TypeOf(parent)._is_QGraphicsItem;
        return .{ .ptr = qtc.QPolarChart_new2(@ptrCast(parent.ptr)) };
    }

    /// New3 constructs a new QPolarChart object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QGraphicsItem `
    ///
    /// ` wFlags: flag of qnamespace_enums.WindowType `
    ///
    pub fn New3(parent: anytype, wFlags: i32) QPolarChart {
        comptime _ = @TypeOf(parent)._is_QGraphicsItem;
        return .{ .ptr = qtc.QPolarChart_new3(@ptrCast(parent.ptr), @bitCast(wFlags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn MetaObject(self: QPolarChart) QMetaObject {
        return .{ .ptr = qtc.QPolarChart_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QPolarChart, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPolarChart_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPolarChart `
    ///
    pub fn SuperMetaObject(self: QPolarChart) QMetaObject {
        return .{ .ptr = qtc.QPolarChart_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QPolarChart, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPolarChart_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QPolarChart, callback: *const fn (QPolarChart, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPolarChart_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QPolarChart, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPolarChart_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QPolarChart, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPolarChart_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QPolarChart, callback: *const fn (QPolarChart, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPolarChart_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QPolarChart, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPolarChart_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#addAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` axis: QAbstractAxis `
    ///
    /// ` polarOrientation: qpolarchart_enums.PolarOrientation `
    ///
    pub fn AddAxis(self: QPolarChart, axis: anytype, polarOrientation: i32) void {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        qtc.QPolarChart_AddAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr), @bitCast(polarOrientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Axes(self: QPolarChart, allocator: std.mem.Allocator) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QPolarChart_Axes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("qpolarchart.Axes: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axisPolarOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` axis: QAbstractAxis `
    ///
    /// ## Returns:
    ///
    /// ` qpolarchart_enums.PolarOrientation `
    ///
    pub fn AxisPolarOrientation(axis: anytype) i32 {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QPolarChart_AxisPolarOrientation(@ptrCast(axis.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` polarOrientation: flag of qpolarchart_enums.PolarOrientation `
    ///
    pub fn Axes1(self: QPolarChart, allocator: std.mem.Allocator, polarOrientation: i32) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QPolarChart_Axes1(@ptrCast(self.ptr), @bitCast(polarOrientation));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("qpolarchart.Axes1: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` polarOrientation: flag of qpolarchart_enums.PolarOrientation `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn Axes2(self: QPolarChart, allocator: std.mem.Allocator, polarOrientation: i32, series: anytype) []QAbstractAxis {
        comptime _ = @TypeOf(series)._is_QAbstractSeries;
        const _arr: qtc.libqt_list = qtc.QPolarChart_Axes2(@ptrCast(self.ptr), @bitCast(polarOrientation), @ptrCast(series.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("qpolarchart.Axes2: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#addSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn AddSeries(self: QPolarChart, series: anytype) void {
        comptime _ = @TypeOf(series)._is_QAbstractSeries;
        qtc.QChart_AddSeries(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#removeSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn RemoveSeries(self: QPolarChart, series: anytype) void {
        comptime _ = @TypeOf(series)._is_QAbstractSeries;
        qtc.QChart_RemoveSeries(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#removeAllSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn RemoveAllSeries(self: QPolarChart) void {
        qtc.QChart_RemoveAllSeries(@ptrCast(self.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Series(self: QPolarChart, allocator: std.mem.Allocator) []QAbstractSeries {
        const _arr: qtc.libqt_list = qtc.QChart_Series(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractSeries, _arr.len) catch @panic("qpolarchart.Series: Memory allocation failed");
        const _data: [*]QtC.QAbstractSeries = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAxisX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn SetAxisX(self: QPolarChart, axis: anytype) void {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        qtc.QChart_SetAxisX(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAxisY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn SetAxisY(self: QPolarChart, axis: anytype) void {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        qtc.QChart_SetAxisY(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#axisX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn AxisX(self: QPolarChart) QAbstractAxis {
        return .{ .ptr = qtc.QChart_AxisX(@ptrCast(self.ptr)) };
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#axisY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn AxisY(self: QPolarChart) QAbstractAxis {
        return .{ .ptr = qtc.QChart_AxisY(@ptrCast(self.ptr)) };
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#removeAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn RemoveAxis(self: QPolarChart, axis: anytype) void {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        qtc.QChart_RemoveAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#createDefaultAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn CreateDefaultAxes(self: QPolarChart) void {
        qtc.QChart_CreateDefaultAxes(@ptrCast(self.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` theme: qchart_enums.ChartTheme `
    ///
    pub fn SetTheme(self: QPolarChart, theme: i32) void {
        qtc.QChart_SetTheme(@ptrCast(self.ptr), @bitCast(theme));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#theme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` qchart_enums.ChartTheme `
    ///
    pub fn Theme(self: QPolarChart) i32 {
        return qtc.QChart_Theme(@ptrCast(self.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: QPolarChart, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QChart_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: QPolarChart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QChart_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setTitleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` font: QFont `
    ///
    pub fn SetTitleFont(self: QPolarChart, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QChart_SetTitleFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#titleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn TitleFont(self: QPolarChart) QFont {
        return .{ .ptr = qtc.QChart_TitleFont(@ptrCast(self.ptr)) };
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setTitleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetTitleBrush(self: QPolarChart, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QChart_SetTitleBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#titleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn TitleBrush(self: QPolarChart) QBrush {
        return .{ .ptr = qtc.QChart_TitleBrush(@ptrCast(self.ptr)) };
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setBackgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBackgroundBrush(self: QPolarChart, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QChart_SetBackgroundBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#backgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn BackgroundBrush(self: QPolarChart) QBrush {
        return .{ .ptr = qtc.QChart_BackgroundBrush(@ptrCast(self.ptr)) };
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setBackgroundPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetBackgroundPen(self: QPolarChart, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QChart_SetBackgroundPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#backgroundPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn BackgroundPen(self: QPolarChart) QPen {
        return .{ .ptr = qtc.QChart_BackgroundPen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn SetBackgroundVisible(self: QPolarChart) void {
        qtc.QChart_SetBackgroundVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#isBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsBackgroundVisible(self: QPolarChart) bool {
        return qtc.QChart_IsBackgroundVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setDropShadowEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn SetDropShadowEnabled(self: QPolarChart) void {
        qtc.QChart_SetDropShadowEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#isDropShadowEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsDropShadowEnabled(self: QPolarChart) bool {
        return qtc.QChart_IsDropShadowEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setBackgroundRoundness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` diameter: f64 `
    ///
    pub fn SetBackgroundRoundness(self: QPolarChart, diameter: f64) void {
        qtc.QChart_SetBackgroundRoundness(@ptrCast(self.ptr), @bitCast(diameter));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#backgroundRoundness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn BackgroundRoundness(self: QPolarChart) f64 {
        return qtc.QChart_BackgroundRoundness(@ptrCast(self.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAnimationOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` options: flag of qchart_enums.AnimationOption `
    ///
    pub fn SetAnimationOptions(self: QPolarChart, options: i32) void {
        qtc.QChart_SetAnimationOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#animationOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` flag of qchart_enums.AnimationOption `
    ///
    pub fn AnimationOptions(self: QPolarChart) i32 {
        return qtc.QChart_AnimationOptions(@ptrCast(self.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAnimationDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SetAnimationDuration(self: QPolarChart, msecs: i32) void {
        qtc.QChart_SetAnimationDuration(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#animationDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn AnimationDuration(self: QPolarChart) i32 {
        return qtc.QChart_AnimationDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAnimationEasingCurve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` curve: QEasingCurve `
    ///
    pub fn SetAnimationEasingCurve(self: QPolarChart, curve: anytype) void {
        comptime _ = @TypeOf(curve)._is_QEasingCurve;
        qtc.QChart_SetAnimationEasingCurve(@ptrCast(self.ptr), @ptrCast(curve.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#animationEasingCurve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn AnimationEasingCurve(self: QPolarChart) QEasingCurve {
        return .{ .ptr = qtc.QChart_AnimationEasingCurve(@ptrCast(self.ptr)) };
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ZoomIn(self: QPolarChart) void {
        qtc.QChart_ZoomIn(@ptrCast(self.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ZoomOut(self: QPolarChart) void {
        qtc.QChart_ZoomOut(@ptrCast(self.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn ZoomIn2(self: QPolarChart, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QChart_ZoomIn2(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` factor: f64 `
    ///
    pub fn Zoom(self: QPolarChart, factor: f64) void {
        qtc.QChart_Zoom(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoomReset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ZoomReset(self: QPolarChart) void {
        qtc.QChart_ZoomReset(@ptrCast(self.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#isZoomed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsZoomed(self: QPolarChart) bool {
        return qtc.QChart_IsZoomed(@ptrCast(self.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Scroll(self: QPolarChart, dx: f64, dy: f64) void {
        qtc.QChart_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#legend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Legend(self: QPolarChart) QLegend {
        return .{ .ptr = qtc.QChart_Legend(@ptrCast(self.ptr)) };
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetMargins(self: QPolarChart, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QChart_SetMargins(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#margins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Margins(self: QPolarChart) QMargins {
        return .{ .ptr = qtc.QChart_Margins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn PlotArea(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QChart_PlotArea(@ptrCast(self.ptr)) };
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SetPlotArea(self: QPolarChart, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QChart_SetPlotArea(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetPlotAreaBackgroundBrush(self: QPolarChart, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QChart_SetPlotAreaBackgroundBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn PlotAreaBackgroundBrush(self: QPolarChart) QBrush {
        return .{ .ptr = qtc.QChart_PlotAreaBackgroundBrush(@ptrCast(self.ptr)) };
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetPlotAreaBackgroundPen(self: QPolarChart, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QChart_SetPlotAreaBackgroundPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn PlotAreaBackgroundPen(self: QPolarChart) QPen {
        return .{ .ptr = qtc.QChart_PlotAreaBackgroundPen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn SetPlotAreaBackgroundVisible(self: QPolarChart) void {
        qtc.QChart_SetPlotAreaBackgroundVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#isPlotAreaBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsPlotAreaBackgroundVisible(self: QPolarChart) bool {
        return qtc.QChart_IsPlotAreaBackgroundVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setLocalizeNumbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` localize: bool `
    ///
    pub fn SetLocalizeNumbers(self: QPolarChart, localize: bool) void {
        qtc.QChart_SetLocalizeNumbers(@ptrCast(self.ptr), localize);
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#localizeNumbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn LocalizeNumbers(self: QPolarChart) bool {
        return qtc.QChart_LocalizeNumbers(@ptrCast(self.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QPolarChart, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QChart_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Locale(self: QPolarChart) QLocale {
        return .{ .ptr = qtc.QChart_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#mapToValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` position: QPointF `
    ///
    pub fn MapToValue(self: QPolarChart, position: anytype) QPointF {
        comptime _ = @TypeOf(position)._is_QPointF;
        return .{ .ptr = qtc.QChart_MapToValue(@ptrCast(self.ptr), @ptrCast(position.ptr)) };
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#mapToPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` value: QPointF `
    ///
    pub fn MapToPosition(self: QPolarChart, value: anytype) QPointF {
        comptime _ = @TypeOf(value)._is_QPointF;
        return .{ .ptr = qtc.QChart_MapToPosition(@ptrCast(self.ptr), @ptrCast(value.ptr)) };
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#chartType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` qchart_enums.ChartType `
    ///
    pub fn ChartType(self: QPolarChart) i32 {
        return qtc.QChart_ChartType(@ptrCast(self.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` plotArea: QRectF `
    ///
    pub fn PlotAreaChanged(self: QPolarChart, plotArea: anytype) void {
        comptime _ = @TypeOf(plotArea)._is_QRectF;
        qtc.QChart_PlotAreaChanged(@ptrCast(self.ptr), @ptrCast(plotArea.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart, plotArea: QRectF) callconv(.c) void `
    ///
    pub fn OnPlotAreaChanged(self: QPolarChart, callback: *const fn (QPolarChart, QRectF) callconv(.c) void) void {
        qtc.QChart_Connect_PlotAreaChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAxisX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` axis: QAbstractAxis `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn SetAxisX2(self: QPolarChart, axis: anytype, series: anytype) void {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        comptime _ = @TypeOf(series)._is_QAbstractSeries;
        qtc.QChart_SetAxisX2(@ptrCast(self.ptr), @ptrCast(axis.ptr), @ptrCast(series.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAxisY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` axis: QAbstractAxis `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn SetAxisY2(self: QPolarChart, axis: anytype, series: anytype) void {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        comptime _ = @TypeOf(series)._is_QAbstractSeries;
        qtc.QChart_SetAxisY2(@ptrCast(self.ptr), @ptrCast(axis.ptr), @ptrCast(series.ptr));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#axisX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn AxisX1(self: QPolarChart, series: anytype) QAbstractAxis {
        comptime _ = @TypeOf(series)._is_QAbstractSeries;
        return .{ .ptr = qtc.QChart_AxisX1(@ptrCast(self.ptr), @ptrCast(series.ptr)) };
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#axisY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn AxisY1(self: QPolarChart, series: anytype) QAbstractAxis {
        comptime _ = @TypeOf(series)._is_QAbstractSeries;
        return .{ .ptr = qtc.QChart_AxisY1(@ptrCast(self.ptr), @ptrCast(series.ptr)) };
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` visible: bool `
    ///
    pub fn SetBackgroundVisible1(self: QPolarChart, visible: bool) void {
        qtc.QChart_SetBackgroundVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setDropShadowEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetDropShadowEnabled1(self: QPolarChart, enabled: bool) void {
        qtc.QChart_SetDropShadowEnabled1(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` visible: bool `
    ///
    pub fn SetPlotAreaBackgroundVisible1(self: QPolarChart, visible: bool) void {
        qtc.QChart_SetPlotAreaBackgroundVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#mapToValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` position: QPointF `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn MapToValue2(self: QPolarChart, position: anytype, series: anytype) QPointF {
        comptime _ = @TypeOf(position)._is_QPointF;
        comptime _ = @TypeOf(series)._is_QAbstractSeries;
        return .{ .ptr = qtc.QChart_MapToValue2(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(series.ptr)) };
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#mapToPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` value: QPointF `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn MapToPosition2(self: QPolarChart, value: anytype, series: anytype) QPointF {
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
    /// ` self: QPolarChart `
    ///
    pub fn Layout(self: QPolarChart) QGraphicsLayout {
        return .{ .ptr = qtc.QGraphicsWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` layout: QGraphicsLayout `
    ///
    pub fn SetLayout(self: QPolarChart, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QGraphicsLayout;
        qtc.QGraphicsWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn AdjustSize(self: QPolarChart) void {
        qtc.QGraphicsWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QPolarChart) i32 {
        return qtc.QGraphicsWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QPolarChart, direction: i32) void {
        qtc.QGraphicsWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn UnsetLayoutDirection(self: QPolarChart) void {
        qtc.QGraphicsWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Style(self: QPolarChart) QStyle {
        return .{ .ptr = qtc.QGraphicsWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QPolarChart, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QGraphicsWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Font(self: QPolarChart) QFont {
        return .{ .ptr = qtc.QGraphicsWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QPolarChart, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QGraphicsWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Palette(self: QPolarChart) QPalette {
        return .{ .ptr = qtc.QGraphicsWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QPolarChart, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QGraphicsWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn AutoFillBackground(self: QPolarChart) bool {
        return qtc.QGraphicsWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: QPolarChart, enabled: bool) void {
        qtc.QGraphicsWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` size: QSizeF `
    ///
    pub fn Resize(self: QPolarChart, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsWidget_Resize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn Resize2(self: QPolarChart, w: f64, h: f64) void {
        qtc.QGraphicsWidget_Resize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Size(self: QPolarChart) QSizeF {
        return .{ .ptr = qtc.QGraphicsWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetGeometry2(self: QPolarChart, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsWidget_SetGeometry2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Rect(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QGraphicsWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` left: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` right: f64 `
    ///
    /// ` bottom: f64 `
    ///
    pub fn SetContentsMargins(self: QPolarChart, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn SetContentsMargins2(self: QPolarChart, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        qtc.QGraphicsWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` left: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` right: f64 `
    ///
    /// ` bottom: f64 `
    ///
    pub fn SetWindowFrameMargins(self: QPolarChart, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsWidget_SetWindowFrameMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn SetWindowFrameMargins2(self: QPolarChart, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        qtc.QGraphicsWidget_SetWindowFrameMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn GetWindowFrameMargins(self: QPolarChart, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsWidget_GetWindowFrameMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn UnsetWindowFrameMargins(self: QPolarChart) void {
        qtc.QGraphicsWidget_UnsetWindowFrameMargins(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn WindowFrameGeometry(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QGraphicsWidget_WindowFrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn WindowFrameRect(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QGraphicsWidget_WindowFrameRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: QPolarChart) i32 {
        return qtc.QGraphicsWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: QPolarChart) i32 {
        return qtc.QGraphicsWidget_WindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` wFlags: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: QPolarChart, wFlags: i32) void {
        qtc.QGraphicsWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(wFlags));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsActiveWindow(self: QPolarChart) bool {
        return qtc.QGraphicsWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetWindowTitle(self: QPolarChart, title: []const u8) void {
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
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: QPolarChart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGraphicsWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: QPolarChart) i32 {
        return qtc.QGraphicsWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: QPolarChart, policy: i32) void {
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
    /// ` self: QPolarChart `
    ///
    pub fn FocusWidget(self: QPolarChart) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` sequence: QKeySequence `
    ///
    pub fn GrabShortcut(self: QPolarChart, sequence: anytype) i32 {
        comptime _ = @TypeOf(sequence)._is_QKeySequence;
        return qtc.QGraphicsWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(sequence.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: QPolarChart, id: i32) void {
        qtc.QGraphicsWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: QPolarChart, id: i32) void {
        qtc.QGraphicsWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: QPolarChart, id: i32) void {
        qtc.QGraphicsWidget_SetShortcutAutoRepeat(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: QPolarChart, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QGraphicsWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QPolarChart, actions: []QAction) void {
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
    /// ` self: QPolarChart `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QPolarChart, before: anytype, actions: []QAction) void {
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
    /// ` self: QPolarChart `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: QPolarChart, before: anytype, action: anytype) void {
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
    /// ` self: QPolarChart `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: QPolarChart, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QGraphicsWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: QPolarChart, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QGraphicsWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qpolarchart.Actions: Memory allocation failed");
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
    /// ` self: QPolarChart `
    ///
    /// ` attribute: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: QPolarChart, attribute: i32) void {
        qtc.QGraphicsWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(attribute));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` attribute: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: QPolarChart, attribute: i32) bool {
        return qtc.QGraphicsWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(attribute));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn GeometryChanged(self: QPolarChart) void {
        qtc.QGraphicsWidget_GeometryChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart) callconv(.c) void `
    ///
    pub fn OnGeometryChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsWidget_Connect_GeometryChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn LayoutChanged(self: QPolarChart) void {
        qtc.QGraphicsWidget_LayoutChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart) callconv(.c) void `
    ///
    pub fn OnLayoutChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsWidget_Connect_LayoutChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Close(self: QPolarChart) bool {
        return qtc.QGraphicsWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` sequence: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: QPolarChart, sequence: anytype, context: i32) i32 {
        comptime _ = @TypeOf(sequence)._is_QKeySequence;
        return qtc.QGraphicsWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(sequence.ptr), @bitCast(context));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` id: i32 `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetShortcutEnabled2(self: QPolarChart, id: i32, enabled: bool) void {
        qtc.QGraphicsWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enabled);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` id: i32 `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: QPolarChart, id: i32, enabled: bool) void {
        qtc.QGraphicsWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enabled);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` attribute: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: QPolarChart, attribute: i32, on: bool) void {
        qtc.QGraphicsWidget_SetAttribute2(@ptrCast(self.ptr), @bitCast(attribute), on);
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: QPolarChart, typeVal: i32) void {
        qtc.QGraphicsObject_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: QPolarChart, typeVal: i32) void {
        qtc.QGraphicsObject_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ParentChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_ParentChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart) callconv(.c) void `
    ///
    pub fn OnParentChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ParentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn OpacityChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_OpacityChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn VisibleChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_VisibleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn EnabledChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_EnabledChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart) callconv(.c) void `
    ///
    pub fn OnEnabledChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn XChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_XChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart) callconv(.c) void `
    ///
    pub fn OnXChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_XChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn YChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_YChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart) callconv(.c) void `
    ///
    pub fn OnYChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_YChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ZChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_ZChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart) callconv(.c) void `
    ///
    pub fn OnZChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ZChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn RotationChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_RotationChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart) callconv(.c) void `
    ///
    pub fn OnRotationChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_RotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ScaleChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_ScaleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart) callconv(.c) void `
    ///
    pub fn OnScaleChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ScaleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ChildrenChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_ChildrenChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart) callconv(.c) void `
    ///
    pub fn OnChildrenChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ChildrenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn WidthChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_WidthChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart) callconv(.c) void `
    ///
    pub fn OnWidthChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_WidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn HeightChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_HeightChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart) callconv(.c) void `
    ///
    pub fn OnHeightChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_HeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QPolarChart, typeVal: i32, flags: i32) void {
        qtc.QGraphicsObject_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QPolarChart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QPolarChart, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsWidgetType(self: QPolarChart) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsWindowType(self: QPolarChart) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsQuickItemType(self: QPolarChart) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn SignalsBlocked(self: QPolarChart) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QPolarChart, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Thread(self: QPolarChart) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QPolarChart, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QPolarChart, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QPolarChart, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QPolarChart, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QPolarChart, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QPolarChart, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qpolarchart.Children: Memory allocation failed");
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
    /// ` self: QPolarChart `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QPolarChart, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QPolarChart, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QPolarChart, obj: anytype) void {
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
    /// ` self: QPolarChart `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QPolarChart, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPolarChart `
    ///
    pub fn Disconnect3(self: QPolarChart) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QPolarChart, receiver: anytype) bool {
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
    /// ` self: QPolarChart `
    ///
    pub fn DumpObjectTree(self: QPolarChart) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn DumpObjectInfo(self: QPolarChart) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QPolarChart, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPolarChart `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QPolarChart, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QPolarChart, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qpolarchart.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qpolarchart.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QPolarChart `
    ///
    pub fn BindingStorage(self: QPolarChart) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn BindingStorage2(self: QPolarChart) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Destroyed(self: QPolarChart) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Parent(self: QPolarChart) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QPolarChart, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn DeleteLater(self: QPolarChart) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QPolarChart, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QPolarChart, time: i64, timerType: i32) i32 {
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
    /// ` self: QPolarChart `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QPolarChart, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPolarChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QPolarChart, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QPolarChart, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPolarChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QPolarChart, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPolarChart `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QPolarChart, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPolarChart `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QPolarChart, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QPolarChart, callback: *const fn (QPolarChart, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Scene(self: QPolarChart) QGraphicsScene {
        return .{ .ptr = qtc.QGraphicsItem_Scene(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ParentItem(self: QPolarChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_ParentItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn TopLevelItem(self: QPolarChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_TopLevelItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ParentObject(self: QPolarChart) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ParentObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ParentWidget(self: QPolarChart) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn TopLevelWidget(self: QPolarChart) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Window(self: QPolarChart) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Panel(self: QPolarChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_Panel(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` parent: QGraphicsItem `
    ///
    pub fn SetParentItem(self: QPolarChart, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QGraphicsItem;
        qtc.QGraphicsItem_SetParentItem(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildItems(self: QPolarChart, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_ChildItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qpolarchart.ChildItems: Memory allocation failed");
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
    /// ` self: QPolarChart `
    ///
    pub fn IsWidget(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsWidget(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsWindow(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsPanel(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsPanel(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ToGraphicsObject(self: QPolarChart) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ToGraphicsObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ToGraphicsObject2(self: QPolarChart) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ToGraphicsObject2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Group(self: QPolarChart) QGraphicsItemGroup {
        return .{ .ptr = qtc.QGraphicsItem_Group(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` group: QGraphicsItemGroup `
    ///
    pub fn SetGroup(self: QPolarChart, group: anytype) void {
        comptime _ = @TypeOf(group)._is_QGraphicsItemGroup;
        qtc.QGraphicsItem_SetGroup(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn Flags(self: QPolarChart) i32 {
        return qtc.QGraphicsItem_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` flag: qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn SetFlag(self: QPolarChart, flag: i32) void {
        qtc.QGraphicsItem_SetFlag(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` flags: flag of qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn SetFlags(self: QPolarChart, flags: i32) void {
        qtc.QGraphicsItem_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsitem_enums.CacheMode `
    ///
    pub fn CacheMode(self: QPolarChart) i32 {
        return qtc.QGraphicsItem_CacheMode(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` mode: qgraphicsitem_enums.CacheMode `
    ///
    pub fn SetCacheMode(self: QPolarChart, mode: i32) void {
        qtc.QGraphicsItem_SetCacheMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsitem_enums.PanelModality `
    ///
    pub fn PanelModality(self: QPolarChart) i32 {
        return qtc.QGraphicsItem_PanelModality(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` panelModality: qgraphicsitem_enums.PanelModality `
    ///
    pub fn SetPanelModality(self: QPolarChart, panelModality: i32) void {
        qtc.QGraphicsItem_SetPanelModality(@ptrCast(self.ptr), @bitCast(panelModality));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsBlockedByModalPanel(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QPolarChart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGraphicsItem_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QPolarChart, toolTip: []const u8) void {
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
    /// ` self: QPolarChart `
    ///
    pub fn Cursor(self: QPolarChart) QCursor {
        return .{ .ptr = qtc.QGraphicsItem_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QPolarChart, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QGraphicsItem_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn HasCursor(self: QPolarChart) bool {
        return qtc.QGraphicsItem_HasCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn UnsetCursor(self: QPolarChart) void {
        qtc.QGraphicsItem_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsVisible(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` parent: QGraphicsItem `
    ///
    pub fn IsVisibleTo(self: QPolarChart, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QGraphicsItem;
        return qtc.QGraphicsItem_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QPolarChart, visible: bool) void {
        qtc.QGraphicsItem_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Hide(self: QPolarChart) void {
        qtc.QGraphicsItem_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Show(self: QPolarChart) void {
        qtc.QGraphicsItem_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsEnabled(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QPolarChart, enabled: bool) void {
        qtc.QGraphicsItem_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsSelected(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsSelected(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` selected: bool `
    ///
    pub fn SetSelected(self: QPolarChart, selected: bool) void {
        qtc.QGraphicsItem_SetSelected(@ptrCast(self.ptr), selected);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn AcceptDrops(self: QPolarChart) bool {
        return qtc.QGraphicsItem_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: QPolarChart, on: bool) void {
        qtc.QGraphicsItem_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Opacity(self: QPolarChart) f64 {
        return qtc.QGraphicsItem_Opacity(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn EffectiveOpacity(self: QPolarChart) f64 {
        return qtc.QGraphicsItem_EffectiveOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: QPolarChart, opacity: f64) void {
        qtc.QGraphicsItem_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn GraphicsEffect(self: QPolarChart) QGraphicsEffect {
        return .{ .ptr = qtc.QGraphicsItem_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: QPolarChart, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QGraphicsItem_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn AcceptedMouseButtons(self: QPolarChart) i32 {
        return qtc.QGraphicsItem_AcceptedMouseButtons(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn SetAcceptedMouseButtons(self: QPolarChart, buttons: i32) void {
        qtc.QGraphicsItem_SetAcceptedMouseButtons(@ptrCast(self.ptr), @bitCast(buttons));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn AcceptHoverEvents(self: QPolarChart) bool {
        return qtc.QGraphicsItem_AcceptHoverEvents(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAcceptHoverEvents(self: QPolarChart, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptHoverEvents(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn AcceptTouchEvents(self: QPolarChart) bool {
        return qtc.QGraphicsItem_AcceptTouchEvents(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAcceptTouchEvents(self: QPolarChart, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptTouchEvents(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn FiltersChildEvents(self: QPolarChart) bool {
        return qtc.QGraphicsItem_FiltersChildEvents(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetFiltersChildEvents(self: QPolarChart, enabled: bool) void {
        qtc.QGraphicsItem_SetFiltersChildEvents(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn HandlesChildEvents(self: QPolarChart) bool {
        return qtc.QGraphicsItem_HandlesChildEvents(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetHandlesChildEvents(self: QPolarChart, enabled: bool) void {
        qtc.QGraphicsItem_SetHandlesChildEvents(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsActive(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsActive(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` active: bool `
    ///
    pub fn SetActive(self: QPolarChart, active: bool) void {
        qtc.QGraphicsItem_SetActive(@ptrCast(self.ptr), active);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn HasFocus(self: QPolarChart) bool {
        return qtc.QGraphicsItem_HasFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn SetFocus(self: QPolarChart) void {
        qtc.QGraphicsItem_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ClearFocus(self: QPolarChart) void {
        qtc.QGraphicsItem_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn FocusProxy(self: QPolarChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn SetFocusProxy(self: QPolarChart, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsItem_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn FocusItem(self: QPolarChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn FocusScopeItem(self: QPolarChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusScopeItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn GrabMouse(self: QPolarChart) void {
        qtc.QGraphicsItem_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn UngrabMouse(self: QPolarChart) void {
        qtc.QGraphicsItem_UngrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn GrabKeyboard(self: QPolarChart) void {
        qtc.QGraphicsItem_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn UngrabKeyboard(self: QPolarChart) void {
        qtc.QGraphicsItem_UngrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Pos(self: QPolarChart) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn X(self: QPolarChart) f64 {
        return qtc.QGraphicsItem_X(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` x: f64 `
    ///
    pub fn SetX(self: QPolarChart, x: f64) void {
        qtc.QGraphicsItem_SetX(@ptrCast(self.ptr), @bitCast(x));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Y(self: QPolarChart) f64 {
        return qtc.QGraphicsItem_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` y: f64 `
    ///
    pub fn SetY(self: QPolarChart, y: f64) void {
        qtc.QGraphicsItem_SetY(@ptrCast(self.ptr), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ScenePos(self: QPolarChart) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_ScenePos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetPos(self: QPolarChart, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsItem_SetPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn SetPos2(self: QPolarChart, x: f64, y: f64) void {
        qtc.QGraphicsItem_SetPos2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn MoveBy(self: QPolarChart, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_MoveBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn EnsureVisible(self: QPolarChart) void {
        qtc.QGraphicsItem_EnsureVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn EnsureVisible2(self: QPolarChart, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsItem_EnsureVisible2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Transform(self: QPolarChart) QTransform {
        return .{ .ptr = qtc.QGraphicsItem_Transform(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn SceneTransform(self: QPolarChart) QTransform {
        return .{ .ptr = qtc.QGraphicsItem_SceneTransform(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` viewportTransform: QTransform `
    ///
    pub fn DeviceTransform(self: QPolarChart, viewportTransform: anytype) QTransform {
        comptime _ = @TypeOf(viewportTransform)._is_QTransform;
        return .{ .ptr = qtc.QGraphicsItem_DeviceTransform(@ptrCast(self.ptr), @ptrCast(viewportTransform.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` other: QGraphicsItem `
    ///
    pub fn ItemTransform(self: QPolarChart, other: anytype) QTransform {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_ItemTransform(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` matrix: QTransform `
    ///
    pub fn SetTransform(self: QPolarChart, matrix: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QGraphicsItem_SetTransform(@ptrCast(self.ptr), @ptrCast(matrix.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ResetTransform(self: QPolarChart) void {
        qtc.QGraphicsItem_ResetTransform(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` angle: f64 `
    ///
    pub fn SetRotation(self: QPolarChart, angle: f64) void {
        qtc.QGraphicsItem_SetRotation(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Rotation(self: QPolarChart) f64 {
        return qtc.QGraphicsItem_Rotation(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` scale: f64 `
    ///
    pub fn SetScale(self: QPolarChart, scale: f64) void {
        qtc.QGraphicsItem_SetScale(@ptrCast(self.ptr), @bitCast(scale));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Scale(self: QPolarChart) f64 {
        return qtc.QGraphicsItem_Scale(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Transformations(self: QPolarChart, allocator: std.mem.Allocator) []QGraphicsTransform {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_Transformations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsTransform, _arr.len) catch @panic("qpolarchart.Transformations: Memory allocation failed");
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
    /// ` self: QPolarChart `
    ///
    /// ` transformations: []QGraphicsTransform `
    ///
    pub fn SetTransformations(self: QPolarChart, transformations: []QGraphicsTransform) void {
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
    /// ` self: QPolarChart `
    ///
    pub fn TransformOriginPoint(self: QPolarChart) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_TransformOriginPoint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` origin: QPointF `
    ///
    pub fn SetTransformOriginPoint(self: QPolarChart, origin: anytype) void {
        comptime _ = @TypeOf(origin)._is_QPointF;
        qtc.QGraphicsItem_SetTransformOriginPoint(@ptrCast(self.ptr), @ptrCast(origin.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` ax: f64 `
    ///
    /// ` ay: f64 `
    ///
    pub fn SetTransformOriginPoint2(self: QPolarChart, ax: f64, ay: f64) void {
        qtc.QGraphicsItem_SetTransformOriginPoint2(@ptrCast(self.ptr), @bitCast(ax), @bitCast(ay));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ZValue(self: QPolarChart) f64 {
        return qtc.QGraphicsItem_ZValue(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` z: f64 `
    ///
    pub fn SetZValue(self: QPolarChart, z: f64) void {
        qtc.QGraphicsItem_SetZValue(@ptrCast(self.ptr), @bitCast(z));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` sibling: QGraphicsItem `
    ///
    pub fn StackBefore(self: QPolarChart, sibling: anytype) void {
        comptime _ = @TypeOf(sibling)._is_QGraphicsItem;
        qtc.QGraphicsItem_StackBefore(@ptrCast(self.ptr), @ptrCast(sibling.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ChildrenBoundingRect(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_ChildrenBoundingRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn SceneBoundingRect(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_SceneBoundingRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsClipped(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsClipped(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ClipPath(self: QPolarChart) QPainterPath {
        return .{ .ptr = qtc.QGraphicsItem_ClipPath(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CollidingItems(self: QPolarChart, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qpolarchart.CollidingItems: Memory allocation failed");
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
    /// ` self: QPolarChart `
    ///
    pub fn IsObscured(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsObscured(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn IsObscured2(self: QPolarChart, x: f64, y: f64, w: f64, h: f64) bool {
        return qtc.QGraphicsItem_IsObscured2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` itemToDeviceTransform: QTransform `
    ///
    pub fn BoundingRegion(self: QPolarChart, itemToDeviceTransform: anytype) QRegion {
        comptime _ = @TypeOf(itemToDeviceTransform)._is_QTransform;
        return .{ .ptr = qtc.QGraphicsItem_BoundingRegion(@ptrCast(self.ptr), @ptrCast(itemToDeviceTransform.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn BoundingRegionGranularity(self: QPolarChart) f64 {
        return qtc.QGraphicsItem_BoundingRegionGranularity(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` granularity: f64 `
    ///
    pub fn SetBoundingRegionGranularity(self: QPolarChart, granularity: f64) void {
        qtc.QGraphicsItem_SetBoundingRegionGranularity(@ptrCast(self.ptr), @bitCast(granularity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Update(self: QPolarChart) void {
        qtc.QGraphicsItem_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` width: f64 `
    ///
    /// ` height: f64 `
    ///
    pub fn Update2(self: QPolarChart, x: f64, y: f64, width: f64, height: f64) void {
        qtc.QGraphicsItem_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapToItem(self: QPolarChart, item: anytype, point: anytype) QPointF {
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
    /// ` self: QPolarChart `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapToParent(self: QPolarChart, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToParent(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapToScene(self: QPolarChart, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToScene(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRectToItem(self: QPolarChart, item: anytype, rect: anytype) QRectF {
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
    /// ` self: QPolarChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRectToParent(self: QPolarChart, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToParent(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRectToScene(self: QPolarChart, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToScene(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapToItem4(self: QPolarChart, item: anytype, path: anytype) QPainterPath {
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
    /// ` self: QPolarChart `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapToParent4(self: QPolarChart, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToParent4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapToScene4(self: QPolarChart, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToScene4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapFromItem(self: QPolarChart, item: anytype, point: anytype) QPointF {
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
    /// ` self: QPolarChart `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapFromParent(self: QPolarChart, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapFromScene(self: QPolarChart, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRectFromItem(self: QPolarChart, item: anytype, rect: anytype) QRectF {
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
    /// ` self: QPolarChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRectFromParent(self: QPolarChart, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromParent(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRectFromScene(self: QPolarChart, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromScene(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapFromItem4(self: QPolarChart, item: anytype, path: anytype) QPainterPath {
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
    /// ` self: QPolarChart `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapFromParent4(self: QPolarChart, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapFromScene4(self: QPolarChart, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapToItem5(self: QPolarChart, item: anytype, x: f64, y: f64) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem5(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapToParent5(self: QPolarChart, x: f64, y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapToParent5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapToScene5(self: QPolarChart, x: f64, y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapToScene5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
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
    pub fn MapRectToItem2(self: QPolarChart, item: anytype, x: f64, y: f64, w: f64, h: f64) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectToParent2(self: QPolarChart, x: f64, y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectToParent2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectToScene2(self: QPolarChart, x: f64, y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectToScene2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapFromItem5(self: QPolarChart, item: anytype, x: f64, y: f64) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem5(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapFromParent5(self: QPolarChart, x: f64, y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapFromScene5(self: QPolarChart, x: f64, y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
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
    pub fn MapRectFromItem2(self: QPolarChart, item: anytype, x: f64, y: f64, w: f64, h: f64) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectFromParent2(self: QPolarChart, x: f64, y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromParent2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectFromScene2(self: QPolarChart, x: f64, y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromScene2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` child: QGraphicsItem `
    ///
    pub fn IsAncestorOf(self: QPolarChart, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QGraphicsItem;
        return qtc.QGraphicsItem_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` other: QGraphicsItem `
    ///
    pub fn CommonAncestorItem(self: QPolarChart, other: anytype) QGraphicsItem {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_CommonAncestorItem(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsUnderMouse(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsUnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` key: i32 `
    ///
    pub fn Data(self: QPolarChart, key: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsItem_Data(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` key: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetData(self: QPolarChart, key: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QGraphicsItem_SetData(@ptrCast(self.ptr), @bitCast(key), @ptrCast(value.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: QPolarChart) i32 {
        return qtc.QGraphicsItem_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: QPolarChart, hints: i32) void {
        qtc.QGraphicsItem_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` filterItem: QGraphicsItem `
    ///
    pub fn InstallSceneEventFilter(self: QPolarChart, filterItem: anytype) void {
        comptime _ = @TypeOf(filterItem)._is_QGraphicsItem;
        qtc.QGraphicsItem_InstallSceneEventFilter(@ptrCast(self.ptr), @ptrCast(filterItem.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` filterItem: QGraphicsItem `
    ///
    pub fn RemoveSceneEventFilter(self: QPolarChart, filterItem: anytype) void {
        comptime _ = @TypeOf(filterItem)._is_QGraphicsItem;
        qtc.QGraphicsItem_RemoveSceneEventFilter(@ptrCast(self.ptr), @ptrCast(filterItem.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` flag: qgraphicsitem_enums.GraphicsItemFlag `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetFlag2(self: QPolarChart, flag: i32, enabled: bool) void {
        qtc.QGraphicsItem_SetFlag2(@ptrCast(self.ptr), @bitCast(flag), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` mode: qgraphicsitem_enums.CacheMode `
    ///
    /// ` cacheSize: QSize `
    ///
    pub fn SetCacheMode2(self: QPolarChart, mode: i32, cacheSize: anytype) void {
        comptime _ = @TypeOf(cacheSize)._is_QSize;
        qtc.QGraphicsItem_SetCacheMode2(@ptrCast(self.ptr), @bitCast(mode), @ptrCast(cacheSize.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` blockingPanel: *QGraphicsItem.ptr `
    ///
    pub fn IsBlockedByModalPanel1(self: QPolarChart, blockingPanel: *?*anyopaque) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel1(@ptrCast(self.ptr), @ptrCast(blockingPanel));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` focusReason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus1(self: QPolarChart, focusReason: i32) void {
        qtc.QGraphicsItem_SetFocus1(@ptrCast(self.ptr), @bitCast(focusReason));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn EnsureVisible1(self: QPolarChart, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible1(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn EnsureVisible22(self: QPolarChart, rect: anytype, xmargin: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible22(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn EnsureVisible3(self: QPolarChart, rect: anytype, xmargin: i32, ymargin: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible3(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
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
    pub fn EnsureVisible5(self: QPolarChart, x: f64, y: f64, w: f64, h: f64, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
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
    pub fn EnsureVisible6(self: QPolarChart, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible6(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` other: QGraphicsItem `
    ///
    /// ` ok: *bool `
    ///
    pub fn ItemTransform2(self: QPolarChart, other: anytype, ok: *bool) QTransform {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_ItemTransform2(@ptrCast(self.ptr), @ptrCast(other.ptr), @ptrCast(ok)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` matrix: QTransform `
    ///
    /// ` combine: bool `
    ///
    pub fn SetTransform2(self: QPolarChart, matrix: anytype, combine: bool) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QGraphicsItem_SetTransform2(@ptrCast(self.ptr), @ptrCast(matrix.ptr), combine);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn CollidingItems1(self: QPolarChart, allocator: std.mem.Allocator, mode: i32) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems1(@ptrCast(self.ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qpolarchart.CollidingItems1: Memory allocation failed");
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
    /// ` self: QPolarChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn IsObscured1(self: QPolarChart, rect: anytype) bool {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return qtc.QGraphicsItem_IsObscured1(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn Update1(self: QPolarChart, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_Update1(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    /// ` rect: QRectF `
    ///
    pub fn Scroll3(self: QPolarChart, dx: f64, dy: f64, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_Scroll3(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` policy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QPolarChart, policy: anytype) void {
        comptime _ = @TypeOf(policy)._is_QSizePolicy;
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(policy.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QPolarChart, hPolicy: i32, vPolicy: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn SizePolicy(self: QPolarChart) QSizePolicy {
        return .{ .ptr = qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetMinimumSize(self: QPolarChart, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetMinimumSize2(self: QPolarChart, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn MinimumSize(self: QPolarChart) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` width: f64 `
    ///
    pub fn SetMinimumWidth(self: QPolarChart, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn MinimumWidth(self: QPolarChart) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` height: f64 `
    ///
    pub fn SetMinimumHeight(self: QPolarChart, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn MinimumHeight(self: QPolarChart) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetPreferredSize(self: QPolarChart, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetPreferredSize2(self: QPolarChart, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn PreferredSize(self: QPolarChart) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` width: f64 `
    ///
    pub fn SetPreferredWidth(self: QPolarChart, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn PreferredWidth(self: QPolarChart) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` height: f64 `
    ///
    pub fn SetPreferredHeight(self: QPolarChart, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn PreferredHeight(self: QPolarChart) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetMaximumSize(self: QPolarChart, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetMaximumSize2(self: QPolarChart, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn MaximumSize(self: QPolarChart) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` width: f64 `
    ///
    pub fn SetMaximumWidth(self: QPolarChart, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn MaximumWidth(self: QPolarChart) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` height: f64 `
    ///
    pub fn SetMaximumHeight(self: QPolarChart, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn MaximumHeight(self: QPolarChart) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Geometry(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ContentsRect(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    pub fn EffectiveSizeHint(self: QPolarChart, which: i32) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self.ptr), @bitCast(which)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ParentLayoutItem(self: QPolarChart) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` parent: QGraphicsLayoutItem `
    ///
    pub fn SetParentLayoutItem(self: QPolarChart, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsLayout(self: QPolarChart) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn GraphicsItem(self: QPolarChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn OwnedByLayout(self: QPolarChart) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` controlType: qsizepolicy_enums.ControlType `
    ///
    pub fn SetSizePolicy3(self: QPolarChart, hPolicy: i32, vPolicy: i32, controlType: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy), @bitCast(controlType));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn EffectiveSizeHint2(self: QPolarChart, which: i32, constraint: anytype) QSizeF {
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
    /// ` self: QPolarChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SetGeometry(self: QPolarChart, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPolarChart_SetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SuperSetGeometry(self: QPolarChart, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPolarChart_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, rect: QRectF) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: QPolarChart, callback: *const fn (QPolarChart, QRectF) callconv(.c) void) void {
        qtc.QPolarChart_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn GetContentsMargins(self: QPolarChart, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QPolarChart_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
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
    /// ` self: QPolarChart `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn SuperGetContentsMargins(self: QPolarChart, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QPolarChart_SuperGetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, left: *f64, top: *f64, right: *f64, bottom: *f64) callconv(.c) void `
    ///
    pub fn OnGetContentsMargins(self: QPolarChart, callback: *const fn (QPolarChart, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QPolarChart_OnGetContentsMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Type(self: QPolarChart) i32 {
        return qtc.QPolarChart_Type(@ptrCast(self.ptr));
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
    /// ` self: QPolarChart `
    ///
    pub fn SuperType(self: QPolarChart) i32 {
        return qtc.QPolarChart_SuperType(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnType(self: QPolarChart, callback: *const fn () callconv(.c) i32) void {
        qtc.QPolarChart_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionGraphicsItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn Paint(self: QPolarChart, painter: anytype, option: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QPolarChart_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(widget.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionGraphicsItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperPaint(self: QPolarChart, painter: anytype, option: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QPolarChart_SuperPaint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, painter: QPainter, option: QStyleOptionGraphicsItem, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnPaint(self: QPolarChart, callback: *const fn (QPolarChart, QPainter, QStyleOptionGraphicsItem, QWidget) callconv(.c) void) void {
        qtc.QPolarChart_OnPaint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionGraphicsItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn PaintWindowFrame(self: QPolarChart, painter: anytype, option: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QPolarChart_PaintWindowFrame(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(widget.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionGraphicsItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperPaintWindowFrame(self: QPolarChart, painter: anytype, option: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QPolarChart_SuperPaintWindowFrame(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, painter: QPainter, option: QStyleOptionGraphicsItem, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnPaintWindowFrame(self: QPolarChart, callback: *const fn (QPolarChart, QPainter, QStyleOptionGraphicsItem, QWidget) callconv(.c) void) void {
        qtc.QPolarChart_OnPaintWindowFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn BoundingRect(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QPolarChart_BoundingRect(@ptrCast(self.ptr)) };
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
    /// ` self: QPolarChart `
    ///
    pub fn SuperBoundingRect(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QPolarChart_SuperBoundingRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    pub fn OnBoundingRect(self: QPolarChart, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QPolarChart_OnBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Shape(self: QPolarChart) QPainterPath {
        return .{ .ptr = qtc.QPolarChart_Shape(@ptrCast(self.ptr)) };
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
    /// ` self: QPolarChart `
    ///
    pub fn SuperShape(self: QPolarChart) QPainterPath {
        return .{ .ptr = qtc.QPolarChart_SuperShape(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) QPainterPath `
    ///
    pub fn OnShape(self: QPolarChart, callback: *const fn () callconv(.c) QPainterPath) void {
        qtc.QPolarChart_OnShape(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` option: QStyleOption `
    ///
    pub fn InitStyleOption(self: QPolarChart, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        qtc.QPolarChart_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` option: QStyleOption `
    ///
    pub fn SuperInitStyleOption(self: QPolarChart, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        qtc.QPolarChart_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, option: QStyleOption) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: QPolarChart, callback: *const fn (QPolarChart, QStyleOption) callconv(.c) void) void {
        qtc.QPolarChart_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn SizeHint(self: QPolarChart, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QPolarChart_SizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
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
    /// ` self: QPolarChart `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn SuperSizeHint(self: QPolarChart, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QPolarChart_SuperSizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, which: qnamespace_enums.SizeHint, constraint: QSizeF) callconv(.c) QSizeF `
    ///
    pub fn OnSizeHint(self: QPolarChart, callback: *const fn (QPolarChart, i32, QSizeF) callconv(.c) QSizeF) void {
        qtc.QPolarChart_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn UpdateGeometry(self: QPolarChart) void {
        qtc.QPolarChart_UpdateGeometry(@ptrCast(self.ptr));
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
    /// ` self: QPolarChart `
    ///
    pub fn SuperUpdateGeometry(self: QPolarChart) void {
        qtc.QPolarChart_SuperUpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateGeometry(self: QPolarChart, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnUpdateGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` change: qgraphicsitem_enums.GraphicsItemChange `
    ///
    /// ` value: QVariant `
    ///
    pub fn ItemChange(self: QPolarChart, change: i32, value: anytype) QVariant {
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QPolarChart_ItemChange(@ptrCast(self.ptr), @bitCast(change), @ptrCast(value.ptr)) };
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
    /// ` self: QPolarChart `
    ///
    /// ` change: qgraphicsitem_enums.GraphicsItemChange `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperItemChange(self: QPolarChart, change: i32, value: anytype) QVariant {
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QPolarChart_SuperItemChange(@ptrCast(self.ptr), @bitCast(change), @ptrCast(value.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, change: qgraphicsitem_enums.GraphicsItemChange, value: QVariant) callconv(.c) QVariant `
    ///
    pub fn OnItemChange(self: QPolarChart, callback: *const fn (QPolarChart, i32, QVariant) callconv(.c) QVariant) void {
        qtc.QPolarChart_OnItemChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn PropertyChange(self: QPolarChart, propertyName: []const u8, value: anytype) QVariant {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QPolarChart_PropertyChange(@ptrCast(self.ptr), propertyName_str, @ptrCast(value.ptr)) };
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
    /// ` self: QPolarChart `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperPropertyChange(self: QPolarChart, propertyName: []const u8, value: anytype) QVariant {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QPolarChart_SuperPropertyChange(@ptrCast(self.ptr), propertyName_str, @ptrCast(value.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, propertyName: [*:0]const u8, value: QVariant) callconv(.c) QVariant `
    ///
    pub fn OnPropertyChange(self: QPolarChart, callback: *const fn (QPolarChart, [*:0]const u8, QVariant) callconv(.c) QVariant) void {
        qtc.QPolarChart_OnPropertyChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SceneEvent(self: QPolarChart, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPolarChart_SceneEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperSceneEvent(self: QPolarChart, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPolarChart_SuperSceneEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnSceneEvent(self: QPolarChart, callback: *const fn (QPolarChart, QEvent) callconv(.c) bool) void {
        qtc.QPolarChart_OnSceneEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` e: QEvent `
    ///
    pub fn WindowFrameEvent(self: QPolarChart, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QPolarChart_WindowFrameEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperWindowFrameEvent(self: QPolarChart, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QPolarChart_SuperWindowFrameEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnWindowFrameEvent(self: QPolarChart, callback: *const fn (QPolarChart, QEvent) callconv(.c) bool) void {
        qtc.QPolarChart_OnWindowFrameEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` pos: QPointF `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowFrameSection `
    ///
    pub fn WindowFrameSectionAt(self: QPolarChart, pos: anytype) i32 {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return qtc.QPolarChart_WindowFrameSectionAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` pos: QPointF `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowFrameSection `
    ///
    pub fn SuperWindowFrameSectionAt(self: QPolarChart, pos: anytype) i32 {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return qtc.QPolarChart_SuperWindowFrameSectionAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, pos: QPointF) callconv(.c) i32 `
    ///
    pub fn OnWindowFrameSectionAt(self: QPolarChart, callback: *const fn (QPolarChart, QPointF) callconv(.c) i32) void {
        qtc.QPolarChart_OnWindowFrameSectionAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QPolarChart, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPolarChart_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QPolarChart, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPolarChart_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QPolarChart, callback: *const fn (QPolarChart, QEvent) callconv(.c) bool) void {
        qtc.QPolarChart_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn ChangeEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPolarChart_ChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperChangeEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPolarChart_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: QPolarChart, callback: *const fn (QPolarChart, QEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QPolarChart_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QPolarChart_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: QPolarChart, callback: *const fn (QPolarChart, QCloseEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QPolarChart_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QPolarChart_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QPolarChart, callback: *const fn (QPolarChart, QFocusEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: QPolarChart, next: bool) bool {
        return qtc.QPolarChart_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: QPolarChart `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: QPolarChart, next: bool) bool {
        return qtc.QPolarChart_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: QPolarChart, callback: *const fn (QPolarChart, bool) callconv(.c) bool) void {
        qtc.QPolarChart_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QPolarChart_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QPolarChart_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QPolarChart, callback: *const fn (QPolarChart, QFocusEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QPolarChart_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QPolarChart_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: QPolarChart, callback: *const fn (QPolarChart, QHideEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneMoveEvent `
    ///
    pub fn MoveEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMoveEvent;
        qtc.QPolarChart_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMoveEvent;
        qtc.QPolarChart_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QGraphicsSceneMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneMoveEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn PolishEvent(self: QPolarChart) void {
        qtc.QPolarChart_PolishEvent(@ptrCast(self.ptr));
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
    /// ` self: QPolarChart `
    ///
    pub fn SuperPolishEvent(self: QPolarChart) void {
        qtc.QPolarChart_SuperPolishEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnPolishEvent(self: QPolarChart, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnPolishEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneResizeEvent `
    ///
    pub fn ResizeEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneResizeEvent;
        qtc.QPolarChart_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneResizeEvent `
    ///
    pub fn SuperResizeEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneResizeEvent;
        qtc.QPolarChart_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QGraphicsSceneResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneResizeEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QPolarChart_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QPolarChart_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: QPolarChart, callback: *const fn (QPolarChart, QShowEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneHoverEvent `
    ///
    pub fn HoverMoveEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHoverEvent;
        qtc.QPolarChart_HoverMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneHoverEvent `
    ///
    pub fn SuperHoverMoveEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHoverEvent;
        qtc.QPolarChart_SuperHoverMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn OnHoverMoveEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneHoverEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnHoverMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneHoverEvent `
    ///
    pub fn HoverLeaveEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHoverEvent;
        qtc.QPolarChart_HoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneHoverEvent `
    ///
    pub fn SuperHoverLeaveEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHoverEvent;
        qtc.QPolarChart_SuperHoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn OnHoverLeaveEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneHoverEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnHoverLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn GrabMouseEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPolarChart_GrabMouseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperGrabMouseEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPolarChart_SuperGrabMouseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QEvent) callconv(.c) void `
    ///
    pub fn OnGrabMouseEvent(self: QPolarChart, callback: *const fn (QPolarChart, QEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnGrabMouseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn UngrabMouseEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPolarChart_UngrabMouseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperUngrabMouseEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPolarChart_SuperUngrabMouseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QEvent) callconv(.c) void `
    ///
    pub fn OnUngrabMouseEvent(self: QPolarChart, callback: *const fn (QPolarChart, QEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnUngrabMouseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn GrabKeyboardEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPolarChart_GrabKeyboardEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperGrabKeyboardEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPolarChart_SuperGrabKeyboardEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QEvent) callconv(.c) void `
    ///
    pub fn OnGrabKeyboardEvent(self: QPolarChart, callback: *const fn (QPolarChart, QEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnGrabKeyboardEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn UngrabKeyboardEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPolarChart_UngrabKeyboardEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperUngrabKeyboardEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPolarChart_SuperUngrabKeyboardEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QEvent) callconv(.c) void `
    ///
    pub fn OnUngrabKeyboardEvent(self: QPolarChart, callback: *const fn (QPolarChart, QEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnUngrabKeyboardEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QPolarChart, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPolarChart_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QPolarChart, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPolarChart_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QPolarChart, callback: *const fn (QPolarChart, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPolarChart_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QPolarChart_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QPolarChart_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QPolarChart, callback: *const fn (QPolarChart, QTimerEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPolarChart_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPolarChart_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QPolarChart, callback: *const fn (QPolarChart, QChildEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPolarChart_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPolarChart_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QPolarChart, callback: *const fn (QPolarChart, QEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QPolarChart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPolarChart_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QPolarChart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPolarChart_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QPolarChart, callback: *const fn (QPolarChart, QMetaMethod) callconv(.c) void) void {
        qtc.QPolarChart_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QPolarChart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPolarChart_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QPolarChart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPolarChart_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QPolarChart, callback: *const fn (QPolarChart, QMetaMethod) callconv(.c) void) void {
        qtc.QPolarChart_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` phase: i32 `
    ///
    pub fn Advance(self: QPolarChart, phase: i32) void {
        qtc.QPolarChart_Advance(@ptrCast(self.ptr), @bitCast(phase));
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
    /// ` self: QPolarChart `
    ///
    /// ` phase: i32 `
    ///
    pub fn SuperAdvance(self: QPolarChart, phase: i32) void {
        qtc.QPolarChart_SuperAdvance(@ptrCast(self.ptr), @bitCast(phase));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, phase: i32) callconv(.c) void `
    ///
    pub fn OnAdvance(self: QPolarChart, callback: *const fn (QPolarChart, i32) callconv(.c) void) void {
        qtc.QPolarChart_OnAdvance(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` point: QPointF `
    ///
    pub fn Contains(self: QPolarChart, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QPolarChart_Contains(@ptrCast(self.ptr), @ptrCast(point.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` point: QPointF `
    ///
    pub fn SuperContains(self: QPolarChart, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QPolarChart_SuperContains(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, point: QPointF) callconv(.c) bool `
    ///
    pub fn OnContains(self: QPolarChart, callback: *const fn (QPolarChart, QPointF) callconv(.c) bool) void {
        qtc.QPolarChart_OnContains(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` other: QGraphicsItem `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn CollidesWithItem(self: QPolarChart, other: anytype, mode: i32) bool {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return qtc.QPolarChart_CollidesWithItem(@ptrCast(self.ptr), @ptrCast(other.ptr), @bitCast(mode));
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
    /// ` self: QPolarChart `
    ///
    /// ` other: QGraphicsItem `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn SuperCollidesWithItem(self: QPolarChart, other: anytype, mode: i32) bool {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return qtc.QPolarChart_SuperCollidesWithItem(@ptrCast(self.ptr), @ptrCast(other.ptr), @bitCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, other: QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool `
    ///
    pub fn OnCollidesWithItem(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsItem, i32) callconv(.c) bool) void {
        qtc.QPolarChart_OnCollidesWithItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn CollidesWithPath(self: QPolarChart, path: anytype, mode: i32) bool {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return qtc.QPolarChart_CollidesWithPath(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode));
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
    /// ` self: QPolarChart `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn SuperCollidesWithPath(self: QPolarChart, path: anytype, mode: i32) bool {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return qtc.QPolarChart_SuperCollidesWithPath(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, path: QPainterPath, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool `
    ///
    pub fn OnCollidesWithPath(self: QPolarChart, callback: *const fn (QPolarChart, QPainterPath, i32) callconv(.c) bool) void {
        qtc.QPolarChart_OnCollidesWithPath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn IsObscuredBy(self: QPolarChart, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return qtc.QPolarChart_IsObscuredBy(@ptrCast(self.ptr), @ptrCast(item.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn SuperIsObscuredBy(self: QPolarChart, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return qtc.QPolarChart_SuperIsObscuredBy(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, item: QGraphicsItem) callconv(.c) bool `
    ///
    pub fn OnIsObscuredBy(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsItem) callconv(.c) bool) void {
        qtc.QPolarChart_OnIsObscuredBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn OpaqueArea(self: QPolarChart) QPainterPath {
        return .{ .ptr = qtc.QPolarChart_OpaqueArea(@ptrCast(self.ptr)) };
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
    /// ` self: QPolarChart `
    ///
    pub fn SuperOpaqueArea(self: QPolarChart) QPainterPath {
        return .{ .ptr = qtc.QPolarChart_SuperOpaqueArea(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) QPainterPath `
    ///
    pub fn OnOpaqueArea(self: QPolarChart, callback: *const fn () callconv(.c) QPainterPath) void {
        qtc.QPolarChart_OnOpaqueArea(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` watched: QGraphicsItem `
    ///
    /// ` event: QEvent `
    ///
    pub fn SceneEventFilter(self: QPolarChart, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QGraphicsItem;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPolarChart_SceneEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` watched: QGraphicsItem `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperSceneEventFilter(self: QPolarChart, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QGraphicsItem;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPolarChart_SuperSceneEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, watched: QGraphicsItem, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnSceneEventFilter(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsItem, QEvent) callconv(.c) bool) void {
        qtc.QPolarChart_OnSceneEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneContextMenuEvent;
        qtc.QPolarChart_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneContextMenuEvent;
        qtc.QPolarChart_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QGraphicsSceneContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneContextMenuEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn DragEnterEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QPolarChart_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragEnterEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QPolarChart_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn DragLeaveEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QPolarChart_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QPolarChart_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn DragMoveEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QPolarChart_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragMoveEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QPolarChart_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn DropEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QPolarChart_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDropEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QPolarChart_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneHoverEvent `
    ///
    pub fn HoverEnterEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHoverEvent;
        qtc.QPolarChart_HoverEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneHoverEvent `
    ///
    pub fn SuperHoverEnterEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHoverEvent;
        qtc.QPolarChart_SuperHoverEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn OnHoverEnterEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneHoverEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnHoverEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QPolarChart_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QPolarChart_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QPolarChart, callback: *const fn (QPolarChart, QKeyEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QPolarChart_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QPolarChart_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QPolarChart, callback: *const fn (QPolarChart, QKeyEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn MousePressEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QPolarChart_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QPolarChart_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QPolarChart_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QPolarChart_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QPolarChart_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QPolarChart_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QPolarChart_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QPolarChart_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneWheelEvent `
    ///
    pub fn WheelEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneWheelEvent;
        qtc.QPolarChart_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QGraphicsSceneWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneWheelEvent;
        qtc.QPolarChart_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QGraphicsSceneWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneWheelEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QPolarChart_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QPolarChart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QPolarChart_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: QPolarChart, callback: *const fn (QPolarChart, QInputMethodEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QPolarChart, query: i32) QVariant {
        return .{ .ptr = qtc.QPolarChart_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
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
    /// ` self: QPolarChart `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QPolarChart, query: i32) QVariant {
        return .{ .ptr = qtc.QPolarChart_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: QPolarChart, callback: *const fn (QPolarChart, i32) callconv(.c) QVariant) void {
        qtc.QPolarChart_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    pub fn SupportsExtension(self: QPolarChart, extension: i32) bool {
        return qtc.QPolarChart_SupportsExtension(@ptrCast(self.ptr), @bitCast(extension));
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
    /// ` self: QPolarChart `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    pub fn SuperSupportsExtension(self: QPolarChart, extension: i32) bool {
        return qtc.QPolarChart_SuperSupportsExtension(@ptrCast(self.ptr), @bitCast(extension));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, extension: qgraphicsitem_enums.Extension) callconv(.c) bool `
    ///
    pub fn OnSupportsExtension(self: QPolarChart, callback: *const fn (QPolarChart, i32) callconv(.c) bool) void {
        qtc.QPolarChart_OnSupportsExtension(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    /// ` variant: QVariant `
    ///
    pub fn SetExtension(self: QPolarChart, extension: i32, variant: anytype) void {
        comptime _ = @TypeOf(variant)._is_QVariant;
        qtc.QPolarChart_SetExtension(@ptrCast(self.ptr), @bitCast(extension), @ptrCast(variant.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    /// ` variant: QVariant `
    ///
    pub fn SuperSetExtension(self: QPolarChart, extension: i32, variant: anytype) void {
        comptime _ = @TypeOf(variant)._is_QVariant;
        qtc.QPolarChart_SuperSetExtension(@ptrCast(self.ptr), @bitCast(extension), @ptrCast(variant.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, extension: qgraphicsitem_enums.Extension, variant: QVariant) callconv(.c) void `
    ///
    pub fn OnSetExtension(self: QPolarChart, callback: *const fn (QPolarChart, i32, QVariant) callconv(.c) void) void {
        qtc.QPolarChart_OnSetExtension(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` variant: QVariant `
    ///
    pub fn Extension(self: QPolarChart, variant: anytype) QVariant {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QPolarChart_Extension(@ptrCast(self.ptr), @ptrCast(variant.ptr)) };
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
    /// ` self: QPolarChart `
    ///
    /// ` variant: QVariant `
    ///
    pub fn SuperExtension(self: QPolarChart, variant: anytype) QVariant {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QPolarChart_SuperExtension(@ptrCast(self.ptr), @ptrCast(variant.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, variant: QVariant) callconv(.c) QVariant `
    ///
    pub fn OnExtension(self: QPolarChart, callback: *const fn (QPolarChart, QVariant) callconv(.c) QVariant) void {
        qtc.QPolarChart_OnExtension(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn IsEmpty(self: QPolarChart) bool {
        return qtc.QPolarChart_IsEmpty(@ptrCast(self.ptr));
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
    /// ` self: QPolarChart `
    ///
    pub fn SuperIsEmpty(self: QPolarChart) bool {
        return qtc.QPolarChart_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: QPolarChart, callback: *const fn () callconv(.c) bool) void {
        qtc.QPolarChart_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn UpdateMicroFocus(self: QPolarChart) void {
        qtc.QPolarChart_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QPolarChart `
    ///
    pub fn SuperUpdateMicroFocus(self: QPolarChart) void {
        qtc.QPolarChart_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: QPolarChart, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Sender(self: QPolarChart) QObject {
        return .{ .ptr = qtc.QPolarChart_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QPolarChart `
    ///
    pub fn SuperSender(self: QPolarChart) QObject {
        return .{ .ptr = qtc.QPolarChart_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QPolarChart, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPolarChart_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn SenderSignalIndex(self: QPolarChart) i32 {
        return qtc.QPolarChart_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPolarChart `
    ///
    pub fn SuperSenderSignalIndex(self: QPolarChart) i32 {
        return qtc.QPolarChart_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QPolarChart, callback: *const fn () callconv(.c) i32) void {
        qtc.QPolarChart_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QPolarChart, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPolarChart_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPolarChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QPolarChart, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPolarChart_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QPolarChart, callback: *const fn (QPolarChart, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPolarChart_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QPolarChart, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPolarChart_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QPolarChart, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPolarChart_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QPolarChart, callback: *const fn (QPolarChart, QMetaMethod) callconv(.c) bool) void {
        qtc.QPolarChart_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn AddToIndex(self: QPolarChart) void {
        qtc.QPolarChart_AddToIndex(@ptrCast(self.ptr));
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
    /// ` self: QPolarChart `
    ///
    pub fn SuperAddToIndex(self: QPolarChart) void {
        qtc.QPolarChart_SuperAddToIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAddToIndex(self: QPolarChart, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnAddToIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn RemoveFromIndex(self: QPolarChart) void {
        qtc.QPolarChart_RemoveFromIndex(@ptrCast(self.ptr));
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
    /// ` self: QPolarChart `
    ///
    pub fn SuperRemoveFromIndex(self: QPolarChart) void {
        qtc.QPolarChart_SuperRemoveFromIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRemoveFromIndex(self: QPolarChart, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnRemoveFromIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn PrepareGeometryChange(self: QPolarChart) void {
        qtc.QPolarChart_PrepareGeometryChange(@ptrCast(self.ptr));
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
    /// ` self: QPolarChart `
    ///
    pub fn SuperPrepareGeometryChange(self: QPolarChart) void {
        qtc.QPolarChart_SuperPrepareGeometryChange(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnPrepareGeometryChange(self: QPolarChart, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnPrepareGeometryChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn SetGraphicsItem(self: QPolarChart, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QPolarChart_SetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn SuperSetGraphicsItem(self: QPolarChart, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QPolarChart_SuperSetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, item: QGraphicsItem) callconv(.c) void `
    ///
    pub fn OnSetGraphicsItem(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsItem) callconv(.c) void) void {
        qtc.QPolarChart_OnSetGraphicsItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` ownedByLayout: bool `
    ///
    pub fn SetOwnedByLayout(self: QPolarChart, ownedByLayout: bool) void {
        qtc.QPolarChart_SetOwnedByLayout(@ptrCast(self.ptr), ownedByLayout);
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
    /// ` self: QPolarChart `
    ///
    /// ` ownedByLayout: bool `
    ///
    pub fn SuperSetOwnedByLayout(self: QPolarChart, ownedByLayout: bool) void {
        qtc.QPolarChart_SuperSetOwnedByLayout(@ptrCast(self.ptr), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, ownedByLayout: bool) callconv(.c) void `
    ///
    pub fn OnSetOwnedByLayout(self: QPolarChart, callback: *const fn (QPolarChart, bool) callconv(.c) void) void {
        qtc.QPolarChart_OnSetOwnedByLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QPolarChart, callback: *const fn (QPolarChart, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#dtor.QPolarChart)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPolarChart `
    ///
    pub fn Delete(self: QPolarChart) void {
        qtc.QPolarChart_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#public-types)
pub const enums = struct {
    pub const PolarOrientation = enum(i32) {
        pub const PolarOrientationRadial: i32 = 1;
        pub const PolarOrientationAngular: i32 = 2;
    };
};
