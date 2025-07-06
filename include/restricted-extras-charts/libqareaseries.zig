const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qareaseries-qtcharts.html
pub const qareaseries = struct {
    /// New constructs a new QAreaSeries object.
    ///
    ///
    pub fn New() QtC.QAreaSeries {
        return qtc.QAreaSeries_new();
    }

    /// New2 constructs a new QAreaSeries object.
    ///
    /// ``` upperSeries: QtC.QLineSeries ```
    pub fn New2(upperSeries: ?*anyopaque) QtC.QAreaSeries {
        return qtc.QAreaSeries_new2(@ptrCast(upperSeries));
    }

    /// New3 constructs a new QAreaSeries object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New3(parent: ?*anyopaque) QtC.QAreaSeries {
        return qtc.QAreaSeries_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QAreaSeries object.
    ///
    /// ``` upperSeries: QtC.QLineSeries, lowerSeries: QtC.QLineSeries ```
    pub fn New4(upperSeries: ?*anyopaque, lowerSeries: ?*anyopaque) QtC.QAreaSeries {
        return qtc.QAreaSeries_new4(@ptrCast(upperSeries), @ptrCast(lowerSeries));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QAreaSeries_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QAreaSeries, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAreaSeries_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QAreaSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QAreaSeries_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAreaSeries_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QAreaSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QAreaSeries_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QAreaSeries_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qareaseries.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#type)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QAreaSeries_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn () callconv(.c) i64 ```
    pub fn OnType(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QAreaSeries_OnType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn QBaseType(self: ?*anyopaque) i64 {
        return qtc.QAreaSeries_QBaseType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setUpperSeries)
    ///
    /// ``` self: QtC.QAreaSeries, series: QtC.QLineSeries ```
    pub fn SetUpperSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QAreaSeries_SetUpperSeries(@ptrCast(self), @ptrCast(series));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#upperSeries)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn UpperSeries(self: ?*anyopaque) QtC.QLineSeries {
        return qtc.QAreaSeries_UpperSeries(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setLowerSeries)
    ///
    /// ``` self: QtC.QAreaSeries, series: QtC.QLineSeries ```
    pub fn SetLowerSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QAreaSeries_SetLowerSeries(@ptrCast(self), @ptrCast(series));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#lowerSeries)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn LowerSeries(self: ?*anyopaque) QtC.QLineSeries {
        return qtc.QAreaSeries_LowerSeries(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPen)
    ///
    /// ``` self: QtC.QAreaSeries, pen: QtC.QPen ```
    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAreaSeries_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pen)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn Pen(self: ?*anyopaque) QtC.QPen {
        return qtc.QAreaSeries_Pen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setBrush)
    ///
    /// ``` self: QtC.QAreaSeries, brush: QtC.QBrush ```
    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAreaSeries_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#brush)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn Brush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QAreaSeries_Brush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setColor)
    ///
    /// ``` self: QtC.QAreaSeries, color: QtC.QColor ```
    pub fn SetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAreaSeries_SetColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#color)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn Color(self: ?*anyopaque) QtC.QColor {
        return qtc.QAreaSeries_Color(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setBorderColor)
    ///
    /// ``` self: QtC.QAreaSeries, color: QtC.QColor ```
    pub fn SetBorderColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAreaSeries_SetBorderColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#borderColor)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn BorderColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAreaSeries_BorderColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointsVisible)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn SetPointsVisible(self: ?*anyopaque) void {
        qtc.QAreaSeries_SetPointsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointsVisible)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn PointsVisible(self: ?*anyopaque) bool {
        return qtc.QAreaSeries_PointsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsFormat)
    ///
    /// ``` self: QtC.QAreaSeries, format: []const u8 ```
    pub fn SetPointLabelsFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QAreaSeries_SetPointLabelsFormat(@ptrCast(self), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFormat)
    ///
    /// ``` self: QtC.QAreaSeries, allocator: std.mem.Allocator ```
    pub fn PointLabelsFormat(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAreaSeries_PointLabelsFormat(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qareaseries.PointLabelsFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsVisible)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn SetPointLabelsVisible(self: ?*anyopaque) void {
        qtc.QAreaSeries_SetPointLabelsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsVisible)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn PointLabelsVisible(self: ?*anyopaque) bool {
        return qtc.QAreaSeries_PointLabelsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsFont)
    ///
    /// ``` self: QtC.QAreaSeries, font: QtC.QFont ```
    pub fn SetPointLabelsFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAreaSeries_SetPointLabelsFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFont)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn PointLabelsFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QAreaSeries_PointLabelsFont(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsColor)
    ///
    /// ``` self: QtC.QAreaSeries, color: QtC.QColor ```
    pub fn SetPointLabelsColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAreaSeries_SetPointLabelsColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsColor)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn PointLabelsColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAreaSeries_PointLabelsColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsClipping)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn SetPointLabelsClipping(self: ?*anyopaque) void {
        qtc.QAreaSeries_SetPointLabelsClipping(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsClipping)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn PointLabelsClipping(self: ?*anyopaque) bool {
        return qtc.QAreaSeries_PointLabelsClipping(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#clicked)
    ///
    /// ``` self: QtC.QAreaSeries, point: QtC.QPointF ```
    pub fn Clicked(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QAreaSeries_Clicked(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#clicked)
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, point: QtC.QPointF) callconv(.c) void ```
    pub fn OnClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_Clicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#hovered)
    ///
    /// ``` self: QtC.QAreaSeries, point: QtC.QPointF, state: bool ```
    pub fn Hovered(self: ?*anyopaque, point: ?*anyopaque, state: bool) void {
        qtc.QAreaSeries_Hovered(@ptrCast(self), @ptrCast(point), state);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#hovered)
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, point: QtC.QPointF, state: bool) callconv(.c) void ```
    pub fn OnHovered(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_Hovered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pressed)
    ///
    /// ``` self: QtC.QAreaSeries, point: QtC.QPointF ```
    pub fn Pressed(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QAreaSeries_Pressed(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pressed)
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, point: QtC.QPointF) callconv(.c) void ```
    pub fn OnPressed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_Pressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#released)
    ///
    /// ``` self: QtC.QAreaSeries, point: QtC.QPointF ```
    pub fn Released(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QAreaSeries_Released(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#released)
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, point: QtC.QPointF) callconv(.c) void ```
    pub fn OnReleased(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_Released(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#doubleClicked)
    ///
    /// ``` self: QtC.QAreaSeries, point: QtC.QPointF ```
    pub fn DoubleClicked(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QAreaSeries_DoubleClicked(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#doubleClicked)
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, point: QtC.QPointF) callconv(.c) void ```
    pub fn OnDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_DoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#selected)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn Selected(self: ?*anyopaque) void {
        qtc.QAreaSeries_Selected(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#selected)
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries) callconv(.c) void ```
    pub fn OnSelected(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_Selected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#colorChanged)
    ///
    /// ``` self: QtC.QAreaSeries, color: QtC.QColor ```
    pub fn ColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAreaSeries_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#colorChanged)
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, color: QtC.QColor) callconv(.c) void ```
    pub fn OnColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_ColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#borderColorChanged)
    ///
    /// ``` self: QtC.QAreaSeries, color: QtC.QColor ```
    pub fn BorderColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAreaSeries_BorderColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#borderColorChanged)
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, color: QtC.QColor) callconv(.c) void ```
    pub fn OnBorderColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_BorderColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFormatChanged)
    ///
    /// ``` self: QtC.QAreaSeries, format: []const u8 ```
    pub fn PointLabelsFormatChanged(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QAreaSeries_PointLabelsFormatChanged(@ptrCast(self), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFormatChanged)
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, format: []const u8) callconv(.c) void ```
    pub fn OnPointLabelsFormatChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_PointLabelsFormatChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsVisibilityChanged)
    ///
    /// ``` self: QtC.QAreaSeries, visible: bool ```
    pub fn PointLabelsVisibilityChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAreaSeries_PointLabelsVisibilityChanged(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsVisibilityChanged)
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, visible: bool) callconv(.c) void ```
    pub fn OnPointLabelsVisibilityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_PointLabelsVisibilityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFontChanged)
    ///
    /// ``` self: QtC.QAreaSeries, font: QtC.QFont ```
    pub fn PointLabelsFontChanged(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAreaSeries_PointLabelsFontChanged(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFontChanged)
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, font: QtC.QFont) callconv(.c) void ```
    pub fn OnPointLabelsFontChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_PointLabelsFontChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsColorChanged)
    ///
    /// ``` self: QtC.QAreaSeries, color: QtC.QColor ```
    pub fn PointLabelsColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAreaSeries_PointLabelsColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsColorChanged)
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, color: QtC.QColor) callconv(.c) void ```
    pub fn OnPointLabelsColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_PointLabelsColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsClippingChanged)
    ///
    /// ``` self: QtC.QAreaSeries, clipping: bool ```
    pub fn PointLabelsClippingChanged(self: ?*anyopaque, clipping: bool) void {
        qtc.QAreaSeries_PointLabelsClippingChanged(@ptrCast(self), clipping);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsClippingChanged)
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, clipping: bool) callconv(.c) void ```
    pub fn OnPointLabelsClippingChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAreaSeries_Connect_PointLabelsClippingChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QAreaSeries_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qareaseries.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QAreaSeries_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qareaseries.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointsVisible)
    ///
    /// ``` self: QtC.QAreaSeries, visible: bool ```
    pub fn SetPointsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAreaSeries_SetPointsVisible1(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsVisible)
    ///
    /// ``` self: QtC.QAreaSeries, visible: bool ```
    pub fn SetPointLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAreaSeries_SetPointLabelsVisible1(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsClipping)
    ///
    /// ``` self: QtC.QAreaSeries, enabled: bool ```
    pub fn SetPointLabelsClipping1(self: ?*anyopaque, enabled: bool) void {
        qtc.QAreaSeries_SetPointLabelsClipping1(@ptrCast(self), enabled);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ``` self: QtC.QAreaSeries, name: []const u8 ```
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
    /// ``` self: QtC.QAreaSeries, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSeries_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qareaseries.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn SetVisible(self: ?*anyopaque) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ``` self: QtC.QAreaSeries, opacity: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn SetUseOpenGL(self: ?*anyopaque) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn UseOpenGL(self: ?*anyopaque) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn Chart(self: ?*anyopaque) QtC.QChart {
        return qtc.QAbstractSeries_Chart(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ``` self: QtC.QAreaSeries, axis: QtC.QAbstractAxis ```
    pub fn AttachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ``` self: QtC.QAreaSeries, axis: QtC.QAbstractAxis ```
    pub fn DetachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ``` self: QtC.QAreaSeries, allocator: std.mem.Allocator ```
    pub fn AttachedAxes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractAxis {
        const _arr: qtc.struct_libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractAxis, _arr.len) catch @panic("qareaseries.AttachedAxes: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QAbstractSeries_Show(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ``` self: QtC.QAreaSeries ```
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
    /// ``` self: QtC.QAreaSeries ```
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
    /// ``` self: QtC.QAreaSeries ```
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
    /// ``` self: QtC.QAreaSeries ```
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
    /// ``` self: QtC.QAreaSeries, visible: bool ```
    pub fn SetVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ``` self: QtC.QAreaSeries, enable: bool ```
    pub fn SetUseOpenGL1(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self), enable);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QAreaSeries, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qareaseries.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QAreaSeries, name: []const u8 ```
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
    /// ``` self: QtC.QAreaSeries ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QAreaSeries, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QAreaSeries, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QAreaSeries, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QAreaSeries, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QAreaSeries, id: qnamespace_enums.TimerId ```
    pub fn KillTimerWithId(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimerWithId(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QAreaSeries, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qareaseries.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QAreaSeries, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QAreaSeries, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QAreaSeries, obj: QtC.QObject ```
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
    /// ``` self: QtC.QAreaSeries, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return qtc.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QAreaSeries, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QAreaSeries, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QAreaSeries, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qareaseries.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qareaseries.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAreaSeries ```
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
    /// ``` self: QtC.QAreaSeries ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QAreaSeries, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QAreaSeries, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QAreaSeries, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
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
    /// ``` self: QtC.QAreaSeries, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAreaSeries, param1: QtC.QObject ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAreaSeries_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAreaSeries_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAreaSeries_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAreaSeries_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAreaSeries_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAreaSeries_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAreaSeries_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAreaSeries_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAreaSeries_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAreaSeries_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAreaSeries_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAreaSeries_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QAreaSeries_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QAreaSeries_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QAreaSeries_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QAreaSeries_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaSeries_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QAreaSeries_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QAreaSeries_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QAreaSeries_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QAreaSeries_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QAreaSeries_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QAreaSeries_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAreaSeries_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAreaSeries_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QAreaSeries_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QAreaSeries_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QAreaSeries_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QAreaSeries, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAreaSeries_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QAreaSeries, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#dtor.QAreaSeries)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAreaSeries ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAreaSeries_Delete(@ptrCast(self));
    }
};
