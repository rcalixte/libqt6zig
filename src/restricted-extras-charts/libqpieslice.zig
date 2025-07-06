const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpieslice_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qpieslice-qtcharts.html
pub const qpieslice = struct {
    /// New constructs a new QPieSlice object.
    ///
    ///
    pub fn New() QtC.QPieSlice {
        return qtc.QPieSlice_new();
    }

    /// New2 constructs a new QPieSlice object.
    ///
    /// ``` label: []const u8, value: f64 ```
    pub fn New2(label: []const u8, value: f64) QtC.QPieSlice {
        const label_str = qtc.struct_libqt_string{
            .len = label.len,
            .data = label.ptr,
        };

        return qtc.QPieSlice_new2(label_str, @floatCast(value));
    }

    /// New3 constructs a new QPieSlice object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New3(parent: ?*anyopaque) QtC.QPieSlice {
        return qtc.QPieSlice_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QPieSlice object.
    ///
    /// ``` label: []const u8, value: f64, parent: QtC.QObject ```
    pub fn New4(label: []const u8, value: f64, parent: ?*anyopaque) QtC.QPieSlice {
        const label_str = qtc.struct_libqt_string{
            .len = label.len,
            .data = label.ptr,
        };

        return qtc.QPieSlice_new4(label_str, @floatCast(value), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QPieSlice_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QPieSlice, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPieSlice_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QPieSlice, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QPieSlice_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QPieSlice_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QPieSlice, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QPieSlice_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QPieSlice_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieslice.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabel)
    ///
    /// ``` self: QtC.QPieSlice, label: []const u8 ```
    pub fn SetLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.struct_libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QPieSlice_SetLabel(@ptrCast(self), label_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#label)
    ///
    /// ``` self: QtC.QPieSlice, allocator: std.mem.Allocator ```
    pub fn Label(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPieSlice_Label(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieslice.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setValue)
    ///
    /// ``` self: QtC.QPieSlice, value: f64 ```
    pub fn SetValue(self: ?*anyopaque, value: f64) void {
        qtc.QPieSlice_SetValue(@ptrCast(self), @floatCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#value)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn Value(self: ?*anyopaque) f64 {
        return qtc.QPieSlice_Value(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelVisible)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn SetLabelVisible(self: ?*anyopaque) void {
        qtc.QPieSlice_SetLabelVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#isLabelVisible)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn IsLabelVisible(self: ?*anyopaque) bool {
        return qtc.QPieSlice_IsLabelVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelPosition)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn LabelPosition(self: ?*anyopaque) i64 {
        return qtc.QPieSlice_LabelPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelPosition)
    ///
    /// ``` self: QtC.QPieSlice, position: qpieslice_enums.LabelPosition ```
    pub fn SetLabelPosition(self: ?*anyopaque, position: i64) void {
        qtc.QPieSlice_SetLabelPosition(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setExploded)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn SetExploded(self: ?*anyopaque) void {
        qtc.QPieSlice_SetExploded(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#isExploded)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn IsExploded(self: ?*anyopaque) bool {
        return qtc.QPieSlice_IsExploded(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setPen)
    ///
    /// ``` self: QtC.QPieSlice, pen: QtC.QPen ```
    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QPieSlice_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#pen)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn Pen(self: ?*anyopaque) QtC.QPen {
        return qtc.QPieSlice_Pen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderColor)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn BorderColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QPieSlice_BorderColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setBorderColor)
    ///
    /// ``` self: QtC.QPieSlice, color: QtC.QColor ```
    pub fn SetBorderColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QPieSlice_SetBorderColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderWidth)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn BorderWidth(self: ?*anyopaque) i32 {
        return qtc.QPieSlice_BorderWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setBorderWidth)
    ///
    /// ``` self: QtC.QPieSlice, width: i32 ```
    pub fn SetBorderWidth(self: ?*anyopaque, width: i32) void {
        qtc.QPieSlice_SetBorderWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setBrush)
    ///
    /// ``` self: QtC.QPieSlice, brush: QtC.QBrush ```
    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QPieSlice_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#brush)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn Brush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPieSlice_Brush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#color)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn Color(self: ?*anyopaque) QtC.QColor {
        return qtc.QPieSlice_Color(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setColor)
    ///
    /// ``` self: QtC.QPieSlice, color: QtC.QColor ```
    pub fn SetColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QPieSlice_SetColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelBrush)
    ///
    /// ``` self: QtC.QPieSlice, brush: QtC.QBrush ```
    pub fn SetLabelBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QPieSlice_SetLabelBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelBrush)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn LabelBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPieSlice_LabelBrush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelColor)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn LabelColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QPieSlice_LabelColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelColor)
    ///
    /// ``` self: QtC.QPieSlice, color: QtC.QColor ```
    pub fn SetLabelColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QPieSlice_SetLabelColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelFont)
    ///
    /// ``` self: QtC.QPieSlice, font: QtC.QFont ```
    pub fn SetLabelFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QPieSlice_SetLabelFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelFont)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn LabelFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QPieSlice_LabelFont(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelArmLengthFactor)
    ///
    /// ``` self: QtC.QPieSlice, factor: f64 ```
    pub fn SetLabelArmLengthFactor(self: ?*anyopaque, factor: f64) void {
        qtc.QPieSlice_SetLabelArmLengthFactor(@ptrCast(self), @floatCast(factor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelArmLengthFactor)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn LabelArmLengthFactor(self: ?*anyopaque) f64 {
        return qtc.QPieSlice_LabelArmLengthFactor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setExplodeDistanceFactor)
    ///
    /// ``` self: QtC.QPieSlice, factor: f64 ```
    pub fn SetExplodeDistanceFactor(self: ?*anyopaque, factor: f64) void {
        qtc.QPieSlice_SetExplodeDistanceFactor(@ptrCast(self), @floatCast(factor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#explodeDistanceFactor)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn ExplodeDistanceFactor(self: ?*anyopaque) f64 {
        return qtc.QPieSlice_ExplodeDistanceFactor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#percentage)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn Percentage(self: ?*anyopaque) f64 {
        return qtc.QPieSlice_Percentage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#startAngle)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn StartAngle(self: ?*anyopaque) f64 {
        return qtc.QPieSlice_StartAngle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#angleSpan)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn AngleSpan(self: ?*anyopaque) f64 {
        return qtc.QPieSlice_AngleSpan(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#series)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn Series(self: ?*anyopaque) QtC.QPieSeries {
        return qtc.QPieSlice_Series(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#clicked)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn Clicked(self: ?*anyopaque) void {
        qtc.QPieSlice_Clicked(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#clicked)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnClicked(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_Clicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#hovered)
    ///
    /// ``` self: QtC.QPieSlice, state: bool ```
    pub fn Hovered(self: ?*anyopaque, state: bool) void {
        qtc.QPieSlice_Hovered(@ptrCast(self), state);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#hovered)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice, state: bool) callconv(.c) void ```
    pub fn OnHovered(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPieSlice_Connect_Hovered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#pressed)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn Pressed(self: ?*anyopaque) void {
        qtc.QPieSlice_Pressed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#pressed)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnPressed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_Pressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#released)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn Released(self: ?*anyopaque) void {
        qtc.QPieSlice_Released(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#released)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnReleased(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_Released(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#doubleClicked)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn DoubleClicked(self: ?*anyopaque) void {
        qtc.QPieSlice_DoubleClicked(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#doubleClicked)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_DoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelChanged)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn LabelChanged(self: ?*anyopaque) void {
        qtc.QPieSlice_LabelChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelChanged)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnLabelChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#valueChanged)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn ValueChanged(self: ?*anyopaque) void {
        qtc.QPieSlice_ValueChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#valueChanged)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnValueChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_ValueChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelVisibleChanged)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn LabelVisibleChanged(self: ?*anyopaque) void {
        qtc.QPieSlice_LabelVisibleChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelVisibleChanged)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnLabelVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#penChanged)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn PenChanged(self: ?*anyopaque) void {
        qtc.QPieSlice_PenChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#penChanged)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnPenChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_PenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#brushChanged)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn BrushChanged(self: ?*anyopaque) void {
        qtc.QPieSlice_BrushChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#brushChanged)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnBrushChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_BrushChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelBrushChanged)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn LabelBrushChanged(self: ?*anyopaque) void {
        qtc.QPieSlice_LabelBrushChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelBrushChanged)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnLabelBrushChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelBrushChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelFontChanged)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn LabelFontChanged(self: ?*anyopaque) void {
        qtc.QPieSlice_LabelFontChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelFontChanged)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnLabelFontChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelFontChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#percentageChanged)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn PercentageChanged(self: ?*anyopaque) void {
        qtc.QPieSlice_PercentageChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#percentageChanged)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnPercentageChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_PercentageChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#startAngleChanged)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn StartAngleChanged(self: ?*anyopaque) void {
        qtc.QPieSlice_StartAngleChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#startAngleChanged)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnStartAngleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_StartAngleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#angleSpanChanged)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn AngleSpanChanged(self: ?*anyopaque) void {
        qtc.QPieSlice_AngleSpanChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#angleSpanChanged)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnAngleSpanChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_AngleSpanChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#colorChanged)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn ColorChanged(self: ?*anyopaque) void {
        qtc.QPieSlice_ColorChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#colorChanged)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_ColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderColorChanged)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn BorderColorChanged(self: ?*anyopaque) void {
        qtc.QPieSlice_BorderColorChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderColorChanged)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnBorderColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_BorderColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderWidthChanged)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn BorderWidthChanged(self: ?*anyopaque) void {
        qtc.QPieSlice_BorderWidthChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderWidthChanged)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnBorderWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_BorderWidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelColorChanged)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn LabelColorChanged(self: ?*anyopaque) void {
        qtc.QPieSlice_LabelColorChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelColorChanged)
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnLabelColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QPieSlice_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieslice.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QPieSlice_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieslice.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelVisible)
    ///
    /// ``` self: QtC.QPieSlice, visible: bool ```
    pub fn SetLabelVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QPieSlice_SetLabelVisible1(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setExploded)
    ///
    /// ``` self: QtC.QPieSlice, exploded: bool ```
    pub fn SetExploded1(self: ?*anyopaque, exploded: bool) void {
        qtc.QPieSlice_SetExploded1(@ptrCast(self), exploded);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QPieSlice, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieslice.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QPieSlice, name: []const u8 ```
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
    /// ``` self: QtC.QPieSlice ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QPieSlice, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QPieSlice, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QPieSlice, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QPieSlice, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QPieSlice, id: qnamespace_enums.TimerId ```
    pub fn KillTimerWithId(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimerWithId(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QPieSlice, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qpieslice.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QPieSlice, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QPieSlice, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QPieSlice, obj: QtC.QObject ```
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
    /// ``` self: QtC.QPieSlice, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QPieSlice ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QPieSlice, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QPieSlice, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QPieSlice, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qpieslice.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qpieslice.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QPieSlice ```
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
    /// ``` self: QtC.QPieSlice ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QPieSlice, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QPieSlice, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QPieSlice, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QPieSlice, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QPieSlice, param1: QtC.QObject ```
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
    /// ``` self: QtC.QPieSlice, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPieSlice_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPieSlice_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPieSlice_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPieSlice_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPieSlice_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPieSlice_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPieSlice_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPieSlice_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPieSlice_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPieSlice_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPieSlice_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPieSlice_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPieSlice_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPieSlice_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPieSlice_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPieSlice_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPieSlice_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPieSlice_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QPieSlice_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPieSlice_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPieSlice_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QPieSlice_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPieSlice_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPieSlice_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QPieSlice_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPieSlice_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPieSlice_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QPieSlice, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPieSlice_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QPieSlice, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#dtor.QPieSlice)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPieSlice ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPieSlice_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpieslice-qtcharts.html#types
pub const enums = struct {
    pub const LabelPosition = enum {
        pub const LabelOutside: i32 = 0;
        pub const LabelInsideHorizontal: i32 = 1;
        pub const LabelInsideTangential: i32 = 2;
        pub const LabelInsideNormal: i32 = 3;
    };
};
