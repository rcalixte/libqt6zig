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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPieSlice object in C++ memory
    ///
    pub fn new() QPieSlice {
        return .{ .ptr = qtc.QPieSlice_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPieSlice object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _label: []const u8 `
    ///
    /// ` _value: f64 `
    ///
    pub fn new2(_label: []const u8, _value: f64) QPieSlice {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        return .{ .ptr = qtc.QPieSlice_new2(label_str, @bitCast(_value)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPieSlice object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) QPieSlice {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QPieSlice_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QPieSlice object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _label: []const u8 `
    ///
    /// ` _value: f64 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_label: []const u8, _value: f64, _parent: anytype) QPieSlice {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QPieSlice_new4(label_str, @bitCast(_value), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn metaObject(self: QPieSlice) QMetaObject {
        return .{ .ptr = qtc.QPieSlice_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QPieSlice, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPieSlice_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPieSlice `
    ///
    pub fn superMetaObject(self: QPieSlice) QMetaObject {
        return .{ .ptr = qtc.QPieSlice_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QPieSlice, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPieSlice_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QPieSlice, callback: *const fn (QPieSlice, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPieSlice_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QPieSlice, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPieSlice_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QPieSlice, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPieSlice_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QPieSlice, callback: *const fn (QPieSlice, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPieSlice_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QPieSlice, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPieSlice_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPieSlice.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLabel` instead
    ///
    pub const SetLabel = setLabel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` _label: []const u8 `
    ///
    pub fn setLabel(self: QPieSlice, _label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        qtc.QPieSlice_SetLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### DEPRECATED: Use `label` instead
    ///
    pub const Label = label;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn label(self: QPieSlice, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPieSlice_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPieSlice.label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` _value: f64 `
    ///
    pub fn setValue(self: QPieSlice, _value: f64) void {
        qtc.QPieSlice_SetValue(@ptrCast(self.ptr), @bitCast(_value));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn value(self: QPieSlice) f64 {
        return qtc.QPieSlice_Value(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelVisible` instead
    ///
    pub const SetLabelVisible = setLabelVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn setLabelVisible(self: QPieSlice) void {
        qtc.QPieSlice_SetLabelVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLabelVisible` instead
    ///
    pub const IsLabelVisible = isLabelVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#isLabelVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn isLabelVisible(self: QPieSlice) bool {
        return qtc.QPieSlice_IsLabelVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `labelPosition` instead
    ///
    pub const LabelPosition = labelPosition;

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
    pub fn labelPosition(self: QPieSlice) i32 {
        return qtc.QPieSlice_LabelPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelPosition` instead
    ///
    pub const SetLabelPosition = setLabelPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` position: qpieslice_enums.LabelPosition `
    ///
    pub fn setLabelPosition(self: QPieSlice, position: i32) void {
        qtc.QPieSlice_SetLabelPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `setExploded` instead
    ///
    pub const SetExploded = setExploded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setExploded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn setExploded(self: QPieSlice) void {
        qtc.QPieSlice_SetExploded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isExploded` instead
    ///
    pub const IsExploded = isExploded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#isExploded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn isExploded(self: QPieSlice) bool {
        return qtc.QPieSlice_IsExploded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPen` instead
    ///
    pub const SetPen = setPen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` _pen: QPen `
    ///
    pub fn setPen(self: QPieSlice, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QPieSlice_SetPen(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `pen` instead
    ///
    pub const Pen = pen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn pen(self: QPieSlice) QPen {
        return .{ .ptr = qtc.QPieSlice_Pen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `borderColor` instead
    ///
    pub const BorderColor = borderColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn borderColor(self: QPieSlice) QColor {
        return .{ .ptr = qtc.QPieSlice_BorderColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBorderColor` instead
    ///
    pub const SetBorderColor = setBorderColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` _color: QColor `
    ///
    pub fn setBorderColor(self: QPieSlice, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QPieSlice_SetBorderColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `borderWidth` instead
    ///
    pub const BorderWidth = borderWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn borderWidth(self: QPieSlice) i32 {
        return qtc.QPieSlice_BorderWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBorderWidth` instead
    ///
    pub const SetBorderWidth = setBorderWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setBorderWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` width: i32 `
    ///
    pub fn setBorderWidth(self: QPieSlice, width: i32) void {
        qtc.QPieSlice_SetBorderWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `setBrush` instead
    ///
    pub const SetBrush = setBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn setBrush(self: QPieSlice, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QPieSlice_SetBrush(@ptrCast(self.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `brush` instead
    ///
    pub const Brush = brush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn brush(self: QPieSlice) QBrush {
        return .{ .ptr = qtc.QPieSlice_Brush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn color(self: QPieSlice) QColor {
        return .{ .ptr = qtc.QPieSlice_Color(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor(self: QPieSlice, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QPieSlice_SetColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `setLabelBrush` instead
    ///
    pub const SetLabelBrush = setLabelBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn setLabelBrush(self: QPieSlice, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QPieSlice_SetLabelBrush(@ptrCast(self.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `labelBrush` instead
    ///
    pub const LabelBrush = labelBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn labelBrush(self: QPieSlice) QBrush {
        return .{ .ptr = qtc.QPieSlice_LabelBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `labelColor` instead
    ///
    pub const LabelColor = labelColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn labelColor(self: QPieSlice) QColor {
        return .{ .ptr = qtc.QPieSlice_LabelColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLabelColor` instead
    ///
    pub const SetLabelColor = setLabelColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` _color: QColor `
    ///
    pub fn setLabelColor(self: QPieSlice, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QPieSlice_SetLabelColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `setLabelFont` instead
    ///
    pub const SetLabelFont = setLabelFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` font: QFont `
    ///
    pub fn setLabelFont(self: QPieSlice, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QPieSlice_SetLabelFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `labelFont` instead
    ///
    pub const LabelFont = labelFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn labelFont(self: QPieSlice) QFont {
        return .{ .ptr = qtc.QPieSlice_LabelFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLabelArmLengthFactor` instead
    ///
    pub const SetLabelArmLengthFactor = setLabelArmLengthFactor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelArmLengthFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` factor: f64 `
    ///
    pub fn setLabelArmLengthFactor(self: QPieSlice, factor: f64) void {
        qtc.QPieSlice_SetLabelArmLengthFactor(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### DEPRECATED: Use `labelArmLengthFactor` instead
    ///
    pub const LabelArmLengthFactor = labelArmLengthFactor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelArmLengthFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn labelArmLengthFactor(self: QPieSlice) f64 {
        return qtc.QPieSlice_LabelArmLengthFactor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setExplodeDistanceFactor` instead
    ///
    pub const SetExplodeDistanceFactor = setExplodeDistanceFactor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setExplodeDistanceFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` factor: f64 `
    ///
    pub fn setExplodeDistanceFactor(self: QPieSlice, factor: f64) void {
        qtc.QPieSlice_SetExplodeDistanceFactor(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### DEPRECATED: Use `explodeDistanceFactor` instead
    ///
    pub const ExplodeDistanceFactor = explodeDistanceFactor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#explodeDistanceFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn explodeDistanceFactor(self: QPieSlice) f64 {
        return qtc.QPieSlice_ExplodeDistanceFactor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `percentage` instead
    ///
    pub const Percentage = percentage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#percentage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn percentage(self: QPieSlice) f64 {
        return qtc.QPieSlice_Percentage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startAngle` instead
    ///
    pub const StartAngle = startAngle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#startAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn startAngle(self: QPieSlice) f64 {
        return qtc.QPieSlice_StartAngle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `angleSpan` instead
    ///
    pub const AngleSpan = angleSpan;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#angleSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn angleSpan(self: QPieSlice) f64 {
        return qtc.QPieSlice_AngleSpan(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `series` instead
    ///
    pub const Series = series;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn series(self: QPieSlice) QPieSeries {
        return .{ .ptr = qtc.QPieSlice_Series(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clicked` instead
    ///
    pub const Clicked = clicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn clicked(self: QPieSlice) void {
        qtc.QPieSlice_Clicked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClicked` instead
    ///
    pub const OnClicked = onClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onClicked(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hovered` instead
    ///
    pub const Hovered = hovered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` state: bool `
    ///
    pub fn hovered(self: QPieSlice, state: bool) void {
        qtc.QPieSlice_Hovered(@ptrCast(self.ptr), state);
    }

    /// ### DEPRECATED: Use `onHovered` instead
    ///
    pub const OnHovered = onHovered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice, state: bool) callconv(.c) void `
    ///
    pub fn onHovered(self: QPieSlice, callback: *const fn (QPieSlice, bool) callconv(.c) void) void {
        qtc.QPieSlice_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pressed` instead
    ///
    pub const Pressed = pressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn pressed(self: QPieSlice) void {
        qtc.QPieSlice_Pressed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPressed` instead
    ///
    pub const OnPressed = onPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onPressed(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `released` instead
    ///
    pub const Released = released;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn released(self: QPieSlice) void {
        qtc.QPieSlice_Released(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReleased` instead
    ///
    pub const OnReleased = onReleased;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onReleased(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doubleClicked` instead
    ///
    pub const DoubleClicked = doubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn doubleClicked(self: QPieSlice) void {
        qtc.QPieSlice_DoubleClicked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoubleClicked` instead
    ///
    pub const OnDoubleClicked = onDoubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onDoubleClicked(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelChanged` instead
    ///
    pub const LabelChanged = labelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn labelChanged(self: QPieSlice) void {
        qtc.QPieSlice_LabelChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLabelChanged` instead
    ///
    pub const OnLabelChanged = onLabelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onLabelChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `valueChanged` instead
    ///
    pub const ValueChanged = valueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#valueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn valueChanged(self: QPieSlice) void {
        qtc.QPieSlice_ValueChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onValueChanged` instead
    ///
    pub const OnValueChanged = onValueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#valueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onValueChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_ValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelVisibleChanged` instead
    ///
    pub const LabelVisibleChanged = labelVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn labelVisibleChanged(self: QPieSlice) void {
        qtc.QPieSlice_LabelVisibleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLabelVisibleChanged` instead
    ///
    pub const OnLabelVisibleChanged = onLabelVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onLabelVisibleChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `penChanged` instead
    ///
    pub const PenChanged = penChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn penChanged(self: QPieSlice) void {
        qtc.QPieSlice_PenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPenChanged` instead
    ///
    pub const OnPenChanged = onPenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onPenChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_PenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `brushChanged` instead
    ///
    pub const BrushChanged = brushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#brushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn brushChanged(self: QPieSlice) void {
        qtc.QPieSlice_BrushChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBrushChanged` instead
    ///
    pub const OnBrushChanged = onBrushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#brushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onBrushChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_BrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelBrushChanged` instead
    ///
    pub const LabelBrushChanged = labelBrushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn labelBrushChanged(self: QPieSlice) void {
        qtc.QPieSlice_LabelBrushChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLabelBrushChanged` instead
    ///
    pub const OnLabelBrushChanged = onLabelBrushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onLabelBrushChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelFontChanged` instead
    ///
    pub const LabelFontChanged = labelFontChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn labelFontChanged(self: QPieSlice) void {
        qtc.QPieSlice_LabelFontChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLabelFontChanged` instead
    ///
    pub const OnLabelFontChanged = onLabelFontChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onLabelFontChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `percentageChanged` instead
    ///
    pub const PercentageChanged = percentageChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#percentageChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn percentageChanged(self: QPieSlice) void {
        qtc.QPieSlice_PercentageChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPercentageChanged` instead
    ///
    pub const OnPercentageChanged = onPercentageChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#percentageChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onPercentageChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_PercentageChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `startAngleChanged` instead
    ///
    pub const StartAngleChanged = startAngleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#startAngleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn startAngleChanged(self: QPieSlice) void {
        qtc.QPieSlice_StartAngleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStartAngleChanged` instead
    ///
    pub const OnStartAngleChanged = onStartAngleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#startAngleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onStartAngleChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_StartAngleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `angleSpanChanged` instead
    ///
    pub const AngleSpanChanged = angleSpanChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#angleSpanChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn angleSpanChanged(self: QPieSlice) void {
        qtc.QPieSlice_AngleSpanChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAngleSpanChanged` instead
    ///
    pub const OnAngleSpanChanged = onAngleSpanChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#angleSpanChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onAngleSpanChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_AngleSpanChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorChanged` instead
    ///
    pub const ColorChanged = colorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn colorChanged(self: QPieSlice) void {
        qtc.QPieSlice_ColorChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onColorChanged` instead
    ///
    pub const OnColorChanged = onColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onColorChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `borderColorChanged` instead
    ///
    pub const BorderColorChanged = borderColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn borderColorChanged(self: QPieSlice) void {
        qtc.QPieSlice_BorderColorChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBorderColorChanged` instead
    ///
    pub const OnBorderColorChanged = onBorderColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onBorderColorChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_BorderColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `borderWidthChanged` instead
    ///
    pub const BorderWidthChanged = borderWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn borderWidthChanged(self: QPieSlice) void {
        qtc.QPieSlice_BorderWidthChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBorderWidthChanged` instead
    ///
    pub const OnBorderWidthChanged = onBorderWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onBorderWidthChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_BorderWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelColorChanged` instead
    ///
    pub const LabelColorChanged = labelColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    pub fn labelColorChanged(self: QPieSlice) void {
        qtc.QPieSlice_LabelColorChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLabelColorChanged` instead
    ///
    pub const OnLabelColorChanged = onLabelColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onLabelColorChanged(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPieSlice.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPieSlice.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLabelVisible1` instead
    ///
    pub const SetLabelVisible1 = setLabelVisible1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` visible: bool `
    ///
    pub fn setLabelVisible1(self: QPieSlice, visible: bool) void {
        qtc.QPieSlice_SetLabelVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setExploded1` instead
    ///
    pub const SetExploded1 = setExploded1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setExploded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPieSlice `
    ///
    /// ` exploded: bool `
    ///
    pub fn setExploded1(self: QPieSlice, exploded: bool) void {
        qtc.QPieSlice_SetExploded1(@ptrCast(self.ptr), exploded);
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
    /// ` self: QPieSlice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QPieSlice, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPieSlice.objectName: Memory allocation failed");
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
    /// ` self: QPieSlice `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QPieSlice, name: []const u8) void {
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
    /// ` self: QPieSlice `
    ///
    pub fn isWidgetType(self: QPieSlice) bool {
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
    /// ` self: QPieSlice `
    ///
    pub fn isWindowType(self: QPieSlice) bool {
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
    /// ` self: QPieSlice `
    ///
    pub fn isQuickItemType(self: QPieSlice) bool {
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
    /// ` self: QPieSlice `
    ///
    pub fn signalsBlocked(self: QPieSlice) bool {
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
    /// ` self: QPieSlice `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QPieSlice, b: bool) bool {
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
    /// ` self: QPieSlice `
    ///
    pub fn thread(self: QPieSlice) QThread {
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
    /// ` self: QPieSlice `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QPieSlice, _thread: anytype) bool {
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
    /// ` self: QPieSlice `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QPieSlice, interval: i32) i32 {
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
    /// ` self: QPieSlice `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QPieSlice, time: i64) i32 {
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
    /// ` self: QPieSlice `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QPieSlice, id: i32) void {
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
    /// ` self: QPieSlice `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QPieSlice, id: i32) void {
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
    /// ` self: QPieSlice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QPieSlice, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QPieSlice.children: Memory allocation failed");
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
    /// ` self: QPieSlice `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QPieSlice, _parent: anytype) void {
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
    /// ` self: QPieSlice `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QPieSlice, filterObj: anytype) void {
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
    /// ` self: QPieSlice `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QPieSlice, obj: anytype) void {
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
    /// ` self: QPieSlice `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QPieSlice, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPieSlice `
    ///
    pub fn disconnect3(self: QPieSlice) bool {
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
    /// ` self: QPieSlice `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QPieSlice, receiver: anytype) bool {
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
    /// ` self: QPieSlice `
    ///
    pub fn dumpObjectTree(self: QPieSlice) void {
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
    /// ` self: QPieSlice `
    ///
    pub fn dumpObjectInfo(self: QPieSlice) void {
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
    /// ` self: QPieSlice `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setProperty(self: QPieSlice, name: [:0]const u8, _value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(_value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(_value.ptr));
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
    /// ` self: QPieSlice `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QPieSlice, name: [:0]const u8) QVariant {
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
    /// ` self: QPieSlice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QPieSlice, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QPieSlice.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPieSlice.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QPieSlice `
    ///
    pub fn bindingStorage(self: QPieSlice) QBindingStorage {
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
    /// ` self: QPieSlice `
    ///
    pub fn bindingStorage2(self: QPieSlice) QBindingStorage {
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
    /// ` self: QPieSlice `
    ///
    pub fn destroyed(self: QPieSlice) void {
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
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QPieSlice, callback: *const fn (QPieSlice) callconv(.c) void) void {
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
    /// ` self: QPieSlice `
    ///
    pub fn parent(self: QPieSlice) QObject {
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
    /// ` self: QPieSlice `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QPieSlice, classname: [:0]const u8) bool {
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
    /// ` self: QPieSlice `
    ///
    pub fn deleteLater(self: QPieSlice) void {
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
    /// ` self: QPieSlice `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QPieSlice, interval: i32, timerType: i32) i32 {
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
    /// ` self: QPieSlice `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QPieSlice, time: i64, timerType: i32) i32 {
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
    /// ` self: QPieSlice `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QPieSlice, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPieSlice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QPieSlice, signal: [:0]const u8) bool {
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
    /// ` self: QPieSlice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QPieSlice, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPieSlice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QPieSlice, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPieSlice `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QPieSlice, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPieSlice `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QPieSlice, param1: anytype) void {
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
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QPieSlice, callback: *const fn (QPieSlice, QObject) callconv(.c) void) void {
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
    /// ` self: QPieSlice `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QPieSlice, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPieSlice_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPieSlice `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QPieSlice, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPieSlice_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn (self: QPieSlice, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QPieSlice, callback: *const fn (QPieSlice, QEvent) callconv(.c) bool) void {
        qtc.QPieSlice_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPieSlice `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QPieSlice, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPieSlice_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPieSlice `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QPieSlice, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPieSlice_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn (self: QPieSlice, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QPieSlice, callback: *const fn (QPieSlice, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPieSlice_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPieSlice `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QPieSlice, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPieSlice_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPieSlice `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QPieSlice, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPieSlice_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn (self: QPieSlice, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QPieSlice, callback: *const fn (QPieSlice, QTimerEvent) callconv(.c) void) void {
        qtc.QPieSlice_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPieSlice `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QPieSlice, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPieSlice_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPieSlice `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QPieSlice, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPieSlice_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn (self: QPieSlice, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QPieSlice, callback: *const fn (QPieSlice, QChildEvent) callconv(.c) void) void {
        qtc.QPieSlice_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPieSlice `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QPieSlice, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPieSlice_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPieSlice `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QPieSlice, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPieSlice_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn (self: QPieSlice, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QPieSlice, callback: *const fn (QPieSlice, QEvent) callconv(.c) void) void {
        qtc.QPieSlice_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPieSlice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QPieSlice, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPieSlice_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPieSlice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QPieSlice, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPieSlice_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn (self: QPieSlice, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QPieSlice, callback: *const fn (QPieSlice, QMetaMethod) callconv(.c) void) void {
        qtc.QPieSlice_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPieSlice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QPieSlice, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPieSlice_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPieSlice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QPieSlice, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPieSlice_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn (self: QPieSlice, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QPieSlice, callback: *const fn (QPieSlice, QMetaMethod) callconv(.c) void) void {
        qtc.QPieSlice_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPieSlice `
    ///
    pub fn sender(self: QPieSlice) QObject {
        return .{ .ptr = qtc.QPieSlice_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QPieSlice `
    ///
    pub fn superSender(self: QPieSlice) QObject {
        return .{ .ptr = qtc.QPieSlice_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QPieSlice, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPieSlice_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPieSlice `
    ///
    pub fn senderSignalIndex(self: QPieSlice) i32 {
        return qtc.QPieSlice_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPieSlice `
    ///
    pub fn superSenderSignalIndex(self: QPieSlice) i32 {
        return qtc.QPieSlice_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QPieSlice, callback: *const fn () callconv(.c) i32) void {
        qtc.QPieSlice_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPieSlice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QPieSlice, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPieSlice_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPieSlice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QPieSlice, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPieSlice_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn (self: QPieSlice, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QPieSlice, callback: *const fn (QPieSlice, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPieSlice_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPieSlice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QPieSlice, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPieSlice_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPieSlice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QPieSlice, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPieSlice_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPieSlice`
    ///
    /// ` callback: *const fn (self: QPieSlice, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QPieSlice, callback: *const fn (QPieSlice, QMetaMethod) callconv(.c) bool) void {
        qtc.QPieSlice_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPieSlice `
    ///
    /// ` callback: *const fn (self: QPieSlice, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QPieSlice, callback: *const fn (QPieSlice, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#dtor.QPieSlice)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPieSlice `
    ///
    pub fn delete(self: QPieSlice) void {
        qtc.QPieSlice_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#public-types)
pub const enums = struct {
    pub const LabelPosition = enum {
        pub const LabelOutside: i32 = 0;
        pub const LabelInsideHorizontal: i32 = 1;
        pub const LabelInsideTangential: i32 = 2;
        pub const LabelInsideNormal: i32 = 3;
    };
};
