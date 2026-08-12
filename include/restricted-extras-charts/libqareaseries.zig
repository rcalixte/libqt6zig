const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractAxis = @import("libqt6").QAbstractAxis;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBrush = @import("libqt6").QBrush;
const QChart = @import("libqt6").QChart;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QLineSeries = @import("libqt6").QLineSeries;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPen = @import("libqt6").QPen;
const QPointF = @import("libqt6").QPointF;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html)
pub const QAreaSeries = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAreaSeries,

    pub const _is_QAreaSeries = {};
    pub const _is_QAbstractSeries = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAreaSeries object in C++ memory
    ///
    pub fn new() QAreaSeries {
        return .{ .ptr = qtc.QAreaSeries_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAreaSeries object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _upperSeries: QLineSeries `
    ///
    pub fn new2(_upperSeries: anytype) QAreaSeries {
        comptime _ = @TypeOf(_upperSeries)._is_QLineSeries;
        return .{ .ptr = qtc.QAreaSeries_new2(@ptrCast(_upperSeries.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QAreaSeries object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) QAreaSeries {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QAreaSeries_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QAreaSeries object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _upperSeries: QLineSeries `
    ///
    /// ` _lowerSeries: QLineSeries `
    ///
    pub fn new4(_upperSeries: anytype, _lowerSeries: anytype) QAreaSeries {
        comptime _ = @TypeOf(_upperSeries)._is_QLineSeries;
        comptime _ = @TypeOf(_lowerSeries)._is_QLineSeries;
        return .{ .ptr = qtc.QAreaSeries_new4(@ptrCast(_upperSeries.ptr), @ptrCast(_lowerSeries.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn metaObject(self: QAreaSeries) QMetaObject {
        return .{ .ptr = qtc.QAreaSeries_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QAreaSeries, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QAreaSeries_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAreaSeries `
    ///
    pub fn superMetaObject(self: QAreaSeries) QMetaObject {
        return .{ .ptr = qtc.QAreaSeries_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QAreaSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAreaSeries_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QAreaSeries, callback: *const fn (QAreaSeries, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QAreaSeries_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QAreaSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAreaSeries_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QAreaSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAreaSeries_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QAreaSeries, callback: *const fn (QAreaSeries, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QAreaSeries_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QAreaSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAreaSeries_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAreaSeries.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn type0(self: QAreaSeries) i32 {
        return qtc.QAreaSeries_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onType(self: QAreaSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QAreaSeries_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn superType(self: QAreaSeries) i32 {
        return qtc.QAreaSeries_SuperType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUpperSeries` instead
    ///
    pub const SetUpperSeries = setUpperSeries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setUpperSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` series: QLineSeries `
    ///
    pub fn setUpperSeries(self: QAreaSeries, series: anytype) void {
        comptime _ = @TypeOf(series)._is_QLineSeries;
        qtc.QAreaSeries_SetUpperSeries(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// ### DEPRECATED: Use `upperSeries` instead
    ///
    pub const UpperSeries = upperSeries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#upperSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn upperSeries(self: QAreaSeries) QLineSeries {
        return .{ .ptr = qtc.QAreaSeries_UpperSeries(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLowerSeries` instead
    ///
    pub const SetLowerSeries = setLowerSeries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setLowerSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` series: QLineSeries `
    ///
    pub fn setLowerSeries(self: QAreaSeries, series: anytype) void {
        comptime _ = @TypeOf(series)._is_QLineSeries;
        qtc.QAreaSeries_SetLowerSeries(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// ### DEPRECATED: Use `lowerSeries` instead
    ///
    pub const LowerSeries = lowerSeries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#lowerSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn lowerSeries(self: QAreaSeries) QLineSeries {
        return .{ .ptr = qtc.QAreaSeries_LowerSeries(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPen` instead
    ///
    pub const SetPen = setPen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` _pen: QPen `
    ///
    pub fn setPen(self: QAreaSeries, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QAreaSeries_SetPen(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `pen` instead
    ///
    pub const Pen = pen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn pen(self: QAreaSeries) QPen {
        return .{ .ptr = qtc.QAreaSeries_Pen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBrush` instead
    ///
    pub const SetBrush = setBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn setBrush(self: QAreaSeries, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QAreaSeries_SetBrush(@ptrCast(self.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `brush` instead
    ///
    pub const Brush = brush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn brush(self: QAreaSeries) QBrush {
        return .{ .ptr = qtc.QAreaSeries_Brush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor(self: QAreaSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QAreaSeries_SetColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn color(self: QAreaSeries) QColor {
        return .{ .ptr = qtc.QAreaSeries_Color(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBorderColor` instead
    ///
    pub const SetBorderColor = setBorderColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn setBorderColor(self: QAreaSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QAreaSeries_SetBorderColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `borderColor` instead
    ///
    pub const BorderColor = borderColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#borderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn borderColor(self: QAreaSeries) QColor {
        return .{ .ptr = qtc.QAreaSeries_BorderColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPointsVisible` instead
    ///
    pub const SetPointsVisible = setPointsVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn setPointsVisible(self: QAreaSeries) void {
        qtc.QAreaSeries_SetPointsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointsVisible` instead
    ///
    pub const PointsVisible = pointsVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn pointsVisible(self: QAreaSeries) bool {
        return qtc.QAreaSeries_PointsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPointLabelsFormat` instead
    ///
    pub const SetPointLabelsFormat = setPointLabelsFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn setPointLabelsFormat(self: QAreaSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QAreaSeries_SetPointLabelsFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `pointLabelsFormat` instead
    ///
    pub const PointLabelsFormat = pointLabelsFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pointLabelsFormat(self: QAreaSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAreaSeries_PointLabelsFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAreaSeries.pointLabelsFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPointLabelsVisible` instead
    ///
    pub const SetPointLabelsVisible = setPointLabelsVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn setPointLabelsVisible(self: QAreaSeries) void {
        qtc.QAreaSeries_SetPointLabelsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointLabelsVisible` instead
    ///
    pub const PointLabelsVisible = pointLabelsVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn pointLabelsVisible(self: QAreaSeries) bool {
        return qtc.QAreaSeries_PointLabelsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPointLabelsFont` instead
    ///
    pub const SetPointLabelsFont = setPointLabelsFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` font: QFont `
    ///
    pub fn setPointLabelsFont(self: QAreaSeries, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAreaSeries_SetPointLabelsFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `pointLabelsFont` instead
    ///
    pub const PointLabelsFont = pointLabelsFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn pointLabelsFont(self: QAreaSeries) QFont {
        return .{ .ptr = qtc.QAreaSeries_PointLabelsFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPointLabelsColor` instead
    ///
    pub const SetPointLabelsColor = setPointLabelsColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn setPointLabelsColor(self: QAreaSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QAreaSeries_SetPointLabelsColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `pointLabelsColor` instead
    ///
    pub const PointLabelsColor = pointLabelsColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn pointLabelsColor(self: QAreaSeries) QColor {
        return .{ .ptr = qtc.QAreaSeries_PointLabelsColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPointLabelsClipping` instead
    ///
    pub const SetPointLabelsClipping = setPointLabelsClipping;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn setPointLabelsClipping(self: QAreaSeries) void {
        qtc.QAreaSeries_SetPointLabelsClipping(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointLabelsClipping` instead
    ///
    pub const PointLabelsClipping = pointLabelsClipping;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn pointLabelsClipping(self: QAreaSeries) bool {
        return qtc.QAreaSeries_PointLabelsClipping(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clicked` instead
    ///
    pub const Clicked = clicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn clicked(self: QAreaSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QAreaSeries_Clicked(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `onClicked` instead
    ///
    pub const OnClicked = onClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn onClicked(self: QAreaSeries, callback: *const fn (QAreaSeries, QPointF) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hovered` instead
    ///
    pub const Hovered = hovered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` point: QPointF `
    ///
    /// ` state: bool `
    ///
    pub fn hovered(self: QAreaSeries, point: anytype, state: bool) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QAreaSeries_Hovered(@ptrCast(self.ptr), @ptrCast(point.ptr), state);
    }

    /// ### DEPRECATED: Use `onHovered` instead
    ///
    pub const OnHovered = onHovered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries, point: QPointF, state: bool) callconv(.c) void `
    ///
    pub fn onHovered(self: QAreaSeries, callback: *const fn (QAreaSeries, QPointF, bool) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pressed` instead
    ///
    pub const Pressed = pressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn pressed(self: QAreaSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QAreaSeries_Pressed(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `onPressed` instead
    ///
    pub const OnPressed = onPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn onPressed(self: QAreaSeries, callback: *const fn (QAreaSeries, QPointF) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `released` instead
    ///
    pub const Released = released;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn released(self: QAreaSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QAreaSeries_Released(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `onReleased` instead
    ///
    pub const OnReleased = onReleased;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn onReleased(self: QAreaSeries, callback: *const fn (QAreaSeries, QPointF) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doubleClicked` instead
    ///
    pub const DoubleClicked = doubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn doubleClicked(self: QAreaSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QAreaSeries_DoubleClicked(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `onDoubleClicked` instead
    ///
    pub const OnDoubleClicked = onDoubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn onDoubleClicked(self: QAreaSeries, callback: *const fn (QAreaSeries, QPointF) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selected` instead
    ///
    pub const Selected = selected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#selected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn selected(self: QAreaSeries) void {
        qtc.QAreaSeries_Selected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelected` instead
    ///
    pub const OnSelected = onSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#selected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries) callconv(.c) void `
    ///
    pub fn onSelected(self: QAreaSeries, callback: *const fn (QAreaSeries) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_Selected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorChanged` instead
    ///
    pub const ColorChanged = colorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn colorChanged(self: QAreaSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QAreaSeries_ColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onColorChanged` instead
    ///
    pub const OnColorChanged = onColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries, color: QColor) callconv(.c) void `
    ///
    pub fn onColorChanged(self: QAreaSeries, callback: *const fn (QAreaSeries, QColor) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `borderColorChanged` instead
    ///
    pub const BorderColorChanged = borderColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#borderColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn borderColorChanged(self: QAreaSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QAreaSeries_BorderColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onBorderColorChanged` instead
    ///
    pub const OnBorderColorChanged = onBorderColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#borderColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries, color: QColor) callconv(.c) void `
    ///
    pub fn onBorderColorChanged(self: QAreaSeries, callback: *const fn (QAreaSeries, QColor) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_BorderColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointLabelsFormatChanged` instead
    ///
    pub const PointLabelsFormatChanged = pointLabelsFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn pointLabelsFormatChanged(self: QAreaSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QAreaSeries_PointLabelsFormatChanged(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `onPointLabelsFormatChanged` instead
    ///
    pub const OnPointLabelsFormatChanged = onPointLabelsFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries, format: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onPointLabelsFormatChanged(self: QAreaSeries, callback: *const fn (QAreaSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_PointLabelsFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointLabelsVisibilityChanged` instead
    ///
    pub const PointLabelsVisibilityChanged = pointLabelsVisibilityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn pointLabelsVisibilityChanged(self: QAreaSeries, visible: bool) void {
        qtc.QAreaSeries_PointLabelsVisibilityChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onPointLabelsVisibilityChanged` instead
    ///
    pub const OnPointLabelsVisibilityChanged = onPointLabelsVisibilityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries, visible: bool) callconv(.c) void `
    ///
    pub fn onPointLabelsVisibilityChanged(self: QAreaSeries, callback: *const fn (QAreaSeries, bool) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_PointLabelsVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointLabelsFontChanged` instead
    ///
    pub const PointLabelsFontChanged = pointLabelsFontChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` font: QFont `
    ///
    pub fn pointLabelsFontChanged(self: QAreaSeries, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAreaSeries_PointLabelsFontChanged(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `onPointLabelsFontChanged` instead
    ///
    pub const OnPointLabelsFontChanged = onPointLabelsFontChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries, font: QFont) callconv(.c) void `
    ///
    pub fn onPointLabelsFontChanged(self: QAreaSeries, callback: *const fn (QAreaSeries, QFont) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_PointLabelsFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointLabelsColorChanged` instead
    ///
    pub const PointLabelsColorChanged = pointLabelsColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn pointLabelsColorChanged(self: QAreaSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QAreaSeries_PointLabelsColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onPointLabelsColorChanged` instead
    ///
    pub const OnPointLabelsColorChanged = onPointLabelsColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries, color: QColor) callconv(.c) void `
    ///
    pub fn onPointLabelsColorChanged(self: QAreaSeries, callback: *const fn (QAreaSeries, QColor) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_PointLabelsColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointLabelsClippingChanged` instead
    ///
    pub const PointLabelsClippingChanged = pointLabelsClippingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsClippingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` clipping: bool `
    ///
    pub fn pointLabelsClippingChanged(self: QAreaSeries, clipping: bool) void {
        qtc.QAreaSeries_PointLabelsClippingChanged(@ptrCast(self.ptr), clipping);
    }

    /// ### DEPRECATED: Use `onPointLabelsClippingChanged` instead
    ///
    pub const OnPointLabelsClippingChanged = onPointLabelsClippingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsClippingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries, clipping: bool) callconv(.c) void `
    ///
    pub fn onPointLabelsClippingChanged(self: QAreaSeries, callback: *const fn (QAreaSeries, bool) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_PointLabelsClippingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAreaSeries.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAreaSeries.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPointsVisible1` instead
    ///
    pub const SetPointsVisible1 = setPointsVisible1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn setPointsVisible1(self: QAreaSeries, visible: bool) void {
        qtc.QAreaSeries_SetPointsVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setPointLabelsVisible1` instead
    ///
    pub const SetPointLabelsVisible1 = setPointLabelsVisible1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn setPointLabelsVisible1(self: QAreaSeries, visible: bool) void {
        qtc.QAreaSeries_SetPointLabelsVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setPointLabelsClipping1` instead
    ///
    pub const SetPointLabelsClipping1 = setPointLabelsClipping1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` enabled: bool `
    ///
    pub fn setPointLabelsClipping1(self: QAreaSeries, enabled: bool) void {
        qtc.QAreaSeries_SetPointLabelsClipping1(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QAreaSeries, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QAbstractSeries_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QAreaSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSeries_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAreaSeries.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn setVisible(self: QAreaSeries) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn isVisible(self: QAreaSeries) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn opacity(self: QAreaSeries) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QAreaSeries, _opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `setUseOpenGL` instead
    ///
    pub const SetUseOpenGL = setUseOpenGL;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn setUseOpenGL(self: QAreaSeries) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `useOpenGL` instead
    ///
    pub const UseOpenGL = useOpenGL;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn useOpenGL(self: QAreaSeries) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `chart` instead
    ///
    pub const Chart = chart;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn chart(self: QAreaSeries) QChart {
        return .{ .ptr = qtc.QAbstractSeries_Chart(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attachAxis` instead
    ///
    pub const AttachAxis = attachAxis;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn attachAxis(self: QAreaSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### DEPRECATED: Use `detachAxis` instead
    ///
    pub const DetachAxis = detachAxis;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn detachAxis(self: QAreaSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### DEPRECATED: Use `attachedAxes` instead
    ///
    pub const AttachedAxes = attachedAxes;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn attachedAxes(self: QAreaSeries, allocator: std.mem.Allocator) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("QAreaSeries.attachedAxes: Memory allocation failed");
        const _data_val: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn show(self: QAreaSeries) void {
        qtc.QAbstractSeries_Show(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn hide(self: QAreaSeries) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nameChanged` instead
    ///
    pub const NameChanged = nameChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn nameChanged(self: QAreaSeries) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onNameChanged` instead
    ///
    pub const OnNameChanged = onNameChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries) callconv(.c) void `
    ///
    pub fn onNameChanged(self: QAreaSeries, callback: *const fn (QAreaSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn visibleChanged(self: QAreaSeries) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QAreaSeries, callback: *const fn (QAreaSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `opacityChanged` instead
    ///
    pub const OpacityChanged = opacityChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn opacityChanged(self: QAreaSeries) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOpacityChanged` instead
    ///
    pub const OnOpacityChanged = onOpacityChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries) callconv(.c) void `
    ///
    pub fn onOpacityChanged(self: QAreaSeries, callback: *const fn (QAreaSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `useOpenGLChanged` instead
    ///
    pub const UseOpenGLChanged = useOpenGLChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn useOpenGLChanged(self: QAreaSeries) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUseOpenGLChanged` instead
    ///
    pub const OnUseOpenGLChanged = onUseOpenGLChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries) callconv(.c) void `
    ///
    pub fn onUseOpenGLChanged(self: QAreaSeries, callback: *const fn (QAreaSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setVisible1` instead
    ///
    pub const SetVisible1 = setVisible1;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible1(self: QAreaSeries, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setUseOpenGL1` instead
    ///
    pub const SetUseOpenGL1 = setUseOpenGL1;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn setUseOpenGL1(self: QAreaSeries, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self.ptr), enable);
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
    /// ` self: QAreaSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QAreaSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAreaSeries.objectName: Memory allocation failed");
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
    /// ` self: QAreaSeries `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: QAreaSeries, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
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
    /// ` self: QAreaSeries `
    ///
    pub fn isWidgetType(self: QAreaSeries) bool {
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
    /// ` self: QAreaSeries `
    ///
    pub fn isWindowType(self: QAreaSeries) bool {
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
    /// ` self: QAreaSeries `
    ///
    pub fn isQuickItemType(self: QAreaSeries) bool {
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
    /// ` self: QAreaSeries `
    ///
    pub fn signalsBlocked(self: QAreaSeries) bool {
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
    /// ` self: QAreaSeries `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QAreaSeries, b: bool) bool {
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
    /// ` self: QAreaSeries `
    ///
    pub fn thread(self: QAreaSeries) QThread {
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
    /// ` self: QAreaSeries `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QAreaSeries, _thread: anytype) bool {
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
    /// ` self: QAreaSeries `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QAreaSeries, interval: i32) i32 {
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
    /// ` self: QAreaSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QAreaSeries, time: i64) i32 {
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
    /// ` self: QAreaSeries `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QAreaSeries, id: i32) void {
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
    /// ` self: QAreaSeries `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QAreaSeries, id: i32) void {
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
    /// ` self: QAreaSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QAreaSeries, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QAreaSeries.children: Memory allocation failed");
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
    /// ` self: QAreaSeries `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QAreaSeries, _parent: anytype) void {
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
    /// ` self: QAreaSeries `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QAreaSeries, filterObj: anytype) void {
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
    /// ` self: QAreaSeries `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QAreaSeries, obj: anytype) void {
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
    /// ` self: QAreaSeries `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QAreaSeries, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QAreaSeries `
    ///
    pub fn disconnect3(self: QAreaSeries) bool {
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
    /// ` self: QAreaSeries `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QAreaSeries, receiver: anytype) bool {
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
    /// ` self: QAreaSeries `
    ///
    pub fn dumpObjectTree(self: QAreaSeries) void {
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
    /// ` self: QAreaSeries `
    ///
    pub fn dumpObjectInfo(self: QAreaSeries) void {
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
    /// ` self: QAreaSeries `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QAreaSeries, _name: [:0]const u8, value: anytype) bool {
        const name_Cstring = _name.ptr;
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
    /// ` self: QAreaSeries `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: QAreaSeries, _name: [:0]const u8) QVariant {
        const name_Cstring = _name.ptr;
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
    /// ` self: QAreaSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QAreaSeries, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QAreaSeries.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAreaSeries.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QAreaSeries `
    ///
    pub fn bindingStorage(self: QAreaSeries) QBindingStorage {
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
    /// ` self: QAreaSeries `
    ///
    pub fn bindingStorage2(self: QAreaSeries) QBindingStorage {
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
    /// ` self: QAreaSeries `
    ///
    pub fn destroyed(self: QAreaSeries) void {
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
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QAreaSeries, callback: *const fn (QAreaSeries) callconv(.c) void) void {
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
    /// ` self: QAreaSeries `
    ///
    pub fn parent(self: QAreaSeries) QObject {
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
    /// ` self: QAreaSeries `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QAreaSeries, classname: [:0]const u8) bool {
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
    /// ` self: QAreaSeries `
    ///
    pub fn deleteLater(self: QAreaSeries) void {
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
    /// ` self: QAreaSeries `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QAreaSeries, interval: i32, timerType: i32) i32 {
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
    /// ` self: QAreaSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QAreaSeries, time: i64, timerType: i32) i32 {
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
    /// ` self: QAreaSeries `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QAreaSeries, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QAreaSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QAreaSeries, signal: [:0]const u8) bool {
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
    /// ` self: QAreaSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QAreaSeries, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QAreaSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QAreaSeries, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAreaSeries `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QAreaSeries, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAreaSeries `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QAreaSeries, param1: anytype) void {
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
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QAreaSeries, callback: *const fn (QAreaSeries, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QAreaSeries, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAreaSeries_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAreaSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QAreaSeries, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAreaSeries_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAreaSeries`
    ///
    /// ` callback: *const fn (self: QAreaSeries, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QAreaSeries, callback: *const fn (QAreaSeries, QEvent) callconv(.c) bool) void {
        qtc.QAreaSeries_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAreaSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QAreaSeries, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAreaSeries_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAreaSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QAreaSeries, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAreaSeries_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAreaSeries`
    ///
    /// ` callback: *const fn (self: QAreaSeries, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QAreaSeries, callback: *const fn (QAreaSeries, QObject, QEvent) callconv(.c) bool) void {
        qtc.QAreaSeries_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAreaSeries `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QAreaSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QAreaSeries_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAreaSeries `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QAreaSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QAreaSeries_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAreaSeries`
    ///
    /// ` callback: *const fn (self: QAreaSeries, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QAreaSeries, callback: *const fn (QAreaSeries, QTimerEvent) callconv(.c) void) void {
        qtc.QAreaSeries_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAreaSeries `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QAreaSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QAreaSeries_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAreaSeries `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QAreaSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QAreaSeries_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAreaSeries`
    ///
    /// ` callback: *const fn (self: QAreaSeries, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QAreaSeries, callback: *const fn (QAreaSeries, QChildEvent) callconv(.c) void) void {
        qtc.QAreaSeries_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAreaSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QAreaSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QAreaSeries_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAreaSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QAreaSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QAreaSeries_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAreaSeries`
    ///
    /// ` callback: *const fn (self: QAreaSeries, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QAreaSeries, callback: *const fn (QAreaSeries, QEvent) callconv(.c) void) void {
        qtc.QAreaSeries_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAreaSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QAreaSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAreaSeries_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAreaSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QAreaSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAreaSeries_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAreaSeries`
    ///
    /// ` callback: *const fn (self: QAreaSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QAreaSeries, callback: *const fn (QAreaSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QAreaSeries_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAreaSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QAreaSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAreaSeries_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAreaSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QAreaSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAreaSeries_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAreaSeries`
    ///
    /// ` callback: *const fn (self: QAreaSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QAreaSeries, callback: *const fn (QAreaSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QAreaSeries_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAreaSeries `
    ///
    pub fn sender(self: QAreaSeries) QObject {
        return .{ .ptr = qtc.QAreaSeries_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QAreaSeries `
    ///
    pub fn superSender(self: QAreaSeries) QObject {
        return .{ .ptr = qtc.QAreaSeries_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QAreaSeries`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QAreaSeries, callback: *const fn () callconv(.c) QObject) void {
        qtc.QAreaSeries_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAreaSeries `
    ///
    pub fn senderSignalIndex(self: QAreaSeries) i32 {
        return qtc.QAreaSeries_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QAreaSeries `
    ///
    pub fn superSenderSignalIndex(self: QAreaSeries) i32 {
        return qtc.QAreaSeries_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QAreaSeries`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QAreaSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QAreaSeries_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAreaSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QAreaSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAreaSeries_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QAreaSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QAreaSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAreaSeries_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QAreaSeries`
    ///
    /// ` callback: *const fn (self: QAreaSeries, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QAreaSeries, callback: *const fn (QAreaSeries, [*:0]const u8) callconv(.c) i32) void {
        qtc.QAreaSeries_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAreaSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QAreaSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QAreaSeries_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAreaSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QAreaSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QAreaSeries_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAreaSeries`
    ///
    /// ` callback: *const fn (self: QAreaSeries, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QAreaSeries, callback: *const fn (QAreaSeries, QMetaMethod) callconv(.c) bool) void {
        qtc.QAreaSeries_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAreaSeries `
    ///
    /// ` callback: *const fn (self: QAreaSeries, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QAreaSeries, callback: *const fn (QAreaSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#dtor.QAreaSeries)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAreaSeries `
    ///
    pub fn delete(self: QAreaSeries) void {
        qtc.QAreaSeries_Delete(@ptrCast(self.ptr));
    }
};
