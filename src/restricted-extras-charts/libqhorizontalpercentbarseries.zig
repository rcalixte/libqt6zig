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

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhorizontalpercentbarseries-qtcharts.html)
pub const QHorizontalPercentBarSeries = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhorizontalpercentbarseries-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHorizontalPercentBarSeries,

    pub const _is_QHorizontalPercentBarSeries = {};
    pub const _is_QAbstractBarSeries = {};
    pub const _is_QAbstractSeries = {};
    pub const _is_QObject = {};

    /// New constructs a new QHorizontalPercentBarSeries object.
    ///
    pub fn New() QHorizontalPercentBarSeries {
        return .{ .ptr = qtc.QHorizontalPercentBarSeries_new() };
    }

    /// New2 constructs a new QHorizontalPercentBarSeries object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QHorizontalPercentBarSeries {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QHorizontalPercentBarSeries_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn MetaObject(self: QHorizontalPercentBarSeries) QMetaObject {
        return .{ .ptr = qtc.QHorizontalPercentBarSeries_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QHorizontalPercentBarSeries, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QHorizontalPercentBarSeries_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn SuperMetaObject(self: QHorizontalPercentBarSeries) QMetaObject {
        return .{ .ptr = qtc.QHorizontalPercentBarSeries_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QHorizontalPercentBarSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHorizontalPercentBarSeries_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QHorizontalPercentBarSeries_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QHorizontalPercentBarSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHorizontalPercentBarSeries_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QHorizontalPercentBarSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHorizontalPercentBarSeries_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QHorizontalPercentBarSeries_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QHorizontalPercentBarSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHorizontalPercentBarSeries_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhorizontalpercentbarseries.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhorizontalpercentbarseries-qtcharts.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn Type(self: QHorizontalPercentBarSeries) i32 {
        return qtc.QHorizontalPercentBarSeries_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhorizontalpercentbarseries-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnType(self: QHorizontalPercentBarSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QHorizontalPercentBarSeries_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperType` instead
    ///
    pub const QBaseType = SuperType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhorizontalpercentbarseries-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn SuperType(self: QHorizontalPercentBarSeries) i32 {
        return qtc.QHorizontalPercentBarSeries_SuperType(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhorizontalpercentbarseries.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhorizontalpercentbarseries.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` width: f64 `
    ///
    pub fn SetBarWidth(self: QHorizontalPercentBarSeries, width: f64) void {
        qtc.QAbstractBarSeries_SetBarWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn BarWidth(self: QHorizontalPercentBarSeries) f64 {
        return qtc.QAbstractBarSeries_BarWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` set: QBarSet `
    ///
    pub fn Append(self: QHorizontalPercentBarSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Append(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` set: QBarSet `
    ///
    pub fn Remove(self: QHorizontalPercentBarSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Remove(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` set: QBarSet `
    ///
    pub fn Take(self: QHorizontalPercentBarSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Take(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` sets: []QBarSet `
    ///
    pub fn Append2(self: QHorizontalPercentBarSeries, sets: []QBarSet) bool {
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` set: QBarSet `
    ///
    pub fn Insert(self: QHorizontalPercentBarSeries, index: i32, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Insert(@ptrCast(self.ptr), @bitCast(index), @ptrCast(set.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn Count(self: QHorizontalPercentBarSeries) i32 {
        return qtc.QAbstractBarSeries_Count(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BarSets(self: QHorizontalPercentBarSeries, allocator: std.mem.Allocator) []QBarSet {
        const _arr: qtc.libqt_list = qtc.QAbstractBarSeries_BarSets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBarSet, _arr.len) catch @panic("qhorizontalpercentbarseries.BarSets: Memory allocation failed");
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn Clear(self: QHorizontalPercentBarSeries) void {
        qtc.QAbstractBarSeries_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn SetLabelsVisible(self: QHorizontalPercentBarSeries) void {
        qtc.QAbstractBarSeries_SetLabelsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn IsLabelsVisible(self: QHorizontalPercentBarSeries) bool {
        return qtc.QAbstractBarSeries_IsLabelsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn SetLabelsFormat(self: QHorizontalPercentBarSeries, format: []const u8) void {
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LabelsFormat(self: QHorizontalPercentBarSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractBarSeries_LabelsFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhorizontalpercentbarseries.LabelsFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` angle: f64 `
    ///
    pub fn SetLabelsAngle(self: QHorizontalPercentBarSeries, angle: f64) void {
        qtc.QAbstractBarSeries_SetLabelsAngle(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn LabelsAngle(self: QHorizontalPercentBarSeries) f64 {
        return qtc.QAbstractBarSeries_LabelsAngle(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` position: qabstractbarseries_enums.LabelsPosition `
    ///
    pub fn SetLabelsPosition(self: QHorizontalPercentBarSeries, position: i32) void {
        qtc.QAbstractBarSeries_SetLabelsPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractbarseries_enums.LabelsPosition `
    ///
    pub fn LabelsPosition(self: QHorizontalPercentBarSeries) i32 {
        return qtc.QAbstractBarSeries_LabelsPosition(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` precision: i32 `
    ///
    pub fn SetLabelsPrecision(self: QHorizontalPercentBarSeries, precision: i32) void {
        qtc.QAbstractBarSeries_SetLabelsPrecision(@ptrCast(self.ptr), @bitCast(precision));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn LabelsPrecision(self: QHorizontalPercentBarSeries) i32 {
        return qtc.QAbstractBarSeries_LabelsPrecision(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn Clicked(self: QHorizontalPercentBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Clicked(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnClicked(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` status: bool `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn Hovered(self: QHorizontalPercentBarSeries, status: bool, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Hovered(@ptrCast(self.ptr), status, @bitCast(index), @ptrCast(barset.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, status: bool, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnHovered(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, bool, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn Pressed(self: QHorizontalPercentBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Pressed(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnPressed(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn Released(self: QHorizontalPercentBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Released(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnReleased(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn DoubleClicked(self: QHorizontalPercentBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_DoubleClicked(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn CountChanged(self: QHorizontalPercentBarSeries) void {
        qtc.QAbstractBarSeries_CountChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries) callconv(.c) void `
    ///
    pub fn OnCountChanged(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_CountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn LabelsVisibleChanged(self: QHorizontalPercentBarSeries) void {
        qtc.QAbstractBarSeries_LabelsVisibleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries) callconv(.c) void `
    ///
    pub fn OnLabelsVisibleChanged(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn LabelsFormatChanged(self: QHorizontalPercentBarSeries, format: []const u8) void {
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, format: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnLabelsFormatChanged(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` position: qabstractbarseries_enums.LabelsPosition `
    ///
    pub fn LabelsPositionChanged(self: QHorizontalPercentBarSeries, position: i32) void {
        qtc.QAbstractBarSeries_LabelsPositionChanged(@ptrCast(self.ptr), @bitCast(position));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, position: qabstractbarseries_enums.LabelsPosition) callconv(.c) void `
    ///
    pub fn OnLabelsPositionChanged(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, i32) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` angle: f64 `
    ///
    pub fn LabelsAngleChanged(self: QHorizontalPercentBarSeries, angle: f64) void {
        qtc.QAbstractBarSeries_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, angle: f64) callconv(.c) void `
    ///
    pub fn OnLabelsAngleChanged(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, f64) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` precision: i32 `
    ///
    pub fn LabelsPrecisionChanged(self: QHorizontalPercentBarSeries, precision: i32) void {
        qtc.QAbstractBarSeries_LabelsPrecisionChanged(@ptrCast(self.ptr), @bitCast(precision));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, precision: i32) callconv(.c) void `
    ///
    pub fn OnLabelsPrecisionChanged(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, i32) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsPrecisionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` sets: []QBarSet `
    ///
    pub fn BarsetsAdded(self: QHorizontalPercentBarSeries, sets: []QBarSet) void {
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, sets: qtc.libqt_list ([]QBarSet)) callconv(.c) void `
    ///
    pub fn OnBarsetsAdded(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_BarsetsAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` sets: []QBarSet `
    ///
    pub fn BarsetsRemoved(self: QHorizontalPercentBarSeries, sets: []QBarSet) void {
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, sets: qtc.libqt_list ([]QBarSet)) callconv(.c) void `
    ///
    pub fn OnBarsetsRemoved(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_BarsetsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetLabelsVisible1(self: QHorizontalPercentBarSeries, visible: bool) void {
        qtc.QAbstractBarSeries_SetLabelsVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QHorizontalPercentBarSeries, name: []const u8) void {
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QHorizontalPercentBarSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSeries_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhorizontalpercentbarseries.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn SetVisible(self: QHorizontalPercentBarSeries) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn IsVisible(self: QHorizontalPercentBarSeries) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn Opacity(self: QHorizontalPercentBarSeries) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: QHorizontalPercentBarSeries, opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn SetUseOpenGL(self: QHorizontalPercentBarSeries) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn UseOpenGL(self: QHorizontalPercentBarSeries) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn Chart(self: QHorizontalPercentBarSeries) QChart {
        return .{ .ptr = qtc.QAbstractSeries_Chart(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn AttachAxis(self: QHorizontalPercentBarSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn DetachAxis(self: QHorizontalPercentBarSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AttachedAxes(self: QHorizontalPercentBarSeries, allocator: std.mem.Allocator) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("qhorizontalpercentbarseries.AttachedAxes: Memory allocation failed");
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn Show(self: QHorizontalPercentBarSeries) void {
        qtc.QAbstractSeries_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn Hide(self: QHorizontalPercentBarSeries) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn NameChanged(self: QHorizontalPercentBarSeries) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries) callconv(.c) void `
    ///
    pub fn OnNameChanged(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn VisibleChanged(self: QHorizontalPercentBarSeries) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn OpacityChanged(self: QHorizontalPercentBarSeries) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn UseOpenGLChanged(self: QHorizontalPercentBarSeries) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries) callconv(.c) void `
    ///
    pub fn OnUseOpenGLChanged(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible1(self: QHorizontalPercentBarSeries, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUseOpenGL1(self: QHorizontalPercentBarSeries, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QHorizontalPercentBarSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhorizontalpercentbarseries.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QHorizontalPercentBarSeries, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn IsWidgetType(self: QHorizontalPercentBarSeries) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn IsWindowType(self: QHorizontalPercentBarSeries) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn IsQuickItemType(self: QHorizontalPercentBarSeries) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn SignalsBlocked(self: QHorizontalPercentBarSeries) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QHorizontalPercentBarSeries, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn Thread(self: QHorizontalPercentBarSeries) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QHorizontalPercentBarSeries, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QHorizontalPercentBarSeries, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QHorizontalPercentBarSeries, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QHorizontalPercentBarSeries, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QHorizontalPercentBarSeries, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QHorizontalPercentBarSeries, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qhorizontalpercentbarseries.Children: Memory allocation failed");
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QHorizontalPercentBarSeries, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QHorizontalPercentBarSeries, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QHorizontalPercentBarSeries, obj: anytype) void {
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QHorizontalPercentBarSeries, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn Disconnect3(self: QHorizontalPercentBarSeries) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QHorizontalPercentBarSeries, receiver: anytype) bool {
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn DumpObjectTree(self: QHorizontalPercentBarSeries) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn DumpObjectInfo(self: QHorizontalPercentBarSeries) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QHorizontalPercentBarSeries, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QHorizontalPercentBarSeries, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QHorizontalPercentBarSeries, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qhorizontalpercentbarseries.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qhorizontalpercentbarseries.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn BindingStorage(self: QHorizontalPercentBarSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn BindingStorage2(self: QHorizontalPercentBarSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn Destroyed(self: QHorizontalPercentBarSeries) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn Parent(self: QHorizontalPercentBarSeries) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QHorizontalPercentBarSeries, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn DeleteLater(self: QHorizontalPercentBarSeries) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QHorizontalPercentBarSeries, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QHorizontalPercentBarSeries, time: i64, timerType: i32) i32 {
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QHorizontalPercentBarSeries, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QHorizontalPercentBarSeries, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QHorizontalPercentBarSeries, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QHorizontalPercentBarSeries, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QHorizontalPercentBarSeries, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QHorizontalPercentBarSeries, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, QObject) callconv(.c) void) void {
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QHorizontalPercentBarSeries, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHorizontalPercentBarSeries_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QHorizontalPercentBarSeries, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHorizontalPercentBarSeries_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, QEvent) callconv(.c) bool) void {
        qtc.QHorizontalPercentBarSeries_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QHorizontalPercentBarSeries, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHorizontalPercentBarSeries_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QHorizontalPercentBarSeries, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHorizontalPercentBarSeries_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, QObject, QEvent) callconv(.c) bool) void {
        qtc.QHorizontalPercentBarSeries_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QHorizontalPercentBarSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QHorizontalPercentBarSeries_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QHorizontalPercentBarSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QHorizontalPercentBarSeries_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, QTimerEvent) callconv(.c) void) void {
        qtc.QHorizontalPercentBarSeries_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QHorizontalPercentBarSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QHorizontalPercentBarSeries_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QHorizontalPercentBarSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QHorizontalPercentBarSeries_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, QChildEvent) callconv(.c) void) void {
        qtc.QHorizontalPercentBarSeries_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QHorizontalPercentBarSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QHorizontalPercentBarSeries_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QHorizontalPercentBarSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QHorizontalPercentBarSeries_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, QEvent) callconv(.c) void) void {
        qtc.QHorizontalPercentBarSeries_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QHorizontalPercentBarSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHorizontalPercentBarSeries_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QHorizontalPercentBarSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHorizontalPercentBarSeries_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QHorizontalPercentBarSeries_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QHorizontalPercentBarSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHorizontalPercentBarSeries_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QHorizontalPercentBarSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHorizontalPercentBarSeries_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QHorizontalPercentBarSeries_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn Sender(self: QHorizontalPercentBarSeries) QObject {
        return .{ .ptr = qtc.QHorizontalPercentBarSeries_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn SuperSender(self: QHorizontalPercentBarSeries) QObject {
        return .{ .ptr = qtc.QHorizontalPercentBarSeries_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QHorizontalPercentBarSeries, callback: *const fn () callconv(.c) QObject) void {
        qtc.QHorizontalPercentBarSeries_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn SenderSignalIndex(self: QHorizontalPercentBarSeries) i32 {
        return qtc.QHorizontalPercentBarSeries_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn SuperSenderSignalIndex(self: QHorizontalPercentBarSeries) i32 {
        return qtc.QHorizontalPercentBarSeries_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QHorizontalPercentBarSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QHorizontalPercentBarSeries_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QHorizontalPercentBarSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHorizontalPercentBarSeries_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QHorizontalPercentBarSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHorizontalPercentBarSeries_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, [*:0]const u8) callconv(.c) i32) void {
        qtc.QHorizontalPercentBarSeries_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QHorizontalPercentBarSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHorizontalPercentBarSeries_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QHorizontalPercentBarSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHorizontalPercentBarSeries_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, QMetaMethod) callconv(.c) bool) void {
        qtc.QHorizontalPercentBarSeries_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QHorizontalPercentBarSeries, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QHorizontalPercentBarSeries, callback: *const fn (QHorizontalPercentBarSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhorizontalpercentbarseries-qtcharts.html#dtor.QHorizontalPercentBarSeries)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QHorizontalPercentBarSeries `
    ///
    pub fn Delete(self: QHorizontalPercentBarSeries) void {
        qtc.QHorizontalPercentBarSeries_Delete(@ptrCast(self.ptr));
    }
};
