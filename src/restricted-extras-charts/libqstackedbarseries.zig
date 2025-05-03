const C = @import("qt6c");
const qabstractbarseries_enums = @import("libqabstractbarseries.zig").enums;
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qstackedbarseries.html
pub const qstackedbarseries = struct {
    /// New constructs a new QStackedBarSeries object.
    ///
    ///
    pub fn New() ?*C.QStackedBarSeries {
        return C.QStackedBarSeries_new();
    }

    /// New2 constructs a new QStackedBarSeries object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QStackedBarSeries {
        return C.QStackedBarSeries_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QStackedBarSeries_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QStackedBarSeries, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QStackedBarSeries_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QStackedBarSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QStackedBarSeries_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStackedBarSeries, slot: fn (?*C.QStackedBarSeries, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QStackedBarSeries_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStackedBarSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QStackedBarSeries_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QStackedBarSeries_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstackedbarseries.html#type)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn Type(self: ?*anyopaque) i64 {
        return C.QStackedBarSeries_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStackedBarSeries, slot: fn () callconv(.c) i64 ```
    pub fn OnType(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QStackedBarSeries_OnType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn QBaseType(self: ?*anyopaque) i64 {
        return C.QStackedBarSeries_QBaseType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QStackedBarSeries_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
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
        const _str = C.QStackedBarSeries_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
    ///
    /// ``` self: ?*C.QStackedBarSeries, width: f64 ```
    pub fn SetBarWidth(self: ?*anyopaque, width: f64) void {
        C.QAbstractBarSeries_SetBarWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn BarWidth(self: ?*anyopaque) f64 {
        return C.QAbstractBarSeries_BarWidth(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
    ///
    /// ``` self: ?*C.QStackedBarSeries, set: ?*C.QBarSet ```
    pub fn Append(self: ?*anyopaque, set: ?*anyopaque) bool {
        return C.QAbstractBarSeries_Append(@ptrCast(self), @ptrCast(set));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
    ///
    /// ``` self: ?*C.QStackedBarSeries, set: ?*C.QBarSet ```
    pub fn Remove(self: ?*anyopaque, set: ?*anyopaque) bool {
        return C.QAbstractBarSeries_Remove(@ptrCast(self), @ptrCast(set));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
    ///
    /// ``` self: ?*C.QStackedBarSeries, set: ?*C.QBarSet ```
    pub fn Take(self: ?*anyopaque, set: ?*anyopaque) bool {
        return C.QAbstractBarSeries_Take(@ptrCast(self), @ptrCast(set));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
    ///
    /// ``` self: ?*C.QStackedBarSeries, sets: []?*C.QBarSet ```
    pub fn AppendWithSets(self: ?*anyopaque, sets: []?*anyopaque) bool {
        const sets_list = C.struct_libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        return C.QAbstractBarSeries_AppendWithSets(@ptrCast(self), sets_list);
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#insert)
    ///
    /// ``` self: ?*C.QStackedBarSeries, index: i32, set: ?*C.QBarSet ```
    pub fn Insert(self: ?*anyopaque, index: i32, set: ?*anyopaque) bool {
        return C.QAbstractBarSeries_Insert(@ptrCast(self), @intCast(index), @ptrCast(set));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn Count(self: ?*anyopaque) i32 {
        return C.QAbstractBarSeries_Count(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
    ///
    /// ``` self: ?*C.QStackedBarSeries, allocator: std.mem.Allocator ```
    pub fn BarSets(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QBarSet {
        const _arr: C.struct_libqt_list = C.QAbstractBarSeries_BarSets(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QBarSet, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QBarSet = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clear)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn Clear(self: ?*anyopaque) void {
        C.QAbstractBarSeries_Clear(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn SetLabelsVisible(self: ?*anyopaque) void {
        C.QAbstractBarSeries_SetLabelsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn IsLabelsVisible(self: ?*anyopaque) bool {
        return C.QAbstractBarSeries_IsLabelsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
    ///
    /// ``` self: ?*C.QStackedBarSeries, format: []const u8 ```
    pub fn SetLabelsFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = C.struct_libqt_string{
            .len = format.len,
            .data = @constCast(format.ptr),
        };
        C.QAbstractBarSeries_SetLabelsFormat(@ptrCast(self), format_str);
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormat)
    ///
    /// ``` self: ?*C.QStackedBarSeries, allocator: std.mem.Allocator ```
    pub fn LabelsFormat(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QAbstractBarSeries_LabelsFormat(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
    ///
    /// ``` self: ?*C.QStackedBarSeries, angle: f64 ```
    pub fn SetLabelsAngle(self: ?*anyopaque, angle: f64) void {
        C.QAbstractBarSeries_SetLabelsAngle(@ptrCast(self), @floatCast(angle));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn LabelsAngle(self: ?*anyopaque) f64 {
        return C.QAbstractBarSeries_LabelsAngle(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
    ///
    /// ``` self: ?*C.QStackedBarSeries, position: qabstractbarseries_enums.LabelsPosition ```
    pub fn SetLabelsPosition(self: ?*anyopaque, position: i64) void {
        C.QAbstractBarSeries_SetLabelsPosition(@ptrCast(self), @intCast(position));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn LabelsPosition(self: ?*anyopaque) i64 {
        return C.QAbstractBarSeries_LabelsPosition(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
    ///
    /// ``` self: ?*C.QStackedBarSeries, precision: i32 ```
    pub fn SetLabelsPrecision(self: ?*anyopaque, precision: i32) void {
        C.QAbstractBarSeries_SetLabelsPrecision(@ptrCast(self), @intCast(precision));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn LabelsPrecision(self: ?*anyopaque) i32 {
        return C.QAbstractBarSeries_LabelsPrecision(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
    ///
    /// ``` self: ?*C.QStackedBarSeries, index: i32, barset: ?*C.QBarSet ```
    pub fn Clicked(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        C.QAbstractBarSeries_Clicked(@ptrCast(self), @intCast(index), @ptrCast(barset));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ``` self: ?*C.QAbstractBarSeries, slot: fn (?*C.QAbstractBarSeries, i32, ?*C.QBarSet) callconv(.c) void ```
    pub fn OnClicked(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractBarSeries_Connect_Clicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
    ///
    /// ``` self: ?*C.QStackedBarSeries, status: bool, index: i32, barset: ?*C.QBarSet ```
    pub fn Hovered(self: ?*anyopaque, status: bool, index: i32, barset: ?*anyopaque) void {
        C.QAbstractBarSeries_Hovered(@ptrCast(self), status, @intCast(index), @ptrCast(barset));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ``` self: ?*C.QAbstractBarSeries, slot: fn (?*C.QAbstractBarSeries, bool, i32, ?*C.QBarSet) callconv(.c) void ```
    pub fn OnHovered(self: ?*anyopaque, slot: fn (?*anyopaque, bool, i32, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractBarSeries_Connect_Hovered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
    ///
    /// ``` self: ?*C.QStackedBarSeries, index: i32, barset: ?*C.QBarSet ```
    pub fn Pressed(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        C.QAbstractBarSeries_Pressed(@ptrCast(self), @intCast(index), @ptrCast(barset));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ``` self: ?*C.QAbstractBarSeries, slot: fn (?*C.QAbstractBarSeries, i32, ?*C.QBarSet) callconv(.c) void ```
    pub fn OnPressed(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractBarSeries_Connect_Pressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
    ///
    /// ``` self: ?*C.QStackedBarSeries, index: i32, barset: ?*C.QBarSet ```
    pub fn Released(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        C.QAbstractBarSeries_Released(@ptrCast(self), @intCast(index), @ptrCast(barset));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ``` self: ?*C.QAbstractBarSeries, slot: fn (?*C.QAbstractBarSeries, i32, ?*C.QBarSet) callconv(.c) void ```
    pub fn OnReleased(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractBarSeries_Connect_Released(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
    ///
    /// ``` self: ?*C.QStackedBarSeries, index: i32, barset: ?*C.QBarSet ```
    pub fn DoubleClicked(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        C.QAbstractBarSeries_DoubleClicked(@ptrCast(self), @intCast(index), @ptrCast(barset));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ``` self: ?*C.QAbstractBarSeries, slot: fn (?*C.QAbstractBarSeries, i32, ?*C.QBarSet) callconv(.c) void ```
    pub fn OnDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractBarSeries_Connect_DoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn CountChanged(self: ?*anyopaque) void {
        C.QAbstractBarSeries_CountChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ``` self: ?*C.QAbstractBarSeries, slot: fn (?*C.QAbstractBarSeries) callconv(.c) void ```
    pub fn OnCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractBarSeries_Connect_CountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn LabelsVisibleChanged(self: ?*anyopaque) void {
        C.QAbstractBarSeries_LabelsVisibleChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ``` self: ?*C.QAbstractBarSeries, slot: fn (?*C.QAbstractBarSeries) callconv(.c) void ```
    pub fn OnLabelsVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractBarSeries_Connect_LabelsVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
    ///
    /// ``` self: ?*C.QStackedBarSeries, format: []const u8 ```
    pub fn LabelsFormatChanged(self: ?*anyopaque, format: []const u8) void {
        const format_str = C.struct_libqt_string{
            .len = format.len,
            .data = @constCast(format.ptr),
        };
        C.QAbstractBarSeries_LabelsFormatChanged(@ptrCast(self), format_str);
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ``` self: ?*C.QAbstractBarSeries, slot: fn (?*C.QAbstractBarSeries, []const u8) callconv(.c) void ```
    pub fn OnLabelsFormatChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QAbstractBarSeries_Connect_LabelsFormatChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
    ///
    /// ``` self: ?*C.QStackedBarSeries, position: qabstractbarseries_enums.LabelsPosition ```
    pub fn LabelsPositionChanged(self: ?*anyopaque, position: i64) void {
        C.QAbstractBarSeries_LabelsPositionChanged(@ptrCast(self), @intCast(position));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ``` self: ?*C.QAbstractBarSeries, slot: fn (?*C.QAbstractBarSeries, qabstractbarseries_enums.LabelsPosition) callconv(.c) void ```
    pub fn OnLabelsPositionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QAbstractBarSeries_Connect_LabelsPositionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
    ///
    /// ``` self: ?*C.QStackedBarSeries, angle: f64 ```
    pub fn LabelsAngleChanged(self: ?*anyopaque, angle: f64) void {
        C.QAbstractBarSeries_LabelsAngleChanged(@ptrCast(self), @floatCast(angle));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ``` self: ?*C.QAbstractBarSeries, slot: fn (?*C.QAbstractBarSeries, f64) callconv(.c) void ```
    pub fn OnLabelsAngleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        C.QAbstractBarSeries_Connect_LabelsAngleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
    ///
    /// ``` self: ?*C.QStackedBarSeries, precision: i32 ```
    pub fn LabelsPrecisionChanged(self: ?*anyopaque, precision: i32) void {
        C.QAbstractBarSeries_LabelsPrecisionChanged(@ptrCast(self), @intCast(precision));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ``` self: ?*C.QAbstractBarSeries, slot: fn (?*C.QAbstractBarSeries, i32) callconv(.c) void ```
    pub fn OnLabelsPrecisionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QAbstractBarSeries_Connect_LabelsPrecisionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
    ///
    /// ``` self: ?*C.QStackedBarSeries, sets: []?*C.QBarSet ```
    pub fn BarsetsAdded(self: ?*anyopaque, sets: []?*anyopaque) void {
        const sets_list = C.struct_libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        C.QAbstractBarSeries_BarsetsAdded(@ptrCast(self), sets_list);
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ``` self: ?*C.QAbstractBarSeries, slot: fn (?*C.QAbstractBarSeries, []?*C.QBarSet) callconv(.c) void ```
    pub fn OnBarsetsAdded(self: ?*anyopaque, slot: fn (?*anyopaque, []?*anyopaque) callconv(.c) void) void {
        C.QAbstractBarSeries_Connect_BarsetsAdded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
    ///
    /// ``` self: ?*C.QStackedBarSeries, sets: []?*C.QBarSet ```
    pub fn BarsetsRemoved(self: ?*anyopaque, sets: []?*anyopaque) void {
        const sets_list = C.struct_libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        C.QAbstractBarSeries_BarsetsRemoved(@ptrCast(self), sets_list);
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// ``` self: ?*C.QAbstractBarSeries, slot: fn (?*C.QAbstractBarSeries, []?*C.QBarSet) callconv(.c) void ```
    pub fn OnBarsetsRemoved(self: ?*anyopaque, slot: fn (?*anyopaque, []?*anyopaque) callconv(.c) void) void {
        C.QAbstractBarSeries_Connect_BarsetsRemoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractBarSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
    ///
    /// ``` self: ?*C.QStackedBarSeries, visible: bool ```
    pub fn SetLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        C.QAbstractBarSeries_SetLabelsVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ``` self: ?*C.QStackedBarSeries, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QAbstractSeries_SetName(@ptrCast(self), name_str);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
    ///
    /// ``` self: ?*C.QStackedBarSeries, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QAbstractSeries_Name(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn SetVisible(self: ?*anyopaque) void {
        C.QAbstractSeries_SetVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return C.QAbstractSeries_IsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return C.QAbstractSeries_Opacity(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ``` self: ?*C.QStackedBarSeries, opacity: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        C.QAbstractSeries_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn SetUseOpenGL(self: ?*anyopaque) void {
        C.QAbstractSeries_SetUseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn UseOpenGL(self: ?*anyopaque) bool {
        return C.QAbstractSeries_UseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn Chart(self: ?*anyopaque) ?*C.QChart {
        return C.QAbstractSeries_Chart(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ``` self: ?*C.QStackedBarSeries, axis: ?*C.QAbstractAxis ```
    pub fn AttachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return C.QAbstractSeries_AttachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ``` self: ?*C.QStackedBarSeries, axis: ?*C.QAbstractAxis ```
    pub fn DetachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return C.QAbstractSeries_DetachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ``` self: ?*C.QStackedBarSeries, allocator: std.mem.Allocator ```
    pub fn AttachedAxes(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QAbstractAxis {
        const _arr: C.struct_libqt_list = C.QAbstractSeries_AttachedAxes(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QAbstractAxis, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn Show(self: ?*anyopaque) void {
        C.QAbstractSeries_Show(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn Hide(self: ?*anyopaque) void {
        C.QAbstractSeries_Hide(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn NameChanged(self: ?*anyopaque) void {
        C.QAbstractSeries_NameChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ``` self: ?*C.QAbstractSeries, slot: fn (?*C.QAbstractSeries) callconv(.c) void ```
    pub fn OnNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSeries_Connect_NameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn VisibleChanged(self: ?*anyopaque) void {
        C.QAbstractSeries_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ``` self: ?*C.QAbstractSeries, slot: fn (?*C.QAbstractSeries) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn OpacityChanged(self: ?*anyopaque) void {
        C.QAbstractSeries_OpacityChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ``` self: ?*C.QAbstractSeries, slot: fn (?*C.QAbstractSeries) callconv(.c) void ```
    pub fn OnOpacityChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn UseOpenGLChanged(self: ?*anyopaque) void {
        C.QAbstractSeries_UseOpenGLChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ``` self: ?*C.QAbstractSeries, slot: fn (?*C.QAbstractSeries) callconv(.c) void ```
    pub fn OnUseOpenGLChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ``` self: ?*C.QStackedBarSeries, visible: bool ```
    pub fn SetVisible1(self: ?*anyopaque, visible: bool) void {
        C.QAbstractSeries_SetVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ``` self: ?*C.QStackedBarSeries, enable: bool ```
    pub fn SetUseOpenGL1(self: ?*anyopaque, enable: bool) void {
        C.QAbstractSeries_SetUseOpenGL1(@ptrCast(self), enable);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QStackedBarSeries, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QStackedBarSeries, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QStackedBarSeries, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QStackedBarSeries, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QStackedBarSeries, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QStackedBarSeries, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QStackedBarSeries, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QStackedBarSeries, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QStackedBarSeries, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QStackedBarSeries, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QStackedBarSeries, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QStackedBarSeries, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QStackedBarSeries, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QStackedBarSeries, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QStackedBarSeries, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QStackedBarSeries, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QStackedBarSeries, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QStackedBarSeries, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QStackedBarSeries_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QStackedBarSeries_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, slot: fn (?*C.QStackedBarSeries, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QStackedBarSeries_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QStackedBarSeries_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QStackedBarSeries_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, slot: fn (?*C.QStackedBarSeries, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QStackedBarSeries_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QStackedBarSeries_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QStackedBarSeries_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, slot: fn (?*C.QStackedBarSeries, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QStackedBarSeries_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QStackedBarSeries_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QStackedBarSeries_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, slot: fn (?*C.QStackedBarSeries, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QStackedBarSeries_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QStackedBarSeries_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QStackedBarSeries_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, slot: fn (?*C.QStackedBarSeries, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QStackedBarSeries_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QStackedBarSeries_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QStackedBarSeries_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, slot: fn (?*C.QStackedBarSeries, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QStackedBarSeries_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QStackedBarSeries_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QStackedBarSeries_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, slot: fn (?*C.QStackedBarSeries, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QStackedBarSeries_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QStackedBarSeries_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QStackedBarSeries_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QStackedBarSeries_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QStackedBarSeries_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QStackedBarSeries_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QStackedBarSeries_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QStackedBarSeries_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QStackedBarSeries_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, slot: fn (?*C.QStackedBarSeries, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QStackedBarSeries_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QStackedBarSeries_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QStackedBarSeries_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStackedBarSeries, slot: fn (?*C.QStackedBarSeries, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QStackedBarSeries_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QStackedBarSeries ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QStackedBarSeries_Delete(@ptrCast(self));
    }
};
