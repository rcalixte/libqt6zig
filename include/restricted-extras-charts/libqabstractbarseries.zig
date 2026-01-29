const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractbarseries_enums = enums;
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html)
pub const qabstractbarseries = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QAbstractBarSeries_MetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractBarSeries_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstractBarSeries_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` width: f64 `
    ///
    pub fn SetBarWidth(self: ?*anyopaque, width: f64) void {
        qtc.QAbstractBarSeries_SetBarWidth(@ptrCast(self), @floatCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn BarWidth(self: ?*anyopaque) f64 {
        return qtc.QAbstractBarSeries_BarWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` set: QtC.QBarSet `
    ///
    pub fn Append(self: ?*anyopaque, set: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_Append(@ptrCast(self), @ptrCast(set));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` set: QtC.QBarSet `
    ///
    pub fn Remove(self: ?*anyopaque, set: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_Remove(@ptrCast(self), @ptrCast(set));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` set: QtC.QBarSet `
    ///
    pub fn Take(self: ?*anyopaque, set: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_Take(@ptrCast(self), @ptrCast(set));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` sets: []QtC.QBarSet `
    ///
    pub fn Append2(self: ?*anyopaque, sets: []?*anyopaque) bool {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        return qtc.QAbstractBarSeries_Append2(@ptrCast(self), sets_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` set: QtC.QBarSet `
    ///
    pub fn Insert(self: ?*anyopaque, index: i32, set: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_Insert(@ptrCast(self), @intCast(index), @ptrCast(set));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QAbstractBarSeries_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barSets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BarSets(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QBarSet {
        const _arr: qtc.libqt_list = qtc.QAbstractBarSeries_BarSets(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QBarSet, _arr.len) catch @panic("qabstractbarseries.BarSets: Memory allocation failed");
        const _data: [*]QtC.QBarSet = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn SetLabelsVisible(self: ?*anyopaque) void {
        qtc.QAbstractBarSeries_SetLabelsVisible(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#isLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn IsLabelsVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_IsLabelsVisible(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn SetLabelsFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QAbstractBarSeries_SetLabelsFormat(@ptrCast(self), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LabelsFormat(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractBarSeries_LabelsFormat(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbarseries.LabelsFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` angle: f64 `
    ///
    pub fn SetLabelsAngle(self: ?*anyopaque, angle: f64) void {
        qtc.QAbstractBarSeries_SetLabelsAngle(@ptrCast(self), @floatCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn LabelsAngle(self: ?*anyopaque) f64 {
        return qtc.QAbstractBarSeries_LabelsAngle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` position: qabstractbarseries_enums.LabelsPosition `
    ///
    pub fn SetLabelsPosition(self: ?*anyopaque, position: i32) void {
        qtc.QAbstractBarSeries_SetLabelsPosition(@ptrCast(self), @intCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractbarseries_enums.LabelsPosition `
    ///
    pub fn LabelsPosition(self: ?*anyopaque) i32 {
        return qtc.QAbstractBarSeries_LabelsPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` precision: i32 `
    ///
    pub fn SetLabelsPrecision(self: ?*anyopaque, precision: i32) void {
        qtc.QAbstractBarSeries_SetLabelsPrecision(@ptrCast(self), @intCast(precision));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn LabelsPrecision(self: ?*anyopaque) i32 {
        return qtc.QAbstractBarSeries_LabelsPrecision(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QtC.QBarSet `
    ///
    pub fn Clicked(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Clicked(@ptrCast(self), @intCast(index), @ptrCast(barset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries, index: i32, barset: QtC.QBarSet) callconv(.c) void `
    ///
    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` status: bool `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QtC.QBarSet `
    ///
    pub fn Hovered(self: ?*anyopaque, status: bool, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Hovered(@ptrCast(self), status, @intCast(index), @ptrCast(barset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries, status: bool, index: i32, barset: QtC.QBarSet) callconv(.c) void `
    ///
    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QtC.QBarSet `
    ///
    pub fn Pressed(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Pressed(@ptrCast(self), @intCast(index), @ptrCast(barset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries, index: i32, barset: QtC.QBarSet) callconv(.c) void `
    ///
    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Pressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QtC.QBarSet `
    ///
    pub fn Released(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Released(@ptrCast(self), @intCast(index), @ptrCast(barset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries, index: i32, barset: QtC.QBarSet) callconv(.c) void `
    ///
    pub fn OnReleased(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Released(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QtC.QBarSet `
    ///
    pub fn DoubleClicked(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_DoubleClicked(@ptrCast(self), @intCast(index), @ptrCast(barset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries, index: i32, barset: QtC.QBarSet) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_DoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#countChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn CountChanged(self: ?*anyopaque) void {
        qtc.QAbstractBarSeries_CountChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#countChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries) callconv(.c) void `
    ///
    pub fn OnCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_CountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn LabelsVisibleChanged(self: ?*anyopaque) void {
        qtc.QAbstractBarSeries_LabelsVisibleChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries) callconv(.c) void `
    ///
    pub fn OnLabelsVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsVisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn LabelsFormatChanged(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QAbstractBarSeries_LabelsFormatChanged(@ptrCast(self), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries, format: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnLabelsFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsFormatChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` position: qabstractbarseries_enums.LabelsPosition `
    ///
    pub fn LabelsPositionChanged(self: ?*anyopaque, position: i32) void {
        qtc.QAbstractBarSeries_LabelsPositionChanged(@ptrCast(self), @intCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries, position: qabstractbarseries_enums.LabelsPosition) callconv(.c) void `
    ///
    pub fn OnLabelsPositionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsPositionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsAngleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` angle: f64 `
    ///
    pub fn LabelsAngleChanged(self: ?*anyopaque, angle: f64) void {
        qtc.QAbstractBarSeries_LabelsAngleChanged(@ptrCast(self), @floatCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsAngleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries, angle: f64) callconv(.c) void `
    ///
    pub fn OnLabelsAngleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsAngleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPrecisionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` precision: i32 `
    ///
    pub fn LabelsPrecisionChanged(self: ?*anyopaque, precision: i32) void {
        qtc.QAbstractBarSeries_LabelsPrecisionChanged(@ptrCast(self), @intCast(precision));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPrecisionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries, precision: i32) callconv(.c) void `
    ///
    pub fn OnLabelsPrecisionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsPrecisionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` sets: []QtC.QBarSet `
    ///
    pub fn BarsetsAdded(self: ?*anyopaque, sets: []?*anyopaque) void {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        qtc.QAbstractBarSeries_BarsetsAdded(@ptrCast(self), sets_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries, sets: [*]QtC.QBarSet) callconv(.c) void `
    ///
    pub fn OnBarsetsAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_BarsetsAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` sets: []QtC.QBarSet `
    ///
    pub fn BarsetsRemoved(self: ?*anyopaque, sets: []?*anyopaque) void {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        qtc.QAbstractBarSeries_BarsetsRemoved(@ptrCast(self), sets_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries, sets: [*]QtC.QBarSet) callconv(.c) void `
    ///
    pub fn OnBarsetsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_BarsetsRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbarseries.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractBarSeries_SetLabelsVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QAbstractSeries_Type(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QAbstractSeries_SetName(@ptrCast(self), name_str);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSeries_Name(@ptrCast(self));
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
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn SetVisible(self: ?*anyopaque) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn SetUseOpenGL(self: ?*anyopaque) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn UseOpenGL(self: ?*anyopaque) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn Chart(self: ?*anyopaque) QtC.QChart {
        return qtc.QAbstractSeries_Chart(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` axis: QtC.QAbstractAxis `
    ///
    pub fn AttachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` axis: QtC.QAbstractAxis `
    ///
    pub fn DetachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AttachedAxes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractAxis, _arr.len) catch @panic("qabstractbarseries.AttachedAxes: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn Show(self: ?*anyopaque) void {
        qtc.QAbstractSeries_Show(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn NameChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries) callconv(.c) void `
    ///
    pub fn OnNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn VisibleChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn OpacityChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn UseOpenGLChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries) callconv(.c) void `
    ///
    pub fn OnUseOpenGLChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUseOpenGL1(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self), enable);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qabstractbarseries.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @intCast(time), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractBarSeries, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#dtor.QAbstractBarSeries)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAbstractBarSeries `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#public-types)
pub const enums = struct {
    pub const LabelsPosition = enum {
        pub const LabelsCenter: i32 = 0;
        pub const LabelsInsideEnd: i32 = 1;
        pub const LabelsInsideBase: i32 = 2;
        pub const LabelsOutsideEnd: i32 = 3;
    };
};
