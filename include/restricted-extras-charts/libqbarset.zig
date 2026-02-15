const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html)
pub const qbarset = struct {
    /// New constructs a new QBarSet object.
    ///
    /// ## Parameter(s):
    ///
    /// ` label: []const u8 `
    ///
    pub fn New(label: []const u8) QtC.QBarSet {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };

        return qtc.QBarSet_new(label_str);
    }

    /// New2 constructs a new QBarSet object.
    ///
    /// ## Parameter(s):
    ///
    /// ` label: []const u8 `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(label: []const u8, parent: ?*anyopaque) QtC.QBarSet {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };

        return qtc.QBarSet_new2(label_str, @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QBarSet_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QBarSet_OnMetaObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn QBaseMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QBarSet_QBaseMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBarSet_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QBarSet_OnMetacast(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn QBaseMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBarSet_QBaseMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBarSet_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QBarSet_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBarSet_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QBarSet `
    ///
    /// ` label: []const u8 `
    ///
    pub fn SetLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QBarSet_SetLabel(@ptrCast(self), label_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBarSet_Label(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarset.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` value: f64 `
    ///
    pub fn Append(self: ?*anyopaque, value: f64) void {
        qtc.QBarSet_Append(@ptrCast(self), @floatCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` values: []f64 `
    ///
    pub fn Append2(self: ?*anyopaque, values: []f64) void {
        const values_list = qtc.libqt_list{
            .len = values.len,
            .data = values.ptr,
        };
        qtc.QBarSet_Append2(@ptrCast(self), values_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` value: *const f64 `
    ///
    pub fn OperatorShiftLeft(self: ?*anyopaque, value: *const f64) QtC.QBarSet {
        return qtc.QBarSet_OperatorShiftLeft(@ptrCast(self), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` index: i32 `
    ///
    /// ` value: f64 `
    ///
    pub fn Insert(self: ?*anyopaque, index: i32, value: f64) void {
        qtc.QBarSet_Insert(@ptrCast(self), @intCast(index), @floatCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn Remove(self: ?*anyopaque, index: i32) void {
        qtc.QBarSet_Remove(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` index: i32 `
    ///
    /// ` value: f64 `
    ///
    pub fn Replace(self: ?*anyopaque, index: i32, value: f64) void {
        qtc.QBarSet_Replace(@ptrCast(self), @intCast(index), @floatCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn At(self: ?*anyopaque, index: i32) f64 {
        return qtc.QBarSet_At(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn OperatorSubscript(self: ?*anyopaque, index: i32) f64 {
        return qtc.QBarSet_OperatorSubscript(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QBarSet_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#sum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn Sum(self: ?*anyopaque) f64 {
        return qtc.QBarSet_Sum(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QBarSet_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn Pen(self: ?*anyopaque) QtC.QPen {
        return qtc.QBarSet_Pen(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QBarSet_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn Brush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QBarSet_Brush(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabelBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetLabelBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QBarSet_SetLabelBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn LabelBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QBarSet_LabelBrush(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabelFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn SetLabelFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QBarSet_SetLabelFont(@ptrCast(self), @ptrCast(font));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn LabelFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QBarSet_LabelFont(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn Color(self: ?*anyopaque) QtC.QColor {
        return qtc.QBarSet_Color(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QBarSet_SetColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#borderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn BorderColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QBarSet_BorderColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetBorderColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QBarSet_SetBorderColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn LabelColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QBarSet_LabelColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabelColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetLabelColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QBarSet_SetLabelColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn SelectedColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QBarSet_SelectedColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setSelectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetSelectedColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QBarSet_SetSelectedColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#isBarSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn IsBarSelected(self: ?*anyopaque, index: i32) bool {
        return qtc.QBarSet_IsBarSelected(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn SelectBar(self: ?*anyopaque, index: i32) void {
        qtc.QBarSet_SelectBar(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#deselectBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn DeselectBar(self: ?*anyopaque, index: i32) void {
        qtc.QBarSet_DeselectBar(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setBarSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` index: i32 `
    ///
    /// ` selected: bool `
    ///
    pub fn SetBarSelected(self: ?*anyopaque, index: i32, selected: bool) void {
        qtc.QBarSet_SetBarSelected(@ptrCast(self), @intCast(index), selected);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectAllBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn SelectAllBars(self: ?*anyopaque) void {
        qtc.QBarSet_SelectAllBars(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#deselectAllBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn DeselectAllBars(self: ?*anyopaque) void {
        qtc.QBarSet_DeselectAllBars(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn SelectBars(self: ?*anyopaque, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QBarSet_SelectBars(@ptrCast(self), indexes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#deselectBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn DeselectBars(self: ?*anyopaque, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QBarSet_DeselectBars(@ptrCast(self), indexes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#toggleSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn ToggleSelection(self: ?*anyopaque, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QBarSet_ToggleSelection(@ptrCast(self), indexes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedBars(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QBarSet_SelectedBars(@ptrCast(self));
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
    /// ` self: QtC.QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn Clicked(self: ?*anyopaque, index: i32) void {
        qtc.QBarSet_Clicked(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, index: i32) callconv(.c) void `
    ///
    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` status: bool `
    ///
    /// ` index: i32 `
    ///
    pub fn Hovered(self: ?*anyopaque, status: bool, index: i32) void {
        qtc.QBarSet_Hovered(@ptrCast(self), status, @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, status: bool, index: i32) callconv(.c) void `
    ///
    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn Pressed(self: ?*anyopaque, index: i32) void {
        qtc.QBarSet_Pressed(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, index: i32) callconv(.c) void `
    ///
    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_Pressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn Released(self: ?*anyopaque, index: i32) void {
        qtc.QBarSet_Released(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, index: i32) callconv(.c) void `
    ///
    pub fn OnReleased(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_Released(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn DoubleClicked(self: ?*anyopaque, index: i32) void {
        qtc.QBarSet_DoubleClicked(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, index: i32) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_DoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn PenChanged(self: ?*anyopaque) void {
        qtc.QBarSet_PenChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet) callconv(.c) void `
    ///
    pub fn OnPenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBarSet_Connect_PenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#brushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn BrushChanged(self: ?*anyopaque) void {
        qtc.QBarSet_BrushChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#brushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet) callconv(.c) void `
    ///
    pub fn OnBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBarSet_Connect_BrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn LabelChanged(self: ?*anyopaque) void {
        qtc.QBarSet_LabelChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet) callconv(.c) void `
    ///
    pub fn OnLabelChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBarSet_Connect_LabelChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn LabelBrushChanged(self: ?*anyopaque) void {
        qtc.QBarSet_LabelBrushChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet) callconv(.c) void `
    ///
    pub fn OnLabelBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBarSet_Connect_LabelBrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn LabelFontChanged(self: ?*anyopaque) void {
        qtc.QBarSet_LabelFontChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet) callconv(.c) void `
    ///
    pub fn OnLabelFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBarSet_Connect_LabelFontChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn ColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QBarSet_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, color: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QBarSet_Connect_ColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#borderColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn BorderColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QBarSet_BorderColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#borderColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, color: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnBorderColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QBarSet_Connect_BorderColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn LabelColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QBarSet_LabelColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, color: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnLabelColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QBarSet_Connect_LabelColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SelectedColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QBarSet_SelectedColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, color: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnSelectedColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBarSet_Connect_SelectedColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` index: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn ValuesAdded(self: ?*anyopaque, index: i32, count: i32) void {
        qtc.QBarSet_ValuesAdded(@ptrCast(self), @intCast(index), @intCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, index: i32, count: i32) callconv(.c) void `
    ///
    pub fn OnValuesAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_ValuesAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` index: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn ValuesRemoved(self: ?*anyopaque, index: i32, count: i32) void {
        qtc.QBarSet_ValuesRemoved(@ptrCast(self), @intCast(index), @intCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, index: i32, count: i32) callconv(.c) void `
    ///
    pub fn OnValuesRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_ValuesRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn ValueChanged(self: ?*anyopaque, index: i32) void {
        qtc.QBarSet_ValueChanged(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, index: i32) callconv(.c) void `
    ///
    pub fn OnValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_ValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedBarsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn SelectedBarsChanged(self: ?*anyopaque, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QBarSet_SelectedBarsChanged(@ptrCast(self), indexes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedBarsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, indexes: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn OnSelectedBarsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QBarSet_Connect_SelectedBarsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarset.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` index: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn Remove2(self: ?*anyopaque, index: i32, count: i32) void {
        qtc.QBarSet_Remove2(@ptrCast(self), @intCast(index), @intCast(count));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QBarSet `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qbarset.Children: Memory allocation failed");
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
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
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
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
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
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
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
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet) callconv(.c) void `
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
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @intCast(time), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @intCast(param5));
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
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
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
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QBarSet_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QBarSet_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet`
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QBarSet_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QBarSet_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QBarSet_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet`
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QBarSet_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QBarSet_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QBarSet_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet`
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBarSet_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QBarSet_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QBarSet_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet`
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBarSet_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QBarSet_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QBarSet_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet`
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBarSet_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QBarSet_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QBarSet_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet`
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBarSet_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QBarSet_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QBarSet_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet`
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBarSet_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QBarSet_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QBarSet_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QBarSet_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QBarSet_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QBarSet_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QBarSet_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBarSet_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBarSet_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet`
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QBarSet_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QBarSet_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QBarSet_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet`
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QBarSet_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBarSet `
    ///
    /// ` callback: *const fn (self: QtC.QBarSet, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#dtor.QBarSet)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QBarSet `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBarSet_Delete(@ptrCast(self));
    }
};
