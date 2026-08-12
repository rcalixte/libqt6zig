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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBarSet object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _label: []const u8 `
    ///
    pub fn new(_label: []const u8) QBarSet {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        return .{ .ptr = qtc.QBarSet_new(label_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBarSet object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _label: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_label: []const u8, _parent: anytype) QBarSet {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QBarSet_new2(label_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn metaObject(self: QBarSet) QMetaObject {
        return .{ .ptr = qtc.QBarSet_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: QBarSet, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QBarSet_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn superMetaObject(self: QBarSet) QMetaObject {
        return .{ .ptr = qtc.QBarSet_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QBarSet, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBarSet_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QBarSet, callback: *const fn (QBarSet, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QBarSet_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QBarSet, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBarSet_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QBarSet, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBarSet_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QBarSet, callback: *const fn (QBarSet, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QBarSet_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QBarSet, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBarSet_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarSet.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLabel` instead
    ///
    pub const SetLabel = setLabel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` _label: []const u8 `
    ///
    pub fn setLabel(self: QBarSet, _label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        qtc.QBarSet_SetLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### DEPRECATED: Use `label` instead
    ///
    pub const Label = label;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn label(self: QBarSet, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBarSet_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarSet.label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` value: f64 `
    ///
    pub fn append(self: QBarSet, value: f64) void {
        qtc.QBarSet_Append(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `append2` instead
    ///
    pub const Append2 = append2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` values: []f64 `
    ///
    pub fn append2(self: QBarSet, values: []f64) void {
        const values_list = qtc.libqt_list{
            .len = values.len,
            .data = values.ptr,
        };
        qtc.QBarSet_Append2(@ptrCast(self.ptr), values_list);
    }

    /// ### DEPRECATED: Use `operatorShiftLeft` instead
    ///
    pub const OperatorShiftLeft = operatorShiftLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` value: *const f64 `
    ///
    pub fn operatorShiftLeft(self: QBarSet, value: *const f64) QBarSet {
        return .{ .ptr = qtc.QBarSet_OperatorShiftLeft(@ptrCast(self.ptr), @ptrCast(value)) };
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

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
    pub fn insert(self: QBarSet, index: i32, value: f64) void {
        qtc.QBarSet_Insert(@ptrCast(self.ptr), @bitCast(index), @bitCast(value));
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn remove(self: QBarSet, index: i32) void {
        qtc.QBarSet_Remove(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `replace` instead
    ///
    pub const Replace = replace;

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
    pub fn replace(self: QBarSet, index: i32, value: f64) void {
        qtc.QBarSet_Replace(@ptrCast(self.ptr), @bitCast(index), @bitCast(value));
    }

    /// ### DEPRECATED: Use `at` instead
    ///
    pub const At = at;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn at(self: QBarSet, index: i32) f64 {
        return qtc.QBarSet_At(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn operatorSubscript(self: QBarSet, index: i32) f64 {
        return qtc.QBarSet_OperatorSubscript(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn count(self: QBarSet) i32 {
        return qtc.QBarSet_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sum` instead
    ///
    pub const Sum = sum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#sum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn sum(self: QBarSet) f64 {
        return qtc.QBarSet_Sum(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPen` instead
    ///
    pub const SetPen = setPen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` _pen: QPen `
    ///
    pub fn setPen(self: QBarSet, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QBarSet_SetPen(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `pen` instead
    ///
    pub const Pen = pen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn pen(self: QBarSet) QPen {
        return .{ .ptr = qtc.QBarSet_Pen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBrush` instead
    ///
    pub const SetBrush = setBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn setBrush(self: QBarSet, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QBarSet_SetBrush(@ptrCast(self.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `brush` instead
    ///
    pub const Brush = brush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn brush(self: QBarSet) QBrush {
        return .{ .ptr = qtc.QBarSet_Brush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLabelBrush` instead
    ///
    pub const SetLabelBrush = setLabelBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabelBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn setLabelBrush(self: QBarSet, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QBarSet_SetLabelBrush(@ptrCast(self.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `labelBrush` instead
    ///
    pub const LabelBrush = labelBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn labelBrush(self: QBarSet) QBrush {
        return .{ .ptr = qtc.QBarSet_LabelBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLabelFont` instead
    ///
    pub const SetLabelFont = setLabelFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabelFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` font: QFont `
    ///
    pub fn setLabelFont(self: QBarSet, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QBarSet_SetLabelFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `labelFont` instead
    ///
    pub const LabelFont = labelFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn labelFont(self: QBarSet) QFont {
        return .{ .ptr = qtc.QBarSet_LabelFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn color(self: QBarSet) QColor {
        return .{ .ptr = qtc.QBarSet_Color(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor(self: QBarSet, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QBarSet_SetColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `borderColor` instead
    ///
    pub const BorderColor = borderColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#borderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn borderColor(self: QBarSet) QColor {
        return .{ .ptr = qtc.QBarSet_BorderColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBorderColor` instead
    ///
    pub const SetBorderColor = setBorderColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` _color: QColor `
    ///
    pub fn setBorderColor(self: QBarSet, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QBarSet_SetBorderColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `labelColor` instead
    ///
    pub const LabelColor = labelColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn labelColor(self: QBarSet) QColor {
        return .{ .ptr = qtc.QBarSet_LabelColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLabelColor` instead
    ///
    pub const SetLabelColor = setLabelColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabelColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` _color: QColor `
    ///
    pub fn setLabelColor(self: QBarSet, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QBarSet_SetLabelColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `selectedColor` instead
    ///
    pub const SelectedColor = selectedColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn selectedColor(self: QBarSet) QColor {
        return .{ .ptr = qtc.QBarSet_SelectedColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSelectedColor` instead
    ///
    pub const SetSelectedColor = setSelectedColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setSelectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` _color: QColor `
    ///
    pub fn setSelectedColor(self: QBarSet, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QBarSet_SetSelectedColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `isBarSelected` instead
    ///
    pub const IsBarSelected = isBarSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#isBarSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn isBarSelected(self: QBarSet, index: i32) bool {
        return qtc.QBarSet_IsBarSelected(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `selectBar` instead
    ///
    pub const SelectBar = selectBar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn selectBar(self: QBarSet, index: i32) void {
        qtc.QBarSet_SelectBar(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `deselectBar` instead
    ///
    pub const DeselectBar = deselectBar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#deselectBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn deselectBar(self: QBarSet, index: i32) void {
        qtc.QBarSet_DeselectBar(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setBarSelected` instead
    ///
    pub const SetBarSelected = setBarSelected;

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
    pub fn setBarSelected(self: QBarSet, index: i32, selected: bool) void {
        qtc.QBarSet_SetBarSelected(@ptrCast(self.ptr), @bitCast(index), selected);
    }

    /// ### DEPRECATED: Use `selectAllBars` instead
    ///
    pub const SelectAllBars = selectAllBars;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectAllBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn selectAllBars(self: QBarSet) void {
        qtc.QBarSet_SelectAllBars(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `deselectAllBars` instead
    ///
    pub const DeselectAllBars = deselectAllBars;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#deselectAllBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn deselectAllBars(self: QBarSet) void {
        qtc.QBarSet_DeselectAllBars(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectBars` instead
    ///
    pub const SelectBars = selectBars;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn selectBars(self: QBarSet, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QBarSet_SelectBars(@ptrCast(self.ptr), indexes_list);
    }

    /// ### DEPRECATED: Use `deselectBars` instead
    ///
    pub const DeselectBars = deselectBars;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#deselectBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn deselectBars(self: QBarSet, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QBarSet_DeselectBars(@ptrCast(self.ptr), indexes_list);
    }

    /// ### DEPRECATED: Use `toggleSelection` instead
    ///
    pub const ToggleSelection = toggleSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#toggleSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn toggleSelection(self: QBarSet, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QBarSet_ToggleSelection(@ptrCast(self.ptr), indexes_list);
    }

    /// ### DEPRECATED: Use `selectedBars` instead
    ///
    pub const SelectedBars = selectedBars;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectedBars(self: QBarSet, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QBarSet_SelectedBars(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QBarSet.selectedBars: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `clicked` instead
    ///
    pub const Clicked = clicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn clicked(self: QBarSet, index: i32) void {
        qtc.QBarSet_Clicked(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onClicked` instead
    ///
    pub const OnClicked = onClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, index: i32) callconv(.c) void `
    ///
    pub fn onClicked(self: QBarSet, callback: *const fn (QBarSet, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hovered` instead
    ///
    pub const Hovered = hovered;

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
    pub fn hovered(self: QBarSet, status: bool, index: i32) void {
        qtc.QBarSet_Hovered(@ptrCast(self.ptr), status, @bitCast(index));
    }

    /// ### DEPRECATED: Use `onHovered` instead
    ///
    pub const OnHovered = onHovered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, status: bool, index: i32) callconv(.c) void `
    ///
    pub fn onHovered(self: QBarSet, callback: *const fn (QBarSet, bool, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pressed` instead
    ///
    pub const Pressed = pressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn pressed(self: QBarSet, index: i32) void {
        qtc.QBarSet_Pressed(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onPressed` instead
    ///
    pub const OnPressed = onPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, index: i32) callconv(.c) void `
    ///
    pub fn onPressed(self: QBarSet, callback: *const fn (QBarSet, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `released` instead
    ///
    pub const Released = released;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn released(self: QBarSet, index: i32) void {
        qtc.QBarSet_Released(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onReleased` instead
    ///
    pub const OnReleased = onReleased;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, index: i32) callconv(.c) void `
    ///
    pub fn onReleased(self: QBarSet, callback: *const fn (QBarSet, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doubleClicked` instead
    ///
    pub const DoubleClicked = doubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn doubleClicked(self: QBarSet, index: i32) void {
        qtc.QBarSet_DoubleClicked(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onDoubleClicked` instead
    ///
    pub const OnDoubleClicked = onDoubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, index: i32) callconv(.c) void `
    ///
    pub fn onDoubleClicked(self: QBarSet, callback: *const fn (QBarSet, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `penChanged` instead
    ///
    pub const PenChanged = penChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn penChanged(self: QBarSet) void {
        qtc.QBarSet_PenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPenChanged` instead
    ///
    pub const OnPenChanged = onPenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet) callconv(.c) void `
    ///
    pub fn onPenChanged(self: QBarSet, callback: *const fn (QBarSet) callconv(.c) void) void {
        qtc.QBarSet_Connect_PenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `brushChanged` instead
    ///
    pub const BrushChanged = brushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#brushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn brushChanged(self: QBarSet) void {
        qtc.QBarSet_BrushChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBrushChanged` instead
    ///
    pub const OnBrushChanged = onBrushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#brushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet) callconv(.c) void `
    ///
    pub fn onBrushChanged(self: QBarSet, callback: *const fn (QBarSet) callconv(.c) void) void {
        qtc.QBarSet_Connect_BrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelChanged` instead
    ///
    pub const LabelChanged = labelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn labelChanged(self: QBarSet) void {
        qtc.QBarSet_LabelChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLabelChanged` instead
    ///
    pub const OnLabelChanged = onLabelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet) callconv(.c) void `
    ///
    pub fn onLabelChanged(self: QBarSet, callback: *const fn (QBarSet) callconv(.c) void) void {
        qtc.QBarSet_Connect_LabelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelBrushChanged` instead
    ///
    pub const LabelBrushChanged = labelBrushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn labelBrushChanged(self: QBarSet) void {
        qtc.QBarSet_LabelBrushChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLabelBrushChanged` instead
    ///
    pub const OnLabelBrushChanged = onLabelBrushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet) callconv(.c) void `
    ///
    pub fn onLabelBrushChanged(self: QBarSet, callback: *const fn (QBarSet) callconv(.c) void) void {
        qtc.QBarSet_Connect_LabelBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelFontChanged` instead
    ///
    pub const LabelFontChanged = labelFontChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    pub fn labelFontChanged(self: QBarSet) void {
        qtc.QBarSet_LabelFontChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLabelFontChanged` instead
    ///
    pub const OnLabelFontChanged = onLabelFontChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet) callconv(.c) void `
    ///
    pub fn onLabelFontChanged(self: QBarSet, callback: *const fn (QBarSet) callconv(.c) void) void {
        qtc.QBarSet_Connect_LabelFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorChanged` instead
    ///
    pub const ColorChanged = colorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` _color: QColor `
    ///
    pub fn colorChanged(self: QBarSet, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QBarSet_ColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onColorChanged` instead
    ///
    pub const OnColorChanged = onColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, color: QColor) callconv(.c) void `
    ///
    pub fn onColorChanged(self: QBarSet, callback: *const fn (QBarSet, QColor) callconv(.c) void) void {
        qtc.QBarSet_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `borderColorChanged` instead
    ///
    pub const BorderColorChanged = borderColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#borderColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` _color: QColor `
    ///
    pub fn borderColorChanged(self: QBarSet, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QBarSet_BorderColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onBorderColorChanged` instead
    ///
    pub const OnBorderColorChanged = onBorderColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#borderColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, color: QColor) callconv(.c) void `
    ///
    pub fn onBorderColorChanged(self: QBarSet, callback: *const fn (QBarSet, QColor) callconv(.c) void) void {
        qtc.QBarSet_Connect_BorderColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelColorChanged` instead
    ///
    pub const LabelColorChanged = labelColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` _color: QColor `
    ///
    pub fn labelColorChanged(self: QBarSet, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QBarSet_LabelColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onLabelColorChanged` instead
    ///
    pub const OnLabelColorChanged = onLabelColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, color: QColor) callconv(.c) void `
    ///
    pub fn onLabelColorChanged(self: QBarSet, callback: *const fn (QBarSet, QColor) callconv(.c) void) void {
        qtc.QBarSet_Connect_LabelColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedColorChanged` instead
    ///
    pub const SelectedColorChanged = selectedColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` _color: QColor `
    ///
    pub fn selectedColorChanged(self: QBarSet, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QBarSet_SelectedColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onSelectedColorChanged` instead
    ///
    pub const OnSelectedColorChanged = onSelectedColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, color: QColor) callconv(.c) void `
    ///
    pub fn onSelectedColorChanged(self: QBarSet, callback: *const fn (QBarSet, QColor) callconv(.c) void) void {
        qtc.QBarSet_Connect_SelectedColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `valuesAdded` instead
    ///
    pub const ValuesAdded = valuesAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    /// ` _count: i32 `
    ///
    pub fn valuesAdded(self: QBarSet, index: i32, _count: i32) void {
        qtc.QBarSet_ValuesAdded(@ptrCast(self.ptr), @bitCast(index), @bitCast(_count));
    }

    /// ### DEPRECATED: Use `onValuesAdded` instead
    ///
    pub const OnValuesAdded = onValuesAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, index: i32, count: i32) callconv(.c) void `
    ///
    pub fn onValuesAdded(self: QBarSet, callback: *const fn (QBarSet, i32, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_ValuesAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `valuesRemoved` instead
    ///
    pub const ValuesRemoved = valuesRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    /// ` _count: i32 `
    ///
    pub fn valuesRemoved(self: QBarSet, index: i32, _count: i32) void {
        qtc.QBarSet_ValuesRemoved(@ptrCast(self.ptr), @bitCast(index), @bitCast(_count));
    }

    /// ### DEPRECATED: Use `onValuesRemoved` instead
    ///
    pub const OnValuesRemoved = onValuesRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, index: i32, count: i32) callconv(.c) void `
    ///
    pub fn onValuesRemoved(self: QBarSet, callback: *const fn (QBarSet, i32, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_ValuesRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `valueChanged` instead
    ///
    pub const ValueChanged = valueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    pub fn valueChanged(self: QBarSet, index: i32) void {
        qtc.QBarSet_ValueChanged(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onValueChanged` instead
    ///
    pub const OnValueChanged = onValueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, index: i32) callconv(.c) void `
    ///
    pub fn onValueChanged(self: QBarSet, callback: *const fn (QBarSet, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_ValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedBarsChanged` instead
    ///
    pub const SelectedBarsChanged = selectedBarsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedBarsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn selectedBarsChanged(self: QBarSet, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QBarSet_SelectedBarsChanged(@ptrCast(self.ptr), indexes_list);
    }

    /// ### DEPRECATED: Use `onSelectedBarsChanged` instead
    ///
    pub const OnSelectedBarsChanged = onSelectedBarsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedBarsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, indexes: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn onSelectedBarsChanged(self: QBarSet, callback: *const fn (QBarSet, qtc.libqt_list) callconv(.c) void) void {
        qtc.QBarSet_Connect_SelectedBarsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarSet.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarSet.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `remove2` instead
    ///
    pub const Remove2 = remove2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarSet `
    ///
    /// ` index: i32 `
    ///
    /// ` _count: i32 `
    ///
    pub fn remove2(self: QBarSet, index: i32, _count: i32) void {
        qtc.QBarSet_Remove2(@ptrCast(self.ptr), @bitCast(index), @bitCast(_count));
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
    /// ` self: QBarSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QBarSet, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarSet.objectName: Memory allocation failed");
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
    /// ` self: QBarSet `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QBarSet, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
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
    /// ` self: QBarSet `
    ///
    pub fn isWidgetType(self: QBarSet) bool {
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
    /// ` self: QBarSet `
    ///
    pub fn isWindowType(self: QBarSet) bool {
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
    /// ` self: QBarSet `
    ///
    pub fn isQuickItemType(self: QBarSet) bool {
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
    /// ` self: QBarSet `
    ///
    pub fn signalsBlocked(self: QBarSet) bool {
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
    /// ` self: QBarSet `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QBarSet, b: bool) bool {
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
    /// ` self: QBarSet `
    ///
    pub fn thread(self: QBarSet) QThread {
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
    /// ` self: QBarSet `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QBarSet, _thread: anytype) bool {
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
    /// ` self: QBarSet `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QBarSet, interval: i32) i32 {
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
    /// ` self: QBarSet `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QBarSet, time: i64) i32 {
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
    /// ` self: QBarSet `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QBarSet, id: i32) void {
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
    /// ` self: QBarSet `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QBarSet, id: i32) void {
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
    /// ` self: QBarSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QBarSet, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QBarSet.children: Memory allocation failed");
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
    /// ` self: QBarSet `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QBarSet, _parent: anytype) void {
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
    /// ` self: QBarSet `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QBarSet, filterObj: anytype) void {
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
    /// ` self: QBarSet `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QBarSet, obj: anytype) void {
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
    /// ` self: QBarSet `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QBarSet, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QBarSet `
    ///
    pub fn disconnect3(self: QBarSet) bool {
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
    /// ` self: QBarSet `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QBarSet, receiver: anytype) bool {
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
    /// ` self: QBarSet `
    ///
    pub fn dumpObjectTree(self: QBarSet) void {
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
    /// ` self: QBarSet `
    ///
    pub fn dumpObjectInfo(self: QBarSet) void {
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
    /// ` self: QBarSet `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QBarSet, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
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
    /// ` self: QBarSet `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QBarSet, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
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
    /// ` self: QBarSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QBarSet, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QBarSet.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QBarSet.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QBarSet `
    ///
    pub fn bindingStorage(self: QBarSet) QBindingStorage {
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
    /// ` self: QBarSet `
    ///
    pub fn bindingStorage2(self: QBarSet) QBindingStorage {
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
    /// ` self: QBarSet `
    ///
    pub fn destroyed(self: QBarSet) void {
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
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QBarSet, callback: *const fn (QBarSet) callconv(.c) void) void {
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
    /// ` self: QBarSet `
    ///
    pub fn parent(self: QBarSet) QObject {
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
    /// ` self: QBarSet `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QBarSet, classname: [:0]const u8) bool {
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
    /// ` self: QBarSet `
    ///
    pub fn deleteLater(self: QBarSet) void {
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
    /// ` self: QBarSet `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QBarSet, interval: i32, timerType: i32) i32 {
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
    /// ` self: QBarSet `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QBarSet, time: i64, timerType: i32) i32 {
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
    /// ` self: QBarSet `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QBarSet, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QBarSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QBarSet, signal: [:0]const u8) bool {
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
    /// ` self: QBarSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QBarSet, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QBarSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QBarSet, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBarSet `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QBarSet, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBarSet `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QBarSet, param1: anytype) void {
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
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QBarSet, callback: *const fn (QBarSet, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QBarSet, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBarSet_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QBarSet, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBarSet_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QBarSet, callback: *const fn (QBarSet, QEvent) callconv(.c) bool) void {
        qtc.QBarSet_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QBarSet, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBarSet_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QBarSet, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBarSet_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QBarSet, callback: *const fn (QBarSet, QObject, QEvent) callconv(.c) bool) void {
        qtc.QBarSet_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QBarSet, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QBarSet_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QBarSet, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QBarSet_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QBarSet, callback: *const fn (QBarSet, QTimerEvent) callconv(.c) void) void {
        qtc.QBarSet_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QBarSet, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QBarSet_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QBarSet, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QBarSet_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: QBarSet, callback: *const fn (QBarSet, QChildEvent) callconv(.c) void) void {
        qtc.QBarSet_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QBarSet, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QBarSet_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QBarSet, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QBarSet_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: QBarSet, callback: *const fn (QBarSet, QEvent) callconv(.c) void) void {
        qtc.QBarSet_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: QBarSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarSet_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: QBarSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarSet_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: QBarSet, callback: *const fn (QBarSet, QMetaMethod) callconv(.c) void) void {
        qtc.QBarSet_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: QBarSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarSet_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: QBarSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarSet_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: QBarSet, callback: *const fn (QBarSet, QMetaMethod) callconv(.c) void) void {
        qtc.QBarSet_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: QBarSet) QObject {
        return .{ .ptr = qtc.QBarSet_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: QBarSet) QObject {
        return .{ .ptr = qtc.QBarSet_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: QBarSet, callback: *const fn () callconv(.c) QObject) void {
        qtc.QBarSet_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: QBarSet) i32 {
        return qtc.QBarSet_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: QBarSet) i32 {
        return qtc.QBarSet_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: QBarSet, callback: *const fn () callconv(.c) i32) void {
        qtc.QBarSet_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: QBarSet, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBarSet_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: QBarSet, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBarSet_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: QBarSet, callback: *const fn (QBarSet, [*:0]const u8) callconv(.c) i32) void {
        qtc.QBarSet_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: QBarSet, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBarSet_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: QBarSet, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBarSet_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: QBarSet, callback: *const fn (QBarSet, QMetaMethod) callconv(.c) bool) void {
        qtc.QBarSet_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarSet `
    ///
    /// ` callback: *const fn (self: QBarSet, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QBarSet, callback: *const fn (QBarSet, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#dtor.QBarSet)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBarSet `
    ///
    pub fn delete(self: QBarSet) void {
        qtc.QBarSet_Delete(@ptrCast(self.ptr));
    }
};
