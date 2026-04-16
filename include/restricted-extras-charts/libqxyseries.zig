const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractAxis = @import("libqt6").QAbstractAxis;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBrush = @import("libqt6").QBrush;
const QChart = @import("libqt6").QChart;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QImage = @import("libqt6").QImage;
const QLinearGradient = @import("libqt6").QLinearGradient;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPen = @import("libqt6").QPen;
const QPointF = @import("libqt6").QPointF;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qxyseries_enums = enums;
const std = @import("std");
const Map_i32_Map_i32_QVariant = std.AutoHashMapUnmanaged(i32, Map_i32_QVariant);
const Map_i32_QVariant = std.AutoHashMapUnmanaged(i32, QVariant);
const Struct_f64_f64 = extern struct { first: f64, second: f64 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html)
pub const QXYSeries = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QXYSeries,

    pub const _is_QXYSeries = {};
    pub const _is_QAbstractSeries = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn MetaObject(self: QXYSeries) QMetaObject {
        return .{ .ptr = qtc.QXYSeries_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QXYSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QXYSeries_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QXYSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QXYSeries_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxyseries.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn Append(self: QXYSeries, x: f64, y: f64) void {
        qtc.QXYSeries_Append(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn Append2(self: QXYSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Append2(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` points: []QPointF `
    ///
    pub fn Append3(self: QXYSeries, points: []QPointF) void {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        qtc.QXYSeries_Append3(@ptrCast(self.ptr), points_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` oldX: f64 `
    ///
    /// ` oldY: f64 `
    ///
    /// ` newX: f64 `
    ///
    /// ` newY: f64 `
    ///
    pub fn Replace(self: QXYSeries, oldX: f64, oldY: f64, newX: f64, newY: f64) void {
        qtc.QXYSeries_Replace(@ptrCast(self.ptr), @bitCast(oldX), @bitCast(oldY), @bitCast(newX), @bitCast(newY));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` oldPoint: QPointF `
    ///
    /// ` newPoint: QPointF `
    ///
    pub fn Replace2(self: QXYSeries, oldPoint: anytype, newPoint: anytype) void {
        comptime _ = @TypeOf(oldPoint)._is_QPointF;
        comptime _ = @TypeOf(newPoint)._is_QPointF;
        qtc.QXYSeries_Replace2(@ptrCast(self.ptr), @ptrCast(oldPoint.ptr), @ptrCast(newPoint.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` newX: f64 `
    ///
    /// ` newY: f64 `
    ///
    pub fn Replace3(self: QXYSeries, index: i32, newX: f64, newY: f64) void {
        qtc.QXYSeries_Replace3(@ptrCast(self.ptr), @bitCast(index), @bitCast(newX), @bitCast(newY));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` newPoint: QPointF `
    ///
    pub fn Replace4(self: QXYSeries, index: i32, newPoint: anytype) void {
        comptime _ = @TypeOf(newPoint)._is_QPointF;
        qtc.QXYSeries_Replace4(@ptrCast(self.ptr), @bitCast(index), @ptrCast(newPoint.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn Remove(self: QXYSeries, x: f64, y: f64) void {
        qtc.QXYSeries_Remove(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn Remove2(self: QXYSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Remove2(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn Remove3(self: QXYSeries, index: i32) void {
        qtc.QXYSeries_Remove3(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#removePoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn RemovePoints(self: QXYSeries, index: i32, count: i32) void {
        qtc.QXYSeries_RemovePoints(@ptrCast(self.ptr), @bitCast(index), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` point: QPointF `
    ///
    pub fn Insert(self: QXYSeries, index: i32, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Insert(@ptrCast(self.ptr), @bitCast(index), @ptrCast(point.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn Clear(self: QXYSeries) void {
        qtc.QXYSeries_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn Count(self: QXYSeries) i32 {
        return qtc.QXYSeries_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: QXYSeries, allocator: std.mem.Allocator) []QPointF {
        const _arr: qtc.libqt_list = qtc.QXYSeries_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("qxyseries.Points: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PointsVector(self: QXYSeries, allocator: std.mem.Allocator) []QPointF {
        const _arr: qtc.libqt_list = qtc.QXYSeries_PointsVector(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("qxyseries.PointsVector: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn At(self: QXYSeries, index: i32) QPointF {
        return .{ .ptr = qtc.QXYSeries_At(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn OperatorShiftLeft(self: QXYSeries, point: anytype) QXYSeries {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QXYSeries_OperatorShiftLeft(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` points: []QPointF `
    ///
    pub fn OperatorShiftLeft2(self: QXYSeries, points: []QPointF) QXYSeries {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        return .{ .ptr = qtc.QXYSeries_OperatorShiftLeft2(@ptrCast(self.ptr), points_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetPen(self: QXYSeries, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QXYSeries_SetPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn Pen(self: QXYSeries) QPen {
        return .{ .ptr = qtc.QXYSeries_Pen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBrush(self: QXYSeries, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QXYSeries_SetBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn Brush(self: QXYSeries) QBrush {
        return .{ .ptr = qtc.QXYSeries_Brush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColor(self: QXYSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_SetColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn Color(self: QXYSeries) QColor {
        return .{ .ptr = qtc.QXYSeries_Color(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setSelectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn SetSelectedColor(self: QXYSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_SetSelectedColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn SelectedColor(self: QXYSeries) QColor {
        return .{ .ptr = qtc.QXYSeries_SelectedColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn SetPointsVisible(self: QXYSeries) void {
        qtc.QXYSeries_SetPointsVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn PointsVisible(self: QXYSeries) bool {
        return qtc.QXYSeries_PointsVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn SetPointLabelsFormat(self: QXYSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QXYSeries_SetPointLabelsFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PointLabelsFormat(self: QXYSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXYSeries_PointLabelsFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxyseries.PointLabelsFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn SetPointLabelsVisible(self: QXYSeries) void {
        qtc.QXYSeries_SetPointLabelsVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn PointLabelsVisible(self: QXYSeries) bool {
        return qtc.QXYSeries_PointLabelsVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` font: QFont `
    ///
    pub fn SetPointLabelsFont(self: QXYSeries, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QXYSeries_SetPointLabelsFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn PointLabelsFont(self: QXYSeries) QFont {
        return .{ .ptr = qtc.QXYSeries_PointLabelsFont(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn SetPointLabelsColor(self: QXYSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_SetPointLabelsColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn PointLabelsColor(self: QXYSeries) QColor {
        return .{ .ptr = qtc.QXYSeries_PointLabelsColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn SetPointLabelsClipping(self: QXYSeries) void {
        qtc.QXYSeries_SetPointLabelsClipping(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn PointLabelsClipping(self: QXYSeries) bool {
        return qtc.QXYSeries_PointLabelsClipping(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` points: []QPointF `
    ///
    pub fn Replace5(self: QXYSeries, points: []QPointF) void {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        qtc.QXYSeries_Replace5(@ptrCast(self.ptr), points_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#isPointSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn IsPointSelected(self: QXYSeries, index: i32) bool {
        return qtc.QXYSeries_IsPointSelected(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn SelectPoint(self: QXYSeries, index: i32) void {
        qtc.QXYSeries_SelectPoint(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#deselectPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn DeselectPoint(self: QXYSeries, index: i32) void {
        qtc.QXYSeries_DeselectPoint(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` selected: bool `
    ///
    pub fn SetPointSelected(self: QXYSeries, index: i32, selected: bool) void {
        qtc.QXYSeries_SetPointSelected(@ptrCast(self.ptr), @bitCast(index), selected);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectAllPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn SelectAllPoints(self: QXYSeries) void {
        qtc.QXYSeries_SelectAllPoints(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#deselectAllPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn DeselectAllPoints(self: QXYSeries) void {
        qtc.QXYSeries_DeselectAllPoints(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn SelectPoints(self: QXYSeries, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_SelectPoints(@ptrCast(self.ptr), indexes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#deselectPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn DeselectPoints(self: QXYSeries, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_DeselectPoints(@ptrCast(self.ptr), indexes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#toggleSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn ToggleSelection(self: QXYSeries, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_ToggleSelection(@ptrCast(self.ptr), indexes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedPoints(self: QXYSeries, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QXYSeries_SelectedPoints(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qxyseries.SelectedPoints: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setLightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` lightMarker: QImage `
    ///
    pub fn SetLightMarker(self: QXYSeries, lightMarker: anytype) void {
        comptime _ = @TypeOf(lightMarker)._is_QImage;
        qtc.QXYSeries_SetLightMarker(@ptrCast(self.ptr), @ptrCast(lightMarker.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#lightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn LightMarker(self: QXYSeries) QImage {
        return .{ .ptr = qtc.QXYSeries_LightMarker(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setSelectedLightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` selectedLightMarker: QImage `
    ///
    pub fn SetSelectedLightMarker(self: QXYSeries, selectedLightMarker: anytype) void {
        comptime _ = @TypeOf(selectedLightMarker)._is_QImage;
        qtc.QXYSeries_SetSelectedLightMarker(@ptrCast(self.ptr), @ptrCast(selectedLightMarker.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedLightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn SelectedLightMarker(self: QXYSeries) QImage {
        return .{ .ptr = qtc.QXYSeries_SelectedLightMarker(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setMarkerSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` size: f64 `
    ///
    pub fn SetMarkerSize(self: QXYSeries, size: f64) void {
        qtc.QXYSeries_SetMarkerSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#markerSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn MarkerSize(self: QXYSeries) f64 {
        return qtc.QXYSeries_MarkerSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn SetBestFitLineVisible(self: QXYSeries) void {
        qtc.QXYSeries_SetBestFitLineVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn BestFitLineVisible(self: QXYSeries) bool {
        return qtc.QXYSeries_BestFitLineVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` ok: *bool `
    ///
    pub fn BestFitLineEquation(self: QXYSeries, ok: *bool) Struct_f64_f64 {
        const _pair = qtc.QXYSeries_BestFitLineEquation(@ptrCast(self.ptr), @ptrCast(ok));
        return @bitCast(_pair);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetBestFitLinePen(self: QXYSeries, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QXYSeries_SetBestFitLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn BestFitLinePen(self: QXYSeries) QPen {
        return .{ .ptr = qtc.QXYSeries_BestFitLinePen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn SetBestFitLineColor(self: QXYSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_SetBestFitLineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn BestFitLineColor(self: QXYSeries) QColor {
        return .{ .ptr = qtc.QXYSeries_BestFitLineColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn ClearPointConfiguration(self: QXYSeries, index: i32) void {
        qtc.QXYSeries_ClearPointConfiguration(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` key: qxyseries_enums.PointConfiguration `
    ///
    pub fn ClearPointConfiguration2(self: QXYSeries, index: i32, key: i32) void {
        qtc.QXYSeries_ClearPointConfiguration2(@ptrCast(self.ptr), @bitCast(index), @bitCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn ClearPointsConfiguration(self: QXYSeries) void {
        qtc.QXYSeries_ClearPointsConfiguration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` key: qxyseries_enums.PointConfiguration `
    ///
    pub fn ClearPointsConfiguration2(self: QXYSeries, key: i32) void {
        qtc.QXYSeries_ClearPointsConfiguration2(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    /// ` configuration: Map_i32_QVariant (key: qxyseries_enums.PointConfiguration) `
    ///
    pub fn SetPointConfiguration(self: QXYSeries, allocator: std.mem.Allocator, index: i32, configuration: Map_i32_QVariant) void {
        const configuration_count = configuration.count();
        const configuration_keys = allocator.alloc(i32, configuration_count) catch @panic("qxyseries.SetPointConfiguration: Memory allocation failed");
        defer allocator.free(configuration_keys);
        const configuration_values = allocator.alloc(QtC.QVariant, configuration_count) catch @panic("qxyseries.SetPointConfiguration: Memory allocation failed");
        defer allocator.free(configuration_values);
        var i: usize = 0;
        var configuration_it = configuration.iterator();
        while (configuration_it.next()) |it_entry| : (i += 1) {
            const configuration_key = it_entry.key_ptr.*;
            configuration_keys[i] = @bitCast(configuration_key);
            configuration_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const configuration_map = qtc.libqt_map{
            .len = configuration_count,
            .keys = @ptrCast(configuration_keys.ptr),
            .values = @ptrCast(configuration_values.ptr),
        };
        qtc.QXYSeries_SetPointConfiguration(@ptrCast(self.ptr), @bitCast(index), configuration_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` key: qxyseries_enums.PointConfiguration `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetPointConfiguration2(self: QXYSeries, index: i32, key: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QXYSeries_SetPointConfiguration2(@ptrCast(self.ptr), @bitCast(index), @bitCast(key), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pointsConfiguration: Map_i32_Map_i32_QVariant `
    ///
    pub fn SetPointsConfiguration(self: QXYSeries, allocator: std.mem.Allocator, pointsConfiguration: Map_i32_Map_i32_QVariant) void {
        const pointsConfiguration_count = pointsConfiguration.count();
        const pointsConfiguration_keys = allocator.alloc(i32, pointsConfiguration_count) catch @panic("qxyseries.SetPointsConfiguration: Memory allocation failed");
        defer allocator.free(pointsConfiguration_keys);
        const pointsConfiguration_values = allocator.alloc(Map_i32_QVariant, pointsConfiguration_count) catch @panic("qxyseries.SetPointsConfiguration: Memory allocation failed");
        defer allocator.free(pointsConfiguration_values);
        var i: usize = 0;
        var pointsConfiguration_it = pointsConfiguration.iterator();
        while (pointsConfiguration_it.next()) |it_entry| : (i += 1) {
            const pointsConfiguration_key = it_entry.key_ptr.*;
            pointsConfiguration_keys[i] = @bitCast(pointsConfiguration_key);
            pointsConfiguration_values[i] = it_entry.value_ptr.*;
        }
        const pointsConfiguration_map = qtc.libqt_map{
            .len = pointsConfiguration_count,
            .keys = @ptrCast(pointsConfiguration_keys.ptr),
            .values = @ptrCast(pointsConfiguration_values.ptr),
        };
        qtc.QXYSeries_SetPointsConfiguration(@ptrCast(self.ptr), pointsConfiguration_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    /// ## Returns:
    ///
    /// ` Map_i32_QVariant (key: qxyseries_enums.PointConfiguration) `
    ///
    pub fn PointConfiguration(self: QXYSeries, allocator: std.mem.Allocator, index: i32) Map_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QXYSeries_PointConfiguration(@ptrCast(self.ptr), @bitCast(index));
        var _ret: Map_i32_QVariant = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("qxyseries.PointConfiguration: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PointsConfiguration(self: QXYSeries, allocator: std.mem.Allocator) Map_i32_Map_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QXYSeries_PointsConfiguration(@ptrCast(self.ptr));
        var _ret: Map_i32_Map_i32_QVariant = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]Map_i32_QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, _value) catch @panic("qxyseries.PointsConfiguration: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#sizeBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` sourceData: []f64 `
    ///
    /// ` minSize: f64 `
    ///
    /// ` maxSize: f64 `
    ///
    pub fn SizeBy(self: QXYSeries, sourceData: []f64, minSize: f64, maxSize: f64) void {
        const sourceData_list = qtc.libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        qtc.QXYSeries_SizeBy(@ptrCast(self.ptr), sourceData_list, @bitCast(minSize), @bitCast(maxSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` sourceData: []f64 `
    ///
    pub fn ColorBy(self: QXYSeries, sourceData: []f64) void {
        const sourceData_list = qtc.libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        qtc.QXYSeries_ColorBy(@ptrCast(self.ptr), sourceData_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn Clicked(self: QXYSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Clicked(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn OnClicked(self: QXYSeries, callback: *const fn (QXYSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` point: QPointF `
    ///
    /// ` state: bool `
    ///
    pub fn Hovered(self: QXYSeries, point: anytype, state: bool) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Hovered(@ptrCast(self.ptr), @ptrCast(point.ptr), state);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, point: QPointF, state: bool) callconv(.c) void `
    ///
    pub fn OnHovered(self: QXYSeries, callback: *const fn (QXYSeries, QPointF, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn Pressed(self: QXYSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Pressed(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn OnPressed(self: QXYSeries, callback: *const fn (QXYSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn Released(self: QXYSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Released(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn OnReleased(self: QXYSeries, callback: *const fn (QXYSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn DoubleClicked(self: QXYSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_DoubleClicked(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: QXYSeries, callback: *const fn (QXYSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn PointReplaced(self: QXYSeries, index: i32) void {
        qtc.QXYSeries_PointReplaced(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, index: i32) callconv(.c) void `
    ///
    pub fn OnPointReplaced(self: QXYSeries, callback: *const fn (QXYSeries, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn PointRemoved(self: QXYSeries, index: i32) void {
        qtc.QXYSeries_PointRemoved(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, index: i32) callconv(.c) void `
    ///
    pub fn OnPointRemoved(self: QXYSeries, callback: *const fn (QXYSeries, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn PointAdded(self: QXYSeries, index: i32) void {
        qtc.QXYSeries_PointAdded(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, index: i32) callconv(.c) void `
    ///
    pub fn OnPointAdded(self: QXYSeries, callback: *const fn (QXYSeries, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn ColorChanged(self: QXYSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_ColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, color: QColor) callconv(.c) void `
    ///
    pub fn OnColorChanged(self: QXYSeries, callback: *const fn (QXYSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn SelectedColorChanged(self: QXYSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_SelectedColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, color: QColor) callconv(.c) void `
    ///
    pub fn OnSelectedColorChanged(self: QXYSeries, callback: *const fn (QXYSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn PointsReplaced(self: QXYSeries) void {
        qtc.QXYSeries_PointsReplaced(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries) callconv(.c) void `
    ///
    pub fn OnPointsReplaced(self: QXYSeries, callback: *const fn (QXYSeries) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn PointLabelsFormatChanged(self: QXYSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QXYSeries_PointLabelsFormatChanged(@ptrCast(self.ptr), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, format: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPointLabelsFormatChanged(self: QXYSeries, callback: *const fn (QXYSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn PointLabelsVisibilityChanged(self: QXYSeries, visible: bool) void {
        qtc.QXYSeries_PointLabelsVisibilityChanged(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, visible: bool) callconv(.c) void `
    ///
    pub fn OnPointLabelsVisibilityChanged(self: QXYSeries, callback: *const fn (QXYSeries, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` font: QFont `
    ///
    pub fn PointLabelsFontChanged(self: QXYSeries, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QXYSeries_PointLabelsFontChanged(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, font: QFont) callconv(.c) void `
    ///
    pub fn OnPointLabelsFontChanged(self: QXYSeries, callback: *const fn (QXYSeries, QFont) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn PointLabelsColorChanged(self: QXYSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_PointLabelsColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, color: QColor) callconv(.c) void `
    ///
    pub fn OnPointLabelsColorChanged(self: QXYSeries, callback: *const fn (QXYSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsClippingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` clipping: bool `
    ///
    pub fn PointLabelsClippingChanged(self: QXYSeries, clipping: bool) void {
        qtc.QXYSeries_PointLabelsClippingChanged(@ptrCast(self.ptr), clipping);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsClippingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, clipping: bool) callconv(.c) void `
    ///
    pub fn OnPointLabelsClippingChanged(self: QXYSeries, callback: *const fn (QXYSeries, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsClippingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn PointsRemoved(self: QXYSeries, index: i32, count: i32) void {
        qtc.QXYSeries_PointsRemoved(@ptrCast(self.ptr), @bitCast(index), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, index: i32, count: i32) callconv(.c) void `
    ///
    pub fn OnPointsRemoved(self: QXYSeries, callback: *const fn (QXYSeries, i32, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` pen: QPen `
    ///
    pub fn PenChanged(self: QXYSeries, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QXYSeries_PenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, pen: QPen) callconv(.c) void `
    ///
    pub fn OnPenChanged(self: QXYSeries, callback: *const fn (QXYSeries, QPen) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedPointsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn SelectedPointsChanged(self: QXYSeries) void {
        qtc.QXYSeries_SelectedPointsChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedPointsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries) callconv(.c) void `
    ///
    pub fn OnSelectedPointsChanged(self: QXYSeries, callback: *const fn (QXYSeries) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedPointsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#lightMarkerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` lightMarker: QImage `
    ///
    pub fn LightMarkerChanged(self: QXYSeries, lightMarker: anytype) void {
        comptime _ = @TypeOf(lightMarker)._is_QImage;
        qtc.QXYSeries_LightMarkerChanged(@ptrCast(self.ptr), @ptrCast(lightMarker.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#lightMarkerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, lightMarker: QImage) callconv(.c) void `
    ///
    pub fn OnLightMarkerChanged(self: QXYSeries, callback: *const fn (QXYSeries, QImage) callconv(.c) void) void {
        qtc.QXYSeries_Connect_LightMarkerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedLightMarkerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` selectedLightMarker: QImage `
    ///
    pub fn SelectedLightMarkerChanged(self: QXYSeries, selectedLightMarker: anytype) void {
        comptime _ = @TypeOf(selectedLightMarker)._is_QImage;
        qtc.QXYSeries_SelectedLightMarkerChanged(@ptrCast(self.ptr), @ptrCast(selectedLightMarker.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedLightMarkerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, selectedLightMarker: QImage) callconv(.c) void `
    ///
    pub fn OnSelectedLightMarkerChanged(self: QXYSeries, callback: *const fn (QXYSeries, QImage) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedLightMarkerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn BestFitLineVisibilityChanged(self: QXYSeries, visible: bool) void {
        qtc.QXYSeries_BestFitLineVisibilityChanged(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, visible: bool) callconv(.c) void `
    ///
    pub fn OnBestFitLineVisibilityChanged(self: QXYSeries, callback: *const fn (QXYSeries, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLineVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` pen: QPen `
    ///
    pub fn BestFitLinePenChanged(self: QXYSeries, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QXYSeries_BestFitLinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLinePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, pen: QPen) callconv(.c) void `
    ///
    pub fn OnBestFitLinePenChanged(self: QXYSeries, callback: *const fn (QXYSeries, QPen) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn BestFitLineColorChanged(self: QXYSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_BestFitLineColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, color: QColor) callconv(.c) void `
    ///
    pub fn OnBestFitLineColorChanged(self: QXYSeries, callback: *const fn (QXYSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLineColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsConfigurationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` configuration: Map_i32_Map_i32_QVariant `
    ///
    pub fn PointsConfigurationChanged(self: QXYSeries, allocator: std.mem.Allocator, configuration: Map_i32_Map_i32_QVariant) void {
        const configuration_count = configuration.count();
        const configuration_keys = allocator.alloc(i32, configuration_count) catch @panic("qxyseries.PointsConfigurationChanged: Memory allocation failed");
        defer allocator.free(configuration_keys);
        const configuration_values = allocator.alloc(Map_i32_QVariant, configuration_count) catch @panic("qxyseries.PointsConfigurationChanged: Memory allocation failed");
        defer allocator.free(configuration_values);
        var i: usize = 0;
        var configuration_it = configuration.iterator();
        while (configuration_it.next()) |it_entry| : (i += 1) {
            const configuration_key = it_entry.key_ptr.*;
            configuration_keys[i] = @bitCast(configuration_key);
            configuration_values[i] = it_entry.value_ptr.*;
        }
        const configuration_map = qtc.libqt_map{
            .len = configuration_count,
            .keys = @ptrCast(configuration_keys.ptr),
            .values = @ptrCast(configuration_values.ptr),
        };
        qtc.QXYSeries_PointsConfigurationChanged(@ptrCast(self.ptr), configuration_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsConfigurationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, configuration: qtc.libqt_map (Map_i32_Map_i32_QVariant)) callconv(.c) void `
    ///
    pub fn OnPointsConfigurationChanged(self: QXYSeries, callback: *const fn (QXYSeries, qtc.libqt_map) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsConfigurationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#markerSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` size: f64 `
    ///
    pub fn MarkerSizeChanged(self: QXYSeries, size: f64) void {
        qtc.QXYSeries_MarkerSizeChanged(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#markerSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, size: f64) callconv(.c) void `
    ///
    pub fn OnMarkerSizeChanged(self: QXYSeries, callback: *const fn (QXYSeries, f64) callconv(.c) void) void {
        qtc.QXYSeries_Connect_MarkerSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxyseries.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxyseries.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetPointsVisible1(self: QXYSeries, visible: bool) void {
        qtc.QXYSeries_SetPointsVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetPointLabelsVisible1(self: QXYSeries, visible: bool) void {
        qtc.QXYSeries_SetPointLabelsVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetPointLabelsClipping1(self: QXYSeries, enabled: bool) void {
        qtc.QXYSeries_SetPointLabelsClipping1(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetBestFitLineVisible1(self: QXYSeries, visible: bool) void {
        qtc.QXYSeries_SetBestFitLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` sourceData: []f64 `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn ColorBy2(self: QXYSeries, sourceData: []f64, gradient: anytype) void {
        const sourceData_list = qtc.libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.QXYSeries_ColorBy2(@ptrCast(self.ptr), sourceData_list, @ptrCast(gradient.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn Type(self: QXYSeries) i32 {
        return qtc.QAbstractSeries_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QXYSeries, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QAbstractSeries_SetName(@ptrCast(self.ptr), name_str);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QXYSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSeries_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxyseries.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn SetVisible(self: QXYSeries) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn IsVisible(self: QXYSeries) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn Opacity(self: QXYSeries) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: QXYSeries, opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn SetUseOpenGL(self: QXYSeries) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn UseOpenGL(self: QXYSeries) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn Chart(self: QXYSeries) QChart {
        return .{ .ptr = qtc.QAbstractSeries_Chart(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn AttachAxis(self: QXYSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn DetachAxis(self: QXYSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AttachedAxes(self: QXYSeries, allocator: std.mem.Allocator) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("qxyseries.AttachedAxes: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn Show(self: QXYSeries) void {
        qtc.QAbstractSeries_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn Hide(self: QXYSeries) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn NameChanged(self: QXYSeries) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries) callconv(.c) void `
    ///
    pub fn OnNameChanged(self: QXYSeries, callback: *const fn (QXYSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn VisibleChanged(self: QXYSeries) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: QXYSeries, callback: *const fn (QXYSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn OpacityChanged(self: QXYSeries) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: QXYSeries, callback: *const fn (QXYSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn UseOpenGLChanged(self: QXYSeries) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries) callconv(.c) void `
    ///
    pub fn OnUseOpenGLChanged(self: QXYSeries, callback: *const fn (QXYSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible1(self: QXYSeries, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUseOpenGL1(self: QXYSeries, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QXYSeries, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QXYSeries, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QXYSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxyseries.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QXYSeries, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn IsWidgetType(self: QXYSeries) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn IsWindowType(self: QXYSeries) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn IsQuickItemType(self: QXYSeries) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn SignalsBlocked(self: QXYSeries) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QXYSeries, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn Thread(self: QXYSeries) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QXYSeries, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QXYSeries, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QXYSeries, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QXYSeries, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QXYSeries, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QXYSeries, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qxyseries.Children: Memory allocation failed");
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
    /// ` self: QXYSeries `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QXYSeries, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QXYSeries, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QXYSeries, obj: anytype) void {
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
    /// ` self: QXYSeries `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QXYSeries, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QXYSeries `
    ///
    pub fn Disconnect3(self: QXYSeries) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QXYSeries, receiver: anytype) bool {
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
    /// ` self: QXYSeries `
    ///
    pub fn DumpObjectTree(self: QXYSeries) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn DumpObjectInfo(self: QXYSeries) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QXYSeries, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QXYSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QXYSeries, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QXYSeries, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qxyseries.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qxyseries.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QXYSeries `
    ///
    pub fn BindingStorage(self: QXYSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn BindingStorage2(self: QXYSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn Destroyed(self: QXYSeries) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QXYSeries, callback: *const fn (QXYSeries) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn Parent(self: QXYSeries) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QXYSeries, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn DeleteLater(self: QXYSeries) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QXYSeries, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QXYSeries, time: i64, timerType: i32) i32 {
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
    /// ` self: QXYSeries `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QXYSeries, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QXYSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QXYSeries, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QXYSeries, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QXYSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QXYSeries, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QXYSeries `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QXYSeries, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QXYSeries `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QXYSeries, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QXYSeries, callback: *const fn (QXYSeries, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QXYSeries, callback: *const fn (QXYSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#dtor.QXYSeries)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QXYSeries `
    ///
    pub fn Delete(self: QXYSeries) void {
        qtc.QXYSeries_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#public-types)
pub const enums = struct {
    pub const PointConfiguration = enum(i32) {
        pub const Color: i32 = 0;
        pub const Size: i32 = 1;
        pub const Visibility: i32 = 2;
        pub const LabelVisibility: i32 = 3;
        pub const LabelFormat: i32 = 4;
    };
};
