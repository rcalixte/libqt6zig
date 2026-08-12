const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractBarSeries = @import("libqt6").QAbstractBarSeries;
const QBarSet = @import("libqt6").QBarSet;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBrush = @import("libqt6").QBrush;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QLegend = @import("libqt6").QLegend;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPen = @import("libqt6").QPen;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qlegend_enums = @import("libqlegend.zig").enums;
const qlegendmarker_enums = @import("libqlegendmarker.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html)
pub const QBarLegendMarker = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBarLegendMarker,

    pub const _is_QBarLegendMarker = {};
    pub const _is_QLegendMarker = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBarLegendMarker object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _series: QAbstractBarSeries `
    ///
    /// ` _barset: QBarSet `
    ///
    /// ` legend: QLegend `
    ///
    pub fn new(_series: anytype, _barset: anytype, legend: anytype) QBarLegendMarker {
        comptime _ = @TypeOf(_series)._is_QAbstractBarSeries;
        comptime _ = @TypeOf(_barset)._is_QBarSet;
        comptime _ = @TypeOf(legend)._is_QLegend;
        return .{ .ptr = qtc.QBarLegendMarker_new(@ptrCast(_series.ptr), @ptrCast(_barset.ptr), @ptrCast(legend.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBarLegendMarker object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _series: QAbstractBarSeries `
    ///
    /// ` _barset: QBarSet `
    ///
    /// ` legend: QLegend `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_series: anytype, _barset: anytype, legend: anytype, _parent: anytype) QBarLegendMarker {
        comptime _ = @TypeOf(_series)._is_QAbstractBarSeries;
        comptime _ = @TypeOf(_barset)._is_QBarSet;
        comptime _ = @TypeOf(legend)._is_QLegend;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QBarLegendMarker_new2(@ptrCast(_series.ptr), @ptrCast(_barset.ptr), @ptrCast(legend.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    pub fn metaObject(self: QBarLegendMarker) QMetaObject {
        return .{ .ptr = qtc.QBarLegendMarker_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QBarLegendMarker, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QBarLegendMarker_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarLegendMarker `
    ///
    pub fn superMetaObject(self: QBarLegendMarker) QMetaObject {
        return .{ .ptr = qtc.QBarLegendMarker_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QBarLegendMarker, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBarLegendMarker_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` callback: *const fn (self: QBarLegendMarker, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QBarLegendMarker_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QBarLegendMarker, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBarLegendMarker_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QBarLegendMarker, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBarLegendMarker_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` callback: *const fn (self: QBarLegendMarker, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QBarLegendMarker_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QBarLegendMarker, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBarLegendMarker_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarLegendMarker.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ## Returns:
    ///
    /// ` qlegendmarker_enums.LegendMarkerType `
    ///
    pub fn type0(self: QBarLegendMarker) i32 {
        return qtc.QBarLegendMarker_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onType(self: QBarLegendMarker, callback: *const fn () callconv(.c) i32) void {
        qtc.QBarLegendMarker_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ## Returns:
    ///
    /// ` qlegendmarker_enums.LegendMarkerType `
    ///
    pub fn superType(self: QBarLegendMarker) i32 {
        return qtc.QBarLegendMarker_SuperType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `series` instead
    ///
    pub const Series = series;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    pub fn series(self: QBarLegendMarker) QAbstractBarSeries {
        return .{ .ptr = qtc.QBarLegendMarker_Series(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSeries` instead
    ///
    pub const OnSeries = onSeries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#series)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` callback: *const fn () callconv(.c) QAbstractBarSeries `
    ///
    pub fn onSeries(self: QBarLegendMarker, callback: *const fn () callconv(.c) QAbstractBarSeries) void {
        qtc.QBarLegendMarker_OnSeries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSeries` instead
    ///
    pub const SuperSeries = superSeries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#series)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    pub fn superSeries(self: QBarLegendMarker) QAbstractBarSeries {
        return .{ .ptr = qtc.QBarLegendMarker_SuperSeries(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `barset` instead
    ///
    pub const Barset = barset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#barset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    pub fn barset(self: QBarLegendMarker) QBarSet {
        return .{ .ptr = qtc.QBarLegendMarker_Barset(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarLegendMarker.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarLegendMarker.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `label` instead
    ///
    pub const Label = label;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn label(self: QBarLegendMarker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLegendMarker_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarLegendMarker.label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLabel` instead
    ///
    pub const SetLabel = setLabel;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` _label: []const u8 `
    ///
    pub fn setLabel(self: QBarLegendMarker, _label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        qtc.QLegendMarker_SetLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### DEPRECATED: Use `labelBrush` instead
    ///
    pub const LabelBrush = labelBrush;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    pub fn labelBrush(self: QBarLegendMarker) QBrush {
        return .{ .ptr = qtc.QLegendMarker_LabelBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLabelBrush` instead
    ///
    pub const SetLabelBrush = setLabelBrush;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn setLabelBrush(self: QBarLegendMarker, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QLegendMarker_SetLabelBrush(@ptrCast(self.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    pub fn font(self: QBarLegendMarker) QFont {
        return .{ .ptr = qtc.QLegendMarker_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QBarLegendMarker, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QLegendMarker_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `pen` instead
    ///
    pub const Pen = pen;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    pub fn pen(self: QBarLegendMarker) QPen {
        return .{ .ptr = qtc.QLegendMarker_Pen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPen` instead
    ///
    pub const SetPen = setPen;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` _pen: QPen `
    ///
    pub fn setPen(self: QBarLegendMarker, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QLegendMarker_SetPen(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `brush` instead
    ///
    pub const Brush = brush;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    pub fn brush(self: QBarLegendMarker) QBrush {
        return .{ .ptr = qtc.QLegendMarker_Brush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBrush` instead
    ///
    pub const SetBrush = setBrush;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn setBrush(self: QBarLegendMarker, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QLegendMarker_SetBrush(@ptrCast(self.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    pub fn isVisible(self: QBarLegendMarker) bool {
        return qtc.QLegendMarker_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QBarLegendMarker, visible: bool) void {
        qtc.QLegendMarker_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `shape` instead
    ///
    pub const Shape = shape;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ## Returns:
    ///
    /// ` qlegend_enums.MarkerShape `
    ///
    pub fn shape(self: QBarLegendMarker) i32 {
        return qtc.QLegendMarker_Shape(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShape` instead
    ///
    pub const SetShape = setShape;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` _shape: qlegend_enums.MarkerShape `
    ///
    pub fn setShape(self: QBarLegendMarker, _shape: i32) void {
        qtc.QLegendMarker_SetShape(@ptrCast(self.ptr), @bitCast(_shape));
    }

    /// ### DEPRECATED: Use `clicked` instead
    ///
    pub const Clicked = clicked;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    pub fn clicked(self: QBarLegendMarker) void {
        qtc.QLegendMarker_Clicked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClicked` instead
    ///
    pub const OnClicked = onClicked;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` callback: *const fn (self: QBarLegendMarker) callconv(.c) void `
    ///
    pub fn onClicked(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hovered` instead
    ///
    pub const Hovered = hovered;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` status: bool `
    ///
    pub fn hovered(self: QBarLegendMarker, status: bool) void {
        qtc.QLegendMarker_Hovered(@ptrCast(self.ptr), status);
    }

    /// ### DEPRECATED: Use `onHovered` instead
    ///
    pub const OnHovered = onHovered;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` callback: *const fn (self: QBarLegendMarker, status: bool) callconv(.c) void `
    ///
    pub fn onHovered(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker, bool) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelChanged` instead
    ///
    pub const LabelChanged = labelChanged;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    pub fn labelChanged(self: QBarLegendMarker) void {
        qtc.QLegendMarker_LabelChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLabelChanged` instead
    ///
    pub const OnLabelChanged = onLabelChanged;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` callback: *const fn (self: QBarLegendMarker) callconv(.c) void `
    ///
    pub fn onLabelChanged(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_LabelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelBrushChanged` instead
    ///
    pub const LabelBrushChanged = labelBrushChanged;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    pub fn labelBrushChanged(self: QBarLegendMarker) void {
        qtc.QLegendMarker_LabelBrushChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLabelBrushChanged` instead
    ///
    pub const OnLabelBrushChanged = onLabelBrushChanged;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` callback: *const fn (self: QBarLegendMarker) callconv(.c) void `
    ///
    pub fn onLabelBrushChanged(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_LabelBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fontChanged` instead
    ///
    pub const FontChanged = fontChanged;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    pub fn fontChanged(self: QBarLegendMarker) void {
        qtc.QLegendMarker_FontChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFontChanged` instead
    ///
    pub const OnFontChanged = onFontChanged;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` callback: *const fn (self: QBarLegendMarker) callconv(.c) void `
    ///
    pub fn onFontChanged(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_FontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `penChanged` instead
    ///
    pub const PenChanged = penChanged;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    pub fn penChanged(self: QBarLegendMarker) void {
        qtc.QLegendMarker_PenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPenChanged` instead
    ///
    pub const OnPenChanged = onPenChanged;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` callback: *const fn (self: QBarLegendMarker) callconv(.c) void `
    ///
    pub fn onPenChanged(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_PenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `brushChanged` instead
    ///
    pub const BrushChanged = brushChanged;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    pub fn brushChanged(self: QBarLegendMarker) void {
        qtc.QLegendMarker_BrushChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBrushChanged` instead
    ///
    pub const OnBrushChanged = onBrushChanged;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` callback: *const fn (self: QBarLegendMarker) callconv(.c) void `
    ///
    pub fn onBrushChanged(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_BrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    pub fn visibleChanged(self: QBarLegendMarker) void {
        qtc.QLegendMarker_VisibleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` callback: *const fn (self: QBarLegendMarker) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shapeChanged` instead
    ///
    pub const ShapeChanged = shapeChanged;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarLegendMarker `
    ///
    pub fn shapeChanged(self: QBarLegendMarker) void {
        qtc.QLegendMarker_ShapeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onShapeChanged` instead
    ///
    pub const OnShapeChanged = onShapeChanged;

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarLegendMarker `
    ///
    /// ` callback: *const fn (self: QBarLegendMarker) callconv(.c) void `
    ///
    pub fn onShapeChanged(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_ShapeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QBarLegendMarker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarLegendMarker.objectName: Memory allocation failed");
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QBarLegendMarker, name: []const u8) void {
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
    /// ` self: QBarLegendMarker `
    ///
    pub fn isWidgetType(self: QBarLegendMarker) bool {
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
    /// ` self: QBarLegendMarker `
    ///
    pub fn isWindowType(self: QBarLegendMarker) bool {
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
    /// ` self: QBarLegendMarker `
    ///
    pub fn isQuickItemType(self: QBarLegendMarker) bool {
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
    /// ` self: QBarLegendMarker `
    ///
    pub fn signalsBlocked(self: QBarLegendMarker) bool {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QBarLegendMarker, b: bool) bool {
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
    /// ` self: QBarLegendMarker `
    ///
    pub fn thread(self: QBarLegendMarker) QThread {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QBarLegendMarker, _thread: anytype) bool {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QBarLegendMarker, interval: i32) i32 {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QBarLegendMarker, time: i64) i32 {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QBarLegendMarker, id: i32) void {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QBarLegendMarker, id: i32) void {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QBarLegendMarker, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QBarLegendMarker.children: Memory allocation failed");
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QBarLegendMarker, _parent: anytype) void {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QBarLegendMarker, filterObj: anytype) void {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QBarLegendMarker, obj: anytype) void {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QBarLegendMarker, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QBarLegendMarker `
    ///
    pub fn disconnect3(self: QBarLegendMarker) bool {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QBarLegendMarker, receiver: anytype) bool {
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
    /// ` self: QBarLegendMarker `
    ///
    pub fn dumpObjectTree(self: QBarLegendMarker) void {
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
    /// ` self: QBarLegendMarker `
    ///
    pub fn dumpObjectInfo(self: QBarLegendMarker) void {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QBarLegendMarker, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QBarLegendMarker, name: [:0]const u8) QVariant {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QBarLegendMarker, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QBarLegendMarker.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QBarLegendMarker.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QBarLegendMarker `
    ///
    pub fn bindingStorage(self: QBarLegendMarker) QBindingStorage {
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
    /// ` self: QBarLegendMarker `
    ///
    pub fn bindingStorage2(self: QBarLegendMarker) QBindingStorage {
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
    /// ` self: QBarLegendMarker `
    ///
    pub fn destroyed(self: QBarLegendMarker) void {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` callback: *const fn (self: QBarLegendMarker) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker) callconv(.c) void) void {
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
    /// ` self: QBarLegendMarker `
    ///
    pub fn parent(self: QBarLegendMarker) QObject {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QBarLegendMarker, classname: [:0]const u8) bool {
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
    /// ` self: QBarLegendMarker `
    ///
    pub fn deleteLater(self: QBarLegendMarker) void {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QBarLegendMarker, interval: i32, timerType: i32) i32 {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QBarLegendMarker, time: i64, timerType: i32) i32 {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QBarLegendMarker, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QBarLegendMarker, signal: [:0]const u8) bool {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QBarLegendMarker, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QBarLegendMarker, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QBarLegendMarker, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QBarLegendMarker, param1: anytype) void {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` callback: *const fn (self: QBarLegendMarker, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker, QObject) callconv(.c) void) void {
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QBarLegendMarker, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBarLegendMarker_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QBarLegendMarker, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBarLegendMarker_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarLegendMarker`
    ///
    /// ` callback: *const fn (self: QBarLegendMarker, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker, QEvent) callconv(.c) bool) void {
        qtc.QBarLegendMarker_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QBarLegendMarker, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBarLegendMarker_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QBarLegendMarker, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBarLegendMarker_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarLegendMarker`
    ///
    /// ` callback: *const fn (self: QBarLegendMarker, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker, QObject, QEvent) callconv(.c) bool) void {
        qtc.QBarLegendMarker_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QBarLegendMarker, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QBarLegendMarker_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QBarLegendMarker, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QBarLegendMarker_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarLegendMarker`
    ///
    /// ` callback: *const fn (self: QBarLegendMarker, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker, QTimerEvent) callconv(.c) void) void {
        qtc.QBarLegendMarker_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QBarLegendMarker, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QBarLegendMarker_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QBarLegendMarker, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QBarLegendMarker_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarLegendMarker`
    ///
    /// ` callback: *const fn (self: QBarLegendMarker, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker, QChildEvent) callconv(.c) void) void {
        qtc.QBarLegendMarker_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QBarLegendMarker, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QBarLegendMarker_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QBarLegendMarker, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QBarLegendMarker_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarLegendMarker`
    ///
    /// ` callback: *const fn (self: QBarLegendMarker, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker, QEvent) callconv(.c) void) void {
        qtc.QBarLegendMarker_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QBarLegendMarker, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarLegendMarker_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QBarLegendMarker, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarLegendMarker_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarLegendMarker`
    ///
    /// ` callback: *const fn (self: QBarLegendMarker, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker, QMetaMethod) callconv(.c) void) void {
        qtc.QBarLegendMarker_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QBarLegendMarker, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarLegendMarker_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QBarLegendMarker, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarLegendMarker_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarLegendMarker`
    ///
    /// ` callback: *const fn (self: QBarLegendMarker, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker, QMetaMethod) callconv(.c) void) void {
        qtc.QBarLegendMarker_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarLegendMarker `
    ///
    pub fn sender(self: QBarLegendMarker) QObject {
        return .{ .ptr = qtc.QBarLegendMarker_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QBarLegendMarker `
    ///
    pub fn superSender(self: QBarLegendMarker) QObject {
        return .{ .ptr = qtc.QBarLegendMarker_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QBarLegendMarker`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QBarLegendMarker, callback: *const fn () callconv(.c) QObject) void {
        qtc.QBarLegendMarker_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarLegendMarker `
    ///
    pub fn senderSignalIndex(self: QBarLegendMarker) i32 {
        return qtc.QBarLegendMarker_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBarLegendMarker `
    ///
    pub fn superSenderSignalIndex(self: QBarLegendMarker) i32 {
        return qtc.QBarLegendMarker_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBarLegendMarker`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QBarLegendMarker, callback: *const fn () callconv(.c) i32) void {
        qtc.QBarLegendMarker_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QBarLegendMarker, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBarLegendMarker_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QBarLegendMarker, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBarLegendMarker_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBarLegendMarker`
    ///
    /// ` callback: *const fn (self: QBarLegendMarker, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker, [*:0]const u8) callconv(.c) i32) void {
        qtc.QBarLegendMarker_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QBarLegendMarker, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBarLegendMarker_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QBarLegendMarker, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBarLegendMarker_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarLegendMarker`
    ///
    /// ` callback: *const fn (self: QBarLegendMarker, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker, QMetaMethod) callconv(.c) bool) void {
        qtc.QBarLegendMarker_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarLegendMarker `
    ///
    /// ` callback: *const fn (self: QBarLegendMarker, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QBarLegendMarker, callback: *const fn (QBarLegendMarker, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#dtor.QBarLegendMarker)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBarLegendMarker `
    ///
    pub fn delete(self: QBarLegendMarker) void {
        qtc.QBarLegendMarker_Delete(@ptrCast(self.ptr));
    }
};
