const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html
pub const qvcandlestickmodelmapper = struct {
    /// New constructs a new QVCandlestickModelMapper object.
    ///
    ///
    pub fn New() QtC.QVCandlestickModelMapper {
        return qtc.QVCandlestickModelMapper_new();
    }

    /// New2 constructs a new QVCandlestickModelMapper object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QVCandlestickModelMapper {
        return qtc.QVCandlestickModelMapper_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QVCandlestickModelMapper_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QVCandlestickModelMapper, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVCandlestickModelMapper_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QVCandlestickModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QVCandlestickModelMapper_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvcandlestickmodelmapper.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#orientation)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    ///
    /// Returns: ``` qnamespace_enums.Orientation ```
    pub fn Orientation(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_Orientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#orientation)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32 ```
    pub fn OnOrientation(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnOrientation(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#orientation)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    ///
    /// Returns: ``` qnamespace_enums.Orientation ```
    pub fn QBaseOrientation(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_QBaseOrientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setTimestampRow)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, timestampRow: i32 ```
    pub fn SetTimestampRow(self: ?*anyopaque, timestampRow: i32) void {
        qtc.QVCandlestickModelMapper_SetTimestampRow(@ptrCast(self), @intCast(timestampRow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#timestampRow)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn TimestampRow(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_TimestampRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setOpenRow)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, openRow: i32 ```
    pub fn SetOpenRow(self: ?*anyopaque, openRow: i32) void {
        qtc.QVCandlestickModelMapper_SetOpenRow(@ptrCast(self), @intCast(openRow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#openRow)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn OpenRow(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_OpenRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setHighRow)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, highRow: i32 ```
    pub fn SetHighRow(self: ?*anyopaque, highRow: i32) void {
        qtc.QVCandlestickModelMapper_SetHighRow(@ptrCast(self), @intCast(highRow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#highRow)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn HighRow(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_HighRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setLowRow)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, lowRow: i32 ```
    pub fn SetLowRow(self: ?*anyopaque, lowRow: i32) void {
        qtc.QVCandlestickModelMapper_SetLowRow(@ptrCast(self), @intCast(lowRow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lowRow)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn LowRow(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_LowRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setCloseRow)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, closeRow: i32 ```
    pub fn SetCloseRow(self: ?*anyopaque, closeRow: i32) void {
        qtc.QVCandlestickModelMapper_SetCloseRow(@ptrCast(self), @intCast(closeRow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#closeRow)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn CloseRow(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_CloseRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setFirstSetColumn)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, firstSetColumn: i32 ```
    pub fn SetFirstSetColumn(self: ?*anyopaque, firstSetColumn: i32) void {
        qtc.QVCandlestickModelMapper_SetFirstSetColumn(@ptrCast(self), @intCast(firstSetColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#firstSetColumn)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn FirstSetColumn(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_FirstSetColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setLastSetColumn)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, lastSetColumn: i32 ```
    pub fn SetLastSetColumn(self: ?*anyopaque, lastSetColumn: i32) void {
        qtc.QVCandlestickModelMapper_SetLastSetColumn(@ptrCast(self), @intCast(lastSetColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lastSetColumn)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn LastSetColumn(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_LastSetColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#timestampRowChanged)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn TimestampRowChanged(self: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_TimestampRowChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#timestampRowChanged)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper) callconv(.c) void ```
    pub fn OnTimestampRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_TimestampRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#openRowChanged)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn OpenRowChanged(self: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_OpenRowChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#openRowChanged)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper) callconv(.c) void ```
    pub fn OnOpenRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_OpenRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#highRowChanged)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn HighRowChanged(self: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_HighRowChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#highRowChanged)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper) callconv(.c) void ```
    pub fn OnHighRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_HighRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lowRowChanged)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn LowRowChanged(self: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_LowRowChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lowRowChanged)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper) callconv(.c) void ```
    pub fn OnLowRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_LowRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#closeRowChanged)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn CloseRowChanged(self: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_CloseRowChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#closeRowChanged)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper) callconv(.c) void ```
    pub fn OnCloseRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_CloseRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#firstSetColumnChanged)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn FirstSetColumnChanged(self: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_FirstSetColumnChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#firstSetColumnChanged)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper) callconv(.c) void ```
    pub fn OnFirstSetColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_FirstSetColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lastSetColumnChanged)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn LastSetColumnChanged(self: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_LastSetColumnChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lastSetColumnChanged)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper) callconv(.c) void ```
    pub fn OnLastSetColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_LastSetColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QVCandlestickModelMapper_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvcandlestickmodelmapper.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QVCandlestickModelMapper_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvcandlestickmodelmapper.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setModel)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, model: QtC.QAbstractItemModel ```
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#model)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn Model(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QCandlestickModelMapper_Model(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setSeries)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, series: QtC.QCandlestickSeries ```
    pub fn SetSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_SetSeries(@ptrCast(self), @ptrCast(series));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#series)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn Series(self: ?*anyopaque) QtC.QCandlestickSeries {
        return qtc.QCandlestickModelMapper_Series(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn ModelReplaced(self: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_ModelReplaced(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper) callconv(.c) void ```
    pub fn OnModelReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_Connect_ModelReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn SeriesReplaced(self: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_SeriesReplaced(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper) callconv(.c) void ```
    pub fn OnSeriesReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_Connect_SeriesReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvcandlestickmodelmapper.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qvcandlestickmodelmapper.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, obj: QtC.QObject ```
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
    /// ``` self: QtC.QVCandlestickModelMapper, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qvcandlestickmodelmapper.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qvcandlestickmodelmapper.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVCandlestickModelMapper_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVCandlestickModelMapper_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QVCandlestickModelMapper_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVCandlestickModelMapper_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVCandlestickModelMapper_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QVCandlestickModelMapper_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, timestamp: i32 ```
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: i32) void {
        qtc.QVCandlestickModelMapper_SetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, timestamp: i32 ```
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: i32) void {
        qtc.QVCandlestickModelMapper_QBaseSetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, timestamp: i32) callconv(.c) void ```
    pub fn OnSetTimestamp(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetTimestamp(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn Timestamp(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_Timestamp(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn QBaseTimestamp(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_QBaseTimestamp(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32 ```
    pub fn OnTimestamp(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnTimestamp(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, open: i32 ```
    pub fn SetOpen(self: ?*anyopaque, open: i32) void {
        qtc.QVCandlestickModelMapper_SetOpen(@ptrCast(self), @intCast(open));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, open: i32 ```
    pub fn QBaseSetOpen(self: ?*anyopaque, open: i32) void {
        qtc.QVCandlestickModelMapper_QBaseSetOpen(@ptrCast(self), @intCast(open));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, open: i32) callconv(.c) void ```
    pub fn OnSetOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn Open(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_Open(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn QBaseOpen(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_QBaseOpen(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32 ```
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, high: i32 ```
    pub fn SetHigh(self: ?*anyopaque, high: i32) void {
        qtc.QVCandlestickModelMapper_SetHigh(@ptrCast(self), @intCast(high));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, high: i32 ```
    pub fn QBaseSetHigh(self: ?*anyopaque, high: i32) void {
        qtc.QVCandlestickModelMapper_QBaseSetHigh(@ptrCast(self), @intCast(high));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, high: i32) callconv(.c) void ```
    pub fn OnSetHigh(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetHigh(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn High(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_High(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn QBaseHigh(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_QBaseHigh(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32 ```
    pub fn OnHigh(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnHigh(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, low: i32 ```
    pub fn SetLow(self: ?*anyopaque, low: i32) void {
        qtc.QVCandlestickModelMapper_SetLow(@ptrCast(self), @intCast(low));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, low: i32 ```
    pub fn QBaseSetLow(self: ?*anyopaque, low: i32) void {
        qtc.QVCandlestickModelMapper_QBaseSetLow(@ptrCast(self), @intCast(low));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, low: i32) callconv(.c) void ```
    pub fn OnSetLow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetLow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn Low(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_Low(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn QBaseLow(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_QBaseLow(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32 ```
    pub fn OnLow(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnLow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, close: i32 ```
    pub fn SetClose(self: ?*anyopaque, close: i32) void {
        qtc.QVCandlestickModelMapper_SetClose(@ptrCast(self), @intCast(close));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, close: i32 ```
    pub fn QBaseSetClose(self: ?*anyopaque, close: i32) void {
        qtc.QVCandlestickModelMapper_QBaseSetClose(@ptrCast(self), @intCast(close));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, close: i32) callconv(.c) void ```
    pub fn OnSetClose(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn Close(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_Close(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn QBaseClose(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_QBaseClose(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32 ```
    pub fn OnClose(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, firstSetSection: i32 ```
    pub fn SetFirstSetSection(self: ?*anyopaque, firstSetSection: i32) void {
        qtc.QVCandlestickModelMapper_SetFirstSetSection(@ptrCast(self), @intCast(firstSetSection));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, firstSetSection: i32 ```
    pub fn QBaseSetFirstSetSection(self: ?*anyopaque, firstSetSection: i32) void {
        qtc.QVCandlestickModelMapper_QBaseSetFirstSetSection(@ptrCast(self), @intCast(firstSetSection));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, firstSetSection: i32) callconv(.c) void ```
    pub fn OnSetFirstSetSection(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetFirstSetSection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn FirstSetSection(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_FirstSetSection(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn QBaseFirstSetSection(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_QBaseFirstSetSection(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32 ```
    pub fn OnFirstSetSection(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnFirstSetSection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, lastSetSection: i32 ```
    pub fn SetLastSetSection(self: ?*anyopaque, lastSetSection: i32) void {
        qtc.QVCandlestickModelMapper_SetLastSetSection(@ptrCast(self), @intCast(lastSetSection));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, lastSetSection: i32 ```
    pub fn QBaseSetLastSetSection(self: ?*anyopaque, lastSetSection: i32) void {
        qtc.QVCandlestickModelMapper_QBaseSetLastSetSection(@ptrCast(self), @intCast(lastSetSection));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, lastSetSection: i32) callconv(.c) void ```
    pub fn OnSetLastSetSection(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetLastSetSection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn LastSetSection(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_LastSetSection(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn QBaseLastSetSection(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_QBaseLastSetSection(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32 ```
    pub fn OnLastSetSection(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnLastSetSection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QVCandlestickModelMapper_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QVCandlestickModelMapper_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QVCandlestickModelMapper_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVCandlestickModelMapper_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVCandlestickModelMapper_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QVCandlestickModelMapper_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QVCandlestickModelMapper_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QVCandlestickModelMapper_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QVCandlestickModelMapper, callback: *const fn (self: QtC.QVCandlestickModelMapper, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#dtor.QVCandlestickModelMapper)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QVCandlestickModelMapper ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_Delete(@ptrCast(self));
    }
};
