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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn metaObject(self: QXYSeries) QMetaObject {
        return .{ .ptr = qtc.QXYSeries_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QXYSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QXYSeries_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QXYSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QXYSeries_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXYSeries.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

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
    pub fn append(self: QXYSeries, x: f64, y: f64) void {
        qtc.QXYSeries_Append(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `append2` instead
    ///
    pub const Append2 = append2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn append2(self: QXYSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Append2(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `append3` instead
    ///
    pub const Append3 = append3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _points: []QPointF `
    ///
    pub fn append3(self: QXYSeries, _points: []QPointF) void {
        const points_list = qtc.libqt_list{
            .len = _points.len,
            .data = @ptrCast(_points.ptr),
        };
        qtc.QXYSeries_Append3(@ptrCast(self.ptr), points_list);
    }

    /// ### DEPRECATED: Use `replace` instead
    ///
    pub const Replace = replace;

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
    pub fn replace(self: QXYSeries, oldX: f64, oldY: f64, newX: f64, newY: f64) void {
        qtc.QXYSeries_Replace(@ptrCast(self.ptr), @bitCast(oldX), @bitCast(oldY), @bitCast(newX), @bitCast(newY));
    }

    /// ### DEPRECATED: Use `replace2` instead
    ///
    pub const Replace2 = replace2;

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
    pub fn replace2(self: QXYSeries, oldPoint: anytype, newPoint: anytype) void {
        comptime _ = @TypeOf(oldPoint)._is_QPointF;
        comptime _ = @TypeOf(newPoint)._is_QPointF;
        qtc.QXYSeries_Replace2(@ptrCast(self.ptr), @ptrCast(oldPoint.ptr), @ptrCast(newPoint.ptr));
    }

    /// ### DEPRECATED: Use `replace3` instead
    ///
    pub const Replace3 = replace3;

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
    pub fn replace3(self: QXYSeries, index: i32, newX: f64, newY: f64) void {
        qtc.QXYSeries_Replace3(@ptrCast(self.ptr), @bitCast(index), @bitCast(newX), @bitCast(newY));
    }

    /// ### DEPRECATED: Use `replace4` instead
    ///
    pub const Replace4 = replace4;

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
    pub fn replace4(self: QXYSeries, index: i32, newPoint: anytype) void {
        comptime _ = @TypeOf(newPoint)._is_QPointF;
        qtc.QXYSeries_Replace4(@ptrCast(self.ptr), @bitCast(index), @ptrCast(newPoint.ptr));
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

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
    pub fn remove(self: QXYSeries, x: f64, y: f64) void {
        qtc.QXYSeries_Remove(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `remove2` instead
    ///
    pub const Remove2 = remove2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn remove2(self: QXYSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Remove2(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `remove3` instead
    ///
    pub const Remove3 = remove3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn remove3(self: QXYSeries, index: i32) void {
        qtc.QXYSeries_Remove3(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `removePoints` instead
    ///
    pub const RemovePoints = removePoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#removePoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` _count: i32 `
    ///
    pub fn removePoints(self: QXYSeries, index: i32, _count: i32) void {
        qtc.QXYSeries_RemovePoints(@ptrCast(self.ptr), @bitCast(index), @bitCast(_count));
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

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
    pub fn insert(self: QXYSeries, index: i32, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Insert(@ptrCast(self.ptr), @bitCast(index), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn clear(self: QXYSeries) void {
        qtc.QXYSeries_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn count(self: QXYSeries) i32 {
        return qtc.QXYSeries_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `points` instead
    ///
    pub const Points = points;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn points(self: QXYSeries, allocator: std.mem.Allocator) []QPointF {
        const _arr: qtc.libqt_list = qtc.QXYSeries_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("QXYSeries.points: Memory allocation failed");
        const _data_val: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `pointsVector` instead
    ///
    pub const PointsVector = pointsVector;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pointsVector(self: QXYSeries, allocator: std.mem.Allocator) []QPointF {
        const _arr: qtc.libqt_list = qtc.QXYSeries_PointsVector(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("QXYSeries.pointsVector: Memory allocation failed");
        const _data_val: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `at` instead
    ///
    pub const At = at;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn at(self: QXYSeries, index: i32) QPointF {
        return .{ .ptr = qtc.QXYSeries_At(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft` instead
    ///
    pub const OperatorShiftLeft = operatorShiftLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn operatorShiftLeft(self: QXYSeries, point: anytype) QXYSeries {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QXYSeries_OperatorShiftLeft(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft2` instead
    ///
    pub const OperatorShiftLeft2 = operatorShiftLeft2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _points: []QPointF `
    ///
    pub fn operatorShiftLeft2(self: QXYSeries, _points: []QPointF) QXYSeries {
        const points_list = qtc.libqt_list{
            .len = _points.len,
            .data = @ptrCast(_points.ptr),
        };
        return .{ .ptr = qtc.QXYSeries_OperatorShiftLeft2(@ptrCast(self.ptr), points_list) };
    }

    /// ### DEPRECATED: Use `setPen` instead
    ///
    pub const SetPen = setPen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _pen: QPen `
    ///
    pub fn setPen(self: QXYSeries, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QXYSeries_SetPen(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `pen` instead
    ///
    pub const Pen = pen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn pen(self: QXYSeries) QPen {
        return .{ .ptr = qtc.QXYSeries_Pen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBrush` instead
    ///
    pub const SetBrush = setBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn setBrush(self: QXYSeries, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QXYSeries_SetBrush(@ptrCast(self.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `brush` instead
    ///
    pub const Brush = brush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn brush(self: QXYSeries) QBrush {
        return .{ .ptr = qtc.QXYSeries_Brush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor(self: QXYSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QXYSeries_SetColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn color(self: QXYSeries) QColor {
        return .{ .ptr = qtc.QXYSeries_Color(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSelectedColor` instead
    ///
    pub const SetSelectedColor = setSelectedColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setSelectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn setSelectedColor(self: QXYSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QXYSeries_SetSelectedColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `selectedColor` instead
    ///
    pub const SelectedColor = selectedColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn selectedColor(self: QXYSeries) QColor {
        return .{ .ptr = qtc.QXYSeries_SelectedColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPointsVisible` instead
    ///
    pub const SetPointsVisible = setPointsVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn setPointsVisible(self: QXYSeries) void {
        qtc.QXYSeries_SetPointsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointsVisible` instead
    ///
    pub const PointsVisible = pointsVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn pointsVisible(self: QXYSeries) bool {
        return qtc.QXYSeries_PointsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPointLabelsFormat` instead
    ///
    pub const SetPointLabelsFormat = setPointLabelsFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn setPointLabelsFormat(self: QXYSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QXYSeries_SetPointLabelsFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `pointLabelsFormat` instead
    ///
    pub const PointLabelsFormat = pointLabelsFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pointLabelsFormat(self: QXYSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXYSeries_PointLabelsFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXYSeries.pointLabelsFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPointLabelsVisible` instead
    ///
    pub const SetPointLabelsVisible = setPointLabelsVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn setPointLabelsVisible(self: QXYSeries) void {
        qtc.QXYSeries_SetPointLabelsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointLabelsVisible` instead
    ///
    pub const PointLabelsVisible = pointLabelsVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn pointLabelsVisible(self: QXYSeries) bool {
        return qtc.QXYSeries_PointLabelsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPointLabelsFont` instead
    ///
    pub const SetPointLabelsFont = setPointLabelsFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` font: QFont `
    ///
    pub fn setPointLabelsFont(self: QXYSeries, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QXYSeries_SetPointLabelsFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `pointLabelsFont` instead
    ///
    pub const PointLabelsFont = pointLabelsFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn pointLabelsFont(self: QXYSeries) QFont {
        return .{ .ptr = qtc.QXYSeries_PointLabelsFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPointLabelsColor` instead
    ///
    pub const SetPointLabelsColor = setPointLabelsColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn setPointLabelsColor(self: QXYSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QXYSeries_SetPointLabelsColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `pointLabelsColor` instead
    ///
    pub const PointLabelsColor = pointLabelsColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn pointLabelsColor(self: QXYSeries) QColor {
        return .{ .ptr = qtc.QXYSeries_PointLabelsColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPointLabelsClipping` instead
    ///
    pub const SetPointLabelsClipping = setPointLabelsClipping;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn setPointLabelsClipping(self: QXYSeries) void {
        qtc.QXYSeries_SetPointLabelsClipping(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointLabelsClipping` instead
    ///
    pub const PointLabelsClipping = pointLabelsClipping;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn pointLabelsClipping(self: QXYSeries) bool {
        return qtc.QXYSeries_PointLabelsClipping(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `replace5` instead
    ///
    pub const Replace5 = replace5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _points: []QPointF `
    ///
    pub fn replace5(self: QXYSeries, _points: []QPointF) void {
        const points_list = qtc.libqt_list{
            .len = _points.len,
            .data = @ptrCast(_points.ptr),
        };
        qtc.QXYSeries_Replace5(@ptrCast(self.ptr), points_list);
    }

    /// ### DEPRECATED: Use `isPointSelected` instead
    ///
    pub const IsPointSelected = isPointSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#isPointSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn isPointSelected(self: QXYSeries, index: i32) bool {
        return qtc.QXYSeries_IsPointSelected(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `selectPoint` instead
    ///
    pub const SelectPoint = selectPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn selectPoint(self: QXYSeries, index: i32) void {
        qtc.QXYSeries_SelectPoint(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `deselectPoint` instead
    ///
    pub const DeselectPoint = deselectPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#deselectPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn deselectPoint(self: QXYSeries, index: i32) void {
        qtc.QXYSeries_DeselectPoint(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setPointSelected` instead
    ///
    pub const SetPointSelected = setPointSelected;

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
    pub fn setPointSelected(self: QXYSeries, index: i32, selected: bool) void {
        qtc.QXYSeries_SetPointSelected(@ptrCast(self.ptr), @bitCast(index), selected);
    }

    /// ### DEPRECATED: Use `selectAllPoints` instead
    ///
    pub const SelectAllPoints = selectAllPoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectAllPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn selectAllPoints(self: QXYSeries) void {
        qtc.QXYSeries_SelectAllPoints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `deselectAllPoints` instead
    ///
    pub const DeselectAllPoints = deselectAllPoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#deselectAllPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn deselectAllPoints(self: QXYSeries) void {
        qtc.QXYSeries_DeselectAllPoints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectPoints` instead
    ///
    pub const SelectPoints = selectPoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn selectPoints(self: QXYSeries, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_SelectPoints(@ptrCast(self.ptr), indexes_list);
    }

    /// ### DEPRECATED: Use `deselectPoints` instead
    ///
    pub const DeselectPoints = deselectPoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#deselectPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn deselectPoints(self: QXYSeries, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_DeselectPoints(@ptrCast(self.ptr), indexes_list);
    }

    /// ### DEPRECATED: Use `toggleSelection` instead
    ///
    pub const ToggleSelection = toggleSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#toggleSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn toggleSelection(self: QXYSeries, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_ToggleSelection(@ptrCast(self.ptr), indexes_list);
    }

    /// ### DEPRECATED: Use `selectedPoints` instead
    ///
    pub const SelectedPoints = selectedPoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectedPoints(self: QXYSeries, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QXYSeries_SelectedPoints(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QXYSeries.selectedPoints: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLightMarker` instead
    ///
    pub const SetLightMarker = setLightMarker;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setLightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _lightMarker: QImage `
    ///
    pub fn setLightMarker(self: QXYSeries, _lightMarker: anytype) void {
        comptime _ = @TypeOf(_lightMarker)._is_QImage;
        qtc.QXYSeries_SetLightMarker(@ptrCast(self.ptr), @ptrCast(_lightMarker.ptr));
    }

    /// ### DEPRECATED: Use `lightMarker` instead
    ///
    pub const LightMarker = lightMarker;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#lightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn lightMarker(self: QXYSeries) QImage {
        return .{ .ptr = qtc.QXYSeries_LightMarker(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSelectedLightMarker` instead
    ///
    pub const SetSelectedLightMarker = setSelectedLightMarker;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setSelectedLightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _selectedLightMarker: QImage `
    ///
    pub fn setSelectedLightMarker(self: QXYSeries, _selectedLightMarker: anytype) void {
        comptime _ = @TypeOf(_selectedLightMarker)._is_QImage;
        qtc.QXYSeries_SetSelectedLightMarker(@ptrCast(self.ptr), @ptrCast(_selectedLightMarker.ptr));
    }

    /// ### DEPRECATED: Use `selectedLightMarker` instead
    ///
    pub const SelectedLightMarker = selectedLightMarker;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedLightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn selectedLightMarker(self: QXYSeries) QImage {
        return .{ .ptr = qtc.QXYSeries_SelectedLightMarker(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMarkerSize` instead
    ///
    pub const SetMarkerSize = setMarkerSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setMarkerSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` size: f64 `
    ///
    pub fn setMarkerSize(self: QXYSeries, size: f64) void {
        qtc.QXYSeries_SetMarkerSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `markerSize` instead
    ///
    pub const MarkerSize = markerSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#markerSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn markerSize(self: QXYSeries) f64 {
        return qtc.QXYSeries_MarkerSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBestFitLineVisible` instead
    ///
    pub const SetBestFitLineVisible = setBestFitLineVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn setBestFitLineVisible(self: QXYSeries) void {
        qtc.QXYSeries_SetBestFitLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bestFitLineVisible` instead
    ///
    pub const BestFitLineVisible = bestFitLineVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn bestFitLineVisible(self: QXYSeries) bool {
        return qtc.QXYSeries_BestFitLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bestFitLineEquation` instead
    ///
    pub const BestFitLineEquation = bestFitLineEquation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` ok: *bool `
    ///
    pub fn bestFitLineEquation(self: QXYSeries, ok: *bool) Struct_f64_f64 {
        const _pair = qtc.QXYSeries_BestFitLineEquation(@ptrCast(self.ptr), @ptrCast(ok));
        return .{
            .first = @bitCast(_pair.first),
            .second = @bitCast(_pair.second),
        };
    }

    /// ### DEPRECATED: Use `setBestFitLinePen` instead
    ///
    pub const SetBestFitLinePen = setBestFitLinePen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _pen: QPen `
    ///
    pub fn setBestFitLinePen(self: QXYSeries, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QXYSeries_SetBestFitLinePen(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `bestFitLinePen` instead
    ///
    pub const BestFitLinePen = bestFitLinePen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn bestFitLinePen(self: QXYSeries) QPen {
        return .{ .ptr = qtc.QXYSeries_BestFitLinePen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBestFitLineColor` instead
    ///
    pub const SetBestFitLineColor = setBestFitLineColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn setBestFitLineColor(self: QXYSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QXYSeries_SetBestFitLineColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `bestFitLineColor` instead
    ///
    pub const BestFitLineColor = bestFitLineColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn bestFitLineColor(self: QXYSeries) QColor {
        return .{ .ptr = qtc.QXYSeries_BestFitLineColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearPointConfiguration` instead
    ///
    pub const ClearPointConfiguration = clearPointConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn clearPointConfiguration(self: QXYSeries, index: i32) void {
        qtc.QXYSeries_ClearPointConfiguration(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `clearPointConfiguration2` instead
    ///
    pub const ClearPointConfiguration2 = clearPointConfiguration2;

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
    pub fn clearPointConfiguration2(self: QXYSeries, index: i32, key: i32) void {
        qtc.QXYSeries_ClearPointConfiguration2(@ptrCast(self.ptr), @bitCast(index), @bitCast(key));
    }

    /// ### DEPRECATED: Use `clearPointsConfiguration` instead
    ///
    pub const ClearPointsConfiguration = clearPointsConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn clearPointsConfiguration(self: QXYSeries) void {
        qtc.QXYSeries_ClearPointsConfiguration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearPointsConfiguration2` instead
    ///
    pub const ClearPointsConfiguration2 = clearPointsConfiguration2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` key: qxyseries_enums.PointConfiguration `
    ///
    pub fn clearPointsConfiguration2(self: QXYSeries, key: i32) void {
        qtc.QXYSeries_ClearPointsConfiguration2(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### DEPRECATED: Use `setPointConfiguration` instead
    ///
    pub const SetPointConfiguration = setPointConfiguration;

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
    pub fn setPointConfiguration(self: QXYSeries, allocator: std.mem.Allocator, index: i32, configuration: Map_i32_QVariant) void {
        const configuration_count = configuration.count();
        const configuration_keys = allocator.alloc(i32, configuration_count) catch @panic("QXYSeries.setPointConfiguration: Memory allocation failed");
        defer allocator.free(configuration_keys);
        const configuration_values = allocator.alloc(QtC.QVariant, configuration_count) catch @panic("QXYSeries.setPointConfiguration: Memory allocation failed");
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

    /// ### DEPRECATED: Use `setPointConfiguration2` instead
    ///
    pub const SetPointConfiguration2 = setPointConfiguration2;

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
    pub fn setPointConfiguration2(self: QXYSeries, index: i32, key: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QXYSeries_SetPointConfiguration2(@ptrCast(self.ptr), @bitCast(index), @bitCast(key), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setPointsConfiguration` instead
    ///
    pub const SetPointsConfiguration = setPointsConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _pointsConfiguration: Map_i32_Map_i32_QVariant `
    ///
    pub fn setPointsConfiguration(self: QXYSeries, allocator: std.mem.Allocator, _pointsConfiguration: Map_i32_Map_i32_QVariant) void {
        const pointsConfiguration_count = _pointsConfiguration.count();
        const pointsConfiguration_keys = allocator.alloc(i32, pointsConfiguration_count) catch @panic("QXYSeries.setPointsConfiguration: Memory allocation failed");
        defer allocator.free(pointsConfiguration_keys);
        const pointsConfiguration_values = allocator.alloc(Map_i32_QVariant, pointsConfiguration_count) catch @panic("QXYSeries.setPointsConfiguration: Memory allocation failed");
        defer allocator.free(pointsConfiguration_values);
        var i: usize = 0;
        var pointsConfiguration_it = _pointsConfiguration.iterator();
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

    /// ### DEPRECATED: Use `pointConfiguration` instead
    ///
    pub const PointConfiguration = pointConfiguration;

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
    pub fn pointConfiguration(self: QXYSeries, allocator: std.mem.Allocator, index: i32) Map_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QXYSeries_PointConfiguration(@ptrCast(self.ptr), @bitCast(index));
        var _ret: Map_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QXYSeries.pointConfiguration: Total capacity allocation failed");
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
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `pointsConfiguration` instead
    ///
    pub const PointsConfiguration = pointsConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pointsConfiguration(self: QXYSeries, allocator: std.mem.Allocator) Map_i32_Map_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QXYSeries_PointsConfiguration(@ptrCast(self.ptr));
        var _ret: Map_i32_Map_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QXYSeries.pointsConfiguration: Total capacity allocation failed");
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
            _ret.putAssumeCapacity(_key, _value);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `sizeBy` instead
    ///
    pub const SizeBy = sizeBy;

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
    pub fn sizeBy(self: QXYSeries, sourceData: []f64, minSize: f64, maxSize: f64) void {
        const sourceData_list = qtc.libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        qtc.QXYSeries_SizeBy(@ptrCast(self.ptr), sourceData_list, @bitCast(minSize), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `colorBy` instead
    ///
    pub const ColorBy = colorBy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` sourceData: []f64 `
    ///
    pub fn colorBy(self: QXYSeries, sourceData: []f64) void {
        const sourceData_list = qtc.libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        qtc.QXYSeries_ColorBy(@ptrCast(self.ptr), sourceData_list);
    }

    /// ### DEPRECATED: Use `clicked` instead
    ///
    pub const Clicked = clicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn clicked(self: QXYSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Clicked(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `onClicked` instead
    ///
    pub const OnClicked = onClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn onClicked(self: QXYSeries, callback: *const fn (QXYSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hovered` instead
    ///
    pub const Hovered = hovered;

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
    pub fn hovered(self: QXYSeries, point: anytype, state: bool) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Hovered(@ptrCast(self.ptr), @ptrCast(point.ptr), state);
    }

    /// ### DEPRECATED: Use `onHovered` instead
    ///
    pub const OnHovered = onHovered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, point: QPointF, state: bool) callconv(.c) void `
    ///
    pub fn onHovered(self: QXYSeries, callback: *const fn (QXYSeries, QPointF, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pressed` instead
    ///
    pub const Pressed = pressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn pressed(self: QXYSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Pressed(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `onPressed` instead
    ///
    pub const OnPressed = onPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn onPressed(self: QXYSeries, callback: *const fn (QXYSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `released` instead
    ///
    pub const Released = released;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn released(self: QXYSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Released(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `onReleased` instead
    ///
    pub const OnReleased = onReleased;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn onReleased(self: QXYSeries, callback: *const fn (QXYSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doubleClicked` instead
    ///
    pub const DoubleClicked = doubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn doubleClicked(self: QXYSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_DoubleClicked(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `onDoubleClicked` instead
    ///
    pub const OnDoubleClicked = onDoubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn onDoubleClicked(self: QXYSeries, callback: *const fn (QXYSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointReplaced` instead
    ///
    pub const PointReplaced = pointReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn pointReplaced(self: QXYSeries, index: i32) void {
        qtc.QXYSeries_PointReplaced(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onPointReplaced` instead
    ///
    pub const OnPointReplaced = onPointReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, index: i32) callconv(.c) void `
    ///
    pub fn onPointReplaced(self: QXYSeries, callback: *const fn (QXYSeries, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointRemoved` instead
    ///
    pub const PointRemoved = pointRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn pointRemoved(self: QXYSeries, index: i32) void {
        qtc.QXYSeries_PointRemoved(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onPointRemoved` instead
    ///
    pub const OnPointRemoved = onPointRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, index: i32) callconv(.c) void `
    ///
    pub fn onPointRemoved(self: QXYSeries, callback: *const fn (QXYSeries, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointAdded` instead
    ///
    pub const PointAdded = pointAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn pointAdded(self: QXYSeries, index: i32) void {
        qtc.QXYSeries_PointAdded(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onPointAdded` instead
    ///
    pub const OnPointAdded = onPointAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, index: i32) callconv(.c) void `
    ///
    pub fn onPointAdded(self: QXYSeries, callback: *const fn (QXYSeries, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorChanged` instead
    ///
    pub const ColorChanged = colorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn colorChanged(self: QXYSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QXYSeries_ColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onColorChanged` instead
    ///
    pub const OnColorChanged = onColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, color: QColor) callconv(.c) void `
    ///
    pub fn onColorChanged(self: QXYSeries, callback: *const fn (QXYSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedColorChanged` instead
    ///
    pub const SelectedColorChanged = selectedColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn selectedColorChanged(self: QXYSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QXYSeries_SelectedColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onSelectedColorChanged` instead
    ///
    pub const OnSelectedColorChanged = onSelectedColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, color: QColor) callconv(.c) void `
    ///
    pub fn onSelectedColorChanged(self: QXYSeries, callback: *const fn (QXYSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointsReplaced` instead
    ///
    pub const PointsReplaced = pointsReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn pointsReplaced(self: QXYSeries) void {
        qtc.QXYSeries_PointsReplaced(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPointsReplaced` instead
    ///
    pub const OnPointsReplaced = onPointsReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries) callconv(.c) void `
    ///
    pub fn onPointsReplaced(self: QXYSeries, callback: *const fn (QXYSeries) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointLabelsFormatChanged` instead
    ///
    pub const PointLabelsFormatChanged = pointLabelsFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn pointLabelsFormatChanged(self: QXYSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QXYSeries_PointLabelsFormatChanged(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `onPointLabelsFormatChanged` instead
    ///
    pub const OnPointLabelsFormatChanged = onPointLabelsFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, format: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onPointLabelsFormatChanged(self: QXYSeries, callback: *const fn (QXYSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointLabelsVisibilityChanged` instead
    ///
    pub const PointLabelsVisibilityChanged = pointLabelsVisibilityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn pointLabelsVisibilityChanged(self: QXYSeries, visible: bool) void {
        qtc.QXYSeries_PointLabelsVisibilityChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onPointLabelsVisibilityChanged` instead
    ///
    pub const OnPointLabelsVisibilityChanged = onPointLabelsVisibilityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, visible: bool) callconv(.c) void `
    ///
    pub fn onPointLabelsVisibilityChanged(self: QXYSeries, callback: *const fn (QXYSeries, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointLabelsFontChanged` instead
    ///
    pub const PointLabelsFontChanged = pointLabelsFontChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` font: QFont `
    ///
    pub fn pointLabelsFontChanged(self: QXYSeries, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QXYSeries_PointLabelsFontChanged(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `onPointLabelsFontChanged` instead
    ///
    pub const OnPointLabelsFontChanged = onPointLabelsFontChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, font: QFont) callconv(.c) void `
    ///
    pub fn onPointLabelsFontChanged(self: QXYSeries, callback: *const fn (QXYSeries, QFont) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointLabelsColorChanged` instead
    ///
    pub const PointLabelsColorChanged = pointLabelsColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn pointLabelsColorChanged(self: QXYSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QXYSeries_PointLabelsColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onPointLabelsColorChanged` instead
    ///
    pub const OnPointLabelsColorChanged = onPointLabelsColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, color: QColor) callconv(.c) void `
    ///
    pub fn onPointLabelsColorChanged(self: QXYSeries, callback: *const fn (QXYSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointLabelsClippingChanged` instead
    ///
    pub const PointLabelsClippingChanged = pointLabelsClippingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsClippingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` clipping: bool `
    ///
    pub fn pointLabelsClippingChanged(self: QXYSeries, clipping: bool) void {
        qtc.QXYSeries_PointLabelsClippingChanged(@ptrCast(self.ptr), clipping);
    }

    /// ### DEPRECATED: Use `onPointLabelsClippingChanged` instead
    ///
    pub const OnPointLabelsClippingChanged = onPointLabelsClippingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsClippingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, clipping: bool) callconv(.c) void `
    ///
    pub fn onPointLabelsClippingChanged(self: QXYSeries, callback: *const fn (QXYSeries, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsClippingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointsRemoved` instead
    ///
    pub const PointsRemoved = pointsRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` _count: i32 `
    ///
    pub fn pointsRemoved(self: QXYSeries, index: i32, _count: i32) void {
        qtc.QXYSeries_PointsRemoved(@ptrCast(self.ptr), @bitCast(index), @bitCast(_count));
    }

    /// ### DEPRECATED: Use `onPointsRemoved` instead
    ///
    pub const OnPointsRemoved = onPointsRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, index: i32, count: i32) callconv(.c) void `
    ///
    pub fn onPointsRemoved(self: QXYSeries, callback: *const fn (QXYSeries, i32, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `penChanged` instead
    ///
    pub const PenChanged = penChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _pen: QPen `
    ///
    pub fn penChanged(self: QXYSeries, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QXYSeries_PenChanged(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `onPenChanged` instead
    ///
    pub const OnPenChanged = onPenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, pen: QPen) callconv(.c) void `
    ///
    pub fn onPenChanged(self: QXYSeries, callback: *const fn (QXYSeries, QPen) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedPointsChanged` instead
    ///
    pub const SelectedPointsChanged = selectedPointsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedPointsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    pub fn selectedPointsChanged(self: QXYSeries) void {
        qtc.QXYSeries_SelectedPointsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelectedPointsChanged` instead
    ///
    pub const OnSelectedPointsChanged = onSelectedPointsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedPointsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries) callconv(.c) void `
    ///
    pub fn onSelectedPointsChanged(self: QXYSeries, callback: *const fn (QXYSeries) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedPointsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lightMarkerChanged` instead
    ///
    pub const LightMarkerChanged = lightMarkerChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#lightMarkerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _lightMarker: QImage `
    ///
    pub fn lightMarkerChanged(self: QXYSeries, _lightMarker: anytype) void {
        comptime _ = @TypeOf(_lightMarker)._is_QImage;
        qtc.QXYSeries_LightMarkerChanged(@ptrCast(self.ptr), @ptrCast(_lightMarker.ptr));
    }

    /// ### DEPRECATED: Use `onLightMarkerChanged` instead
    ///
    pub const OnLightMarkerChanged = onLightMarkerChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#lightMarkerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, lightMarker: QImage) callconv(.c) void `
    ///
    pub fn onLightMarkerChanged(self: QXYSeries, callback: *const fn (QXYSeries, QImage) callconv(.c) void) void {
        qtc.QXYSeries_Connect_LightMarkerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedLightMarkerChanged` instead
    ///
    pub const SelectedLightMarkerChanged = selectedLightMarkerChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedLightMarkerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _selectedLightMarker: QImage `
    ///
    pub fn selectedLightMarkerChanged(self: QXYSeries, _selectedLightMarker: anytype) void {
        comptime _ = @TypeOf(_selectedLightMarker)._is_QImage;
        qtc.QXYSeries_SelectedLightMarkerChanged(@ptrCast(self.ptr), @ptrCast(_selectedLightMarker.ptr));
    }

    /// ### DEPRECATED: Use `onSelectedLightMarkerChanged` instead
    ///
    pub const OnSelectedLightMarkerChanged = onSelectedLightMarkerChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedLightMarkerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, selectedLightMarker: QImage) callconv(.c) void `
    ///
    pub fn onSelectedLightMarkerChanged(self: QXYSeries, callback: *const fn (QXYSeries, QImage) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedLightMarkerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bestFitLineVisibilityChanged` instead
    ///
    pub const BestFitLineVisibilityChanged = bestFitLineVisibilityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn bestFitLineVisibilityChanged(self: QXYSeries, visible: bool) void {
        qtc.QXYSeries_BestFitLineVisibilityChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onBestFitLineVisibilityChanged` instead
    ///
    pub const OnBestFitLineVisibilityChanged = onBestFitLineVisibilityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, visible: bool) callconv(.c) void `
    ///
    pub fn onBestFitLineVisibilityChanged(self: QXYSeries, callback: *const fn (QXYSeries, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLineVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bestFitLinePenChanged` instead
    ///
    pub const BestFitLinePenChanged = bestFitLinePenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _pen: QPen `
    ///
    pub fn bestFitLinePenChanged(self: QXYSeries, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QXYSeries_BestFitLinePenChanged(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `onBestFitLinePenChanged` instead
    ///
    pub const OnBestFitLinePenChanged = onBestFitLinePenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLinePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, pen: QPen) callconv(.c) void `
    ///
    pub fn onBestFitLinePenChanged(self: QXYSeries, callback: *const fn (QXYSeries, QPen) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bestFitLineColorChanged` instead
    ///
    pub const BestFitLineColorChanged = bestFitLineColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn bestFitLineColorChanged(self: QXYSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QXYSeries_BestFitLineColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onBestFitLineColorChanged` instead
    ///
    pub const OnBestFitLineColorChanged = onBestFitLineColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, color: QColor) callconv(.c) void `
    ///
    pub fn onBestFitLineColorChanged(self: QXYSeries, callback: *const fn (QXYSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLineColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointsConfigurationChanged` instead
    ///
    pub const PointsConfigurationChanged = pointsConfigurationChanged;

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
    pub fn pointsConfigurationChanged(self: QXYSeries, allocator: std.mem.Allocator, configuration: Map_i32_Map_i32_QVariant) void {
        const configuration_count = configuration.count();
        const configuration_keys = allocator.alloc(i32, configuration_count) catch @panic("QXYSeries.pointsConfigurationChanged: Memory allocation failed");
        defer allocator.free(configuration_keys);
        const configuration_values = allocator.alloc(Map_i32_QVariant, configuration_count) catch @panic("QXYSeries.pointsConfigurationChanged: Memory allocation failed");
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

    /// ### DEPRECATED: Use `onPointsConfigurationChanged` instead
    ///
    pub const OnPointsConfigurationChanged = onPointsConfigurationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsConfigurationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, configuration: qtc.libqt_map (Map_i32_Map_i32_QVariant)) callconv(.c) void `
    ///
    pub fn onPointsConfigurationChanged(self: QXYSeries, callback: *const fn (QXYSeries, qtc.libqt_map) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsConfigurationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `markerSizeChanged` instead
    ///
    pub const MarkerSizeChanged = markerSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#markerSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` size: f64 `
    ///
    pub fn markerSizeChanged(self: QXYSeries, size: f64) void {
        qtc.QXYSeries_MarkerSizeChanged(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `onMarkerSizeChanged` instead
    ///
    pub const OnMarkerSizeChanged = onMarkerSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#markerSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, size: f64) callconv(.c) void `
    ///
    pub fn onMarkerSizeChanged(self: QXYSeries, callback: *const fn (QXYSeries, f64) callconv(.c) void) void {
        qtc.QXYSeries_Connect_MarkerSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXYSeries.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXYSeries.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPointsVisible1` instead
    ///
    pub const SetPointsVisible1 = setPointsVisible1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn setPointsVisible1(self: QXYSeries, visible: bool) void {
        qtc.QXYSeries_SetPointsVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setPointLabelsVisible1` instead
    ///
    pub const SetPointLabelsVisible1 = setPointLabelsVisible1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn setPointLabelsVisible1(self: QXYSeries, visible: bool) void {
        qtc.QXYSeries_SetPointLabelsVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setPointLabelsClipping1` instead
    ///
    pub const SetPointLabelsClipping1 = setPointLabelsClipping1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` enabled: bool `
    ///
    pub fn setPointLabelsClipping1(self: QXYSeries, enabled: bool) void {
        qtc.QXYSeries_SetPointLabelsClipping1(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `setBestFitLineVisible1` instead
    ///
    pub const SetBestFitLineVisible1 = setBestFitLineVisible1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn setBestFitLineVisible1(self: QXYSeries, visible: bool) void {
        qtc.QXYSeries_SetBestFitLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `colorBy2` instead
    ///
    pub const ColorBy2 = colorBy2;

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
    pub fn colorBy2(self: QXYSeries, sourceData: []f64, gradient: anytype) void {
        const sourceData_list = qtc.libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.QXYSeries_ColorBy2(@ptrCast(self.ptr), sourceData_list, @ptrCast(gradient.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QXYSeries) i32 {
        return qtc.QAbstractSeries_Type(@ptrCast(self.ptr));
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
    /// ` self: QXYSeries `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QXYSeries, _name: []const u8) void {
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
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QXYSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSeries_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXYSeries.name: Memory allocation failed");
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
    /// ` self: QXYSeries `
    ///
    pub fn setVisible(self: QXYSeries) void {
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
    /// ` self: QXYSeries `
    ///
    pub fn isVisible(self: QXYSeries) bool {
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
    /// ` self: QXYSeries `
    ///
    pub fn opacity(self: QXYSeries) f64 {
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
    /// ` self: QXYSeries `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QXYSeries, _opacity: f64) void {
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
    /// ` self: QXYSeries `
    ///
    pub fn setUseOpenGL(self: QXYSeries) void {
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
    /// ` self: QXYSeries `
    ///
    pub fn useOpenGL(self: QXYSeries) bool {
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
    /// ` self: QXYSeries `
    ///
    pub fn chart(self: QXYSeries) QChart {
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
    /// ` self: QXYSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn attachAxis(self: QXYSeries, axis: anytype) bool {
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
    /// ` self: QXYSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn detachAxis(self: QXYSeries, axis: anytype) bool {
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
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn attachedAxes(self: QXYSeries, allocator: std.mem.Allocator) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("QXYSeries.attachedAxes: Memory allocation failed");
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
    /// ` self: QXYSeries `
    ///
    pub fn show(self: QXYSeries) void {
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
    /// ` self: QXYSeries `
    ///
    pub fn hide(self: QXYSeries) void {
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
    /// ` self: QXYSeries `
    ///
    pub fn nameChanged(self: QXYSeries) void {
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
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries) callconv(.c) void `
    ///
    pub fn onNameChanged(self: QXYSeries, callback: *const fn (QXYSeries) callconv(.c) void) void {
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
    /// ` self: QXYSeries `
    ///
    pub fn visibleChanged(self: QXYSeries) void {
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
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QXYSeries, callback: *const fn (QXYSeries) callconv(.c) void) void {
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
    /// ` self: QXYSeries `
    ///
    pub fn opacityChanged(self: QXYSeries) void {
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
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries) callconv(.c) void `
    ///
    pub fn onOpacityChanged(self: QXYSeries, callback: *const fn (QXYSeries) callconv(.c) void) void {
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
    /// ` self: QXYSeries `
    ///
    pub fn useOpenGLChanged(self: QXYSeries) void {
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
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries) callconv(.c) void `
    ///
    pub fn onUseOpenGLChanged(self: QXYSeries, callback: *const fn (QXYSeries) callconv(.c) void) void {
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
    /// ` self: QXYSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible1(self: QXYSeries, visible: bool) void {
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
    /// ` self: QXYSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn setUseOpenGL1(self: QXYSeries, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXYSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QXYSeries, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QXYSeries, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QXYSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXYSeries.objectName: Memory allocation failed");
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
    /// ` self: QXYSeries `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: QXYSeries, _name: []const u8) void {
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
    /// ` self: QXYSeries `
    ///
    pub fn isWidgetType(self: QXYSeries) bool {
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
    /// ` self: QXYSeries `
    ///
    pub fn isWindowType(self: QXYSeries) bool {
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
    /// ` self: QXYSeries `
    ///
    pub fn isQuickItemType(self: QXYSeries) bool {
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
    /// ` self: QXYSeries `
    ///
    pub fn signalsBlocked(self: QXYSeries) bool {
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
    /// ` self: QXYSeries `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QXYSeries, b: bool) bool {
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
    /// ` self: QXYSeries `
    ///
    pub fn thread(self: QXYSeries) QThread {
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
    /// ` self: QXYSeries `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QXYSeries, _thread: anytype) bool {
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
    /// ` self: QXYSeries `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QXYSeries, interval: i32) i32 {
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
    /// ` self: QXYSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QXYSeries, time: i64) i32 {
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
    /// ` self: QXYSeries `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QXYSeries, id: i32) void {
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
    /// ` self: QXYSeries `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QXYSeries, id: i32) void {
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
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QXYSeries, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QXYSeries.children: Memory allocation failed");
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
    /// ` self: QXYSeries `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QXYSeries, _parent: anytype) void {
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
    /// ` self: QXYSeries `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QXYSeries, filterObj: anytype) void {
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
    /// ` self: QXYSeries `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QXYSeries, obj: anytype) void {
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
    /// ` self: QXYSeries `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QXYSeries, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QXYSeries `
    ///
    pub fn disconnect3(self: QXYSeries) bool {
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
    /// ` self: QXYSeries `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QXYSeries, receiver: anytype) bool {
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
    /// ` self: QXYSeries `
    ///
    pub fn dumpObjectTree(self: QXYSeries) void {
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
    /// ` self: QXYSeries `
    ///
    pub fn dumpObjectInfo(self: QXYSeries) void {
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
    /// ` self: QXYSeries `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QXYSeries, _name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QXYSeries `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: QXYSeries, _name: [:0]const u8) QVariant {
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
    /// ` self: QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QXYSeries, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QXYSeries.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QXYSeries.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QXYSeries `
    ///
    pub fn bindingStorage(self: QXYSeries) QBindingStorage {
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
    /// ` self: QXYSeries `
    ///
    pub fn bindingStorage2(self: QXYSeries) QBindingStorage {
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
    /// ` self: QXYSeries `
    ///
    pub fn destroyed(self: QXYSeries) void {
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
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QXYSeries, callback: *const fn (QXYSeries) callconv(.c) void) void {
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
    /// ` self: QXYSeries `
    ///
    pub fn parent(self: QXYSeries) QObject {
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
    /// ` self: QXYSeries `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QXYSeries, classname: [:0]const u8) bool {
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
    /// ` self: QXYSeries `
    ///
    pub fn deleteLater(self: QXYSeries) void {
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
    /// ` self: QXYSeries `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QXYSeries, interval: i32, timerType: i32) i32 {
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
    /// ` self: QXYSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QXYSeries, time: i64, timerType: i32) i32 {
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
    /// ` self: QXYSeries `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QXYSeries, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QXYSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QXYSeries, signal: [:0]const u8) bool {
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
    /// ` self: QXYSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QXYSeries, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QXYSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QXYSeries, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QXYSeries `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QXYSeries, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QXYSeries `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QXYSeries, param1: anytype) void {
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
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QXYSeries, callback: *const fn (QXYSeries, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QXYSeries `
    ///
    /// ` callback: *const fn (self: QXYSeries, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QXYSeries, callback: *const fn (QXYSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#dtor.QXYSeries)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QXYSeries `
    ///
    pub fn delete(self: QXYSeries) void {
        qtc.QXYSeries_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#public-types)
pub const enums = struct {
    pub const PointConfiguration = enum {
        pub const Color: i32 = 0;
        pub const Size: i32 = 1;
        pub const Visibility: i32 = 2;
        pub const LabelVisibility: i32 = 3;
        pub const LabelFormat: i32 = 4;
    };
};
