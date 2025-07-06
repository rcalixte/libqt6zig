const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html
pub const qhcandlestickmodelmapper = struct {
    /// New constructs a new QHCandlestickModelMapper object.
    ///
    ///
    pub fn New() QtC.QHCandlestickModelMapper {
        return qtc.QHCandlestickModelMapper_new();
    }

    /// New2 constructs a new QHCandlestickModelMapper object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QHCandlestickModelMapper {
        return qtc.QHCandlestickModelMapper_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QHCandlestickModelMapper_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QHCandlestickModelMapper, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHCandlestickModelMapper_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QHCandlestickModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QHCandlestickModelMapper_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhcandlestickmodelmapper.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#orientation)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn Orientation(self: ?*anyopaque) i64 {
        return qtc.QHCandlestickModelMapper_Orientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#orientation)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn () callconv(.c) i64 ```
    pub fn OnOrientation(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QHCandlestickModelMapper_OnOrientation(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#orientation)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn QBaseOrientation(self: ?*anyopaque) i64 {
        return qtc.QHCandlestickModelMapper_QBaseOrientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setTimestampColumn)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, timestampColumn: i32 ```
    pub fn SetTimestampColumn(self: ?*anyopaque, timestampColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetTimestampColumn(@ptrCast(self), @intCast(timestampColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#timestampColumn)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn TimestampColumn(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_TimestampColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setOpenColumn)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, openColumn: i32 ```
    pub fn SetOpenColumn(self: ?*anyopaque, openColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetOpenColumn(@ptrCast(self), @intCast(openColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#openColumn)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn OpenColumn(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_OpenColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setHighColumn)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, highColumn: i32 ```
    pub fn SetHighColumn(self: ?*anyopaque, highColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetHighColumn(@ptrCast(self), @intCast(highColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#highColumn)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn HighColumn(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_HighColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setLowColumn)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, lowColumn: i32 ```
    pub fn SetLowColumn(self: ?*anyopaque, lowColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetLowColumn(@ptrCast(self), @intCast(lowColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lowColumn)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn LowColumn(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_LowColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setCloseColumn)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, closeColumn: i32 ```
    pub fn SetCloseColumn(self: ?*anyopaque, closeColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetCloseColumn(@ptrCast(self), @intCast(closeColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#closeColumn)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn CloseColumn(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_CloseColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setFirstSetRow)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, firstSetRow: i32 ```
    pub fn SetFirstSetRow(self: ?*anyopaque, firstSetRow: i32) void {
        qtc.QHCandlestickModelMapper_SetFirstSetRow(@ptrCast(self), @intCast(firstSetRow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#firstSetRow)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn FirstSetRow(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_FirstSetRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setLastSetRow)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, lastSetRow: i32 ```
    pub fn SetLastSetRow(self: ?*anyopaque, lastSetRow: i32) void {
        qtc.QHCandlestickModelMapper_SetLastSetRow(@ptrCast(self), @intCast(lastSetRow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lastSetRow)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn LastSetRow(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_LastSetRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#timestampColumnChanged)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn TimestampColumnChanged(self: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_TimestampColumnChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#timestampColumnChanged)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper) callconv(.c) void ```
    pub fn OnTimestampColumnChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_TimestampColumnChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#openColumnChanged)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn OpenColumnChanged(self: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_OpenColumnChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#openColumnChanged)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper) callconv(.c) void ```
    pub fn OnOpenColumnChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_OpenColumnChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#highColumnChanged)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn HighColumnChanged(self: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_HighColumnChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#highColumnChanged)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper) callconv(.c) void ```
    pub fn OnHighColumnChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_HighColumnChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lowColumnChanged)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn LowColumnChanged(self: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_LowColumnChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lowColumnChanged)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper) callconv(.c) void ```
    pub fn OnLowColumnChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_LowColumnChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#closeColumnChanged)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn CloseColumnChanged(self: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_CloseColumnChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#closeColumnChanged)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper) callconv(.c) void ```
    pub fn OnCloseColumnChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_CloseColumnChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#firstSetRowChanged)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn FirstSetRowChanged(self: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_FirstSetRowChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#firstSetRowChanged)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper) callconv(.c) void ```
    pub fn OnFirstSetRowChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_FirstSetRowChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lastSetRowChanged)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn LastSetRowChanged(self: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_LastSetRowChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lastSetRowChanged)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper) callconv(.c) void ```
    pub fn OnLastSetRowChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_LastSetRowChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QHCandlestickModelMapper_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhcandlestickmodelmapper.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QHCandlestickModelMapper_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhcandlestickmodelmapper.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setModel)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, model: QtC.QAbstractItemModel ```
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#model)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn Model(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QCandlestickModelMapper_Model(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setSeries)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, series: QtC.QCandlestickSeries ```
    pub fn SetSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_SetSeries(@ptrCast(self), @ptrCast(series));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#series)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn Series(self: ?*anyopaque) QtC.QCandlestickSeries {
        return qtc.QCandlestickModelMapper_Series(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn ModelReplaced(self: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_ModelReplaced(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper) callconv(.c) void ```
    pub fn OnModelReplaced(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_Connect_ModelReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn SeriesReplaced(self: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_SeriesReplaced(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
    ///
    /// ``` self: QtC.QCandlestickModelMapper, slot: fn (self: QtC.QCandlestickModelMapper) callconv(.c) void ```
    pub fn OnSeriesReplaced(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_Connect_SeriesReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhcandlestickmodelmapper.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, name: []const u8 ```
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
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, id: qnamespace_enums.TimerId ```
    pub fn KillTimerWithId(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimerWithId(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qhcandlestickmodelmapper.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, obj: QtC.QObject ```
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
    /// ``` self: QtC.QHCandlestickModelMapper, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qhcandlestickmodelmapper.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qhcandlestickmodelmapper.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
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
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QHCandlestickModelMapper, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, param1: QtC.QObject ```
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
    /// ``` self: QtC.QHCandlestickModelMapper, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHCandlestickModelMapper_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHCandlestickModelMapper_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHCandlestickModelMapper_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHCandlestickModelMapper_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHCandlestickModelMapper_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHCandlestickModelMapper_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, timestamp: i32 ```
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: i32) void {
        qtc.QHCandlestickModelMapper_SetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, timestamp: i32 ```
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: i32) void {
        qtc.QHCandlestickModelMapper_QBaseSetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper, timestamp: i32) callconv(.c) void ```
    pub fn OnSetTimestamp(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetTimestamp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn Timestamp(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_Timestamp(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn QBaseTimestamp(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_QBaseTimestamp(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnTimestamp(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnTimestamp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, open: i32 ```
    pub fn SetOpen(self: ?*anyopaque, open: i32) void {
        qtc.QHCandlestickModelMapper_SetOpen(@ptrCast(self), @intCast(open));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, open: i32 ```
    pub fn QBaseSetOpen(self: ?*anyopaque, open: i32) void {
        qtc.QHCandlestickModelMapper_QBaseSetOpen(@ptrCast(self), @intCast(open));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper, open: i32) callconv(.c) void ```
    pub fn OnSetOpen(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetOpen(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn Open(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_Open(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn QBaseOpen(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_QBaseOpen(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnOpen(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnOpen(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, high: i32 ```
    pub fn SetHigh(self: ?*anyopaque, high: i32) void {
        qtc.QHCandlestickModelMapper_SetHigh(@ptrCast(self), @intCast(high));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, high: i32 ```
    pub fn QBaseSetHigh(self: ?*anyopaque, high: i32) void {
        qtc.QHCandlestickModelMapper_QBaseSetHigh(@ptrCast(self), @intCast(high));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper, high: i32) callconv(.c) void ```
    pub fn OnSetHigh(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetHigh(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn High(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_High(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn QBaseHigh(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_QBaseHigh(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnHigh(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnHigh(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, low: i32 ```
    pub fn SetLow(self: ?*anyopaque, low: i32) void {
        qtc.QHCandlestickModelMapper_SetLow(@ptrCast(self), @intCast(low));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, low: i32 ```
    pub fn QBaseSetLow(self: ?*anyopaque, low: i32) void {
        qtc.QHCandlestickModelMapper_QBaseSetLow(@ptrCast(self), @intCast(low));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper, low: i32) callconv(.c) void ```
    pub fn OnSetLow(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetLow(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn Low(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_Low(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn QBaseLow(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_QBaseLow(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnLow(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnLow(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, close: i32 ```
    pub fn SetClose(self: ?*anyopaque, close: i32) void {
        qtc.QHCandlestickModelMapper_SetClose(@ptrCast(self), @intCast(close));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, close: i32 ```
    pub fn QBaseSetClose(self: ?*anyopaque, close: i32) void {
        qtc.QHCandlestickModelMapper_QBaseSetClose(@ptrCast(self), @intCast(close));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper, close: i32) callconv(.c) void ```
    pub fn OnSetClose(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn Close(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_Close(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn QBaseClose(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_QBaseClose(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnClose(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, firstSetSection: i32 ```
    pub fn SetFirstSetSection(self: ?*anyopaque, firstSetSection: i32) void {
        qtc.QHCandlestickModelMapper_SetFirstSetSection(@ptrCast(self), @intCast(firstSetSection));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, firstSetSection: i32 ```
    pub fn QBaseSetFirstSetSection(self: ?*anyopaque, firstSetSection: i32) void {
        qtc.QHCandlestickModelMapper_QBaseSetFirstSetSection(@ptrCast(self), @intCast(firstSetSection));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper, firstSetSection: i32) callconv(.c) void ```
    pub fn OnSetFirstSetSection(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetFirstSetSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn FirstSetSection(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_FirstSetSection(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn QBaseFirstSetSection(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_QBaseFirstSetSection(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnFirstSetSection(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnFirstSetSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, lastSetSection: i32 ```
    pub fn SetLastSetSection(self: ?*anyopaque, lastSetSection: i32) void {
        qtc.QHCandlestickModelMapper_SetLastSetSection(@ptrCast(self), @intCast(lastSetSection));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, lastSetSection: i32 ```
    pub fn QBaseSetLastSetSection(self: ?*anyopaque, lastSetSection: i32) void {
        qtc.QHCandlestickModelMapper_QBaseSetLastSetSection(@ptrCast(self), @intCast(lastSetSection));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper, lastSetSection: i32) callconv(.c) void ```
    pub fn OnSetLastSetSection(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetLastSetSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn LastSetSection(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_LastSetSection(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn QBaseLastSetSection(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_QBaseLastSetSection(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnLastSetSection(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnLastSetSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QHCandlestickModelMapper_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QHCandlestickModelMapper_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QHCandlestickModelMapper_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHCandlestickModelMapper_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHCandlestickModelMapper_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QHCandlestickModelMapper_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QHCandlestickModelMapper_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QHCandlestickModelMapper, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHCandlestickModelMapper_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QHCandlestickModelMapper, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#dtor.QHCandlestickModelMapper)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QHCandlestickModelMapper ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_Delete(@ptrCast(self));
    }
};
