const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractbarseries_enums = @import("libqabstractbarseries.zig").enums;
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qhorizontalstackedbarseries-qtcharts.html
pub const qhorizontalstackedbarseries = struct {
    /// New constructs a new QHorizontalStackedBarSeries object.
    ///
    ///
    pub fn New() QtC.QHorizontalStackedBarSeries {
        return qtc.QHorizontalStackedBarSeries_new();
    }

    /// New2 constructs a new QHorizontalStackedBarSeries object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QHorizontalStackedBarSeries {
        return qtc.QHorizontalStackedBarSeries_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QHorizontalStackedBarSeries_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QHorizontalStackedBarSeries, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHorizontalStackedBarSeries_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QHorizontalStackedBarSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QHorizontalStackedBarSeries_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, slot: fn (self: QtC.QHorizontalStackedBarSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QHorizontalStackedBarSeries_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QHorizontalStackedBarSeries_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QHorizontalStackedBarSeries_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhorizontalstackedbarseries.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhorizontalstackedbarseries-qtcharts.html#type)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QHorizontalStackedBarSeries_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhorizontalstackedbarseries-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, slot: fn () callconv(.c) i64 ```
    pub fn OnType(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QHorizontalStackedBarSeries_OnType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhorizontalstackedbarseries-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn QBaseType(self: ?*anyopaque) i64 {
        return qtc.QHorizontalStackedBarSeries_QBaseType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QHorizontalStackedBarSeries_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhorizontalstackedbarseries.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QHorizontalStackedBarSeries_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhorizontalstackedbarseries.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, width: f64 ```
    pub fn SetBarWidth(self: ?*anyopaque, width: f64) void {
        qtc.QAbstractBarSeries_SetBarWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn BarWidth(self: ?*anyopaque) f64 {
        return qtc.QAbstractBarSeries_BarWidth(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, set: QtC.QBarSet ```
    pub fn Append(self: ?*anyopaque, set: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_Append(@ptrCast(self), @ptrCast(set));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, set: QtC.QBarSet ```
    pub fn Remove(self: ?*anyopaque, set: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_Remove(@ptrCast(self), @ptrCast(set));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, set: QtC.QBarSet ```
    pub fn Take(self: ?*anyopaque, set: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_Take(@ptrCast(self), @ptrCast(set));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, sets: []QtC.QBarSet ```
    pub fn AppendWithSets(self: ?*anyopaque, sets: []?*anyopaque) bool {
        const sets_list = qtc.struct_libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        return qtc.QAbstractBarSeries_AppendWithSets(@ptrCast(self), sets_list);
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#insert)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, index: i32, set: QtC.QBarSet ```
    pub fn Insert(self: ?*anyopaque, index: i32, set: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_Insert(@ptrCast(self), @intCast(index), @ptrCast(set));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QAbstractBarSeries_Count(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, allocator: std.mem.Allocator ```
    pub fn BarSets(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QBarSet {
        const _arr: qtc.struct_libqt_list = qtc.QAbstractBarSeries_BarSets(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QBarSet, _arr.len) catch @panic("qhorizontalstackedbarseries.BarSets: Memory allocation failed");
        const _data: [*]QtC.QBarSet = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clear)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Clear(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn SetLabelsVisible(self: ?*anyopaque) void {
        qtc.QAbstractBarSeries_SetLabelsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn IsLabelsVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_IsLabelsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, format: []const u8 ```
    pub fn SetLabelsFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QAbstractBarSeries_SetLabelsFormat(@ptrCast(self), format_str);
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormat)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, allocator: std.mem.Allocator ```
    pub fn LabelsFormat(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractBarSeries_LabelsFormat(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhorizontalstackedbarseries.LabelsFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, angle: f64 ```
    pub fn SetLabelsAngle(self: ?*anyopaque, angle: f64) void {
        qtc.QAbstractBarSeries_SetLabelsAngle(@ptrCast(self), @floatCast(angle));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn LabelsAngle(self: ?*anyopaque) f64 {
        return qtc.QAbstractBarSeries_LabelsAngle(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, position: qabstractbarseries_enums.LabelsPosition ```
    pub fn SetLabelsPosition(self: ?*anyopaque, position: i64) void {
        qtc.QAbstractBarSeries_SetLabelsPosition(@ptrCast(self), @intCast(position));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn LabelsPosition(self: ?*anyopaque) i64 {
        return qtc.QAbstractBarSeries_LabelsPosition(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, precision: i32 ```
    pub fn SetLabelsPrecision(self: ?*anyopaque, precision: i32) void {
        qtc.QAbstractBarSeries_SetLabelsPrecision(@ptrCast(self), @intCast(precision));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn LabelsPrecision(self: ?*anyopaque) i32 {
        return qtc.QAbstractBarSeries_LabelsPrecision(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, index: i32, barset: QtC.QBarSet ```
    pub fn Clicked(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Clicked(@ptrCast(self), @intCast(index), @ptrCast(barset));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, index: i32, barset: QtC.QBarSet) callconv(.c) void ```
    pub fn OnClicked(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Clicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, status: bool, index: i32, barset: QtC.QBarSet ```
    pub fn Hovered(self: ?*anyopaque, status: bool, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Hovered(@ptrCast(self), status, @intCast(index), @ptrCast(barset));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, status: bool, index: i32, barset: QtC.QBarSet) callconv(.c) void ```
    pub fn OnHovered(self: ?*anyopaque, slot: fn (?*anyopaque, bool, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Hovered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, index: i32, barset: QtC.QBarSet ```
    pub fn Pressed(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Pressed(@ptrCast(self), @intCast(index), @ptrCast(barset));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, index: i32, barset: QtC.QBarSet) callconv(.c) void ```
    pub fn OnPressed(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Pressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, index: i32, barset: QtC.QBarSet ```
    pub fn Released(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Released(@ptrCast(self), @intCast(index), @ptrCast(barset));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, index: i32, barset: QtC.QBarSet) callconv(.c) void ```
    pub fn OnReleased(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Released(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, index: i32, barset: QtC.QBarSet ```
    pub fn DoubleClicked(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_DoubleClicked(@ptrCast(self), @intCast(index), @ptrCast(barset));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, index: i32, barset: QtC.QBarSet) callconv(.c) void ```
    pub fn OnDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_DoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn CountChanged(self: ?*anyopaque) void {
        qtc.QAbstractBarSeries_CountChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries) callconv(.c) void ```
    pub fn OnCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_CountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn LabelsVisibleChanged(self: ?*anyopaque) void {
        qtc.QAbstractBarSeries_LabelsVisibleChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries) callconv(.c) void ```
    pub fn OnLabelsVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, format: []const u8 ```
    pub fn LabelsFormatChanged(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QAbstractBarSeries_LabelsFormatChanged(@ptrCast(self), format_str);
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, format: []const u8) callconv(.c) void ```
    pub fn OnLabelsFormatChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsFormatChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, position: qabstractbarseries_enums.LabelsPosition ```
    pub fn LabelsPositionChanged(self: ?*anyopaque, position: i64) void {
        qtc.QAbstractBarSeries_LabelsPositionChanged(@ptrCast(self), @intCast(position));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, position: qabstractbarseries_enums.LabelsPosition) callconv(.c) void ```
    pub fn OnLabelsPositionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsPositionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, angle: f64 ```
    pub fn LabelsAngleChanged(self: ?*anyopaque, angle: f64) void {
        qtc.QAbstractBarSeries_LabelsAngleChanged(@ptrCast(self), @floatCast(angle));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, angle: f64) callconv(.c) void ```
    pub fn OnLabelsAngleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsAngleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, precision: i32 ```
    pub fn LabelsPrecisionChanged(self: ?*anyopaque, precision: i32) void {
        qtc.QAbstractBarSeries_LabelsPrecisionChanged(@ptrCast(self), @intCast(precision));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, precision: i32) callconv(.c) void ```
    pub fn OnLabelsPrecisionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsPrecisionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, sets: []QtC.QBarSet ```
    pub fn BarsetsAdded(self: ?*anyopaque, sets: []?*anyopaque) void {
        const sets_list = qtc.struct_libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        qtc.QAbstractBarSeries_BarsetsAdded(@ptrCast(self), sets_list);
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, sets: []QtC.QBarSet) callconv(.c) void ```
    pub fn OnBarsetsAdded(self: ?*anyopaque, slot: fn (?*anyopaque, []?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_BarsetsAdded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, sets: []QtC.QBarSet ```
    pub fn BarsetsRemoved(self: ?*anyopaque, sets: []?*anyopaque) void {
        const sets_list = qtc.struct_libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        qtc.QAbstractBarSeries_BarsetsRemoved(@ptrCast(self), sets_list);
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
    ///
    /// ``` self: QtC.QAbstractBarSeries, slot: fn (self: QtC.QAbstractBarSeries, sets: []QtC.QBarSet) callconv(.c) void ```
    pub fn OnBarsetsRemoved(self: ?*anyopaque, slot: fn (?*anyopaque, []?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_BarsetsRemoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, visible: bool ```
    pub fn SetLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractBarSeries_SetLabelsVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QAbstractSeries_SetName(@ptrCast(self), name_str);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSeries_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhorizontalstackedbarseries.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn SetVisible(self: ?*anyopaque) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, opacity: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn SetUseOpenGL(self: ?*anyopaque) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn UseOpenGL(self: ?*anyopaque) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn Chart(self: ?*anyopaque) QtC.QChart {
        return qtc.QAbstractSeries_Chart(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, axis: QtC.QAbstractAxis ```
    pub fn AttachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, axis: QtC.QAbstractAxis ```
    pub fn DetachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, allocator: std.mem.Allocator ```
    pub fn AttachedAxes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractAxis {
        const _arr: qtc.struct_libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractAxis, _arr.len) catch @panic("qhorizontalstackedbarseries.AttachedAxes: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QAbstractSeries_Show(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
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
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
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
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
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
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
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
    /// ``` self: QtC.QHorizontalStackedBarSeries, visible: bool ```
    pub fn SetVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, enable: bool ```
    pub fn SetUseOpenGL1(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self), enable);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhorizontalstackedbarseries.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, id: qnamespace_enums.TimerId ```
    pub fn KillTimerWithId(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimerWithId(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qhorizontalstackedbarseries.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, obj: QtC.QObject ```
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
    /// ``` self: QtC.QHorizontalStackedBarSeries, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
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
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qhorizontalstackedbarseries.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qhorizontalstackedbarseries.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
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
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QHorizontalStackedBarSeries, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, param1: QtC.QObject ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHorizontalStackedBarSeries_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHorizontalStackedBarSeries_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, slot: fn (self: QtC.QHorizontalStackedBarSeries, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHorizontalStackedBarSeries_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHorizontalStackedBarSeries_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHorizontalStackedBarSeries_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, slot: fn (self: QtC.QHorizontalStackedBarSeries, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHorizontalStackedBarSeries_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHorizontalStackedBarSeries_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHorizontalStackedBarSeries_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, slot: fn (self: QtC.QHorizontalStackedBarSeries, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHorizontalStackedBarSeries_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHorizontalStackedBarSeries_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHorizontalStackedBarSeries_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, slot: fn (self: QtC.QHorizontalStackedBarSeries, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHorizontalStackedBarSeries_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHorizontalStackedBarSeries_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHorizontalStackedBarSeries_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, slot: fn (self: QtC.QHorizontalStackedBarSeries, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHorizontalStackedBarSeries_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHorizontalStackedBarSeries_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHorizontalStackedBarSeries_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, slot: fn (self: QtC.QHorizontalStackedBarSeries, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHorizontalStackedBarSeries_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHorizontalStackedBarSeries_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHorizontalStackedBarSeries_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, slot: fn (self: QtC.QHorizontalStackedBarSeries, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHorizontalStackedBarSeries_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QHorizontalStackedBarSeries_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QHorizontalStackedBarSeries_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QHorizontalStackedBarSeries_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QHorizontalStackedBarSeries_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QHorizontalStackedBarSeries_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QHorizontalStackedBarSeries_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHorizontalStackedBarSeries_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHorizontalStackedBarSeries_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, slot: fn (self: QtC.QHorizontalStackedBarSeries, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QHorizontalStackedBarSeries_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QHorizontalStackedBarSeries_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QHorizontalStackedBarSeries_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, slot: fn (self: QtC.QHorizontalStackedBarSeries, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHorizontalStackedBarSeries_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhorizontalstackedbarseries-qtcharts.html#dtor.QHorizontalStackedBarSeries)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QHorizontalStackedBarSeries ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHorizontalStackedBarSeries_Delete(@ptrCast(self));
    }
};
