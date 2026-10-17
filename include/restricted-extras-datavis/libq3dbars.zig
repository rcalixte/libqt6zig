const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Q3DScene = @import("libqt6").Q3DScene;
const Q3DTheme = @import("libqt6").Q3DTheme;
const QAbstract3DAxis = @import("libqt6").QAbstract3DAxis;
const QAbstract3DInputHandler = @import("libqt6").QAbstract3DInputHandler;
const QAbstract3DSeries = @import("libqt6").QAbstract3DSeries;
const QAccessibleInterface = @import("libqt6").QAccessibleInterface;
const QBar3DSeries = @import("libqt6").QBar3DSeries;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QCategory3DAxis = @import("libqt6").QCategory3DAxis;
const QChildEvent = @import("libqt6").QChildEvent;
const QCloseEvent = @import("libqt6").QCloseEvent;
const QCursor = @import("libqt6").QCursor;
const QCustom3DItem = @import("libqt6").QCustom3DItem;
const QEvent = @import("libqt6").QEvent;
const QExposeEvent = @import("libqt6").QExposeEvent;
const QFocusEvent = @import("libqt6").QFocusEvent;
const QHideEvent = @import("libqt6").QHideEvent;
const QIcon = @import("libqt6").QIcon;
const QImage = @import("libqt6").QImage;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QLocale = @import("libqt6").QLocale;
const QMargins = @import("libqt6").QMargins;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMouseEvent = @import("libqt6").QMouseEvent;
const QMoveEvent = @import("libqt6").QMoveEvent;
const QObject = @import("libqt6").QObject;
const QPaintEvent = @import("libqt6").QPaintEvent;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRegion = @import("libqt6").QRegion;
const QResizeEvent = @import("libqt6").QResizeEvent;
const QScreen = @import("libqt6").QScreen;
const QShowEvent = @import("libqt6").QShowEvent;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QSurface = @import("libqt6").QSurface;
const QSurfaceFormat = @import("libqt6").QSurfaceFormat;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QTouchEvent = @import("libqt6").QTouchEvent;
const QValue3DAxis = @import("libqt6").QValue3DAxis;
const QVariant = @import("libqt6").QVariant;
const QVector3D = @import("libqt6").QVector3D;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWindow = @import("libqt6").QWindow;
const qabstract3dgraph_enums = @import("libqabstract3dgraph.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qsurface_enums = @import("../libqsurface.zig").enums;
const qwindow_enums = @import("../libqwindow.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html)
pub const Q3DBars = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Q3DBars,

    pub const _is_Q3DBars = {};
    pub const _is_QAbstract3DGraph = {};
    pub const _is_QWindow = {};
    pub const _is_QObject = {};
    pub const _is_QSurface = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Q3DBars object in C++ memory
    ///
    pub fn new() Q3DBars {
        return .{ .ptr = qtc.Q3DBars_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Q3DBars object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _format: QSurfaceFormat `
    ///
    pub fn new2(_format: anytype) Q3DBars {
        comptime _ = @TypeOf(_format)._is_QSurfaceFormat;
        return .{ .ptr = qtc.Q3DBars_new2(@ptrCast(_format.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new Q3DBars object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _format: QSurfaceFormat `
    ///
    /// ` _parent: QWindow `
    ///
    pub fn new3(_format: anytype, _parent: anytype) Q3DBars {
        comptime _ = @TypeOf(_format)._is_QSurfaceFormat;
        comptime _ = @TypeOf(_parent)._is_QWindow;
        return .{ .ptr = qtc.Q3DBars_new3(@ptrCast(_format.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn metaObject(self: Q3DBars) QMetaObject {
        return .{ .ptr = qtc.Q3DBars_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars) callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: Q3DBars, callback: *const fn (Q3DBars) callconv(.c) QMetaObject) void {
        qtc.Q3DBars_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DBars `
    ///
    pub fn superMetaObject(self: Q3DBars) QMetaObject {
        return .{ .ptr = qtc.Q3DBars_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: Q3DBars, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Q3DBars_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: Q3DBars, callback: *const fn (Q3DBars, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Q3DBars_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: Q3DBars, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Q3DBars_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: Q3DBars, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Q3DBars_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: Q3DBars, callback: *const fn (Q3DBars, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Q3DBars_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: Q3DBars, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Q3DBars_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
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
        var _str = qtc.Q3DBars_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Q3DBars.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrimarySeries` instead
    ///
    pub const SetPrimarySeries = setPrimarySeries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#setPrimarySeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` series: QBar3DSeries `
    ///
    pub fn setPrimarySeries(self: Q3DBars, series: anytype) void {
        comptime _ = @TypeOf(series)._is_QBar3DSeries;
        qtc.Q3DBars_SetPrimarySeries(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// ### DEPRECATED: Use `primarySeries` instead
    ///
    pub const PrimarySeries = primarySeries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#primarySeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn primarySeries(self: Q3DBars) QBar3DSeries {
        return .{ .ptr = qtc.Q3DBars_PrimarySeries(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addSeries` instead
    ///
    pub const AddSeries = addSeries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#addSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` series: QBar3DSeries `
    ///
    pub fn addSeries(self: Q3DBars, series: anytype) void {
        comptime _ = @TypeOf(series)._is_QBar3DSeries;
        qtc.Q3DBars_AddSeries(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// ### DEPRECATED: Use `removeSeries` instead
    ///
    pub const RemoveSeries = removeSeries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#removeSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` series: QBar3DSeries `
    ///
    pub fn removeSeries(self: Q3DBars, series: anytype) void {
        comptime _ = @TypeOf(series)._is_QBar3DSeries;
        qtc.Q3DBars_RemoveSeries(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// ### DEPRECATED: Use `insertSeries` instead
    ///
    pub const InsertSeries = insertSeries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#insertSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` index: i32 `
    ///
    /// ` series: QBar3DSeries `
    ///
    pub fn insertSeries(self: Q3DBars, index: i32, series: anytype) void {
        comptime _ = @TypeOf(series)._is_QBar3DSeries;
        qtc.Q3DBars_InsertSeries(@ptrCast(self.ptr), @bitCast(index), @ptrCast(series.ptr));
    }

    /// ### DEPRECATED: Use `seriesList` instead
    ///
    pub const SeriesList = seriesList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#seriesList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn seriesList(self: Q3DBars, allocator: std.mem.Allocator) []QBar3DSeries {
        const _arr: qtc.libqt_list = qtc.Q3DBars_SeriesList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBar3DSeries, _arr.len) catch @panic("Q3DBars.seriesList: Memory allocation failed");
        const _data_val: [*]QtC.QBar3DSeries = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setMultiSeriesUniform` instead
    ///
    pub const SetMultiSeriesUniform = setMultiSeriesUniform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#setMultiSeriesUniform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` uniform: bool `
    ///
    pub fn setMultiSeriesUniform(self: Q3DBars, uniform: bool) void {
        qtc.Q3DBars_SetMultiSeriesUniform(@ptrCast(self.ptr), uniform);
    }

    /// ### DEPRECATED: Use `isMultiSeriesUniform` instead
    ///
    pub const IsMultiSeriesUniform = isMultiSeriesUniform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#isMultiSeriesUniform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn isMultiSeriesUniform(self: Q3DBars) bool {
        return qtc.Q3DBars_IsMultiSeriesUniform(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBarThickness` instead
    ///
    pub const SetBarThickness = setBarThickness;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#setBarThickness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` thicknessRatio: f32 `
    ///
    pub fn setBarThickness(self: Q3DBars, thicknessRatio: f32) void {
        qtc.Q3DBars_SetBarThickness(@ptrCast(self.ptr), @bitCast(thicknessRatio));
    }

    /// ### DEPRECATED: Use `barThickness` instead
    ///
    pub const BarThickness = barThickness;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#barThickness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn barThickness(self: Q3DBars) f32 {
        return qtc.Q3DBars_BarThickness(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBarSpacing` instead
    ///
    pub const SetBarSpacing = setBarSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#setBarSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` spacing: QSizeF `
    ///
    pub fn setBarSpacing(self: Q3DBars, spacing: anytype) void {
        comptime _ = @TypeOf(spacing)._is_QSizeF;
        qtc.Q3DBars_SetBarSpacing(@ptrCast(self.ptr), @ptrCast(spacing.ptr));
    }

    /// ### DEPRECATED: Use `barSpacing` instead
    ///
    pub const BarSpacing = barSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#barSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn barSpacing(self: Q3DBars) QSizeF {
        return .{ .ptr = qtc.Q3DBars_BarSpacing(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBarSpacingRelative` instead
    ///
    pub const SetBarSpacingRelative = setBarSpacingRelative;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#setBarSpacingRelative)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` relative: bool `
    ///
    pub fn setBarSpacingRelative(self: Q3DBars, relative: bool) void {
        qtc.Q3DBars_SetBarSpacingRelative(@ptrCast(self.ptr), relative);
    }

    /// ### DEPRECATED: Use `isBarSpacingRelative` instead
    ///
    pub const IsBarSpacingRelative = isBarSpacingRelative;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#isBarSpacingRelative)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn isBarSpacingRelative(self: Q3DBars) bool {
        return qtc.Q3DBars_IsBarSpacingRelative(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBarSeriesMargin` instead
    ///
    pub const SetBarSeriesMargin = setBarSeriesMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#setBarSeriesMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _margin: QSizeF `
    ///
    pub fn setBarSeriesMargin(self: Q3DBars, _margin: anytype) void {
        comptime _ = @TypeOf(_margin)._is_QSizeF;
        qtc.Q3DBars_SetBarSeriesMargin(@ptrCast(self.ptr), @ptrCast(_margin.ptr));
    }

    /// ### DEPRECATED: Use `barSeriesMargin` instead
    ///
    pub const BarSeriesMargin = barSeriesMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#barSeriesMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn barSeriesMargin(self: Q3DBars) QSizeF {
        return .{ .ptr = qtc.Q3DBars_BarSeriesMargin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRowAxis` instead
    ///
    pub const SetRowAxis = setRowAxis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#setRowAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` axis: QCategory3DAxis `
    ///
    pub fn setRowAxis(self: Q3DBars, axis: anytype) void {
        comptime _ = @TypeOf(axis)._is_QCategory3DAxis;
        qtc.Q3DBars_SetRowAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### DEPRECATED: Use `rowAxis` instead
    ///
    pub const RowAxis = rowAxis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#rowAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn rowAxis(self: Q3DBars) QCategory3DAxis {
        return .{ .ptr = qtc.Q3DBars_RowAxis(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setColumnAxis` instead
    ///
    pub const SetColumnAxis = setColumnAxis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#setColumnAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` axis: QCategory3DAxis `
    ///
    pub fn setColumnAxis(self: Q3DBars, axis: anytype) void {
        comptime _ = @TypeOf(axis)._is_QCategory3DAxis;
        qtc.Q3DBars_SetColumnAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### DEPRECATED: Use `columnAxis` instead
    ///
    pub const ColumnAxis = columnAxis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#columnAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn columnAxis(self: Q3DBars) QCategory3DAxis {
        return .{ .ptr = qtc.Q3DBars_ColumnAxis(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setValueAxis` instead
    ///
    pub const SetValueAxis = setValueAxis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#setValueAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` axis: QValue3DAxis `
    ///
    pub fn setValueAxis(self: Q3DBars, axis: anytype) void {
        comptime _ = @TypeOf(axis)._is_QValue3DAxis;
        qtc.Q3DBars_SetValueAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### DEPRECATED: Use `valueAxis` instead
    ///
    pub const ValueAxis = valueAxis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#valueAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn valueAxis(self: Q3DBars) QValue3DAxis {
        return .{ .ptr = qtc.Q3DBars_ValueAxis(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addAxis` instead
    ///
    pub const AddAxis = addAxis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#addAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` axis: QAbstract3DAxis `
    ///
    pub fn addAxis(self: Q3DBars, axis: anytype) void {
        comptime _ = @TypeOf(axis)._is_QAbstract3DAxis;
        qtc.Q3DBars_AddAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### DEPRECATED: Use `releaseAxis` instead
    ///
    pub const ReleaseAxis = releaseAxis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#releaseAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` axis: QAbstract3DAxis `
    ///
    pub fn releaseAxis(self: Q3DBars, axis: anytype) void {
        comptime _ = @TypeOf(axis)._is_QAbstract3DAxis;
        qtc.Q3DBars_ReleaseAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### DEPRECATED: Use `axes` instead
    ///
    pub const Axes = axes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#axes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn axes(self: Q3DBars, allocator: std.mem.Allocator) []QAbstract3DAxis {
        const _arr: qtc.libqt_list = qtc.Q3DBars_Axes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstract3DAxis, _arr.len) catch @panic("Q3DBars.axes: Memory allocation failed");
        const _data_val: [*]QtC.QAbstract3DAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `selectedSeries` instead
    ///
    pub const SelectedSeries = selectedSeries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#selectedSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn selectedSeries(self: Q3DBars) QBar3DSeries {
        return .{ .ptr = qtc.Q3DBars_SelectedSeries(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFloorLevel` instead
    ///
    pub const SetFloorLevel = setFloorLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#setFloorLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` level: f32 `
    ///
    pub fn setFloorLevel(self: Q3DBars, level: f32) void {
        qtc.Q3DBars_SetFloorLevel(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### DEPRECATED: Use `floorLevel` instead
    ///
    pub const FloorLevel = floorLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#floorLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn floorLevel(self: Q3DBars) f32 {
        return qtc.Q3DBars_FloorLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `multiSeriesUniformChanged` instead
    ///
    pub const MultiSeriesUniformChanged = multiSeriesUniformChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#multiSeriesUniformChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` uniform: bool `
    ///
    pub fn multiSeriesUniformChanged(self: Q3DBars, uniform: bool) void {
        qtc.Q3DBars_MultiSeriesUniformChanged(@ptrCast(self.ptr), uniform);
    }

    /// ### DEPRECATED: Use `onMultiSeriesUniformChanged` instead
    ///
    pub const OnMultiSeriesUniformChanged = onMultiSeriesUniformChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#multiSeriesUniformChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, uniform: bool) callconv(.c) void `
    ///
    pub fn onMultiSeriesUniformChanged(self: Q3DBars, callback: *const fn (Q3DBars, bool) callconv(.c) void) void {
        qtc.Q3DBars_Connect_MultiSeriesUniformChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `barThicknessChanged` instead
    ///
    pub const BarThicknessChanged = barThicknessChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#barThicknessChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` thicknessRatio: f32 `
    ///
    pub fn barThicknessChanged(self: Q3DBars, thicknessRatio: f32) void {
        qtc.Q3DBars_BarThicknessChanged(@ptrCast(self.ptr), @bitCast(thicknessRatio));
    }

    /// ### DEPRECATED: Use `onBarThicknessChanged` instead
    ///
    pub const OnBarThicknessChanged = onBarThicknessChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#barThicknessChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, thicknessRatio: f32) callconv(.c) void `
    ///
    pub fn onBarThicknessChanged(self: Q3DBars, callback: *const fn (Q3DBars, f32) callconv(.c) void) void {
        qtc.Q3DBars_Connect_BarThicknessChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `barSpacingChanged` instead
    ///
    pub const BarSpacingChanged = barSpacingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#barSpacingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` spacing: QSizeF `
    ///
    pub fn barSpacingChanged(self: Q3DBars, spacing: anytype) void {
        comptime _ = @TypeOf(spacing)._is_QSizeF;
        qtc.Q3DBars_BarSpacingChanged(@ptrCast(self.ptr), @ptrCast(spacing.ptr));
    }

    /// ### DEPRECATED: Use `onBarSpacingChanged` instead
    ///
    pub const OnBarSpacingChanged = onBarSpacingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#barSpacingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, spacing: QSizeF) callconv(.c) void `
    ///
    pub fn onBarSpacingChanged(self: Q3DBars, callback: *const fn (Q3DBars, QSizeF) callconv(.c) void) void {
        qtc.Q3DBars_Connect_BarSpacingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `barSpacingRelativeChanged` instead
    ///
    pub const BarSpacingRelativeChanged = barSpacingRelativeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#barSpacingRelativeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` relative: bool `
    ///
    pub fn barSpacingRelativeChanged(self: Q3DBars, relative: bool) void {
        qtc.Q3DBars_BarSpacingRelativeChanged(@ptrCast(self.ptr), relative);
    }

    /// ### DEPRECATED: Use `onBarSpacingRelativeChanged` instead
    ///
    pub const OnBarSpacingRelativeChanged = onBarSpacingRelativeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#barSpacingRelativeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, relative: bool) callconv(.c) void `
    ///
    pub fn onBarSpacingRelativeChanged(self: Q3DBars, callback: *const fn (Q3DBars, bool) callconv(.c) void) void {
        qtc.Q3DBars_Connect_BarSpacingRelativeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `barSeriesMarginChanged` instead
    ///
    pub const BarSeriesMarginChanged = barSeriesMarginChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#barSeriesMarginChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _margin: QSizeF `
    ///
    pub fn barSeriesMarginChanged(self: Q3DBars, _margin: anytype) void {
        comptime _ = @TypeOf(_margin)._is_QSizeF;
        qtc.Q3DBars_BarSeriesMarginChanged(@ptrCast(self.ptr), @ptrCast(_margin.ptr));
    }

    /// ### DEPRECATED: Use `onBarSeriesMarginChanged` instead
    ///
    pub const OnBarSeriesMarginChanged = onBarSeriesMarginChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#barSeriesMarginChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, margin: QSizeF) callconv(.c) void `
    ///
    pub fn onBarSeriesMarginChanged(self: Q3DBars, callback: *const fn (Q3DBars, QSizeF) callconv(.c) void) void {
        qtc.Q3DBars_Connect_BarSeriesMarginChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowAxisChanged` instead
    ///
    pub const RowAxisChanged = rowAxisChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#rowAxisChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` axis: QCategory3DAxis `
    ///
    pub fn rowAxisChanged(self: Q3DBars, axis: anytype) void {
        comptime _ = @TypeOf(axis)._is_QCategory3DAxis;
        qtc.Q3DBars_RowAxisChanged(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### DEPRECATED: Use `onRowAxisChanged` instead
    ///
    pub const OnRowAxisChanged = onRowAxisChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#rowAxisChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, axis: QCategory3DAxis) callconv(.c) void `
    ///
    pub fn onRowAxisChanged(self: Q3DBars, callback: *const fn (Q3DBars, QCategory3DAxis) callconv(.c) void) void {
        qtc.Q3DBars_Connect_RowAxisChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnAxisChanged` instead
    ///
    pub const ColumnAxisChanged = columnAxisChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#columnAxisChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` axis: QCategory3DAxis `
    ///
    pub fn columnAxisChanged(self: Q3DBars, axis: anytype) void {
        comptime _ = @TypeOf(axis)._is_QCategory3DAxis;
        qtc.Q3DBars_ColumnAxisChanged(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### DEPRECATED: Use `onColumnAxisChanged` instead
    ///
    pub const OnColumnAxisChanged = onColumnAxisChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#columnAxisChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, axis: QCategory3DAxis) callconv(.c) void `
    ///
    pub fn onColumnAxisChanged(self: Q3DBars, callback: *const fn (Q3DBars, QCategory3DAxis) callconv(.c) void) void {
        qtc.Q3DBars_Connect_ColumnAxisChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `valueAxisChanged` instead
    ///
    pub const ValueAxisChanged = valueAxisChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#valueAxisChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` axis: QValue3DAxis `
    ///
    pub fn valueAxisChanged(self: Q3DBars, axis: anytype) void {
        comptime _ = @TypeOf(axis)._is_QValue3DAxis;
        qtc.Q3DBars_ValueAxisChanged(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### DEPRECATED: Use `onValueAxisChanged` instead
    ///
    pub const OnValueAxisChanged = onValueAxisChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#valueAxisChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, axis: QValue3DAxis) callconv(.c) void `
    ///
    pub fn onValueAxisChanged(self: Q3DBars, callback: *const fn (Q3DBars, QValue3DAxis) callconv(.c) void) void {
        qtc.Q3DBars_Connect_ValueAxisChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `primarySeriesChanged` instead
    ///
    pub const PrimarySeriesChanged = primarySeriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#primarySeriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` series: QBar3DSeries `
    ///
    pub fn primarySeriesChanged(self: Q3DBars, series: anytype) void {
        comptime _ = @TypeOf(series)._is_QBar3DSeries;
        qtc.Q3DBars_PrimarySeriesChanged(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// ### DEPRECATED: Use `onPrimarySeriesChanged` instead
    ///
    pub const OnPrimarySeriesChanged = onPrimarySeriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#primarySeriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, series: QBar3DSeries) callconv(.c) void `
    ///
    pub fn onPrimarySeriesChanged(self: Q3DBars, callback: *const fn (Q3DBars, QBar3DSeries) callconv(.c) void) void {
        qtc.Q3DBars_Connect_PrimarySeriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedSeriesChanged` instead
    ///
    pub const SelectedSeriesChanged = selectedSeriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#selectedSeriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` series: QBar3DSeries `
    ///
    pub fn selectedSeriesChanged(self: Q3DBars, series: anytype) void {
        comptime _ = @TypeOf(series)._is_QBar3DSeries;
        qtc.Q3DBars_SelectedSeriesChanged(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// ### DEPRECATED: Use `onSelectedSeriesChanged` instead
    ///
    pub const OnSelectedSeriesChanged = onSelectedSeriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#selectedSeriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, series: QBar3DSeries) callconv(.c) void `
    ///
    pub fn onSelectedSeriesChanged(self: Q3DBars, callback: *const fn (Q3DBars, QBar3DSeries) callconv(.c) void) void {
        qtc.Q3DBars_Connect_SelectedSeriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `floorLevelChanged` instead
    ///
    pub const FloorLevelChanged = floorLevelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#floorLevelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` level: f32 `
    ///
    pub fn floorLevelChanged(self: Q3DBars, level: f32) void {
        qtc.Q3DBars_FloorLevelChanged(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### DEPRECATED: Use `onFloorLevelChanged` instead
    ///
    pub const OnFloorLevelChanged = onFloorLevelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#floorLevelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, level: f32) callconv(.c) void `
    ///
    pub fn onFloorLevelChanged(self: Q3DBars, callback: *const fn (Q3DBars, f32) callconv(.c) void) void {
        qtc.Q3DBars_Connect_FloorLevelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
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
        var _str = qtc.Q3DBars_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Q3DBars.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
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
        var _str = qtc.Q3DBars_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Q3DBars.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addInputHandler` instead
    ///
    pub const AddInputHandler = addInputHandler;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#addInputHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` inputHandler: QAbstract3DInputHandler `
    ///
    pub fn addInputHandler(self: Q3DBars, inputHandler: anytype) void {
        comptime _ = @TypeOf(inputHandler)._is_QAbstract3DInputHandler;
        qtc.QAbstract3DGraph_AddInputHandler(@ptrCast(self.ptr), @ptrCast(inputHandler.ptr));
    }

    /// ### DEPRECATED: Use `releaseInputHandler` instead
    ///
    pub const ReleaseInputHandler = releaseInputHandler;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#releaseInputHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` inputHandler: QAbstract3DInputHandler `
    ///
    pub fn releaseInputHandler(self: Q3DBars, inputHandler: anytype) void {
        comptime _ = @TypeOf(inputHandler)._is_QAbstract3DInputHandler;
        qtc.QAbstract3DGraph_ReleaseInputHandler(@ptrCast(self.ptr), @ptrCast(inputHandler.ptr));
    }

    /// ### DEPRECATED: Use `setActiveInputHandler` instead
    ///
    pub const SetActiveInputHandler = setActiveInputHandler;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setActiveInputHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` inputHandler: QAbstract3DInputHandler `
    ///
    pub fn setActiveInputHandler(self: Q3DBars, inputHandler: anytype) void {
        comptime _ = @TypeOf(inputHandler)._is_QAbstract3DInputHandler;
        qtc.QAbstract3DGraph_SetActiveInputHandler(@ptrCast(self.ptr), @ptrCast(inputHandler.ptr));
    }

    /// ### DEPRECATED: Use `activeInputHandler` instead
    ///
    pub const ActiveInputHandler = activeInputHandler;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#activeInputHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn activeInputHandler(self: Q3DBars) QAbstract3DInputHandler {
        return .{ .ptr = qtc.QAbstract3DGraph_ActiveInputHandler(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inputHandlers` instead
    ///
    pub const InputHandlers = inputHandlers;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#inputHandlers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn inputHandlers(self: Q3DBars, allocator: std.mem.Allocator) []QAbstract3DInputHandler {
        const _arr: qtc.libqt_list = qtc.QAbstract3DGraph_InputHandlers(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstract3DInputHandler, _arr.len) catch @panic("Q3DBars.inputHandlers: Memory allocation failed");
        const _data_val: [*]QtC.QAbstract3DInputHandler = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addTheme` instead
    ///
    pub const AddTheme = addTheme;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#addTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` theme: Q3DTheme `
    ///
    pub fn addTheme(self: Q3DBars, theme: anytype) void {
        comptime _ = @TypeOf(theme)._is_Q3DTheme;
        qtc.QAbstract3DGraph_AddTheme(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### DEPRECATED: Use `releaseTheme` instead
    ///
    pub const ReleaseTheme = releaseTheme;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#releaseTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` theme: Q3DTheme `
    ///
    pub fn releaseTheme(self: Q3DBars, theme: anytype) void {
        comptime _ = @TypeOf(theme)._is_Q3DTheme;
        qtc.QAbstract3DGraph_ReleaseTheme(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### DEPRECATED: Use `setActiveTheme` instead
    ///
    pub const SetActiveTheme = setActiveTheme;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setActiveTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` theme: Q3DTheme `
    ///
    pub fn setActiveTheme(self: Q3DBars, theme: anytype) void {
        comptime _ = @TypeOf(theme)._is_Q3DTheme;
        qtc.QAbstract3DGraph_SetActiveTheme(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### DEPRECATED: Use `activeTheme` instead
    ///
    pub const ActiveTheme = activeTheme;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#activeTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn activeTheme(self: Q3DBars) Q3DTheme {
        return .{ .ptr = qtc.QAbstract3DGraph_ActiveTheme(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `themes` instead
    ///
    pub const Themes = themes;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#themes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn themes(self: Q3DBars, allocator: std.mem.Allocator) []Q3DTheme {
        const _arr: qtc.libqt_list = qtc.QAbstract3DGraph_Themes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Q3DTheme, _arr.len) catch @panic("Q3DBars.themes: Memory allocation failed");
        const _data_val: [*]QtC.Q3DTheme = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setSelectionMode` instead
    ///
    pub const SetSelectionMode = setSelectionMode;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setSelectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` mode: flag of qabstract3dgraph_enums.SelectionFlag `
    ///
    pub fn setSelectionMode(self: Q3DBars, mode: i32) void {
        qtc.QAbstract3DGraph_SetSelectionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `selectionMode` instead
    ///
    pub const SelectionMode = selectionMode;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstract3dgraph_enums.SelectionFlag `
    ///
    pub fn selectionMode(self: Q3DBars) i32 {
        return qtc.QAbstract3DGraph_SelectionMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShadowQuality` instead
    ///
    pub const SetShadowQuality = setShadowQuality;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setShadowQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` quality: qabstract3dgraph_enums.ShadowQuality `
    ///
    pub fn setShadowQuality(self: Q3DBars, quality: i32) void {
        qtc.QAbstract3DGraph_SetShadowQuality(@ptrCast(self.ptr), @bitCast(quality));
    }

    /// ### DEPRECATED: Use `shadowQuality` instead
    ///
    pub const ShadowQuality = shadowQuality;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#shadowQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ## Returns:
    ///
    /// ` qabstract3dgraph_enums.ShadowQuality `
    ///
    pub fn shadowQuality(self: Q3DBars) i32 {
        return qtc.QAbstract3DGraph_ShadowQuality(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scene` instead
    ///
    pub const Scene = scene;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#scene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn scene(self: Q3DBars) Q3DScene {
        return .{ .ptr = qtc.QAbstract3DGraph_Scene(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearSelection` instead
    ///
    pub const ClearSelection = clearSelection;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn clearSelection(self: Q3DBars) void {
        qtc.QAbstract3DGraph_ClearSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasSeries` instead
    ///
    pub const HasSeries = hasSeries;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#hasSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` series: QAbstract3DSeries `
    ///
    pub fn hasSeries(self: Q3DBars, series: anytype) bool {
        comptime _ = @TypeOf(series)._is_QAbstract3DSeries;
        return qtc.QAbstract3DGraph_HasSeries(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// ### DEPRECATED: Use `addCustomItem` instead
    ///
    pub const AddCustomItem = addCustomItem;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#addCustomItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` item: QCustom3DItem `
    ///
    pub fn addCustomItem(self: Q3DBars, item: anytype) i32 {
        comptime _ = @TypeOf(item)._is_QCustom3DItem;
        return qtc.QAbstract3DGraph_AddCustomItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `removeCustomItems` instead
    ///
    pub const RemoveCustomItems = removeCustomItems;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#removeCustomItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn removeCustomItems(self: Q3DBars) void {
        qtc.QAbstract3DGraph_RemoveCustomItems(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeCustomItem` instead
    ///
    pub const RemoveCustomItem = removeCustomItem;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#removeCustomItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` item: QCustom3DItem `
    ///
    pub fn removeCustomItem(self: Q3DBars, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QCustom3DItem;
        qtc.QAbstract3DGraph_RemoveCustomItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `removeCustomItemAt` instead
    ///
    pub const RemoveCustomItemAt = removeCustomItemAt;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#removeCustomItemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _position: QVector3D `
    ///
    pub fn removeCustomItemAt(self: Q3DBars, _position: anytype) void {
        comptime _ = @TypeOf(_position)._is_QVector3D;
        qtc.QAbstract3DGraph_RemoveCustomItemAt(@ptrCast(self.ptr), @ptrCast(_position.ptr));
    }

    /// ### DEPRECATED: Use `releaseCustomItem` instead
    ///
    pub const ReleaseCustomItem = releaseCustomItem;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#releaseCustomItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` item: QCustom3DItem `
    ///
    pub fn releaseCustomItem(self: Q3DBars, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QCustom3DItem;
        qtc.QAbstract3DGraph_ReleaseCustomItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `customItems` instead
    ///
    pub const CustomItems = customItems;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#customItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn customItems(self: Q3DBars, allocator: std.mem.Allocator) []QCustom3DItem {
        const _arr: qtc.libqt_list = qtc.QAbstract3DGraph_CustomItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QCustom3DItem, _arr.len) catch @panic("Q3DBars.customItems: Memory allocation failed");
        const _data_val: [*]QtC.QCustom3DItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `selectedLabelIndex` instead
    ///
    pub const SelectedLabelIndex = selectedLabelIndex;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectedLabelIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn selectedLabelIndex(self: Q3DBars) i32 {
        return qtc.QAbstract3DGraph_SelectedLabelIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectedAxis` instead
    ///
    pub const SelectedAxis = selectedAxis;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectedAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn selectedAxis(self: Q3DBars) QAbstract3DAxis {
        return .{ .ptr = qtc.QAbstract3DGraph_SelectedAxis(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `selectedCustomItemIndex` instead
    ///
    pub const SelectedCustomItemIndex = selectedCustomItemIndex;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectedCustomItemIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn selectedCustomItemIndex(self: Q3DBars) i32 {
        return qtc.QAbstract3DGraph_SelectedCustomItemIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectedCustomItem` instead
    ///
    pub const SelectedCustomItem = selectedCustomItem;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectedCustomItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn selectedCustomItem(self: Q3DBars) QCustom3DItem {
        return .{ .ptr = qtc.QAbstract3DGraph_SelectedCustomItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `renderToImage` instead
    ///
    pub const RenderToImage = renderToImage;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#renderToImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn renderToImage(self: Q3DBars) QImage {
        return .{ .ptr = qtc.QAbstract3DGraph_RenderToImage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMeasureFps` instead
    ///
    pub const SetMeasureFps = setMeasureFps;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setMeasureFps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` enable: bool `
    ///
    pub fn setMeasureFps(self: Q3DBars, enable: bool) void {
        qtc.QAbstract3DGraph_SetMeasureFps(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `measureFps` instead
    ///
    pub const MeasureFps = measureFps;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#measureFps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn measureFps(self: Q3DBars) bool {
        return qtc.QAbstract3DGraph_MeasureFps(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentFps` instead
    ///
    pub const CurrentFps = currentFps;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#currentFps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn currentFps(self: Q3DBars) f64 {
        return qtc.QAbstract3DGraph_CurrentFps(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOrthoProjection` instead
    ///
    pub const SetOrthoProjection = setOrthoProjection;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setOrthoProjection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` enable: bool `
    ///
    pub fn setOrthoProjection(self: Q3DBars, enable: bool) void {
        qtc.QAbstract3DGraph_SetOrthoProjection(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isOrthoProjection` instead
    ///
    pub const IsOrthoProjection = isOrthoProjection;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#isOrthoProjection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn isOrthoProjection(self: Q3DBars) bool {
        return qtc.QAbstract3DGraph_IsOrthoProjection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectedElement` instead
    ///
    pub const SelectedElement = selectedElement;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectedElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ## Returns:
    ///
    /// ` qabstract3dgraph_enums.ElementType `
    ///
    pub fn selectedElement(self: Q3DBars) i32 {
        return qtc.QAbstract3DGraph_SelectedElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAspectRatio` instead
    ///
    pub const SetAspectRatio = setAspectRatio;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setAspectRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` ratio: f64 `
    ///
    pub fn setAspectRatio(self: Q3DBars, ratio: f64) void {
        qtc.QAbstract3DGraph_SetAspectRatio(@ptrCast(self.ptr), @bitCast(ratio));
    }

    /// ### DEPRECATED: Use `aspectRatio` instead
    ///
    pub const AspectRatio = aspectRatio;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#aspectRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn aspectRatio(self: Q3DBars) f64 {
        return qtc.QAbstract3DGraph_AspectRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOptimizationHints` instead
    ///
    pub const SetOptimizationHints = setOptimizationHints;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setOptimizationHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` hints: flag of qabstract3dgraph_enums.OptimizationHint `
    ///
    pub fn setOptimizationHints(self: Q3DBars, hints: i32) void {
        qtc.QAbstract3DGraph_SetOptimizationHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `optimizationHints` instead
    ///
    pub const OptimizationHints = optimizationHints;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#optimizationHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstract3dgraph_enums.OptimizationHint `
    ///
    pub fn optimizationHints(self: Q3DBars) i32 {
        return qtc.QAbstract3DGraph_OptimizationHints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPolar` instead
    ///
    pub const SetPolar = setPolar;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setPolar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` enable: bool `
    ///
    pub fn setPolar(self: Q3DBars, enable: bool) void {
        qtc.QAbstract3DGraph_SetPolar(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isPolar` instead
    ///
    pub const IsPolar = isPolar;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#isPolar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn isPolar(self: Q3DBars) bool {
        return qtc.QAbstract3DGraph_IsPolar(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRadialLabelOffset` instead
    ///
    pub const SetRadialLabelOffset = setRadialLabelOffset;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setRadialLabelOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` offset: f32 `
    ///
    pub fn setRadialLabelOffset(self: Q3DBars, offset: f32) void {
        qtc.QAbstract3DGraph_SetRadialLabelOffset(@ptrCast(self.ptr), @bitCast(offset));
    }

    /// ### DEPRECATED: Use `radialLabelOffset` instead
    ///
    pub const RadialLabelOffset = radialLabelOffset;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#radialLabelOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn radialLabelOffset(self: Q3DBars) f32 {
        return qtc.QAbstract3DGraph_RadialLabelOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHorizontalAspectRatio` instead
    ///
    pub const SetHorizontalAspectRatio = setHorizontalAspectRatio;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setHorizontalAspectRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` ratio: f64 `
    ///
    pub fn setHorizontalAspectRatio(self: Q3DBars, ratio: f64) void {
        qtc.QAbstract3DGraph_SetHorizontalAspectRatio(@ptrCast(self.ptr), @bitCast(ratio));
    }

    /// ### DEPRECATED: Use `horizontalAspectRatio` instead
    ///
    pub const HorizontalAspectRatio = horizontalAspectRatio;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#horizontalAspectRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn horizontalAspectRatio(self: Q3DBars) f64 {
        return qtc.QAbstract3DGraph_HorizontalAspectRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReflection` instead
    ///
    pub const SetReflection = setReflection;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setReflection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` enable: bool `
    ///
    pub fn setReflection(self: Q3DBars, enable: bool) void {
        qtc.QAbstract3DGraph_SetReflection(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isReflection` instead
    ///
    pub const IsReflection = isReflection;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#isReflection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn isReflection(self: Q3DBars) bool {
        return qtc.QAbstract3DGraph_IsReflection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReflectivity` instead
    ///
    pub const SetReflectivity = setReflectivity;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setReflectivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _reflectivity: f64 `
    ///
    pub fn setReflectivity(self: Q3DBars, _reflectivity: f64) void {
        qtc.QAbstract3DGraph_SetReflectivity(@ptrCast(self.ptr), @bitCast(_reflectivity));
    }

    /// ### DEPRECATED: Use `reflectivity` instead
    ///
    pub const Reflectivity = reflectivity;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#reflectivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn reflectivity(self: Q3DBars) f64 {
        return qtc.QAbstract3DGraph_Reflectivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: Q3DBars, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.QAbstract3DGraph_SetLocale(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn locale(self: Q3DBars) QLocale {
        return .{ .ptr = qtc.QAbstract3DGraph_Locale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `queriedGraphPosition` instead
    ///
    pub const QueriedGraphPosition = queriedGraphPosition;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#queriedGraphPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn queriedGraphPosition(self: Q3DBars) QVector3D {
        return .{ .ptr = qtc.QAbstract3DGraph_QueriedGraphPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMargin` instead
    ///
    pub const SetMargin = setMargin;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _margin: f64 `
    ///
    pub fn setMargin(self: Q3DBars, _margin: f64) void {
        qtc.QAbstract3DGraph_SetMargin(@ptrCast(self.ptr), @bitCast(_margin));
    }

    /// ### DEPRECATED: Use `margin` instead
    ///
    pub const Margin = margin;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#margin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn margin(self: Q3DBars) f64 {
        return qtc.QAbstract3DGraph_Margin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasContext` instead
    ///
    pub const HasContext = hasContext;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#hasContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn hasContext(self: Q3DBars) bool {
        return qtc.QAbstract3DGraph_HasContext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activeInputHandlerChanged` instead
    ///
    pub const ActiveInputHandlerChanged = activeInputHandlerChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#activeInputHandlerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` inputHandler: QAbstract3DInputHandler `
    ///
    pub fn activeInputHandlerChanged(self: Q3DBars, inputHandler: anytype) void {
        comptime _ = @TypeOf(inputHandler)._is_QAbstract3DInputHandler;
        qtc.QAbstract3DGraph_ActiveInputHandlerChanged(@ptrCast(self.ptr), @ptrCast(inputHandler.ptr));
    }

    /// ### DEPRECATED: Use `onActiveInputHandlerChanged` instead
    ///
    pub const OnActiveInputHandlerChanged = onActiveInputHandlerChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#activeInputHandlerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, inputHandler: QAbstract3DInputHandler) callconv(.c) void `
    ///
    pub fn onActiveInputHandlerChanged(self: Q3DBars, callback: *const fn (Q3DBars, QAbstract3DInputHandler) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_ActiveInputHandlerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activeThemeChanged` instead
    ///
    pub const ActiveThemeChanged = activeThemeChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#activeThemeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` theme: Q3DTheme `
    ///
    pub fn activeThemeChanged(self: Q3DBars, theme: anytype) void {
        comptime _ = @TypeOf(theme)._is_Q3DTheme;
        qtc.QAbstract3DGraph_ActiveThemeChanged(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### DEPRECATED: Use `onActiveThemeChanged` instead
    ///
    pub const OnActiveThemeChanged = onActiveThemeChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#activeThemeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, theme: Q3DTheme) callconv(.c) void `
    ///
    pub fn onActiveThemeChanged(self: Q3DBars, callback: *const fn (Q3DBars, Q3DTheme) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_ActiveThemeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionModeChanged` instead
    ///
    pub const SelectionModeChanged = selectionModeChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectionModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` mode: flag of qabstract3dgraph_enums.SelectionFlag `
    ///
    pub fn selectionModeChanged(self: Q3DBars, mode: i32) void {
        qtc.QAbstract3DGraph_SelectionModeChanged(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onSelectionModeChanged` instead
    ///
    pub const OnSelectionModeChanged = onSelectionModeChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectionModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, mode: flag of qabstract3dgraph_enums.SelectionFlag) callconv(.c) void `
    ///
    pub fn onSelectionModeChanged(self: Q3DBars, callback: *const fn (Q3DBars, i32) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_SelectionModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadowQualityChanged` instead
    ///
    pub const ShadowQualityChanged = shadowQualityChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#shadowQualityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` quality: qabstract3dgraph_enums.ShadowQuality `
    ///
    pub fn shadowQualityChanged(self: Q3DBars, quality: i32) void {
        qtc.QAbstract3DGraph_ShadowQualityChanged(@ptrCast(self.ptr), @bitCast(quality));
    }

    /// ### DEPRECATED: Use `onShadowQualityChanged` instead
    ///
    pub const OnShadowQualityChanged = onShadowQualityChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#shadowQualityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, quality: qabstract3dgraph_enums.ShadowQuality) callconv(.c) void `
    ///
    pub fn onShadowQualityChanged(self: Q3DBars, callback: *const fn (Q3DBars, i32) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_ShadowQualityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedElementChanged` instead
    ///
    pub const SelectedElementChanged = selectedElementChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectedElementChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` typeVal: qabstract3dgraph_enums.ElementType `
    ///
    pub fn selectedElementChanged(self: Q3DBars, typeVal: i32) void {
        qtc.QAbstract3DGraph_SelectedElementChanged(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `onSelectedElementChanged` instead
    ///
    pub const OnSelectedElementChanged = onSelectedElementChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectedElementChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, typeVal: qabstract3dgraph_enums.ElementType) callconv(.c) void `
    ///
    pub fn onSelectedElementChanged(self: Q3DBars, callback: *const fn (Q3DBars, i32) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_SelectedElementChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `measureFpsChanged` instead
    ///
    pub const MeasureFpsChanged = measureFpsChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#measureFpsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` enabled: bool `
    ///
    pub fn measureFpsChanged(self: Q3DBars, enabled: bool) void {
        qtc.QAbstract3DGraph_MeasureFpsChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onMeasureFpsChanged` instead
    ///
    pub const OnMeasureFpsChanged = onMeasureFpsChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#measureFpsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, enabled: bool) callconv(.c) void `
    ///
    pub fn onMeasureFpsChanged(self: Q3DBars, callback: *const fn (Q3DBars, bool) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_MeasureFpsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentFpsChanged` instead
    ///
    pub const CurrentFpsChanged = currentFpsChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#currentFpsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` fps: f64 `
    ///
    pub fn currentFpsChanged(self: Q3DBars, fps: f64) void {
        qtc.QAbstract3DGraph_CurrentFpsChanged(@ptrCast(self.ptr), @bitCast(fps));
    }

    /// ### DEPRECATED: Use `onCurrentFpsChanged` instead
    ///
    pub const OnCurrentFpsChanged = onCurrentFpsChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#currentFpsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, fps: f64) callconv(.c) void `
    ///
    pub fn onCurrentFpsChanged(self: Q3DBars, callback: *const fn (Q3DBars, f64) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_CurrentFpsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `orthoProjectionChanged` instead
    ///
    pub const OrthoProjectionChanged = orthoProjectionChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#orthoProjectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` enabled: bool `
    ///
    pub fn orthoProjectionChanged(self: Q3DBars, enabled: bool) void {
        qtc.QAbstract3DGraph_OrthoProjectionChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onOrthoProjectionChanged` instead
    ///
    pub const OnOrthoProjectionChanged = onOrthoProjectionChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#orthoProjectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, enabled: bool) callconv(.c) void `
    ///
    pub fn onOrthoProjectionChanged(self: Q3DBars, callback: *const fn (Q3DBars, bool) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_OrthoProjectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `aspectRatioChanged` instead
    ///
    pub const AspectRatioChanged = aspectRatioChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#aspectRatioChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` ratio: f64 `
    ///
    pub fn aspectRatioChanged(self: Q3DBars, ratio: f64) void {
        qtc.QAbstract3DGraph_AspectRatioChanged(@ptrCast(self.ptr), @bitCast(ratio));
    }

    /// ### DEPRECATED: Use `onAspectRatioChanged` instead
    ///
    pub const OnAspectRatioChanged = onAspectRatioChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#aspectRatioChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, ratio: f64) callconv(.c) void `
    ///
    pub fn onAspectRatioChanged(self: Q3DBars, callback: *const fn (Q3DBars, f64) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_AspectRatioChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `optimizationHintsChanged` instead
    ///
    pub const OptimizationHintsChanged = optimizationHintsChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#optimizationHintsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` hints: flag of qabstract3dgraph_enums.OptimizationHint `
    ///
    pub fn optimizationHintsChanged(self: Q3DBars, hints: i32) void {
        qtc.QAbstract3DGraph_OptimizationHintsChanged(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `onOptimizationHintsChanged` instead
    ///
    pub const OnOptimizationHintsChanged = onOptimizationHintsChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#optimizationHintsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, hints: flag of qabstract3dgraph_enums.OptimizationHint) callconv(.c) void `
    ///
    pub fn onOptimizationHintsChanged(self: Q3DBars, callback: *const fn (Q3DBars, i32) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_OptimizationHintsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `polarChanged` instead
    ///
    pub const PolarChanged = polarChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#polarChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` enabled: bool `
    ///
    pub fn polarChanged(self: Q3DBars, enabled: bool) void {
        qtc.QAbstract3DGraph_PolarChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onPolarChanged` instead
    ///
    pub const OnPolarChanged = onPolarChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#polarChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, enabled: bool) callconv(.c) void `
    ///
    pub fn onPolarChanged(self: Q3DBars, callback: *const fn (Q3DBars, bool) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_PolarChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `radialLabelOffsetChanged` instead
    ///
    pub const RadialLabelOffsetChanged = radialLabelOffsetChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#radialLabelOffsetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` offset: f32 `
    ///
    pub fn radialLabelOffsetChanged(self: Q3DBars, offset: f32) void {
        qtc.QAbstract3DGraph_RadialLabelOffsetChanged(@ptrCast(self.ptr), @bitCast(offset));
    }

    /// ### DEPRECATED: Use `onRadialLabelOffsetChanged` instead
    ///
    pub const OnRadialLabelOffsetChanged = onRadialLabelOffsetChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#radialLabelOffsetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, offset: f32) callconv(.c) void `
    ///
    pub fn onRadialLabelOffsetChanged(self: Q3DBars, callback: *const fn (Q3DBars, f32) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_RadialLabelOffsetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `horizontalAspectRatioChanged` instead
    ///
    pub const HorizontalAspectRatioChanged = horizontalAspectRatioChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#horizontalAspectRatioChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` ratio: f64 `
    ///
    pub fn horizontalAspectRatioChanged(self: Q3DBars, ratio: f64) void {
        qtc.QAbstract3DGraph_HorizontalAspectRatioChanged(@ptrCast(self.ptr), @bitCast(ratio));
    }

    /// ### DEPRECATED: Use `onHorizontalAspectRatioChanged` instead
    ///
    pub const OnHorizontalAspectRatioChanged = onHorizontalAspectRatioChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#horizontalAspectRatioChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, ratio: f64) callconv(.c) void `
    ///
    pub fn onHorizontalAspectRatioChanged(self: Q3DBars, callback: *const fn (Q3DBars, f64) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_HorizontalAspectRatioChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reflectionChanged` instead
    ///
    pub const ReflectionChanged = reflectionChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#reflectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` enabled: bool `
    ///
    pub fn reflectionChanged(self: Q3DBars, enabled: bool) void {
        qtc.QAbstract3DGraph_ReflectionChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onReflectionChanged` instead
    ///
    pub const OnReflectionChanged = onReflectionChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#reflectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, enabled: bool) callconv(.c) void `
    ///
    pub fn onReflectionChanged(self: Q3DBars, callback: *const fn (Q3DBars, bool) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_ReflectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reflectivityChanged` instead
    ///
    pub const ReflectivityChanged = reflectivityChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#reflectivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _reflectivity: f64 `
    ///
    pub fn reflectivityChanged(self: Q3DBars, _reflectivity: f64) void {
        qtc.QAbstract3DGraph_ReflectivityChanged(@ptrCast(self.ptr), @bitCast(_reflectivity));
    }

    /// ### DEPRECATED: Use `onReflectivityChanged` instead
    ///
    pub const OnReflectivityChanged = onReflectivityChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#reflectivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, reflectivity: f64) callconv(.c) void `
    ///
    pub fn onReflectivityChanged(self: Q3DBars, callback: *const fn (Q3DBars, f64) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_ReflectivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `localeChanged` instead
    ///
    pub const LocaleChanged = localeChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#localeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn localeChanged(self: Q3DBars, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.QAbstract3DGraph_LocaleChanged(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `onLocaleChanged` instead
    ///
    pub const OnLocaleChanged = onLocaleChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#localeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, locale: QLocale) callconv(.c) void `
    ///
    pub fn onLocaleChanged(self: Q3DBars, callback: *const fn (Q3DBars, QLocale) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_LocaleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `queriedGraphPositionChanged` instead
    ///
    pub const QueriedGraphPositionChanged = queriedGraphPositionChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#queriedGraphPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` data: QVector3D `
    ///
    pub fn queriedGraphPositionChanged(self: Q3DBars, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QVector3D;
        qtc.QAbstract3DGraph_QueriedGraphPositionChanged(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `onQueriedGraphPositionChanged` instead
    ///
    pub const OnQueriedGraphPositionChanged = onQueriedGraphPositionChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#queriedGraphPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, data: QVector3D) callconv(.c) void `
    ///
    pub fn onQueriedGraphPositionChanged(self: Q3DBars, callback: *const fn (Q3DBars, QVector3D) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_QueriedGraphPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `marginChanged` instead
    ///
    pub const MarginChanged = marginChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#marginChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _margin: f64 `
    ///
    pub fn marginChanged(self: Q3DBars, _margin: f64) void {
        qtc.QAbstract3DGraph_MarginChanged(@ptrCast(self.ptr), @bitCast(_margin));
    }

    /// ### DEPRECATED: Use `onMarginChanged` instead
    ///
    pub const OnMarginChanged = onMarginChanged;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#marginChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, margin: f64) callconv(.c) void `
    ///
    pub fn onMarginChanged(self: Q3DBars, callback: *const fn (Q3DBars, f64) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_MarginChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `renderToImage1` instead
    ///
    pub const RenderToImage1 = renderToImage1;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#renderToImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` msaaSamples: i32 `
    ///
    pub fn renderToImage1(self: Q3DBars, msaaSamples: i32) QImage {
        return .{ .ptr = qtc.QAbstract3DGraph_RenderToImage1(@ptrCast(self.ptr), @bitCast(msaaSamples)) };
    }

    /// ### DEPRECATED: Use `renderToImage2` instead
    ///
    pub const RenderToImage2 = renderToImage2;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#renderToImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` msaaSamples: i32 `
    ///
    /// ` imageSize: QSize `
    ///
    pub fn renderToImage2(self: Q3DBars, msaaSamples: i32, imageSize: anytype) QImage {
        comptime _ = @TypeOf(imageSize)._is_QSize;
        return .{ .ptr = qtc.QAbstract3DGraph_RenderToImage2(@ptrCast(self.ptr), @bitCast(msaaSamples), @ptrCast(imageSize.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// Upcasts to a QSurface object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn asQSurface(self: Q3DBars) QSurface {
        return .{ .ptr = qtc.QWindow_AsQSurface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// Downcasts to a Q3DBars object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qsurface: QSurface `
    ///
    pub fn fromQSurface(_qsurface: anytype) Q3DBars {
        comptime _ = @TypeOf(_qsurface)._is_QSurface;
        return .{ .ptr = @ptrCast(qtc.QWindow_FromQSurface(@ptrCast(_qsurface.ptr))) };
    }

    /// ### DEPRECATED: Use `setSurfaceType` instead
    ///
    pub const SetSurfaceType = setSurfaceType;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _surfaceType: qsurface_enums.SurfaceType `
    ///
    pub fn setSurfaceType(self: Q3DBars, _surfaceType: i32) void {
        qtc.QWindow_SetSurfaceType(@ptrCast(self.ptr), @bitCast(_surfaceType));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn isVisible(self: Q3DBars) bool {
        return qtc.QWindow_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `visibility` instead
    ///
    pub const Visibility = visibility;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ## Returns:
    ///
    /// ` qwindow_enums.Visibility `
    ///
    pub fn visibility(self: Q3DBars) i32 {
        return qtc.QWindow_Visibility(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisibility` instead
    ///
    pub const SetVisibility = setVisibility;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` v: qwindow_enums.Visibility `
    ///
    pub fn setVisibility(self: Q3DBars, v: i32) void {
        qtc.QWindow_SetVisibility(@ptrCast(self.ptr), @bitCast(v));
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn create(self: Q3DBars) void {
        qtc.QWindow_Create(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `winId` instead
    ///
    pub const WinId = winId;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn winId(self: Q3DBars) usize {
        return qtc.QWindow_WinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn parent(self: Q3DBars) QWindow {
        return .{ .ptr = qtc.QWindow_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _parent: QWindow `
    ///
    pub fn setParent(self: Q3DBars, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QWindow;
        qtc.QWindow_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `isTopLevel` instead
    ///
    pub const IsTopLevel = isTopLevel;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn isTopLevel(self: Q3DBars) bool {
        return qtc.QWindow_IsTopLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isModal` instead
    ///
    pub const IsModal = isModal;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn isModal(self: Q3DBars) bool {
        return qtc.QWindow_IsModal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modality` instead
    ///
    pub const Modality = modality;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn modality(self: Q3DBars) i32 {
        return qtc.QWindow_Modality(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModality` instead
    ///
    pub const SetModality = setModality;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _modality: qnamespace_enums.WindowModality `
    ///
    pub fn setModality(self: Q3DBars, _modality: i32) void {
        qtc.QWindow_SetModality(@ptrCast(self.ptr), @bitCast(_modality));
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _format: QSurfaceFormat `
    ///
    pub fn setFormat(self: Q3DBars, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_QSurfaceFormat;
        qtc.QWindow_SetFormat(@ptrCast(self.ptr), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `requestedFormat` instead
    ///
    pub const RequestedFormat = requestedFormat;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn requestedFormat(self: Q3DBars) QSurfaceFormat {
        return .{ .ptr = qtc.QWindow_RequestedFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn setFlags(self: Q3DBars, _flags: i32) void {
        qtc.QWindow_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn flags(self: Q3DBars) i32 {
        return qtc.QWindow_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag` instead
    ///
    pub const SetFlag = setFlag;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setFlag(self: Q3DBars, param1: i32) void {
        qtc.QWindow_SetFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn type0(self: Q3DBars) i32 {
        return qtc.QWindow_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn title(self: Q3DBars, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWindow_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Q3DBars.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` level: f64 `
    ///
    pub fn setOpacity(self: Q3DBars, level: f64) void {
        qtc.QWindow_SetOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn opacity(self: Q3DBars) f64 {
        return qtc.QWindow_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMask` instead
    ///
    pub const SetMask = setMask;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` region: QRegion `
    ///
    pub fn setMask(self: Q3DBars, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QWindow_SetMask(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `mask` instead
    ///
    pub const Mask = mask;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn mask(self: Q3DBars) QRegion {
        return .{ .ptr = qtc.QWindow_Mask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn isActive(self: Q3DBars) bool {
        return qtc.QWindow_IsActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reportContentOrientationChange` instead
    ///
    pub const ReportContentOrientationChange = reportContentOrientationChange;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn reportContentOrientationChange(self: Q3DBars, orientation: i32) void {
        qtc.QWindow_ReportContentOrientationChange(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `contentOrientation` instead
    ///
    pub const ContentOrientation = contentOrientation;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScreenOrientation `
    ///
    pub fn contentOrientation(self: Q3DBars) i32 {
        return qtc.QWindow_ContentOrientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn devicePixelRatio(self: Q3DBars) f64 {
        return qtc.QWindow_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowState` instead
    ///
    pub const WindowState = windowState;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: Q3DBars) i32 {
        return qtc.QWindow_WindowState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowStates` instead
    ///
    pub const WindowStates = windowStates;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowStates(self: Q3DBars) i32 {
        return qtc.QWindow_WindowStates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowState` instead
    ///
    pub const SetWindowState = setWindowState;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` state: qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: Q3DBars, state: i32) void {
        qtc.QWindow_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `setWindowStates` instead
    ///
    pub const SetWindowStates = setWindowStates;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` states: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowStates(self: Q3DBars, states: i32) void {
        qtc.QWindow_SetWindowStates(@ptrCast(self.ptr), @bitCast(states));
    }

    /// ### DEPRECATED: Use `setTransientParent` instead
    ///
    pub const SetTransientParent = setTransientParent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _parent: QWindow `
    ///
    pub fn setTransientParent(self: Q3DBars, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QWindow;
        qtc.QWindow_SetTransientParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `transientParent` instead
    ///
    pub const TransientParent = transientParent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn transientParent(self: Q3DBars) QWindow {
        return .{ .ptr = qtc.QWindow_TransientParent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isAncestorOf` instead
    ///
    pub const IsAncestorOf = isAncestorOf;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` child: QWindow `
    ///
    pub fn isAncestorOf(self: Q3DBars, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWindow;
        return qtc.QWindow_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `isExposed` instead
    ///
    pub const IsExposed = isExposed;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isExposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn isExposed(self: Q3DBars) bool {
        return qtc.QWindow_IsExposed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumWidth` instead
    ///
    pub const MinimumWidth = minimumWidth;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn minimumWidth(self: Q3DBars) i32 {
        return qtc.QWindow_MinimumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumHeight` instead
    ///
    pub const MinimumHeight = minimumHeight;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn minimumHeight(self: Q3DBars) i32 {
        return qtc.QWindow_MinimumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumWidth` instead
    ///
    pub const MaximumWidth = maximumWidth;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn maximumWidth(self: Q3DBars) i32 {
        return qtc.QWindow_MaximumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumHeight` instead
    ///
    pub const MaximumHeight = maximumHeight;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn maximumHeight(self: Q3DBars) i32 {
        return qtc.QWindow_MaximumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn minimumSize(self: Q3DBars) QSize {
        return .{ .ptr = qtc.QWindow_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn maximumSize(self: Q3DBars) QSize {
        return .{ .ptr = qtc.QWindow_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `baseSize` instead
    ///
    pub const BaseSize = baseSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn baseSize(self: Q3DBars) QSize {
        return .{ .ptr = qtc.QWindow_BaseSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sizeIncrement` instead
    ///
    pub const SizeIncrement = sizeIncrement;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn sizeIncrement(self: Q3DBars) QSize {
        return .{ .ptr = qtc.QWindow_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinimumSize` instead
    ///
    pub const SetMinimumSize = setMinimumSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _size: QSize `
    ///
    pub fn setMinimumSize(self: Q3DBars, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QWindow_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize` instead
    ///
    pub const SetMaximumSize = setMaximumSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _size: QSize `
    ///
    pub fn setMaximumSize(self: Q3DBars, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QWindow_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setBaseSize` instead
    ///
    pub const SetBaseSize = setBaseSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _size: QSize `
    ///
    pub fn setBaseSize(self: Q3DBars, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QWindow_SetBaseSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setSizeIncrement` instead
    ///
    pub const SetSizeIncrement = setSizeIncrement;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _size: QSize `
    ///
    pub fn setSizeIncrement(self: Q3DBars, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QWindow_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn geometry(self: Q3DBars) QRect {
        return .{ .ptr = qtc.QWindow_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameMargins` instead
    ///
    pub const FrameMargins = frameMargins;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn frameMargins(self: Q3DBars) QMargins {
        return .{ .ptr = qtc.QWindow_FrameMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameGeometry` instead
    ///
    pub const FrameGeometry = frameGeometry;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn frameGeometry(self: Q3DBars) QRect {
        return .{ .ptr = qtc.QWindow_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `framePosition` instead
    ///
    pub const FramePosition = framePosition;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#framePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn framePosition(self: Q3DBars) QPoint {
        return .{ .ptr = qtc.QWindow_FramePosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFramePosition` instead
    ///
    pub const SetFramePosition = setFramePosition;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` point: QPoint `
    ///
    pub fn setFramePosition(self: Q3DBars, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPoint;
        qtc.QWindow_SetFramePosition(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn width(self: Q3DBars) i32 {
        return qtc.QWindow_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn height(self: Q3DBars) i32 {
        return qtc.QWindow_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn x(self: Q3DBars) i32 {
        return qtc.QWindow_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn y(self: Q3DBars) i32 {
        return qtc.QWindow_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn position(self: Q3DBars) QPoint {
        return .{ .ptr = qtc.QWindow_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` pt: QPoint `
    ///
    pub fn setPosition(self: Q3DBars, pt: anytype) void {
        comptime _ = @TypeOf(pt)._is_QPoint;
        qtc.QWindow_SetPosition(@ptrCast(self.ptr), @ptrCast(pt.ptr));
    }

    /// ### DEPRECATED: Use `setPosition2` instead
    ///
    pub const SetPosition2 = setPosition2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` posx: i32 `
    ///
    /// ` posy: i32 `
    ///
    pub fn setPosition2(self: Q3DBars, posx: i32, posy: i32) void {
        qtc.QWindow_SetPosition2(@ptrCast(self.ptr), @bitCast(posx), @bitCast(posy));
    }

    /// ### DEPRECATED: Use `resize` instead
    ///
    pub const Resize = resize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` newSize: QSize `
    ///
    pub fn resize(self: Q3DBars, newSize: anytype) void {
        comptime _ = @TypeOf(newSize)._is_QSize;
        qtc.QWindow_Resize(@ptrCast(self.ptr), @ptrCast(newSize.ptr));
    }

    /// ### DEPRECATED: Use `resize2` instead
    ///
    pub const Resize2 = resize2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize2(self: Q3DBars, w: i32, h: i32) void {
        qtc.QWindow_Resize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setFilePath` instead
    ///
    pub const SetFilePath = setFilePath;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _filePath: []const u8 `
    ///
    pub fn setFilePath(self: Q3DBars, _filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = _filePath.len,
            .data = _filePath.ptr,
        };
        qtc.QWindow_SetFilePath(@ptrCast(self.ptr), filePath_str);
    }

    /// ### DEPRECATED: Use `filePath` instead
    ///
    pub const FilePath = filePath;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn filePath(self: Q3DBars, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWindow_FilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Q3DBars.filePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: Q3DBars, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QWindow_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn icon(self: Q3DBars) QIcon {
        return .{ .ptr = qtc.QWindow_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroy` instead
    ///
    pub const Destroy = destroy;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#destroy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn destroy(self: Q3DBars) void {
        qtc.QWindow_Destroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKeyboardGrabEnabled` instead
    ///
    pub const SetKeyboardGrabEnabled = setKeyboardGrabEnabled;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` grab: bool `
    ///
    pub fn setKeyboardGrabEnabled(self: Q3DBars, grab: bool) bool {
        return qtc.QWindow_SetKeyboardGrabEnabled(@ptrCast(self.ptr), grab);
    }

    /// ### DEPRECATED: Use `setMouseGrabEnabled` instead
    ///
    pub const SetMouseGrabEnabled = setMouseGrabEnabled;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` grab: bool `
    ///
    pub fn setMouseGrabEnabled(self: Q3DBars, grab: bool) bool {
        return qtc.QWindow_SetMouseGrabEnabled(@ptrCast(self.ptr), grab);
    }

    /// ### DEPRECATED: Use `screen` instead
    ///
    pub const Screen = screen;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn screen(self: Q3DBars) QScreen {
        return .{ .ptr = qtc.QWindow_Screen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScreen` instead
    ///
    pub const SetScreen = setScreen;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: Q3DBars, _screen: anytype) void {
        comptime _ = @TypeOf(_screen)._is_QScreen;
        qtc.QWindow_SetScreen(@ptrCast(self.ptr), @ptrCast(_screen.ptr));
    }

    /// ### DEPRECATED: Use `mapToGlobal` instead
    ///
    pub const MapToGlobal = mapToGlobal;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` pos: QPointF `
    ///
    pub fn mapToGlobal(self: Q3DBars, pos: anytype) QPointF {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return .{ .ptr = qtc.QWindow_MapToGlobal(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal` instead
    ///
    pub const MapFromGlobal = mapFromGlobal;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` pos: QPointF `
    ///
    pub fn mapFromGlobal(self: Q3DBars, pos: anytype) QPointF {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return .{ .ptr = qtc.QWindow_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToGlobal2` instead
    ///
    pub const MapToGlobal2 = mapToGlobal2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` pos: QPoint `
    ///
    pub fn mapToGlobal2(self: Q3DBars, pos: anytype) QPoint {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QWindow_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal2` instead
    ///
    pub const MapFromGlobal2 = mapFromGlobal2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` pos: QPoint `
    ///
    pub fn mapFromGlobal2(self: Q3DBars, pos: anytype) QPoint {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QWindow_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `cursor` instead
    ///
    pub const Cursor = cursor;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn cursor(self: Q3DBars) QCursor {
        return .{ .ptr = qtc.QWindow_Cursor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCursor` instead
    ///
    pub const SetCursor = setCursor;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: Q3DBars, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QCursor;
        qtc.QWindow_SetCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `unsetCursor` instead
    ///
    pub const UnsetCursor = unsetCursor;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn unsetCursor(self: Q3DBars) void {
        qtc.QWindow_UnsetCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromWinId` instead
    ///
    pub const FromWinId = fromWinId;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: usize `
    ///
    pub fn fromWinId(id: usize) QWindow {
        return .{ .ptr = qtc.QWindow_FromWinId(@bitCast(id)) };
    }

    /// ### DEPRECATED: Use `requestActivate` instead
    ///
    pub const RequestActivate = requestActivate;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn requestActivate(self: Q3DBars) void {
        qtc.QWindow_RequestActivate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: Q3DBars, visible: bool) void {
        qtc.QWindow_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn show(self: Q3DBars) void {
        qtc.QWindow_Show(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn hide(self: Q3DBars) void {
        qtc.QWindow_Hide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showMinimized` instead
    ///
    pub const ShowMinimized = showMinimized;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn showMinimized(self: Q3DBars) void {
        qtc.QWindow_ShowMinimized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showMaximized` instead
    ///
    pub const ShowMaximized = showMaximized;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn showMaximized(self: Q3DBars) void {
        qtc.QWindow_ShowMaximized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showFullScreen` instead
    ///
    pub const ShowFullScreen = showFullScreen;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn showFullScreen(self: Q3DBars) void {
        qtc.QWindow_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showNormal` instead
    ///
    pub const ShowNormal = showNormal;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn showNormal(self: Q3DBars) void {
        qtc.QWindow_ShowNormal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn close(self: Q3DBars) bool {
        return qtc.QWindow_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `raise` instead
    ///
    pub const Raise = raise;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn raise(self: Q3DBars) void {
        qtc.QWindow_Raise(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lower` instead
    ///
    pub const Lower = lower;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn lower(self: Q3DBars) void {
        qtc.QWindow_Lower(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startSystemResize` instead
    ///
    pub const StartSystemResize = startSystemResize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` edges: flag of qnamespace_enums.Edge `
    ///
    pub fn startSystemResize(self: Q3DBars, edges: i32) bool {
        return qtc.QWindow_StartSystemResize(@ptrCast(self.ptr), @bitCast(edges));
    }

    /// ### DEPRECATED: Use `startSystemMove` instead
    ///
    pub const StartSystemMove = startSystemMove;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn startSystemMove(self: Q3DBars) bool {
        return qtc.QWindow_StartSystemMove(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTitle` instead
    ///
    pub const SetTitle = setTitle;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn setTitle(self: Q3DBars, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QWindow_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` arg: i32 `
    ///
    pub fn setX(self: Q3DBars, arg: i32) void {
        qtc.QWindow_SetX(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` arg: i32 `
    ///
    pub fn setY(self: Q3DBars, arg: i32) void {
        qtc.QWindow_SetY(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` arg: i32 `
    ///
    pub fn setWidth(self: Q3DBars, arg: i32) void {
        qtc.QWindow_SetWidth(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `setHeight` instead
    ///
    pub const SetHeight = setHeight;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` arg: i32 `
    ///
    pub fn setHeight(self: Q3DBars, arg: i32) void {
        qtc.QWindow_SetHeight(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` posx: i32 `
    ///
    /// ` posy: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: Q3DBars, posx: i32, posy: i32, w: i32, h: i32) void {
        qtc.QWindow_SetGeometry(@ptrCast(self.ptr), @bitCast(posx), @bitCast(posy), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setGeometry2` instead
    ///
    pub const SetGeometry2 = setGeometry2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` rect: QRect `
    ///
    pub fn setGeometry2(self: Q3DBars, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QWindow_SetGeometry2(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumWidth` instead
    ///
    pub const SetMinimumWidth = setMinimumWidth;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` w: i32 `
    ///
    pub fn setMinimumWidth(self: Q3DBars, w: i32) void {
        qtc.QWindow_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setMinimumHeight` instead
    ///
    pub const SetMinimumHeight = setMinimumHeight;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` h: i32 `
    ///
    pub fn setMinimumHeight(self: Q3DBars, h: i32) void {
        qtc.QWindow_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setMaximumWidth` instead
    ///
    pub const SetMaximumWidth = setMaximumWidth;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` w: i32 `
    ///
    pub fn setMaximumWidth(self: Q3DBars, w: i32) void {
        qtc.QWindow_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setMaximumHeight` instead
    ///
    pub const SetMaximumHeight = setMaximumHeight;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` h: i32 `
    ///
    pub fn setMaximumHeight(self: Q3DBars, h: i32) void {
        qtc.QWindow_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### DEPRECATED: Use `alert` instead
    ///
    pub const Alert = alert;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#alert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` msec: i32 `
    ///
    pub fn alert(self: Q3DBars, msec: i32) void {
        qtc.QWindow_Alert(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### DEPRECATED: Use `requestUpdate` instead
    ///
    pub const RequestUpdate = requestUpdate;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn requestUpdate(self: Q3DBars) void {
        qtc.QWindow_RequestUpdate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `screenChanged` instead
    ///
    pub const ScreenChanged = screenChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn screenChanged(self: Q3DBars, _screen: anytype) void {
        comptime _ = @TypeOf(_screen)._is_QScreen;
        qtc.QWindow_ScreenChanged(@ptrCast(self.ptr), @ptrCast(_screen.ptr));
    }

    /// ### DEPRECATED: Use `onScreenChanged` instead
    ///
    pub const OnScreenChanged = onScreenChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, screen: QScreen) callconv(.c) void `
    ///
    pub fn onScreenChanged(self: Q3DBars, callback: *const fn (Q3DBars, QScreen) callconv(.c) void) void {
        qtc.QWindow_Connect_ScreenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `modalityChanged` instead
    ///
    pub const ModalityChanged = modalityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _modality: qnamespace_enums.WindowModality `
    ///
    pub fn modalityChanged(self: Q3DBars, _modality: i32) void {
        qtc.QWindow_ModalityChanged(@ptrCast(self.ptr), @bitCast(_modality));
    }

    /// ### DEPRECATED: Use `onModalityChanged` instead
    ///
    pub const OnModalityChanged = onModalityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, modality: qnamespace_enums.WindowModality) callconv(.c) void `
    ///
    pub fn onModalityChanged(self: Q3DBars, callback: *const fn (Q3DBars, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_ModalityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowStateChanged` instead
    ///
    pub const WindowStateChanged = windowStateChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _windowState: qnamespace_enums.WindowState `
    ///
    pub fn windowStateChanged(self: Q3DBars, _windowState: i32) void {
        qtc.QWindow_WindowStateChanged(@ptrCast(self.ptr), @bitCast(_windowState));
    }

    /// ### DEPRECATED: Use `onWindowStateChanged` instead
    ///
    pub const OnWindowStateChanged = onWindowStateChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, windowState: qnamespace_enums.WindowState) callconv(.c) void `
    ///
    pub fn onWindowStateChanged(self: Q3DBars, callback: *const fn (Q3DBars, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_WindowStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowTitleChanged` instead
    ///
    pub const WindowTitleChanged = windowTitleChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn windowTitleChanged(self: Q3DBars, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QWindow_WindowTitleChanged(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `onWindowTitleChanged` instead
    ///
    pub const OnWindowTitleChanged = onWindowTitleChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: Q3DBars, callback: *const fn (Q3DBars, [*:0]const u8) callconv(.c) void) void {
        qtc.QWindow_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xChanged` instead
    ///
    pub const XChanged = xChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` arg: i32 `
    ///
    pub fn xChanged(self: Q3DBars, arg: i32) void {
        qtc.QWindow_XChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onXChanged` instead
    ///
    pub const OnXChanged = onXChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, arg: i32) callconv(.c) void `
    ///
    pub fn onXChanged(self: Q3DBars, callback: *const fn (Q3DBars, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_XChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yChanged` instead
    ///
    pub const YChanged = yChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` arg: i32 `
    ///
    pub fn yChanged(self: Q3DBars, arg: i32) void {
        qtc.QWindow_YChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onYChanged` instead
    ///
    pub const OnYChanged = onYChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, arg: i32) callconv(.c) void `
    ///
    pub fn onYChanged(self: Q3DBars, callback: *const fn (Q3DBars, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_YChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widthChanged` instead
    ///
    pub const WidthChanged = widthChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` arg: i32 `
    ///
    pub fn widthChanged(self: Q3DBars, arg: i32) void {
        qtc.QWindow_WidthChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onWidthChanged` instead
    ///
    pub const OnWidthChanged = onWidthChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, arg: i32) callconv(.c) void `
    ///
    pub fn onWidthChanged(self: Q3DBars, callback: *const fn (Q3DBars, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_WidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightChanged` instead
    ///
    pub const HeightChanged = heightChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` arg: i32 `
    ///
    pub fn heightChanged(self: Q3DBars, arg: i32) void {
        qtc.QWindow_HeightChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onHeightChanged` instead
    ///
    pub const OnHeightChanged = onHeightChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, arg: i32) callconv(.c) void `
    ///
    pub fn onHeightChanged(self: Q3DBars, callback: *const fn (Q3DBars, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_HeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumWidthChanged` instead
    ///
    pub const MinimumWidthChanged = minimumWidthChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` arg: i32 `
    ///
    pub fn minimumWidthChanged(self: Q3DBars, arg: i32) void {
        qtc.QWindow_MinimumWidthChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onMinimumWidthChanged` instead
    ///
    pub const OnMinimumWidthChanged = onMinimumWidthChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, arg: i32) callconv(.c) void `
    ///
    pub fn onMinimumWidthChanged(self: Q3DBars, callback: *const fn (Q3DBars, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MinimumWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumHeightChanged` instead
    ///
    pub const MinimumHeightChanged = minimumHeightChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` arg: i32 `
    ///
    pub fn minimumHeightChanged(self: Q3DBars, arg: i32) void {
        qtc.QWindow_MinimumHeightChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onMinimumHeightChanged` instead
    ///
    pub const OnMinimumHeightChanged = onMinimumHeightChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, arg: i32) callconv(.c) void `
    ///
    pub fn onMinimumHeightChanged(self: Q3DBars, callback: *const fn (Q3DBars, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MinimumHeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maximumWidthChanged` instead
    ///
    pub const MaximumWidthChanged = maximumWidthChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` arg: i32 `
    ///
    pub fn maximumWidthChanged(self: Q3DBars, arg: i32) void {
        qtc.QWindow_MaximumWidthChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onMaximumWidthChanged` instead
    ///
    pub const OnMaximumWidthChanged = onMaximumWidthChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, arg: i32) callconv(.c) void `
    ///
    pub fn onMaximumWidthChanged(self: Q3DBars, callback: *const fn (Q3DBars, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MaximumWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maximumHeightChanged` instead
    ///
    pub const MaximumHeightChanged = maximumHeightChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` arg: i32 `
    ///
    pub fn maximumHeightChanged(self: Q3DBars, arg: i32) void {
        qtc.QWindow_MaximumHeightChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onMaximumHeightChanged` instead
    ///
    pub const OnMaximumHeightChanged = onMaximumHeightChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, arg: i32) callconv(.c) void `
    ///
    pub fn onMaximumHeightChanged(self: Q3DBars, callback: *const fn (Q3DBars, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MaximumHeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` arg: bool `
    ///
    pub fn visibleChanged(self: Q3DBars, arg: bool) void {
        qtc.QWindow_VisibleChanged(@ptrCast(self.ptr), arg);
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, arg: bool) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: Q3DBars, callback: *const fn (Q3DBars, bool) callconv(.c) void) void {
        qtc.QWindow_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibilityChanged` instead
    ///
    pub const VisibilityChanged = visibilityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _visibility: qwindow_enums.Visibility `
    ///
    pub fn visibilityChanged(self: Q3DBars, _visibility: i32) void {
        qtc.QWindow_VisibilityChanged(@ptrCast(self.ptr), @bitCast(_visibility));
    }

    /// ### DEPRECATED: Use `onVisibilityChanged` instead
    ///
    pub const OnVisibilityChanged = onVisibilityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, visibility: qwindow_enums.Visibility) callconv(.c) void `
    ///
    pub fn onVisibilityChanged(self: Q3DBars, callback: *const fn (Q3DBars, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_VisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activeChanged` instead
    ///
    pub const ActiveChanged = activeChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn activeChanged(self: Q3DBars) void {
        qtc.QWindow_ActiveChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onActiveChanged` instead
    ///
    pub const OnActiveChanged = onActiveChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars) callconv(.c) void `
    ///
    pub fn onActiveChanged(self: Q3DBars, callback: *const fn (Q3DBars) callconv(.c) void) void {
        qtc.QWindow_Connect_ActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contentOrientationChanged` instead
    ///
    pub const ContentOrientationChanged = contentOrientationChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn contentOrientationChanged(self: Q3DBars, orientation: i32) void {
        qtc.QWindow_ContentOrientationChanged(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `onContentOrientationChanged` instead
    ///
    pub const OnContentOrientationChanged = onContentOrientationChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, orientation: qnamespace_enums.ScreenOrientation) callconv(.c) void `
    ///
    pub fn onContentOrientationChanged(self: Q3DBars, callback: *const fn (Q3DBars, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_ContentOrientationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusObjectChanged` instead
    ///
    pub const FocusObjectChanged = focusObjectChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` object: QObject `
    ///
    pub fn focusObjectChanged(self: Q3DBars, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QWindow_FocusObjectChanged(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `onFocusObjectChanged` instead
    ///
    pub const OnFocusObjectChanged = onFocusObjectChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, object: QObject) callconv(.c) void `
    ///
    pub fn onFocusObjectChanged(self: Q3DBars, callback: *const fn (Q3DBars, QObject) callconv(.c) void) void {
        qtc.QWindow_Connect_FocusObjectChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `opacityChanged` instead
    ///
    pub const OpacityChanged = opacityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn opacityChanged(self: Q3DBars, _opacity: f64) void {
        qtc.QWindow_OpacityChanged(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `onOpacityChanged` instead
    ///
    pub const OnOpacityChanged = onOpacityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, opacity: f64) callconv(.c) void `
    ///
    pub fn onOpacityChanged(self: Q3DBars, callback: *const fn (Q3DBars, f64) callconv(.c) void) void {
        qtc.QWindow_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `transientParentChanged` instead
    ///
    pub const TransientParentChanged = transientParentChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _transientParent: QWindow `
    ///
    pub fn transientParentChanged(self: Q3DBars, _transientParent: anytype) void {
        comptime _ = @TypeOf(_transientParent)._is_QWindow;
        qtc.QWindow_TransientParentChanged(@ptrCast(self.ptr), @ptrCast(_transientParent.ptr));
    }

    /// ### DEPRECATED: Use `onTransientParentChanged` instead
    ///
    pub const OnTransientParentChanged = onTransientParentChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, transientParent: QWindow) callconv(.c) void `
    ///
    pub fn onTransientParentChanged(self: Q3DBars, callback: *const fn (Q3DBars, QWindow) callconv(.c) void) void {
        qtc.QWindow_Connect_TransientParentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent1` instead
    ///
    pub const Parent1 = parent1;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` mode: qwindow_enums.AncestorMode `
    ///
    pub fn parent1(self: Q3DBars, mode: i32) QWindow {
        return .{ .ptr = qtc.QWindow_Parent1(@ptrCast(self.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `setFlag2` instead
    ///
    pub const SetFlag2 = setFlag2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setFlag2(self: Q3DBars, param1: i32, on: bool) void {
        qtc.QWindow_SetFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// ### DEPRECATED: Use `isAncestorOf2` instead
    ///
    pub const IsAncestorOf2 = isAncestorOf2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` child: QWindow `
    ///
    /// ` mode: qwindow_enums.AncestorMode `
    ///
    pub fn isAncestorOf2(self: Q3DBars, child: anytype, mode: i32) bool {
        comptime _ = @TypeOf(child)._is_QWindow;
        return qtc.QWindow_IsAncestorOf2(@ptrCast(self.ptr), @ptrCast(child.ptr), @bitCast(mode));
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
    /// ` self: Q3DBars `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: Q3DBars, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Q3DBars.objectName: Memory allocation failed");
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
    /// ` self: Q3DBars `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: Q3DBars, name: []const u8) void {
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
    /// ` self: Q3DBars `
    ///
    pub fn isWidgetType(self: Q3DBars) bool {
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
    /// ` self: Q3DBars `
    ///
    pub fn isWindowType(self: Q3DBars) bool {
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
    /// ` self: Q3DBars `
    ///
    pub fn isQuickItemType(self: Q3DBars) bool {
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
    /// ` self: Q3DBars `
    ///
    pub fn signalsBlocked(self: Q3DBars) bool {
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
    /// ` self: Q3DBars `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: Q3DBars, b: bool) bool {
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
    /// ` self: Q3DBars `
    ///
    pub fn thread(self: Q3DBars) QThread {
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
    /// ` self: Q3DBars `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: Q3DBars, _thread: anytype) bool {
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
    /// ` self: Q3DBars `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: Q3DBars, interval: i32) i32 {
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
    /// ` self: Q3DBars `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: Q3DBars, time: i64) i32 {
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
    /// ` self: Q3DBars `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: Q3DBars, id: i32) void {
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
    /// ` self: Q3DBars `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: Q3DBars, id: i32) void {
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
    /// ` self: Q3DBars `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: Q3DBars, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("Q3DBars.children: Memory allocation failed");
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
    /// ` self: Q3DBars `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: Q3DBars, filterObj: anytype) void {
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
    /// ` self: Q3DBars `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: Q3DBars, obj: anytype) void {
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
    /// ` self: Q3DBars `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: Q3DBars, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Q3DBars `
    ///
    pub fn disconnect3(self: Q3DBars) bool {
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
    /// ` self: Q3DBars `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: Q3DBars, receiver: anytype) bool {
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
    /// ` self: Q3DBars `
    ///
    pub fn dumpObjectTree(self: Q3DBars) void {
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
    /// ` self: Q3DBars `
    ///
    pub fn dumpObjectInfo(self: Q3DBars) void {
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
    /// ` self: Q3DBars `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: Q3DBars, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Q3DBars `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: Q3DBars, name: [:0]const u8) QVariant {
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
    /// ` self: Q3DBars `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: Q3DBars, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Q3DBars.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Q3DBars.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Q3DBars `
    ///
    pub fn bindingStorage(self: Q3DBars) QBindingStorage {
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
    /// ` self: Q3DBars `
    ///
    pub fn bindingStorage2(self: Q3DBars) QBindingStorage {
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
    /// ` self: Q3DBars `
    ///
    pub fn destroyed(self: Q3DBars) void {
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
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars) callconv(.c) void `
    ///
    pub fn onDestroyed(self: Q3DBars, callback: *const fn (Q3DBars) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DBars `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: Q3DBars, classname: [:0]const u8) bool {
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
    /// ` self: Q3DBars `
    ///
    pub fn deleteLater(self: Q3DBars) void {
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
    /// ` self: Q3DBars `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: Q3DBars, interval: i32, timerType: i32) i32 {
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
    /// ` self: Q3DBars `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: Q3DBars, time: i64, timerType: i32) i32 {
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
    /// ` self: Q3DBars `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: Q3DBars, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Q3DBars `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: Q3DBars, signal: [:0]const u8) bool {
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
    /// ` self: Q3DBars `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: Q3DBars, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Q3DBars `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: Q3DBars, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Q3DBars `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: Q3DBars, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Q3DBars `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: Q3DBars, param1: anytype) void {
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
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: Q3DBars, callback: *const fn (Q3DBars, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `surfaceClass` instead
    ///
    pub const SurfaceClass = surfaceClass;

    /// Inherited from QSurface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ## Returns:
    ///
    /// ` qsurface_enums.SurfaceClass `
    ///
    pub fn surfaceClass(self: Q3DBars) i32 {
        return qtc.QSurface_SurfaceClass(@ptrCast(self.asQSurface().ptr));
    }

    /// ### DEPRECATED: Use `supportsOpenGL` instead
    ///
    pub const SupportsOpenGL = supportsOpenGL;

    /// Inherited from QSurface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn supportsOpenGL(self: Q3DBars) bool {
        return qtc.QSurface_SupportsOpenGL(@ptrCast(self.asQSurface().ptr));
    }

    /// ### DEPRECATED: Use `shadowsSupported` instead
    ///
    pub const ShadowsSupported = shadowsSupported;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#shadowsSupported)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn shadowsSupported(self: Q3DBars) bool {
        return qtc.Q3DBars_ShadowsSupported(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superShadowsSupported` instead
    ///
    pub const SuperShadowsSupported = superShadowsSupported;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#shadowsSupported)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn superShadowsSupported(self: Q3DBars) bool {
        return qtc.Q3DBars_SuperShadowsSupported(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onShadowsSupported` instead
    ///
    pub const OnShadowsSupported = onShadowsSupported;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#shadowsSupported)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars) callconv(.c) bool `
    ///
    pub fn onShadowsSupported(self: Q3DBars, callback: *const fn (Q3DBars) callconv(.c) bool) void {
        qtc.Q3DBars_OnShadowsSupported(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: Q3DBars, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Q3DBars_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: Q3DBars, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Q3DBars_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: Q3DBars, callback: *const fn (Q3DBars, QEvent) callconv(.c) bool) void {
        qtc.Q3DBars_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _event: QResizeEvent `
    ///
    pub fn resizeEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.Q3DBars_ResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _event: QResizeEvent `
    ///
    pub fn superResizeEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.Q3DBars_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn onResizeEvent(self: Q3DBars, callback: *const fn (Q3DBars, QResizeEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `exposeEvent` instead
    ///
    pub const ExposeEvent = exposeEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#exposeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _event: QExposeEvent `
    ///
    pub fn exposeEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QExposeEvent;
        qtc.Q3DBars_ExposeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superExposeEvent` instead
    ///
    pub const SuperExposeEvent = superExposeEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#exposeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _event: QExposeEvent `
    ///
    pub fn superExposeEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QExposeEvent;
        qtc.Q3DBars_SuperExposeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onExposeEvent` instead
    ///
    pub const OnExposeEvent = onExposeEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#exposeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, event: QExposeEvent) callconv(.c) void `
    ///
    pub fn onExposeEvent(self: Q3DBars, callback: *const fn (Q3DBars, QExposeEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnExposeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.Q3DBars_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.Q3DBars_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: Q3DBars, callback: *const fn (Q3DBars, QMouseEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `touchEvent` instead
    ///
    pub const TouchEvent = touchEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#touchEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _event: QTouchEvent `
    ///
    pub fn touchEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTouchEvent;
        qtc.Q3DBars_TouchEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTouchEvent` instead
    ///
    pub const SuperTouchEvent = superTouchEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#touchEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _event: QTouchEvent `
    ///
    pub fn superTouchEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTouchEvent;
        qtc.Q3DBars_SuperTouchEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTouchEvent` instead
    ///
    pub const OnTouchEvent = onTouchEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#touchEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, event: QTouchEvent) callconv(.c) void `
    ///
    pub fn onTouchEvent(self: Q3DBars, callback: *const fn (Q3DBars, QTouchEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnTouchEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mousePressEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.Q3DBars_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMousePressEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.Q3DBars_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMousePressEvent(self: Q3DBars, callback: *const fn (Q3DBars, QMouseEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.Q3DBars_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.Q3DBars_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseReleaseEvent(self: Q3DBars, callback: *const fn (Q3DBars, QMouseEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.Q3DBars_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.Q3DBars_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: Q3DBars, callback: *const fn (Q3DBars, QMouseEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn wheelEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.Q3DBars_WheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn superWheelEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.Q3DBars_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

    /// Inherited from QAbstract3DGraph
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn onWheelEvent(self: Q3DBars, callback: *const fn (Q3DBars, QWheelEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `surfaceType` instead
    ///
    pub const SurfaceType = surfaceType;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ## Returns:
    ///
    /// ` qsurface_enums.SurfaceType `
    ///
    pub fn surfaceType(self: Q3DBars) i32 {
        return qtc.Q3DBars_SurfaceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSurfaceType` instead
    ///
    pub const SuperSurfaceType = superSurfaceType;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ## Returns:
    ///
    /// ` qsurface_enums.SurfaceType `
    ///
    pub fn superSurfaceType(self: Q3DBars) i32 {
        return qtc.Q3DBars_SuperSurfaceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSurfaceType` instead
    ///
    pub const OnSurfaceType = onSurfaceType;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars) callconv(.c) i32 `
    ///
    pub fn onSurfaceType(self: Q3DBars, callback: *const fn (Q3DBars) callconv(.c) i32) void {
        qtc.Q3DBars_OnSurfaceType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn format(self: Q3DBars) QSurfaceFormat {
        return .{ .ptr = qtc.Q3DBars_Format(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superFormat` instead
    ///
    pub const SuperFormat = superFormat;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn superFormat(self: Q3DBars) QSurfaceFormat {
        return .{ .ptr = qtc.Q3DBars_SuperFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onFormat` instead
    ///
    pub const OnFormat = onFormat;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars) callconv(.c) QSurfaceFormat `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFormat(self: Q3DBars, callback: *const fn (Q3DBars) callconv(.c) QSurfaceFormat) void {
        qtc.Q3DBars_OnFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn size(self: Q3DBars) QSize {
        return .{ .ptr = qtc.Q3DBars_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSize` instead
    ///
    pub const SuperSize = superSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn superSize(self: Q3DBars) QSize {
        return .{ .ptr = qtc.Q3DBars_SuperSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSize` instead
    ///
    pub const OnSize = onSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars) callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSize(self: Q3DBars, callback: *const fn (Q3DBars) callconv(.c) QSize) void {
        qtc.Q3DBars_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `accessibleRoot` instead
    ///
    pub const AccessibleRoot = accessibleRoot;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn accessibleRoot(self: Q3DBars) QAccessibleInterface {
        return .{ .ptr = qtc.Q3DBars_AccessibleRoot(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superAccessibleRoot` instead
    ///
    pub const SuperAccessibleRoot = superAccessibleRoot;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn superAccessibleRoot(self: Q3DBars) QAccessibleInterface {
        return .{ .ptr = qtc.Q3DBars_SuperAccessibleRoot(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onAccessibleRoot` instead
    ///
    pub const OnAccessibleRoot = onAccessibleRoot;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars) callconv(.c) QAccessibleInterface `
    ///
    pub fn onAccessibleRoot(self: Q3DBars, callback: *const fn (Q3DBars) callconv(.c) QAccessibleInterface) void {
        qtc.Q3DBars_OnAccessibleRoot(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusObject` instead
    ///
    pub const FocusObject = focusObject;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn focusObject(self: Q3DBars) QObject {
        return .{ .ptr = qtc.Q3DBars_FocusObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superFocusObject` instead
    ///
    pub const SuperFocusObject = superFocusObject;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    pub fn superFocusObject(self: Q3DBars) QObject {
        return .{ .ptr = qtc.Q3DBars_SuperFocusObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onFocusObject` instead
    ///
    pub const OnFocusObject = onFocusObject;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars) callconv(.c) QObject `
    ///
    pub fn onFocusObject(self: Q3DBars, callback: *const fn (Q3DBars) callconv(.c) QObject) void {
        qtc.Q3DBars_OnFocusObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QPaintEvent `
    ///
    pub fn paintEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.Q3DBars_PaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QPaintEvent `
    ///
    pub fn superPaintEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.Q3DBars_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, param1: QPaintEvent) callconv(.c) void `
    ///
    pub fn onPaintEvent(self: Q3DBars, callback: *const fn (Q3DBars, QPaintEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `moveEvent` instead
    ///
    pub const MoveEvent = moveEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QMoveEvent `
    ///
    pub fn moveEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMoveEvent;
        qtc.Q3DBars_MoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superMoveEvent` instead
    ///
    pub const SuperMoveEvent = superMoveEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QMoveEvent `
    ///
    pub fn superMoveEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMoveEvent;
        qtc.Q3DBars_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onMoveEvent` instead
    ///
    pub const OnMoveEvent = onMoveEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, param1: QMoveEvent) callconv(.c) void `
    ///
    pub fn onMoveEvent(self: Q3DBars, callback: *const fn (Q3DBars, QMoveEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn focusInEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.Q3DBars_FocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.Q3DBars_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusInEvent(self: Q3DBars, callback: *const fn (Q3DBars, QFocusEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn focusOutEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.Q3DBars_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.Q3DBars_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusOutEvent(self: Q3DBars, callback: *const fn (Q3DBars, QFocusEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `showEvent` instead
    ///
    pub const ShowEvent = showEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn showEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.Q3DBars_ShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superShowEvent` instead
    ///
    pub const SuperShowEvent = superShowEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn superShowEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.Q3DBars_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onShowEvent` instead
    ///
    pub const OnShowEvent = onShowEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, param1: QShowEvent) callconv(.c) void `
    ///
    pub fn onShowEvent(self: Q3DBars, callback: *const fn (Q3DBars, QShowEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hideEvent` instead
    ///
    pub const HideEvent = hideEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QHideEvent `
    ///
    pub fn hideEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QHideEvent;
        qtc.Q3DBars_HideEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superHideEvent` instead
    ///
    pub const SuperHideEvent = superHideEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QHideEvent `
    ///
    pub fn superHideEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QHideEvent;
        qtc.Q3DBars_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onHideEvent` instead
    ///
    pub const OnHideEvent = onHideEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, param1: QHideEvent) callconv(.c) void `
    ///
    pub fn onHideEvent(self: Q3DBars, callback: *const fn (Q3DBars, QHideEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeEvent` instead
    ///
    pub const CloseEvent = closeEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QCloseEvent `
    ///
    pub fn closeEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.Q3DBars_CloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superCloseEvent` instead
    ///
    pub const SuperCloseEvent = superCloseEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QCloseEvent `
    ///
    pub fn superCloseEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.Q3DBars_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onCloseEvent` instead
    ///
    pub const OnCloseEvent = onCloseEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, param1: QCloseEvent) callconv(.c) void `
    ///
    pub fn onCloseEvent(self: Q3DBars, callback: *const fn (Q3DBars, QCloseEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn keyPressEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.Q3DBars_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.Q3DBars_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, param1: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyPressEvent(self: Q3DBars, callback: *const fn (Q3DBars, QKeyEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyReleaseEvent` instead
    ///
    pub const KeyReleaseEvent = keyReleaseEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.Q3DBars_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superKeyReleaseEvent` instead
    ///
    pub const SuperKeyReleaseEvent = superKeyReleaseEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.Q3DBars_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onKeyReleaseEvent` instead
    ///
    pub const OnKeyReleaseEvent = onKeyReleaseEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, param1: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: Q3DBars, callback: *const fn (Q3DBars, QKeyEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tabletEvent` instead
    ///
    pub const TabletEvent = tabletEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QTabletEvent `
    ///
    pub fn tabletEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTabletEvent;
        qtc.Q3DBars_TabletEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superTabletEvent` instead
    ///
    pub const SuperTabletEvent = superTabletEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` param1: QTabletEvent `
    ///
    pub fn superTabletEvent(self: Q3DBars, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTabletEvent;
        qtc.Q3DBars_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onTabletEvent` instead
    ///
    pub const OnTabletEvent = onTabletEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, param1: QTabletEvent) callconv(.c) void `
    ///
    pub fn onTabletEvent(self: Q3DBars, callback: *const fn (Q3DBars, QTabletEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `nativeEvent` instead
    ///
    pub const NativeEvent = nativeEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` eventType: []const u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn nativeEvent(self: Q3DBars, eventType: []const u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.Q3DBars_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `superNativeEvent` instead
    ///
    pub const SuperNativeEvent = superNativeEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` eventType: []const u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn superNativeEvent(self: Q3DBars, eventType: []const u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.Q3DBars_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `onNativeEvent` instead
    ///
    pub const OnNativeEvent = onNativeEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, eventType: [*:0]const u8, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn onNativeEvent(self: Q3DBars, callback: *const fn (Q3DBars, [*:0]const u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.Q3DBars_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DBars `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: Q3DBars, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Q3DBars_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DBars `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: Q3DBars, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Q3DBars_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: Q3DBars, callback: *const fn (Q3DBars, QObject, QEvent) callconv(.c) bool) void {
        qtc.Q3DBars_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DBars `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Q3DBars_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DBars `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Q3DBars_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: Q3DBars, callback: *const fn (Q3DBars, QTimerEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DBars `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Q3DBars_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DBars `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Q3DBars_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: Q3DBars, callback: *const fn (Q3DBars, QChildEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DBars `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Q3DBars_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DBars `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: Q3DBars, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Q3DBars_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: Q3DBars, callback: *const fn (Q3DBars, QEvent) callconv(.c) void) void {
        qtc.Q3DBars_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DBars `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: Q3DBars, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Q3DBars_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Q3DBars `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: Q3DBars, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Q3DBars_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: Q3DBars, callback: *const fn (Q3DBars, QMetaMethod) callconv(.c) void) void {
        qtc.Q3DBars_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DBars `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: Q3DBars, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Q3DBars_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Q3DBars `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: Q3DBars, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Q3DBars_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Q3DBars`
    ///
    /// ` callback: *const fn (self: Q3DBars, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: Q3DBars, callback: *const fn (Q3DBars, QMetaMethod) callconv(.c) void) void {
        qtc.Q3DBars_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resolveInterface` instead
    ///
    pub const ResolveInterface = resolveInterface;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DBars `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn resolveInterface(self: Q3DBars, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.Q3DBars_ResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
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
    /// ` self: Q3DBars `
    ///
    pub fn sender(self: Q3DBars) QObject {
        return .{ .ptr = qtc.Q3DBars_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: Q3DBars `
    ///
    pub fn senderSignalIndex(self: Q3DBars) i32 {
        return qtc.Q3DBars_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Q3DBars `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: Q3DBars, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Q3DBars_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Q3DBars `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: Q3DBars, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Q3DBars_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Q3DBars `
    ///
    /// ` callback: *const fn (self: Q3DBars, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: Q3DBars, callback: *const fn (Q3DBars, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dbars-qtdatavis.html#dtor.Q3DBars)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Q3DBars `
    ///
    pub fn delete(self: Q3DBars) void {
        qtc.Q3DBars_Delete(@ptrCast(self.ptr));
    }
};
