const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractAxis = @import("libqt6").QAbstractAxis;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBoxSet = @import("libqt6").QBoxSet;
const QBrush = @import("libqt6").QBrush;
const QChart = @import("libqt6").QChart;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPen = @import("libqt6").QPen;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html)
pub const QBoxPlotSeries = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBoxPlotSeries,

    pub const _is_QBoxPlotSeries = {};
    pub const _is_QAbstractSeries = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBoxPlotSeries object in C++ memory
    ///
    pub fn new() QBoxPlotSeries {
        return .{ .ptr = qtc.QBoxPlotSeries_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBoxPlotSeries object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QBoxPlotSeries {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QBoxPlotSeries_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn metaObject(self: QBoxPlotSeries) QMetaObject {
        return .{ .ptr = qtc.QBoxPlotSeries_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QBoxPlotSeries, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QBoxPlotSeries_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn superMetaObject(self: QBoxPlotSeries) QMetaObject {
        return .{ .ptr = qtc.QBoxPlotSeries_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QBoxPlotSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBoxPlotSeries_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QBoxPlotSeries_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QBoxPlotSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBoxPlotSeries_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QBoxPlotSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBoxPlotSeries_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QBoxPlotSeries_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QBoxPlotSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBoxPlotSeries_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBoxPlotSeries.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` box: QBoxSet `
    ///
    pub fn append(self: QBoxPlotSeries, box: anytype) bool {
        comptime _ = @TypeOf(box)._is_QBoxSet;
        return qtc.QBoxPlotSeries_Append(@ptrCast(self.ptr), @ptrCast(box.ptr));
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` box: QBoxSet `
    ///
    pub fn remove(self: QBoxPlotSeries, box: anytype) bool {
        comptime _ = @TypeOf(box)._is_QBoxSet;
        return qtc.QBoxPlotSeries_Remove(@ptrCast(self.ptr), @ptrCast(box.ptr));
    }

    /// ### DEPRECATED: Use `take` instead
    ///
    pub const Take = take;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` box: QBoxSet `
    ///
    pub fn take(self: QBoxPlotSeries, box: anytype) bool {
        comptime _ = @TypeOf(box)._is_QBoxSet;
        return qtc.QBoxPlotSeries_Take(@ptrCast(self.ptr), @ptrCast(box.ptr));
    }

    /// ### DEPRECATED: Use `append2` instead
    ///
    pub const Append2 = append2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` boxes: []QBoxSet `
    ///
    pub fn append2(self: QBoxPlotSeries, boxes: []QBoxSet) bool {
        const boxes_list = qtc.libqt_list{
            .len = boxes.len,
            .data = @ptrCast(boxes.ptr),
        };
        return qtc.QBoxPlotSeries_Append2(@ptrCast(self.ptr), boxes_list);
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` box: QBoxSet `
    ///
    pub fn insert(self: QBoxPlotSeries, index: i32, box: anytype) bool {
        comptime _ = @TypeOf(box)._is_QBoxSet;
        return qtc.QBoxPlotSeries_Insert(@ptrCast(self.ptr), @bitCast(index), @ptrCast(box.ptr));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn count(self: QBoxPlotSeries) i32 {
        return qtc.QBoxPlotSeries_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `boxSets` instead
    ///
    pub const BoxSets = boxSets;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxSets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn boxSets(self: QBoxPlotSeries, allocator: std.mem.Allocator) []QBoxSet {
        const _arr: qtc.libqt_list = qtc.QBoxPlotSeries_BoxSets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBoxSet, _arr.len) catch @panic("QBoxPlotSeries.boxSets: Memory allocation failed");
        const _data_val: [*]QtC.QBoxSet = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn clear(self: QBoxPlotSeries) void {
        qtc.QBoxPlotSeries_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn type0(self: QBoxPlotSeries) i32 {
        return qtc.QBoxPlotSeries_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onType(self: QBoxPlotSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QBoxPlotSeries_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn superType(self: QBoxPlotSeries) i32 {
        return qtc.QBoxPlotSeries_SuperType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBoxOutlineVisible` instead
    ///
    pub const SetBoxOutlineVisible = setBoxOutlineVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#setBoxOutlineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn setBoxOutlineVisible(self: QBoxPlotSeries, visible: bool) void {
        qtc.QBoxPlotSeries_SetBoxOutlineVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `boxOutlineVisible` instead
    ///
    pub const BoxOutlineVisible = boxOutlineVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxOutlineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn boxOutlineVisible(self: QBoxPlotSeries) bool {
        return qtc.QBoxPlotSeries_BoxOutlineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBoxWidth` instead
    ///
    pub const SetBoxWidth = setBoxWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#setBoxWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` width: f64 `
    ///
    pub fn setBoxWidth(self: QBoxPlotSeries, width: f64) void {
        qtc.QBoxPlotSeries_SetBoxWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `boxWidth` instead
    ///
    pub const BoxWidth = boxWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn boxWidth(self: QBoxPlotSeries) f64 {
        return qtc.QBoxPlotSeries_BoxWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBrush` instead
    ///
    pub const SetBrush = setBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn setBrush(self: QBoxPlotSeries, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QBoxPlotSeries_SetBrush(@ptrCast(self.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `brush` instead
    ///
    pub const Brush = brush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn brush(self: QBoxPlotSeries) QBrush {
        return .{ .ptr = qtc.QBoxPlotSeries_Brush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPen` instead
    ///
    pub const SetPen = setPen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _pen: QPen `
    ///
    pub fn setPen(self: QBoxPlotSeries, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QBoxPlotSeries_SetPen(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `pen` instead
    ///
    pub const Pen = pen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn pen(self: QBoxPlotSeries) QPen {
        return .{ .ptr = qtc.QBoxPlotSeries_Pen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clicked` instead
    ///
    pub const Clicked = clicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` boxset: QBoxSet `
    ///
    pub fn clicked(self: QBoxPlotSeries, boxset: anytype) void {
        comptime _ = @TypeOf(boxset)._is_QBoxSet;
        qtc.QBoxPlotSeries_Clicked(@ptrCast(self.ptr), @ptrCast(boxset.ptr));
    }

    /// ### DEPRECATED: Use `onClicked` instead
    ///
    pub const OnClicked = onClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, boxset: QBoxSet) callconv(.c) void `
    ///
    pub fn onClicked(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QBoxSet) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hovered` instead
    ///
    pub const Hovered = hovered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` status: bool `
    ///
    /// ` boxset: QBoxSet `
    ///
    pub fn hovered(self: QBoxPlotSeries, status: bool, boxset: anytype) void {
        comptime _ = @TypeOf(boxset)._is_QBoxSet;
        qtc.QBoxPlotSeries_Hovered(@ptrCast(self.ptr), status, @ptrCast(boxset.ptr));
    }

    /// ### DEPRECATED: Use `onHovered` instead
    ///
    pub const OnHovered = onHovered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, status: bool, boxset: QBoxSet) callconv(.c) void `
    ///
    pub fn onHovered(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, bool, QBoxSet) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pressed` instead
    ///
    pub const Pressed = pressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` boxset: QBoxSet `
    ///
    pub fn pressed(self: QBoxPlotSeries, boxset: anytype) void {
        comptime _ = @TypeOf(boxset)._is_QBoxSet;
        qtc.QBoxPlotSeries_Pressed(@ptrCast(self.ptr), @ptrCast(boxset.ptr));
    }

    /// ### DEPRECATED: Use `onPressed` instead
    ///
    pub const OnPressed = onPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, boxset: QBoxSet) callconv(.c) void `
    ///
    pub fn onPressed(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QBoxSet) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `released` instead
    ///
    pub const Released = released;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` boxset: QBoxSet `
    ///
    pub fn released(self: QBoxPlotSeries, boxset: anytype) void {
        comptime _ = @TypeOf(boxset)._is_QBoxSet;
        qtc.QBoxPlotSeries_Released(@ptrCast(self.ptr), @ptrCast(boxset.ptr));
    }

    /// ### DEPRECATED: Use `onReleased` instead
    ///
    pub const OnReleased = onReleased;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, boxset: QBoxSet) callconv(.c) void `
    ///
    pub fn onReleased(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QBoxSet) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doubleClicked` instead
    ///
    pub const DoubleClicked = doubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` boxset: QBoxSet `
    ///
    pub fn doubleClicked(self: QBoxPlotSeries, boxset: anytype) void {
        comptime _ = @TypeOf(boxset)._is_QBoxSet;
        qtc.QBoxPlotSeries_DoubleClicked(@ptrCast(self.ptr), @ptrCast(boxset.ptr));
    }

    /// ### DEPRECATED: Use `onDoubleClicked` instead
    ///
    pub const OnDoubleClicked = onDoubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, boxset: QBoxSet) callconv(.c) void `
    ///
    pub fn onDoubleClicked(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QBoxSet) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `countChanged` instead
    ///
    pub const CountChanged = countChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#countChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn countChanged(self: QBoxPlotSeries) void {
        qtc.QBoxPlotSeries_CountChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCountChanged` instead
    ///
    pub const OnCountChanged = onCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#countChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries) callconv(.c) void `
    ///
    pub fn onCountChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_CountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `penChanged` instead
    ///
    pub const PenChanged = penChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn penChanged(self: QBoxPlotSeries) void {
        qtc.QBoxPlotSeries_PenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPenChanged` instead
    ///
    pub const OnPenChanged = onPenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries) callconv(.c) void `
    ///
    pub fn onPenChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_PenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `brushChanged` instead
    ///
    pub const BrushChanged = brushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#brushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn brushChanged(self: QBoxPlotSeries) void {
        qtc.QBoxPlotSeries_BrushChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBrushChanged` instead
    ///
    pub const OnBrushChanged = onBrushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#brushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries) callconv(.c) void `
    ///
    pub fn onBrushChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_BrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `boxOutlineVisibilityChanged` instead
    ///
    pub const BoxOutlineVisibilityChanged = boxOutlineVisibilityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxOutlineVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn boxOutlineVisibilityChanged(self: QBoxPlotSeries) void {
        qtc.QBoxPlotSeries_BoxOutlineVisibilityChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBoxOutlineVisibilityChanged` instead
    ///
    pub const OnBoxOutlineVisibilityChanged = onBoxOutlineVisibilityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxOutlineVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries) callconv(.c) void `
    ///
    pub fn onBoxOutlineVisibilityChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_BoxOutlineVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `boxWidthChanged` instead
    ///
    pub const BoxWidthChanged = boxWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn boxWidthChanged(self: QBoxPlotSeries) void {
        qtc.QBoxPlotSeries_BoxWidthChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBoxWidthChanged` instead
    ///
    pub const OnBoxWidthChanged = onBoxWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries) callconv(.c) void `
    ///
    pub fn onBoxWidthChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_BoxWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `boxsetsAdded` instead
    ///
    pub const BoxsetsAdded = boxsetsAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxsetsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` sets: []QBoxSet `
    ///
    pub fn boxsetsAdded(self: QBoxPlotSeries, sets: []QBoxSet) void {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        qtc.QBoxPlotSeries_BoxsetsAdded(@ptrCast(self.ptr), sets_list);
    }

    /// ### DEPRECATED: Use `onBoxsetsAdded` instead
    ///
    pub const OnBoxsetsAdded = onBoxsetsAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxsetsAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, sets: qtc.libqt_list ([]QBoxSet)) callconv(.c) void `
    ///
    pub fn onBoxsetsAdded(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, qtc.libqt_list) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_BoxsetsAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `boxsetsRemoved` instead
    ///
    pub const BoxsetsRemoved = boxsetsRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxsetsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` sets: []QBoxSet `
    ///
    pub fn boxsetsRemoved(self: QBoxPlotSeries, sets: []QBoxSet) void {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        qtc.QBoxPlotSeries_BoxsetsRemoved(@ptrCast(self.ptr), sets_list);
    }

    /// ### DEPRECATED: Use `onBoxsetsRemoved` instead
    ///
    pub const OnBoxsetsRemoved = onBoxsetsRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxsetsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, sets: qtc.libqt_list ([]QBoxSet)) callconv(.c) void `
    ///
    pub fn onBoxsetsRemoved(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, qtc.libqt_list) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_BoxsetsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBoxPlotSeries.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBoxPlotSeries.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QBoxPlotSeries, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QAbstractSeries_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QBoxPlotSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSeries_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBoxPlotSeries.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn setVisible(self: QBoxPlotSeries) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn isVisible(self: QBoxPlotSeries) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn opacity(self: QBoxPlotSeries) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QBoxPlotSeries, _opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `setUseOpenGL` instead
    ///
    pub const SetUseOpenGL = setUseOpenGL;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn setUseOpenGL(self: QBoxPlotSeries) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `useOpenGL` instead
    ///
    pub const UseOpenGL = useOpenGL;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn useOpenGL(self: QBoxPlotSeries) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `chart` instead
    ///
    pub const Chart = chart;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn chart(self: QBoxPlotSeries) QChart {
        return .{ .ptr = qtc.QAbstractSeries_Chart(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attachAxis` instead
    ///
    pub const AttachAxis = attachAxis;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn attachAxis(self: QBoxPlotSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### DEPRECATED: Use `detachAxis` instead
    ///
    pub const DetachAxis = detachAxis;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn detachAxis(self: QBoxPlotSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### DEPRECATED: Use `attachedAxes` instead
    ///
    pub const AttachedAxes = attachedAxes;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn attachedAxes(self: QBoxPlotSeries, allocator: std.mem.Allocator) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("QBoxPlotSeries.attachedAxes: Memory allocation failed");
        const _data_val: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn show(self: QBoxPlotSeries) void {
        qtc.QAbstractSeries_Show(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn hide(self: QBoxPlotSeries) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nameChanged` instead
    ///
    pub const NameChanged = nameChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn nameChanged(self: QBoxPlotSeries) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onNameChanged` instead
    ///
    pub const OnNameChanged = onNameChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries) callconv(.c) void `
    ///
    pub fn onNameChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn visibleChanged(self: QBoxPlotSeries) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `opacityChanged` instead
    ///
    pub const OpacityChanged = opacityChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn opacityChanged(self: QBoxPlotSeries) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOpacityChanged` instead
    ///
    pub const OnOpacityChanged = onOpacityChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries) callconv(.c) void `
    ///
    pub fn onOpacityChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `useOpenGLChanged` instead
    ///
    pub const UseOpenGLChanged = useOpenGLChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn useOpenGLChanged(self: QBoxPlotSeries) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUseOpenGLChanged` instead
    ///
    pub const OnUseOpenGLChanged = onUseOpenGLChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries) callconv(.c) void `
    ///
    pub fn onUseOpenGLChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setVisible1` instead
    ///
    pub const SetVisible1 = setVisible1;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible1(self: QBoxPlotSeries, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setUseOpenGL1` instead
    ///
    pub const SetUseOpenGL1 = setUseOpenGL1;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn setUseOpenGL1(self: QBoxPlotSeries, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self.ptr), enable);
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QBoxPlotSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBoxPlotSeries.objectName: Memory allocation failed");
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: QBoxPlotSeries, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn isWidgetType(self: QBoxPlotSeries) bool {
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn isWindowType(self: QBoxPlotSeries) bool {
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn isQuickItemType(self: QBoxPlotSeries) bool {
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn signalsBlocked(self: QBoxPlotSeries) bool {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QBoxPlotSeries, b: bool) bool {
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn thread(self: QBoxPlotSeries) QThread {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QBoxPlotSeries, _thread: anytype) bool {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QBoxPlotSeries, interval: i32) i32 {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QBoxPlotSeries, time: i64) i32 {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QBoxPlotSeries, id: i32) void {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QBoxPlotSeries, id: i32) void {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QBoxPlotSeries, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QBoxPlotSeries.children: Memory allocation failed");
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QBoxPlotSeries, _parent: anytype) void {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QBoxPlotSeries, filterObj: anytype) void {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QBoxPlotSeries, obj: anytype) void {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QBoxPlotSeries, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn disconnect3(self: QBoxPlotSeries) bool {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QBoxPlotSeries, receiver: anytype) bool {
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn dumpObjectTree(self: QBoxPlotSeries) void {
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn dumpObjectInfo(self: QBoxPlotSeries) void {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QBoxPlotSeries, _name: [:0]const u8, value: anytype) bool {
        const name_Cstring = _name.ptr;
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: QBoxPlotSeries, _name: [:0]const u8) QVariant {
        const name_Cstring = _name.ptr;
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QBoxPlotSeries, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QBoxPlotSeries.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QBoxPlotSeries.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn bindingStorage(self: QBoxPlotSeries) QBindingStorage {
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn bindingStorage2(self: QBoxPlotSeries) QBindingStorage {
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn destroyed(self: QBoxPlotSeries) void {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn parent(self: QBoxPlotSeries) QObject {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QBoxPlotSeries, classname: [:0]const u8) bool {
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn deleteLater(self: QBoxPlotSeries) void {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QBoxPlotSeries, interval: i32, timerType: i32) i32 {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QBoxPlotSeries, time: i64, timerType: i32) i32 {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QBoxPlotSeries, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QBoxPlotSeries, signal: [:0]const u8) bool {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QBoxPlotSeries, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QBoxPlotSeries, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QBoxPlotSeries, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QBoxPlotSeries, param1: anytype) void {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QObject) callconv(.c) void) void {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QBoxPlotSeries, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBoxPlotSeries_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QBoxPlotSeries, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBoxPlotSeries_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBoxPlotSeries`
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QEvent) callconv(.c) bool) void {
        qtc.QBoxPlotSeries_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QBoxPlotSeries, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBoxPlotSeries_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QBoxPlotSeries, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBoxPlotSeries_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBoxPlotSeries`
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QObject, QEvent) callconv(.c) bool) void {
        qtc.QBoxPlotSeries_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QBoxPlotSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QBoxPlotSeries_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QBoxPlotSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QBoxPlotSeries_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBoxPlotSeries`
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QTimerEvent) callconv(.c) void) void {
        qtc.QBoxPlotSeries_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QBoxPlotSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QBoxPlotSeries_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QBoxPlotSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QBoxPlotSeries_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBoxPlotSeries`
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QChildEvent) callconv(.c) void) void {
        qtc.QBoxPlotSeries_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QBoxPlotSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QBoxPlotSeries_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QBoxPlotSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QBoxPlotSeries_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBoxPlotSeries`
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QEvent) callconv(.c) void) void {
        qtc.QBoxPlotSeries_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QBoxPlotSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBoxPlotSeries_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QBoxPlotSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBoxPlotSeries_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBoxPlotSeries`
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QBoxPlotSeries_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QBoxPlotSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBoxPlotSeries_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QBoxPlotSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBoxPlotSeries_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBoxPlotSeries`
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QBoxPlotSeries_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn sender(self: QBoxPlotSeries) QObject {
        return .{ .ptr = qtc.QBoxPlotSeries_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn superSender(self: QBoxPlotSeries) QObject {
        return .{ .ptr = qtc.QBoxPlotSeries_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QBoxPlotSeries`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QBoxPlotSeries, callback: *const fn () callconv(.c) QObject) void {
        qtc.QBoxPlotSeries_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn senderSignalIndex(self: QBoxPlotSeries) i32 {
        return qtc.QBoxPlotSeries_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn superSenderSignalIndex(self: QBoxPlotSeries) i32 {
        return qtc.QBoxPlotSeries_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBoxPlotSeries`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QBoxPlotSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QBoxPlotSeries_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QBoxPlotSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBoxPlotSeries_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QBoxPlotSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBoxPlotSeries_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBoxPlotSeries`
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, [*:0]const u8) callconv(.c) i32) void {
        qtc.QBoxPlotSeries_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QBoxPlotSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBoxPlotSeries_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QBoxPlotSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBoxPlotSeries_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBoxPlotSeries`
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QMetaMethod) callconv(.c) bool) void {
        qtc.QBoxPlotSeries_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#dtor.QBoxPlotSeries)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn delete(self: QBoxPlotSeries) void {
        qtc.QBoxPlotSeries_Delete(@ptrCast(self.ptr));
    }
};
