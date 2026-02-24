const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html)
pub const qhboxplotmodelmapper = struct {
    /// New constructs a new QHBoxPlotModelMapper object.
    ///
    pub fn New() QtC.QHBoxPlotModelMapper {
        return qtc.QHBoxPlotModelMapper_new();
    }

    /// New2 constructs a new QHBoxPlotModelMapper object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QHBoxPlotModelMapper {
        return qtc.QHBoxPlotModelMapper_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QHBoxPlotModelMapper_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QHBoxPlotModelMapper_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QHBoxPlotModelMapper_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHBoxPlotModelMapper_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHBoxPlotModelMapper_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QHBoxPlotModelMapper_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxplotmodelmapper.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn Model(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QHBoxPlotModelMapper_Model(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` model: QtC.QAbstractItemModel `
    ///
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn Series(self: ?*anyopaque) QtC.QBoxPlotSeries {
        return qtc.QHBoxPlotModelMapper_Series(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` series: QtC.QBoxPlotSeries `
    ///
    pub fn SetSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_SetSeries(@ptrCast(self), @ptrCast(series));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstBoxSetRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn FirstBoxSetRow(self: ?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_FirstBoxSetRow(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setFirstBoxSetRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` firstBoxSetRow: i32 `
    ///
    pub fn SetFirstBoxSetRow(self: ?*anyopaque, firstBoxSetRow: i32) void {
        qtc.QHBoxPlotModelMapper_SetFirstBoxSetRow(@ptrCast(self), @bitCast(firstBoxSetRow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#lastBoxSetRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn LastBoxSetRow(self: ?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_LastBoxSetRow(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setLastBoxSetRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` lastBoxSetRow: i32 `
    ///
    pub fn SetLastBoxSetRow(self: ?*anyopaque, lastBoxSetRow: i32) void {
        qtc.QHBoxPlotModelMapper_SetLastBoxSetRow(@ptrCast(self), @bitCast(lastBoxSetRow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn FirstColumn(self: ?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_FirstColumn(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setFirstColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` firstColumn: i32 `
    ///
    pub fn SetFirstColumn(self: ?*anyopaque, firstColumn: i32) void {
        qtc.QHBoxPlotModelMapper_SetFirstColumn(@ptrCast(self), @bitCast(firstColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn ColumnCount(self: ?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_ColumnCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setColumnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` rowCount: i32 `
    ///
    pub fn SetColumnCount(self: ?*anyopaque, rowCount: i32) void {
        qtc.QHBoxPlotModelMapper_SetColumnCount(@ptrCast(self), @bitCast(rowCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn SeriesReplaced(self: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_SeriesReplaced(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnSeriesReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_Connect_SeriesReplaced(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn ModelReplaced(self: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_ModelReplaced(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnModelReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_Connect_ModelReplaced(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstBoxSetRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn FirstBoxSetRowChanged(self: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_FirstBoxSetRowChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstBoxSetRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnFirstBoxSetRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_Connect_FirstBoxSetRowChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#lastBoxSetRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn LastBoxSetRowChanged(self: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_LastBoxSetRowChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#lastBoxSetRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnLastBoxSetRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_Connect_LastBoxSetRowChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn FirstColumnChanged(self: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_FirstColumnChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnFirstColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_Connect_FirstColumnChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#columnCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn ColumnCountChanged(self: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_ColumnCountChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#columnCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnColumnCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_Connect_ColumnCountChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxplotmodelmapper.Tr2: Memory allocation failed");
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
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxplotmodelmapper.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxplotmodelmapper.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qhboxplotmodelmapper.Children: Memory allocation failed");
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
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
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
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
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
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qhboxplotmodelmapper.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qhboxplotmodelmapper.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
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
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
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
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
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
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHBoxPlotModelMapper_Event(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHBoxPlotModelMapper_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHBoxPlotModelMapper_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHBoxPlotModelMapper_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHBoxPlotModelMapper_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHBoxPlotModelMapper_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn First(self: ?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_First(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperFirst` instead
    ///
    pub const QBaseFirst = SuperFirst;

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn SuperFirst(self: ?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_SuperFirst(@ptrCast(self));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnFirst(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxPlotModelMapper_OnFirst(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` first: i32 `
    ///
    pub fn SetFirst(self: ?*anyopaque, first: i32) void {
        qtc.QHBoxPlotModelMapper_SetFirst(@ptrCast(self), @bitCast(first));
    }

    /// ### DEPRECATED: Use `SuperSetFirst` instead
    ///
    pub const QBaseSetFirst = SuperSetFirst;

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` first: i32 `
    ///
    pub fn SuperSetFirst(self: ?*anyopaque, first: i32) void {
        qtc.QHBoxPlotModelMapper_SuperSetFirst(@ptrCast(self), @bitCast(first));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper, first: i32) callconv(.c) void `
    ///
    pub fn OnSetFirst(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnSetFirst(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_Count(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperCount` instead
    ///
    pub const QBaseCount = SuperCount;

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn SuperCount(self: ?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_SuperCount(@ptrCast(self));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxPlotModelMapper_OnCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` count: i32 `
    ///
    pub fn SetCount(self: ?*anyopaque, count: i32) void {
        qtc.QHBoxPlotModelMapper_SetCount(@ptrCast(self), @bitCast(count));
    }

    /// ### DEPRECATED: Use `SuperSetCount` instead
    ///
    pub const QBaseSetCount = SuperSetCount;

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` count: i32 `
    ///
    pub fn SuperSetCount(self: ?*anyopaque, count: i32) void {
        qtc.QHBoxPlotModelMapper_SuperSetCount(@ptrCast(self), @bitCast(count));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper, count: i32) callconv(.c) void `
    ///
    pub fn OnSetCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnSetCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn FirstBoxSetSection(self: ?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_FirstBoxSetSection(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperFirstBoxSetSection` instead
    ///
    pub const QBaseFirstBoxSetSection = SuperFirstBoxSetSection;

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn SuperFirstBoxSetSection(self: ?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_SuperFirstBoxSetSection(@ptrCast(self));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnFirstBoxSetSection(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxPlotModelMapper_OnFirstBoxSetSection(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` firstBoxSetSection: i32 `
    ///
    pub fn SetFirstBoxSetSection(self: ?*anyopaque, firstBoxSetSection: i32) void {
        qtc.QHBoxPlotModelMapper_SetFirstBoxSetSection(@ptrCast(self), @bitCast(firstBoxSetSection));
    }

    /// ### DEPRECATED: Use `SuperSetFirstBoxSetSection` instead
    ///
    pub const QBaseSetFirstBoxSetSection = SuperSetFirstBoxSetSection;

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` firstBoxSetSection: i32 `
    ///
    pub fn SuperSetFirstBoxSetSection(self: ?*anyopaque, firstBoxSetSection: i32) void {
        qtc.QHBoxPlotModelMapper_SuperSetFirstBoxSetSection(@ptrCast(self), @bitCast(firstBoxSetSection));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper, firstBoxSetSection: i32) callconv(.c) void `
    ///
    pub fn OnSetFirstBoxSetSection(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnSetFirstBoxSetSection(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn LastBoxSetSection(self: ?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_LastBoxSetSection(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperLastBoxSetSection` instead
    ///
    pub const QBaseLastBoxSetSection = SuperLastBoxSetSection;

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn SuperLastBoxSetSection(self: ?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_SuperLastBoxSetSection(@ptrCast(self));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLastBoxSetSection(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxPlotModelMapper_OnLastBoxSetSection(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` lastBoxSetSection: i32 `
    ///
    pub fn SetLastBoxSetSection(self: ?*anyopaque, lastBoxSetSection: i32) void {
        qtc.QHBoxPlotModelMapper_SetLastBoxSetSection(@ptrCast(self), @bitCast(lastBoxSetSection));
    }

    /// ### DEPRECATED: Use `SuperSetLastBoxSetSection` instead
    ///
    pub const QBaseSetLastBoxSetSection = SuperSetLastBoxSetSection;

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` lastBoxSetSection: i32 `
    ///
    pub fn SuperSetLastBoxSetSection(self: ?*anyopaque, lastBoxSetSection: i32) void {
        qtc.QHBoxPlotModelMapper_SuperSetLastBoxSetSection(@ptrCast(self), @bitCast(lastBoxSetSection));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper, lastBoxSetSection: i32) callconv(.c) void `
    ///
    pub fn OnSetLastBoxSetSection(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnSetLastBoxSetSection(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn Orientation(self: ?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_Orientation(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperOrientation` instead
    ///
    pub const QBaseOrientation = SuperOrientation;

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn SuperOrientation(self: ?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_SuperOrientation(@ptrCast(self));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnOrientation(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxPlotModelMapper_OnOrientation(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QHBoxPlotModelMapper_SetOrientation(@ptrCast(self), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `SuperSetOrientation` instead
    ///
    pub const QBaseSetOrientation = SuperSetOrientation;

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SuperSetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QHBoxPlotModelMapper_SuperSetOrientation(@ptrCast(self), @bitCast(orientation));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper, orientation: qnamespace_enums.Orientation) callconv(.c) void `
    ///
    pub fn OnSetOrientation(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnSetOrientation(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QHBoxPlotModelMapper_Sender(@ptrCast(self));
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
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QHBoxPlotModelMapper_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QHBoxPlotModelMapper_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxPlotModelMapper_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHBoxPlotModelMapper_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHBoxPlotModelMapper_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QHBoxPlotModelMapper_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QHBoxPlotModelMapper_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QHBoxPlotModelMapper_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHBoxPlotModelMapper_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QHBoxPlotModelMapper, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#dtor.QHBoxPlotModelMapper)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QHBoxPlotModelMapper `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_Delete(@ptrCast(self));
    }
};
