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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPolarChart object in C++ memory
    ///
    pub fn new() QPolarChart {
        return .{ .ptr = qtc.QPolarChart_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPolarChart object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QGraphicsItem `
    ///
    pub fn new2(_parent: anytype) QPolarChart {
        comptime _ = @TypeOf(_parent)._is_QGraphicsItem;
        return .{ .ptr = qtc.QPolarChart_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPolarChart object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QGraphicsItem `
    ///
    /// ` wFlags: flag of qnamespace_enums.WindowType `
    ///
    pub fn new3(_parent: anytype, wFlags: i32) QPolarChart {
        comptime _ = @TypeOf(_parent)._is_QGraphicsItem;
        return .{ .ptr = qtc.QPolarChart_new3(@ptrCast(_parent.ptr), @bitCast(wFlags)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn metaObject(self: QPolarChart) QMetaObject {
        return .{ .ptr = qtc.QPolarChart_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QPolarChart, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPolarChart_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPolarChart `
    ///
    pub fn superMetaObject(self: QPolarChart) QMetaObject {
        return .{ .ptr = qtc.QPolarChart_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QPolarChart, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPolarChart_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QPolarChart, callback: *const fn (QPolarChart, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPolarChart_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QPolarChart, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPolarChart_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QPolarChart, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPolarChart_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QPolarChart, callback: *const fn (QPolarChart, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPolarChart_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QPolarChart, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPolarChart_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPolarChart.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addAxis` instead
    ///
    pub const AddAxis = addAxis;

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
    pub fn addAxis(self: QPolarChart, axis: anytype, polarOrientation: i32) void {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        qtc.QPolarChart_AddAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr), @bitCast(polarOrientation));
    }

    /// ### DEPRECATED: Use `axes` instead
    ///
    pub const Axes = axes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn axes(self: QPolarChart, allocator: std.mem.Allocator) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QPolarChart_Axes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("QPolarChart.axes: Memory allocation failed");
        const _data_val: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `axisPolarOrientation` instead
    ///
    pub const AxisPolarOrientation = axisPolarOrientation;

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
    pub fn axisPolarOrientation(axis: anytype) i32 {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QPolarChart_AxisPolarOrientation(@ptrCast(axis.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPolarChart.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPolarChart.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `axes1` instead
    ///
    pub const Axes1 = axes1;

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
    pub fn axes1(self: QPolarChart, allocator: std.mem.Allocator, polarOrientation: i32) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QPolarChart_Axes1(@ptrCast(self.ptr), @bitCast(polarOrientation));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("QPolarChart.axes1: Memory allocation failed");
        const _data_val: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `axes2` instead
    ///
    pub const Axes2 = axes2;

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
    /// ` _series: QAbstractSeries `
    ///
    pub fn axes2(self: QPolarChart, allocator: std.mem.Allocator, polarOrientation: i32, _series: anytype) []QAbstractAxis {
        comptime _ = @TypeOf(_series)._is_QAbstractSeries;
        const _arr: qtc.libqt_list = qtc.QPolarChart_Axes2(@ptrCast(self.ptr), @bitCast(polarOrientation), @ptrCast(_series.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("QPolarChart.axes2: Memory allocation failed");
        const _data_val: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addSeries` instead
    ///
    pub const AddSeries = addSeries;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#addSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _series: QAbstractSeries `
    ///
    pub fn addSeries(self: QPolarChart, _series: anytype) void {
        comptime _ = @TypeOf(_series)._is_QAbstractSeries;
        qtc.QChart_AddSeries(@ptrCast(self.ptr), @ptrCast(_series.ptr));
    }

    /// ### DEPRECATED: Use `removeSeries` instead
    ///
    pub const RemoveSeries = removeSeries;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#removeSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _series: QAbstractSeries `
    ///
    pub fn removeSeries(self: QPolarChart, _series: anytype) void {
        comptime _ = @TypeOf(_series)._is_QAbstractSeries;
        qtc.QChart_RemoveSeries(@ptrCast(self.ptr), @ptrCast(_series.ptr));
    }

    /// ### DEPRECATED: Use `removeAllSeries` instead
    ///
    pub const RemoveAllSeries = removeAllSeries;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#removeAllSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn removeAllSeries(self: QPolarChart) void {
        qtc.QChart_RemoveAllSeries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `series` instead
    ///
    pub const Series = series;

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
    pub fn series(self: QPolarChart, allocator: std.mem.Allocator) []QAbstractSeries {
        const _arr: qtc.libqt_list = qtc.QChart_Series(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractSeries, _arr.len) catch @panic("QPolarChart.series: Memory allocation failed");
        const _data_val: [*]QtC.QAbstractSeries = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setAxisX` instead
    ///
    pub const SetAxisX = setAxisX;

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
    pub fn setAxisX(self: QPolarChart, axis: anytype) void {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        qtc.QChart_SetAxisX(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### DEPRECATED: Use `setAxisY` instead
    ///
    pub const SetAxisY = setAxisY;

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
    pub fn setAxisY(self: QPolarChart, axis: anytype) void {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        qtc.QChart_SetAxisY(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### DEPRECATED: Use `axisX` instead
    ///
    pub const AxisX = axisX;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#axisX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn axisX(self: QPolarChart) QAbstractAxis {
        return .{ .ptr = qtc.QChart_AxisX(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `axisY` instead
    ///
    pub const AxisY = axisY;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#axisY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn axisY(self: QPolarChart) QAbstractAxis {
        return .{ .ptr = qtc.QChart_AxisY(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `removeAxis` instead
    ///
    pub const RemoveAxis = removeAxis;

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
    pub fn removeAxis(self: QPolarChart, axis: anytype) void {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        qtc.QChart_RemoveAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### DEPRECATED: Use `createDefaultAxes` instead
    ///
    pub const CreateDefaultAxes = createDefaultAxes;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#createDefaultAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn createDefaultAxes(self: QPolarChart) void {
        qtc.QChart_CreateDefaultAxes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTheme` instead
    ///
    pub const SetTheme = setTheme;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _theme: qchart_enums.ChartTheme `
    ///
    pub fn setTheme(self: QPolarChart, _theme: i32) void {
        qtc.QChart_SetTheme(@ptrCast(self.ptr), @bitCast(_theme));
    }

    /// ### DEPRECATED: Use `theme` instead
    ///
    pub const Theme = theme;

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
    pub fn theme(self: QPolarChart) i32 {
        return qtc.QChart_Theme(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTitle` instead
    ///
    pub const SetTitle = setTitle;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn setTitle(self: QPolarChart, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QChart_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

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
    pub fn title(self: QPolarChart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QChart_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPolarChart.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTitleFont` instead
    ///
    pub const SetTitleFont = setTitleFont;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setTitleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _font: QFont `
    ///
    pub fn setTitleFont(self: QPolarChart, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QChart_SetTitleFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `titleFont` instead
    ///
    pub const TitleFont = titleFont;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#titleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn titleFont(self: QPolarChart) QFont {
        return .{ .ptr = qtc.QChart_TitleFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTitleBrush` instead
    ///
    pub const SetTitleBrush = setTitleBrush;

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
    pub fn setTitleBrush(self: QPolarChart, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QChart_SetTitleBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `titleBrush` instead
    ///
    pub const TitleBrush = titleBrush;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#titleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn titleBrush(self: QPolarChart) QBrush {
        return .{ .ptr = qtc.QChart_TitleBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBackgroundBrush` instead
    ///
    pub const SetBackgroundBrush = setBackgroundBrush;

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
    pub fn setBackgroundBrush(self: QPolarChart, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QChart_SetBackgroundBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `backgroundBrush` instead
    ///
    pub const BackgroundBrush = backgroundBrush;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#backgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn backgroundBrush(self: QPolarChart) QBrush {
        return .{ .ptr = qtc.QChart_BackgroundBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBackgroundPen` instead
    ///
    pub const SetBackgroundPen = setBackgroundPen;

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
    pub fn setBackgroundPen(self: QPolarChart, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QChart_SetBackgroundPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `backgroundPen` instead
    ///
    pub const BackgroundPen = backgroundPen;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#backgroundPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn backgroundPen(self: QPolarChart) QPen {
        return .{ .ptr = qtc.QChart_BackgroundPen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBackgroundVisible` instead
    ///
    pub const SetBackgroundVisible = setBackgroundVisible;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn setBackgroundVisible(self: QPolarChart) void {
        qtc.QChart_SetBackgroundVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBackgroundVisible` instead
    ///
    pub const IsBackgroundVisible = isBackgroundVisible;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#isBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn isBackgroundVisible(self: QPolarChart) bool {
        return qtc.QChart_IsBackgroundVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDropShadowEnabled` instead
    ///
    pub const SetDropShadowEnabled = setDropShadowEnabled;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setDropShadowEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn setDropShadowEnabled(self: QPolarChart) void {
        qtc.QChart_SetDropShadowEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDropShadowEnabled` instead
    ///
    pub const IsDropShadowEnabled = isDropShadowEnabled;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#isDropShadowEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn isDropShadowEnabled(self: QPolarChart) bool {
        return qtc.QChart_IsDropShadowEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBackgroundRoundness` instead
    ///
    pub const SetBackgroundRoundness = setBackgroundRoundness;

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
    pub fn setBackgroundRoundness(self: QPolarChart, diameter: f64) void {
        qtc.QChart_SetBackgroundRoundness(@ptrCast(self.ptr), @bitCast(diameter));
    }

    /// ### DEPRECATED: Use `backgroundRoundness` instead
    ///
    pub const BackgroundRoundness = backgroundRoundness;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#backgroundRoundness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn backgroundRoundness(self: QPolarChart) f64 {
        return qtc.QChart_BackgroundRoundness(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnimationOptions` instead
    ///
    pub const SetAnimationOptions = setAnimationOptions;

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
    pub fn setAnimationOptions(self: QPolarChart, options: i32) void {
        qtc.QChart_SetAnimationOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `animationOptions` instead
    ///
    pub const AnimationOptions = animationOptions;

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
    pub fn animationOptions(self: QPolarChart) i32 {
        return qtc.QChart_AnimationOptions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnimationDuration` instead
    ///
    pub const SetAnimationDuration = setAnimationDuration;

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
    pub fn setAnimationDuration(self: QPolarChart, msecs: i32) void {
        qtc.QChart_SetAnimationDuration(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `animationDuration` instead
    ///
    pub const AnimationDuration = animationDuration;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#animationDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn animationDuration(self: QPolarChart) i32 {
        return qtc.QChart_AnimationDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnimationEasingCurve` instead
    ///
    pub const SetAnimationEasingCurve = setAnimationEasingCurve;

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
    pub fn setAnimationEasingCurve(self: QPolarChart, curve: anytype) void {
        comptime _ = @TypeOf(curve)._is_QEasingCurve;
        qtc.QChart_SetAnimationEasingCurve(@ptrCast(self.ptr), @ptrCast(curve.ptr));
    }

    /// ### DEPRECATED: Use `animationEasingCurve` instead
    ///
    pub const AnimationEasingCurve = animationEasingCurve;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#animationEasingCurve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn animationEasingCurve(self: QPolarChart) QEasingCurve {
        return .{ .ptr = qtc.QChart_AnimationEasingCurve(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `zoomIn` instead
    ///
    pub const ZoomIn = zoomIn;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn zoomIn(self: QPolarChart) void {
        qtc.QChart_ZoomIn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `zoomOut` instead
    ///
    pub const ZoomOut = zoomOut;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn zoomOut(self: QPolarChart) void {
        qtc.QChart_ZoomOut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `zoomIn2` instead
    ///
    pub const ZoomIn2 = zoomIn2;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn zoomIn2(self: QPolarChart, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QChart_ZoomIn2(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `zoom` instead
    ///
    pub const Zoom = zoom;

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
    pub fn zoom(self: QPolarChart, factor: f64) void {
        qtc.QChart_Zoom(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### DEPRECATED: Use `zoomReset` instead
    ///
    pub const ZoomReset = zoomReset;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoomReset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn zoomReset(self: QPolarChart) void {
        qtc.QChart_ZoomReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isZoomed` instead
    ///
    pub const IsZoomed = isZoomed;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#isZoomed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn isZoomed(self: QPolarChart) bool {
        return qtc.QChart_IsZoomed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scroll` instead
    ///
    pub const Scroll = scroll;

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
    pub fn scroll(self: QPolarChart, dx: f64, dy: f64) void {
        qtc.QChart_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `legend` instead
    ///
    pub const Legend = legend;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#legend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn legend(self: QPolarChart) QLegend {
        return .{ .ptr = qtc.QChart_Legend(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMargins` instead
    ///
    pub const SetMargins = setMargins;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _margins: QMargins `
    ///
    pub fn setMargins(self: QPolarChart, _margins: anytype) void {
        comptime _ = @TypeOf(_margins)._is_QMargins;
        qtc.QChart_SetMargins(@ptrCast(self.ptr), @ptrCast(_margins.ptr));
    }

    /// ### DEPRECATED: Use `margins` instead
    ///
    pub const Margins = margins;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#margins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn margins(self: QPolarChart) QMargins {
        return .{ .ptr = qtc.QChart_Margins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `plotArea` instead
    ///
    pub const PlotArea = plotArea;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn plotArea(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QChart_PlotArea(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPlotArea` instead
    ///
    pub const SetPlotArea = setPlotArea;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn setPlotArea(self: QPolarChart, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QChart_SetPlotArea(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `setPlotAreaBackgroundBrush` instead
    ///
    pub const SetPlotAreaBackgroundBrush = setPlotAreaBackgroundBrush;

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
    pub fn setPlotAreaBackgroundBrush(self: QPolarChart, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QChart_SetPlotAreaBackgroundBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `plotAreaBackgroundBrush` instead
    ///
    pub const PlotAreaBackgroundBrush = plotAreaBackgroundBrush;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn plotAreaBackgroundBrush(self: QPolarChart) QBrush {
        return .{ .ptr = qtc.QChart_PlotAreaBackgroundBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPlotAreaBackgroundPen` instead
    ///
    pub const SetPlotAreaBackgroundPen = setPlotAreaBackgroundPen;

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
    pub fn setPlotAreaBackgroundPen(self: QPolarChart, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QChart_SetPlotAreaBackgroundPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `plotAreaBackgroundPen` instead
    ///
    pub const PlotAreaBackgroundPen = plotAreaBackgroundPen;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn plotAreaBackgroundPen(self: QPolarChart) QPen {
        return .{ .ptr = qtc.QChart_PlotAreaBackgroundPen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPlotAreaBackgroundVisible` instead
    ///
    pub const SetPlotAreaBackgroundVisible = setPlotAreaBackgroundVisible;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn setPlotAreaBackgroundVisible(self: QPolarChart) void {
        qtc.QChart_SetPlotAreaBackgroundVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPlotAreaBackgroundVisible` instead
    ///
    pub const IsPlotAreaBackgroundVisible = isPlotAreaBackgroundVisible;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#isPlotAreaBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn isPlotAreaBackgroundVisible(self: QPolarChart) bool {
        return qtc.QChart_IsPlotAreaBackgroundVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLocalizeNumbers` instead
    ///
    pub const SetLocalizeNumbers = setLocalizeNumbers;

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
    pub fn setLocalizeNumbers(self: QPolarChart, localize: bool) void {
        qtc.QChart_SetLocalizeNumbers(@ptrCast(self.ptr), localize);
    }

    /// ### DEPRECATED: Use `localizeNumbers` instead
    ///
    pub const LocalizeNumbers = localizeNumbers;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#localizeNumbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn localizeNumbers(self: QPolarChart) bool {
        return qtc.QChart_LocalizeNumbers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QPolarChart, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.QChart_SetLocale(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn locale(self: QPolarChart) QLocale {
        return .{ .ptr = qtc.QChart_Locale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToValue` instead
    ///
    pub const MapToValue = mapToValue;

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
    pub fn mapToValue(self: QPolarChart, position: anytype) QPointF {
        comptime _ = @TypeOf(position)._is_QPointF;
        return .{ .ptr = qtc.QChart_MapToValue(@ptrCast(self.ptr), @ptrCast(position.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToPosition` instead
    ///
    pub const MapToPosition = mapToPosition;

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
    pub fn mapToPosition(self: QPolarChart, value: anytype) QPointF {
        comptime _ = @TypeOf(value)._is_QPointF;
        return .{ .ptr = qtc.QChart_MapToPosition(@ptrCast(self.ptr), @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `chartType` instead
    ///
    pub const ChartType = chartType;

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
    pub fn chartType(self: QPolarChart) i32 {
        return qtc.QChart_ChartType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `plotAreaChanged` instead
    ///
    pub const PlotAreaChanged = plotAreaChanged;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _plotArea: QRectF `
    ///
    pub fn plotAreaChanged(self: QPolarChart, _plotArea: anytype) void {
        comptime _ = @TypeOf(_plotArea)._is_QRectF;
        qtc.QChart_PlotAreaChanged(@ptrCast(self.ptr), @ptrCast(_plotArea.ptr));
    }

    /// ### DEPRECATED: Use `onPlotAreaChanged` instead
    ///
    pub const OnPlotAreaChanged = onPlotAreaChanged;

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
    pub fn onPlotAreaChanged(self: QPolarChart, callback: *const fn (QPolarChart, QRectF) callconv(.c) void) void {
        qtc.QChart_Connect_PlotAreaChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setAxisX2` instead
    ///
    pub const SetAxisX2 = setAxisX2;

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
    /// ` _series: QAbstractSeries `
    ///
    pub fn setAxisX2(self: QPolarChart, axis: anytype, _series: anytype) void {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        comptime _ = @TypeOf(_series)._is_QAbstractSeries;
        qtc.QChart_SetAxisX2(@ptrCast(self.ptr), @ptrCast(axis.ptr), @ptrCast(_series.ptr));
    }

    /// ### DEPRECATED: Use `setAxisY2` instead
    ///
    pub const SetAxisY2 = setAxisY2;

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
    /// ` _series: QAbstractSeries `
    ///
    pub fn setAxisY2(self: QPolarChart, axis: anytype, _series: anytype) void {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        comptime _ = @TypeOf(_series)._is_QAbstractSeries;
        qtc.QChart_SetAxisY2(@ptrCast(self.ptr), @ptrCast(axis.ptr), @ptrCast(_series.ptr));
    }

    /// ### DEPRECATED: Use `axisX1` instead
    ///
    pub const AxisX1 = axisX1;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#axisX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _series: QAbstractSeries `
    ///
    pub fn axisX1(self: QPolarChart, _series: anytype) QAbstractAxis {
        comptime _ = @TypeOf(_series)._is_QAbstractSeries;
        return .{ .ptr = qtc.QChart_AxisX1(@ptrCast(self.ptr), @ptrCast(_series.ptr)) };
    }

    /// ### DEPRECATED: Use `axisY1` instead
    ///
    pub const AxisY1 = axisY1;

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#axisY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _series: QAbstractSeries `
    ///
    pub fn axisY1(self: QPolarChart, _series: anytype) QAbstractAxis {
        comptime _ = @TypeOf(_series)._is_QAbstractSeries;
        return .{ .ptr = qtc.QChart_AxisY1(@ptrCast(self.ptr), @ptrCast(_series.ptr)) };
    }

    /// ### DEPRECATED: Use `setBackgroundVisible1` instead
    ///
    pub const SetBackgroundVisible1 = setBackgroundVisible1;

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
    pub fn setBackgroundVisible1(self: QPolarChart, visible: bool) void {
        qtc.QChart_SetBackgroundVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setDropShadowEnabled1` instead
    ///
    pub const SetDropShadowEnabled1 = setDropShadowEnabled1;

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
    pub fn setDropShadowEnabled1(self: QPolarChart, enabled: bool) void {
        qtc.QChart_SetDropShadowEnabled1(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `setPlotAreaBackgroundVisible1` instead
    ///
    pub const SetPlotAreaBackgroundVisible1 = setPlotAreaBackgroundVisible1;

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
    pub fn setPlotAreaBackgroundVisible1(self: QPolarChart, visible: bool) void {
        qtc.QChart_SetPlotAreaBackgroundVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `mapToValue2` instead
    ///
    pub const MapToValue2 = mapToValue2;

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
    /// ` _series: QAbstractSeries `
    ///
    pub fn mapToValue2(self: QPolarChart, position: anytype, _series: anytype) QPointF {
        comptime _ = @TypeOf(position)._is_QPointF;
        comptime _ = @TypeOf(_series)._is_QAbstractSeries;
        return .{ .ptr = qtc.QChart_MapToValue2(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(_series.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToPosition2` instead
    ///
    pub const MapToPosition2 = mapToPosition2;

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
    /// ` _series: QAbstractSeries `
    ///
    pub fn mapToPosition2(self: QPolarChart, value: anytype, _series: anytype) QPointF {
        comptime _ = @TypeOf(value)._is_QPointF;
        comptime _ = @TypeOf(_series)._is_QAbstractSeries;
        return .{ .ptr = qtc.QChart_MapToPosition2(@ptrCast(self.ptr), @ptrCast(value.ptr), @ptrCast(_series.ptr)) };
    }

    /// ### DEPRECATED: Use `layout` instead
    ///
    pub const Layout = layout;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn layout(self: QPolarChart) QGraphicsLayout {
        return .{ .ptr = qtc.QGraphicsWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLayout` instead
    ///
    pub const SetLayout = setLayout;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _layout: QGraphicsLayout `
    ///
    pub fn setLayout(self: QPolarChart, _layout: anytype) void {
        comptime _ = @TypeOf(_layout)._is_QGraphicsLayout;
        qtc.QGraphicsWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `adjustSize` instead
    ///
    pub const AdjustSize = adjustSize;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn adjustSize(self: QPolarChart) void {
        qtc.QGraphicsWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

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
    pub fn layoutDirection(self: QPolarChart) i32 {
        return qtc.QGraphicsWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

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
    pub fn setLayoutDirection(self: QPolarChart, direction: i32) void {
        qtc.QGraphicsWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `unsetLayoutDirection` instead
    ///
    pub const UnsetLayoutDirection = unsetLayoutDirection;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn unsetLayoutDirection(self: QPolarChart) void {
        qtc.QGraphicsWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn style(self: QPolarChart) QStyle {
        return .{ .ptr = qtc.QGraphicsWidget_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: QPolarChart, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_QStyle;
        qtc.QGraphicsWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn font(self: QPolarChart) QFont {
        return .{ .ptr = qtc.QGraphicsWidget_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QPolarChart, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QGraphicsWidget_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn palette(self: QPolarChart) QPalette {
        return .{ .ptr = qtc.QGraphicsWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QPolarChart, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QGraphicsWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `autoFillBackground` instead
    ///
    pub const AutoFillBackground = autoFillBackground;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn autoFillBackground(self: QPolarChart) bool {
        return qtc.QGraphicsWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoFillBackground` instead
    ///
    pub const SetAutoFillBackground = setAutoFillBackground;

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
    pub fn setAutoFillBackground(self: QPolarChart, enabled: bool) void {
        qtc.QGraphicsWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `resize` instead
    ///
    pub const Resize = resize;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn resize(self: QPolarChart, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.QGraphicsWidget_Resize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `resize2` instead
    ///
    pub const Resize2 = resize2;

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
    pub fn resize2(self: QPolarChart, w: f64, h: f64) void {
        qtc.QGraphicsWidget_Resize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn size(self: QPolarChart) QSizeF {
        return .{ .ptr = qtc.QGraphicsWidget_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGeometry2` instead
    ///
    pub const SetGeometry2 = setGeometry2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setGeometry2(self: QPolarChart, _x: f64, _y: f64, w: f64, h: f64) void {
        qtc.QGraphicsWidget_SetGeometry2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn rect(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QGraphicsWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContentsMargins` instead
    ///
    pub const SetContentsMargins = setContentsMargins;

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
    pub fn setContentsMargins(self: QPolarChart, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `setContentsMargins2` instead
    ///
    pub const SetContentsMargins2 = setContentsMargins2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _margins: QMarginsF `
    ///
    pub fn setContentsMargins2(self: QPolarChart, _margins: anytype) void {
        comptime _ = @TypeOf(_margins)._is_QMarginsF;
        qtc.QGraphicsWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(_margins.ptr));
    }

    /// ### DEPRECATED: Use `setWindowFrameMargins` instead
    ///
    pub const SetWindowFrameMargins = setWindowFrameMargins;

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
    pub fn setWindowFrameMargins(self: QPolarChart, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsWidget_SetWindowFrameMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `setWindowFrameMargins2` instead
    ///
    pub const SetWindowFrameMargins2 = setWindowFrameMargins2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _margins: QMarginsF `
    ///
    pub fn setWindowFrameMargins2(self: QPolarChart, _margins: anytype) void {
        comptime _ = @TypeOf(_margins)._is_QMarginsF;
        qtc.QGraphicsWidget_SetWindowFrameMargins2(@ptrCast(self.ptr), @ptrCast(_margins.ptr));
    }

    /// ### DEPRECATED: Use `getWindowFrameMargins` instead
    ///
    pub const GetWindowFrameMargins = getWindowFrameMargins;

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
    pub fn getWindowFrameMargins(self: QPolarChart, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsWidget_GetWindowFrameMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `unsetWindowFrameMargins` instead
    ///
    pub const UnsetWindowFrameMargins = unsetWindowFrameMargins;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn unsetWindowFrameMargins(self: QPolarChart) void {
        qtc.QGraphicsWidget_UnsetWindowFrameMargins(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowFrameGeometry` instead
    ///
    pub const WindowFrameGeometry = windowFrameGeometry;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn windowFrameGeometry(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QGraphicsWidget_WindowFrameGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `windowFrameRect` instead
    ///
    pub const WindowFrameRect = windowFrameRect;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn windowFrameRect(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QGraphicsWidget_WindowFrameRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `windowFlags` instead
    ///
    pub const WindowFlags = windowFlags;

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
    pub fn windowFlags(self: QPolarChart) i32 {
        return qtc.QGraphicsWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowType` instead
    ///
    pub const WindowType = windowType;

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
    pub fn windowType(self: QPolarChart) i32 {
        return qtc.QGraphicsWidget_WindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowFlags` instead
    ///
    pub const SetWindowFlags = setWindowFlags;

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
    pub fn setWindowFlags(self: QPolarChart, wFlags: i32) void {
        qtc.QGraphicsWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(wFlags));
    }

    /// ### DEPRECATED: Use `isActiveWindow` instead
    ///
    pub const IsActiveWindow = isActiveWindow;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn isActiveWindow(self: QPolarChart) bool {
        return qtc.QGraphicsWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowTitle` instead
    ///
    pub const SetWindowTitle = setWindowTitle;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn setWindowTitle(self: QPolarChart, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QGraphicsWidget_SetWindowTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `windowTitle` instead
    ///
    pub const WindowTitle = windowTitle;

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
    pub fn windowTitle(self: QPolarChart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGraphicsWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPolarChart.windowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `focusPolicy` instead
    ///
    pub const FocusPolicy = focusPolicy;

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
    pub fn focusPolicy(self: QPolarChart) i32 {
        return qtc.QGraphicsWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocusPolicy` instead
    ///
    pub const SetFocusPolicy = setFocusPolicy;

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
    pub fn setFocusPolicy(self: QPolarChart, policy: i32) void {
        qtc.QGraphicsWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `setTabOrder` instead
    ///
    pub const SetTabOrder = setTabOrder;

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
    pub fn setTabOrder(first: anytype, second: anytype) void {
        comptime _ = @TypeOf(first)._is_QGraphicsWidget;
        comptime _ = @TypeOf(second)._is_QGraphicsWidget;
        qtc.QGraphicsWidget_SetTabOrder(@ptrCast(first.ptr), @ptrCast(second.ptr));
    }

    /// ### DEPRECATED: Use `focusWidget` instead
    ///
    pub const FocusWidget = focusWidget;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn focusWidget(self: QPolarChart) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `grabShortcut` instead
    ///
    pub const GrabShortcut = grabShortcut;

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
    pub fn grabShortcut(self: QPolarChart, sequence: anytype) i32 {
        comptime _ = @TypeOf(sequence)._is_QKeySequence;
        return qtc.QGraphicsWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(sequence.ptr));
    }

    /// ### DEPRECATED: Use `releaseShortcut` instead
    ///
    pub const ReleaseShortcut = releaseShortcut;

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
    pub fn releaseShortcut(self: QPolarChart, id: i32) void {
        qtc.QGraphicsWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `setShortcutEnabled` instead
    ///
    pub const SetShortcutEnabled = setShortcutEnabled;

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
    pub fn setShortcutEnabled(self: QPolarChart, id: i32) void {
        qtc.QGraphicsWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `setShortcutAutoRepeat` instead
    ///
    pub const SetShortcutAutoRepeat = setShortcutAutoRepeat;

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
    pub fn setShortcutAutoRepeat(self: QPolarChart, id: i32) void {
        qtc.QGraphicsWidget_SetShortcutAutoRepeat(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `addAction` instead
    ///
    pub const AddAction = addAction;

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
    pub fn addAction(self: QPolarChart, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QGraphicsWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `addActions` instead
    ///
    pub const AddActions = addActions;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: QPolarChart, _actions: []QAction) void {
        const actions_list = qtc.libqt_list{
            .len = _actions.len,
            .data = @ptrCast(_actions.ptr),
        };
        qtc.QGraphicsWidget_AddActions(@ptrCast(self.ptr), actions_list);
    }

    /// ### DEPRECATED: Use `insertActions` instead
    ///
    pub const InsertActions = insertActions;

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
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: QPolarChart, before: anytype, _actions: []QAction) void {
        comptime _ = @TypeOf(before)._is_QAction;
        const actions_list = qtc.libqt_list{
            .len = _actions.len,
            .data = @ptrCast(_actions.ptr),
        };
        qtc.QGraphicsWidget_InsertActions(@ptrCast(self.ptr), @ptrCast(before.ptr), actions_list);
    }

    /// ### DEPRECATED: Use `insertAction` instead
    ///
    pub const InsertAction = insertAction;

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
    pub fn insertAction(self: QPolarChart, before: anytype, action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QGraphicsWidget_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `removeAction` instead
    ///
    pub const RemoveAction = removeAction;

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
    pub fn removeAction(self: QPolarChart, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QGraphicsWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `actions` instead
    ///
    pub const Actions = actions;

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
    pub fn actions(self: QPolarChart, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QGraphicsWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("QPolarChart.actions: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

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
    pub fn setAttribute(self: QPolarChart, attribute: i32) void {
        qtc.QGraphicsWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(attribute));
    }

    /// ### DEPRECATED: Use `testAttribute` instead
    ///
    pub const TestAttribute = testAttribute;

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
    pub fn testAttribute(self: QPolarChart, attribute: i32) bool {
        return qtc.QGraphicsWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(attribute));
    }

    /// ### DEPRECATED: Use `geometryChanged` instead
    ///
    pub const GeometryChanged = geometryChanged;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn geometryChanged(self: QPolarChart) void {
        qtc.QGraphicsWidget_GeometryChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onGeometryChanged` instead
    ///
    pub const OnGeometryChanged = onGeometryChanged;

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
    pub fn onGeometryChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsWidget_Connect_GeometryChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutChanged` instead
    ///
    pub const LayoutChanged = layoutChanged;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn layoutChanged(self: QPolarChart) void {
        qtc.QGraphicsWidget_LayoutChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLayoutChanged` instead
    ///
    pub const OnLayoutChanged = onLayoutChanged;

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
    pub fn onLayoutChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsWidget_Connect_LayoutChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn close(self: QPolarChart) bool {
        return qtc.QGraphicsWidget_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabShortcut2` instead
    ///
    pub const GrabShortcut2 = grabShortcut2;

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
    pub fn grabShortcut2(self: QPolarChart, sequence: anytype, context: i32) i32 {
        comptime _ = @TypeOf(sequence)._is_QKeySequence;
        return qtc.QGraphicsWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(sequence.ptr), @bitCast(context));
    }

    /// ### DEPRECATED: Use `setShortcutEnabled2` instead
    ///
    pub const SetShortcutEnabled2 = setShortcutEnabled2;

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
    pub fn setShortcutEnabled2(self: QPolarChart, id: i32, enabled: bool) void {
        qtc.QGraphicsWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enabled);
    }

    /// ### DEPRECATED: Use `setShortcutAutoRepeat2` instead
    ///
    pub const SetShortcutAutoRepeat2 = setShortcutAutoRepeat2;

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
    pub fn setShortcutAutoRepeat2(self: QPolarChart, id: i32, enabled: bool) void {
        qtc.QGraphicsWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enabled);
    }

    /// ### DEPRECATED: Use `setAttribute2` instead
    ///
    pub const SetAttribute2 = setAttribute2;

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
    pub fn setAttribute2(self: QPolarChart, attribute: i32, on: bool) void {
        qtc.QGraphicsWidget_SetAttribute2(@ptrCast(self.ptr), @bitCast(attribute), on);
    }

    /// ### DEPRECATED: Use `grabGesture` instead
    ///
    pub const GrabGesture = grabGesture;

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
    pub fn grabGesture(self: QPolarChart, typeVal: i32) void {
        qtc.QGraphicsObject_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `ungrabGesture` instead
    ///
    pub const UngrabGesture = ungrabGesture;

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
    pub fn ungrabGesture(self: QPolarChart, typeVal: i32) void {
        qtc.QGraphicsObject_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `parentChanged` instead
    ///
    pub const ParentChanged = parentChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn parentChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_ParentChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onParentChanged` instead
    ///
    pub const OnParentChanged = onParentChanged;

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
    pub fn onParentChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ParentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `opacityChanged` instead
    ///
    pub const OpacityChanged = opacityChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn opacityChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_OpacityChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOpacityChanged` instead
    ///
    pub const OnOpacityChanged = onOpacityChanged;

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
    pub fn onOpacityChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn visibleChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_VisibleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

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
    pub fn onVisibleChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `enabledChanged` instead
    ///
    pub const EnabledChanged = enabledChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn enabledChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_EnabledChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEnabledChanged` instead
    ///
    pub const OnEnabledChanged = onEnabledChanged;

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
    pub fn onEnabledChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xChanged` instead
    ///
    pub const XChanged = xChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn xChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_XChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onXChanged` instead
    ///
    pub const OnXChanged = onXChanged;

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
    pub fn onXChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_XChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yChanged` instead
    ///
    pub const YChanged = yChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn yChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_YChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onYChanged` instead
    ///
    pub const OnYChanged = onYChanged;

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
    pub fn onYChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_YChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zChanged` instead
    ///
    pub const ZChanged = zChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn zChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_ZChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onZChanged` instead
    ///
    pub const OnZChanged = onZChanged;

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
    pub fn onZChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ZChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rotationChanged` instead
    ///
    pub const RotationChanged = rotationChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn rotationChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_RotationChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRotationChanged` instead
    ///
    pub const OnRotationChanged = onRotationChanged;

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
    pub fn onRotationChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_RotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scaleChanged` instead
    ///
    pub const ScaleChanged = scaleChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn scaleChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_ScaleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onScaleChanged` instead
    ///
    pub const OnScaleChanged = onScaleChanged;

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
    pub fn onScaleChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ScaleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childrenChanged` instead
    ///
    pub const ChildrenChanged = childrenChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn childrenChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_ChildrenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChildrenChanged` instead
    ///
    pub const OnChildrenChanged = onChildrenChanged;

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
    pub fn onChildrenChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ChildrenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widthChanged` instead
    ///
    pub const WidthChanged = widthChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn widthChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_WidthChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWidthChanged` instead
    ///
    pub const OnWidthChanged = onWidthChanged;

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
    pub fn onWidthChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_WidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightChanged` instead
    ///
    pub const HeightChanged = heightChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn heightChanged(self: QPolarChart) void {
        qtc.QGraphicsObject_HeightChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHeightChanged` instead
    ///
    pub const OnHeightChanged = onHeightChanged;

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
    pub fn onHeightChanged(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_HeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `grabGesture2` instead
    ///
    pub const GrabGesture2 = grabGesture2;

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
    /// ` _flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: QPolarChart, typeVal: i32, _flags: i32) void {
        qtc.QGraphicsObject_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(_flags));
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
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QPolarChart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPolarChart.objectName: Memory allocation failed");
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
    /// ` self: QPolarChart `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QPolarChart, name: []const u8) void {
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
    /// ` self: QPolarChart `
    ///
    pub fn isWidgetType(self: QPolarChart) bool {
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
    /// ` self: QPolarChart `
    ///
    pub fn isWindowType(self: QPolarChart) bool {
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
    /// ` self: QPolarChart `
    ///
    pub fn isQuickItemType(self: QPolarChart) bool {
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
    /// ` self: QPolarChart `
    ///
    pub fn signalsBlocked(self: QPolarChart) bool {
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
    /// ` self: QPolarChart `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QPolarChart, b: bool) bool {
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
    /// ` self: QPolarChart `
    ///
    pub fn thread(self: QPolarChart) QThread {
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
    /// ` self: QPolarChart `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QPolarChart, _thread: anytype) bool {
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
    /// ` self: QPolarChart `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QPolarChart, interval: i32) i32 {
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
    /// ` self: QPolarChart `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QPolarChart, time: i64) i32 {
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
    /// ` self: QPolarChart `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QPolarChart, id: i32) void {
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
    /// ` self: QPolarChart `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QPolarChart, id: i32) void {
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
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QPolarChart, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QPolarChart.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QPolarChart, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QPolarChart, filterObj: anytype) void {
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
    /// ` self: QPolarChart `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QPolarChart, obj: anytype) void {
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
    /// ` self: QPolarChart `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QPolarChart, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPolarChart `
    ///
    pub fn disconnect3(self: QPolarChart) bool {
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
    /// ` self: QPolarChart `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QPolarChart, receiver: anytype) bool {
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
    /// ` self: QPolarChart `
    ///
    pub fn dumpObjectTree(self: QPolarChart) void {
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
    /// ` self: QPolarChart `
    ///
    pub fn dumpObjectInfo(self: QPolarChart) void {
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
    /// ` self: QPolarChart `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QPolarChart, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPolarChart `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QPolarChart, name: [:0]const u8) QVariant {
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
    /// ` self: QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QPolarChart, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QPolarChart.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPolarChart.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QPolarChart `
    ///
    pub fn bindingStorage(self: QPolarChart) QBindingStorage {
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
    /// ` self: QPolarChart `
    ///
    pub fn bindingStorage2(self: QPolarChart) QBindingStorage {
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
    /// ` self: QPolarChart `
    ///
    pub fn destroyed(self: QPolarChart) void {
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
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QPolarChart, callback: *const fn (QPolarChart) callconv(.c) void) void {
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
    /// ` self: QPolarChart `
    ///
    pub fn parent(self: QPolarChart) QObject {
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
    /// ` self: QPolarChart `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QPolarChart, classname: [:0]const u8) bool {
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
    /// ` self: QPolarChart `
    ///
    pub fn deleteLater(self: QPolarChart) void {
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
    /// ` self: QPolarChart `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QPolarChart, interval: i32, timerType: i32) i32 {
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
    /// ` self: QPolarChart `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QPolarChart, time: i64, timerType: i32) i32 {
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
    /// ` self: QPolarChart `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QPolarChart, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPolarChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QPolarChart, signal: [:0]const u8) bool {
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
    /// ` self: QPolarChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QPolarChart, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPolarChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QPolarChart, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPolarChart `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QPolarChart, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPolarChart `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QPolarChart, param1: anytype) void {
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
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QPolarChart, callback: *const fn (QPolarChart, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scene` instead
    ///
    pub const Scene = scene;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn scene(self: QPolarChart) QGraphicsScene {
        return .{ .ptr = qtc.QGraphicsItem_Scene(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentItem` instead
    ///
    pub const ParentItem = parentItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn parentItem(self: QPolarChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_ParentItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `topLevelItem` instead
    ///
    pub const TopLevelItem = topLevelItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn topLevelItem(self: QPolarChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_TopLevelItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentObject` instead
    ///
    pub const ParentObject = parentObject;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn parentObject(self: QPolarChart) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ParentObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentWidget` instead
    ///
    pub const ParentWidget = parentWidget;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn parentWidget(self: QPolarChart) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `topLevelWidget` instead
    ///
    pub const TopLevelWidget = topLevelWidget;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn topLevelWidget(self: QPolarChart) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn window(self: QPolarChart) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `panel` instead
    ///
    pub const Panel = panel;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn panel(self: QPolarChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_Panel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setParentItem` instead
    ///
    pub const SetParentItem = setParentItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _parent: QGraphicsItem `
    ///
    pub fn setParentItem(self: QPolarChart, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QGraphicsItem;
        qtc.QGraphicsItem_SetParentItem(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `childItems` instead
    ///
    pub const ChildItems = childItems;

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
    pub fn childItems(self: QPolarChart, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_ChildItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QPolarChart.childItems: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isWidget` instead
    ///
    pub const IsWidget = isWidget;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn isWidget(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsWidget(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindow` instead
    ///
    pub const IsWindow = isWindow;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn isWindow(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsWindow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPanel` instead
    ///
    pub const IsPanel = isPanel;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn isPanel(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsPanel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toGraphicsObject` instead
    ///
    pub const ToGraphicsObject = toGraphicsObject;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn toGraphicsObject(self: QPolarChart) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ToGraphicsObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toGraphicsObject2` instead
    ///
    pub const ToGraphicsObject2 = toGraphicsObject2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn toGraphicsObject2(self: QPolarChart) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ToGraphicsObject2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn group(self: QPolarChart) QGraphicsItemGroup {
        return .{ .ptr = qtc.QGraphicsItem_Group(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGroup` instead
    ///
    pub const SetGroup = setGroup;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _group: QGraphicsItemGroup `
    ///
    pub fn setGroup(self: QPolarChart, _group: anytype) void {
        comptime _ = @TypeOf(_group)._is_QGraphicsItemGroup;
        qtc.QGraphicsItem_SetGroup(@ptrCast(self.ptr), @ptrCast(_group.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

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
    pub fn flags(self: QPolarChart) i32 {
        return qtc.QGraphicsItem_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag` instead
    ///
    pub const SetFlag = setFlag;

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
    pub fn setFlag(self: QPolarChart, flag: i32) void {
        qtc.QGraphicsItem_SetFlag(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _flags: flag of qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn setFlags(self: QPolarChart, _flags: i32) void {
        qtc.QGraphicsItem_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `cacheMode` instead
    ///
    pub const CacheMode = cacheMode;

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
    pub fn cacheMode(self: QPolarChart) i32 {
        return qtc.QGraphicsItem_CacheMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCacheMode` instead
    ///
    pub const SetCacheMode = setCacheMode;

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
    pub fn setCacheMode(self: QPolarChart, mode: i32) void {
        qtc.QGraphicsItem_SetCacheMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `panelModality` instead
    ///
    pub const PanelModality = panelModality;

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
    pub fn panelModality(self: QPolarChart) i32 {
        return qtc.QGraphicsItem_PanelModality(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPanelModality` instead
    ///
    pub const SetPanelModality = setPanelModality;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _panelModality: qgraphicsitem_enums.PanelModality `
    ///
    pub fn setPanelModality(self: QPolarChart, _panelModality: i32) void {
        qtc.QGraphicsItem_SetPanelModality(@ptrCast(self.ptr), @bitCast(_panelModality));
    }

    /// ### DEPRECATED: Use `isBlockedByModalPanel` instead
    ///
    pub const IsBlockedByModalPanel = isBlockedByModalPanel;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn isBlockedByModalPanel(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

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
    pub fn toolTip(self: QPolarChart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGraphicsItem_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPolarChart.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QPolarChart, _toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        qtc.QGraphicsItem_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// ### DEPRECATED: Use `cursor` instead
    ///
    pub const Cursor = cursor;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn cursor(self: QPolarChart) QCursor {
        return .{ .ptr = qtc.QGraphicsItem_Cursor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCursor` instead
    ///
    pub const SetCursor = setCursor;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QPolarChart, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QCursor;
        qtc.QGraphicsItem_SetCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `hasCursor` instead
    ///
    pub const HasCursor = hasCursor;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn hasCursor(self: QPolarChart) bool {
        return qtc.QGraphicsItem_HasCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `unsetCursor` instead
    ///
    pub const UnsetCursor = unsetCursor;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn unsetCursor(self: QPolarChart) void {
        qtc.QGraphicsItem_UnsetCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn isVisible(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisibleTo` instead
    ///
    pub const IsVisibleTo = isVisibleTo;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _parent: QGraphicsItem `
    ///
    pub fn isVisibleTo(self: QPolarChart, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QGraphicsItem;
        return qtc.QGraphicsItem_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

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
    pub fn setVisible(self: QPolarChart, visible: bool) void {
        qtc.QGraphicsItem_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn hide(self: QPolarChart) void {
        qtc.QGraphicsItem_Hide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn show(self: QPolarChart) void {
        qtc.QGraphicsItem_Show(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn isEnabled(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

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
    pub fn setEnabled(self: QPolarChart, enabled: bool) void {
        qtc.QGraphicsItem_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isSelected` instead
    ///
    pub const IsSelected = isSelected;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn isSelected(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsSelected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelected` instead
    ///
    pub const SetSelected = setSelected;

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
    pub fn setSelected(self: QPolarChart, selected: bool) void {
        qtc.QGraphicsItem_SetSelected(@ptrCast(self.ptr), selected);
    }

    /// ### DEPRECATED: Use `acceptDrops` instead
    ///
    pub const AcceptDrops = acceptDrops;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn acceptDrops(self: QPolarChart) bool {
        return qtc.QGraphicsItem_AcceptDrops(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAcceptDrops` instead
    ///
    pub const SetAcceptDrops = setAcceptDrops;

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
    pub fn setAcceptDrops(self: QPolarChart, on: bool) void {
        qtc.QGraphicsItem_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn opacity(self: QPolarChart) f64 {
        return qtc.QGraphicsItem_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `effectiveOpacity` instead
    ///
    pub const EffectiveOpacity = effectiveOpacity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn effectiveOpacity(self: QPolarChart) f64 {
        return qtc.QGraphicsItem_EffectiveOpacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QPolarChart, _opacity: f64) void {
        qtc.QGraphicsItem_SetOpacity(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `graphicsEffect` instead
    ///
    pub const GraphicsEffect = graphicsEffect;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn graphicsEffect(self: QPolarChart) QGraphicsEffect {
        return .{ .ptr = qtc.QGraphicsItem_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGraphicsEffect` instead
    ///
    pub const SetGraphicsEffect = setGraphicsEffect;

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
    pub fn setGraphicsEffect(self: QPolarChart, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QGraphicsItem_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// ### DEPRECATED: Use `acceptedMouseButtons` instead
    ///
    pub const AcceptedMouseButtons = acceptedMouseButtons;

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
    pub fn acceptedMouseButtons(self: QPolarChart) i32 {
        return qtc.QGraphicsItem_AcceptedMouseButtons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAcceptedMouseButtons` instead
    ///
    pub const SetAcceptedMouseButtons = setAcceptedMouseButtons;

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
    pub fn setAcceptedMouseButtons(self: QPolarChart, buttons: i32) void {
        qtc.QGraphicsItem_SetAcceptedMouseButtons(@ptrCast(self.ptr), @bitCast(buttons));
    }

    /// ### DEPRECATED: Use `acceptHoverEvents` instead
    ///
    pub const AcceptHoverEvents = acceptHoverEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn acceptHoverEvents(self: QPolarChart) bool {
        return qtc.QGraphicsItem_AcceptHoverEvents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAcceptHoverEvents` instead
    ///
    pub const SetAcceptHoverEvents = setAcceptHoverEvents;

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
    pub fn setAcceptHoverEvents(self: QPolarChart, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptHoverEvents(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `acceptTouchEvents` instead
    ///
    pub const AcceptTouchEvents = acceptTouchEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn acceptTouchEvents(self: QPolarChart) bool {
        return qtc.QGraphicsItem_AcceptTouchEvents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAcceptTouchEvents` instead
    ///
    pub const SetAcceptTouchEvents = setAcceptTouchEvents;

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
    pub fn setAcceptTouchEvents(self: QPolarChart, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptTouchEvents(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `filtersChildEvents` instead
    ///
    pub const FiltersChildEvents = filtersChildEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn filtersChildEvents(self: QPolarChart) bool {
        return qtc.QGraphicsItem_FiltersChildEvents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFiltersChildEvents` instead
    ///
    pub const SetFiltersChildEvents = setFiltersChildEvents;

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
    pub fn setFiltersChildEvents(self: QPolarChart, enabled: bool) void {
        qtc.QGraphicsItem_SetFiltersChildEvents(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `handlesChildEvents` instead
    ///
    pub const HandlesChildEvents = handlesChildEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn handlesChildEvents(self: QPolarChart) bool {
        return qtc.QGraphicsItem_HandlesChildEvents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHandlesChildEvents` instead
    ///
    pub const SetHandlesChildEvents = setHandlesChildEvents;

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
    pub fn setHandlesChildEvents(self: QPolarChart, enabled: bool) void {
        qtc.QGraphicsItem_SetHandlesChildEvents(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn isActive(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActive` instead
    ///
    pub const SetActive = setActive;

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
    pub fn setActive(self: QPolarChart, active: bool) void {
        qtc.QGraphicsItem_SetActive(@ptrCast(self.ptr), active);
    }

    /// ### DEPRECATED: Use `hasFocus` instead
    ///
    pub const HasFocus = hasFocus;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn hasFocus(self: QPolarChart) bool {
        return qtc.QGraphicsItem_HasFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocus` instead
    ///
    pub const SetFocus = setFocus;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn setFocus(self: QPolarChart) void {
        qtc.QGraphicsItem_SetFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearFocus` instead
    ///
    pub const ClearFocus = clearFocus;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn clearFocus(self: QPolarChart) void {
        qtc.QGraphicsItem_ClearFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `focusProxy` instead
    ///
    pub const FocusProxy = focusProxy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn focusProxy(self: QPolarChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFocusProxy` instead
    ///
    pub const SetFocusProxy = setFocusProxy;

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
    pub fn setFocusProxy(self: QPolarChart, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsItem_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `focusItem` instead
    ///
    pub const FocusItem = focusItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn focusItem(self: QPolarChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `focusScopeItem` instead
    ///
    pub const FocusScopeItem = focusScopeItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn focusScopeItem(self: QPolarChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusScopeItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `grabMouse` instead
    ///
    pub const GrabMouse = grabMouse;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn grabMouse(self: QPolarChart) void {
        qtc.QGraphicsItem_GrabMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ungrabMouse` instead
    ///
    pub const UngrabMouse = ungrabMouse;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ungrabMouse(self: QPolarChart) void {
        qtc.QGraphicsItem_UngrabMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabKeyboard` instead
    ///
    pub const GrabKeyboard = grabKeyboard;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn grabKeyboard(self: QPolarChart) void {
        qtc.QGraphicsItem_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ungrabKeyboard` instead
    ///
    pub const UngrabKeyboard = ungrabKeyboard;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ungrabKeyboard(self: QPolarChart) void {
        qtc.QGraphicsItem_UngrabKeyboard(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn pos(self: QPolarChart) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn x(self: QPolarChart) f64 {
        return qtc.QGraphicsItem_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _x: f64 `
    ///
    pub fn setX(self: QPolarChart, _x: f64) void {
        qtc.QGraphicsItem_SetX(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn y(self: QPolarChart) f64 {
        return qtc.QGraphicsItem_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _y: f64 `
    ///
    pub fn setY(self: QPolarChart, _y: f64) void {
        qtc.QGraphicsItem_SetY(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `scenePos` instead
    ///
    pub const ScenePos = scenePos;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn scenePos(self: QPolarChart) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPos` instead
    ///
    pub const SetPos = setPos;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setPos(self: QPolarChart, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsItem_SetPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `setPos2` instead
    ///
    pub const SetPos2 = setPos2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn setPos2(self: QPolarChart, _x: f64, _y: f64) void {
        qtc.QGraphicsItem_SetPos2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `moveBy` instead
    ///
    pub const MoveBy = moveBy;

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
    pub fn moveBy(self: QPolarChart, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_MoveBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `ensureVisible` instead
    ///
    pub const EnsureVisible = ensureVisible;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ensureVisible(self: QPolarChart) void {
        qtc.QGraphicsItem_EnsureVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ensureVisible2` instead
    ///
    pub const EnsureVisible2 = ensureVisible2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn ensureVisible2(self: QPolarChart, _x: f64, _y: f64, w: f64, h: f64) void {
        qtc.QGraphicsItem_EnsureVisible2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `transform` instead
    ///
    pub const Transform = transform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn transform(self: QPolarChart) QTransform {
        return .{ .ptr = qtc.QGraphicsItem_Transform(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sceneTransform` instead
    ///
    pub const SceneTransform = sceneTransform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn sceneTransform(self: QPolarChart) QTransform {
        return .{ .ptr = qtc.QGraphicsItem_SceneTransform(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deviceTransform` instead
    ///
    pub const DeviceTransform = deviceTransform;

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
    pub fn deviceTransform(self: QPolarChart, viewportTransform: anytype) QTransform {
        comptime _ = @TypeOf(viewportTransform)._is_QTransform;
        return .{ .ptr = qtc.QGraphicsItem_DeviceTransform(@ptrCast(self.ptr), @ptrCast(viewportTransform.ptr)) };
    }

    /// ### DEPRECATED: Use `itemTransform` instead
    ///
    pub const ItemTransform = itemTransform;

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
    pub fn itemTransform(self: QPolarChart, other: anytype) QTransform {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_ItemTransform(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `setTransform` instead
    ///
    pub const SetTransform = setTransform;

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
    pub fn setTransform(self: QPolarChart, matrix: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QGraphicsItem_SetTransform(@ptrCast(self.ptr), @ptrCast(matrix.ptr));
    }

    /// ### DEPRECATED: Use `resetTransform` instead
    ///
    pub const ResetTransform = resetTransform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn resetTransform(self: QPolarChart) void {
        qtc.QGraphicsItem_ResetTransform(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRotation` instead
    ///
    pub const SetRotation = setRotation;

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
    pub fn setRotation(self: QPolarChart, angle: f64) void {
        qtc.QGraphicsItem_SetRotation(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn rotation(self: QPolarChart) f64 {
        return qtc.QGraphicsItem_Rotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScale` instead
    ///
    pub const SetScale = setScale;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _scale: f64 `
    ///
    pub fn setScale(self: QPolarChart, _scale: f64) void {
        qtc.QGraphicsItem_SetScale(@ptrCast(self.ptr), @bitCast(_scale));
    }

    /// ### DEPRECATED: Use `scale` instead
    ///
    pub const Scale = scale;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn scale(self: QPolarChart) f64 {
        return qtc.QGraphicsItem_Scale(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `transformations` instead
    ///
    pub const Transformations = transformations;

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
    pub fn transformations(self: QPolarChart, allocator: std.mem.Allocator) []QGraphicsTransform {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_Transformations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsTransform, _arr.len) catch @panic("QPolarChart.transformations: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsTransform = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setTransformations` instead
    ///
    pub const SetTransformations = setTransformations;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _transformations: []QGraphicsTransform `
    ///
    pub fn setTransformations(self: QPolarChart, _transformations: []QGraphicsTransform) void {
        const transformations_list = qtc.libqt_list{
            .len = _transformations.len,
            .data = @ptrCast(_transformations.ptr),
        };
        qtc.QGraphicsItem_SetTransformations(@ptrCast(self.ptr), transformations_list);
    }

    /// ### DEPRECATED: Use `transformOriginPoint` instead
    ///
    pub const TransformOriginPoint = transformOriginPoint;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn transformOriginPoint(self: QPolarChart) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_TransformOriginPoint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTransformOriginPoint` instead
    ///
    pub const SetTransformOriginPoint = setTransformOriginPoint;

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
    pub fn setTransformOriginPoint(self: QPolarChart, origin: anytype) void {
        comptime _ = @TypeOf(origin)._is_QPointF;
        qtc.QGraphicsItem_SetTransformOriginPoint(@ptrCast(self.ptr), @ptrCast(origin.ptr));
    }

    /// ### DEPRECATED: Use `setTransformOriginPoint2` instead
    ///
    pub const SetTransformOriginPoint2 = setTransformOriginPoint2;

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
    pub fn setTransformOriginPoint2(self: QPolarChart, ax: f64, ay: f64) void {
        qtc.QGraphicsItem_SetTransformOriginPoint2(@ptrCast(self.ptr), @bitCast(ax), @bitCast(ay));
    }

    /// ### DEPRECATED: Use `zValue` instead
    ///
    pub const ZValue = zValue;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn zValue(self: QPolarChart) f64 {
        return qtc.QGraphicsItem_ZValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setZValue` instead
    ///
    pub const SetZValue = setZValue;

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
    pub fn setZValue(self: QPolarChart, z: f64) void {
        qtc.QGraphicsItem_SetZValue(@ptrCast(self.ptr), @bitCast(z));
    }

    /// ### DEPRECATED: Use `stackBefore` instead
    ///
    pub const StackBefore = stackBefore;

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
    pub fn stackBefore(self: QPolarChart, sibling: anytype) void {
        comptime _ = @TypeOf(sibling)._is_QGraphicsItem;
        qtc.QGraphicsItem_StackBefore(@ptrCast(self.ptr), @ptrCast(sibling.ptr));
    }

    /// ### DEPRECATED: Use `childrenBoundingRect` instead
    ///
    pub const ChildrenBoundingRect = childrenBoundingRect;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn childrenBoundingRect(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_ChildrenBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sceneBoundingRect` instead
    ///
    pub const SceneBoundingRect = sceneBoundingRect;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn sceneBoundingRect(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_SceneBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isClipped` instead
    ///
    pub const IsClipped = isClipped;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn isClipped(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsClipped(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clipPath` instead
    ///
    pub const ClipPath = clipPath;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn clipPath(self: QPolarChart) QPainterPath {
        return .{ .ptr = qtc.QGraphicsItem_ClipPath(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `collidingItems` instead
    ///
    pub const CollidingItems = collidingItems;

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
    pub fn collidingItems(self: QPolarChart, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QPolarChart.collidingItems: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isObscured` instead
    ///
    pub const IsObscured = isObscured;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn isObscured(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsObscured(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isObscured2` instead
    ///
    pub const IsObscured2 = isObscured2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn isObscured2(self: QPolarChart, _x: f64, _y: f64, w: f64, h: f64) bool {
        return qtc.QGraphicsItem_IsObscured2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `boundingRegion` instead
    ///
    pub const BoundingRegion = boundingRegion;

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
    pub fn boundingRegion(self: QPolarChart, itemToDeviceTransform: anytype) QRegion {
        comptime _ = @TypeOf(itemToDeviceTransform)._is_QTransform;
        return .{ .ptr = qtc.QGraphicsItem_BoundingRegion(@ptrCast(self.ptr), @ptrCast(itemToDeviceTransform.ptr)) };
    }

    /// ### DEPRECATED: Use `boundingRegionGranularity` instead
    ///
    pub const BoundingRegionGranularity = boundingRegionGranularity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn boundingRegionGranularity(self: QPolarChart) f64 {
        return qtc.QGraphicsItem_BoundingRegionGranularity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBoundingRegionGranularity` instead
    ///
    pub const SetBoundingRegionGranularity = setBoundingRegionGranularity;

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
    pub fn setBoundingRegionGranularity(self: QPolarChart, granularity: f64) void {
        qtc.QGraphicsItem_SetBoundingRegionGranularity(@ptrCast(self.ptr), @bitCast(granularity));
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn update(self: QPolarChart) void {
        qtc.QGraphicsItem_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `update2` instead
    ///
    pub const Update2 = update2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` width: f64 `
    ///
    /// ` height: f64 `
    ///
    pub fn update2(self: QPolarChart, _x: f64, _y: f64, width: f64, height: f64) void {
        qtc.QGraphicsItem_Update2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `mapToItem` instead
    ///
    pub const MapToItem = mapToItem;

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
    pub fn mapToItem(self: QPolarChart, item: anytype, point: anytype) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToParent` instead
    ///
    pub const MapToParent = mapToParent;

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
    pub fn mapToParent(self: QPolarChart, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToParent(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToScene` instead
    ///
    pub const MapToScene = mapToScene;

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
    pub fn mapToScene(self: QPolarChart, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToScene(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectToItem` instead
    ///
    pub const MapRectToItem = mapRectToItem;

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
    /// ` _rect: QRectF `
    ///
    pub fn mapRectToItem(self: QPolarChart, item: anytype, _rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectToParent` instead
    ///
    pub const MapRectToParent = mapRectToParent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn mapRectToParent(self: QPolarChart, _rect: anytype) QRectF {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToParent(@ptrCast(self.ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectToScene` instead
    ///
    pub const MapRectToScene = mapRectToScene;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn mapRectToScene(self: QPolarChart, _rect: anytype) QRectF {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToScene(@ptrCast(self.ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToItem4` instead
    ///
    pub const MapToItem4 = mapToItem4;

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
    pub fn mapToItem4(self: QPolarChart, item: anytype, path: anytype) QPainterPath {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem4(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToParent4` instead
    ///
    pub const MapToParent4 = mapToParent4;

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
    pub fn mapToParent4(self: QPolarChart, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToParent4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToScene4` instead
    ///
    pub const MapToScene4 = mapToScene4;

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
    pub fn mapToScene4(self: QPolarChart, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToScene4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromItem` instead
    ///
    pub const MapFromItem = mapFromItem;

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
    pub fn mapFromItem(self: QPolarChart, item: anytype, point: anytype) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromParent` instead
    ///
    pub const MapFromParent = mapFromParent;

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
    pub fn mapFromParent(self: QPolarChart, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromScene` instead
    ///
    pub const MapFromScene = mapFromScene;

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
    pub fn mapFromScene(self: QPolarChart, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectFromItem` instead
    ///
    pub const MapRectFromItem = mapRectFromItem;

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
    /// ` _rect: QRectF `
    ///
    pub fn mapRectFromItem(self: QPolarChart, item: anytype, _rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectFromParent` instead
    ///
    pub const MapRectFromParent = mapRectFromParent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn mapRectFromParent(self: QPolarChart, _rect: anytype) QRectF {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromParent(@ptrCast(self.ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectFromScene` instead
    ///
    pub const MapRectFromScene = mapRectFromScene;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn mapRectFromScene(self: QPolarChart, _rect: anytype) QRectF {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromScene(@ptrCast(self.ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromItem4` instead
    ///
    pub const MapFromItem4 = mapFromItem4;

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
    pub fn mapFromItem4(self: QPolarChart, item: anytype, path: anytype) QPainterPath {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem4(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromParent4` instead
    ///
    pub const MapFromParent4 = mapFromParent4;

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
    pub fn mapFromParent4(self: QPolarChart, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromScene4` instead
    ///
    pub const MapFromScene4 = mapFromScene4;

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
    pub fn mapFromScene4(self: QPolarChart, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToItem5` instead
    ///
    pub const MapToItem5 = mapToItem5;

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
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToItem5(self: QPolarChart, item: anytype, _x: f64, _y: f64) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem5(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapToParent5` instead
    ///
    pub const MapToParent5 = mapToParent5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToParent5(self: QPolarChart, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapToParent5(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapToScene5` instead
    ///
    pub const MapToScene5 = mapToScene5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToScene5(self: QPolarChart, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapToScene5(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapRectToItem2` instead
    ///
    pub const MapRectToItem2 = mapRectToItem2;

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
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectToItem2(self: QPolarChart, item: anytype, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapRectToParent2` instead
    ///
    pub const MapRectToParent2 = mapRectToParent2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectToParent2(self: QPolarChart, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectToParent2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapRectToScene2` instead
    ///
    pub const MapRectToScene2 = mapRectToScene2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectToScene2(self: QPolarChart, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectToScene2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapFromItem5` instead
    ///
    pub const MapFromItem5 = mapFromItem5;

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
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromItem5(self: QPolarChart, item: anytype, _x: f64, _y: f64) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem5(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapFromParent5` instead
    ///
    pub const MapFromParent5 = mapFromParent5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromParent5(self: QPolarChart, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent5(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapFromScene5` instead
    ///
    pub const MapFromScene5 = mapFromScene5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromScene5(self: QPolarChart, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene5(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapRectFromItem2` instead
    ///
    pub const MapRectFromItem2 = mapRectFromItem2;

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
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectFromItem2(self: QPolarChart, item: anytype, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapRectFromParent2` instead
    ///
    pub const MapRectFromParent2 = mapRectFromParent2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectFromParent2(self: QPolarChart, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromParent2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapRectFromScene2` instead
    ///
    pub const MapRectFromScene2 = mapRectFromScene2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectFromScene2(self: QPolarChart, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromScene2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `isAncestorOf` instead
    ///
    pub const IsAncestorOf = isAncestorOf;

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
    pub fn isAncestorOf(self: QPolarChart, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QGraphicsItem;
        return qtc.QGraphicsItem_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `commonAncestorItem` instead
    ///
    pub const CommonAncestorItem = commonAncestorItem;

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
    pub fn commonAncestorItem(self: QPolarChart, other: anytype) QGraphicsItem {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_CommonAncestorItem(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `isUnderMouse` instead
    ///
    pub const IsUnderMouse = isUnderMouse;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn isUnderMouse(self: QPolarChart) bool {
        return qtc.QGraphicsItem_IsUnderMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

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
    pub fn data(self: QPolarChart, key: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsItem_Data(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

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
    pub fn setData(self: QPolarChart, key: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QGraphicsItem_SetData(@ptrCast(self.ptr), @bitCast(key), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `inputMethodHints` instead
    ///
    pub const InputMethodHints = inputMethodHints;

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
    pub fn inputMethodHints(self: QPolarChart) i32 {
        return qtc.QGraphicsItem_InputMethodHints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInputMethodHints` instead
    ///
    pub const SetInputMethodHints = setInputMethodHints;

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
    pub fn setInputMethodHints(self: QPolarChart, hints: i32) void {
        qtc.QGraphicsItem_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `installSceneEventFilter` instead
    ///
    pub const InstallSceneEventFilter = installSceneEventFilter;

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
    pub fn installSceneEventFilter(self: QPolarChart, filterItem: anytype) void {
        comptime _ = @TypeOf(filterItem)._is_QGraphicsItem;
        qtc.QGraphicsItem_InstallSceneEventFilter(@ptrCast(self.ptr), @ptrCast(filterItem.ptr));
    }

    /// ### DEPRECATED: Use `removeSceneEventFilter` instead
    ///
    pub const RemoveSceneEventFilter = removeSceneEventFilter;

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
    pub fn removeSceneEventFilter(self: QPolarChart, filterItem: anytype) void {
        comptime _ = @TypeOf(filterItem)._is_QGraphicsItem;
        qtc.QGraphicsItem_RemoveSceneEventFilter(@ptrCast(self.ptr), @ptrCast(filterItem.ptr));
    }

    /// ### DEPRECATED: Use `setFlag2` instead
    ///
    pub const SetFlag2 = setFlag2;

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
    pub fn setFlag2(self: QPolarChart, flag: i32, enabled: bool) void {
        qtc.QGraphicsItem_SetFlag2(@ptrCast(self.ptr), @bitCast(flag), enabled);
    }

    /// ### DEPRECATED: Use `setCacheMode2` instead
    ///
    pub const SetCacheMode2 = setCacheMode2;

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
    pub fn setCacheMode2(self: QPolarChart, mode: i32, cacheSize: anytype) void {
        comptime _ = @TypeOf(cacheSize)._is_QSize;
        qtc.QGraphicsItem_SetCacheMode2(@ptrCast(self.ptr), @bitCast(mode), @ptrCast(cacheSize.ptr));
    }

    /// ### DEPRECATED: Use `isBlockedByModalPanel1` instead
    ///
    pub const IsBlockedByModalPanel1 = isBlockedByModalPanel1;

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
    pub fn isBlockedByModalPanel1(self: QPolarChart, blockingPanel: *?*anyopaque) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel1(@ptrCast(self.ptr), @ptrCast(blockingPanel));
    }

    /// ### DEPRECATED: Use `setFocus1` instead
    ///
    pub const SetFocus1 = setFocus1;

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
    pub fn setFocus1(self: QPolarChart, focusReason: i32) void {
        qtc.QGraphicsItem_SetFocus1(@ptrCast(self.ptr), @bitCast(focusReason));
    }

    /// ### DEPRECATED: Use `ensureVisible1` instead
    ///
    pub const EnsureVisible1 = ensureVisible1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn ensureVisible1(self: QPolarChart, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible1(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `ensureVisible22` instead
    ///
    pub const EnsureVisible22 = ensureVisible22;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _rect: QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn ensureVisible22(self: QPolarChart, _rect: anytype, xmargin: i32) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible22(@ptrCast(self.ptr), @ptrCast(_rect.ptr), @bitCast(xmargin));
    }

    /// ### DEPRECATED: Use `ensureVisible3` instead
    ///
    pub const EnsureVisible3 = ensureVisible3;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _rect: QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn ensureVisible3(self: QPolarChart, _rect: anytype, xmargin: i32, ymargin: i32) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible3(@ptrCast(self.ptr), @ptrCast(_rect.ptr), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// ### DEPRECATED: Use `ensureVisible5` instead
    ///
    pub const EnsureVisible5 = ensureVisible5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn ensureVisible5(self: QPolarChart, _x: f64, _y: f64, w: f64, h: f64, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible5(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h), @bitCast(xmargin));
    }

    /// ### DEPRECATED: Use `ensureVisible6` instead
    ///
    pub const EnsureVisible6 = ensureVisible6;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn ensureVisible6(self: QPolarChart, _x: f64, _y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible6(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// ### DEPRECATED: Use `itemTransform2` instead
    ///
    pub const ItemTransform2 = itemTransform2;

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
    pub fn itemTransform2(self: QPolarChart, other: anytype, ok: *bool) QTransform {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_ItemTransform2(@ptrCast(self.ptr), @ptrCast(other.ptr), @ptrCast(ok)) };
    }

    /// ### DEPRECATED: Use `setTransform2` instead
    ///
    pub const SetTransform2 = setTransform2;

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
    pub fn setTransform2(self: QPolarChart, matrix: anytype, combine: bool) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QGraphicsItem_SetTransform2(@ptrCast(self.ptr), @ptrCast(matrix.ptr), combine);
    }

    /// ### DEPRECATED: Use `collidingItems1` instead
    ///
    pub const CollidingItems1 = collidingItems1;

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
    pub fn collidingItems1(self: QPolarChart, allocator: std.mem.Allocator, mode: i32) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems1(@ptrCast(self.ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QPolarChart.collidingItems1: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isObscured1` instead
    ///
    pub const IsObscured1 = isObscured1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn isObscured1(self: QPolarChart, _rect: anytype) bool {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return qtc.QGraphicsItem_IsObscured1(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `update1` instead
    ///
    pub const Update1 = update1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn update1(self: QPolarChart, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QGraphicsItem_Update1(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `scroll3` instead
    ///
    pub const Scroll3 = scroll3;

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
    /// ` _rect: QRectF `
    ///
    pub fn scroll3(self: QPolarChart, dx: f64, dy: f64, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QGraphicsItem_Scroll3(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy` instead
    ///
    pub const SetSizePolicy = setSizePolicy;

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
    pub fn setSizePolicy(self: QPolarChart, policy: anytype) void {
        comptime _ = @TypeOf(policy)._is_QSizePolicy;
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(policy.ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy2` instead
    ///
    pub const SetSizePolicy2 = setSizePolicy2;

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
    pub fn setSizePolicy2(self: QPolarChart, hPolicy: i32, vPolicy: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy));
    }

    /// ### DEPRECATED: Use `sizePolicy` instead
    ///
    pub const SizePolicy = sizePolicy;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn sizePolicy(self: QPolarChart) QSizePolicy {
        return .{ .ptr = qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinimumSize` instead
    ///
    pub const SetMinimumSize = setMinimumSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn setMinimumSize(self: QPolarChart, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumSize2` instead
    ///
    pub const SetMinimumSize2 = setMinimumSize2;

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
    pub fn setMinimumSize2(self: QPolarChart, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn minimumSize(self: QPolarChart) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinimumWidth` instead
    ///
    pub const SetMinimumWidth = setMinimumWidth;

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
    pub fn setMinimumWidth(self: QPolarChart, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `minimumWidth` instead
    ///
    pub const MinimumWidth = minimumWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn minimumWidth(self: QPolarChart) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumHeight` instead
    ///
    pub const SetMinimumHeight = setMinimumHeight;

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
    pub fn setMinimumHeight(self: QPolarChart, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `minimumHeight` instead
    ///
    pub const MinimumHeight = minimumHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn minimumHeight(self: QPolarChart) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPreferredSize` instead
    ///
    pub const SetPreferredSize = setPreferredSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn setPreferredSize(self: QPolarChart, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setPreferredSize2` instead
    ///
    pub const SetPreferredSize2 = setPreferredSize2;

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
    pub fn setPreferredSize2(self: QPolarChart, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `preferredSize` instead
    ///
    pub const PreferredSize = preferredSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn preferredSize(self: QPolarChart) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPreferredWidth` instead
    ///
    pub const SetPreferredWidth = setPreferredWidth;

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
    pub fn setPreferredWidth(self: QPolarChart, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `preferredWidth` instead
    ///
    pub const PreferredWidth = preferredWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn preferredWidth(self: QPolarChart) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPreferredHeight` instead
    ///
    pub const SetPreferredHeight = setPreferredHeight;

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
    pub fn setPreferredHeight(self: QPolarChart, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `preferredHeight` instead
    ///
    pub const PreferredHeight = preferredHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn preferredHeight(self: QPolarChart) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize` instead
    ///
    pub const SetMaximumSize = setMaximumSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn setMaximumSize(self: QPolarChart, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize2` instead
    ///
    pub const SetMaximumSize2 = setMaximumSize2;

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
    pub fn setMaximumSize2(self: QPolarChart, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn maximumSize(self: QPolarChart) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMaximumWidth` instead
    ///
    pub const SetMaximumWidth = setMaximumWidth;

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
    pub fn setMaximumWidth(self: QPolarChart, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `maximumWidth` instead
    ///
    pub const MaximumWidth = maximumWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn maximumWidth(self: QPolarChart) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumHeight` instead
    ///
    pub const SetMaximumHeight = setMaximumHeight;

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
    pub fn setMaximumHeight(self: QPolarChart, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `maximumHeight` instead
    ///
    pub const MaximumHeight = maximumHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn maximumHeight(self: QPolarChart) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn geometry(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contentsRect` instead
    ///
    pub const ContentsRect = contentsRect;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn contentsRect(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `effectiveSizeHint` instead
    ///
    pub const EffectiveSizeHint = effectiveSizeHint;

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
    pub fn effectiveSizeHint(self: QPolarChart, which: i32) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self.ptr), @bitCast(which)) };
    }

    /// ### DEPRECATED: Use `parentLayoutItem` instead
    ///
    pub const ParentLayoutItem = parentLayoutItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn parentLayoutItem(self: QPolarChart) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setParentLayoutItem` instead
    ///
    pub const SetParentLayoutItem = setParentLayoutItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    /// ` _parent: QGraphicsLayoutItem `
    ///
    pub fn setParentLayoutItem(self: QPolarChart, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `isLayout` instead
    ///
    pub const IsLayout = isLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn isLayout(self: QPolarChart) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `graphicsItem` instead
    ///
    pub const GraphicsItem = graphicsItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn graphicsItem(self: QPolarChart) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownedByLayout` instead
    ///
    pub const OwnedByLayout = ownedByLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolarChart `
    ///
    pub fn ownedByLayout(self: QPolarChart) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy3` instead
    ///
    pub const SetSizePolicy3 = setSizePolicy3;

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
    pub fn setSizePolicy3(self: QPolarChart, hPolicy: i32, vPolicy: i32, controlType: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy), @bitCast(controlType));
    }

    /// ### DEPRECATED: Use `effectiveSizeHint2` instead
    ///
    pub const EffectiveSizeHint2 = effectiveSizeHint2;

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
    pub fn effectiveSizeHint2(self: QPolarChart, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

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
    /// ` _rect: QRectF `
    ///
    pub fn setGeometry(self: QPolarChart, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QPolarChart_SetGeometry(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `superSetGeometry` instead
    ///
    pub const SuperSetGeometry = superSetGeometry;

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
    /// ` _rect: QRectF `
    ///
    pub fn superSetGeometry(self: QPolarChart, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QPolarChart_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `onSetGeometry` instead
    ///
    pub const OnSetGeometry = onSetGeometry;

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
    pub fn onSetGeometry(self: QPolarChart, callback: *const fn (QPolarChart, QRectF) callconv(.c) void) void {
        qtc.QPolarChart_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `getContentsMargins` instead
    ///
    pub const GetContentsMargins = getContentsMargins;

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
    pub fn getContentsMargins(self: QPolarChart, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QPolarChart_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `superGetContentsMargins` instead
    ///
    pub const SuperGetContentsMargins = superGetContentsMargins;

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
    pub fn superGetContentsMargins(self: QPolarChart, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QPolarChart_SuperGetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `onGetContentsMargins` instead
    ///
    pub const OnGetContentsMargins = onGetContentsMargins;

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
    pub fn onGetContentsMargins(self: QPolarChart, callback: *const fn (QPolarChart, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QPolarChart_OnGetContentsMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QPolarChart) i32 {
        return qtc.QPolarChart_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

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
    pub fn superType(self: QPolarChart) i32 {
        return qtc.QPolarChart_SuperType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

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
    pub fn onType(self: QPolarChart, callback: *const fn () callconv(.c) i32) void {
        qtc.QPolarChart_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paint` instead
    ///
    pub const Paint = paint;

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
    pub fn paint(self: QPolarChart, painter: anytype, option: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QPolarChart_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `superPaint` instead
    ///
    pub const SuperPaint = superPaint;

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
    pub fn superPaint(self: QPolarChart, painter: anytype, option: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QPolarChart_SuperPaint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onPaint` instead
    ///
    pub const OnPaint = onPaint;

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
    pub fn onPaint(self: QPolarChart, callback: *const fn (QPolarChart, QPainter, QStyleOptionGraphicsItem, QWidget) callconv(.c) void) void {
        qtc.QPolarChart_OnPaint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintWindowFrame` instead
    ///
    pub const PaintWindowFrame = paintWindowFrame;

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
    pub fn paintWindowFrame(self: QPolarChart, painter: anytype, option: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QPolarChart_PaintWindowFrame(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `superPaintWindowFrame` instead
    ///
    pub const SuperPaintWindowFrame = superPaintWindowFrame;

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
    pub fn superPaintWindowFrame(self: QPolarChart, painter: anytype, option: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QPolarChart_SuperPaintWindowFrame(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onPaintWindowFrame` instead
    ///
    pub const OnPaintWindowFrame = onPaintWindowFrame;

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
    pub fn onPaintWindowFrame(self: QPolarChart, callback: *const fn (QPolarChart, QPainter, QStyleOptionGraphicsItem, QWidget) callconv(.c) void) void {
        qtc.QPolarChart_OnPaintWindowFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

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
    pub fn boundingRect(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QPolarChart_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superBoundingRect` instead
    ///
    pub const SuperBoundingRect = superBoundingRect;

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
    pub fn superBoundingRect(self: QPolarChart) QRectF {
        return .{ .ptr = qtc.QPolarChart_SuperBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onBoundingRect` instead
    ///
    pub const OnBoundingRect = onBoundingRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBoundingRect(self: QPolarChart, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QPolarChart_OnBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shape` instead
    ///
    pub const Shape = shape;

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
    pub fn shape(self: QPolarChart) QPainterPath {
        return .{ .ptr = qtc.QPolarChart_Shape(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superShape` instead
    ///
    pub const SuperShape = superShape;

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
    pub fn superShape(self: QPolarChart) QPainterPath {
        return .{ .ptr = qtc.QPolarChart_SuperShape(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onShape` instead
    ///
    pub const OnShape = onShape;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onShape(self: QPolarChart, callback: *const fn () callconv(.c) QPainterPath) void {
        qtc.QPolarChart_OnShape(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `initStyleOption` instead
    ///
    pub const InitStyleOption = initStyleOption;

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
    pub fn initStyleOption(self: QPolarChart, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        qtc.QPolarChart_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `superInitStyleOption` instead
    ///
    pub const SuperInitStyleOption = superInitStyleOption;

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
    pub fn superInitStyleOption(self: QPolarChart, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        qtc.QPolarChart_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `onInitStyleOption` instead
    ///
    pub const OnInitStyleOption = onInitStyleOption;

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
    pub fn onInitStyleOption(self: QPolarChart, callback: *const fn (QPolarChart, QStyleOption) callconv(.c) void) void {
        qtc.QPolarChart_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

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
    pub fn sizeHint(self: QPolarChart, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QPolarChart_SizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

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
    pub fn superSizeHint(self: QPolarChart, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QPolarChart_SuperSizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QPolarChart, callback: *const fn (QPolarChart, i32, QSizeF) callconv(.c) QSizeF) void {
        qtc.QPolarChart_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateGeometry` instead
    ///
    pub const UpdateGeometry = updateGeometry;

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
    pub fn updateGeometry(self: QPolarChart) void {
        qtc.QPolarChart_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateGeometry` instead
    ///
    pub const SuperUpdateGeometry = superUpdateGeometry;

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
    pub fn superUpdateGeometry(self: QPolarChart) void {
        qtc.QPolarChart_SuperUpdateGeometry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateGeometry` instead
    ///
    pub const OnUpdateGeometry = onUpdateGeometry;

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
    pub fn onUpdateGeometry(self: QPolarChart, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnUpdateGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemChange` instead
    ///
    pub const ItemChange = itemChange;

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
    pub fn itemChange(self: QPolarChart, change: i32, value: anytype) QVariant {
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QPolarChart_ItemChange(@ptrCast(self.ptr), @bitCast(change), @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `superItemChange` instead
    ///
    pub const SuperItemChange = superItemChange;

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
    pub fn superItemChange(self: QPolarChart, change: i32, value: anytype) QVariant {
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QPolarChart_SuperItemChange(@ptrCast(self.ptr), @bitCast(change), @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `onItemChange` instead
    ///
    pub const OnItemChange = onItemChange;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onItemChange(self: QPolarChart, callback: *const fn (QPolarChart, i32, QVariant) callconv(.c) QVariant) void {
        qtc.QPolarChart_OnItemChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `propertyChange` instead
    ///
    pub const PropertyChange = propertyChange;

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
    pub fn propertyChange(self: QPolarChart, propertyName: []const u8, value: anytype) QVariant {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QPolarChart_PropertyChange(@ptrCast(self.ptr), propertyName_str, @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `superPropertyChange` instead
    ///
    pub const SuperPropertyChange = superPropertyChange;

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
    pub fn superPropertyChange(self: QPolarChart, propertyName: []const u8, value: anytype) QVariant {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QPolarChart_SuperPropertyChange(@ptrCast(self.ptr), propertyName_str, @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `onPropertyChange` instead
    ///
    pub const OnPropertyChange = onPropertyChange;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onPropertyChange(self: QPolarChart, callback: *const fn (QPolarChart, [*:0]const u8, QVariant) callconv(.c) QVariant) void {
        qtc.QPolarChart_OnPropertyChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sceneEvent` instead
    ///
    pub const SceneEvent = sceneEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn sceneEvent(self: QPolarChart, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPolarChart_SceneEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superSceneEvent` instead
    ///
    pub const SuperSceneEvent = superSceneEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superSceneEvent(self: QPolarChart, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPolarChart_SuperSceneEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onSceneEvent` instead
    ///
    pub const OnSceneEvent = onSceneEvent;

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
    pub fn onSceneEvent(self: QPolarChart, callback: *const fn (QPolarChart, QEvent) callconv(.c) bool) void {
        qtc.QPolarChart_OnSceneEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowFrameEvent` instead
    ///
    pub const WindowFrameEvent = windowFrameEvent;

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
    pub fn windowFrameEvent(self: QPolarChart, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QPolarChart_WindowFrameEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superWindowFrameEvent` instead
    ///
    pub const SuperWindowFrameEvent = superWindowFrameEvent;

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
    pub fn superWindowFrameEvent(self: QPolarChart, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QPolarChart_SuperWindowFrameEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onWindowFrameEvent` instead
    ///
    pub const OnWindowFrameEvent = onWindowFrameEvent;

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
    pub fn onWindowFrameEvent(self: QPolarChart, callback: *const fn (QPolarChart, QEvent) callconv(.c) bool) void {
        qtc.QPolarChart_OnWindowFrameEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowFrameSectionAt` instead
    ///
    pub const WindowFrameSectionAt = windowFrameSectionAt;

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
    /// ` _pos: QPointF `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowFrameSection `
    ///
    pub fn windowFrameSectionAt(self: QPolarChart, _pos: anytype) i32 {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        return qtc.QPolarChart_WindowFrameSectionAt(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `superWindowFrameSectionAt` instead
    ///
    pub const SuperWindowFrameSectionAt = superWindowFrameSectionAt;

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
    /// ` _pos: QPointF `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowFrameSection `
    ///
    pub fn superWindowFrameSectionAt(self: QPolarChart, _pos: anytype) i32 {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        return qtc.QPolarChart_SuperWindowFrameSectionAt(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `onWindowFrameSectionAt` instead
    ///
    pub const OnWindowFrameSectionAt = onWindowFrameSectionAt;

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
    pub fn onWindowFrameSectionAt(self: QPolarChart, callback: *const fn (QPolarChart, QPointF) callconv(.c) i32) void {
        qtc.QPolarChart_OnWindowFrameSectionAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QPolarChart, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPolarChart_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QPolarChart, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPolarChart_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QPolarChart, callback: *const fn (QPolarChart, QEvent) callconv(.c) bool) void {
        qtc.QPolarChart_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changeEvent` instead
    ///
    pub const ChangeEvent = changeEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn changeEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPolarChart_ChangeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChangeEvent` instead
    ///
    pub const SuperChangeEvent = superChangeEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superChangeEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPolarChart_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChangeEvent` instead
    ///
    pub const OnChangeEvent = onChangeEvent;

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
    pub fn onChangeEvent(self: QPolarChart, callback: *const fn (QPolarChart, QEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeEvent` instead
    ///
    pub const CloseEvent = closeEvent;

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
    /// ` _event: QCloseEvent `
    ///
    pub fn closeEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QPolarChart_CloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCloseEvent` instead
    ///
    pub const SuperCloseEvent = superCloseEvent;

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
    /// ` _event: QCloseEvent `
    ///
    pub fn superCloseEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QPolarChart_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCloseEvent` instead
    ///
    pub const OnCloseEvent = onCloseEvent;

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
    pub fn onCloseEvent(self: QPolarChart, callback: *const fn (QPolarChart, QCloseEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

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
    /// ` _event: QFocusEvent `
    ///
    pub fn focusInEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QPolarChart_FocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

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
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QPolarChart_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

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
    pub fn onFocusInEvent(self: QPolarChart, callback: *const fn (QPolarChart, QFocusEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusNextPrevChild` instead
    ///
    pub const FocusNextPrevChild = focusNextPrevChild;

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
    pub fn focusNextPrevChild(self: QPolarChart, next: bool) bool {
        return qtc.QPolarChart_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `superFocusNextPrevChild` instead
    ///
    pub const SuperFocusNextPrevChild = superFocusNextPrevChild;

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
    pub fn superFocusNextPrevChild(self: QPolarChart, next: bool) bool {
        return qtc.QPolarChart_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `onFocusNextPrevChild` instead
    ///
    pub const OnFocusNextPrevChild = onFocusNextPrevChild;

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
    pub fn onFocusNextPrevChild(self: QPolarChart, callback: *const fn (QPolarChart, bool) callconv(.c) bool) void {
        qtc.QPolarChart_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

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
    /// ` _event: QFocusEvent `
    ///
    pub fn focusOutEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QPolarChart_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

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
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QPolarChart_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

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
    pub fn onFocusOutEvent(self: QPolarChart, callback: *const fn (QPolarChart, QFocusEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hideEvent` instead
    ///
    pub const HideEvent = hideEvent;

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
    /// ` _event: QHideEvent `
    ///
    pub fn hideEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QPolarChart_HideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superHideEvent` instead
    ///
    pub const SuperHideEvent = superHideEvent;

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
    /// ` _event: QHideEvent `
    ///
    pub fn superHideEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QPolarChart_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHideEvent` instead
    ///
    pub const OnHideEvent = onHideEvent;

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
    pub fn onHideEvent(self: QPolarChart, callback: *const fn (QPolarChart, QHideEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `moveEvent` instead
    ///
    pub const MoveEvent = moveEvent;

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
    /// ` _event: QGraphicsSceneMoveEvent `
    ///
    pub fn moveEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMoveEvent;
        qtc.QPolarChart_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMoveEvent` instead
    ///
    pub const SuperMoveEvent = superMoveEvent;

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
    /// ` _event: QGraphicsSceneMoveEvent `
    ///
    pub fn superMoveEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMoveEvent;
        qtc.QPolarChart_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMoveEvent` instead
    ///
    pub const OnMoveEvent = onMoveEvent;

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
    pub fn onMoveEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneMoveEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `polishEvent` instead
    ///
    pub const PolishEvent = polishEvent;

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
    pub fn polishEvent(self: QPolarChart) void {
        qtc.QPolarChart_PolishEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superPolishEvent` instead
    ///
    pub const SuperPolishEvent = superPolishEvent;

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
    pub fn superPolishEvent(self: QPolarChart) void {
        qtc.QPolarChart_SuperPolishEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPolishEvent` instead
    ///
    pub const OnPolishEvent = onPolishEvent;

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
    pub fn onPolishEvent(self: QPolarChart, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnPolishEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

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
    /// ` _event: QGraphicsSceneResizeEvent `
    ///
    pub fn resizeEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneResizeEvent;
        qtc.QPolarChart_ResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

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
    /// ` _event: QGraphicsSceneResizeEvent `
    ///
    pub fn superResizeEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneResizeEvent;
        qtc.QPolarChart_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

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
    pub fn onResizeEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneResizeEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `showEvent` instead
    ///
    pub const ShowEvent = showEvent;

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
    /// ` _event: QShowEvent `
    ///
    pub fn showEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QPolarChart_ShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superShowEvent` instead
    ///
    pub const SuperShowEvent = superShowEvent;

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
    /// ` _event: QShowEvent `
    ///
    pub fn superShowEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QPolarChart_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onShowEvent` instead
    ///
    pub const OnShowEvent = onShowEvent;

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
    pub fn onShowEvent(self: QPolarChart, callback: *const fn (QPolarChart, QShowEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hoverMoveEvent` instead
    ///
    pub const HoverMoveEvent = hoverMoveEvent;

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
    /// ` _event: QGraphicsSceneHoverEvent `
    ///
    pub fn hoverMoveEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHoverEvent;
        qtc.QPolarChart_HoverMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superHoverMoveEvent` instead
    ///
    pub const SuperHoverMoveEvent = superHoverMoveEvent;

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
    /// ` _event: QGraphicsSceneHoverEvent `
    ///
    pub fn superHoverMoveEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHoverEvent;
        qtc.QPolarChart_SuperHoverMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHoverMoveEvent` instead
    ///
    pub const OnHoverMoveEvent = onHoverMoveEvent;

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
    pub fn onHoverMoveEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneHoverEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnHoverMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hoverLeaveEvent` instead
    ///
    pub const HoverLeaveEvent = hoverLeaveEvent;

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
    /// ` _event: QGraphicsSceneHoverEvent `
    ///
    pub fn hoverLeaveEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHoverEvent;
        qtc.QPolarChart_HoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superHoverLeaveEvent` instead
    ///
    pub const SuperHoverLeaveEvent = superHoverLeaveEvent;

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
    /// ` _event: QGraphicsSceneHoverEvent `
    ///
    pub fn superHoverLeaveEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHoverEvent;
        qtc.QPolarChart_SuperHoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHoverLeaveEvent` instead
    ///
    pub const OnHoverLeaveEvent = onHoverLeaveEvent;

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
    pub fn onHoverLeaveEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneHoverEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnHoverLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `grabMouseEvent` instead
    ///
    pub const GrabMouseEvent = grabMouseEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn grabMouseEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPolarChart_GrabMouseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superGrabMouseEvent` instead
    ///
    pub const SuperGrabMouseEvent = superGrabMouseEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superGrabMouseEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPolarChart_SuperGrabMouseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onGrabMouseEvent` instead
    ///
    pub const OnGrabMouseEvent = onGrabMouseEvent;

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
    pub fn onGrabMouseEvent(self: QPolarChart, callback: *const fn (QPolarChart, QEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnGrabMouseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `ungrabMouseEvent` instead
    ///
    pub const UngrabMouseEvent = ungrabMouseEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn ungrabMouseEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPolarChart_UngrabMouseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superUngrabMouseEvent` instead
    ///
    pub const SuperUngrabMouseEvent = superUngrabMouseEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superUngrabMouseEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPolarChart_SuperUngrabMouseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onUngrabMouseEvent` instead
    ///
    pub const OnUngrabMouseEvent = onUngrabMouseEvent;

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
    pub fn onUngrabMouseEvent(self: QPolarChart, callback: *const fn (QPolarChart, QEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnUngrabMouseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `grabKeyboardEvent` instead
    ///
    pub const GrabKeyboardEvent = grabKeyboardEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn grabKeyboardEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPolarChart_GrabKeyboardEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superGrabKeyboardEvent` instead
    ///
    pub const SuperGrabKeyboardEvent = superGrabKeyboardEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superGrabKeyboardEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPolarChart_SuperGrabKeyboardEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onGrabKeyboardEvent` instead
    ///
    pub const OnGrabKeyboardEvent = onGrabKeyboardEvent;

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
    pub fn onGrabKeyboardEvent(self: QPolarChart, callback: *const fn (QPolarChart, QEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnGrabKeyboardEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `ungrabKeyboardEvent` instead
    ///
    pub const UngrabKeyboardEvent = ungrabKeyboardEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn ungrabKeyboardEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPolarChart_UngrabKeyboardEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superUngrabKeyboardEvent` instead
    ///
    pub const SuperUngrabKeyboardEvent = superUngrabKeyboardEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superUngrabKeyboardEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPolarChart_SuperUngrabKeyboardEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onUngrabKeyboardEvent` instead
    ///
    pub const OnUngrabKeyboardEvent = onUngrabKeyboardEvent;

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
    pub fn onUngrabKeyboardEvent(self: QPolarChart, callback: *const fn (QPolarChart, QEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnUngrabKeyboardEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPolarChart `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QPolarChart, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPolarChart_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QPolarChart, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPolarChart_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QPolarChart, callback: *const fn (QPolarChart, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPolarChart_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPolarChart_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPolarChart_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QPolarChart, callback: *const fn (QPolarChart, QTimerEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPolarChart `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPolarChart_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPolarChart_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QPolarChart, callback: *const fn (QPolarChart, QChildEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPolarChart `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPolarChart_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPolarChart_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QPolarChart, callback: *const fn (QPolarChart, QEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPolarChart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QPolarChart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPolarChart_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QPolarChart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPolarChart_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QPolarChart, callback: *const fn (QPolarChart, QMetaMethod) callconv(.c) void) void {
        qtc.QPolarChart_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPolarChart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QPolarChart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPolarChart_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QPolarChart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPolarChart_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QPolarChart, callback: *const fn (QPolarChart, QMetaMethod) callconv(.c) void) void {
        qtc.QPolarChart_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `advance` instead
    ///
    pub const Advance = advance;

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
    pub fn advance(self: QPolarChart, phase: i32) void {
        qtc.QPolarChart_Advance(@ptrCast(self.ptr), @bitCast(phase));
    }

    /// ### DEPRECATED: Use `superAdvance` instead
    ///
    pub const SuperAdvance = superAdvance;

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
    pub fn superAdvance(self: QPolarChart, phase: i32) void {
        qtc.QPolarChart_SuperAdvance(@ptrCast(self.ptr), @bitCast(phase));
    }

    /// ### DEPRECATED: Use `onAdvance` instead
    ///
    pub const OnAdvance = onAdvance;

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
    pub fn onAdvance(self: QPolarChart, callback: *const fn (QPolarChart, i32) callconv(.c) void) void {
        qtc.QPolarChart_OnAdvance(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

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
    pub fn contains(self: QPolarChart, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QPolarChart_Contains(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `superContains` instead
    ///
    pub const SuperContains = superContains;

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
    pub fn superContains(self: QPolarChart, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QPolarChart_SuperContains(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `onContains` instead
    ///
    pub const OnContains = onContains;

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
    pub fn onContains(self: QPolarChart, callback: *const fn (QPolarChart, QPointF) callconv(.c) bool) void {
        qtc.QPolarChart_OnContains(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `collidesWithItem` instead
    ///
    pub const CollidesWithItem = collidesWithItem;

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
    pub fn collidesWithItem(self: QPolarChart, other: anytype, mode: i32) bool {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return qtc.QPolarChart_CollidesWithItem(@ptrCast(self.ptr), @ptrCast(other.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `superCollidesWithItem` instead
    ///
    pub const SuperCollidesWithItem = superCollidesWithItem;

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
    pub fn superCollidesWithItem(self: QPolarChart, other: anytype, mode: i32) bool {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return qtc.QPolarChart_SuperCollidesWithItem(@ptrCast(self.ptr), @ptrCast(other.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onCollidesWithItem` instead
    ///
    pub const OnCollidesWithItem = onCollidesWithItem;

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
    pub fn onCollidesWithItem(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsItem, i32) callconv(.c) bool) void {
        qtc.QPolarChart_OnCollidesWithItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `collidesWithPath` instead
    ///
    pub const CollidesWithPath = collidesWithPath;

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
    pub fn collidesWithPath(self: QPolarChart, path: anytype, mode: i32) bool {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return qtc.QPolarChart_CollidesWithPath(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `superCollidesWithPath` instead
    ///
    pub const SuperCollidesWithPath = superCollidesWithPath;

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
    pub fn superCollidesWithPath(self: QPolarChart, path: anytype, mode: i32) bool {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return qtc.QPolarChart_SuperCollidesWithPath(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onCollidesWithPath` instead
    ///
    pub const OnCollidesWithPath = onCollidesWithPath;

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
    pub fn onCollidesWithPath(self: QPolarChart, callback: *const fn (QPolarChart, QPainterPath, i32) callconv(.c) bool) void {
        qtc.QPolarChart_OnCollidesWithPath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isObscuredBy` instead
    ///
    pub const IsObscuredBy = isObscuredBy;

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
    pub fn isObscuredBy(self: QPolarChart, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return qtc.QPolarChart_IsObscuredBy(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `superIsObscuredBy` instead
    ///
    pub const SuperIsObscuredBy = superIsObscuredBy;

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
    pub fn superIsObscuredBy(self: QPolarChart, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return qtc.QPolarChart_SuperIsObscuredBy(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `onIsObscuredBy` instead
    ///
    pub const OnIsObscuredBy = onIsObscuredBy;

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
    pub fn onIsObscuredBy(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsItem) callconv(.c) bool) void {
        qtc.QPolarChart_OnIsObscuredBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `opaqueArea` instead
    ///
    pub const OpaqueArea = opaqueArea;

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
    pub fn opaqueArea(self: QPolarChart) QPainterPath {
        return .{ .ptr = qtc.QPolarChart_OpaqueArea(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superOpaqueArea` instead
    ///
    pub const SuperOpaqueArea = superOpaqueArea;

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
    pub fn superOpaqueArea(self: QPolarChart) QPainterPath {
        return .{ .ptr = qtc.QPolarChart_SuperOpaqueArea(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onOpaqueArea` instead
    ///
    pub const OnOpaqueArea = onOpaqueArea;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onOpaqueArea(self: QPolarChart, callback: *const fn () callconv(.c) QPainterPath) void {
        qtc.QPolarChart_OnOpaqueArea(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sceneEventFilter` instead
    ///
    pub const SceneEventFilter = sceneEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn sceneEventFilter(self: QPolarChart, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QGraphicsItem;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPolarChart_SceneEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superSceneEventFilter` instead
    ///
    pub const SuperSceneEventFilter = superSceneEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superSceneEventFilter(self: QPolarChart, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QGraphicsItem;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPolarChart_SuperSceneEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onSceneEventFilter` instead
    ///
    pub const OnSceneEventFilter = onSceneEventFilter;

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
    pub fn onSceneEventFilter(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsItem, QEvent) callconv(.c) bool) void {
        qtc.QPolarChart_OnSceneEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contextMenuEvent` instead
    ///
    pub const ContextMenuEvent = contextMenuEvent;

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
    /// ` _event: QGraphicsSceneContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneContextMenuEvent;
        qtc.QPolarChart_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superContextMenuEvent` instead
    ///
    pub const SuperContextMenuEvent = superContextMenuEvent;

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
    /// ` _event: QGraphicsSceneContextMenuEvent `
    ///
    pub fn superContextMenuEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneContextMenuEvent;
        qtc.QPolarChart_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuEvent` instead
    ///
    pub const OnContextMenuEvent = onContextMenuEvent;

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
    pub fn onContextMenuEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneContextMenuEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragEnterEvent` instead
    ///
    pub const DragEnterEvent = dragEnterEvent;

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
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn dragEnterEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QPolarChart_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragEnterEvent` instead
    ///
    pub const SuperDragEnterEvent = superDragEnterEvent;

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
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn superDragEnterEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QPolarChart_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragEnterEvent` instead
    ///
    pub const OnDragEnterEvent = onDragEnterEvent;

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
    pub fn onDragEnterEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

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
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn dragLeaveEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QPolarChart_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

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
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn superDragLeaveEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QPolarChart_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

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
    pub fn onDragLeaveEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

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
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn dragMoveEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QPolarChart_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

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
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn superDragMoveEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QPolarChart_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

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
    pub fn onDragMoveEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

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
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn dropEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QPolarChart_DropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

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
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn superDropEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QPolarChart_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

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
    pub fn onDropEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hoverEnterEvent` instead
    ///
    pub const HoverEnterEvent = hoverEnterEvent;

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
    /// ` _event: QGraphicsSceneHoverEvent `
    ///
    pub fn hoverEnterEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHoverEvent;
        qtc.QPolarChart_HoverEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superHoverEnterEvent` instead
    ///
    pub const SuperHoverEnterEvent = superHoverEnterEvent;

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
    /// ` _event: QGraphicsSceneHoverEvent `
    ///
    pub fn superHoverEnterEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHoverEvent;
        qtc.QPolarChart_SuperHoverEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHoverEnterEvent` instead
    ///
    pub const OnHoverEnterEvent = onHoverEnterEvent;

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
    pub fn onHoverEnterEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneHoverEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnHoverEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

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
    /// ` _event: QKeyEvent `
    ///
    pub fn keyPressEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QPolarChart_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

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
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QPolarChart_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

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
    pub fn onKeyPressEvent(self: QPolarChart, callback: *const fn (QPolarChart, QKeyEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyReleaseEvent` instead
    ///
    pub const KeyReleaseEvent = keyReleaseEvent;

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
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QPolarChart_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superKeyReleaseEvent` instead
    ///
    pub const SuperKeyReleaseEvent = superKeyReleaseEvent;

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
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QPolarChart_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyReleaseEvent` instead
    ///
    pub const OnKeyReleaseEvent = onKeyReleaseEvent;

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
    pub fn onKeyReleaseEvent(self: QPolarChart, callback: *const fn (QPolarChart, QKeyEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

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
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn mousePressEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QPolarChart_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

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
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn superMousePressEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QPolarChart_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

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
    pub fn onMousePressEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

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
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn mouseMoveEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QPolarChart_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

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
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QPolarChart_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

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
    pub fn onMouseMoveEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

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
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QPolarChart_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

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
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QPolarChart_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

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
    pub fn onMouseReleaseEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

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
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QPolarChart_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

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
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QPolarChart_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

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
    pub fn onMouseDoubleClickEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

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
    /// ` _event: QGraphicsSceneWheelEvent `
    ///
    pub fn wheelEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneWheelEvent;
        qtc.QPolarChart_WheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

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
    /// ` _event: QGraphicsSceneWheelEvent `
    ///
    pub fn superWheelEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneWheelEvent;
        qtc.QPolarChart_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

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
    pub fn onWheelEvent(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsSceneWheelEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

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
    /// ` _event: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QPolarChart_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

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
    /// ` _event: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: QPolarChart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QPolarChart_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

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
    pub fn onInputMethodEvent(self: QPolarChart, callback: *const fn (QPolarChart, QInputMethodEvent) callconv(.c) void) void {
        qtc.QPolarChart_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

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
    pub fn inputMethodQuery(self: QPolarChart, query: i32) QVariant {
        return .{ .ptr = qtc.QPolarChart_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

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
    pub fn superInputMethodQuery(self: QPolarChart, query: i32) QVariant {
        return .{ .ptr = qtc.QPolarChart_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: QPolarChart, callback: *const fn (QPolarChart, i32) callconv(.c) QVariant) void {
        qtc.QPolarChart_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `supportsExtension` instead
    ///
    pub const SupportsExtension = supportsExtension;

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
    /// ` _extension: qgraphicsitem_enums.Extension `
    ///
    pub fn supportsExtension(self: QPolarChart, _extension: i32) bool {
        return qtc.QPolarChart_SupportsExtension(@ptrCast(self.ptr), @bitCast(_extension));
    }

    /// ### DEPRECATED: Use `superSupportsExtension` instead
    ///
    pub const SuperSupportsExtension = superSupportsExtension;

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
    /// ` _extension: qgraphicsitem_enums.Extension `
    ///
    pub fn superSupportsExtension(self: QPolarChart, _extension: i32) bool {
        return qtc.QPolarChart_SuperSupportsExtension(@ptrCast(self.ptr), @bitCast(_extension));
    }

    /// ### DEPRECATED: Use `onSupportsExtension` instead
    ///
    pub const OnSupportsExtension = onSupportsExtension;

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
    pub fn onSupportsExtension(self: QPolarChart, callback: *const fn (QPolarChart, i32) callconv(.c) bool) void {
        qtc.QPolarChart_OnSupportsExtension(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setExtension` instead
    ///
    pub const SetExtension = setExtension;

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
    /// ` _extension: qgraphicsitem_enums.Extension `
    ///
    /// ` variant: QVariant `
    ///
    pub fn setExtension(self: QPolarChart, _extension: i32, variant: anytype) void {
        comptime _ = @TypeOf(variant)._is_QVariant;
        qtc.QPolarChart_SetExtension(@ptrCast(self.ptr), @bitCast(_extension), @ptrCast(variant.ptr));
    }

    /// ### DEPRECATED: Use `superSetExtension` instead
    ///
    pub const SuperSetExtension = superSetExtension;

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
    /// ` _extension: qgraphicsitem_enums.Extension `
    ///
    /// ` variant: QVariant `
    ///
    pub fn superSetExtension(self: QPolarChart, _extension: i32, variant: anytype) void {
        comptime _ = @TypeOf(variant)._is_QVariant;
        qtc.QPolarChart_SuperSetExtension(@ptrCast(self.ptr), @bitCast(_extension), @ptrCast(variant.ptr));
    }

    /// ### DEPRECATED: Use `onSetExtension` instead
    ///
    pub const OnSetExtension = onSetExtension;

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
    pub fn onSetExtension(self: QPolarChart, callback: *const fn (QPolarChart, i32, QVariant) callconv(.c) void) void {
        qtc.QPolarChart_OnSetExtension(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `extension` instead
    ///
    pub const Extension = extension;

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
    pub fn extension(self: QPolarChart, variant: anytype) QVariant {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QPolarChart_Extension(@ptrCast(self.ptr), @ptrCast(variant.ptr)) };
    }

    /// ### DEPRECATED: Use `superExtension` instead
    ///
    pub const SuperExtension = superExtension;

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
    pub fn superExtension(self: QPolarChart, variant: anytype) QVariant {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QPolarChart_SuperExtension(@ptrCast(self.ptr), @ptrCast(variant.ptr)) };
    }

    /// ### DEPRECATED: Use `onExtension` instead
    ///
    pub const OnExtension = onExtension;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onExtension(self: QPolarChart, callback: *const fn (QPolarChart, QVariant) callconv(.c) QVariant) void {
        qtc.QPolarChart_OnExtension(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

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
    pub fn isEmpty(self: QPolarChart) bool {
        return qtc.QPolarChart_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsEmpty` instead
    ///
    pub const SuperIsEmpty = superIsEmpty;

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
    pub fn superIsEmpty(self: QPolarChart) bool {
        return qtc.QPolarChart_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEmpty` instead
    ///
    pub const OnIsEmpty = onIsEmpty;

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
    pub fn onIsEmpty(self: QPolarChart, callback: *const fn () callconv(.c) bool) void {
        qtc.QPolarChart_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateMicroFocus` instead
    ///
    pub const UpdateMicroFocus = updateMicroFocus;

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
    pub fn updateMicroFocus(self: QPolarChart) void {
        qtc.QPolarChart_UpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateMicroFocus` instead
    ///
    pub const SuperUpdateMicroFocus = superUpdateMicroFocus;

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
    pub fn superUpdateMicroFocus(self: QPolarChart) void {
        qtc.QPolarChart_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateMicroFocus` instead
    ///
    pub const OnUpdateMicroFocus = onUpdateMicroFocus;

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
    pub fn onUpdateMicroFocus(self: QPolarChart, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPolarChart `
    ///
    pub fn sender(self: QPolarChart) QObject {
        return .{ .ptr = qtc.QPolarChart_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QPolarChart `
    ///
    pub fn superSender(self: QPolarChart) QObject {
        return .{ .ptr = qtc.QPolarChart_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QPolarChart, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPolarChart_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPolarChart `
    ///
    pub fn senderSignalIndex(self: QPolarChart) i32 {
        return qtc.QPolarChart_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPolarChart `
    ///
    pub fn superSenderSignalIndex(self: QPolarChart) i32 {
        return qtc.QPolarChart_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QPolarChart, callback: *const fn () callconv(.c) i32) void {
        qtc.QPolarChart_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPolarChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QPolarChart, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPolarChart_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPolarChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QPolarChart, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPolarChart_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QPolarChart, callback: *const fn (QPolarChart, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPolarChart_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPolarChart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QPolarChart, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPolarChart_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPolarChart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QPolarChart, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPolarChart_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPolarChart`
    ///
    /// ` callback: *const fn (self: QPolarChart, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QPolarChart, callback: *const fn (QPolarChart, QMetaMethod) callconv(.c) bool) void {
        qtc.QPolarChart_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addToIndex` instead
    ///
    pub const AddToIndex = addToIndex;

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
    pub fn addToIndex(self: QPolarChart) void {
        qtc.QPolarChart_AddToIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superAddToIndex` instead
    ///
    pub const SuperAddToIndex = superAddToIndex;

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
    pub fn superAddToIndex(self: QPolarChart) void {
        qtc.QPolarChart_SuperAddToIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAddToIndex` instead
    ///
    pub const OnAddToIndex = onAddToIndex;

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
    pub fn onAddToIndex(self: QPolarChart, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnAddToIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `removeFromIndex` instead
    ///
    pub const RemoveFromIndex = removeFromIndex;

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
    pub fn removeFromIndex(self: QPolarChart) void {
        qtc.QPolarChart_RemoveFromIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superRemoveFromIndex` instead
    ///
    pub const SuperRemoveFromIndex = superRemoveFromIndex;

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
    pub fn superRemoveFromIndex(self: QPolarChart) void {
        qtc.QPolarChart_SuperRemoveFromIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveFromIndex` instead
    ///
    pub const OnRemoveFromIndex = onRemoveFromIndex;

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
    pub fn onRemoveFromIndex(self: QPolarChart, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnRemoveFromIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `prepareGeometryChange` instead
    ///
    pub const PrepareGeometryChange = prepareGeometryChange;

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
    pub fn prepareGeometryChange(self: QPolarChart) void {
        qtc.QPolarChart_PrepareGeometryChange(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superPrepareGeometryChange` instead
    ///
    pub const SuperPrepareGeometryChange = superPrepareGeometryChange;

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
    pub fn superPrepareGeometryChange(self: QPolarChart) void {
        qtc.QPolarChart_SuperPrepareGeometryChange(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPrepareGeometryChange` instead
    ///
    pub const OnPrepareGeometryChange = onPrepareGeometryChange;

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
    pub fn onPrepareGeometryChange(self: QPolarChart, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnPrepareGeometryChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setGraphicsItem` instead
    ///
    pub const SetGraphicsItem = setGraphicsItem;

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
    pub fn setGraphicsItem(self: QPolarChart, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QPolarChart_SetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `superSetGraphicsItem` instead
    ///
    pub const SuperSetGraphicsItem = superSetGraphicsItem;

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
    pub fn superSetGraphicsItem(self: QPolarChart, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QPolarChart_SuperSetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `onSetGraphicsItem` instead
    ///
    pub const OnSetGraphicsItem = onSetGraphicsItem;

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
    pub fn onSetGraphicsItem(self: QPolarChart, callback: *const fn (QPolarChart, QGraphicsItem) callconv(.c) void) void {
        qtc.QPolarChart_OnSetGraphicsItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setOwnedByLayout` instead
    ///
    pub const SetOwnedByLayout = setOwnedByLayout;

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
    /// ` _ownedByLayout: bool `
    ///
    pub fn setOwnedByLayout(self: QPolarChart, _ownedByLayout: bool) void {
        qtc.QPolarChart_SetOwnedByLayout(@ptrCast(self.ptr), _ownedByLayout);
    }

    /// ### DEPRECATED: Use `superSetOwnedByLayout` instead
    ///
    pub const SuperSetOwnedByLayout = superSetOwnedByLayout;

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
    /// ` _ownedByLayout: bool `
    ///
    pub fn superSetOwnedByLayout(self: QPolarChart, _ownedByLayout: bool) void {
        qtc.QPolarChart_SuperSetOwnedByLayout(@ptrCast(self.ptr), _ownedByLayout);
    }

    /// ### DEPRECATED: Use `onSetOwnedByLayout` instead
    ///
    pub const OnSetOwnedByLayout = onSetOwnedByLayout;

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
    pub fn onSetOwnedByLayout(self: QPolarChart, callback: *const fn (QPolarChart, bool) callconv(.c) void) void {
        qtc.QPolarChart_OnSetOwnedByLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPolarChart `
    ///
    /// ` callback: *const fn (self: QPolarChart, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QPolarChart, callback: *const fn (QPolarChart, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#dtor.QPolarChart)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPolarChart `
    ///
    pub fn delete(self: QPolarChart) void {
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
