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

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html)
pub const QPercentBarSeries = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPercentBarSeries,

    pub const _is_QPercentBarSeries = {};
    pub const _is_QAbstractBarSeries = {};
    pub const _is_QAbstractSeries = {};
    pub const _is_QObject = {};

    /// New constructs a new QPercentBarSeries object.
    ///
    pub fn New() QPercentBarSeries {
        return .{ .ptr = qtc.QPercentBarSeries_new() };
    }

    /// New2 constructs a new QPercentBarSeries object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QPercentBarSeries {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QPercentBarSeries_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn MetaObject(self: QPercentBarSeries) QMetaObject {
        return .{ .ptr = qtc.QPercentBarSeries_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QPercentBarSeries, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPercentBarSeries_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn SuperMetaObject(self: QPercentBarSeries) QMetaObject {
        return .{ .ptr = qtc.QPercentBarSeries_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QPercentBarSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPercentBarSeries_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPercentBarSeries_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QPercentBarSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPercentBarSeries_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QPercentBarSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPercentBarSeries_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPercentBarSeries_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QPercentBarSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPercentBarSeries_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpercentbarseries.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn Type(self: QPercentBarSeries) i32 {
        return qtc.QPercentBarSeries_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnType(self: QPercentBarSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QPercentBarSeries_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperType` instead
    ///
    pub const QBaseType = SuperType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn SuperType(self: QPercentBarSeries) i32 {
        return qtc.QPercentBarSeries_SuperType(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpercentbarseries.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpercentbarseries.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` width: f64 `
    ///
    pub fn SetBarWidth(self: QPercentBarSeries, width: f64) void {
        qtc.QAbstractBarSeries_SetBarWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn BarWidth(self: QPercentBarSeries) f64 {
        return qtc.QAbstractBarSeries_BarWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` set: QBarSet `
    ///
    pub fn Append(self: QPercentBarSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Append(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` set: QBarSet `
    ///
    pub fn Remove(self: QPercentBarSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Remove(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` set: QBarSet `
    ///
    pub fn Take(self: QPercentBarSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Take(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` sets: []QBarSet `
    ///
    pub fn Append2(self: QPercentBarSeries, sets: []QBarSet) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` set: QBarSet `
    ///
    pub fn Insert(self: QPercentBarSeries, index: i32, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Insert(@ptrCast(self.ptr), @bitCast(index), @ptrCast(set.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn Count(self: QPercentBarSeries) i32 {
        return qtc.QAbstractBarSeries_Count(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BarSets(self: QPercentBarSeries, allocator: std.mem.Allocator) []QBarSet {
        const _arr: qtc.libqt_list = qtc.QAbstractBarSeries_BarSets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBarSet, _arr.len) catch @panic("qpercentbarseries.BarSets: Memory allocation failed");
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn Clear(self: QPercentBarSeries) void {
        qtc.QAbstractBarSeries_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn SetLabelsVisible(self: QPercentBarSeries) void {
        qtc.QAbstractBarSeries_SetLabelsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn IsLabelsVisible(self: QPercentBarSeries) bool {
        return qtc.QAbstractBarSeries_IsLabelsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn SetLabelsFormat(self: QPercentBarSeries, format: []const u8) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LabelsFormat(self: QPercentBarSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractBarSeries_LabelsFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpercentbarseries.LabelsFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` angle: f64 `
    ///
    pub fn SetLabelsAngle(self: QPercentBarSeries, angle: f64) void {
        qtc.QAbstractBarSeries_SetLabelsAngle(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn LabelsAngle(self: QPercentBarSeries) f64 {
        return qtc.QAbstractBarSeries_LabelsAngle(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` position: qabstractbarseries_enums.LabelsPosition `
    ///
    pub fn SetLabelsPosition(self: QPercentBarSeries, position: i32) void {
        qtc.QAbstractBarSeries_SetLabelsPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractbarseries_enums.LabelsPosition `
    ///
    pub fn LabelsPosition(self: QPercentBarSeries) i32 {
        return qtc.QAbstractBarSeries_LabelsPosition(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` precision: i32 `
    ///
    pub fn SetLabelsPrecision(self: QPercentBarSeries, precision: i32) void {
        qtc.QAbstractBarSeries_SetLabelsPrecision(@ptrCast(self.ptr), @bitCast(precision));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn LabelsPrecision(self: QPercentBarSeries) i32 {
        return qtc.QAbstractBarSeries_LabelsPrecision(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn Clicked(self: QPercentBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Clicked(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnClicked(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` status: bool `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn Hovered(self: QPercentBarSeries, status: bool, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Hovered(@ptrCast(self.ptr), status, @bitCast(index), @ptrCast(barset.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, status: bool, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnHovered(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, bool, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn Pressed(self: QPercentBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Pressed(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnPressed(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn Released(self: QPercentBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Released(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnReleased(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn DoubleClicked(self: QPercentBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_DoubleClicked(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn CountChanged(self: QPercentBarSeries) void {
        qtc.QAbstractBarSeries_CountChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries) callconv(.c) void `
    ///
    pub fn OnCountChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_CountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn LabelsVisibleChanged(self: QPercentBarSeries) void {
        qtc.QAbstractBarSeries_LabelsVisibleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries) callconv(.c) void `
    ///
    pub fn OnLabelsVisibleChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn LabelsFormatChanged(self: QPercentBarSeries, format: []const u8) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, format: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnLabelsFormatChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` position: qabstractbarseries_enums.LabelsPosition `
    ///
    pub fn LabelsPositionChanged(self: QPercentBarSeries, position: i32) void {
        qtc.QAbstractBarSeries_LabelsPositionChanged(@ptrCast(self.ptr), @bitCast(position));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, position: qabstractbarseries_enums.LabelsPosition) callconv(.c) void `
    ///
    pub fn OnLabelsPositionChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, i32) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` angle: f64 `
    ///
    pub fn LabelsAngleChanged(self: QPercentBarSeries, angle: f64) void {
        qtc.QAbstractBarSeries_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, angle: f64) callconv(.c) void `
    ///
    pub fn OnLabelsAngleChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, f64) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` precision: i32 `
    ///
    pub fn LabelsPrecisionChanged(self: QPercentBarSeries, precision: i32) void {
        qtc.QAbstractBarSeries_LabelsPrecisionChanged(@ptrCast(self.ptr), @bitCast(precision));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, precision: i32) callconv(.c) void `
    ///
    pub fn OnLabelsPrecisionChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, i32) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsPrecisionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` sets: []QBarSet `
    ///
    pub fn BarsetsAdded(self: QPercentBarSeries, sets: []QBarSet) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, sets: qtc.libqt_list ([]QBarSet)) callconv(.c) void `
    ///
    pub fn OnBarsetsAdded(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_BarsetsAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` sets: []QBarSet `
    ///
    pub fn BarsetsRemoved(self: QPercentBarSeries, sets: []QBarSet) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, sets: qtc.libqt_list ([]QBarSet)) callconv(.c) void `
    ///
    pub fn OnBarsetsRemoved(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_BarsetsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetLabelsVisible1(self: QPercentBarSeries, visible: bool) void {
        qtc.QAbstractBarSeries_SetLabelsVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QPercentBarSeries, name: []const u8) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QPercentBarSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSeries_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpercentbarseries.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn SetVisible(self: QPercentBarSeries) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn IsVisible(self: QPercentBarSeries) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn Opacity(self: QPercentBarSeries) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: QPercentBarSeries, opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn SetUseOpenGL(self: QPercentBarSeries) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn UseOpenGL(self: QPercentBarSeries) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn Chart(self: QPercentBarSeries) QChart {
        return .{ .ptr = qtc.QAbstractSeries_Chart(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn AttachAxis(self: QPercentBarSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn DetachAxis(self: QPercentBarSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AttachedAxes(self: QPercentBarSeries, allocator: std.mem.Allocator) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("qpercentbarseries.AttachedAxes: Memory allocation failed");
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn Show(self: QPercentBarSeries) void {
        qtc.QAbstractSeries_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn Hide(self: QPercentBarSeries) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn NameChanged(self: QPercentBarSeries) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries) callconv(.c) void `
    ///
    pub fn OnNameChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn VisibleChanged(self: QPercentBarSeries) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn OpacityChanged(self: QPercentBarSeries) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn UseOpenGLChanged(self: QPercentBarSeries) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries) callconv(.c) void `
    ///
    pub fn OnUseOpenGLChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible1(self: QPercentBarSeries, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUseOpenGL1(self: QPercentBarSeries, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QPercentBarSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpercentbarseries.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QPercentBarSeries, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn IsWidgetType(self: QPercentBarSeries) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn IsWindowType(self: QPercentBarSeries) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn IsQuickItemType(self: QPercentBarSeries) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn SignalsBlocked(self: QPercentBarSeries) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QPercentBarSeries, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn Thread(self: QPercentBarSeries) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QPercentBarSeries, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QPercentBarSeries, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QPercentBarSeries, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QPercentBarSeries, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QPercentBarSeries, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QPercentBarSeries, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qpercentbarseries.Children: Memory allocation failed");
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QPercentBarSeries, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QPercentBarSeries, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QPercentBarSeries, obj: anytype) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QPercentBarSeries, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn Disconnect3(self: QPercentBarSeries) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QPercentBarSeries, receiver: anytype) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn DumpObjectTree(self: QPercentBarSeries) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn DumpObjectInfo(self: QPercentBarSeries) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QPercentBarSeries, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QPercentBarSeries, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QPercentBarSeries, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qpercentbarseries.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qpercentbarseries.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn BindingStorage(self: QPercentBarSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn BindingStorage2(self: QPercentBarSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn Destroyed(self: QPercentBarSeries) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn Parent(self: QPercentBarSeries) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QPercentBarSeries, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn DeleteLater(self: QPercentBarSeries) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QPercentBarSeries, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QPercentBarSeries, time: i64, timerType: i32) i32 {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QPercentBarSeries, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QPercentBarSeries, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QPercentBarSeries, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QPercentBarSeries, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QPercentBarSeries, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QPercentBarSeries, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, QObject) callconv(.c) void) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QPercentBarSeries, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPercentBarSeries_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QPercentBarSeries, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPercentBarSeries_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, QEvent) callconv(.c) bool) void {
        qtc.QPercentBarSeries_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QPercentBarSeries, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPercentBarSeries_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QPercentBarSeries, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPercentBarSeries_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPercentBarSeries_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QPercentBarSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QPercentBarSeries_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QPercentBarSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QPercentBarSeries_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, QTimerEvent) callconv(.c) void) void {
        qtc.QPercentBarSeries_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QPercentBarSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPercentBarSeries_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QPercentBarSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPercentBarSeries_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, QChildEvent) callconv(.c) void) void {
        qtc.QPercentBarSeries_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QPercentBarSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPercentBarSeries_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QPercentBarSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPercentBarSeries_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, QEvent) callconv(.c) void) void {
        qtc.QPercentBarSeries_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QPercentBarSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPercentBarSeries_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QPercentBarSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPercentBarSeries_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QPercentBarSeries_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QPercentBarSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPercentBarSeries_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QPercentBarSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPercentBarSeries_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QPercentBarSeries_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn Sender(self: QPercentBarSeries) QObject {
        return .{ .ptr = qtc.QPercentBarSeries_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn SuperSender(self: QPercentBarSeries) QObject {
        return .{ .ptr = qtc.QPercentBarSeries_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QPercentBarSeries, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPercentBarSeries_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn SenderSignalIndex(self: QPercentBarSeries) i32 {
        return qtc.QPercentBarSeries_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn SuperSenderSignalIndex(self: QPercentBarSeries) i32 {
        return qtc.QPercentBarSeries_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QPercentBarSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QPercentBarSeries_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QPercentBarSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPercentBarSeries_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QPercentBarSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPercentBarSeries_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPercentBarSeries_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QPercentBarSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPercentBarSeries_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QPercentBarSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPercentBarSeries_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, QMetaMethod) callconv(.c) bool) void {
        qtc.QPercentBarSeries_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html#dtor.QPercentBarSeries)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn Delete(self: QPercentBarSeries) void {
        qtc.QPercentBarSeries_Delete(@ptrCast(self.ptr));
    }
};
