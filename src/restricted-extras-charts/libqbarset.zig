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
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html)
pub const QBarSet = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBarSet,

    pub const _is_QBarSet = {};
    pub const _is_QObject = {};

    /// New constructs a new QBarSet object.
    ///
    /// ## Parameter(s):
    ///
    /// ` label: []const u8 `
    ///
    pub fn New(label: []const u8) QBarSet {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        return .{ .ptr = qtc.QBarSet_new(label_str) };
    }

    /// New2 constructs a new QBarSet object.
    ///
    /// ## Parameter(s):
    ///
    /// ` label: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(label: []const u8, parent: anytype) QBarSet {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QBarSet_new2(label_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn MetaObject(self: QBarSet) QMetaObject {
        return .{ .ptr = qtc.QBarSet_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QBarSet, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QBarSet_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarSet `
    ///
    pub fn SuperMetaObject(self: QBarSet) QMetaObject {
        return .{ .ptr = qtc.QBarSet_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QBarSet, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBarSet_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QBarSet, callback: *const fn (QBarSet, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QBarSet_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QBarSet, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBarSet_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QBarSet, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBarSet_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QBarSet, callback: *const fn (QBarSet, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QBarSet_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QBarSet, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBarSet_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarset.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` label: []const u8 `
    ///
    pub fn SetLabel(self: QBarSet, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QBarSet_SetLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: QBarSet, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBarSet_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarset.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` value: f64 `
    ///
    pub fn Append(self: QBarSet, value: f64) void {
        qtc.QBarSet_Append(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` values: []f64 `
    ///
    pub fn Append2(self: QBarSet, values: []f64) void {
        const values_list = qtc.libqt_list{
            .len = values.len,
            .data = values.ptr,
        };
        qtc.QBarSet_Append2(@ptrCast(self.ptr), values_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` value: *const f64 `
    ///
    pub fn OperatorShiftLeft(self: QBarSet, value: *const f64) QBarSet {
        return .{ .ptr = qtc.QBarSet_OperatorShiftLeft(@ptrCast(self.ptr), @ptrCast(value)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    /// ` value: f64 `
    ///
    pub fn Insert(self: QBarSet, index: i32, value: f64) void {
        qtc.QBarSet_Insert(@ptrCast(self.ptr), @bitCast(index), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn Remove(self: QBarSet, index: i32) void {
        qtc.QBarSet_Remove(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    /// ` value: f64 `
    ///
    pub fn Replace(self: QBarSet, index: i32, value: f64) void {
        qtc.QBarSet_Replace(@ptrCast(self.ptr), @bitCast(index), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn At(self: QBarSet, index: i32) f64 {
        return qtc.QBarSet_At(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn OperatorSubscript(self: QBarSet, index: i32) f64 {
        return qtc.QBarSet_OperatorSubscript(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn Count(self: QBarSet) i32 {
        return qtc.QBarSet_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#sum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn Sum(self: QBarSet) f64 {
        return qtc.QBarSet_Sum(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetPen(self: QBarSet, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QBarSet_SetPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn Pen(self: QBarSet) QPen {
        return .{ .ptr = qtc.QBarSet_Pen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBrush(self: QBarSet, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QBarSet_SetBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn Brush(self: QBarSet) QBrush {
        return .{ .ptr = qtc.QBarSet_Brush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabelBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetLabelBrush(self: QBarSet, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QBarSet_SetLabelBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn LabelBrush(self: QBarSet) QBrush {
        return .{ .ptr = qtc.QBarSet_LabelBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabelFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` font: QFont `
    ///
    pub fn SetLabelFont(self: QBarSet, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QBarSet_SetLabelFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn LabelFont(self: QBarSet) QFont {
        return .{ .ptr = qtc.QBarSet_LabelFont(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn Color(self: QBarSet) QColor {
        return .{ .ptr = qtc.QBarSet_Color(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColor(self: QBarSet, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QBarSet_SetColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#borderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn BorderColor(self: QBarSet) QColor {
        return .{ .ptr = qtc.QBarSet_BorderColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` color: QColor `
    ///
    pub fn SetBorderColor(self: QBarSet, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QBarSet_SetBorderColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn LabelColor(self: QBarSet) QColor {
        return .{ .ptr = qtc.QBarSet_LabelColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabelColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` color: QColor `
    ///
    pub fn SetLabelColor(self: QBarSet, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QBarSet_SetLabelColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn SelectedColor(self: QBarSet) QColor {
        return .{ .ptr = qtc.QBarSet_SelectedColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setSelectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` color: QColor `
    ///
    pub fn SetSelectedColor(self: QBarSet, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QBarSet_SetSelectedColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#isBarSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn IsBarSelected(self: QBarSet, index: i32) bool {
        return qtc.QBarSet_IsBarSelected(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn SelectBar(self: QBarSet, index: i32) void {
        qtc.QBarSet_SelectBar(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#deselectBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn DeselectBar(self: QBarSet, index: i32) void {
        qtc.QBarSet_DeselectBar(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setBarSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    /// ` selected: bool `
    ///
    pub fn SetBarSelected(self: QBarSet, index: i32, selected: bool) void {
        qtc.QBarSet_SetBarSelected(@ptrCast(self.ptr), @bitCast(index), selected);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectAllBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn SelectAllBars(self: QBarSet) void {
        qtc.QBarSet_SelectAllBars(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#deselectAllBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn DeselectAllBars(self: QBarSet) void {
        qtc.QBarSet_DeselectAllBars(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn SelectBars(self: QBarSet, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QBarSet_SelectBars(@ptrCast(self.ptr), indexes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#deselectBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn DeselectBars(self: QBarSet, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QBarSet_DeselectBars(@ptrCast(self.ptr), indexes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#toggleSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn ToggleSelection(self: QBarSet, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QBarSet_ToggleSelection(@ptrCast(self.ptr), indexes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedBars(self: QBarSet, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QBarSet_SelectedBars(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qbarset.SelectedBars: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn Clicked(self: QBarSet, index: i32) void {
        qtc.QBarSet_Clicked(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, index: i32) callconv(.c) void `
    ///
    pub fn OnClicked(self: QBarSet, callback: *const fn (QBarSet, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` status: bool `
    ///
    /// ` index: i32 `
    ///
    pub fn Hovered(self: QBarSet, status: bool, index: i32) void {
        qtc.QBarSet_Hovered(@ptrCast(self.ptr), status, @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, status: bool, index: i32) callconv(.c) void `
    ///
    pub fn OnHovered(self: QBarSet, callback: *const fn (QBarSet, bool, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn Pressed(self: QBarSet, index: i32) void {
        qtc.QBarSet_Pressed(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, index: i32) callconv(.c) void `
    ///
    pub fn OnPressed(self: QBarSet, callback: *const fn (QBarSet, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn Released(self: QBarSet, index: i32) void {
        qtc.QBarSet_Released(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, index: i32) callconv(.c) void `
    ///
    pub fn OnReleased(self: QBarSet, callback: *const fn (QBarSet, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn DoubleClicked(self: QBarSet, index: i32) void {
        qtc.QBarSet_DoubleClicked(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, index: i32) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: QBarSet, callback: *const fn (QBarSet, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn PenChanged(self: QBarSet) void {
        qtc.QBarSet_PenChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet) callconv(.c) void `
    ///
    pub fn OnPenChanged(self: QBarSet, callback: *const fn (QBarSet) callconv(.c) void) void {
        qtc.QBarSet_Connect_PenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#brushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn BrushChanged(self: QBarSet) void {
        qtc.QBarSet_BrushChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#brushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet) callconv(.c) void `
    ///
    pub fn OnBrushChanged(self: QBarSet, callback: *const fn (QBarSet) callconv(.c) void) void {
        qtc.QBarSet_Connect_BrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn LabelChanged(self: QBarSet) void {
        qtc.QBarSet_LabelChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet) callconv(.c) void `
    ///
    pub fn OnLabelChanged(self: QBarSet, callback: *const fn (QBarSet) callconv(.c) void) void {
        qtc.QBarSet_Connect_LabelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn LabelBrushChanged(self: QBarSet) void {
        qtc.QBarSet_LabelBrushChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet) callconv(.c) void `
    ///
    pub fn OnLabelBrushChanged(self: QBarSet, callback: *const fn (QBarSet) callconv(.c) void) void {
        qtc.QBarSet_Connect_LabelBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn LabelFontChanged(self: QBarSet) void {
        qtc.QBarSet_LabelFontChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet) callconv(.c) void `
    ///
    pub fn OnLabelFontChanged(self: QBarSet, callback: *const fn (QBarSet) callconv(.c) void) void {
        qtc.QBarSet_Connect_LabelFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` color: QColor `
    ///
    pub fn ColorChanged(self: QBarSet, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QBarSet_ColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, color: QColor) callconv(.c) void `
    ///
    pub fn OnColorChanged(self: QBarSet, callback: *const fn (QBarSet, QColor) callconv(.c) void) void {
        qtc.QBarSet_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#borderColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` color: QColor `
    ///
    pub fn BorderColorChanged(self: QBarSet, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QBarSet_BorderColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#borderColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, color: QColor) callconv(.c) void `
    ///
    pub fn OnBorderColorChanged(self: QBarSet, callback: *const fn (QBarSet, QColor) callconv(.c) void) void {
        qtc.QBarSet_Connect_BorderColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` color: QColor `
    ///
    pub fn LabelColorChanged(self: QBarSet, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QBarSet_LabelColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, color: QColor) callconv(.c) void `
    ///
    pub fn OnLabelColorChanged(self: QBarSet, callback: *const fn (QBarSet, QColor) callconv(.c) void) void {
        qtc.QBarSet_Connect_LabelColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` color: QColor `
    ///
    pub fn SelectedColorChanged(self: QBarSet, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QBarSet_SelectedColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, color: QColor) callconv(.c) void `
    ///
    pub fn OnSelectedColorChanged(self: QBarSet, callback: *const fn (QBarSet, QColor) callconv(.c) void) void {
        qtc.QBarSet_Connect_SelectedColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn ValuesAdded(self: QBarSet, index: i32, count: i32) void {
        qtc.QBarSet_ValuesAdded(@ptrCast(self.ptr), @bitCast(index), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, index: i32, count: i32) callconv(.c) void `
    ///
    pub fn OnValuesAdded(self: QBarSet, callback: *const fn (QBarSet, i32, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_ValuesAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn ValuesRemoved(self: QBarSet, index: i32, count: i32) void {
        qtc.QBarSet_ValuesRemoved(@ptrCast(self.ptr), @bitCast(index), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, index: i32, count: i32) callconv(.c) void `
    ///
    pub fn OnValuesRemoved(self: QBarSet, callback: *const fn (QBarSet, i32, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_ValuesRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn ValueChanged(self: QBarSet, index: i32) void {
        qtc.QBarSet_ValueChanged(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, index: i32) callconv(.c) void `
    ///
    pub fn OnValueChanged(self: QBarSet, callback: *const fn (QBarSet, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_ValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedBarsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn SelectedBarsChanged(self: QBarSet, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QBarSet_SelectedBarsChanged(@ptrCast(self.ptr), indexes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedBarsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, indexes: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn OnSelectedBarsChanged(self: QBarSet, callback: *const fn (QBarSet, qtc.libqt_list) callconv(.c) void) void {
        qtc.QBarSet_Connect_SelectedBarsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarset.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarset.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn Remove2(self: QBarSet, index: i32, count: i32) void {
        qtc.QBarSet_Remove2(@ptrCast(self.ptr), @bitCast(index), @bitCast(count));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QBarSet, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarset.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QBarSet, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn IsWidgetType(self: QBarSet) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn IsWindowType(self: QBarSet) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn IsQuickItemType(self: QBarSet) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn SignalsBlocked(self: QBarSet) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QBarSet, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn Thread(self: QBarSet) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QBarSet, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QBarSet, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QBarSet, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QBarSet, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QBarSet, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QBarSet, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qbarset.Children: Memory allocation failed");
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
    /// ` self: QBarSet `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QBarSet, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QBarSet, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QBarSet, obj: anytype) void {
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
    /// ` self: QBarSet `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QBarSet, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QBarSet `
    ///
    pub fn Disconnect3(self: QBarSet) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QBarSet, receiver: anytype) bool {
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
    /// ` self: QBarSet `
    ///
    pub fn DumpObjectTree(self: QBarSet) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn DumpObjectInfo(self: QBarSet) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QBarSet, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QBarSet `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QBarSet, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QBarSet, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qbarset.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qbarset.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QBarSet `
    ///
    pub fn BindingStorage(self: QBarSet) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn BindingStorage2(self: QBarSet) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn Destroyed(self: QBarSet) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QBarSet, callback: *const fn (QBarSet) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn Parent(self: QBarSet) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QBarSet, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn DeleteLater(self: QBarSet) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QBarSet, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QBarSet, time: i64, timerType: i32) i32 {
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
    /// ` self: QBarSet `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QBarSet, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QBarSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QBarSet, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QBarSet, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QBarSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QBarSet, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBarSet `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QBarSet, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBarSet `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QBarSet, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QBarSet, callback: *const fn (QBarSet, QObject) callconv(.c) void) void {
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
    /// ` self: QBarSet `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QBarSet, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBarSet_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBarSet `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QBarSet, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBarSet_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet`
    ///
    /// ` callback: *const fn (self: QBarSet, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QBarSet, callback: *const fn (QBarSet, QEvent) callconv(.c) bool) void {
        qtc.QBarSet_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QBarSet, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBarSet_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBarSet `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QBarSet, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBarSet_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet`
    ///
    /// ` callback: *const fn (self: QBarSet, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QBarSet, callback: *const fn (QBarSet, QObject, QEvent) callconv(.c) bool) void {
        qtc.QBarSet_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QBarSet, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QBarSet_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBarSet `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QBarSet, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QBarSet_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet`
    ///
    /// ` callback: *const fn (self: QBarSet, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QBarSet, callback: *const fn (QBarSet, QTimerEvent) callconv(.c) void) void {
        qtc.QBarSet_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QBarSet, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QBarSet_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBarSet `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QBarSet, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QBarSet_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet`
    ///
    /// ` callback: *const fn (self: QBarSet, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QBarSet, callback: *const fn (QBarSet, QChildEvent) callconv(.c) void) void {
        qtc.QBarSet_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QBarSet, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QBarSet_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBarSet `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QBarSet, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QBarSet_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet`
    ///
    /// ` callback: *const fn (self: QBarSet, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QBarSet, callback: *const fn (QBarSet, QEvent) callconv(.c) void) void {
        qtc.QBarSet_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QBarSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarSet_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QBarSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarSet_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet`
    ///
    /// ` callback: *const fn (self: QBarSet, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QBarSet, callback: *const fn (QBarSet, QMetaMethod) callconv(.c) void) void {
        qtc.QBarSet_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QBarSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarSet_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QBarSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarSet_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet`
    ///
    /// ` callback: *const fn (self: QBarSet, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QBarSet, callback: *const fn (QBarSet, QMetaMethod) callconv(.c) void) void {
        qtc.QBarSet_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn Sender(self: QBarSet) QObject {
        return .{ .ptr = qtc.QBarSet_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QBarSet `
    ///
    pub fn SuperSender(self: QBarSet) QObject {
        return .{ .ptr = qtc.QBarSet_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QBarSet, callback: *const fn () callconv(.c) QObject) void {
        qtc.QBarSet_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn SenderSignalIndex(self: QBarSet) i32 {
        return qtc.QBarSet_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBarSet `
    ///
    pub fn SuperSenderSignalIndex(self: QBarSet) i32 {
        return qtc.QBarSet_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QBarSet, callback: *const fn () callconv(.c) i32) void {
        qtc.QBarSet_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QBarSet, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBarSet_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBarSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QBarSet, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBarSet_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet`
    ///
    /// ` callback: *const fn (self: QBarSet, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QBarSet, callback: *const fn (QBarSet, [*:0]const u8) callconv(.c) i32) void {
        qtc.QBarSet_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QBarSet, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBarSet_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QBarSet, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBarSet_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet`
    ///
    /// ` callback: *const fn (self: QBarSet, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QBarSet, callback: *const fn (QBarSet, QMetaMethod) callconv(.c) bool) void {
        qtc.QBarSet_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QBarSet, callback: *const fn (QBarSet, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#dtor.QBarSet)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QBarSet `
    ///
    pub fn Delete(self: QBarSet) void {
        qtc.QBarSet_Delete(@ptrCast(self.ptr));
    }
};
