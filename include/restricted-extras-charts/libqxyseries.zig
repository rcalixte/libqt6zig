const C = @import("qt6c");
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qxyseries_enums = enums;
const std = @import("std");
pub const map_i32_cqvariant = std.AutoHashMapUnmanaged(i32, ?*C.QVariant);
pub const map_i32_mapi32cqvariant = std.AutoHashMapUnmanaged(i32, map_i32_cqvariant);
pub const struct_f64_f64 = struct { first: f64, second: f64 };

/// https://doc.qt.io/qt-6/qxyseries.html
pub const qxyseries = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QXYSeries_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QXYSeries, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QXYSeries_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QXYSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QXYSeries_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QXYSeries_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
    ///
    /// ``` self: ?*C.QXYSeries, x: f64, y: f64 ```
    pub fn Append(self: ?*anyopaque, x: f64, y: f64) void {
        C.QXYSeries_Append(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
    ///
    /// ``` self: ?*C.QXYSeries, point: ?*C.QPointF ```
    pub fn AppendWithPoint(self: ?*anyopaque, point: ?*anyopaque) void {
        C.QXYSeries_AppendWithPoint(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
    ///
    /// ``` self: ?*C.QXYSeries, points: []C.QPointF ```
    pub fn AppendWithPoints(self: ?*anyopaque, points: []C.QPointF) void {
        const points_list = C.struct_libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        C.QXYSeries_AppendWithPoints(@ptrCast(self), points_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ``` self: ?*C.QXYSeries, oldX: f64, oldY: f64, newX: f64, newY: f64 ```
    pub fn Replace(self: ?*anyopaque, oldX: f64, oldY: f64, newX: f64, newY: f64) void {
        C.QXYSeries_Replace(@ptrCast(self), @floatCast(oldX), @floatCast(oldY), @floatCast(newX), @floatCast(newY));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ``` self: ?*C.QXYSeries, oldPoint: ?*C.QPointF, newPoint: ?*C.QPointF ```
    pub fn Replace2(self: ?*anyopaque, oldPoint: ?*anyopaque, newPoint: ?*anyopaque) void {
        C.QXYSeries_Replace2(@ptrCast(self), @ptrCast(oldPoint), @ptrCast(newPoint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32, newX: f64, newY: f64 ```
    pub fn Replace3(self: ?*anyopaque, index: i32, newX: f64, newY: f64) void {
        C.QXYSeries_Replace3(@ptrCast(self), @intCast(index), @floatCast(newX), @floatCast(newY));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32, newPoint: ?*C.QPointF ```
    pub fn Replace4(self: ?*anyopaque, index: i32, newPoint: ?*anyopaque) void {
        C.QXYSeries_Replace4(@ptrCast(self), @intCast(index), @ptrCast(newPoint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
    ///
    /// ``` self: ?*C.QXYSeries, x: f64, y: f64 ```
    pub fn Remove(self: ?*anyopaque, x: f64, y: f64) void {
        C.QXYSeries_Remove(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
    ///
    /// ``` self: ?*C.QXYSeries, point: ?*C.QPointF ```
    pub fn RemoveWithPoint(self: ?*anyopaque, point: ?*anyopaque) void {
        C.QXYSeries_RemoveWithPoint(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32 ```
    pub fn RemoveWithIndex(self: ?*anyopaque, index: i32) void {
        C.QXYSeries_RemoveWithIndex(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#removePoints)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32, count: i32 ```
    pub fn RemovePoints(self: ?*anyopaque, index: i32, count: i32) void {
        C.QXYSeries_RemovePoints(@ptrCast(self), @intCast(index), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#insert)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32, point: ?*C.QPointF ```
    pub fn Insert(self: ?*anyopaque, index: i32, point: ?*anyopaque) void {
        C.QXYSeries_Insert(@ptrCast(self), @intCast(index), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clear)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn Clear(self: ?*anyopaque) void {
        C.QXYSeries_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#count)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn Count(self: ?*anyopaque) i32 {
        return C.QXYSeries_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#points)
    ///
    /// ``` self: ?*C.QXYSeries, allocator: std.mem.Allocator ```
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QPointF {
        const _arr: C.struct_libqt_list = C.QXYSeries_Points(@ptrCast(self));
        defer {
            const _obj: [*]?*C.QPointF = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |_i| {
                if (_obj[_i]) |obj| {
                    C.libqt_free(obj);
                }
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(?*C.QPointF, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsVector)
    ///
    /// ``` self: ?*C.QXYSeries, allocator: std.mem.Allocator ```
    pub fn PointsVector(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QPointF {
        const _arr: C.struct_libqt_list = C.QXYSeries_PointsVector(@ptrCast(self));
        defer {
            const _obj: [*]?*C.QPointF = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |_i| {
                if (_obj[_i]) |obj| {
                    C.libqt_free(obj);
                }
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(?*C.QPointF, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#at)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32 ```
    pub fn At(self: ?*anyopaque, index: i32) ?*C.QPointF {
        return C.QXYSeries_At(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#operator<<)
    ///
    /// ``` self: ?*C.QXYSeries, point: ?*C.QPointF ```
    pub fn OperatorShiftLeft(self: ?*anyopaque, point: ?*anyopaque) ?*C.QXYSeries {
        return C.QXYSeries_OperatorShiftLeft(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#operator<<)
    ///
    /// ``` self: ?*C.QXYSeries, points: []C.QPointF ```
    pub fn OperatorShiftLeftWithPoints(self: ?*anyopaque, points: []C.QPointF) ?*C.QXYSeries {
        const points_list = C.struct_libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        return C.QXYSeries_OperatorShiftLeftWithPoints(@ptrCast(self), points_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPen)
    ///
    /// ``` self: ?*C.QXYSeries, pen: ?*C.QPen ```
    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QXYSeries_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pen)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn Pen(self: ?*anyopaque) ?*C.QPen {
        return C.QXYSeries_Pen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
    ///
    /// ``` self: ?*C.QXYSeries, brush: ?*C.QBrush ```
    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QXYSeries_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#brush)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn Brush(self: ?*anyopaque) ?*C.QBrush {
        return C.QXYSeries_Brush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setColor)
    ///
    /// ``` self: ?*C.QXYSeries, color: ?*C.QColor ```
    pub fn SetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        C.QXYSeries_SetColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#color)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn Color(self: ?*anyopaque) ?*C.QColor {
        return C.QXYSeries_Color(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setSelectedColor)
    ///
    /// ``` self: ?*C.QXYSeries, color: ?*C.QColor ```
    pub fn SetSelectedColor(self: ?*anyopaque, color: ?*anyopaque) void {
        C.QXYSeries_SetSelectedColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColor)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn SelectedColor(self: ?*anyopaque) ?*C.QColor {
        return C.QXYSeries_SelectedColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn SetPointsVisible(self: ?*anyopaque) void {
        C.QXYSeries_SetPointsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsVisible)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn PointsVisible(self: ?*anyopaque) bool {
        return C.QXYSeries_PointsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFormat)
    ///
    /// ``` self: ?*C.QXYSeries, format: []const u8 ```
    pub fn SetPointLabelsFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = C.struct_libqt_string{
            .len = format.len,
            .data = @constCast(format.ptr),
        };
        C.QXYSeries_SetPointLabelsFormat(@ptrCast(self), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormat)
    ///
    /// ``` self: ?*C.QXYSeries, allocator: std.mem.Allocator ```
    pub fn PointLabelsFormat(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QXYSeries_PointLabelsFormat(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn SetPointLabelsVisible(self: ?*anyopaque) void {
        C.QXYSeries_SetPointLabelsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisible)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn PointLabelsVisible(self: ?*anyopaque) bool {
        return C.QXYSeries_PointLabelsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFont)
    ///
    /// ``` self: ?*C.QXYSeries, font: ?*C.QFont ```
    pub fn SetPointLabelsFont(self: ?*anyopaque, font: ?*anyopaque) void {
        C.QXYSeries_SetPointLabelsFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFont)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn PointLabelsFont(self: ?*anyopaque) ?*C.QFont {
        return C.QXYSeries_PointLabelsFont(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsColor)
    ///
    /// ``` self: ?*C.QXYSeries, color: ?*C.QColor ```
    pub fn SetPointLabelsColor(self: ?*anyopaque, color: ?*anyopaque) void {
        C.QXYSeries_SetPointLabelsColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColor)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn PointLabelsColor(self: ?*anyopaque) ?*C.QColor {
        return C.QXYSeries_PointLabelsColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn SetPointLabelsClipping(self: ?*anyopaque) void {
        C.QXYSeries_SetPointLabelsClipping(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClipping)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn PointLabelsClipping(self: ?*anyopaque) bool {
        return C.QXYSeries_PointLabelsClipping(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ``` self: ?*C.QXYSeries, points: []C.QPointF ```
    pub fn ReplaceWithPoints(self: ?*anyopaque, points: []C.QPointF) void {
        const points_list = C.struct_libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        C.QXYSeries_ReplaceWithPoints(@ptrCast(self), points_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#isPointSelected)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32 ```
    pub fn IsPointSelected(self: ?*anyopaque, index: i32) bool {
        return C.QXYSeries_IsPointSelected(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectPoint)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32 ```
    pub fn SelectPoint(self: ?*anyopaque, index: i32) void {
        C.QXYSeries_SelectPoint(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectPoint)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32 ```
    pub fn DeselectPoint(self: ?*anyopaque, index: i32) void {
        C.QXYSeries_DeselectPoint(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointSelected)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32, selected: bool ```
    pub fn SetPointSelected(self: ?*anyopaque, index: i32, selected: bool) void {
        C.QXYSeries_SetPointSelected(@ptrCast(self), @intCast(index), selected);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectAllPoints)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn SelectAllPoints(self: ?*anyopaque) void {
        C.QXYSeries_SelectAllPoints(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectAllPoints)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn DeselectAllPoints(self: ?*anyopaque) void {
        C.QXYSeries_DeselectAllPoints(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectPoints)
    ///
    /// ``` self: ?*C.QXYSeries, indexes: []i32 ```
    pub fn SelectPoints(self: ?*anyopaque, indexes: []i32) void {
        const indexes_list = C.struct_libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        C.QXYSeries_SelectPoints(@ptrCast(self), indexes_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectPoints)
    ///
    /// ``` self: ?*C.QXYSeries, indexes: []i32 ```
    pub fn DeselectPoints(self: ?*anyopaque, indexes: []i32) void {
        const indexes_list = C.struct_libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        C.QXYSeries_DeselectPoints(@ptrCast(self), indexes_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#toggleSelection)
    ///
    /// ``` self: ?*C.QXYSeries, indexes: []i32 ```
    pub fn ToggleSelection(self: ?*anyopaque, indexes: []i32) void {
        const indexes_list = C.struct_libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        C.QXYSeries_ToggleSelection(@ptrCast(self), indexes_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPoints)
    ///
    /// ``` self: ?*C.QXYSeries, allocator: std.mem.Allocator ```
    pub fn SelectedPoints(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: C.struct_libqt_list = C.QXYSeries_SelectedPoints(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setLightMarker)
    ///
    /// ``` self: ?*C.QXYSeries, lightMarker: ?*C.QImage ```
    pub fn SetLightMarker(self: ?*anyopaque, lightMarker: ?*anyopaque) void {
        C.QXYSeries_SetLightMarker(@ptrCast(self), @ptrCast(lightMarker));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarker)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn LightMarker(self: ?*anyopaque) ?*C.QImage {
        return C.QXYSeries_LightMarker(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setSelectedLightMarker)
    ///
    /// ``` self: ?*C.QXYSeries, selectedLightMarker: ?*C.QImage ```
    pub fn SetSelectedLightMarker(self: ?*anyopaque, selectedLightMarker: ?*anyopaque) void {
        C.QXYSeries_SetSelectedLightMarker(@ptrCast(self), @ptrCast(selectedLightMarker));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarker)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn SelectedLightMarker(self: ?*anyopaque) ?*C.QImage {
        return C.QXYSeries_SelectedLightMarker(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setMarkerSize)
    ///
    /// ``` self: ?*C.QXYSeries, size: f64 ```
    pub fn SetMarkerSize(self: ?*anyopaque, size: f64) void {
        C.QXYSeries_SetMarkerSize(@ptrCast(self), @floatCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#markerSize)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn MarkerSize(self: ?*anyopaque) f64 {
        return C.QXYSeries_MarkerSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn SetBestFitLineVisible(self: ?*anyopaque) void {
        C.QXYSeries_SetBestFitLineVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisible)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn BestFitLineVisible(self: ?*anyopaque) bool {
        return C.QXYSeries_BestFitLineVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineEquation)
    ///
    /// ``` self: ?*C.QXYSeries, ok: ?*bool ```
    pub fn BestFitLineEquation(self: ?*anyopaque, ok: ?*anyopaque) struct_f64_f64 {
        const _pair: C.struct_libqt_pair = C.QXYSeries_BestFitLineEquation(@ptrCast(self), @ptrCast(ok));
        return struct_f64_f64{ .first = @ptrCast(_pair.first), .second = @ptrCast(_pair.second) };
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLinePen)
    ///
    /// ``` self: ?*C.QXYSeries, pen: ?*C.QPen ```
    pub fn SetBestFitLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QXYSeries_SetBestFitLinePen(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePen)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn BestFitLinePen(self: ?*anyopaque) ?*C.QPen {
        return C.QXYSeries_BestFitLinePen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineColor)
    ///
    /// ``` self: ?*C.QXYSeries, color: ?*C.QColor ```
    pub fn SetBestFitLineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        C.QXYSeries_SetBestFitLineColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColor)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn BestFitLineColor(self: ?*anyopaque) ?*C.QColor {
        return C.QXYSeries_BestFitLineColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32 ```
    pub fn ClearPointConfiguration(self: ?*anyopaque, index: i32) void {
        C.QXYSeries_ClearPointConfiguration(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32, key: qxyseries_enums.PointConfiguration ```
    pub fn ClearPointConfiguration2(self: ?*anyopaque, index: i32, key: i64) void {
        C.QXYSeries_ClearPointConfiguration2(@ptrCast(self), @intCast(index), @intCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn ClearPointsConfiguration(self: ?*anyopaque) void {
        C.QXYSeries_ClearPointsConfiguration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
    ///
    /// ``` self: ?*C.QXYSeries, key: qxyseries_enums.PointConfiguration ```
    pub fn ClearPointsConfigurationWithKey(self: ?*anyopaque, key: i64) void {
        C.QXYSeries_ClearPointsConfigurationWithKey(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32, configuration: map_i32_cqvariant, allocator: std.mem.Allocator ```
    pub fn SetPointConfiguration(self: ?*anyopaque, index: i32, configuration: map_i32_cqvariant, allocator: std.mem.Allocator) void {
        const configuration_keys = allocator.alloc(i32, configuration.count()) catch @panic("Memory allocation failed");
        defer allocator.free(configuration_keys);
        const configuration_values = allocator.alloc(?*C.QVariant, configuration.count()) catch @panic("Memory allocation failed");
        defer allocator.free(configuration_values);
        var _i: usize = 0;
        var configuration_it = configuration.iterator();
        while (configuration_it.next()) |entry| {
            const key = entry.key_ptr.*;
            configuration_keys[_i] = @intCast(key);
            configuration_values[_i] = entry.value_ptr.*;
            _i += 1;
        }
        const configuration_map = C.struct_libqt_map{
            .len = configuration.count(),
            .keys = @ptrCast(configuration_keys.ptr),
            .values = @ptrCast(configuration_values.ptr),
        };
        C.QXYSeries_SetPointConfiguration(@ptrCast(self), @intCast(index), configuration_map);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32, key: qxyseries_enums.PointConfiguration, value: ?*C.QVariant ```
    pub fn SetPointConfiguration2(self: ?*anyopaque, index: i32, key: i64, value: ?*anyopaque) void {
        C.QXYSeries_SetPointConfiguration2(@ptrCast(self), @intCast(index), @intCast(key), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsConfiguration)
    ///
    /// ``` self: ?*C.QXYSeries, pointsConfiguration: map_i32_mapi32cqvariant, allocator: std.mem.Allocator ```
    pub fn SetPointsConfiguration(self: ?*anyopaque, pointsConfiguration: map_i32_mapi32cqvariant, allocator: std.mem.Allocator) void {
        const pointsConfiguration_keys = allocator.alloc(i32, pointsConfiguration.count()) catch @panic("Memory allocation failed");
        defer allocator.free(pointsConfiguration_keys);
        const pointsConfiguration_values = allocator.alloc(map_i32_cqvariant, pointsConfiguration.count()) catch @panic("Memory allocation failed");
        defer allocator.free(pointsConfiguration_values);
        var _i: usize = 0;
        var pointsConfiguration_it = pointsConfiguration.iterator();
        while (pointsConfiguration_it.next()) |entry| {
            const key = entry.key_ptr.*;
            pointsConfiguration_keys[_i] = @intCast(key);
            pointsConfiguration_values[_i] = entry.value_ptr.*;
            _i += 1;
        }
        const pointsConfiguration_map = C.struct_libqt_map{
            .len = pointsConfiguration.count(),
            .keys = @ptrCast(pointsConfiguration_keys.ptr),
            .values = @ptrCast(pointsConfiguration_values.ptr),
        };
        C.QXYSeries_SetPointsConfiguration(@ptrCast(self), pointsConfiguration_map);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointConfiguration)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32, allocator: std.mem.Allocator ```
    pub fn PointConfiguration(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) map_i32_cqvariant {
        const _map: C.struct_libqt_map = C.QXYSeries_PointConfiguration(@ptrCast(self), @intCast(index));
        var _ret: map_i32_cqvariant = .empty;
        defer {
            C.libqt_free(_map.keys);
            C.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]?*C.QVariant = @ptrCast(@alignCast(_map.values));
        var _i: usize = 0;
        while (_i < _map.len) : (_i += 1) {
            const _key = _keys[_i];
            const _value = _values[_i];
            _ret.put(allocator, _key, _value) catch @panic("Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfiguration)
    ///
    /// ``` self: ?*C.QXYSeries, allocator: std.mem.Allocator ```
    pub fn PointsConfiguration(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_mapi32cqvariant {
        const _map: C.struct_libqt_map = C.QXYSeries_PointsConfiguration(@ptrCast(self));
        var _ret: map_i32_mapi32cqvariant = .empty;
        defer {
            C.libqt_free(_map.keys);
            C.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]map_i32_cqvariant = @ptrCast(@alignCast(_map.values));
        var _i: usize = 0;
        while (_i < _map.len) : (_i += 1) {
            const _key = _keys[_i];
            const _value = _values[_i];
            _ret.put(allocator, _key, _value) catch @panic("Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#sizeBy)
    ///
    /// ``` self: ?*C.QXYSeries, sourceData: []f64, minSize: f64, maxSize: f64 ```
    pub fn SizeBy(self: ?*anyopaque, sourceData: []f64, minSize: f64, maxSize: f64) void {
        const sourceData_list = C.struct_libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        C.QXYSeries_SizeBy(@ptrCast(self), sourceData_list, @floatCast(minSize), @floatCast(maxSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
    ///
    /// ``` self: ?*C.QXYSeries, sourceData: []f64 ```
    pub fn ColorBy(self: ?*anyopaque, sourceData: []f64) void {
        const sourceData_list = C.struct_libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        C.QXYSeries_ColorBy(@ptrCast(self), sourceData_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clicked)
    ///
    /// ``` self: ?*C.QXYSeries, point: ?*C.QPointF ```
    pub fn Clicked(self: ?*anyopaque, point: ?*anyopaque) void {
        C.QXYSeries_Clicked(@ptrCast(self), @ptrCast(point));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, ?*C.QPointF) callconv(.c) void ```
    pub fn OnClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QXYSeries_Connect_Clicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#hovered)
    ///
    /// ``` self: ?*C.QXYSeries, point: ?*C.QPointF, state: bool ```
    pub fn Hovered(self: ?*anyopaque, point: ?*anyopaque, state: bool) void {
        C.QXYSeries_Hovered(@ptrCast(self), @ptrCast(point), state);
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, ?*C.QPointF, bool) callconv(.c) void ```
    pub fn OnHovered(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        C.QXYSeries_Connect_Hovered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pressed)
    ///
    /// ``` self: ?*C.QXYSeries, point: ?*C.QPointF ```
    pub fn Pressed(self: ?*anyopaque, point: ?*anyopaque) void {
        C.QXYSeries_Pressed(@ptrCast(self), @ptrCast(point));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, ?*C.QPointF) callconv(.c) void ```
    pub fn OnPressed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QXYSeries_Connect_Pressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#released)
    ///
    /// ``` self: ?*C.QXYSeries, point: ?*C.QPointF ```
    pub fn Released(self: ?*anyopaque, point: ?*anyopaque) void {
        C.QXYSeries_Released(@ptrCast(self), @ptrCast(point));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, ?*C.QPointF) callconv(.c) void ```
    pub fn OnReleased(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QXYSeries_Connect_Released(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
    ///
    /// ``` self: ?*C.QXYSeries, point: ?*C.QPointF ```
    pub fn DoubleClicked(self: ?*anyopaque, point: ?*anyopaque) void {
        C.QXYSeries_DoubleClicked(@ptrCast(self), @ptrCast(point));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, ?*C.QPointF) callconv(.c) void ```
    pub fn OnDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QXYSeries_Connect_DoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32 ```
    pub fn PointReplaced(self: ?*anyopaque, index: i32) void {
        C.QXYSeries_PointReplaced(@ptrCast(self), @intCast(index));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, i32) callconv(.c) void ```
    pub fn OnPointReplaced(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QXYSeries_Connect_PointReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32 ```
    pub fn PointRemoved(self: ?*anyopaque, index: i32) void {
        C.QXYSeries_PointRemoved(@ptrCast(self), @intCast(index));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, i32) callconv(.c) void ```
    pub fn OnPointRemoved(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QXYSeries_Connect_PointRemoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32 ```
    pub fn PointAdded(self: ?*anyopaque, index: i32) void {
        C.QXYSeries_PointAdded(@ptrCast(self), @intCast(index));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, i32) callconv(.c) void ```
    pub fn OnPointAdded(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QXYSeries_Connect_PointAdded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorChanged)
    ///
    /// ``` self: ?*C.QXYSeries, color: C.QColor ```
    pub fn ColorChanged(self: ?*anyopaque, color: C.QColor) void {
        C.QXYSeries_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, C.QColor) callconv(.c) void ```
    pub fn OnColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, C.QColor) callconv(.c) void) void {
        C.QXYSeries_Connect_ColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
    ///
    /// ``` self: ?*C.QXYSeries, color: ?*C.QColor ```
    pub fn SelectedColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        C.QXYSeries_SelectedColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, ?*C.QColor) callconv(.c) void ```
    pub fn OnSelectedColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QXYSeries_Connect_SelectedColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn PointsReplaced(self: ?*anyopaque) void {
        C.QXYSeries_PointsReplaced(@ptrCast(self));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries) callconv(.c) void ```
    pub fn OnPointsReplaced(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QXYSeries_Connect_PointsReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
    ///
    /// ``` self: ?*C.QXYSeries, format: []const u8 ```
    pub fn PointLabelsFormatChanged(self: ?*anyopaque, format: []const u8) void {
        const format_str = C.struct_libqt_string{
            .len = format.len,
            .data = @constCast(format.ptr),
        };
        C.QXYSeries_PointLabelsFormatChanged(@ptrCast(self), format_str);
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, []const u8) callconv(.c) void ```
    pub fn OnPointLabelsFormatChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QXYSeries_Connect_PointLabelsFormatChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
    ///
    /// ``` self: ?*C.QXYSeries, visible: bool ```
    pub fn PointLabelsVisibilityChanged(self: ?*anyopaque, visible: bool) void {
        C.QXYSeries_PointLabelsVisibilityChanged(@ptrCast(self), visible);
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, bool) callconv(.c) void ```
    pub fn OnPointLabelsVisibilityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QXYSeries_Connect_PointLabelsVisibilityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
    ///
    /// ``` self: ?*C.QXYSeries, font: ?*C.QFont ```
    pub fn PointLabelsFontChanged(self: ?*anyopaque, font: ?*anyopaque) void {
        C.QXYSeries_PointLabelsFontChanged(@ptrCast(self), @ptrCast(font));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, ?*C.QFont) callconv(.c) void ```
    pub fn OnPointLabelsFontChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QXYSeries_Connect_PointLabelsFontChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
    ///
    /// ``` self: ?*C.QXYSeries, color: ?*C.QColor ```
    pub fn PointLabelsColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        C.QXYSeries_PointLabelsColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, ?*C.QColor) callconv(.c) void ```
    pub fn OnPointLabelsColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QXYSeries_Connect_PointLabelsColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
    ///
    /// ``` self: ?*C.QXYSeries, clipping: bool ```
    pub fn PointLabelsClippingChanged(self: ?*anyopaque, clipping: bool) void {
        C.QXYSeries_PointLabelsClippingChanged(@ptrCast(self), clipping);
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, bool) callconv(.c) void ```
    pub fn OnPointLabelsClippingChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QXYSeries_Connect_PointLabelsClippingChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
    ///
    /// ``` self: ?*C.QXYSeries, index: i32, count: i32 ```
    pub fn PointsRemoved(self: ?*anyopaque, index: i32, count: i32) void {
        C.QXYSeries_PointsRemoved(@ptrCast(self), @intCast(index), @intCast(count));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, i32, i32) callconv(.c) void ```
    pub fn OnPointsRemoved(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QXYSeries_Connect_PointsRemoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
    ///
    /// ``` self: ?*C.QXYSeries, pen: ?*C.QPen ```
    pub fn PenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QXYSeries_PenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, ?*C.QPen) callconv(.c) void ```
    pub fn OnPenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QXYSeries_Connect_PenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn SelectedPointsChanged(self: ?*anyopaque) void {
        C.QXYSeries_SelectedPointsChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries) callconv(.c) void ```
    pub fn OnSelectedPointsChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QXYSeries_Connect_SelectedPointsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
    ///
    /// ``` self: ?*C.QXYSeries, lightMarker: ?*C.QImage ```
    pub fn LightMarkerChanged(self: ?*anyopaque, lightMarker: ?*anyopaque) void {
        C.QXYSeries_LightMarkerChanged(@ptrCast(self), @ptrCast(lightMarker));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, ?*C.QImage) callconv(.c) void ```
    pub fn OnLightMarkerChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QXYSeries_Connect_LightMarkerChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
    ///
    /// ``` self: ?*C.QXYSeries, selectedLightMarker: ?*C.QImage ```
    pub fn SelectedLightMarkerChanged(self: ?*anyopaque, selectedLightMarker: ?*anyopaque) void {
        C.QXYSeries_SelectedLightMarkerChanged(@ptrCast(self), @ptrCast(selectedLightMarker));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, ?*C.QImage) callconv(.c) void ```
    pub fn OnSelectedLightMarkerChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QXYSeries_Connect_SelectedLightMarkerChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
    ///
    /// ``` self: ?*C.QXYSeries, visible: bool ```
    pub fn BestFitLineVisibilityChanged(self: ?*anyopaque, visible: bool) void {
        C.QXYSeries_BestFitLineVisibilityChanged(@ptrCast(self), visible);
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, bool) callconv(.c) void ```
    pub fn OnBestFitLineVisibilityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QXYSeries_Connect_BestFitLineVisibilityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
    ///
    /// ``` self: ?*C.QXYSeries, pen: ?*C.QPen ```
    pub fn BestFitLinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QXYSeries_BestFitLinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, ?*C.QPen) callconv(.c) void ```
    pub fn OnBestFitLinePenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QXYSeries_Connect_BestFitLinePenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
    ///
    /// ``` self: ?*C.QXYSeries, color: ?*C.QColor ```
    pub fn BestFitLineColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        C.QXYSeries_BestFitLineColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, ?*C.QColor) callconv(.c) void ```
    pub fn OnBestFitLineColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QXYSeries_Connect_BestFitLineColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
    ///
    /// ``` self: ?*C.QXYSeries, configuration: map_i32_mapi32cqvariant, allocator: std.mem.Allocator ```
    pub fn PointsConfigurationChanged(self: ?*anyopaque, configuration: map_i32_mapi32cqvariant, allocator: std.mem.Allocator) void {
        const configuration_keys = allocator.alloc(i32, configuration.count()) catch @panic("Memory allocation failed");
        defer allocator.free(configuration_keys);
        const configuration_values = allocator.alloc(map_i32_cqvariant, configuration.count()) catch @panic("Memory allocation failed");
        defer allocator.free(configuration_values);
        var _i: usize = 0;
        var configuration_it = configuration.iterator();
        while (configuration_it.next()) |entry| {
            const key = entry.key_ptr.*;
            configuration_keys[_i] = @intCast(key);
            configuration_values[_i] = entry.value_ptr.*;
            _i += 1;
        }
        const configuration_map = C.struct_libqt_map{
            .len = configuration.count(),
            .keys = @ptrCast(configuration_keys.ptr),
            .values = @ptrCast(configuration_values.ptr),
        };
        C.QXYSeries_PointsConfigurationChanged(@ptrCast(self), configuration_map);
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, map_i32_mapi32cqvariant) callconv(.c) void ```
    pub fn OnPointsConfigurationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, map_i32_mapi32cqvariant) callconv(.c) void) void {
        C.QXYSeries_Connect_PointsConfigurationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#markerSizeChanged)
    ///
    /// ``` self: ?*C.QXYSeries, size: f64 ```
    pub fn MarkerSizeChanged(self: ?*anyopaque, size: f64) void {
        C.QXYSeries_MarkerSizeChanged(@ptrCast(self), @floatCast(size));
    }

    /// ``` self: ?*C.QXYSeries, slot: fn (?*C.QXYSeries, f64) callconv(.c) void ```
    pub fn OnMarkerSizeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        C.QXYSeries_Connect_MarkerSizeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QXYSeries_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QXYSeries_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
    ///
    /// ``` self: ?*C.QXYSeries, visible: bool ```
    pub fn SetPointsVisible1(self: ?*anyopaque, visible: bool) void {
        C.QXYSeries_SetPointsVisible1(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
    ///
    /// ``` self: ?*C.QXYSeries, visible: bool ```
    pub fn SetPointLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        C.QXYSeries_SetPointLabelsVisible1(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
    ///
    /// ``` self: ?*C.QXYSeries, enabled: bool ```
    pub fn SetPointLabelsClipping1(self: ?*anyopaque, enabled: bool) void {
        C.QXYSeries_SetPointLabelsClipping1(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
    ///
    /// ``` self: ?*C.QXYSeries, visible: bool ```
    pub fn SetBestFitLineVisible1(self: ?*anyopaque, visible: bool) void {
        C.QXYSeries_SetBestFitLineVisible1(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
    ///
    /// ``` self: ?*C.QXYSeries, sourceData: []f64, gradient: ?*C.QLinearGradient ```
    pub fn ColorBy2(self: ?*anyopaque, sourceData: []f64, gradient: ?*anyopaque) void {
        const sourceData_list = C.struct_libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        C.QXYSeries_ColorBy2(@ptrCast(self), sourceData_list, @ptrCast(gradient));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#type)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn Type(self: ?*anyopaque) i64 {
        return C.QAbstractSeries_Type(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ``` self: ?*C.QXYSeries, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QAbstractSeries_SetName(@ptrCast(self), name_str);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
    ///
    /// ``` self: ?*C.QXYSeries, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QAbstractSeries_Name(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn SetVisible(self: ?*anyopaque) void {
        C.QAbstractSeries_SetVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return C.QAbstractSeries_IsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return C.QAbstractSeries_Opacity(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ``` self: ?*C.QXYSeries, opacity: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        C.QAbstractSeries_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn SetUseOpenGL(self: ?*anyopaque) void {
        C.QAbstractSeries_SetUseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn UseOpenGL(self: ?*anyopaque) bool {
        return C.QAbstractSeries_UseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn Chart(self: ?*anyopaque) ?*C.QChart {
        return C.QAbstractSeries_Chart(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ``` self: ?*C.QXYSeries, axis: ?*C.QAbstractAxis ```
    pub fn AttachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return C.QAbstractSeries_AttachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ``` self: ?*C.QXYSeries, axis: ?*C.QAbstractAxis ```
    pub fn DetachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return C.QAbstractSeries_DetachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ``` self: ?*C.QXYSeries, allocator: std.mem.Allocator ```
    pub fn AttachedAxes(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QAbstractAxis {
        const _arr: C.struct_libqt_list = C.QAbstractSeries_AttachedAxes(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QAbstractAxis, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn Show(self: ?*anyopaque) void {
        C.QAbstractSeries_Show(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn Hide(self: ?*anyopaque) void {
        C.QAbstractSeries_Hide(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn NameChanged(self: ?*anyopaque) void {
        C.QAbstractSeries_NameChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ``` self: ?*C.QAbstractSeries, slot: fn (?*C.QAbstractSeries) callconv(.c) void ```
    pub fn OnNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSeries_Connect_NameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn VisibleChanged(self: ?*anyopaque) void {
        C.QAbstractSeries_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ``` self: ?*C.QAbstractSeries, slot: fn (?*C.QAbstractSeries) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn OpacityChanged(self: ?*anyopaque) void {
        C.QAbstractSeries_OpacityChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ``` self: ?*C.QAbstractSeries, slot: fn (?*C.QAbstractSeries) callconv(.c) void ```
    pub fn OnOpacityChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn UseOpenGLChanged(self: ?*anyopaque) void {
        C.QAbstractSeries_UseOpenGLChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ``` self: ?*C.QAbstractSeries, slot: fn (?*C.QAbstractSeries) callconv(.c) void ```
    pub fn OnUseOpenGLChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ``` self: ?*C.QXYSeries, visible: bool ```
    pub fn SetVisible1(self: ?*anyopaque, visible: bool) void {
        C.QAbstractSeries_SetVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ``` self: ?*C.QXYSeries, enable: bool ```
    pub fn SetUseOpenGL1(self: ?*anyopaque, enable: bool) void {
        C.QAbstractSeries_SetUseOpenGL1(@ptrCast(self), enable);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: ?*C.QXYSeries, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: ?*C.QXYSeries, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QXYSeries, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QXYSeries, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QXYSeries, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QXYSeries, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QXYSeries, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QXYSeries, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QXYSeries, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QXYSeries, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QXYSeries, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QXYSeries, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QXYSeries, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QXYSeries, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QXYSeries, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QXYSeries, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QXYSeries, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QXYSeries, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QXYSeries, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QXYSeries, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QXYSeries ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QXYSeries_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qxyseries.html#types
pub const enums = struct {
    pub const PointConfiguration = enum {
        pub const Color: i32 = 0;
        pub const Size: i32 = 1;
        pub const Visibility: i32 = 2;
        pub const LabelVisibility: i32 = 3;
    };
};
