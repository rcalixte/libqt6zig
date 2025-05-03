const C = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpieslice_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qpieslice.html
pub const qpieslice = struct {
    /// New constructs a new QPieSlice object.
    ///
    ///
    pub fn New() ?*C.QPieSlice {
        return C.QPieSlice_new();
    }

    /// New2 constructs a new QPieSlice object.
    ///
    /// ``` label: []const u8, value: f64 ```
    pub fn New2(label: []const u8, value: f64) ?*C.QPieSlice {
        const label_str = C.struct_libqt_string{
            .len = label.len,
            .data = @constCast(label.ptr),
        };

        return C.QPieSlice_new2(label_str, @floatCast(value));
    }

    /// New3 constructs a new QPieSlice object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New3(parent: ?*anyopaque) ?*C.QPieSlice {
        return C.QPieSlice_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QPieSlice object.
    ///
    /// ``` label: []const u8, value: f64, parent: ?*C.QObject ```
    pub fn New4(label: []const u8, value: f64, parent: ?*anyopaque) ?*C.QPieSlice {
        const label_str = C.struct_libqt_string{
            .len = label.len,
            .data = @constCast(label.ptr),
        };

        return C.QPieSlice_new4(label_str, @floatCast(value), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QPieSlice_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QPieSlice_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QPieSlice, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QPieSlice_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QPieSlice_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QPieSlice, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QPieSlice_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QPieSlice_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#setLabel)
    ///
    /// ``` self: ?*C.QPieSlice, label: []const u8 ```
    pub fn SetLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = C.struct_libqt_string{
            .len = label.len,
            .data = @constCast(label.ptr),
        };
        C.QPieSlice_SetLabel(@ptrCast(self), label_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#label)
    ///
    /// ``` self: ?*C.QPieSlice, allocator: std.mem.Allocator ```
    pub fn Label(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QPieSlice_Label(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#setValue)
    ///
    /// ``` self: ?*C.QPieSlice, value: f64 ```
    pub fn SetValue(self: ?*anyopaque, value: f64) void {
        C.QPieSlice_SetValue(@ptrCast(self), @floatCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#value)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn Value(self: ?*anyopaque) f64 {
        return C.QPieSlice_Value(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#setLabelVisible)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn SetLabelVisible(self: ?*anyopaque) void {
        C.QPieSlice_SetLabelVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#isLabelVisible)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn IsLabelVisible(self: ?*anyopaque) bool {
        return C.QPieSlice_IsLabelVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#labelPosition)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn LabelPosition(self: ?*anyopaque) i64 {
        return C.QPieSlice_LabelPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#setLabelPosition)
    ///
    /// ``` self: ?*C.QPieSlice, position: qpieslice_enums.LabelPosition ```
    pub fn SetLabelPosition(self: ?*anyopaque, position: i64) void {
        C.QPieSlice_SetLabelPosition(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#setExploded)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn SetExploded(self: ?*anyopaque) void {
        C.QPieSlice_SetExploded(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#isExploded)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn IsExploded(self: ?*anyopaque) bool {
        return C.QPieSlice_IsExploded(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#setPen)
    ///
    /// ``` self: ?*C.QPieSlice, pen: ?*C.QPen ```
    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QPieSlice_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#pen)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn Pen(self: ?*anyopaque) ?*C.QPen {
        return C.QPieSlice_Pen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#borderColor)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn BorderColor(self: ?*anyopaque) ?*C.QColor {
        return C.QPieSlice_BorderColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#setBorderColor)
    ///
    /// ``` self: ?*C.QPieSlice, color: C.QColor ```
    pub fn SetBorderColor(self: ?*anyopaque, color: C.QColor) void {
        C.QPieSlice_SetBorderColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#borderWidth)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn BorderWidth(self: ?*anyopaque) i32 {
        return C.QPieSlice_BorderWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#setBorderWidth)
    ///
    /// ``` self: ?*C.QPieSlice, width: i32 ```
    pub fn SetBorderWidth(self: ?*anyopaque, width: i32) void {
        C.QPieSlice_SetBorderWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#setBrush)
    ///
    /// ``` self: ?*C.QPieSlice, brush: ?*C.QBrush ```
    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QPieSlice_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#brush)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn Brush(self: ?*anyopaque) ?*C.QBrush {
        return C.QPieSlice_Brush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#color)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn Color(self: ?*anyopaque) ?*C.QColor {
        return C.QPieSlice_Color(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#setColor)
    ///
    /// ``` self: ?*C.QPieSlice, color: C.QColor ```
    pub fn SetColor(self: ?*anyopaque, color: C.QColor) void {
        C.QPieSlice_SetColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#setLabelBrush)
    ///
    /// ``` self: ?*C.QPieSlice, brush: ?*C.QBrush ```
    pub fn SetLabelBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QPieSlice_SetLabelBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#labelBrush)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn LabelBrush(self: ?*anyopaque) ?*C.QBrush {
        return C.QPieSlice_LabelBrush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#labelColor)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn LabelColor(self: ?*anyopaque) ?*C.QColor {
        return C.QPieSlice_LabelColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#setLabelColor)
    ///
    /// ``` self: ?*C.QPieSlice, color: C.QColor ```
    pub fn SetLabelColor(self: ?*anyopaque, color: C.QColor) void {
        C.QPieSlice_SetLabelColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#setLabelFont)
    ///
    /// ``` self: ?*C.QPieSlice, font: ?*C.QFont ```
    pub fn SetLabelFont(self: ?*anyopaque, font: ?*anyopaque) void {
        C.QPieSlice_SetLabelFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#labelFont)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn LabelFont(self: ?*anyopaque) ?*C.QFont {
        return C.QPieSlice_LabelFont(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#setLabelArmLengthFactor)
    ///
    /// ``` self: ?*C.QPieSlice, factor: f64 ```
    pub fn SetLabelArmLengthFactor(self: ?*anyopaque, factor: f64) void {
        C.QPieSlice_SetLabelArmLengthFactor(@ptrCast(self), @floatCast(factor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#labelArmLengthFactor)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn LabelArmLengthFactor(self: ?*anyopaque) f64 {
        return C.QPieSlice_LabelArmLengthFactor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#setExplodeDistanceFactor)
    ///
    /// ``` self: ?*C.QPieSlice, factor: f64 ```
    pub fn SetExplodeDistanceFactor(self: ?*anyopaque, factor: f64) void {
        C.QPieSlice_SetExplodeDistanceFactor(@ptrCast(self), @floatCast(factor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#explodeDistanceFactor)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn ExplodeDistanceFactor(self: ?*anyopaque) f64 {
        return C.QPieSlice_ExplodeDistanceFactor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#percentage)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn Percentage(self: ?*anyopaque) f64 {
        return C.QPieSlice_Percentage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#startAngle)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn StartAngle(self: ?*anyopaque) f64 {
        return C.QPieSlice_StartAngle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#angleSpan)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn AngleSpan(self: ?*anyopaque) f64 {
        return C.QPieSlice_AngleSpan(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#series)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn Series(self: ?*anyopaque) ?*C.QPieSeries {
        return C.QPieSlice_Series(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#clicked)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn Clicked(self: ?*anyopaque) void {
        C.QPieSlice_Clicked(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice) callconv(.c) void ```
    pub fn OnClicked(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_Connect_Clicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#hovered)
    ///
    /// ``` self: ?*C.QPieSlice, state: bool ```
    pub fn Hovered(self: ?*anyopaque, state: bool) void {
        C.QPieSlice_Hovered(@ptrCast(self), state);
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice, bool) callconv(.c) void ```
    pub fn OnHovered(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QPieSlice_Connect_Hovered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#pressed)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn Pressed(self: ?*anyopaque) void {
        C.QPieSlice_Pressed(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice) callconv(.c) void ```
    pub fn OnPressed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_Connect_Pressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#released)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn Released(self: ?*anyopaque) void {
        C.QPieSlice_Released(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice) callconv(.c) void ```
    pub fn OnReleased(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_Connect_Released(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#doubleClicked)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn DoubleClicked(self: ?*anyopaque) void {
        C.QPieSlice_DoubleClicked(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice) callconv(.c) void ```
    pub fn OnDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_Connect_DoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#labelChanged)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn LabelChanged(self: ?*anyopaque) void {
        C.QPieSlice_LabelChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice) callconv(.c) void ```
    pub fn OnLabelChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_Connect_LabelChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#valueChanged)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn ValueChanged(self: ?*anyopaque) void {
        C.QPieSlice_ValueChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice) callconv(.c) void ```
    pub fn OnValueChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_Connect_ValueChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#labelVisibleChanged)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn LabelVisibleChanged(self: ?*anyopaque) void {
        C.QPieSlice_LabelVisibleChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice) callconv(.c) void ```
    pub fn OnLabelVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_Connect_LabelVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#penChanged)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn PenChanged(self: ?*anyopaque) void {
        C.QPieSlice_PenChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice) callconv(.c) void ```
    pub fn OnPenChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_Connect_PenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#brushChanged)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn BrushChanged(self: ?*anyopaque) void {
        C.QPieSlice_BrushChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice) callconv(.c) void ```
    pub fn OnBrushChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_Connect_BrushChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#labelBrushChanged)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn LabelBrushChanged(self: ?*anyopaque) void {
        C.QPieSlice_LabelBrushChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice) callconv(.c) void ```
    pub fn OnLabelBrushChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_Connect_LabelBrushChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#labelFontChanged)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn LabelFontChanged(self: ?*anyopaque) void {
        C.QPieSlice_LabelFontChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice) callconv(.c) void ```
    pub fn OnLabelFontChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_Connect_LabelFontChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#percentageChanged)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn PercentageChanged(self: ?*anyopaque) void {
        C.QPieSlice_PercentageChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice) callconv(.c) void ```
    pub fn OnPercentageChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_Connect_PercentageChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#startAngleChanged)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn StartAngleChanged(self: ?*anyopaque) void {
        C.QPieSlice_StartAngleChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice) callconv(.c) void ```
    pub fn OnStartAngleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_Connect_StartAngleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#angleSpanChanged)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn AngleSpanChanged(self: ?*anyopaque) void {
        C.QPieSlice_AngleSpanChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice) callconv(.c) void ```
    pub fn OnAngleSpanChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_Connect_AngleSpanChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#colorChanged)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn ColorChanged(self: ?*anyopaque) void {
        C.QPieSlice_ColorChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice) callconv(.c) void ```
    pub fn OnColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_Connect_ColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#borderColorChanged)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn BorderColorChanged(self: ?*anyopaque) void {
        C.QPieSlice_BorderColorChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice) callconv(.c) void ```
    pub fn OnBorderColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_Connect_BorderColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#borderWidthChanged)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn BorderWidthChanged(self: ?*anyopaque) void {
        C.QPieSlice_BorderWidthChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice) callconv(.c) void ```
    pub fn OnBorderWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_Connect_BorderWidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#labelColorChanged)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn LabelColorChanged(self: ?*anyopaque) void {
        C.QPieSlice_LabelColorChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice) callconv(.c) void ```
    pub fn OnLabelColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_Connect_LabelColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QPieSlice_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QPieSlice_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#setLabelVisible)
    ///
    /// ``` self: ?*C.QPieSlice, visible: bool ```
    pub fn SetLabelVisible1(self: ?*anyopaque, visible: bool) void {
        C.QPieSlice_SetLabelVisible1(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieslice.html#setExploded)
    ///
    /// ``` self: ?*C.QPieSlice, exploded: bool ```
    pub fn SetExploded1(self: ?*anyopaque, exploded: bool) void {
        C.QPieSlice_SetExploded1(@ptrCast(self), exploded);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QPieSlice, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QPieSlice, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QPieSlice, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QPieSlice, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QPieSlice, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QPieSlice, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QPieSlice, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QPieSlice, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QPieSlice, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QPieSlice, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QPieSlice, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QPieSlice ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QPieSlice, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QPieSlice, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QPieSlice, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QPieSlice ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QPieSlice ```
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
    /// ``` self: ?*C.QPieSlice ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QPieSlice, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QPieSlice, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QPieSlice, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QPieSlice, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPieSlice_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPieSlice_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QPieSlice_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPieSlice_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPieSlice_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QPieSlice_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPieSlice_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPieSlice_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPieSlice_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPieSlice_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPieSlice_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPieSlice_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QPieSlice_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QPieSlice_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QPieSlice_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QPieSlice_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPieSlice_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QPieSlice_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QPieSlice_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QPieSlice_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QPieSlice_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QPieSlice_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QPieSlice_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QPieSlice_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QPieSlice_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QPieSlice_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QPieSlice_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QPieSlice_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPieSlice, slot: fn (?*C.QPieSlice, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QPieSlice_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QPieSlice ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QPieSlice_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpieslice.html#types
pub const enums = struct {
    pub const LabelPosition = enum {
        pub const LabelOutside: i32 = 0;
        pub const LabelInsideHorizontal: i32 = 1;
        pub const LabelInsideTangential: i32 = 2;
        pub const LabelInsideNormal: i32 = 3;
    };
};
