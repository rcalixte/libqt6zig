const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qxyseries_enums = enums;
const std = @import("std");
pub const map_i32_mapi32qtcqvariant = std.AutoHashMapUnmanaged(i32, map_i32_qtcqvariant);
pub const map_i32_qtcqvariant = std.AutoHashMapUnmanaged(i32, QtC.QVariant);
pub const struct_f64_f64 = extern struct { first: f64, second: f64 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html)
pub const qxyseries = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QXYSeries_MetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QXYSeries_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: ?**anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?**anyopaque) i32 {
        return qtc.QXYSeries_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QXYSeries `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn Append(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QXYSeries_Append(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn Append2(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Append2(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` points: []QtC.QPointF `
    ///
    pub fn Append3(self: ?*anyopaque, points: []QtC.QPointF) void {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        qtc.QXYSeries_Append3(@ptrCast(self), points_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` oldX: f64 `
    ///
    /// ` oldY: f64 `
    ///
    /// ` newX: f64 `
    ///
    /// ` newY: f64 `
    ///
    pub fn Replace(self: ?*anyopaque, oldX: f64, oldY: f64, newX: f64, newY: f64) void {
        qtc.QXYSeries_Replace(@ptrCast(self), @floatCast(oldX), @floatCast(oldY), @floatCast(newX), @floatCast(newY));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` oldPoint: QtC.QPointF `
    ///
    /// ` newPoint: QtC.QPointF `
    ///
    pub fn Replace2(self: ?*anyopaque, oldPoint: ?*anyopaque, newPoint: ?*anyopaque) void {
        qtc.QXYSeries_Replace2(@ptrCast(self), @ptrCast(oldPoint), @ptrCast(newPoint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` newX: f64 `
    ///
    /// ` newY: f64 `
    ///
    pub fn Replace3(self: ?*anyopaque, index: i32, newX: f64, newY: f64) void {
        qtc.QXYSeries_Replace3(@ptrCast(self), @intCast(index), @floatCast(newX), @floatCast(newY));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` newPoint: QtC.QPointF `
    ///
    pub fn Replace4(self: ?*anyopaque, index: i32, newPoint: ?*anyopaque) void {
        qtc.QXYSeries_Replace4(@ptrCast(self), @intCast(index), @ptrCast(newPoint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn Remove(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QXYSeries_Remove(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn Remove2(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Remove2(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn Remove3(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_Remove3(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#removePoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn RemovePoints(self: ?*anyopaque, index: i32, count: i32) void {
        qtc.QXYSeries_RemovePoints(@ptrCast(self), @intCast(index), @intCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn Insert(self: ?*anyopaque, index: i32, point: ?*anyopaque) void {
        qtc.QXYSeries_Insert(@ptrCast(self), @intCast(index), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QXYSeries_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QXYSeries_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QPointF {
        const _arr: qtc.libqt_list = qtc.QXYSeries_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPointF, _arr.len) catch @panic("qxyseries.Points: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PointsVector(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QPointF {
        const _arr: qtc.libqt_list = qtc.QXYSeries_PointsVector(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPointF, _arr.len) catch @panic("qxyseries.PointsVector: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn At(self: ?*anyopaque, index: i32) QtC.QPointF {
        return qtc.QXYSeries_At(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn OperatorShiftLeft(self: ?*anyopaque, point: ?*anyopaque) QtC.QXYSeries {
        return qtc.QXYSeries_OperatorShiftLeft(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` points: []QtC.QPointF `
    ///
    pub fn OperatorShiftLeft2(self: ?*anyopaque, points: []QtC.QPointF) QtC.QXYSeries {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        return qtc.QXYSeries_OperatorShiftLeft2(@ptrCast(self), points_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QXYSeries_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn Pen(self: ?*anyopaque) QtC.QPen {
        return qtc.QXYSeries_Pen(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QXYSeries_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn Brush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QXYSeries_Brush(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SetColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn Color(self: ?*anyopaque) QtC.QColor {
        return qtc.QXYSeries_Color(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setSelectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetSelectedColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SetSelectedColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn SelectedColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QXYSeries_SelectedColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn SetPointsVisible(self: ?*anyopaque) void {
        qtc.QXYSeries_SetPointsVisible(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn PointsVisible(self: ?*anyopaque) bool {
        return qtc.QXYSeries_PointsVisible(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn SetPointLabelsFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QXYSeries_SetPointLabelsFormat(@ptrCast(self), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PointLabelsFormat(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXYSeries_PointLabelsFormat(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxyseries.PointLabelsFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn SetPointLabelsVisible(self: ?*anyopaque) void {
        qtc.QXYSeries_SetPointLabelsVisible(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn PointLabelsVisible(self: ?*anyopaque) bool {
        return qtc.QXYSeries_PointLabelsVisible(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn SetPointLabelsFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QXYSeries_SetPointLabelsFont(@ptrCast(self), @ptrCast(font));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn PointLabelsFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QXYSeries_PointLabelsFont(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetPointLabelsColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SetPointLabelsColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn PointLabelsColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QXYSeries_PointLabelsColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn SetPointLabelsClipping(self: ?*anyopaque) void {
        qtc.QXYSeries_SetPointLabelsClipping(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn PointLabelsClipping(self: ?*anyopaque) bool {
        return qtc.QXYSeries_PointLabelsClipping(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` points: []QtC.QPointF `
    ///
    pub fn Replace5(self: ?*anyopaque, points: []QtC.QPointF) void {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        qtc.QXYSeries_Replace5(@ptrCast(self), points_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#isPointSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn IsPointSelected(self: ?*anyopaque, index: i32) bool {
        return qtc.QXYSeries_IsPointSelected(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn SelectPoint(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_SelectPoint(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#deselectPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn DeselectPoint(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_DeselectPoint(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` selected: bool `
    ///
    pub fn SetPointSelected(self: ?*anyopaque, index: i32, selected: bool) void {
        qtc.QXYSeries_SetPointSelected(@ptrCast(self), @intCast(index), selected);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectAllPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn SelectAllPoints(self: ?*anyopaque) void {
        qtc.QXYSeries_SelectAllPoints(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#deselectAllPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn DeselectAllPoints(self: ?*anyopaque) void {
        qtc.QXYSeries_DeselectAllPoints(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn SelectPoints(self: ?*anyopaque, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_SelectPoints(@ptrCast(self), indexes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#deselectPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn DeselectPoints(self: ?*anyopaque, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_DeselectPoints(@ptrCast(self), indexes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#toggleSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn ToggleSelection(self: ?*anyopaque, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_ToggleSelection(@ptrCast(self), indexes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedPoints(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QXYSeries_SelectedPoints(@ptrCast(self));
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
    /// ` self: QtC.QXYSeries `
    ///
    /// ` lightMarker: QtC.QImage `
    ///
    pub fn SetLightMarker(self: ?*anyopaque, lightMarker: ?*anyopaque) void {
        qtc.QXYSeries_SetLightMarker(@ptrCast(self), @ptrCast(lightMarker));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#lightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn LightMarker(self: ?*anyopaque) QtC.QImage {
        return qtc.QXYSeries_LightMarker(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setSelectedLightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` selectedLightMarker: QtC.QImage `
    ///
    pub fn SetSelectedLightMarker(self: ?*anyopaque, selectedLightMarker: ?*anyopaque) void {
        qtc.QXYSeries_SetSelectedLightMarker(@ptrCast(self), @ptrCast(selectedLightMarker));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedLightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn SelectedLightMarker(self: ?*anyopaque) QtC.QImage {
        return qtc.QXYSeries_SelectedLightMarker(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setMarkerSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` size: f64 `
    ///
    pub fn SetMarkerSize(self: ?*anyopaque, size: f64) void {
        qtc.QXYSeries_SetMarkerSize(@ptrCast(self), @floatCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#markerSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn MarkerSize(self: ?*anyopaque) f64 {
        return qtc.QXYSeries_MarkerSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn SetBestFitLineVisible(self: ?*anyopaque) void {
        qtc.QXYSeries_SetBestFitLineVisible(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn BestFitLineVisible(self: ?*anyopaque) bool {
        return qtc.QXYSeries_BestFitLineVisible(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` ok: *bool `
    ///
    pub fn BestFitLineEquation(self: ?*anyopaque, ok: *bool) struct_f64_f64 {
        const _pair: qtc.libqt_pair = qtc.QXYSeries_BestFitLineEquation(@ptrCast(self), @ptrCast(ok));
        return struct_f64_f64{
            .first = @as(*f64, @ptrCast(@alignCast(_pair.first))).*,
            .second = @as(*f64, @ptrCast(@alignCast(_pair.second))).*,
        };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn SetBestFitLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QXYSeries_SetBestFitLinePen(@ptrCast(self), @ptrCast(pen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn BestFitLinePen(self: ?*anyopaque) QtC.QPen {
        return qtc.QXYSeries_BestFitLinePen(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetBestFitLineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SetBestFitLineColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn BestFitLineColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QXYSeries_BestFitLineColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn ClearPointConfiguration(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_ClearPointConfiguration(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` key: qxyseries_enums.PointConfiguration `
    ///
    pub fn ClearPointConfiguration2(self: ?*anyopaque, index: i32, key: i32) void {
        qtc.QXYSeries_ClearPointConfiguration2(@ptrCast(self), @intCast(index), @intCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn ClearPointsConfiguration(self: ?*anyopaque) void {
        qtc.QXYSeries_ClearPointsConfiguration(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` key: qxyseries_enums.PointConfiguration `
    ///
    pub fn ClearPointsConfiguration2(self: ?*anyopaque, key: i32) void {
        qtc.QXYSeries_ClearPointsConfiguration2(@ptrCast(self), @intCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` configuration: map_i32_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetPointConfiguration(self: ?*anyopaque, index: i32, configuration: map_i32_qtcqvariant, allocator: std.mem.Allocator) void {
        const configuration_keys = allocator.alloc(i32, configuration.count()) catch @panic("qxyseries.SetPointConfiguration: Memory allocation failed");
        defer allocator.free(configuration_keys);
        const configuration_values = allocator.alloc(QtC.QVariant, configuration.count()) catch @panic("qxyseries.SetPointConfiguration: Memory allocation failed");
        defer allocator.free(configuration_values);
        var i: usize = 0;
        var configuration_it = configuration.iterator();
        while (configuration_it.next()) |entry| {
            const key = entry.key_ptr.*;
            configuration_keys[i] = @intCast(key);
            configuration_values[i] = @ptrCast(entry.value_ptr.*);
            i += 1;
        }
        const configuration_map = qtc.libqt_map{
            .len = configuration.count(),
            .keys = @ptrCast(configuration_keys.ptr),
            .values = @ptrCast(configuration_values.ptr),
        };
        qtc.QXYSeries_SetPointConfiguration(@ptrCast(self), @intCast(index), configuration_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` key: qxyseries_enums.PointConfiguration `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetPointConfiguration2(self: ?*anyopaque, index: i32, key: i32, value: ?*anyopaque) void {
        qtc.QXYSeries_SetPointConfiguration2(@ptrCast(self), @intCast(index), @intCast(key), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` pointsConfiguration: map_i32_mapi32qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetPointsConfiguration(self: ?*anyopaque, pointsConfiguration: map_i32_mapi32qtcqvariant, allocator: std.mem.Allocator) void {
        const pointsConfiguration_keys = allocator.alloc(i32, pointsConfiguration.count()) catch @panic("qxyseries.SetPointsConfiguration: Memory allocation failed");
        defer allocator.free(pointsConfiguration_keys);
        const pointsConfiguration_values = allocator.alloc(map_i32_qtcqvariant, pointsConfiguration.count()) catch @panic("qxyseries.SetPointsConfiguration: Memory allocation failed");
        defer allocator.free(pointsConfiguration_values);
        var i: usize = 0;
        var pointsConfiguration_it = pointsConfiguration.iterator();
        while (pointsConfiguration_it.next()) |entry| {
            const key = entry.key_ptr.*;
            pointsConfiguration_keys[i] = @intCast(key);
            pointsConfiguration_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const pointsConfiguration_map = qtc.libqt_map{
            .len = pointsConfiguration.count(),
            .keys = @ptrCast(pointsConfiguration_keys.ptr),
            .values = @ptrCast(pointsConfiguration_values.ptr),
        };
        qtc.QXYSeries_SetPointsConfiguration(@ptrCast(self), pointsConfiguration_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PointConfiguration(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QXYSeries_PointConfiguration(@ptrCast(self), @intCast(index));
        var _ret: map_i32_qtcqvariant = .empty;
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
            _ret.put(allocator, _key, _value) catch @panic("qxyseries.PointConfiguration: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PointsConfiguration(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_mapi32qtcqvariant {
        const _map: qtc.libqt_map = qtc.QXYSeries_PointsConfiguration(@ptrCast(self));
        var _ret: map_i32_mapi32qtcqvariant = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]map_i32_qtcqvariant = @ptrCast(@alignCast(_map.values));
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
    /// ` self: QtC.QXYSeries `
    ///
    /// ` sourceData: []f64 `
    ///
    /// ` minSize: f64 `
    ///
    /// ` maxSize: f64 `
    ///
    pub fn SizeBy(self: ?*anyopaque, sourceData: []f64, minSize: f64, maxSize: f64) void {
        const sourceData_list = qtc.libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        qtc.QXYSeries_SizeBy(@ptrCast(self), sourceData_list, @floatCast(minSize), @floatCast(maxSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` sourceData: []f64 `
    ///
    pub fn ColorBy(self: ?*anyopaque, sourceData: []f64) void {
        const sourceData_list = qtc.libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        qtc.QXYSeries_ColorBy(@ptrCast(self), sourceData_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn Clicked(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Clicked(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriespoint: QtC.QPointF) callconv(.c) void `
    ///
    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` point: QtC.QPointF `
    ///
    /// ` state: bool `
    ///
    pub fn Hovered(self: ?*anyopaque, point: ?*anyopaque, state: bool) void {
        qtc.QXYSeries_Hovered(@ptrCast(self), @ptrCast(point), state);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriespoint: QtC.QPointF, state: bool) callconv(.c) void `
    ///
    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn Pressed(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Pressed(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriespoint: QtC.QPointF) callconv(.c) void `
    ///
    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Pressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn Released(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Released(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriespoint: QtC.QPointF) callconv(.c) void `
    ///
    pub fn OnReleased(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Released(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn DoubleClicked(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_DoubleClicked(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriespoint: QtC.QPointF) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_DoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn PointReplaced(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_PointReplaced(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriesindex: i32) callconv(.c) void `
    ///
    pub fn OnPointReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn PointRemoved(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_PointRemoved(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriesindex: i32) callconv(.c) void `
    ///
    pub fn OnPointRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn PointAdded(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_PointAdded(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriesindex: i32) callconv(.c) void `
    ///
    pub fn OnPointAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn ColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QXYSeries_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriescolor: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_ColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SelectedColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SelectedColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriescolor: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnSelectedColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn PointsReplaced(self: ?*anyopaque) void {
        qtc.QXYSeries_PointsReplaced(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeries) callconv(.c) void `
    ///
    pub fn OnPointsReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn PointLabelsFormatChanged(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QXYSeries_PointLabelsFormatChanged(@ptrCast(self), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriesformat: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPointLabelsFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsFormatChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn PointLabelsVisibilityChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_PointLabelsVisibilityChanged(@ptrCast(self), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriesvisible: bool) callconv(.c) void `
    ///
    pub fn OnPointLabelsVisibilityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsVisibilityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn PointLabelsFontChanged(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QXYSeries_PointLabelsFontChanged(@ptrCast(self), @ptrCast(font));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriesfont: QtC.QFont) callconv(.c) void `
    ///
    pub fn OnPointLabelsFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsFontChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn PointLabelsColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_PointLabelsColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriescolor: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnPointLabelsColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsClippingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` clipping: bool `
    ///
    pub fn PointLabelsClippingChanged(self: ?*anyopaque, clipping: bool) void {
        qtc.QXYSeries_PointLabelsClippingChanged(@ptrCast(self), clipping);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsClippingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriesclipping: bool) callconv(.c) void `
    ///
    pub fn OnPointLabelsClippingChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsClippingChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn PointsRemoved(self: ?*anyopaque, index: i32, count: i32) void {
        qtc.QXYSeries_PointsRemoved(@ptrCast(self), @intCast(index), @intCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriesindex: i32, count: i32) callconv(.c) void `
    ///
    pub fn OnPointsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn PenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QXYSeries_PenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriespen: QtC.QPen) callconv(.c) void `
    ///
    pub fn OnPenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedPointsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn SelectedPointsChanged(self: ?*anyopaque) void {
        qtc.QXYSeries_SelectedPointsChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedPointsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeries) callconv(.c) void `
    ///
    pub fn OnSelectedPointsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedPointsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#lightMarkerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` lightMarker: QtC.QImage `
    ///
    pub fn LightMarkerChanged(self: ?*anyopaque, lightMarker: ?*anyopaque) void {
        qtc.QXYSeries_LightMarkerChanged(@ptrCast(self), @ptrCast(lightMarker));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#lightMarkerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSerieslightMarker: QtC.QImage) callconv(.c) void `
    ///
    pub fn OnLightMarkerChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_LightMarkerChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedLightMarkerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` selectedLightMarker: QtC.QImage `
    ///
    pub fn SelectedLightMarkerChanged(self: ?*anyopaque, selectedLightMarker: ?*anyopaque) void {
        qtc.QXYSeries_SelectedLightMarkerChanged(@ptrCast(self), @ptrCast(selectedLightMarker));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedLightMarkerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriesselectedLightMarker: QtC.QImage) callconv(.c) void `
    ///
    pub fn OnSelectedLightMarkerChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedLightMarkerChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn BestFitLineVisibilityChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_BestFitLineVisibilityChanged(@ptrCast(self), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriesvisible: bool) callconv(.c) void `
    ///
    pub fn OnBestFitLineVisibilityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLineVisibilityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn BestFitLinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QXYSeries_BestFitLinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLinePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriespen: QtC.QPen) callconv(.c) void `
    ///
    pub fn OnBestFitLinePenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLinePenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn BestFitLineColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_BestFitLineColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriescolor: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnBestFitLineColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLineColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsConfigurationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` configuration: map_i32_mapi32qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PointsConfigurationChanged(self: ?*anyopaque, configuration: map_i32_mapi32qtcqvariant, allocator: std.mem.Allocator) void {
        const configuration_keys = allocator.alloc(i32, configuration.count()) catch @panic("qxyseries.PointsConfigurationChanged: Memory allocation failed");
        defer allocator.free(configuration_keys);
        const configuration_values = allocator.alloc(map_i32_qtcqvariant, configuration.count()) catch @panic("qxyseries.PointsConfigurationChanged: Memory allocation failed");
        defer allocator.free(configuration_values);
        var i: usize = 0;
        var configuration_it = configuration.iterator();
        while (configuration_it.next()) |entry| {
            const key = entry.key_ptr.*;
            configuration_keys[i] = @intCast(key);
            configuration_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const configuration_map = qtc.libqt_map{
            .len = configuration.count(),
            .keys = @ptrCast(configuration_keys.ptr),
            .values = @ptrCast(configuration_values.ptr),
        };
        qtc.QXYSeries_PointsConfigurationChanged(@ptrCast(self), configuration_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsConfigurationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriesconfiguration: map_i32_mapi32qtcqvariant) callconv(.c) void `
    ///
    pub fn OnPointsConfigurationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, map_i32_mapi32qtcqvariant) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsConfigurationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#markerSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` size: f64 `
    ///
    pub fn MarkerSizeChanged(self: ?*anyopaque, size: f64) void {
        qtc.QXYSeries_MarkerSizeChanged(@ptrCast(self), @floatCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#markerSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriessize: f64) callconv(.c) void `
    ///
    pub fn OnMarkerSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QXYSeries_Connect_MarkerSizeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    /// ` c: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: []const u8 `
    ///
    /// ` c: []const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxyseries.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetPointsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_SetPointsVisible1(@ptrCast(self), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetPointLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_SetPointLabelsVisible1(@ptrCast(self), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetPointLabelsClipping1(self: ?*anyopaque, enabled: bool) void {
        qtc.QXYSeries_SetPointLabelsClipping1(@ptrCast(self), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetBestFitLineVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_SetBestFitLineVisible1(@ptrCast(self), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` sourceData: []f64 `
    ///
    /// ` gradient: QtC.QLinearGradient `
    ///
    pub fn ColorBy2(self: ?*anyopaque, sourceData: []f64, gradient: ?*anyopaque) void {
        const sourceData_list = qtc.libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        qtc.QXYSeries_ColorBy2(@ptrCast(self), sourceData_list, @ptrCast(gradient));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QAbstractSeries_Type(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QAbstractSeries_SetName(@ptrCast(self), name_str);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSeries_Name(@ptrCast(self));
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
    /// ` self: QtC.QXYSeries `
    ///
    pub fn SetVisible(self: ?*anyopaque) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn SetUseOpenGL(self: ?*anyopaque) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn UseOpenGL(self: ?*anyopaque) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn Chart(self: ?*anyopaque) QtC.QChart {
        return qtc.QAbstractSeries_Chart(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` axis: QtC.QAbstractAxis `
    ///
    pub fn AttachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` axis: QtC.QAbstractAxis `
    ///
    pub fn DetachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AttachedAxes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractAxis, _arr.len) catch @panic("qxyseries.AttachedAxes: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn Show(self: ?*anyopaque) void {
        qtc.QAbstractSeries_Show(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn NameChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeries) callconv(.c) void `
    ///
    pub fn OnNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn VisibleChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeries) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn OpacityChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeries) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn UseOpenGLChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeries) callconv(.c) void `
    ///
    pub fn OnUseOpenGLChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUseOpenGL1(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self), enable);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QXYSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qxyseries.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: []const u8 `
    ///
    /// ` member: []const u8 `
    ///
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QXYSeries `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeries) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` classname: []const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` thread: QtC.QThread `
    ///
    /// ` param2: QtC.Disambiguated_t `
    ///
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: []const u8 `
    ///
    /// ` member: []const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriesparam1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    /// ` callback: *const fn (self: QtC.QXYSeriesobjectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#dtor.QXYSeries)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QXYSeries `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXYSeries_Delete(@ptrCast(self));
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
