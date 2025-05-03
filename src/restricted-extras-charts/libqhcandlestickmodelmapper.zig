const C = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html
pub const qhcandlestickmodelmapper = struct {
    /// New constructs a new QHCandlestickModelMapper object.
    ///
    ///
    pub fn New() ?*C.QHCandlestickModelMapper {
        return C.QHCandlestickModelMapper_new();
    }

    /// New2 constructs a new QHCandlestickModelMapper object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QHCandlestickModelMapper {
        return C.QHCandlestickModelMapper_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QHCandlestickModelMapper_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QHCandlestickModelMapper, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QHCandlestickModelMapper_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QHCandlestickModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QHCandlestickModelMapper_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QHCandlestickModelMapper_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#orientation)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn Orientation(self: ?*anyopaque) i64 {
        return C.QHCandlestickModelMapper_Orientation(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn () callconv(.c) i64 ```
    pub fn OnOrientation(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QHCandlestickModelMapper_OnOrientation(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn QBaseOrientation(self: ?*anyopaque) i64 {
        return C.QHCandlestickModelMapper_QBaseOrientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#setTimestampColumn)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, timestampColumn: i32 ```
    pub fn SetTimestampColumn(self: ?*anyopaque, timestampColumn: i32) void {
        C.QHCandlestickModelMapper_SetTimestampColumn(@ptrCast(self), @intCast(timestampColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#timestampColumn)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn TimestampColumn(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_TimestampColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#setOpenColumn)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, openColumn: i32 ```
    pub fn SetOpenColumn(self: ?*anyopaque, openColumn: i32) void {
        C.QHCandlestickModelMapper_SetOpenColumn(@ptrCast(self), @intCast(openColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#openColumn)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn OpenColumn(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_OpenColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#setHighColumn)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, highColumn: i32 ```
    pub fn SetHighColumn(self: ?*anyopaque, highColumn: i32) void {
        C.QHCandlestickModelMapper_SetHighColumn(@ptrCast(self), @intCast(highColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#highColumn)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn HighColumn(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_HighColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#setLowColumn)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, lowColumn: i32 ```
    pub fn SetLowColumn(self: ?*anyopaque, lowColumn: i32) void {
        C.QHCandlestickModelMapper_SetLowColumn(@ptrCast(self), @intCast(lowColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#lowColumn)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn LowColumn(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_LowColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#setCloseColumn)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, closeColumn: i32 ```
    pub fn SetCloseColumn(self: ?*anyopaque, closeColumn: i32) void {
        C.QHCandlestickModelMapper_SetCloseColumn(@ptrCast(self), @intCast(closeColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#closeColumn)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn CloseColumn(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_CloseColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#setFirstSetRow)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, firstSetRow: i32 ```
    pub fn SetFirstSetRow(self: ?*anyopaque, firstSetRow: i32) void {
        C.QHCandlestickModelMapper_SetFirstSetRow(@ptrCast(self), @intCast(firstSetRow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#firstSetRow)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn FirstSetRow(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_FirstSetRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#setLastSetRow)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, lastSetRow: i32 ```
    pub fn SetLastSetRow(self: ?*anyopaque, lastSetRow: i32) void {
        C.QHCandlestickModelMapper_SetLastSetRow(@ptrCast(self), @intCast(lastSetRow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#lastSetRow)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn LastSetRow(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_LastSetRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#timestampColumnChanged)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn TimestampColumnChanged(self: ?*anyopaque) void {
        C.QHCandlestickModelMapper_TimestampColumnChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper) callconv(.c) void ```
    pub fn OnTimestampColumnChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QHCandlestickModelMapper_Connect_TimestampColumnChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#openColumnChanged)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn OpenColumnChanged(self: ?*anyopaque) void {
        C.QHCandlestickModelMapper_OpenColumnChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper) callconv(.c) void ```
    pub fn OnOpenColumnChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QHCandlestickModelMapper_Connect_OpenColumnChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#highColumnChanged)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn HighColumnChanged(self: ?*anyopaque) void {
        C.QHCandlestickModelMapper_HighColumnChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper) callconv(.c) void ```
    pub fn OnHighColumnChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QHCandlestickModelMapper_Connect_HighColumnChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#lowColumnChanged)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn LowColumnChanged(self: ?*anyopaque) void {
        C.QHCandlestickModelMapper_LowColumnChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper) callconv(.c) void ```
    pub fn OnLowColumnChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QHCandlestickModelMapper_Connect_LowColumnChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#closeColumnChanged)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn CloseColumnChanged(self: ?*anyopaque) void {
        C.QHCandlestickModelMapper_CloseColumnChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper) callconv(.c) void ```
    pub fn OnCloseColumnChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QHCandlestickModelMapper_Connect_CloseColumnChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#firstSetRowChanged)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn FirstSetRowChanged(self: ?*anyopaque) void {
        C.QHCandlestickModelMapper_FirstSetRowChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper) callconv(.c) void ```
    pub fn OnFirstSetRowChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QHCandlestickModelMapper_Connect_FirstSetRowChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#lastSetRowChanged)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn LastSetRowChanged(self: ?*anyopaque) void {
        C.QHCandlestickModelMapper_LastSetRowChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper) callconv(.c) void ```
    pub fn OnLastSetRowChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QHCandlestickModelMapper_Connect_LastSetRowChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QHCandlestickModelMapper_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QHCandlestickModelMapper_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setModel)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, model: ?*C.QAbstractItemModel ```
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        C.QCandlestickModelMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#model)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn Model(self: ?*anyopaque) ?*C.QAbstractItemModel {
        return C.QCandlestickModelMapper_Model(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setSeries)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, series: ?*C.QCandlestickSeries ```
    pub fn SetSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        C.QCandlestickModelMapper_SetSeries(@ptrCast(self), @ptrCast(series));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#series)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn Series(self: ?*anyopaque) ?*C.QCandlestickSeries {
        return C.QCandlestickModelMapper_Series(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn ModelReplaced(self: ?*anyopaque) void {
        C.QCandlestickModelMapper_ModelReplaced(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// ``` self: ?*C.QCandlestickModelMapper, slot: fn (?*C.QCandlestickModelMapper) callconv(.c) void ```
    pub fn OnModelReplaced(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCandlestickModelMapper_Connect_ModelReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn SeriesReplaced(self: ?*anyopaque) void {
        C.QCandlestickModelMapper_SeriesReplaced(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// ``` self: ?*C.QCandlestickModelMapper, slot: fn (?*C.QCandlestickModelMapper) callconv(.c) void ```
    pub fn OnSeriesReplaced(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCandlestickModelMapper_Connect_SeriesReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QHCandlestickModelMapper, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QHCandlestickModelMapper, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QHCandlestickModelMapper, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
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
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QHCandlestickModelMapper, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, param1: ?*C.QObject ```
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
    /// ``` self: ?*C.QHCandlestickModelMapper, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QHCandlestickModelMapper_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QHCandlestickModelMapper_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QHCandlestickModelMapper_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QHCandlestickModelMapper_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QHCandlestickModelMapper_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QHCandlestickModelMapper_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QHCandlestickModelMapper_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QHCandlestickModelMapper_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHCandlestickModelMapper_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QHCandlestickModelMapper_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QHCandlestickModelMapper_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHCandlestickModelMapper_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QHCandlestickModelMapper_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QHCandlestickModelMapper_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHCandlestickModelMapper_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QHCandlestickModelMapper_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QHCandlestickModelMapper_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHCandlestickModelMapper_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QHCandlestickModelMapper_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QHCandlestickModelMapper_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHCandlestickModelMapper_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, timestamp: i32 ```
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: i32) void {
        C.QHCandlestickModelMapper_SetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, timestamp: i32 ```
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: i32) void {
        C.QHCandlestickModelMapper_QBaseSetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper, i32) callconv(.c) void ```
    pub fn OnSetTimestamp(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QHCandlestickModelMapper_OnSetTimestamp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn Timestamp(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_Timestamp(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn QBaseTimestamp(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_QBaseTimestamp(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnTimestamp(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QHCandlestickModelMapper_OnTimestamp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, open: i32 ```
    pub fn SetOpen(self: ?*anyopaque, open: i32) void {
        C.QHCandlestickModelMapper_SetOpen(@ptrCast(self), @intCast(open));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, open: i32 ```
    pub fn QBaseSetOpen(self: ?*anyopaque, open: i32) void {
        C.QHCandlestickModelMapper_QBaseSetOpen(@ptrCast(self), @intCast(open));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper, i32) callconv(.c) void ```
    pub fn OnSetOpen(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QHCandlestickModelMapper_OnSetOpen(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn Open(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_Open(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn QBaseOpen(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_QBaseOpen(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnOpen(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QHCandlestickModelMapper_OnOpen(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, high: i32 ```
    pub fn SetHigh(self: ?*anyopaque, high: i32) void {
        C.QHCandlestickModelMapper_SetHigh(@ptrCast(self), @intCast(high));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, high: i32 ```
    pub fn QBaseSetHigh(self: ?*anyopaque, high: i32) void {
        C.QHCandlestickModelMapper_QBaseSetHigh(@ptrCast(self), @intCast(high));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper, i32) callconv(.c) void ```
    pub fn OnSetHigh(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QHCandlestickModelMapper_OnSetHigh(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn High(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_High(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn QBaseHigh(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_QBaseHigh(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnHigh(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QHCandlestickModelMapper_OnHigh(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, low: i32 ```
    pub fn SetLow(self: ?*anyopaque, low: i32) void {
        C.QHCandlestickModelMapper_SetLow(@ptrCast(self), @intCast(low));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, low: i32 ```
    pub fn QBaseSetLow(self: ?*anyopaque, low: i32) void {
        C.QHCandlestickModelMapper_QBaseSetLow(@ptrCast(self), @intCast(low));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper, i32) callconv(.c) void ```
    pub fn OnSetLow(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QHCandlestickModelMapper_OnSetLow(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn Low(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_Low(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn QBaseLow(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_QBaseLow(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnLow(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QHCandlestickModelMapper_OnLow(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, close: i32 ```
    pub fn SetClose(self: ?*anyopaque, close: i32) void {
        C.QHCandlestickModelMapper_SetClose(@ptrCast(self), @intCast(close));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, close: i32 ```
    pub fn QBaseSetClose(self: ?*anyopaque, close: i32) void {
        C.QHCandlestickModelMapper_QBaseSetClose(@ptrCast(self), @intCast(close));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper, i32) callconv(.c) void ```
    pub fn OnSetClose(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QHCandlestickModelMapper_OnSetClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn Close(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_Close(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn QBaseClose(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_QBaseClose(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnClose(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QHCandlestickModelMapper_OnClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, firstSetSection: i32 ```
    pub fn SetFirstSetSection(self: ?*anyopaque, firstSetSection: i32) void {
        C.QHCandlestickModelMapper_SetFirstSetSection(@ptrCast(self), @intCast(firstSetSection));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, firstSetSection: i32 ```
    pub fn QBaseSetFirstSetSection(self: ?*anyopaque, firstSetSection: i32) void {
        C.QHCandlestickModelMapper_QBaseSetFirstSetSection(@ptrCast(self), @intCast(firstSetSection));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper, i32) callconv(.c) void ```
    pub fn OnSetFirstSetSection(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QHCandlestickModelMapper_OnSetFirstSetSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn FirstSetSection(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_FirstSetSection(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn QBaseFirstSetSection(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_QBaseFirstSetSection(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnFirstSetSection(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QHCandlestickModelMapper_OnFirstSetSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, lastSetSection: i32 ```
    pub fn SetLastSetSection(self: ?*anyopaque, lastSetSection: i32) void {
        C.QHCandlestickModelMapper_SetLastSetSection(@ptrCast(self), @intCast(lastSetSection));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, lastSetSection: i32 ```
    pub fn QBaseSetLastSetSection(self: ?*anyopaque, lastSetSection: i32) void {
        C.QHCandlestickModelMapper_QBaseSetLastSetSection(@ptrCast(self), @intCast(lastSetSection));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper, i32) callconv(.c) void ```
    pub fn OnSetLastSetSection(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QHCandlestickModelMapper_OnSetLastSetSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn LastSetSection(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_LastSetSection(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn QBaseLastSetSection(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_QBaseLastSetSection(@ptrCast(self));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnLastSetSection(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QHCandlestickModelMapper_OnLastSetSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QHCandlestickModelMapper_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QHCandlestickModelMapper_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QHCandlestickModelMapper_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QHCandlestickModelMapper_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QHCandlestickModelMapper_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QHCandlestickModelMapper_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QHCandlestickModelMapper_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QHCandlestickModelMapper_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QHCandlestickModelMapper_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QHCandlestickModelMapper_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper, slot: fn (?*C.QHCandlestickModelMapper, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QHCandlestickModelMapper_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QHCandlestickModelMapper ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QHCandlestickModelMapper_Delete(@ptrCast(self));
    }
};
