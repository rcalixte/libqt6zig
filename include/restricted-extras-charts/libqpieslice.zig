const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBrush = @import("libqt6").QBrush;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPen = @import("libqt6").QPen;
const QPieSeries = @import("libqt6").QPieSeries;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpieslice_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html)
pub const QPieSlice = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPieSlice,

    pub const _is_QPieSlice = {};
    pub const _is_QObject = {};

    /// New constructs a new QPieSlice object.
    ///
    pub fn New() QPieSlice {
        return .{ .ptr = qtc.QPieSlice_new() };
    }

    /// New2 constructs a new QPieSlice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` label: []const u8 `
    ///
    /// ` value: f64 `
    ///
    pub fn New2(label: []const u8, value: f64) QPieSlice {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        return .{ .ptr = qtc.QPieSlice_new2(label_str, @bitCast(value)) };
    }

    /// New3 constructs a new QPieSlice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) QPieSlice {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QPieSlice_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new QPieSlice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` label: []const u8 `
    ///
    /// ` value: f64 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(label: []const u8, value: f64, parent: anytype) QPieSlice {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QPieSlice_new4(label_str, @bitCast(value), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn MetaObject(self: QPieSlice) QMetaObject {
        return .{ .ptr = qtc.QPieSlice_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QPieSlice, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPieSlice_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn SuperMetaObject(self: QPieSlice) QMetaObject {
        return .{ .ptr = qtc.QPieSlice_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QPieSlice, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPieSlice_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QPieSlice, callback: *const fn (QPieSlice, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPieSlice_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QPieSlice, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPieSlice_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QPieSlice, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPieSlice_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QPieSlice, callback: *const fn (QPieSlice, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPieSlice_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QPieSlice, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPieSlice_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieslice.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` label: []const u8 `
    ///
    pub fn SetLabel(self: QPieSlice, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QPieSlice_SetLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: QPieSlice, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPieSlice_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieslice.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` value: f64 `
    ///
    pub fn SetValue(self: QPieSlice, value: f64) void {
        qtc.QPieSlice_SetValue(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn Value(self: QPieSlice) f64 {
        return qtc.QPieSlice_Value(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn SetLabelVisible(self: QPieSlice) void {
        qtc.QPieSlice_SetLabelVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#isLabelVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn IsLabelVisible(self: QPieSlice) bool {
        return qtc.QPieSlice_IsLabelVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ## Returns:
    ///
    /// ` qpieslice_enums.LabelPosition `
    ///
    pub fn LabelPosition(self: QPieSlice) i32 {
        return qtc.QPieSlice_LabelPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` position: qpieslice_enums.LabelPosition `
    ///
    pub fn SetLabelPosition(self: QPieSlice, position: i32) void {
        qtc.QPieSlice_SetLabelPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setExploded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn SetExploded(self: QPieSlice) void {
        qtc.QPieSlice_SetExploded(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#isExploded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn IsExploded(self: QPieSlice) bool {
        return qtc.QPieSlice_IsExploded(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetPen(self: QPieSlice, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QPieSlice_SetPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn Pen(self: QPieSlice) QPen {
        return .{ .ptr = qtc.QPieSlice_Pen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn BorderColor(self: QPieSlice) QColor {
        return .{ .ptr = qtc.QPieSlice_BorderColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` color: QColor `
    ///
    pub fn SetBorderColor(self: QPieSlice, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPieSlice_SetBorderColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn BorderWidth(self: QPieSlice) i32 {
        return qtc.QPieSlice_BorderWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setBorderWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` width: i32 `
    ///
    pub fn SetBorderWidth(self: QPieSlice, width: i32) void {
        qtc.QPieSlice_SetBorderWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBrush(self: QPieSlice, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QPieSlice_SetBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn Brush(self: QPieSlice) QBrush {
        return .{ .ptr = qtc.QPieSlice_Brush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn Color(self: QPieSlice) QColor {
        return .{ .ptr = qtc.QPieSlice_Color(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColor(self: QPieSlice, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPieSlice_SetColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetLabelBrush(self: QPieSlice, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QPieSlice_SetLabelBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn LabelBrush(self: QPieSlice) QBrush {
        return .{ .ptr = qtc.QPieSlice_LabelBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn LabelColor(self: QPieSlice) QColor {
        return .{ .ptr = qtc.QPieSlice_LabelColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` color: QColor `
    ///
    pub fn SetLabelColor(self: QPieSlice, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPieSlice_SetLabelColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` font: QFont `
    ///
    pub fn SetLabelFont(self: QPieSlice, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QPieSlice_SetLabelFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn LabelFont(self: QPieSlice) QFont {
        return .{ .ptr = qtc.QPieSlice_LabelFont(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelArmLengthFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` factor: f64 `
    ///
    pub fn SetLabelArmLengthFactor(self: QPieSlice, factor: f64) void {
        qtc.QPieSlice_SetLabelArmLengthFactor(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelArmLengthFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn LabelArmLengthFactor(self: QPieSlice) f64 {
        return qtc.QPieSlice_LabelArmLengthFactor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setExplodeDistanceFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` factor: f64 `
    ///
    pub fn SetExplodeDistanceFactor(self: QPieSlice, factor: f64) void {
        qtc.QPieSlice_SetExplodeDistanceFactor(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#explodeDistanceFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn ExplodeDistanceFactor(self: QPieSlice) f64 {
        return qtc.QPieSlice_ExplodeDistanceFactor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#percentage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn Percentage(self: QPieSlice) f64 {
        return qtc.QPieSlice_Percentage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#startAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn StartAngle(self: QPieSlice) f64 {
        return qtc.QPieSlice_StartAngle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#angleSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn AngleSpan(self: QPieSlice) f64 {
        return qtc.QPieSlice_AngleSpan(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn Series(self: QPieSlice) QPieSeries {
        return .{ .ptr = qtc.QPieSlice_Series(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn Clicked(self: QPieSlice) void {
        qtc.QPieSlice_Clicked(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnClicked(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` state: bool `
    ///
    pub fn Hovered(self: QPieSlice, state: bool) void {
        qtc.QPieSlice_Hovered(@ptrCast(self.ptr), state);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice, state: bool) callconv(.c) void `
    ///
    pub fn OnHovered(self: QPieSlice, callback: *const fn (QPieSlice, bool) callconv(.c) void) void {
        qtc.QPieSlice_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn Pressed(self: QPieSlice) void {
        qtc.QPieSlice_Pressed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnPressed(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn Released(self: QPieSlice) void {
        qtc.QPieSlice_Released(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnReleased(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn DoubleClicked(self: QPieSlice) void {
        qtc.QPieSlice_DoubleClicked(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn LabelChanged(self: QPieSlice) void {
        qtc.QPieSlice_LabelChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnLabelChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#valueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn ValueChanged(self: QPieSlice) void {
        qtc.QPieSlice_ValueChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#valueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnValueChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_ValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn LabelVisibleChanged(self: QPieSlice) void {
        qtc.QPieSlice_LabelVisibleChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnLabelVisibleChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn PenChanged(self: QPieSlice) void {
        qtc.QPieSlice_PenChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnPenChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_PenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#brushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn BrushChanged(self: QPieSlice) void {
        qtc.QPieSlice_BrushChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#brushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnBrushChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_BrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn LabelBrushChanged(self: QPieSlice) void {
        qtc.QPieSlice_LabelBrushChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnLabelBrushChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn LabelFontChanged(self: QPieSlice) void {
        qtc.QPieSlice_LabelFontChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnLabelFontChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#percentageChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn PercentageChanged(self: QPieSlice) void {
        qtc.QPieSlice_PercentageChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#percentageChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnPercentageChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_PercentageChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#startAngleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn StartAngleChanged(self: QPieSlice) void {
        qtc.QPieSlice_StartAngleChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#startAngleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnStartAngleChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_StartAngleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#angleSpanChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn AngleSpanChanged(self: QPieSlice) void {
        qtc.QPieSlice_AngleSpanChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#angleSpanChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnAngleSpanChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_AngleSpanChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn ColorChanged(self: QPieSlice) void {
        qtc.QPieSlice_ColorChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnColorChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn BorderColorChanged(self: QPieSlice) void {
        qtc.QPieSlice_BorderColorChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnBorderColorChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_BorderColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn BorderWidthChanged(self: QPieSlice) void {
        qtc.QPieSlice_BorderWidthChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnBorderWidthChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_BorderWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn LabelColorChanged(self: QPieSlice) void {
        qtc.QPieSlice_LabelColorChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnLabelColorChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieslice.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieslice.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` visible: bool `
    ///
    pub fn SetLabelVisible1(self: QPieSlice, visible: bool) void {
        qtc.QPieSlice_SetLabelVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setExploded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` exploded: bool `
    ///
    pub fn SetExploded1(self: QPieSlice, exploded: bool) void {
        qtc.QPieSlice_SetExploded1(@ptrCast(self.ptr), exploded);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QPieSlice, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieslice.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QPieSlice, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn IsWidgetType(self: QPieSlice) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn IsWindowType(self: QPieSlice) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn IsQuickItemType(self: QPieSlice) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn SignalsBlocked(self: QPieSlice) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QPieSlice, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn Thread(self: QPieSlice) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QPieSlice, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QPieSlice, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QPieSlice, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QPieSlice, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QPieSlice, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QPieSlice, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qpieslice.Children: Memory allocation failed");
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
    /// ` self: QPieSlice `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QPieSlice, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QPieSlice, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QPieSlice, obj: anytype) void {
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
    /// ` self: QPieSlice `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QPieSlice, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPieSlice `
    ///
    pub fn Disconnect3(self: QPieSlice) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QPieSlice, receiver: anytype) bool {
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
    /// ` self: QPieSlice `
    ///
    pub fn DumpObjectTree(self: QPieSlice) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn DumpObjectInfo(self: QPieSlice) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QPieSlice, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPieSlice `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QPieSlice, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QPieSlice, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn BindingStorage(self: QPieSlice) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn BindingStorage2(self: QPieSlice) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn Destroyed(self: QPieSlice) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn Parent(self: QPieSlice) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QPieSlice, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn DeleteLater(self: QPieSlice) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QPieSlice, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QPieSlice, time: i64, timerType: i32) i32 {
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
    /// ` self: QPieSlice `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QPieSlice, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPieSlice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QPieSlice, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QPieSlice, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPieSlice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QPieSlice, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPieSlice `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QPieSlice, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPieSlice `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QPieSlice, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QPieSlice, callback: *const fn (QPieSlice, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QPieSlice, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPieSlice_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QPieSlice, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPieSlice_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn (self: QPieSlice, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QPieSlice, callback: *const fn (QPieSlice, QEvent) callconv(.c) bool) void {
        qtc.QPieSlice_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QPieSlice, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPieSlice_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QPieSlice, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPieSlice_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn (self: QPieSlice, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QPieSlice, callback: *const fn (QPieSlice, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPieSlice_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QPieSlice, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QPieSlice_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QPieSlice, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QPieSlice_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn (self: QPieSlice, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QPieSlice, callback: *const fn (QPieSlice, QTimerEvent) callconv(.c) void) void {
        qtc.QPieSlice_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QPieSlice, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPieSlice_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QPieSlice, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPieSlice_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn (self: QPieSlice, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QPieSlice, callback: *const fn (QPieSlice, QChildEvent) callconv(.c) void) void {
        qtc.QPieSlice_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QPieSlice, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPieSlice_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QPieSlice, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPieSlice_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn (self: QPieSlice, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QPieSlice, callback: *const fn (QPieSlice, QEvent) callconv(.c) void) void {
        qtc.QPieSlice_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QPieSlice, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPieSlice_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QPieSlice, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPieSlice_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn (self: QPieSlice, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QPieSlice, callback: *const fn (QPieSlice, QMetaMethod) callconv(.c) void) void {
        qtc.QPieSlice_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QPieSlice, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPieSlice_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QPieSlice, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPieSlice_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn (self: QPieSlice, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QPieSlice, callback: *const fn (QPieSlice, QMetaMethod) callconv(.c) void) void {
        qtc.QPieSlice_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn Sender(self: QPieSlice) QObject {
        return .{ .ptr = qtc.QPieSlice_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn SuperSender(self: QPieSlice) QObject {
        return .{ .ptr = qtc.QPieSlice_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QPieSlice, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPieSlice_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn SenderSignalIndex(self: QPieSlice) i32 {
        return qtc.QPieSlice_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn SuperSenderSignalIndex(self: QPieSlice) i32 {
        return qtc.QPieSlice_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QPieSlice, callback: *const fn () callconv(.c) i32) void {
        qtc.QPieSlice_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QPieSlice, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPieSlice_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QPieSlice, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPieSlice_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn (self: QPieSlice, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QPieSlice, callback: *const fn (QPieSlice, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPieSlice_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QPieSlice, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPieSlice_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QPieSlice, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPieSlice_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn (self: QPieSlice, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QPieSlice, callback: *const fn (QPieSlice, QMetaMethod) callconv(.c) bool) void {
        qtc.QPieSlice_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QPieSlice, callback: *const fn (QPieSlice, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#dtor.QPieSlice)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPieSlice `
    ///
    pub fn Delete(self: QPieSlice) void {
        qtc.QPieSlice_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#public-types)
pub const enums = struct {
    pub const LabelPosition = enum(i32) {
        pub const LabelOutside: i32 = 0;
        pub const LabelInsideHorizontal: i32 = 1;
        pub const LabelInsideTangential: i32 = 2;
        pub const LabelInsideNormal: i32 = 3;
    };
};
