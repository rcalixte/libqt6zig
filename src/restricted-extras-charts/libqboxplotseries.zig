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

    /// New constructs a new QBoxPlotSeries object.
    ///
    pub fn New() QBoxPlotSeries {
        return .{ .ptr = qtc.QBoxPlotSeries_new() };
    }

    /// New2 constructs a new QBoxPlotSeries object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QBoxPlotSeries {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QBoxPlotSeries_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn MetaObject(self: QBoxPlotSeries) QMetaObject {
        return .{ .ptr = qtc.QBoxPlotSeries_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QBoxPlotSeries, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QBoxPlotSeries_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn SuperMetaObject(self: QBoxPlotSeries) QMetaObject {
        return .{ .ptr = qtc.QBoxPlotSeries_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QBoxPlotSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBoxPlotSeries_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QBoxPlotSeries_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QBoxPlotSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBoxPlotSeries_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QBoxPlotSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBoxPlotSeries_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QBoxPlotSeries_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QBoxPlotSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBoxPlotSeries_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxplotseries.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` box: QBoxSet `
    ///
    pub fn Append(self: QBoxPlotSeries, box: anytype) bool {
        comptime _ = @TypeOf(box)._is_QBoxSet;
        return qtc.QBoxPlotSeries_Append(@ptrCast(self.ptr), @ptrCast(box.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` box: QBoxSet `
    ///
    pub fn Remove(self: QBoxPlotSeries, box: anytype) bool {
        comptime _ = @TypeOf(box)._is_QBoxSet;
        return qtc.QBoxPlotSeries_Remove(@ptrCast(self.ptr), @ptrCast(box.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` box: QBoxSet `
    ///
    pub fn Take(self: QBoxPlotSeries, box: anytype) bool {
        comptime _ = @TypeOf(box)._is_QBoxSet;
        return qtc.QBoxPlotSeries_Take(@ptrCast(self.ptr), @ptrCast(box.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` boxes: []QBoxSet `
    ///
    pub fn Append2(self: QBoxPlotSeries, boxes: []QBoxSet) bool {
        const boxes_list = qtc.libqt_list{
            .len = boxes.len,
            .data = @ptrCast(boxes.ptr),
        };
        return qtc.QBoxPlotSeries_Append2(@ptrCast(self.ptr), boxes_list);
    }

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
    pub fn Insert(self: QBoxPlotSeries, index: i32, box: anytype) bool {
        comptime _ = @TypeOf(box)._is_QBoxSet;
        return qtc.QBoxPlotSeries_Insert(@ptrCast(self.ptr), @bitCast(index), @ptrCast(box.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn Count(self: QBoxPlotSeries) i32 {
        return qtc.QBoxPlotSeries_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxSets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BoxSets(self: QBoxPlotSeries, allocator: std.mem.Allocator) []QBoxSet {
        const _arr: qtc.libqt_list = qtc.QBoxPlotSeries_BoxSets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBoxSet, _arr.len) catch @panic("qboxplotseries.BoxSets: Memory allocation failed");
        const _data: [*]QtC.QBoxSet = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn Clear(self: QBoxPlotSeries) void {
        qtc.QBoxPlotSeries_Clear(@ptrCast(self.ptr));
    }

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
    pub fn Type(self: QBoxPlotSeries) i32 {
        return qtc.QBoxPlotSeries_Type(@ptrCast(self.ptr));
    }

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
    pub fn OnType(self: QBoxPlotSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QBoxPlotSeries_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperType` instead
    ///
    pub const QBaseType = SuperType;

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
    pub fn SuperType(self: QBoxPlotSeries) i32 {
        return qtc.QBoxPlotSeries_SuperType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#setBoxOutlineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetBoxOutlineVisible(self: QBoxPlotSeries, visible: bool) void {
        qtc.QBoxPlotSeries_SetBoxOutlineVisible(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxOutlineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn BoxOutlineVisible(self: QBoxPlotSeries) bool {
        return qtc.QBoxPlotSeries_BoxOutlineVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#setBoxWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` width: f64 `
    ///
    pub fn SetBoxWidth(self: QBoxPlotSeries, width: f64) void {
        qtc.QBoxPlotSeries_SetBoxWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn BoxWidth(self: QBoxPlotSeries) f64 {
        return qtc.QBoxPlotSeries_BoxWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBrush(self: QBoxPlotSeries, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QBoxPlotSeries_SetBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn Brush(self: QBoxPlotSeries) QBrush {
        return .{ .ptr = qtc.QBoxPlotSeries_Brush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetPen(self: QBoxPlotSeries, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QBoxPlotSeries_SetPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn Pen(self: QBoxPlotSeries) QPen {
        return .{ .ptr = qtc.QBoxPlotSeries_Pen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` boxset: QBoxSet `
    ///
    pub fn Clicked(self: QBoxPlotSeries, boxset: anytype) void {
        comptime _ = @TypeOf(boxset)._is_QBoxSet;
        qtc.QBoxPlotSeries_Clicked(@ptrCast(self.ptr), @ptrCast(boxset.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, boxset: QBoxSet) callconv(.c) void `
    ///
    pub fn OnClicked(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QBoxSet) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Hovered(self: QBoxPlotSeries, status: bool, boxset: anytype) void {
        comptime _ = @TypeOf(boxset)._is_QBoxSet;
        qtc.QBoxPlotSeries_Hovered(@ptrCast(self.ptr), status, @ptrCast(boxset.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, status: bool, boxset: QBoxSet) callconv(.c) void `
    ///
    pub fn OnHovered(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, bool, QBoxSet) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` boxset: QBoxSet `
    ///
    pub fn Pressed(self: QBoxPlotSeries, boxset: anytype) void {
        comptime _ = @TypeOf(boxset)._is_QBoxSet;
        qtc.QBoxPlotSeries_Pressed(@ptrCast(self.ptr), @ptrCast(boxset.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, boxset: QBoxSet) callconv(.c) void `
    ///
    pub fn OnPressed(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QBoxSet) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` boxset: QBoxSet `
    ///
    pub fn Released(self: QBoxPlotSeries, boxset: anytype) void {
        comptime _ = @TypeOf(boxset)._is_QBoxSet;
        qtc.QBoxPlotSeries_Released(@ptrCast(self.ptr), @ptrCast(boxset.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, boxset: QBoxSet) callconv(.c) void `
    ///
    pub fn OnReleased(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QBoxSet) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` boxset: QBoxSet `
    ///
    pub fn DoubleClicked(self: QBoxPlotSeries, boxset: anytype) void {
        comptime _ = @TypeOf(boxset)._is_QBoxSet;
        qtc.QBoxPlotSeries_DoubleClicked(@ptrCast(self.ptr), @ptrCast(boxset.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, boxset: QBoxSet) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QBoxSet) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#countChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn CountChanged(self: QBoxPlotSeries) void {
        qtc.QBoxPlotSeries_CountChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#countChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries) callconv(.c) void `
    ///
    pub fn OnCountChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_CountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn PenChanged(self: QBoxPlotSeries) void {
        qtc.QBoxPlotSeries_PenChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries) callconv(.c) void `
    ///
    pub fn OnPenChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_PenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#brushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn BrushChanged(self: QBoxPlotSeries) void {
        qtc.QBoxPlotSeries_BrushChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#brushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries) callconv(.c) void `
    ///
    pub fn OnBrushChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_BrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxOutlineVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn BoxOutlineVisibilityChanged(self: QBoxPlotSeries) void {
        qtc.QBoxPlotSeries_BoxOutlineVisibilityChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxOutlineVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries) callconv(.c) void `
    ///
    pub fn OnBoxOutlineVisibilityChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_BoxOutlineVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn BoxWidthChanged(self: QBoxPlotSeries) void {
        qtc.QBoxPlotSeries_BoxWidthChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries) callconv(.c) void `
    ///
    pub fn OnBoxWidthChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_BoxWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxsetsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` sets: []QBoxSet `
    ///
    pub fn BoxsetsAdded(self: QBoxPlotSeries, sets: []QBoxSet) void {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        qtc.QBoxPlotSeries_BoxsetsAdded(@ptrCast(self.ptr), sets_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxsetsAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, sets: qtc.libqt_list ([]QBoxSet)) callconv(.c) void `
    ///
    pub fn OnBoxsetsAdded(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, qtc.libqt_list) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_BoxsetsAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxsetsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` sets: []QBoxSet `
    ///
    pub fn BoxsetsRemoved(self: QBoxPlotSeries, sets: []QBoxSet) void {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        qtc.QBoxPlotSeries_BoxsetsRemoved(@ptrCast(self.ptr), sets_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxsetsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` callback: *const fn (self: QBoxPlotSeries, sets: qtc.libqt_list ([]QBoxSet)) callconv(.c) void `
    ///
    pub fn OnBoxsetsRemoved(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, qtc.libqt_list) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_BoxsetsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxplotseries.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxplotseries.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QBoxPlotSeries, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QAbstractSeries_SetName(@ptrCast(self.ptr), name_str);
    }

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
    pub fn Name(self: QBoxPlotSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSeries_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxplotseries.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn SetVisible(self: QBoxPlotSeries) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn IsVisible(self: QBoxPlotSeries) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn Opacity(self: QBoxPlotSeries) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: QBoxPlotSeries, opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn SetUseOpenGL(self: QBoxPlotSeries) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn UseOpenGL(self: QBoxPlotSeries) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn Chart(self: QBoxPlotSeries) QChart {
        return .{ .ptr = qtc.QAbstractSeries_Chart(@ptrCast(self.ptr)) };
    }

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
    pub fn AttachAxis(self: QBoxPlotSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

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
    pub fn DetachAxis(self: QBoxPlotSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

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
    pub fn AttachedAxes(self: QBoxPlotSeries, allocator: std.mem.Allocator) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("qboxplotseries.AttachedAxes: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn Show(self: QBoxPlotSeries) void {
        qtc.QAbstractSeries_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn Hide(self: QBoxPlotSeries) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn NameChanged(self: QBoxPlotSeries) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self.ptr));
    }

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
    pub fn OnNameChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn VisibleChanged(self: QBoxPlotSeries) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self.ptr));
    }

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
    pub fn OnVisibleChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn OpacityChanged(self: QBoxPlotSeries) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self.ptr));
    }

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
    pub fn OnOpacityChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn UseOpenGLChanged(self: QBoxPlotSeries) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self.ptr));
    }

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
    pub fn OnUseOpenGLChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetVisible1(self: QBoxPlotSeries, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self.ptr), visible);
    }

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
    pub fn SetUseOpenGL1(self: QBoxPlotSeries, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self.ptr), enable);
    }

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
    pub fn ObjectName(self: QBoxPlotSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxplotseries.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QBoxPlotSeries, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn IsWidgetType(self: QBoxPlotSeries) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn IsWindowType(self: QBoxPlotSeries) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn IsQuickItemType(self: QBoxPlotSeries) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn SignalsBlocked(self: QBoxPlotSeries) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QBoxPlotSeries, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn Thread(self: QBoxPlotSeries) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QBoxPlotSeries, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QBoxPlotSeries, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QBoxPlotSeries, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QBoxPlotSeries, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QBoxPlotSeries, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QBoxPlotSeries, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qboxplotseries.Children: Memory allocation failed");
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QBoxPlotSeries, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QBoxPlotSeries, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QBoxPlotSeries, obj: anytype) void {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QBoxPlotSeries, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn Disconnect3(self: QBoxPlotSeries) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QBoxPlotSeries, receiver: anytype) bool {
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn DumpObjectTree(self: QBoxPlotSeries) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn DumpObjectInfo(self: QBoxPlotSeries) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QBoxPlotSeries, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QBoxPlotSeries, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QBoxPlotSeries, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qboxplotseries.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qboxplotseries.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn BindingStorage(self: QBoxPlotSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn BindingStorage2(self: QBoxPlotSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn Destroyed(self: QBoxPlotSeries) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn Parent(self: QBoxPlotSeries) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QBoxPlotSeries, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn DeleteLater(self: QBoxPlotSeries) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QBoxPlotSeries, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QBoxPlotSeries, time: i64, timerType: i32) i32 {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QBoxPlotSeries, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QBoxPlotSeries, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QBoxPlotSeries, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QBoxPlotSeries, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QBoxPlotSeries, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QBoxPlotSeries, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QObject) callconv(.c) void) void {
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QBoxPlotSeries, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBoxPlotSeries_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QBoxPlotSeries, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBoxPlotSeries_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QEvent) callconv(.c) bool) void {
        qtc.QBoxPlotSeries_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QBoxPlotSeries, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBoxPlotSeries_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QBoxPlotSeries, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBoxPlotSeries_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QObject, QEvent) callconv(.c) bool) void {
        qtc.QBoxPlotSeries_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QBoxPlotSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QBoxPlotSeries_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QBoxPlotSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QBoxPlotSeries_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QTimerEvent) callconv(.c) void) void {
        qtc.QBoxPlotSeries_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QBoxPlotSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QBoxPlotSeries_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QBoxPlotSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QBoxPlotSeries_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QChildEvent) callconv(.c) void) void {
        qtc.QBoxPlotSeries_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QBoxPlotSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QBoxPlotSeries_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QBoxPlotSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QBoxPlotSeries_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QEvent) callconv(.c) void) void {
        qtc.QBoxPlotSeries_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QBoxPlotSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBoxPlotSeries_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QBoxPlotSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBoxPlotSeries_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QBoxPlotSeries_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QBoxPlotSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBoxPlotSeries_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QBoxPlotSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBoxPlotSeries_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QBoxPlotSeries_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QBoxPlotSeries) QObject {
        return .{ .ptr = qtc.QBoxPlotSeries_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn SuperSender(self: QBoxPlotSeries) QObject {
        return .{ .ptr = qtc.QBoxPlotSeries_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QBoxPlotSeries, callback: *const fn () callconv(.c) QObject) void {
        qtc.QBoxPlotSeries_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QBoxPlotSeries) i32 {
        return qtc.QBoxPlotSeries_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBoxPlotSeries `
    ///
    pub fn SuperSenderSignalIndex(self: QBoxPlotSeries) i32 {
        return qtc.QBoxPlotSeries_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QBoxPlotSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QBoxPlotSeries_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QBoxPlotSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBoxPlotSeries_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QBoxPlotSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBoxPlotSeries_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, [*:0]const u8) callconv(.c) i32) void {
        qtc.QBoxPlotSeries_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QBoxPlotSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBoxPlotSeries_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBoxPlotSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QBoxPlotSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBoxPlotSeries_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, QMetaMethod) callconv(.c) bool) void {
        qtc.QBoxPlotSeries_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QBoxPlotSeries, callback: *const fn (QBoxPlotSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#dtor.QBoxPlotSeries)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QBoxPlotSeries `
    ///
    pub fn Delete(self: QBoxPlotSeries) void {
        qtc.QBoxPlotSeries_Delete(@ptrCast(self.ptr));
    }
};
