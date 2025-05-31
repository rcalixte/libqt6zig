const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractbarseries_enums = enums;
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html
pub const qabstractbarseries = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QAbstractBarSeries_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QAbstractBarSeries, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return qtc.QAbstractBarSeries_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QAbstractBarSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QAbstractBarSeries_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = qtc.QAbstractBarSeries_Tr(s_Cstring);
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbarseries.Tr: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setBarWidth)
    ///
    /// ``` self: QtC.QAbstractBarSeries, width: f64 ```
    pub fn SetBarWidth(self: ?*anyopaque, width: f64) void {
        qtc.QAbstractBarSeries_SetBarWidth(@ptrCast(self), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barWidth)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn BarWidth(self: ?*anyopaque) f64 {
        return qtc.QAbstractBarSeries_BarWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#append)
    ///
    /// ``` self: QtC.QAbstractBarSeries, set: QtC.QBarSet ```
    pub fn Append(self: ?*anyopaque, set: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_Append(@ptrCast(self), @ptrCast(set));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#remove)
    ///
    /// ``` self: QtC.QAbstractBarSeries, set: QtC.QBarSet ```
    pub fn Remove(self: ?*anyopaque, set: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_Remove(@ptrCast(self), @ptrCast(set));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#take)
    ///
    /// ``` self: QtC.QAbstractBarSeries, set: QtC.QBarSet ```
    pub fn Take(self: ?*anyopaque, set: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_Take(@ptrCast(self), @ptrCast(set));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#append)
    ///
    /// ``` self: QtC.QAbstractBarSeries, sets: []QtC.QBarSet ```
    pub fn AppendWithSets(self: ?*anyopaque, sets: []?*anyopaque) bool {
        const sets_list = qtc.struct_libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        return qtc.QAbstractBarSeries_AppendWithSets(@ptrCast(self), sets_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#insert)
    ///
    /// ``` self: QtC.QAbstractBarSeries, index: i32, set: QtC.QBarSet ```
    pub fn Insert(self: ?*anyopaque, index: i32, set: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_Insert(@ptrCast(self), @intCast(index), @ptrCast(set));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#count)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QAbstractBarSeries_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barSets)
    ///
    /// ``` self: QtC.QAbstractBarSeries, allocator: std.mem.Allocator ```
    pub fn BarSets(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QBarSet {
        const _arr: qtc.struct_libqt_list = qtc.QAbstractBarSeries_BarSets(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QBarSet, _arr.len) catch @panic("qabstractbarseries.BarSets: Memory allocation failed");
        const _data: [*]QtC.QBarSet = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#clear)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsVisible)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn SetLabelsVisible(self: ?*anyopaque) void {
        qtc.QAbstractBarSeries_SetLabelsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#isLabelsVisible)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn IsLabelsVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_IsLabelsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsFormat)
    ///
    /// ``` self: QtC.QAbstractBarSeries, format: []const u8 ```
    pub fn SetLabelsFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = @constCast(format.ptr),
        };
        qtc.QAbstractBarSeries_SetLabelsFormat(@ptrCast(self), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsFormat)
    ///
    /// ``` self: QtC.QAbstractBarSeries, allocator: std.mem.Allocator ```
    pub fn LabelsFormat(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractBarSeries_LabelsFormat(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbarseries.LabelsFormat: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsAngle)
    ///
    /// ``` self: QtC.QAbstractBarSeries, angle: f64 ```
    pub fn SetLabelsAngle(self: ?*anyopaque, angle: f64) void {
        qtc.QAbstractBarSeries_SetLabelsAngle(@ptrCast(self), @floatCast(angle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsAngle)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn LabelsAngle(self: ?*anyopaque) f64 {
        return qtc.QAbstractBarSeries_LabelsAngle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsPosition)
    ///
    /// ``` self: QtC.QAbstractBarSeries, position: qabstractbarseries_enums.LabelsPosition ```
    pub fn SetLabelsPosition(self: ?*anyopaque, position: i64) void {
        qtc.QAbstractBarSeries_SetLabelsPosition(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPosition)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn LabelsPosition(self: ?*anyopaque) i64 {
        return qtc.QAbstractBarSeries_LabelsPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsPrecision)
    ///
    /// ``` self: QtC.QAbstractBarSeries, precision: i32 ```
    pub fn SetLabelsPrecision(self: ?*anyopaque, precision: i32) void {
        qtc.QAbstractBarSeries_SetLabelsPrecision(@ptrCast(self), @intCast(precision));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPrecision)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn LabelsPrecision(self: ?*anyopaque) i32 {
        return qtc.QAbstractBarSeries_LabelsPrecision(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#clicked)
    ///
    /// ``` self: QtC.QAbstractBarSeries, index: i32, barset: QtC.QBarSet ```
    pub fn Clicked(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Clicked(@ptrCast(self), @intCast(index), @ptrCast(barset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#clicked)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, index: i32, barset: QtC.QBarSet) callconv(.c) void ```
    pub fn OnClicked(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Clicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#hovered)
    ///
    /// ``` self: QtC.QAbstractBarSeries, status: bool, index: i32, barset: QtC.QBarSet ```
    pub fn Hovered(self: ?*anyopaque, status: bool, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Hovered(@ptrCast(self), status, @intCast(index), @ptrCast(barset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#hovered)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, status: bool, index: i32, barset: QtC.QBarSet) callconv(.c) void ```
    pub fn OnHovered(self: ?*anyopaque, slot: fn (?*anyopaque, bool, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Hovered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#pressed)
    ///
    /// ``` self: QtC.QAbstractBarSeries, index: i32, barset: QtC.QBarSet ```
    pub fn Pressed(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Pressed(@ptrCast(self), @intCast(index), @ptrCast(barset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#pressed)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, index: i32, barset: QtC.QBarSet) callconv(.c) void ```
    pub fn OnPressed(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Pressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#released)
    ///
    /// ``` self: QtC.QAbstractBarSeries, index: i32, barset: QtC.QBarSet ```
    pub fn Released(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Released(@ptrCast(self), @intCast(index), @ptrCast(barset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#released)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, index: i32, barset: QtC.QBarSet) callconv(.c) void ```
    pub fn OnReleased(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Released(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#doubleClicked)
    ///
    /// ``` self: QtC.QAbstractBarSeries, index: i32, barset: QtC.QBarSet ```
    pub fn DoubleClicked(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_DoubleClicked(@ptrCast(self), @intCast(index), @ptrCast(barset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#doubleClicked)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, index: i32, barset: QtC.QBarSet) callconv(.c) void ```
    pub fn OnDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_DoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#countChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn CountChanged(self: ?*anyopaque) void {
        qtc.QAbstractBarSeries_CountChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#countChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries) callconv(.c) void ```
    pub fn OnCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_CountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn LabelsVisibleChanged(self: ?*anyopaque) void {
        qtc.QAbstractBarSeries_LabelsVisibleChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries) callconv(.c) void ```
    pub fn OnLabelsVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsFormatChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries, format: []const u8 ```
    pub fn LabelsFormatChanged(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = @constCast(format.ptr),
        };
        qtc.QAbstractBarSeries_LabelsFormatChanged(@ptrCast(self), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsFormatChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, format: []const u8) callconv(.c) void ```
    pub fn OnLabelsFormatChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsFormatChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPositionChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries, position: qabstractbarseries_enums.LabelsPosition ```
    pub fn LabelsPositionChanged(self: ?*anyopaque, position: i64) void {
        qtc.QAbstractBarSeries_LabelsPositionChanged(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPositionChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, position: qabstractbarseries_enums.LabelsPosition) callconv(.c) void ```
    pub fn OnLabelsPositionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsPositionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsAngleChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries, angle: f64 ```
    pub fn LabelsAngleChanged(self: ?*anyopaque, angle: f64) void {
        qtc.QAbstractBarSeries_LabelsAngleChanged(@ptrCast(self), @floatCast(angle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsAngleChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, angle: f64) callconv(.c) void ```
    pub fn OnLabelsAngleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsAngleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPrecisionChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries, precision: i32 ```
    pub fn LabelsPrecisionChanged(self: ?*anyopaque, precision: i32) void {
        qtc.QAbstractBarSeries_LabelsPrecisionChanged(@ptrCast(self), @intCast(precision));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPrecisionChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, precision: i32) callconv(.c) void ```
    pub fn OnLabelsPrecisionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsPrecisionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsAdded)
    ///
    /// ``` self: QtC.QAbstractBarSeries, sets: []QtC.QBarSet ```
    pub fn BarsetsAdded(self: ?*anyopaque, sets: []?*anyopaque) void {
        const sets_list = qtc.struct_libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        qtc.QAbstractBarSeries_BarsetsAdded(@ptrCast(self), sets_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsAdded)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, sets: []QtC.QBarSet) callconv(.c) void ```
    pub fn OnBarsetsAdded(self: ?*anyopaque, slot: fn (?*anyopaque, []?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_BarsetsAdded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsRemoved)
    ///
    /// ``` self: QtC.QAbstractBarSeries, sets: []QtC.QBarSet ```
    pub fn BarsetsRemoved(self: ?*anyopaque, sets: []?*anyopaque) void {
        const sets_list = qtc.struct_libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        qtc.QAbstractBarSeries_BarsetsRemoved(@ptrCast(self), sets_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsRemoved)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, sets: []QtC.QBarSet) callconv(.c) void ```
    pub fn OnBarsetsRemoved(self: ?*anyopaque, slot: fn (?*anyopaque, []?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_BarsetsRemoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = qtc.QAbstractBarSeries_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbarseries.Tr2: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = qtc.QAbstractBarSeries_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbarseries.Tr3: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsVisible)
    ///
    /// ``` self: QtC.QAbstractBarSeries, visible: bool ```
    pub fn SetLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractBarSeries_SetLabelsVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#type)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QAbstractSeries_Type(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ``` self: QtC.QAbstractBarSeries, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        qtc.QAbstractSeries_SetName(@ptrCast(self), name_str);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
    ///
    /// ``` self: QtC.QAbstractBarSeries, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSeries_Name(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbarseries.Name: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn SetVisible(self: ?*anyopaque) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ``` self: QtC.QAbstractBarSeries, opacity: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn SetUseOpenGL(self: ?*anyopaque) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn UseOpenGL(self: ?*anyopaque) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn Chart(self: ?*anyopaque) QtC.QChart {
        return qtc.QAbstractSeries_Chart(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ``` self: QtC.QAbstractBarSeries, axis: QtC.QAbstractAxis ```
    pub fn AttachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ``` self: QtC.QAbstractBarSeries, axis: QtC.QAbstractAxis ```
    pub fn DetachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ``` self: QtC.QAbstractBarSeries, allocator: std.mem.Allocator ```
    pub fn AttachedAxes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractAxis {
        const _arr: qtc.struct_libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractAxis, _arr.len) catch @panic("qabstractbarseries.AttachedAxes: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QAbstractSeries_Show(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn NameChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ``` self: QtC.QAbstractSeries, slot: fn (self: QtC.QAbstractSeries) callconv(.c) void ```
    pub fn OnNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn VisibleChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ``` self: QtC.QAbstractSeries, slot: fn (self: QtC.QAbstractSeries) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn OpacityChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ``` self: QtC.QAbstractSeries, slot: fn (self: QtC.QAbstractSeries) callconv(.c) void ```
    pub fn OnOpacityChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn UseOpenGLChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ``` self: QtC.QAbstractSeries, slot: fn (self: QtC.QAbstractSeries) callconv(.c) void ```
    pub fn OnUseOpenGLChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ``` self: QtC.QAbstractBarSeries, visible: bool ```
    pub fn SetVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ``` self: QtC.QAbstractBarSeries, enable: bool ```
    pub fn SetUseOpenGL1(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self), enable);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.QAbstractBarSeries, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.QAbstractBarSeries, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QAbstractBarSeries, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbarseries.ObjectName: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QAbstractBarSeries, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QAbstractBarSeries, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QAbstractBarSeries, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QAbstractBarSeries, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QAbstractBarSeries, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QAbstractBarSeries, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qabstractbarseries.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QAbstractBarSeries, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QAbstractBarSeries, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QAbstractBarSeries, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QAbstractBarSeries, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return qtc.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QAbstractBarSeries, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QAbstractBarSeries, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QAbstractBarSeries, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qabstractbarseries.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qabstractbarseries.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QAbstractBarSeries, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QAbstractBarSeries, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QAbstractBarSeries, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractBarSeries, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#dtor.QAbstractBarSeries)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAbstractBarSeries ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#types
pub const enums = struct {
    pub const LabelsPosition = enum {
        pub const LabelsCenter: i32 = 0;
        pub const LabelsInsideEnd: i32 = 1;
        pub const LabelsInsideBase: i32 = 2;
        pub const LabelsOutsideEnd: i32 = 3;
    };
};
