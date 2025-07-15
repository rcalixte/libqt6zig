const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qxyseries_enums = enums;
const std = @import("std");
pub const map_i32_mapi32qtcqvariant = std.AutoHashMapUnmanaged(i32, map_i32_qtcqvariant);
pub const map_i32_qtcqvariant = std.AutoHashMapUnmanaged(i32, QtC.QVariant);
pub const struct_f64_f64 = struct { first: f64, second: f64 };

/// https://doc.qt.io/qt-6/qxyseries-qtcharts.html
pub const qxyseries = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QXYSeries_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QXYSeries, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QXYSeries_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QXYSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QXYSeries_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QXYSeries_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxyseries.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#append)
    ///
    /// ``` self: QtC.QXYSeries, x: f64, y: f64 ```
    pub fn Append(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QXYSeries_Append(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#append)
    ///
    /// ``` self: QtC.QXYSeries, point: QtC.QPointF ```
    pub fn Append2(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Append2(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#append)
    ///
    /// ``` self: QtC.QXYSeries, points: []QtC.QPointF ```
    pub fn Append3(self: ?*anyopaque, points: []QtC.QPointF) void {
        const points_list = qtc.struct_libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        qtc.QXYSeries_Append3(@ptrCast(self), points_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
    ///
    /// ``` self: QtC.QXYSeries, oldX: f64, oldY: f64, newX: f64, newY: f64 ```
    pub fn Replace(self: ?*anyopaque, oldX: f64, oldY: f64, newX: f64, newY: f64) void {
        qtc.QXYSeries_Replace(@ptrCast(self), @floatCast(oldX), @floatCast(oldY), @floatCast(newX), @floatCast(newY));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
    ///
    /// ``` self: QtC.QXYSeries, oldPoint: QtC.QPointF, newPoint: QtC.QPointF ```
    pub fn Replace2(self: ?*anyopaque, oldPoint: ?*anyopaque, newPoint: ?*anyopaque) void {
        qtc.QXYSeries_Replace2(@ptrCast(self), @ptrCast(oldPoint), @ptrCast(newPoint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
    ///
    /// ``` self: QtC.QXYSeries, index: i32, newX: f64, newY: f64 ```
    pub fn Replace3(self: ?*anyopaque, index: i32, newX: f64, newY: f64) void {
        qtc.QXYSeries_Replace3(@ptrCast(self), @intCast(index), @floatCast(newX), @floatCast(newY));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
    ///
    /// ``` self: QtC.QXYSeries, index: i32, newPoint: QtC.QPointF ```
    pub fn Replace4(self: ?*anyopaque, index: i32, newPoint: ?*anyopaque) void {
        qtc.QXYSeries_Replace4(@ptrCast(self), @intCast(index), @ptrCast(newPoint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#remove)
    ///
    /// ``` self: QtC.QXYSeries, x: f64, y: f64 ```
    pub fn Remove(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QXYSeries_Remove(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#remove)
    ///
    /// ``` self: QtC.QXYSeries, point: QtC.QPointF ```
    pub fn Remove2(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Remove2(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#remove)
    ///
    /// ``` self: QtC.QXYSeries, index: i32 ```
    pub fn Remove3(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_Remove3(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#removePoints)
    ///
    /// ``` self: QtC.QXYSeries, index: i32, count: i32 ```
    pub fn RemovePoints(self: ?*anyopaque, index: i32, count: i32) void {
        qtc.QXYSeries_RemovePoints(@ptrCast(self), @intCast(index), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#insert)
    ///
    /// ``` self: QtC.QXYSeries, index: i32, point: QtC.QPointF ```
    pub fn Insert(self: ?*anyopaque, index: i32, point: ?*anyopaque) void {
        qtc.QXYSeries_Insert(@ptrCast(self), @intCast(index), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clear)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QXYSeries_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#count)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QXYSeries_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#points)
    ///
    /// ``` self: QtC.QXYSeries, allocator: std.mem.Allocator ```
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QPointF {
        const _arr: qtc.struct_libqt_list = qtc.QXYSeries_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPointF, _arr.len) catch @panic("qxyseries.Points: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsVector)
    ///
    /// ``` self: QtC.QXYSeries, allocator: std.mem.Allocator ```
    pub fn PointsVector(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QPointF {
        const _arr: qtc.struct_libqt_list = qtc.QXYSeries_PointsVector(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPointF, _arr.len) catch @panic("qxyseries.PointsVector: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#at)
    ///
    /// ``` self: QtC.QXYSeries, index: i32 ```
    pub fn At(self: ?*anyopaque, index: i32) QtC.QPointF {
        return qtc.QXYSeries_At(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#operator<<)
    ///
    /// ``` self: QtC.QXYSeries, point: QtC.QPointF ```
    pub fn OperatorShiftLeft(self: ?*anyopaque, point: ?*anyopaque) QtC.QXYSeries {
        return qtc.QXYSeries_OperatorShiftLeft(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#operator<<)
    ///
    /// ``` self: QtC.QXYSeries, points: []QtC.QPointF ```
    pub fn OperatorShiftLeft2(self: ?*anyopaque, points: []QtC.QPointF) QtC.QXYSeries {
        const points_list = qtc.struct_libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        return qtc.QXYSeries_OperatorShiftLeft2(@ptrCast(self), points_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPen)
    ///
    /// ``` self: QtC.QXYSeries, pen: QtC.QPen ```
    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QXYSeries_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pen)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn Pen(self: ?*anyopaque) QtC.QPen {
        return qtc.QXYSeries_Pen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBrush)
    ///
    /// ``` self: QtC.QXYSeries, brush: QtC.QBrush ```
    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QXYSeries_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#brush)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn Brush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QXYSeries_Brush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setColor)
    ///
    /// ``` self: QtC.QXYSeries, color: QtC.QColor ```
    pub fn SetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SetColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#color)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn Color(self: ?*anyopaque) QtC.QColor {
        return qtc.QXYSeries_Color(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setSelectedColor)
    ///
    /// ``` self: QtC.QXYSeries, color: QtC.QColor ```
    pub fn SetSelectedColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SetSelectedColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedColor)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn SelectedColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QXYSeries_SelectedColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointsVisible)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn SetPointsVisible(self: ?*anyopaque) void {
        qtc.QXYSeries_SetPointsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsVisible)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn PointsVisible(self: ?*anyopaque) bool {
        return qtc.QXYSeries_PointsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsFormat)
    ///
    /// ``` self: QtC.QXYSeries, format: []const u8 ```
    pub fn SetPointLabelsFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QXYSeries_SetPointLabelsFormat(@ptrCast(self), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFormat)
    ///
    /// ``` self: QtC.QXYSeries, allocator: std.mem.Allocator ```
    pub fn PointLabelsFormat(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QXYSeries_PointLabelsFormat(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxyseries.PointLabelsFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsVisible)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn SetPointLabelsVisible(self: ?*anyopaque) void {
        qtc.QXYSeries_SetPointLabelsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsVisible)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn PointLabelsVisible(self: ?*anyopaque) bool {
        return qtc.QXYSeries_PointLabelsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsFont)
    ///
    /// ``` self: QtC.QXYSeries, font: QtC.QFont ```
    pub fn SetPointLabelsFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QXYSeries_SetPointLabelsFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFont)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn PointLabelsFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QXYSeries_PointLabelsFont(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsColor)
    ///
    /// ``` self: QtC.QXYSeries, color: QtC.QColor ```
    pub fn SetPointLabelsColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SetPointLabelsColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsColor)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn PointLabelsColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QXYSeries_PointLabelsColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsClipping)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn SetPointLabelsClipping(self: ?*anyopaque) void {
        qtc.QXYSeries_SetPointLabelsClipping(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsClipping)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn PointLabelsClipping(self: ?*anyopaque) bool {
        return qtc.QXYSeries_PointLabelsClipping(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
    ///
    /// ``` self: QtC.QXYSeries, points: []QtC.QPointF ```
    pub fn Replace5(self: ?*anyopaque, points: []QtC.QPointF) void {
        const points_list = qtc.struct_libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        qtc.QXYSeries_Replace5(@ptrCast(self), points_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#isPointSelected)
    ///
    /// ``` self: QtC.QXYSeries, index: i32 ```
    pub fn IsPointSelected(self: ?*anyopaque, index: i32) bool {
        return qtc.QXYSeries_IsPointSelected(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectPoint)
    ///
    /// ``` self: QtC.QXYSeries, index: i32 ```
    pub fn SelectPoint(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_SelectPoint(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#deselectPoint)
    ///
    /// ``` self: QtC.QXYSeries, index: i32 ```
    pub fn DeselectPoint(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_DeselectPoint(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointSelected)
    ///
    /// ``` self: QtC.QXYSeries, index: i32, selected: bool ```
    pub fn SetPointSelected(self: ?*anyopaque, index: i32, selected: bool) void {
        qtc.QXYSeries_SetPointSelected(@ptrCast(self), @intCast(index), selected);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectAllPoints)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn SelectAllPoints(self: ?*anyopaque) void {
        qtc.QXYSeries_SelectAllPoints(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#deselectAllPoints)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn DeselectAllPoints(self: ?*anyopaque) void {
        qtc.QXYSeries_DeselectAllPoints(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectPoints)
    ///
    /// ``` self: QtC.QXYSeries, indexes: []i32 ```
    pub fn SelectPoints(self: ?*anyopaque, indexes: []i32) void {
        const indexes_list = qtc.struct_libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_SelectPoints(@ptrCast(self), indexes_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#deselectPoints)
    ///
    /// ``` self: QtC.QXYSeries, indexes: []i32 ```
    pub fn DeselectPoints(self: ?*anyopaque, indexes: []i32) void {
        const indexes_list = qtc.struct_libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_DeselectPoints(@ptrCast(self), indexes_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#toggleSelection)
    ///
    /// ``` self: QtC.QXYSeries, indexes: []i32 ```
    pub fn ToggleSelection(self: ?*anyopaque, indexes: []i32) void {
        const indexes_list = qtc.struct_libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_ToggleSelection(@ptrCast(self), indexes_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedPoints)
    ///
    /// ``` self: QtC.QXYSeries, allocator: std.mem.Allocator ```
    pub fn SelectedPoints(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.struct_libqt_list = qtc.QXYSeries_SelectedPoints(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qxyseries.SelectedPoints: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setLightMarker)
    ///
    /// ``` self: QtC.QXYSeries, lightMarker: QtC.QImage ```
    pub fn SetLightMarker(self: ?*anyopaque, lightMarker: ?*anyopaque) void {
        qtc.QXYSeries_SetLightMarker(@ptrCast(self), @ptrCast(lightMarker));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#lightMarker)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn LightMarker(self: ?*anyopaque) QtC.QImage {
        return qtc.QXYSeries_LightMarker(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setSelectedLightMarker)
    ///
    /// ``` self: QtC.QXYSeries, selectedLightMarker: QtC.QImage ```
    pub fn SetSelectedLightMarker(self: ?*anyopaque, selectedLightMarker: ?*anyopaque) void {
        qtc.QXYSeries_SetSelectedLightMarker(@ptrCast(self), @ptrCast(selectedLightMarker));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedLightMarker)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn SelectedLightMarker(self: ?*anyopaque) QtC.QImage {
        return qtc.QXYSeries_SelectedLightMarker(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setMarkerSize)
    ///
    /// ``` self: QtC.QXYSeries, size: f64 ```
    pub fn SetMarkerSize(self: ?*anyopaque, size: f64) void {
        qtc.QXYSeries_SetMarkerSize(@ptrCast(self), @floatCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#markerSize)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn MarkerSize(self: ?*anyopaque) f64 {
        return qtc.QXYSeries_MarkerSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLineVisible)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn SetBestFitLineVisible(self: ?*anyopaque) void {
        qtc.QXYSeries_SetBestFitLineVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineVisible)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn BestFitLineVisible(self: ?*anyopaque) bool {
        return qtc.QXYSeries_BestFitLineVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineEquation)
    ///
    /// ``` self: QtC.QXYSeries, ok: bool ```
    pub fn BestFitLineEquation(self: ?*anyopaque, ok: ?*anyopaque) struct_f64_f64 {
        const _pair: qtc.struct_libqt_pair = qtc.QXYSeries_BestFitLineEquation(@ptrCast(self), @ptrCast(ok));
        return struct_f64_f64{ .first = @ptrCast(_pair.first), .second = @ptrCast(_pair.second) };
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLinePen)
    ///
    /// ``` self: QtC.QXYSeries, pen: QtC.QPen ```
    pub fn SetBestFitLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QXYSeries_SetBestFitLinePen(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLinePen)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn BestFitLinePen(self: ?*anyopaque) QtC.QPen {
        return qtc.QXYSeries_BestFitLinePen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLineColor)
    ///
    /// ``` self: QtC.QXYSeries, color: QtC.QColor ```
    pub fn SetBestFitLineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SetBestFitLineColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineColor)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn BestFitLineColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QXYSeries_BestFitLineColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointConfiguration)
    ///
    /// ``` self: QtC.QXYSeries, index: i32 ```
    pub fn ClearPointConfiguration(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_ClearPointConfiguration(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointConfiguration)
    ///
    /// ``` self: QtC.QXYSeries, index: i32, key: qxyseries_enums.PointConfiguration ```
    pub fn ClearPointConfiguration2(self: ?*anyopaque, index: i32, key: i64) void {
        qtc.QXYSeries_ClearPointConfiguration2(@ptrCast(self), @intCast(index), @intCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointsConfiguration)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn ClearPointsConfiguration(self: ?*anyopaque) void {
        qtc.QXYSeries_ClearPointsConfiguration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointsConfiguration)
    ///
    /// ``` self: QtC.QXYSeries, key: qxyseries_enums.PointConfiguration ```
    pub fn ClearPointsConfiguration2(self: ?*anyopaque, key: i64) void {
        qtc.QXYSeries_ClearPointsConfiguration2(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointConfiguration)
    ///
    /// ``` self: QtC.QXYSeries, index: i32, configuration: map_i32_qtcqvariant, allocator: std.mem.Allocator ```
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
            configuration_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const configuration_map = qtc.struct_libqt_map{
            .len = configuration.count(),
            .keys = @ptrCast(configuration_keys.ptr),
            .values = @ptrCast(configuration_values.ptr),
        };
        qtc.QXYSeries_SetPointConfiguration(@ptrCast(self), @intCast(index), configuration_map);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointConfiguration)
    ///
    /// ``` self: QtC.QXYSeries, index: i32, key: qxyseries_enums.PointConfiguration, value: QtC.QVariant ```
    pub fn SetPointConfiguration2(self: ?*anyopaque, index: i32, key: i64, value: ?*anyopaque) void {
        qtc.QXYSeries_SetPointConfiguration2(@ptrCast(self), @intCast(index), @intCast(key), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointsConfiguration)
    ///
    /// ``` self: QtC.QXYSeries, pointsConfiguration: map_i32_mapi32qtcqvariant, allocator: std.mem.Allocator ```
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
        const pointsConfiguration_map = qtc.struct_libqt_map{
            .len = pointsConfiguration.count(),
            .keys = @ptrCast(pointsConfiguration_keys.ptr),
            .values = @ptrCast(pointsConfiguration_values.ptr),
        };
        qtc.QXYSeries_SetPointsConfiguration(@ptrCast(self), pointsConfiguration_map);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointConfiguration)
    ///
    /// ``` self: QtC.QXYSeries, index: i32, allocator: std.mem.Allocator ```
    pub fn PointConfiguration(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.struct_libqt_map = qtc.QXYSeries_PointConfiguration(@ptrCast(self), @intCast(index));
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsConfiguration)
    ///
    /// ``` self: QtC.QXYSeries, allocator: std.mem.Allocator ```
    pub fn PointsConfiguration(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_mapi32qtcqvariant {
        const _map: qtc.struct_libqt_map = qtc.QXYSeries_PointsConfiguration(@ptrCast(self));
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#sizeBy)
    ///
    /// ``` self: QtC.QXYSeries, sourceData: []f64, minSize: f64, maxSize: f64 ```
    pub fn SizeBy(self: ?*anyopaque, sourceData: []f64, minSize: f64, maxSize: f64) void {
        const sourceData_list = qtc.struct_libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        qtc.QXYSeries_SizeBy(@ptrCast(self), sourceData_list, @floatCast(minSize), @floatCast(maxSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorBy)
    ///
    /// ``` self: QtC.QXYSeries, sourceData: []f64 ```
    pub fn ColorBy(self: ?*anyopaque, sourceData: []f64) void {
        const sourceData_list = qtc.struct_libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        qtc.QXYSeries_ColorBy(@ptrCast(self), sourceData_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clicked)
    ///
    /// ``` self: QtC.QXYSeries, point: QtC.QPointF ```
    pub fn Clicked(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Clicked(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clicked)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, point: QtC.QPointF) callconv(.c) void ```
    pub fn OnClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Clicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#hovered)
    ///
    /// ``` self: QtC.QXYSeries, point: QtC.QPointF, state: bool ```
    pub fn Hovered(self: ?*anyopaque, point: ?*anyopaque, state: bool) void {
        qtc.QXYSeries_Hovered(@ptrCast(self), @ptrCast(point), state);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#hovered)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, point: QtC.QPointF, state: bool) callconv(.c) void ```
    pub fn OnHovered(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Hovered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pressed)
    ///
    /// ``` self: QtC.QXYSeries, point: QtC.QPointF ```
    pub fn Pressed(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Pressed(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pressed)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, point: QtC.QPointF) callconv(.c) void ```
    pub fn OnPressed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Pressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#released)
    ///
    /// ``` self: QtC.QXYSeries, point: QtC.QPointF ```
    pub fn Released(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Released(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#released)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, point: QtC.QPointF) callconv(.c) void ```
    pub fn OnReleased(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Released(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#doubleClicked)
    ///
    /// ``` self: QtC.QXYSeries, point: QtC.QPointF ```
    pub fn DoubleClicked(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_DoubleClicked(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#doubleClicked)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, point: QtC.QPointF) callconv(.c) void ```
    pub fn OnDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_DoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointReplaced)
    ///
    /// ``` self: QtC.QXYSeries, index: i32 ```
    pub fn PointReplaced(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_PointReplaced(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointReplaced)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, index: i32) callconv(.c) void ```
    pub fn OnPointReplaced(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointRemoved)
    ///
    /// ``` self: QtC.QXYSeries, index: i32 ```
    pub fn PointRemoved(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_PointRemoved(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointRemoved)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, index: i32) callconv(.c) void ```
    pub fn OnPointRemoved(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointRemoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointAdded)
    ///
    /// ``` self: QtC.QXYSeries, index: i32 ```
    pub fn PointAdded(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_PointAdded(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointAdded)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, index: i32) callconv(.c) void ```
    pub fn OnPointAdded(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointAdded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorChanged)
    ///
    /// ``` self: QtC.QXYSeries, color: QtC.QColor ```
    pub fn ColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QXYSeries_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorChanged)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, color: QtC.QColor) callconv(.c) void ```
    pub fn OnColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_ColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedColorChanged)
    ///
    /// ``` self: QtC.QXYSeries, color: QtC.QColor ```
    pub fn SelectedColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SelectedColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedColorChanged)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, color: QtC.QColor) callconv(.c) void ```
    pub fn OnSelectedColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsReplaced)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn PointsReplaced(self: ?*anyopaque) void {
        qtc.QXYSeries_PointsReplaced(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsReplaced)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries) callconv(.c) void ```
    pub fn OnPointsReplaced(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFormatChanged)
    ///
    /// ``` self: QtC.QXYSeries, format: []const u8 ```
    pub fn PointLabelsFormatChanged(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QXYSeries_PointLabelsFormatChanged(@ptrCast(self), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFormatChanged)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, format: []const u8) callconv(.c) void ```
    pub fn OnPointLabelsFormatChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsFormatChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsVisibilityChanged)
    ///
    /// ``` self: QtC.QXYSeries, visible: bool ```
    pub fn PointLabelsVisibilityChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_PointLabelsVisibilityChanged(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsVisibilityChanged)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, visible: bool) callconv(.c) void ```
    pub fn OnPointLabelsVisibilityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsVisibilityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFontChanged)
    ///
    /// ``` self: QtC.QXYSeries, font: QtC.QFont ```
    pub fn PointLabelsFontChanged(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QXYSeries_PointLabelsFontChanged(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFontChanged)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, font: QtC.QFont) callconv(.c) void ```
    pub fn OnPointLabelsFontChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsFontChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsColorChanged)
    ///
    /// ``` self: QtC.QXYSeries, color: QtC.QColor ```
    pub fn PointLabelsColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_PointLabelsColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsColorChanged)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, color: QtC.QColor) callconv(.c) void ```
    pub fn OnPointLabelsColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsClippingChanged)
    ///
    /// ``` self: QtC.QXYSeries, clipping: bool ```
    pub fn PointLabelsClippingChanged(self: ?*anyopaque, clipping: bool) void {
        qtc.QXYSeries_PointLabelsClippingChanged(@ptrCast(self), clipping);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsClippingChanged)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, clipping: bool) callconv(.c) void ```
    pub fn OnPointLabelsClippingChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsClippingChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsRemoved)
    ///
    /// ``` self: QtC.QXYSeries, index: i32, count: i32 ```
    pub fn PointsRemoved(self: ?*anyopaque, index: i32, count: i32) void {
        qtc.QXYSeries_PointsRemoved(@ptrCast(self), @intCast(index), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsRemoved)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, index: i32, count: i32) callconv(.c) void ```
    pub fn OnPointsRemoved(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsRemoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#penChanged)
    ///
    /// ``` self: QtC.QXYSeries, pen: QtC.QPen ```
    pub fn PenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QXYSeries_PenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#penChanged)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, pen: QtC.QPen) callconv(.c) void ```
    pub fn OnPenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedPointsChanged)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn SelectedPointsChanged(self: ?*anyopaque) void {
        qtc.QXYSeries_SelectedPointsChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedPointsChanged)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries) callconv(.c) void ```
    pub fn OnSelectedPointsChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedPointsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#lightMarkerChanged)
    ///
    /// ``` self: QtC.QXYSeries, lightMarker: QtC.QImage ```
    pub fn LightMarkerChanged(self: ?*anyopaque, lightMarker: ?*anyopaque) void {
        qtc.QXYSeries_LightMarkerChanged(@ptrCast(self), @ptrCast(lightMarker));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#lightMarkerChanged)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, lightMarker: QtC.QImage) callconv(.c) void ```
    pub fn OnLightMarkerChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_LightMarkerChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedLightMarkerChanged)
    ///
    /// ``` self: QtC.QXYSeries, selectedLightMarker: QtC.QImage ```
    pub fn SelectedLightMarkerChanged(self: ?*anyopaque, selectedLightMarker: ?*anyopaque) void {
        qtc.QXYSeries_SelectedLightMarkerChanged(@ptrCast(self), @ptrCast(selectedLightMarker));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedLightMarkerChanged)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, selectedLightMarker: QtC.QImage) callconv(.c) void ```
    pub fn OnSelectedLightMarkerChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedLightMarkerChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineVisibilityChanged)
    ///
    /// ``` self: QtC.QXYSeries, visible: bool ```
    pub fn BestFitLineVisibilityChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_BestFitLineVisibilityChanged(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineVisibilityChanged)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, visible: bool) callconv(.c) void ```
    pub fn OnBestFitLineVisibilityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLineVisibilityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLinePenChanged)
    ///
    /// ``` self: QtC.QXYSeries, pen: QtC.QPen ```
    pub fn BestFitLinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QXYSeries_BestFitLinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLinePenChanged)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, pen: QtC.QPen) callconv(.c) void ```
    pub fn OnBestFitLinePenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLinePenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineColorChanged)
    ///
    /// ``` self: QtC.QXYSeries, color: QtC.QColor ```
    pub fn BestFitLineColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_BestFitLineColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineColorChanged)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, color: QtC.QColor) callconv(.c) void ```
    pub fn OnBestFitLineColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLineColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsConfigurationChanged)
    ///
    /// ``` self: QtC.QXYSeries, configuration: map_i32_mapi32qtcqvariant, allocator: std.mem.Allocator ```
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
        const configuration_map = qtc.struct_libqt_map{
            .len = configuration.count(),
            .keys = @ptrCast(configuration_keys.ptr),
            .values = @ptrCast(configuration_values.ptr),
        };
        qtc.QXYSeries_PointsConfigurationChanged(@ptrCast(self), configuration_map);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsConfigurationChanged)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, configuration: map_i32_mapi32qtcqvariant) callconv(.c) void ```
    pub fn OnPointsConfigurationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, map_i32_mapi32qtcqvariant) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsConfigurationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#markerSizeChanged)
    ///
    /// ``` self: QtC.QXYSeries, size: f64 ```
    pub fn MarkerSizeChanged(self: ?*anyopaque, size: f64) void {
        qtc.QXYSeries_MarkerSizeChanged(@ptrCast(self), @floatCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#markerSizeChanged)
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QXYSeries, size: f64) callconv(.c) void ```
    pub fn OnMarkerSizeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QXYSeries_Connect_MarkerSizeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QXYSeries_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxyseries.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QXYSeries_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxyseries.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointsVisible)
    ///
    /// ``` self: QtC.QXYSeries, visible: bool ```
    pub fn SetPointsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_SetPointsVisible1(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsVisible)
    ///
    /// ``` self: QtC.QXYSeries, visible: bool ```
    pub fn SetPointLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_SetPointLabelsVisible1(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsClipping)
    ///
    /// ``` self: QtC.QXYSeries, enabled: bool ```
    pub fn SetPointLabelsClipping1(self: ?*anyopaque, enabled: bool) void {
        qtc.QXYSeries_SetPointLabelsClipping1(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLineVisible)
    ///
    /// ``` self: QtC.QXYSeries, visible: bool ```
    pub fn SetBestFitLineVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_SetBestFitLineVisible1(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorBy)
    ///
    /// ``` self: QtC.QXYSeries, sourceData: []f64, gradient: QtC.QLinearGradient ```
    pub fn ColorBy2(self: ?*anyopaque, sourceData: []f64, gradient: ?*anyopaque) void {
        const sourceData_list = qtc.struct_libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        qtc.QXYSeries_ColorBy2(@ptrCast(self), sourceData_list, @ptrCast(gradient));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#type)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QAbstractSeries_Type(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ``` self: QtC.QXYSeries, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QAbstractSeries_SetName(@ptrCast(self), name_str);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
    ///
    /// ``` self: QtC.QXYSeries, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSeries_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxyseries.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn SetVisible(self: ?*anyopaque) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ``` self: QtC.QXYSeries, opacity: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn SetUseOpenGL(self: ?*anyopaque) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn UseOpenGL(self: ?*anyopaque) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn Chart(self: ?*anyopaque) QtC.QChart {
        return qtc.QAbstractSeries_Chart(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ``` self: QtC.QXYSeries, axis: QtC.QAbstractAxis ```
    pub fn AttachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ``` self: QtC.QXYSeries, axis: QtC.QAbstractAxis ```
    pub fn DetachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ``` self: QtC.QXYSeries, allocator: std.mem.Allocator ```
    pub fn AttachedAxes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractAxis {
        const _arr: qtc.struct_libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractAxis, _arr.len) catch @panic("qxyseries.AttachedAxes: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QAbstractSeries_Show(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn NameChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ``` self: QtC.QAbstractSeries, slot: fn (self: QtC.QAbstractSeries) callconv(.c) void ```
    pub fn OnNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn VisibleChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ``` self: QtC.QAbstractSeries, slot: fn (self: QtC.QAbstractSeries) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn OpacityChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ``` self: QtC.QAbstractSeries, slot: fn (self: QtC.QAbstractSeries) callconv(.c) void ```
    pub fn OnOpacityChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn UseOpenGLChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ``` self: QtC.QAbstractSeries, slot: fn (self: QtC.QAbstractSeries) callconv(.c) void ```
    pub fn OnUseOpenGLChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ``` self: QtC.QXYSeries, visible: bool ```
    pub fn SetVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ``` self: QtC.QXYSeries, enable: bool ```
    pub fn SetUseOpenGL1(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self), enable);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.QXYSeries, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.QXYSeries, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QXYSeries, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxyseries.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QXYSeries, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QXYSeries, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QXYSeries, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QXYSeries, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QXYSeries, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QXYSeries, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QXYSeries, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qxyseries.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QXYSeries, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QXYSeries, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QXYSeries, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QXYSeries, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QXYSeries, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QXYSeries, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QXYSeries, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QXYSeries, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QXYSeries, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QXYSeries, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QXYSeries, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QXYSeries, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QXYSeries, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#dtor.QXYSeries)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QXYSeries ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXYSeries_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qxyseries-qtcharts.html#types
pub const enums = struct {
    pub const PointConfiguration = enum {
        pub const Color: i32 = 0;
        pub const Size: i32 = 1;
        pub const Visibility: i32 = 2;
        pub const LabelVisibility: i32 = 3;
        pub const LabelFormat: i32 = 4;
    };
};
