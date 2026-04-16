const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractAxis = @import("libqt6").QAbstractAxis;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBrush = @import("libqt6").QBrush;
const QCandlestickSet = @import("libqt6").QCandlestickSet;
const QChart = @import("libqt6").QChart;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
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

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html)
pub const QCandlestickSeries = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCandlestickSeries,

    pub const _is_QCandlestickSeries = {};
    pub const _is_QAbstractSeries = {};
    pub const _is_QObject = {};

    /// New constructs a new QCandlestickSeries object.
    ///
    pub fn New() QCandlestickSeries {
        return .{ .ptr = qtc.QCandlestickSeries_new() };
    }

    /// New2 constructs a new QCandlestickSeries object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QCandlestickSeries {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QCandlestickSeries_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn MetaObject(self: QCandlestickSeries) QMetaObject {
        return .{ .ptr = qtc.QCandlestickSeries_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QCandlestickSeries, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QCandlestickSeries_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn SuperMetaObject(self: QCandlestickSeries) QMetaObject {
        return .{ .ptr = qtc.QCandlestickSeries_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QCandlestickSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCandlestickSeries_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QCandlestickSeries_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QCandlestickSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCandlestickSeries_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QCandlestickSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCandlestickSeries_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QCandlestickSeries_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QCandlestickSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCandlestickSeries_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickseries.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` set: QCandlestickSet `
    ///
    pub fn Append(self: QCandlestickSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QCandlestickSet;
        return qtc.QCandlestickSeries_Append(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` set: QCandlestickSet `
    ///
    pub fn Remove(self: QCandlestickSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QCandlestickSet;
        return qtc.QCandlestickSeries_Remove(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` sets: []QCandlestickSet `
    ///
    pub fn Append2(self: QCandlestickSeries, sets: []QCandlestickSet) bool {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        return qtc.QCandlestickSeries_Append2(@ptrCast(self.ptr), sets_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` sets: []QCandlestickSet `
    ///
    pub fn Remove2(self: QCandlestickSeries, sets: []QCandlestickSet) bool {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        return qtc.QCandlestickSeries_Remove2(@ptrCast(self.ptr), sets_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` set: QCandlestickSet `
    ///
    pub fn Insert(self: QCandlestickSeries, index: i32, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QCandlestickSet;
        return qtc.QCandlestickSeries_Insert(@ptrCast(self.ptr), @bitCast(index), @ptrCast(set.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` set: QCandlestickSet `
    ///
    pub fn Take(self: QCandlestickSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QCandlestickSet;
        return qtc.QCandlestickSeries_Take(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn Clear(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#sets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Sets(self: QCandlestickSeries, allocator: std.mem.Allocator) []QCandlestickSet {
        const _arr: qtc.libqt_list = qtc.QCandlestickSeries_Sets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QCandlestickSet, _arr.len) catch @panic("qcandlestickseries.Sets: Memory allocation failed");
        const _data: [*]QtC.QCandlestickSet = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn Count(self: QCandlestickSeries) i32 {
        return qtc.QCandlestickSeries_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn Type(self: QCandlestickSeries) i32 {
        return qtc.QCandlestickSeries_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnType(self: QCandlestickSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QCandlestickSeries_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperType` instead
    ///
    pub const QBaseType = SuperType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn SuperType(self: QCandlestickSeries) i32 {
        return qtc.QCandlestickSeries_SuperType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setMaximumColumnWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` maximumColumnWidth: f64 `
    ///
    pub fn SetMaximumColumnWidth(self: QCandlestickSeries, maximumColumnWidth: f64) void {
        qtc.QCandlestickSeries_SetMaximumColumnWidth(@ptrCast(self.ptr), @bitCast(maximumColumnWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#maximumColumnWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn MaximumColumnWidth(self: QCandlestickSeries) f64 {
        return qtc.QCandlestickSeries_MaximumColumnWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setMinimumColumnWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` minimumColumnWidth: f64 `
    ///
    pub fn SetMinimumColumnWidth(self: QCandlestickSeries, minimumColumnWidth: f64) void {
        qtc.QCandlestickSeries_SetMinimumColumnWidth(@ptrCast(self.ptr), @bitCast(minimumColumnWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#minimumColumnWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn MinimumColumnWidth(self: QCandlestickSeries) f64 {
        return qtc.QCandlestickSeries_MinimumColumnWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setBodyWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` bodyWidth: f64 `
    ///
    pub fn SetBodyWidth(self: QCandlestickSeries, bodyWidth: f64) void {
        qtc.QCandlestickSeries_SetBodyWidth(@ptrCast(self.ptr), @bitCast(bodyWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn BodyWidth(self: QCandlestickSeries) f64 {
        return qtc.QCandlestickSeries_BodyWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setBodyOutlineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` bodyOutlineVisible: bool `
    ///
    pub fn SetBodyOutlineVisible(self: QCandlestickSeries, bodyOutlineVisible: bool) void {
        qtc.QCandlestickSeries_SetBodyOutlineVisible(@ptrCast(self.ptr), bodyOutlineVisible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyOutlineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn BodyOutlineVisible(self: QCandlestickSeries) bool {
        return qtc.QCandlestickSeries_BodyOutlineVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setCapsWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` capsWidth: f64 `
    ///
    pub fn SetCapsWidth(self: QCandlestickSeries, capsWidth: f64) void {
        qtc.QCandlestickSeries_SetCapsWidth(@ptrCast(self.ptr), @bitCast(capsWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn CapsWidth(self: QCandlestickSeries) f64 {
        return qtc.QCandlestickSeries_CapsWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setCapsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` capsVisible: bool `
    ///
    pub fn SetCapsVisible(self: QCandlestickSeries, capsVisible: bool) void {
        qtc.QCandlestickSeries_SetCapsVisible(@ptrCast(self.ptr), capsVisible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn CapsVisible(self: QCandlestickSeries) bool {
        return qtc.QCandlestickSeries_CapsVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setIncreasingColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` increasingColor: QColor `
    ///
    pub fn SetIncreasingColor(self: QCandlestickSeries, increasingColor: anytype) void {
        comptime _ = @TypeOf(increasingColor)._is_QColor;
        qtc.QCandlestickSeries_SetIncreasingColor(@ptrCast(self.ptr), @ptrCast(increasingColor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#increasingColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn IncreasingColor(self: QCandlestickSeries) QColor {
        return .{ .ptr = qtc.QCandlestickSeries_IncreasingColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setDecreasingColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` decreasingColor: QColor `
    ///
    pub fn SetDecreasingColor(self: QCandlestickSeries, decreasingColor: anytype) void {
        comptime _ = @TypeOf(decreasingColor)._is_QColor;
        qtc.QCandlestickSeries_SetDecreasingColor(@ptrCast(self.ptr), @ptrCast(decreasingColor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#decreasingColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn DecreasingColor(self: QCandlestickSeries) QColor {
        return .{ .ptr = qtc.QCandlestickSeries_DecreasingColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBrush(self: QCandlestickSeries, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QCandlestickSeries_SetBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn Brush(self: QCandlestickSeries) QBrush {
        return .{ .ptr = qtc.QCandlestickSeries_Brush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetPen(self: QCandlestickSeries, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QCandlestickSeries_SetPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn Pen(self: QCandlestickSeries) QPen {
        return .{ .ptr = qtc.QCandlestickSeries_Pen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` set: QCandlestickSet `
    ///
    pub fn Clicked(self: QCandlestickSeries, set: anytype) void {
        comptime _ = @TypeOf(set)._is_QCandlestickSet;
        qtc.QCandlestickSeries_Clicked(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, set: QCandlestickSet) callconv(.c) void `
    ///
    pub fn OnClicked(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` status: bool `
    ///
    /// ` set: QCandlestickSet `
    ///
    pub fn Hovered(self: QCandlestickSeries, status: bool, set: anytype) void {
        comptime _ = @TypeOf(set)._is_QCandlestickSet;
        qtc.QCandlestickSeries_Hovered(@ptrCast(self.ptr), status, @ptrCast(set.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, status: bool, set: QCandlestickSet) callconv(.c) void `
    ///
    pub fn OnHovered(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, bool, QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` set: QCandlestickSet `
    ///
    pub fn Pressed(self: QCandlestickSeries, set: anytype) void {
        comptime _ = @TypeOf(set)._is_QCandlestickSet;
        qtc.QCandlestickSeries_Pressed(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, set: QCandlestickSet) callconv(.c) void `
    ///
    pub fn OnPressed(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` set: QCandlestickSet `
    ///
    pub fn Released(self: QCandlestickSeries, set: anytype) void {
        comptime _ = @TypeOf(set)._is_QCandlestickSet;
        qtc.QCandlestickSeries_Released(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, set: QCandlestickSet) callconv(.c) void `
    ///
    pub fn OnReleased(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` set: QCandlestickSet `
    ///
    pub fn DoubleClicked(self: QCandlestickSeries, set: anytype) void {
        comptime _ = @TypeOf(set)._is_QCandlestickSet;
        qtc.QCandlestickSeries_DoubleClicked(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, set: QCandlestickSet) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#candlestickSetsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` sets: []QCandlestickSet `
    ///
    pub fn CandlestickSetsAdded(self: QCandlestickSeries, sets: []QCandlestickSet) void {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        qtc.QCandlestickSeries_CandlestickSetsAdded(@ptrCast(self.ptr), sets_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#candlestickSetsAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, sets: qtc.libqt_list ([]QCandlestickSet)) callconv(.c) void `
    ///
    pub fn OnCandlestickSetsAdded(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, qtc.libqt_list) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_CandlestickSetsAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#candlestickSetsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` sets: []QCandlestickSet `
    ///
    pub fn CandlestickSetsRemoved(self: QCandlestickSeries, sets: []QCandlestickSet) void {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        qtc.QCandlestickSeries_CandlestickSetsRemoved(@ptrCast(self.ptr), sets_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#candlestickSetsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, sets: qtc.libqt_list ([]QCandlestickSet)) callconv(.c) void `
    ///
    pub fn OnCandlestickSetsRemoved(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, qtc.libqt_list) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_CandlestickSetsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#countChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn CountChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_CountChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#countChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn OnCountChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_CountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#maximumColumnWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn MaximumColumnWidthChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_MaximumColumnWidthChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#maximumColumnWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn OnMaximumColumnWidthChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_MaximumColumnWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#minimumColumnWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn MinimumColumnWidthChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_MinimumColumnWidthChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#minimumColumnWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn OnMinimumColumnWidthChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_MinimumColumnWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn BodyWidthChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_BodyWidthChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn OnBodyWidthChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_BodyWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyOutlineVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn BodyOutlineVisibilityChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_BodyOutlineVisibilityChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyOutlineVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn OnBodyOutlineVisibilityChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_BodyOutlineVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn CapsWidthChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_CapsWidthChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn OnCapsWidthChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_CapsWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn CapsVisibilityChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_CapsVisibilityChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn OnCapsVisibilityChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_CapsVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#increasingColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn IncreasingColorChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_IncreasingColorChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#increasingColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn OnIncreasingColorChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_IncreasingColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#decreasingColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn DecreasingColorChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_DecreasingColorChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#decreasingColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn OnDecreasingColorChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_DecreasingColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#brushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn BrushChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_BrushChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#brushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn OnBrushChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_BrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn PenChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_PenChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn OnPenChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_PenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickseries.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickseries.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QCandlestickSeries, name: []const u8) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QCandlestickSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSeries_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickseries.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn SetVisible(self: QCandlestickSeries) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn IsVisible(self: QCandlestickSeries) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn Opacity(self: QCandlestickSeries) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: QCandlestickSeries, opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn SetUseOpenGL(self: QCandlestickSeries) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn UseOpenGL(self: QCandlestickSeries) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn Chart(self: QCandlestickSeries) QChart {
        return .{ .ptr = qtc.QAbstractSeries_Chart(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn AttachAxis(self: QCandlestickSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn DetachAxis(self: QCandlestickSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AttachedAxes(self: QCandlestickSeries, allocator: std.mem.Allocator) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("qcandlestickseries.AttachedAxes: Memory allocation failed");
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn Show(self: QCandlestickSeries) void {
        qtc.QAbstractSeries_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn Hide(self: QCandlestickSeries) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn NameChanged(self: QCandlestickSeries) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn OnNameChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn VisibleChanged(self: QCandlestickSeries) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn OpacityChanged(self: QCandlestickSeries) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn UseOpenGLChanged(self: QCandlestickSeries) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn OnUseOpenGLChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible1(self: QCandlestickSeries, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUseOpenGL1(self: QCandlestickSeries, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QCandlestickSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickseries.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QCandlestickSeries, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn IsWidgetType(self: QCandlestickSeries) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn IsWindowType(self: QCandlestickSeries) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn IsQuickItemType(self: QCandlestickSeries) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn SignalsBlocked(self: QCandlestickSeries) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QCandlestickSeries, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn Thread(self: QCandlestickSeries) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QCandlestickSeries, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QCandlestickSeries, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QCandlestickSeries, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QCandlestickSeries, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QCandlestickSeries, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QCandlestickSeries, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qcandlestickseries.Children: Memory allocation failed");
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QCandlestickSeries, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QCandlestickSeries, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QCandlestickSeries, obj: anytype) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QCandlestickSeries, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn Disconnect3(self: QCandlestickSeries) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QCandlestickSeries, receiver: anytype) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn DumpObjectTree(self: QCandlestickSeries) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn DumpObjectInfo(self: QCandlestickSeries) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QCandlestickSeries, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QCandlestickSeries, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QCandlestickSeries, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qcandlestickseries.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcandlestickseries.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn BindingStorage(self: QCandlestickSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn BindingStorage2(self: QCandlestickSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn Destroyed(self: QCandlestickSeries) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn Parent(self: QCandlestickSeries) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QCandlestickSeries, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn DeleteLater(self: QCandlestickSeries) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QCandlestickSeries, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QCandlestickSeries, time: i64, timerType: i32) i32 {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QCandlestickSeries, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QCandlestickSeries, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QCandlestickSeries, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QCandlestickSeries, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QCandlestickSeries, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QCandlestickSeries, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QObject) callconv(.c) void) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QCandlestickSeries, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCandlestickSeries_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QCandlestickSeries, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCandlestickSeries_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QEvent) callconv(.c) bool) void {
        qtc.QCandlestickSeries_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QCandlestickSeries, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCandlestickSeries_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QCandlestickSeries, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCandlestickSeries_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QObject, QEvent) callconv(.c) bool) void {
        qtc.QCandlestickSeries_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QCandlestickSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QCandlestickSeries_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QCandlestickSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QCandlestickSeries_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QTimerEvent) callconv(.c) void) void {
        qtc.QCandlestickSeries_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QCandlestickSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QCandlestickSeries_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QCandlestickSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QCandlestickSeries_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QChildEvent) callconv(.c) void) void {
        qtc.QCandlestickSeries_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QCandlestickSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QCandlestickSeries_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QCandlestickSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QCandlestickSeries_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QEvent) callconv(.c) void) void {
        qtc.QCandlestickSeries_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QCandlestickSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickSeries_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QCandlestickSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickSeries_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QCandlestickSeries_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QCandlestickSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickSeries_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QCandlestickSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickSeries_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QCandlestickSeries_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn Sender(self: QCandlestickSeries) QObject {
        return .{ .ptr = qtc.QCandlestickSeries_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn SuperSender(self: QCandlestickSeries) QObject {
        return .{ .ptr = qtc.QCandlestickSeries_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QCandlestickSeries, callback: *const fn () callconv(.c) QObject) void {
        qtc.QCandlestickSeries_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn SenderSignalIndex(self: QCandlestickSeries) i32 {
        return qtc.QCandlestickSeries_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn SuperSenderSignalIndex(self: QCandlestickSeries) i32 {
        return qtc.QCandlestickSeries_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QCandlestickSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QCandlestickSeries_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QCandlestickSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCandlestickSeries_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QCandlestickSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCandlestickSeries_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, [*:0]const u8) callconv(.c) i32) void {
        qtc.QCandlestickSeries_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QCandlestickSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCandlestickSeries_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QCandlestickSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCandlestickSeries_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QMetaMethod) callconv(.c) bool) void {
        qtc.QCandlestickSeries_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#dtor.QCandlestickSeries)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn Delete(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_Delete(@ptrCast(self.ptr));
    }
};
