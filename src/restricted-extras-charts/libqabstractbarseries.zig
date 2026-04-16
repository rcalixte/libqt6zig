const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractAxis = @import("libqt6").QAbstractAxis;
const QBarSet = @import("libqt6").QBarSet;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChart = @import("libqt6").QChart;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const qabstractbarseries_enums = enums;
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html)
pub const QAbstractBarSeries = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractBarSeries,

    pub const _is_QAbstractBarSeries = {};
    pub const _is_QAbstractSeries = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn MetaObject(self: QAbstractBarSeries) QMetaObject {
        return .{ .ptr = qtc.QAbstractBarSeries_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QAbstractBarSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractBarSeries_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QAbstractBarSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstractBarSeries_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbarseries.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setBarWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` width: f64 `
    ///
    pub fn SetBarWidth(self: QAbstractBarSeries, width: f64) void {
        qtc.QAbstractBarSeries_SetBarWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn BarWidth(self: QAbstractBarSeries) f64 {
        return qtc.QAbstractBarSeries_BarWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` set: QBarSet `
    ///
    pub fn Append(self: QAbstractBarSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Append(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` set: QBarSet `
    ///
    pub fn Remove(self: QAbstractBarSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Remove(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` set: QBarSet `
    ///
    pub fn Take(self: QAbstractBarSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Take(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` sets: []QBarSet `
    ///
    pub fn Append2(self: QAbstractBarSeries, sets: []QBarSet) bool {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        return qtc.QAbstractBarSeries_Append2(@ptrCast(self.ptr), sets_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` set: QBarSet `
    ///
    pub fn Insert(self: QAbstractBarSeries, index: i32, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Insert(@ptrCast(self.ptr), @bitCast(index), @ptrCast(set.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn Count(self: QAbstractBarSeries) i32 {
        return qtc.QAbstractBarSeries_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barSets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BarSets(self: QAbstractBarSeries, allocator: std.mem.Allocator) []QBarSet {
        const _arr: qtc.libqt_list = qtc.QAbstractBarSeries_BarSets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBarSet, _arr.len) catch @panic("qabstractbarseries.BarSets: Memory allocation failed");
        const _data: [*]QtC.QBarSet = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn Clear(self: QAbstractBarSeries) void {
        qtc.QAbstractBarSeries_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn SetLabelsVisible(self: QAbstractBarSeries) void {
        qtc.QAbstractBarSeries_SetLabelsVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#isLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn IsLabelsVisible(self: QAbstractBarSeries) bool {
        return qtc.QAbstractBarSeries_IsLabelsVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn SetLabelsFormat(self: QAbstractBarSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QAbstractBarSeries_SetLabelsFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LabelsFormat(self: QAbstractBarSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractBarSeries_LabelsFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbarseries.LabelsFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` angle: f64 `
    ///
    pub fn SetLabelsAngle(self: QAbstractBarSeries, angle: f64) void {
        qtc.QAbstractBarSeries_SetLabelsAngle(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn LabelsAngle(self: QAbstractBarSeries) f64 {
        return qtc.QAbstractBarSeries_LabelsAngle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` position: qabstractbarseries_enums.LabelsPosition `
    ///
    pub fn SetLabelsPosition(self: QAbstractBarSeries, position: i32) void {
        qtc.QAbstractBarSeries_SetLabelsPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractbarseries_enums.LabelsPosition `
    ///
    pub fn LabelsPosition(self: QAbstractBarSeries) i32 {
        return qtc.QAbstractBarSeries_LabelsPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` precision: i32 `
    ///
    pub fn SetLabelsPrecision(self: QAbstractBarSeries, precision: i32) void {
        qtc.QAbstractBarSeries_SetLabelsPrecision(@ptrCast(self.ptr), @bitCast(precision));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn LabelsPrecision(self: QAbstractBarSeries) i32 {
        return qtc.QAbstractBarSeries_LabelsPrecision(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn Clicked(self: QAbstractBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Clicked(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnClicked(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` status: bool `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn Hovered(self: QAbstractBarSeries, status: bool, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Hovered(@ptrCast(self.ptr), status, @bitCast(index), @ptrCast(barset.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries, status: bool, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnHovered(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries, bool, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn Pressed(self: QAbstractBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Pressed(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnPressed(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn Released(self: QAbstractBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Released(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnReleased(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn DoubleClicked(self: QAbstractBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_DoubleClicked(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#countChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn CountChanged(self: QAbstractBarSeries) void {
        qtc.QAbstractBarSeries_CountChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#countChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries) callconv(.c) void `
    ///
    pub fn OnCountChanged(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_CountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn LabelsVisibleChanged(self: QAbstractBarSeries) void {
        qtc.QAbstractBarSeries_LabelsVisibleChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries) callconv(.c) void `
    ///
    pub fn OnLabelsVisibleChanged(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn LabelsFormatChanged(self: QAbstractBarSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QAbstractBarSeries_LabelsFormatChanged(@ptrCast(self.ptr), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries, format: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnLabelsFormatChanged(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` position: qabstractbarseries_enums.LabelsPosition `
    ///
    pub fn LabelsPositionChanged(self: QAbstractBarSeries, position: i32) void {
        qtc.QAbstractBarSeries_LabelsPositionChanged(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries, position: qabstractbarseries_enums.LabelsPosition) callconv(.c) void `
    ///
    pub fn OnLabelsPositionChanged(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries, i32) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsAngleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` angle: f64 `
    ///
    pub fn LabelsAngleChanged(self: QAbstractBarSeries, angle: f64) void {
        qtc.QAbstractBarSeries_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsAngleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries, angle: f64) callconv(.c) void `
    ///
    pub fn OnLabelsAngleChanged(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries, f64) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPrecisionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` precision: i32 `
    ///
    pub fn LabelsPrecisionChanged(self: QAbstractBarSeries, precision: i32) void {
        qtc.QAbstractBarSeries_LabelsPrecisionChanged(@ptrCast(self.ptr), @bitCast(precision));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPrecisionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries, precision: i32) callconv(.c) void `
    ///
    pub fn OnLabelsPrecisionChanged(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries, i32) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsPrecisionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` sets: []QBarSet `
    ///
    pub fn BarsetsAdded(self: QAbstractBarSeries, sets: []QBarSet) void {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        qtc.QAbstractBarSeries_BarsetsAdded(@ptrCast(self.ptr), sets_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries, sets: qtc.libqt_list ([]QBarSet)) callconv(.c) void `
    ///
    pub fn OnBarsetsAdded(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_BarsetsAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` sets: []QBarSet `
    ///
    pub fn BarsetsRemoved(self: QAbstractBarSeries, sets: []QBarSet) void {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        qtc.QAbstractBarSeries_BarsetsRemoved(@ptrCast(self.ptr), sets_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries, sets: qtc.libqt_list ([]QBarSet)) callconv(.c) void `
    ///
    pub fn OnBarsetsRemoved(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_BarsetsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbarseries.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbarseries.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetLabelsVisible1(self: QAbstractBarSeries, visible: bool) void {
        qtc.QAbstractBarSeries_SetLabelsVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn Type(self: QAbstractBarSeries) i32 {
        return qtc.QAbstractSeries_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QAbstractBarSeries, name: []const u8) void {
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
    /// ` self: QAbstractBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QAbstractBarSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSeries_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbarseries.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn SetVisible(self: QAbstractBarSeries) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn IsVisible(self: QAbstractBarSeries) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn Opacity(self: QAbstractBarSeries) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: QAbstractBarSeries, opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn SetUseOpenGL(self: QAbstractBarSeries) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn UseOpenGL(self: QAbstractBarSeries) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn Chart(self: QAbstractBarSeries) QChart {
        return .{ .ptr = qtc.QAbstractSeries_Chart(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn AttachAxis(self: QAbstractBarSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn DetachAxis(self: QAbstractBarSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AttachedAxes(self: QAbstractBarSeries, allocator: std.mem.Allocator) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("qabstractbarseries.AttachedAxes: Memory allocation failed");
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
    /// ` self: QAbstractBarSeries `
    ///
    pub fn Show(self: QAbstractBarSeries) void {
        qtc.QAbstractSeries_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn Hide(self: QAbstractBarSeries) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn NameChanged(self: QAbstractBarSeries) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries) callconv(.c) void `
    ///
    pub fn OnNameChanged(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn VisibleChanged(self: QAbstractBarSeries) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn OpacityChanged(self: QAbstractBarSeries) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn UseOpenGLChanged(self: QAbstractBarSeries) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries) callconv(.c) void `
    ///
    pub fn OnUseOpenGLChanged(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible1(self: QAbstractBarSeries, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUseOpenGL1(self: QAbstractBarSeries, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QAbstractBarSeries, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QAbstractBarSeries, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QAbstractBarSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbarseries.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QAbstractBarSeries, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn IsWidgetType(self: QAbstractBarSeries) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn IsWindowType(self: QAbstractBarSeries) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn IsQuickItemType(self: QAbstractBarSeries) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn SignalsBlocked(self: QAbstractBarSeries) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QAbstractBarSeries, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn Thread(self: QAbstractBarSeries) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QAbstractBarSeries, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QAbstractBarSeries, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QAbstractBarSeries, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QAbstractBarSeries, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QAbstractBarSeries, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QAbstractBarSeries, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qabstractbarseries.Children: Memory allocation failed");
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
    /// ` self: QAbstractBarSeries `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QAbstractBarSeries, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QAbstractBarSeries, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QAbstractBarSeries, obj: anytype) void {
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
    /// ` self: QAbstractBarSeries `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QAbstractBarSeries, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QAbstractBarSeries `
    ///
    pub fn Disconnect3(self: QAbstractBarSeries) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QAbstractBarSeries, receiver: anytype) bool {
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
    /// ` self: QAbstractBarSeries `
    ///
    pub fn DumpObjectTree(self: QAbstractBarSeries) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn DumpObjectInfo(self: QAbstractBarSeries) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QAbstractBarSeries, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QAbstractBarSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QAbstractBarSeries, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QAbstractBarSeries, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qabstractbarseries.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qabstractbarseries.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QAbstractBarSeries `
    ///
    pub fn BindingStorage(self: QAbstractBarSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn BindingStorage2(self: QAbstractBarSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn Destroyed(self: QAbstractBarSeries) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn Parent(self: QAbstractBarSeries) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QAbstractBarSeries, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn DeleteLater(self: QAbstractBarSeries) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QAbstractBarSeries, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QAbstractBarSeries, time: i64, timerType: i32) i32 {
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
    /// ` self: QAbstractBarSeries `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QAbstractBarSeries, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QAbstractBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QAbstractBarSeries, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QAbstractBarSeries, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QAbstractBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QAbstractBarSeries, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractBarSeries `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QAbstractBarSeries, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractBarSeries `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QAbstractBarSeries, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QAbstractBarSeries, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QAbstractBarSeries, callback: *const fn (QAbstractBarSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#dtor.QAbstractBarSeries)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractBarSeries `
    ///
    pub fn Delete(self: QAbstractBarSeries) void {
        qtc.QAbstractBarSeries_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#public-types)
pub const enums = struct {
    pub const LabelsPosition = enum(i32) {
        pub const LabelsCenter: i32 = 0;
        pub const LabelsInsideEnd: i32 = 1;
        pub const LabelsInsideBase: i32 = 2;
        pub const LabelsOutsideEnd: i32 = 3;
    };
};
