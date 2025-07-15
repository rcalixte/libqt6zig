const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html
pub const qcandlestickmodelmapper = struct {
    /// New constructs a new QCandlestickModelMapper object.
    ///
    ///
    pub fn New() QtC.QCandlestickModelMapper {
        return qtc.QCandlestickModelMapper_new();
    }

    /// New2 constructs a new QCandlestickModelMapper object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QCandlestickModelMapper {
        return qtc.QCandlestickModelMapper_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QCandlestickModelMapper_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QCandlestickModelMapper, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCandlestickModelMapper_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QCandlestickModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QCandlestickModelMapper_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickmodelmapper.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setModel)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, model: QtC.QAbstractItemModel ```
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#model)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn Model(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QCandlestickModelMapper_Model(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setSeries)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, series: QtC.QCandlestickSeries ```
    pub fn SetSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_SetSeries(@ptrCast(self), @ptrCast(series));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#series)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn Series(self: ?*anyopaque) QtC.QCandlestickSeries {
        return qtc.QCandlestickModelMapper_Series(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#orientation)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn Orientation(self: ?*anyopaque) i64 {
        return qtc.QCandlestickModelMapper_Orientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#orientation)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn () callconv(.c) i64 ```
    pub fn OnOrientation(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QCandlestickModelMapper_OnOrientation(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#orientation)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn QBaseOrientation(self: ?*anyopaque) i64 {
        return qtc.QCandlestickModelMapper_QBaseOrientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn ModelReplaced(self: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_ModelReplaced(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper) callconv(.c) void ```
    pub fn OnModelReplaced(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_Connect_ModelReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn SeriesReplaced(self: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_SeriesReplaced(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper) callconv(.c) void ```
    pub fn OnSeriesReplaced(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_Connect_SeriesReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setTimestamp)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, timestamp: i32 ```
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: i32) void {
        qtc.QCandlestickModelMapper_SetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setTimestamp)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper, timestamp: i32) callconv(.c) void ```
    pub fn OnSetTimestamp(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetTimestamp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setTimestamp)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickModelMapper, timestamp: i32 ```
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: i32) void {
        qtc.QCandlestickModelMapper_QBaseSetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#timestamp)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn Timestamp(self: ?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_Timestamp(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#timestamp)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnTimestamp(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnTimestamp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#timestamp)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn QBaseTimestamp(self: ?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_QBaseTimestamp(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setOpen)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, open: i32 ```
    pub fn SetOpen(self: ?*anyopaque, open: i32) void {
        qtc.QCandlestickModelMapper_SetOpen(@ptrCast(self), @intCast(open));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setOpen)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper, open: i32) callconv(.c) void ```
    pub fn OnSetOpen(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetOpen(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setOpen)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickModelMapper, open: i32 ```
    pub fn QBaseSetOpen(self: ?*anyopaque, open: i32) void {
        qtc.QCandlestickModelMapper_QBaseSetOpen(@ptrCast(self), @intCast(open));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#open)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn Open(self: ?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_Open(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#open)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnOpen(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnOpen(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#open)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn QBaseOpen(self: ?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_QBaseOpen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setHigh)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, high: i32 ```
    pub fn SetHigh(self: ?*anyopaque, high: i32) void {
        qtc.QCandlestickModelMapper_SetHigh(@ptrCast(self), @intCast(high));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setHigh)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper, high: i32) callconv(.c) void ```
    pub fn OnSetHigh(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetHigh(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setHigh)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickModelMapper, high: i32 ```
    pub fn QBaseSetHigh(self: ?*anyopaque, high: i32) void {
        qtc.QCandlestickModelMapper_QBaseSetHigh(@ptrCast(self), @intCast(high));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#high)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn High(self: ?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_High(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#high)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnHigh(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnHigh(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#high)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn QBaseHigh(self: ?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_QBaseHigh(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setLow)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, low: i32 ```
    pub fn SetLow(self: ?*anyopaque, low: i32) void {
        qtc.QCandlestickModelMapper_SetLow(@ptrCast(self), @intCast(low));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setLow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper, low: i32) callconv(.c) void ```
    pub fn OnSetLow(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetLow(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setLow)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickModelMapper, low: i32 ```
    pub fn QBaseSetLow(self: ?*anyopaque, low: i32) void {
        qtc.QCandlestickModelMapper_QBaseSetLow(@ptrCast(self), @intCast(low));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#low)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn Low(self: ?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_Low(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#low)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnLow(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnLow(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#low)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn QBaseLow(self: ?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_QBaseLow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setClose)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, close: i32 ```
    pub fn SetClose(self: ?*anyopaque, close: i32) void {
        qtc.QCandlestickModelMapper_SetClose(@ptrCast(self), @intCast(close));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setClose)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper, close: i32) callconv(.c) void ```
    pub fn OnSetClose(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setClose)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickModelMapper, close: i32 ```
    pub fn QBaseSetClose(self: ?*anyopaque, close: i32) void {
        qtc.QCandlestickModelMapper_QBaseSetClose(@ptrCast(self), @intCast(close));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#close)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn Close(self: ?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_Close(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#close)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnClose(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#close)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn QBaseClose(self: ?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_QBaseClose(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setFirstSetSection)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, firstSetSection: i32 ```
    pub fn SetFirstSetSection(self: ?*anyopaque, firstSetSection: i32) void {
        qtc.QCandlestickModelMapper_SetFirstSetSection(@ptrCast(self), @intCast(firstSetSection));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setFirstSetSection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper, firstSetSection: i32) callconv(.c) void ```
    pub fn OnSetFirstSetSection(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetFirstSetSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setFirstSetSection)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickModelMapper, firstSetSection: i32 ```
    pub fn QBaseSetFirstSetSection(self: ?*anyopaque, firstSetSection: i32) void {
        qtc.QCandlestickModelMapper_QBaseSetFirstSetSection(@ptrCast(self), @intCast(firstSetSection));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#firstSetSection)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn FirstSetSection(self: ?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_FirstSetSection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#firstSetSection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnFirstSetSection(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnFirstSetSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#firstSetSection)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn QBaseFirstSetSection(self: ?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_QBaseFirstSetSection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setLastSetSection)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, lastSetSection: i32 ```
    pub fn SetLastSetSection(self: ?*anyopaque, lastSetSection: i32) void {
        qtc.QCandlestickModelMapper_SetLastSetSection(@ptrCast(self), @intCast(lastSetSection));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setLastSetSection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper, lastSetSection: i32) callconv(.c) void ```
    pub fn OnSetLastSetSection(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetLastSetSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setLastSetSection)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickModelMapper, lastSetSection: i32 ```
    pub fn QBaseSetLastSetSection(self: ?*anyopaque, lastSetSection: i32) void {
        qtc.QCandlestickModelMapper_QBaseSetLastSetSection(@ptrCast(self), @intCast(lastSetSection));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#lastSetSection)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn LastSetSection(self: ?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_LastSetSection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#lastSetSection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnLastSetSection(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnLastSetSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#lastSetSection)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn QBaseLastSetSection(self: ?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_QBaseLastSetSection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QCandlestickModelMapper_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickmodelmapper.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QCandlestickModelMapper_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickmodelmapper.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickmodelmapper.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, name: []const u8 ```
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
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qcandlestickmodelmapper.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, obj: QtC.QObject ```
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
    /// ``` self: QtC.QCandlestickModelMapper, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qcandlestickmodelmapper.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcandlestickmodelmapper.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
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
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
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
    /// ``` self: QtC.QCandlestickModelMapper, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, param1: QtC.QObject ```
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
    /// ``` self: QtC.QCandlestickModelMapper, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCandlestickModelMapper_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCandlestickModelMapper_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCandlestickModelMapper_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCandlestickModelMapper_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCandlestickModelMapper_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCandlestickModelMapper_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QCandlestickModelMapper_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QCandlestickModelMapper_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QCandlestickModelMapper_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCandlestickModelMapper_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCandlestickModelMapper_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QCandlestickModelMapper_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QCandlestickModelMapper_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCandlestickModelMapper_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#dtor.QCandlestickModelMapper)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCandlestickModelMapper ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_Delete(@ptrCast(self));
    }
};
