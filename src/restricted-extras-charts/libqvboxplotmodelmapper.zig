const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBoxPlotSeries = @import("libqt6").QBoxPlotSeries;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html)
pub const QVBoxPlotModelMapper = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVBoxPlotModelMapper,

    pub const _is_QVBoxPlotModelMapper = {};
    pub const _is_QBoxPlotModelMapper = {};
    pub const _is_QObject = {};

    /// New constructs a new QVBoxPlotModelMapper object.
    ///
    pub fn New() QVBoxPlotModelMapper {
        return .{ .ptr = qtc.QVBoxPlotModelMapper_new() };
    }

    /// New2 constructs a new QVBoxPlotModelMapper object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QVBoxPlotModelMapper {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QVBoxPlotModelMapper_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn MetaObject(self: QVBoxPlotModelMapper) QMetaObject {
        return .{ .ptr = qtc.QVBoxPlotModelMapper_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QVBoxPlotModelMapper, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QVBoxPlotModelMapper_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn SuperMetaObject(self: QVBoxPlotModelMapper) QMetaObject {
        return .{ .ptr = qtc.QVBoxPlotModelMapper_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QVBoxPlotModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVBoxPlotModelMapper_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QVBoxPlotModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVBoxPlotModelMapper_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QVBoxPlotModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QVBoxPlotModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxplotmodelmapper.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn Model(self: QVBoxPlotModelMapper) QAbstractItemModel {
        return .{ .ptr = qtc.QVBoxPlotModelMapper_Model(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SetModel(self: QVBoxPlotModelMapper, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.QVBoxPlotModelMapper_SetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn Series(self: QVBoxPlotModelMapper) QBoxPlotSeries {
        return .{ .ptr = qtc.QVBoxPlotModelMapper_Series(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` series: QBoxPlotSeries `
    ///
    pub fn SetSeries(self: QVBoxPlotModelMapper, series: anytype) void {
        comptime _ = @TypeOf(series)._is_QBoxPlotSeries;
        qtc.QVBoxPlotModelMapper_SetSeries(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstBoxSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn FirstBoxSetColumn(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_FirstBoxSetColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setFirstBoxSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` firstBoxSetColumn: i32 `
    ///
    pub fn SetFirstBoxSetColumn(self: QVBoxPlotModelMapper, firstBoxSetColumn: i32) void {
        qtc.QVBoxPlotModelMapper_SetFirstBoxSetColumn(@ptrCast(self.ptr), @bitCast(firstBoxSetColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#lastBoxSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn LastBoxSetColumn(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_LastBoxSetColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setLastBoxSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` lastBoxSetColumn: i32 `
    ///
    pub fn SetLastBoxSetColumn(self: QVBoxPlotModelMapper, lastBoxSetColumn: i32) void {
        qtc.QVBoxPlotModelMapper_SetLastBoxSetColumn(@ptrCast(self.ptr), @bitCast(lastBoxSetColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn FirstRow(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_FirstRow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setFirstRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` firstRow: i32 `
    ///
    pub fn SetFirstRow(self: QVBoxPlotModelMapper, firstRow: i32) void {
        qtc.QVBoxPlotModelMapper_SetFirstRow(@ptrCast(self.ptr), @bitCast(firstRow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn RowCount(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_RowCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` rowCount: i32 `
    ///
    pub fn SetRowCount(self: QVBoxPlotModelMapper, rowCount: i32) void {
        qtc.QVBoxPlotModelMapper_SetRowCount(@ptrCast(self.ptr), @bitCast(rowCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn SeriesReplaced(self: QVBoxPlotModelMapper) void {
        qtc.QVBoxPlotModelMapper_SeriesReplaced(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnSeriesReplaced(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_SeriesReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn ModelReplaced(self: QVBoxPlotModelMapper) void {
        qtc.QVBoxPlotModelMapper_ModelReplaced(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnModelReplaced(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_ModelReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstBoxSetColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn FirstBoxSetColumnChanged(self: QVBoxPlotModelMapper) void {
        qtc.QVBoxPlotModelMapper_FirstBoxSetColumnChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstBoxSetColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnFirstBoxSetColumnChanged(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_FirstBoxSetColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#lastBoxSetColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn LastBoxSetColumnChanged(self: QVBoxPlotModelMapper) void {
        qtc.QVBoxPlotModelMapper_LastBoxSetColumnChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#lastBoxSetColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnLastBoxSetColumnChanged(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_LastBoxSetColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn FirstRowChanged(self: QVBoxPlotModelMapper) void {
        qtc.QVBoxPlotModelMapper_FirstRowChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnFirstRowChanged(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_FirstRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#rowCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn RowCountChanged(self: QVBoxPlotModelMapper) void {
        qtc.QVBoxPlotModelMapper_RowCountChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#rowCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnRowCountChanged(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_RowCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxplotmodelmapper.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxplotmodelmapper.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QVBoxPlotModelMapper, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxplotmodelmapper.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QVBoxPlotModelMapper, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn IsWidgetType(self: QVBoxPlotModelMapper) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn IsWindowType(self: QVBoxPlotModelMapper) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn IsQuickItemType(self: QVBoxPlotModelMapper) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn SignalsBlocked(self: QVBoxPlotModelMapper) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QVBoxPlotModelMapper, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn Thread(self: QVBoxPlotModelMapper) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QVBoxPlotModelMapper, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QVBoxPlotModelMapper, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QVBoxPlotModelMapper, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QVBoxPlotModelMapper, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QVBoxPlotModelMapper, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QVBoxPlotModelMapper, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qvboxplotmodelmapper.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QVBoxPlotModelMapper, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QVBoxPlotModelMapper, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QVBoxPlotModelMapper, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QVBoxPlotModelMapper, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn Disconnect3(self: QVBoxPlotModelMapper) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QVBoxPlotModelMapper, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn DumpObjectTree(self: QVBoxPlotModelMapper) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn DumpObjectInfo(self: QVBoxPlotModelMapper) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QVBoxPlotModelMapper, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QVBoxPlotModelMapper, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QVBoxPlotModelMapper, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qvboxplotmodelmapper.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qvboxplotmodelmapper.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn BindingStorage(self: QVBoxPlotModelMapper) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn BindingStorage2(self: QVBoxPlotModelMapper) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn Destroyed(self: QVBoxPlotModelMapper) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn Parent(self: QVBoxPlotModelMapper) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QVBoxPlotModelMapper, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn DeleteLater(self: QVBoxPlotModelMapper) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QVBoxPlotModelMapper, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QVBoxPlotModelMapper, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QVBoxPlotModelMapper, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QVBoxPlotModelMapper, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QVBoxPlotModelMapper, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QVBoxPlotModelMapper, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QVBoxPlotModelMapper, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QVBoxPlotModelMapper, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QVBoxPlotModelMapper, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVBoxPlotModelMapper_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QVBoxPlotModelMapper, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVBoxPlotModelMapper_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, QEvent) callconv(.c) bool) void {
        qtc.QVBoxPlotModelMapper_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QVBoxPlotModelMapper, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVBoxPlotModelMapper_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QVBoxPlotModelMapper, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVBoxPlotModelMapper_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, QObject, QEvent) callconv(.c) bool) void {
        qtc.QVBoxPlotModelMapper_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QVBoxPlotModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QVBoxPlotModelMapper_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QVBoxPlotModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QVBoxPlotModelMapper_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, QTimerEvent) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QVBoxPlotModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QVBoxPlotModelMapper_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QVBoxPlotModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QVBoxPlotModelMapper_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, QChildEvent) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QVBoxPlotModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QVBoxPlotModelMapper_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QVBoxPlotModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QVBoxPlotModelMapper_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, QEvent) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QVBoxPlotModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBoxPlotModelMapper_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QVBoxPlotModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBoxPlotModelMapper_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QVBoxPlotModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBoxPlotModelMapper_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QVBoxPlotModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBoxPlotModelMapper_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn First(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_First(@ptrCast(self.ptr));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn SuperFirst(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_SuperFirst(@ptrCast(self.ptr));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnFirst(self: QVBoxPlotModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnFirst(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` first: i32 `
    ///
    pub fn SetFirst(self: QVBoxPlotModelMapper, first: i32) void {
        qtc.QVBoxPlotModelMapper_SetFirst(@ptrCast(self.ptr), @bitCast(first));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` first: i32 `
    ///
    pub fn SuperSetFirst(self: QVBoxPlotModelMapper, first: i32) void {
        qtc.QVBoxPlotModelMapper_SuperSetFirst(@ptrCast(self.ptr), @bitCast(first));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, first: i32) callconv(.c) void `
    ///
    pub fn OnSetFirst(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, i32) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnSetFirst(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn Count(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_Count(@ptrCast(self.ptr));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn SuperCount(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_SuperCount(@ptrCast(self.ptr));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: QVBoxPlotModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` count: i32 `
    ///
    pub fn SetCount(self: QVBoxPlotModelMapper, count: i32) void {
        qtc.QVBoxPlotModelMapper_SetCount(@ptrCast(self.ptr), @bitCast(count));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` count: i32 `
    ///
    pub fn SuperSetCount(self: QVBoxPlotModelMapper, count: i32) void {
        qtc.QVBoxPlotModelMapper_SuperSetCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, count: i32) callconv(.c) void `
    ///
    pub fn OnSetCount(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, i32) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnSetCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn FirstBoxSetSection(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_FirstBoxSetSection(@ptrCast(self.ptr));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn SuperFirstBoxSetSection(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_SuperFirstBoxSetSection(@ptrCast(self.ptr));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnFirstBoxSetSection(self: QVBoxPlotModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnFirstBoxSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` firstBoxSetSection: i32 `
    ///
    pub fn SetFirstBoxSetSection(self: QVBoxPlotModelMapper, firstBoxSetSection: i32) void {
        qtc.QVBoxPlotModelMapper_SetFirstBoxSetSection(@ptrCast(self.ptr), @bitCast(firstBoxSetSection));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` firstBoxSetSection: i32 `
    ///
    pub fn SuperSetFirstBoxSetSection(self: QVBoxPlotModelMapper, firstBoxSetSection: i32) void {
        qtc.QVBoxPlotModelMapper_SuperSetFirstBoxSetSection(@ptrCast(self.ptr), @bitCast(firstBoxSetSection));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, firstBoxSetSection: i32) callconv(.c) void `
    ///
    pub fn OnSetFirstBoxSetSection(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, i32) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnSetFirstBoxSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn LastBoxSetSection(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_LastBoxSetSection(@ptrCast(self.ptr));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn SuperLastBoxSetSection(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_SuperLastBoxSetSection(@ptrCast(self.ptr));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLastBoxSetSection(self: QVBoxPlotModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnLastBoxSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` lastBoxSetSection: i32 `
    ///
    pub fn SetLastBoxSetSection(self: QVBoxPlotModelMapper, lastBoxSetSection: i32) void {
        qtc.QVBoxPlotModelMapper_SetLastBoxSetSection(@ptrCast(self.ptr), @bitCast(lastBoxSetSection));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` lastBoxSetSection: i32 `
    ///
    pub fn SuperSetLastBoxSetSection(self: QVBoxPlotModelMapper, lastBoxSetSection: i32) void {
        qtc.QVBoxPlotModelMapper_SuperSetLastBoxSetSection(@ptrCast(self.ptr), @bitCast(lastBoxSetSection));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, lastBoxSetSection: i32) callconv(.c) void `
    ///
    pub fn OnSetLastBoxSetSection(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, i32) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnSetLastBoxSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn Orientation(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_Orientation(@ptrCast(self.ptr));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn SuperOrientation(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_SuperOrientation(@ptrCast(self.ptr));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnOrientation(self: QVBoxPlotModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SetOrientation(self: QVBoxPlotModelMapper, orientation: i32) void {
        qtc.QVBoxPlotModelMapper_SetOrientation(@ptrCast(self.ptr), @bitCast(orientation));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SuperSetOrientation(self: QVBoxPlotModelMapper, orientation: i32) void {
        qtc.QVBoxPlotModelMapper_SuperSetOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, orientation: qnamespace_enums.Orientation) callconv(.c) void `
    ///
    pub fn OnSetOrientation(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, i32) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnSetOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn Sender(self: QVBoxPlotModelMapper) QObject {
        return .{ .ptr = qtc.QVBoxPlotModelMapper_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn SuperSender(self: QVBoxPlotModelMapper) QObject {
        return .{ .ptr = qtc.QVBoxPlotModelMapper_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QVBoxPlotModelMapper, callback: *const fn () callconv(.c) QObject) void {
        qtc.QVBoxPlotModelMapper_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn SenderSignalIndex(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn SuperSenderSignalIndex(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QVBoxPlotModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QVBoxPlotModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVBoxPlotModelMapper_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QVBoxPlotModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVBoxPlotModelMapper_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, [*:0]const u8) callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QVBoxPlotModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVBoxPlotModelMapper_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QVBoxPlotModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVBoxPlotModelMapper_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, QMetaMethod) callconv(.c) bool) void {
        qtc.QVBoxPlotModelMapper_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#dtor.QVBoxPlotModelMapper)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn Delete(self: QVBoxPlotModelMapper) void {
        qtc.QVBoxPlotModelMapper_Delete(@ptrCast(self.ptr));
    }
};
