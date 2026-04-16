const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractAxis = @import("libqt6").QAbstractAxis;
const QBarSet = @import("libqt6").QBarSet;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChart = @import("libqt6").QChart;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractbarseries_enums = @import("libqabstractbarseries.zig").enums;
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhorizontalbarseries-qtcharts.html)
pub const QHorizontalBarSeries = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhorizontalbarseries-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHorizontalBarSeries,

    pub const _is_QHorizontalBarSeries = {};
    pub const _is_QAbstractBarSeries = {};
    pub const _is_QAbstractSeries = {};
    pub const _is_QObject = {};

    /// New constructs a new QHorizontalBarSeries object.
    ///
    pub fn New() QHorizontalBarSeries {
        return .{ .ptr = qtc.QHorizontalBarSeries_new() };
    }

    /// New2 constructs a new QHorizontalBarSeries object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QHorizontalBarSeries {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QHorizontalBarSeries_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn MetaObject(self: QHorizontalBarSeries) QMetaObject {
        return .{ .ptr = qtc.QHorizontalBarSeries_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QHorizontalBarSeries, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QHorizontalBarSeries_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn SuperMetaObject(self: QHorizontalBarSeries) QMetaObject {
        return .{ .ptr = qtc.QHorizontalBarSeries_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QHorizontalBarSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHorizontalBarSeries_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QHorizontalBarSeries_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QHorizontalBarSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHorizontalBarSeries_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QHorizontalBarSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHorizontalBarSeries_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QHorizontalBarSeries_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QHorizontalBarSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHorizontalBarSeries_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhorizontalbarseries.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhorizontalbarseries-qtcharts.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn Type(self: QHorizontalBarSeries) i32 {
        return qtc.QHorizontalBarSeries_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhorizontalbarseries-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnType(self: QHorizontalBarSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QHorizontalBarSeries_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperType` instead
    ///
    pub const QBaseType = SuperType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhorizontalbarseries-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn SuperType(self: QHorizontalBarSeries) i32 {
        return qtc.QHorizontalBarSeries_SuperType(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhorizontalbarseries.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhorizontalbarseries.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` width: f64 `
    ///
    pub fn SetBarWidth(self: QHorizontalBarSeries, width: f64) void {
        qtc.QAbstractBarSeries_SetBarWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn BarWidth(self: QHorizontalBarSeries) f64 {
        return qtc.QAbstractBarSeries_BarWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` set: QBarSet `
    ///
    pub fn Append(self: QHorizontalBarSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Append(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` set: QBarSet `
    ///
    pub fn Remove(self: QHorizontalBarSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Remove(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` set: QBarSet `
    ///
    pub fn Take(self: QHorizontalBarSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Take(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` sets: []QBarSet `
    ///
    pub fn Append2(self: QHorizontalBarSeries, sets: []QBarSet) bool {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        return qtc.QAbstractBarSeries_Append2(@ptrCast(self.ptr), sets_list);
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` set: QBarSet `
    ///
    pub fn Insert(self: QHorizontalBarSeries, index: i32, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Insert(@ptrCast(self.ptr), @bitCast(index), @ptrCast(set.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn Count(self: QHorizontalBarSeries) i32 {
        return qtc.QAbstractBarSeries_Count(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BarSets(self: QHorizontalBarSeries, allocator: std.mem.Allocator) []QBarSet {
        const _arr: qtc.libqt_list = qtc.QAbstractBarSeries_BarSets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBarSet, _arr.len) catch @panic("qhorizontalbarseries.BarSets: Memory allocation failed");
        const _data: [*]QtC.QBarSet = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn Clear(self: QHorizontalBarSeries) void {
        qtc.QAbstractBarSeries_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn SetLabelsVisible(self: QHorizontalBarSeries) void {
        qtc.QAbstractBarSeries_SetLabelsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn IsLabelsVisible(self: QHorizontalBarSeries) bool {
        return qtc.QAbstractBarSeries_IsLabelsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn SetLabelsFormat(self: QHorizontalBarSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QAbstractBarSeries_SetLabelsFormat(@ptrCast(self.ptr), format_str);
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LabelsFormat(self: QHorizontalBarSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractBarSeries_LabelsFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhorizontalbarseries.LabelsFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` angle: f64 `
    ///
    pub fn SetLabelsAngle(self: QHorizontalBarSeries, angle: f64) void {
        qtc.QAbstractBarSeries_SetLabelsAngle(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn LabelsAngle(self: QHorizontalBarSeries) f64 {
        return qtc.QAbstractBarSeries_LabelsAngle(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` position: qabstractbarseries_enums.LabelsPosition `
    ///
    pub fn SetLabelsPosition(self: QHorizontalBarSeries, position: i32) void {
        qtc.QAbstractBarSeries_SetLabelsPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractbarseries_enums.LabelsPosition `
    ///
    pub fn LabelsPosition(self: QHorizontalBarSeries) i32 {
        return qtc.QAbstractBarSeries_LabelsPosition(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` precision: i32 `
    ///
    pub fn SetLabelsPrecision(self: QHorizontalBarSeries, precision: i32) void {
        qtc.QAbstractBarSeries_SetLabelsPrecision(@ptrCast(self.ptr), @bitCast(precision));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn LabelsPrecision(self: QHorizontalBarSeries) i32 {
        return qtc.QAbstractBarSeries_LabelsPrecision(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn Clicked(self: QHorizontalBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Clicked(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnClicked(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` status: bool `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn Hovered(self: QHorizontalBarSeries, status: bool, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Hovered(@ptrCast(self.ptr), status, @bitCast(index), @ptrCast(barset.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, status: bool, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnHovered(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, bool, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn Pressed(self: QHorizontalBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Pressed(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnPressed(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn Released(self: QHorizontalBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Released(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnReleased(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn DoubleClicked(self: QHorizontalBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_DoubleClicked(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn CountChanged(self: QHorizontalBarSeries) void {
        qtc.QAbstractBarSeries_CountChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries) callconv(.c) void `
    ///
    pub fn OnCountChanged(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_CountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn LabelsVisibleChanged(self: QHorizontalBarSeries) void {
        qtc.QAbstractBarSeries_LabelsVisibleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries) callconv(.c) void `
    ///
    pub fn OnLabelsVisibleChanged(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn LabelsFormatChanged(self: QHorizontalBarSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QAbstractBarSeries_LabelsFormatChanged(@ptrCast(self.ptr), format_str);
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, format: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnLabelsFormatChanged(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` position: qabstractbarseries_enums.LabelsPosition `
    ///
    pub fn LabelsPositionChanged(self: QHorizontalBarSeries, position: i32) void {
        qtc.QAbstractBarSeries_LabelsPositionChanged(@ptrCast(self.ptr), @bitCast(position));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, position: qabstractbarseries_enums.LabelsPosition) callconv(.c) void `
    ///
    pub fn OnLabelsPositionChanged(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, i32) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` angle: f64 `
    ///
    pub fn LabelsAngleChanged(self: QHorizontalBarSeries, angle: f64) void {
        qtc.QAbstractBarSeries_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, angle: f64) callconv(.c) void `
    ///
    pub fn OnLabelsAngleChanged(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, f64) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` precision: i32 `
    ///
    pub fn LabelsPrecisionChanged(self: QHorizontalBarSeries, precision: i32) void {
        qtc.QAbstractBarSeries_LabelsPrecisionChanged(@ptrCast(self.ptr), @bitCast(precision));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, precision: i32) callconv(.c) void `
    ///
    pub fn OnLabelsPrecisionChanged(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, i32) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsPrecisionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` sets: []QBarSet `
    ///
    pub fn BarsetsAdded(self: QHorizontalBarSeries, sets: []QBarSet) void {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        qtc.QAbstractBarSeries_BarsetsAdded(@ptrCast(self.ptr), sets_list);
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, sets: qtc.libqt_list ([]QBarSet)) callconv(.c) void `
    ///
    pub fn OnBarsetsAdded(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_BarsetsAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` sets: []QBarSet `
    ///
    pub fn BarsetsRemoved(self: QHorizontalBarSeries, sets: []QBarSet) void {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        qtc.QAbstractBarSeries_BarsetsRemoved(@ptrCast(self.ptr), sets_list);
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, sets: qtc.libqt_list ([]QBarSet)) callconv(.c) void `
    ///
    pub fn OnBarsetsRemoved(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_BarsetsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetLabelsVisible1(self: QHorizontalBarSeries, visible: bool) void {
        qtc.QAbstractBarSeries_SetLabelsVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QHorizontalBarSeries, name: []const u8) void {
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QHorizontalBarSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSeries_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhorizontalbarseries.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn SetVisible(self: QHorizontalBarSeries) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn IsVisible(self: QHorizontalBarSeries) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn Opacity(self: QHorizontalBarSeries) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: QHorizontalBarSeries, opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn SetUseOpenGL(self: QHorizontalBarSeries) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn UseOpenGL(self: QHorizontalBarSeries) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn Chart(self: QHorizontalBarSeries) QChart {
        return .{ .ptr = qtc.QAbstractSeries_Chart(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn AttachAxis(self: QHorizontalBarSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn DetachAxis(self: QHorizontalBarSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AttachedAxes(self: QHorizontalBarSeries, allocator: std.mem.Allocator) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("qhorizontalbarseries.AttachedAxes: Memory allocation failed");
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
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn Show(self: QHorizontalBarSeries) void {
        qtc.QAbstractSeries_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn Hide(self: QHorizontalBarSeries) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn NameChanged(self: QHorizontalBarSeries) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries) callconv(.c) void `
    ///
    pub fn OnNameChanged(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn VisibleChanged(self: QHorizontalBarSeries) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn OpacityChanged(self: QHorizontalBarSeries) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn UseOpenGLChanged(self: QHorizontalBarSeries) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries) callconv(.c) void `
    ///
    pub fn OnUseOpenGLChanged(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible1(self: QHorizontalBarSeries, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUseOpenGL1(self: QHorizontalBarSeries, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QHorizontalBarSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhorizontalbarseries.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QHorizontalBarSeries, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn IsWidgetType(self: QHorizontalBarSeries) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn IsWindowType(self: QHorizontalBarSeries) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn IsQuickItemType(self: QHorizontalBarSeries) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn SignalsBlocked(self: QHorizontalBarSeries) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QHorizontalBarSeries, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn Thread(self: QHorizontalBarSeries) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QHorizontalBarSeries, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QHorizontalBarSeries, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QHorizontalBarSeries, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QHorizontalBarSeries, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QHorizontalBarSeries, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QHorizontalBarSeries, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qhorizontalbarseries.Children: Memory allocation failed");
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QHorizontalBarSeries, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QHorizontalBarSeries, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QHorizontalBarSeries, obj: anytype) void {
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QHorizontalBarSeries, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn Disconnect3(self: QHorizontalBarSeries) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QHorizontalBarSeries, receiver: anytype) bool {
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
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn DumpObjectTree(self: QHorizontalBarSeries) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn DumpObjectInfo(self: QHorizontalBarSeries) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QHorizontalBarSeries, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QHorizontalBarSeries, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QHorizontalBarSeries, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qhorizontalbarseries.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qhorizontalbarseries.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn BindingStorage(self: QHorizontalBarSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn BindingStorage2(self: QHorizontalBarSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn Destroyed(self: QHorizontalBarSeries) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn Parent(self: QHorizontalBarSeries) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QHorizontalBarSeries, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn DeleteLater(self: QHorizontalBarSeries) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QHorizontalBarSeries, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QHorizontalBarSeries, time: i64, timerType: i32) i32 {
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QHorizontalBarSeries, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QHorizontalBarSeries, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QHorizontalBarSeries, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QHorizontalBarSeries, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QHorizontalBarSeries, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QHorizontalBarSeries, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, QObject) callconv(.c) void) void {
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QHorizontalBarSeries, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHorizontalBarSeries_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QHorizontalBarSeries, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHorizontalBarSeries_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries`
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, QEvent) callconv(.c) bool) void {
        qtc.QHorizontalBarSeries_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QHorizontalBarSeries, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHorizontalBarSeries_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QHorizontalBarSeries, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHorizontalBarSeries_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries`
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, QObject, QEvent) callconv(.c) bool) void {
        qtc.QHorizontalBarSeries_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QHorizontalBarSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QHorizontalBarSeries_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QHorizontalBarSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QHorizontalBarSeries_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries`
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, QTimerEvent) callconv(.c) void) void {
        qtc.QHorizontalBarSeries_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QHorizontalBarSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QHorizontalBarSeries_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QHorizontalBarSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QHorizontalBarSeries_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries`
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, QChildEvent) callconv(.c) void) void {
        qtc.QHorizontalBarSeries_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QHorizontalBarSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QHorizontalBarSeries_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QHorizontalBarSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QHorizontalBarSeries_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries`
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, QEvent) callconv(.c) void) void {
        qtc.QHorizontalBarSeries_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QHorizontalBarSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHorizontalBarSeries_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QHorizontalBarSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHorizontalBarSeries_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries`
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QHorizontalBarSeries_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QHorizontalBarSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHorizontalBarSeries_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QHorizontalBarSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHorizontalBarSeries_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries`
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QHorizontalBarSeries_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn Sender(self: QHorizontalBarSeries) QObject {
        return .{ .ptr = qtc.QHorizontalBarSeries_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn SuperSender(self: QHorizontalBarSeries) QObject {
        return .{ .ptr = qtc.QHorizontalBarSeries_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QHorizontalBarSeries, callback: *const fn () callconv(.c) QObject) void {
        qtc.QHorizontalBarSeries_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn SenderSignalIndex(self: QHorizontalBarSeries) i32 {
        return qtc.QHorizontalBarSeries_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn SuperSenderSignalIndex(self: QHorizontalBarSeries) i32 {
        return qtc.QHorizontalBarSeries_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QHorizontalBarSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QHorizontalBarSeries_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QHorizontalBarSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHorizontalBarSeries_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QHorizontalBarSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHorizontalBarSeries_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries`
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, [*:0]const u8) callconv(.c) i32) void {
        qtc.QHorizontalBarSeries_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QHorizontalBarSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHorizontalBarSeries_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QHorizontalBarSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHorizontalBarSeries_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries`
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, QMetaMethod) callconv(.c) bool) void {
        qtc.QHorizontalBarSeries_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalBarSeries, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QHorizontalBarSeries, callback: *const fn (QHorizontalBarSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhorizontalbarseries-qtcharts.html#dtor.QHorizontalBarSeries)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QHorizontalBarSeries `
    ///
    pub fn Delete(self: QHorizontalBarSeries) void {
        qtc.QHorizontalBarSeries_Delete(@ptrCast(self.ptr));
    }
};
