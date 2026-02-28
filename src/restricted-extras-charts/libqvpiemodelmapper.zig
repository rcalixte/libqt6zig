const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html)
pub const qvpiemodelmapper = struct {
    /// New constructs a new QVPieModelMapper object.
    ///
    pub fn New() QtC.QVPieModelMapper {
        return qtc.QVPieModelMapper_new();
    }

    /// New2 constructs a new QVPieModelMapper object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QVPieModelMapper {
        return qtc.QVPieModelMapper_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QVPieModelMapper_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QVPieModelMapper_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QVPieModelMapper_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVPieModelMapper_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QVPieModelMapper_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVPieModelMapper_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVPieModelMapper_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QVPieModelMapper_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVPieModelMapper_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvpiemodelmapper.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn Model(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QVPieModelMapper_Model(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` model: QtC.QAbstractItemModel `
    ///
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QVPieModelMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn Series(self: ?*anyopaque) QtC.QPieSeries {
        return qtc.QVPieModelMapper_Series(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#setSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` series: QtC.QPieSeries `
    ///
    pub fn SetSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QVPieModelMapper_SetSeries(@ptrCast(self), @ptrCast(series));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#valuesColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn ValuesColumn(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_ValuesColumn(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#setValuesColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` valuesColumn: i32 `
    ///
    pub fn SetValuesColumn(self: ?*anyopaque, valuesColumn: i32) void {
        qtc.QVPieModelMapper_SetValuesColumn(@ptrCast(self), @bitCast(valuesColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#labelsColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn LabelsColumn(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_LabelsColumn(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#setLabelsColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` labelsColumn: i32 `
    ///
    pub fn SetLabelsColumn(self: ?*anyopaque, labelsColumn: i32) void {
        qtc.QVPieModelMapper_SetLabelsColumn(@ptrCast(self), @bitCast(labelsColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#firstRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn FirstRow(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_FirstRow(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#setFirstRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` firstRow: i32 `
    ///
    pub fn SetFirstRow(self: ?*anyopaque, firstRow: i32) void {
        qtc.QVPieModelMapper_SetFirstRow(@ptrCast(self), @bitCast(firstRow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn RowCount(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_RowCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#setRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` rowCount: i32 `
    ///
    pub fn SetRowCount(self: ?*anyopaque, rowCount: i32) void {
        qtc.QVPieModelMapper_SetRowCount(@ptrCast(self), @bitCast(rowCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn SeriesReplaced(self: ?*anyopaque) void {
        qtc.QVPieModelMapper_SeriesReplaced(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper) callconv(.c) void `
    ///
    pub fn OnSeriesReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_Connect_SeriesReplaced(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn ModelReplaced(self: ?*anyopaque) void {
        qtc.QVPieModelMapper_ModelReplaced(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper) callconv(.c) void `
    ///
    pub fn OnModelReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_Connect_ModelReplaced(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#valuesColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn ValuesColumnChanged(self: ?*anyopaque) void {
        qtc.QVPieModelMapper_ValuesColumnChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#valuesColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper) callconv(.c) void `
    ///
    pub fn OnValuesColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_Connect_ValuesColumnChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#labelsColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn LabelsColumnChanged(self: ?*anyopaque) void {
        qtc.QVPieModelMapper_LabelsColumnChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#labelsColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper) callconv(.c) void `
    ///
    pub fn OnLabelsColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_Connect_LabelsColumnChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#firstRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn FirstRowChanged(self: ?*anyopaque) void {
        qtc.QVPieModelMapper_FirstRowChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#firstRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper) callconv(.c) void `
    ///
    pub fn OnFirstRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_Connect_FirstRowChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#rowCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn RowCountChanged(self: ?*anyopaque) void {
        qtc.QVPieModelMapper_RowCountChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#rowCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper) callconv(.c) void `
    ///
    pub fn OnRowCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_Connect_RowCountChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvpiemodelmapper.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvpiemodelmapper.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvpiemodelmapper.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qvpiemodelmapper.Children: Memory allocation failed");
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qvpiemodelmapper.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qvpiemodelmapper.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper) callconv(.c) void `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
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
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper, param1: QtC.QObject) callconv(.c) void `
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
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVPieModelMapper_Event(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVPieModelMapper_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QVPieModelMapper_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVPieModelMapper_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVPieModelMapper_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QVPieModelMapper_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVPieModelMapper_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVPieModelMapper_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVPieModelMapper_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVPieModelMapper_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVPieModelMapper_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVPieModelMapper_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVPieModelMapper_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVPieModelMapper_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVPieModelMapper_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVPieModelMapper_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#first)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn First(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_First(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperFirst` instead
    ///
    pub const QBaseFirst = SuperFirst;

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#first)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn SuperFirst(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_SuperFirst(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#first)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnFirst(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QVPieModelMapper_OnFirst(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setFirst)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` first: i32 `
    ///
    pub fn SetFirst(self: ?*anyopaque, first: i32) void {
        qtc.QVPieModelMapper_SetFirst(@ptrCast(self), @bitCast(first));
    }

    /// ### DEPRECATED: Use `SuperSetFirst` instead
    ///
    pub const QBaseSetFirst = SuperSetFirst;

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setFirst)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` first: i32 `
    ///
    pub fn SuperSetFirst(self: ?*anyopaque, first: i32) void {
        qtc.QVPieModelMapper_SuperSetFirst(@ptrCast(self), @bitCast(first));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setFirst)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper, first: i32) callconv(.c) void `
    ///
    pub fn OnSetFirst(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnSetFirst(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#count)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_Count(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperCount` instead
    ///
    pub const QBaseCount = SuperCount;

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#count)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn SuperCount(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_SuperCount(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#count)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QVPieModelMapper_OnCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` count: i32 `
    ///
    pub fn SetCount(self: ?*anyopaque, count: i32) void {
        qtc.QVPieModelMapper_SetCount(@ptrCast(self), @bitCast(count));
    }

    /// ### DEPRECATED: Use `SuperSetCount` instead
    ///
    pub const QBaseSetCount = SuperSetCount;

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` count: i32 `
    ///
    pub fn SuperSetCount(self: ?*anyopaque, count: i32) void {
        qtc.QVPieModelMapper_SuperSetCount(@ptrCast(self), @bitCast(count));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper, count: i32) callconv(.c) void `
    ///
    pub fn OnSetCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnSetCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#valuesSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn ValuesSection(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_ValuesSection(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperValuesSection` instead
    ///
    pub const QBaseValuesSection = SuperValuesSection;

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#valuesSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn SuperValuesSection(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_SuperValuesSection(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#valuesSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnValuesSection(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QVPieModelMapper_OnValuesSection(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setValuesSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` valuesSection: i32 `
    ///
    pub fn SetValuesSection(self: ?*anyopaque, valuesSection: i32) void {
        qtc.QVPieModelMapper_SetValuesSection(@ptrCast(self), @bitCast(valuesSection));
    }

    /// ### DEPRECATED: Use `SuperSetValuesSection` instead
    ///
    pub const QBaseSetValuesSection = SuperSetValuesSection;

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setValuesSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` valuesSection: i32 `
    ///
    pub fn SuperSetValuesSection(self: ?*anyopaque, valuesSection: i32) void {
        qtc.QVPieModelMapper_SuperSetValuesSection(@ptrCast(self), @bitCast(valuesSection));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setValuesSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper, valuesSection: i32) callconv(.c) void `
    ///
    pub fn OnSetValuesSection(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnSetValuesSection(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#labelsSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn LabelsSection(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_LabelsSection(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperLabelsSection` instead
    ///
    pub const QBaseLabelsSection = SuperLabelsSection;

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#labelsSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn SuperLabelsSection(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_SuperLabelsSection(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#labelsSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLabelsSection(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QVPieModelMapper_OnLabelsSection(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setLabelsSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` labelsSection: i32 `
    ///
    pub fn SetLabelsSection(self: ?*anyopaque, labelsSection: i32) void {
        qtc.QVPieModelMapper_SetLabelsSection(@ptrCast(self), @bitCast(labelsSection));
    }

    /// ### DEPRECATED: Use `SuperSetLabelsSection` instead
    ///
    pub const QBaseSetLabelsSection = SuperSetLabelsSection;

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setLabelsSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` labelsSection: i32 `
    ///
    pub fn SuperSetLabelsSection(self: ?*anyopaque, labelsSection: i32) void {
        qtc.QVPieModelMapper_SuperSetLabelsSection(@ptrCast(self), @bitCast(labelsSection));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setLabelsSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper, labelsSection: i32) callconv(.c) void `
    ///
    pub fn OnSetLabelsSection(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnSetLabelsSection(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#orientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn Orientation(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_Orientation(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperOrientation` instead
    ///
    pub const QBaseOrientation = SuperOrientation;

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#orientation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn SuperOrientation(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_SuperOrientation(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#orientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnOrientation(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QVPieModelMapper_OnOrientation(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QVPieModelMapper_SetOrientation(@ptrCast(self), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `SuperSetOrientation` instead
    ///
    pub const QBaseSetOrientation = SuperSetOrientation;

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SuperSetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QVPieModelMapper_SuperSetOrientation(@ptrCast(self), @bitCast(orientation));
    }

    /// Inherited from QPieModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper, orientation: qnamespace_enums.Orientation) callconv(.c) void `
    ///
    pub fn OnSetOrientation(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnSetOrientation(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QVPieModelMapper_Sender(@ptrCast(self));
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
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QVPieModelMapper_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QVPieModelMapper_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QVPieModelMapper_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVPieModelMapper_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVPieModelMapper_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QVPieModelMapper_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QVPieModelMapper_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QVPieModelMapper_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper`
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QVPieModelMapper_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    /// ` callback: *const fn (self: QtC.QVPieModelMapper, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#dtor.QVPieModelMapper)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QVPieModelMapper `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QVPieModelMapper_Delete(@ptrCast(self));
    }
};
