const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QXYSeries = @import("libqt6").QXYSeries;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html)
pub const QVXYModelMapper = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVXYModelMapper,

    pub const _is_QVXYModelMapper = {};
    pub const _is_QXYModelMapper = {};
    pub const _is_QObject = {};

    /// New constructs a new QVXYModelMapper object.
    ///
    pub fn New() QVXYModelMapper {
        return .{ .ptr = qtc.QVXYModelMapper_new() };
    }

    /// New2 constructs a new QVXYModelMapper object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QVXYModelMapper {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QVXYModelMapper_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn MetaObject(self: QVXYModelMapper) QMetaObject {
        return .{ .ptr = qtc.QVXYModelMapper_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QVXYModelMapper, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QVXYModelMapper_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn SuperMetaObject(self: QVXYModelMapper) QMetaObject {
        return .{ .ptr = qtc.QVXYModelMapper_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QVXYModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVXYModelMapper_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QVXYModelMapper_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QVXYModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVXYModelMapper_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QVXYModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVXYModelMapper_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QVXYModelMapper_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QVXYModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVXYModelMapper_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvxymodelmapper.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn Model(self: QVXYModelMapper) QAbstractItemModel {
        return .{ .ptr = qtc.QVXYModelMapper_Model(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SetModel(self: QVXYModelMapper, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.QVXYModelMapper_SetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn Series(self: QVXYModelMapper) QXYSeries {
        return .{ .ptr = qtc.QVXYModelMapper_Series(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` series: QXYSeries `
    ///
    pub fn SetSeries(self: QVXYModelMapper, series: anytype) void {
        comptime _ = @TypeOf(series)._is_QXYSeries;
        qtc.QVXYModelMapper_SetSeries(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#xColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn XColumn(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_XColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setXColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` xColumn: i32 `
    ///
    pub fn SetXColumn(self: QVXYModelMapper, xColumn: i32) void {
        qtc.QVXYModelMapper_SetXColumn(@ptrCast(self.ptr), @bitCast(xColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#yColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn YColumn(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_YColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setYColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` yColumn: i32 `
    ///
    pub fn SetYColumn(self: QVXYModelMapper, yColumn: i32) void {
        qtc.QVXYModelMapper_SetYColumn(@ptrCast(self.ptr), @bitCast(yColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#firstRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn FirstRow(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_FirstRow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setFirstRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` firstRow: i32 `
    ///
    pub fn SetFirstRow(self: QVXYModelMapper, firstRow: i32) void {
        qtc.QVXYModelMapper_SetFirstRow(@ptrCast(self.ptr), @bitCast(firstRow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn RowCount(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_RowCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` rowCount: i32 `
    ///
    pub fn SetRowCount(self: QVXYModelMapper, rowCount: i32) void {
        qtc.QVXYModelMapper_SetRowCount(@ptrCast(self.ptr), @bitCast(rowCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn SeriesReplaced(self: QVXYModelMapper) void {
        qtc.QVXYModelMapper_SeriesReplaced(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper) callconv(.c) void `
    ///
    pub fn OnSeriesReplaced(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper) callconv(.c) void) void {
        qtc.QVXYModelMapper_Connect_SeriesReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn ModelReplaced(self: QVXYModelMapper) void {
        qtc.QVXYModelMapper_ModelReplaced(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper) callconv(.c) void `
    ///
    pub fn OnModelReplaced(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper) callconv(.c) void) void {
        qtc.QVXYModelMapper_Connect_ModelReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#xColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn XColumnChanged(self: QVXYModelMapper) void {
        qtc.QVXYModelMapper_XColumnChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#xColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper) callconv(.c) void `
    ///
    pub fn OnXColumnChanged(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper) callconv(.c) void) void {
        qtc.QVXYModelMapper_Connect_XColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#yColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn YColumnChanged(self: QVXYModelMapper) void {
        qtc.QVXYModelMapper_YColumnChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#yColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper) callconv(.c) void `
    ///
    pub fn OnYColumnChanged(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper) callconv(.c) void) void {
        qtc.QVXYModelMapper_Connect_YColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#firstRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn FirstRowChanged(self: QVXYModelMapper) void {
        qtc.QVXYModelMapper_FirstRowChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#firstRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper) callconv(.c) void `
    ///
    pub fn OnFirstRowChanged(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper) callconv(.c) void) void {
        qtc.QVXYModelMapper_Connect_FirstRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#rowCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn RowCountChanged(self: QVXYModelMapper) void {
        qtc.QVXYModelMapper_RowCountChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#rowCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper) callconv(.c) void `
    ///
    pub fn OnRowCountChanged(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper) callconv(.c) void) void {
        qtc.QVXYModelMapper_Connect_RowCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvxymodelmapper.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvxymodelmapper.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QVXYModelMapper, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvxymodelmapper.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QVXYModelMapper, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn IsWidgetType(self: QVXYModelMapper) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn IsWindowType(self: QVXYModelMapper) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn IsQuickItemType(self: QVXYModelMapper) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn SignalsBlocked(self: QVXYModelMapper) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QVXYModelMapper, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn Thread(self: QVXYModelMapper) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QVXYModelMapper, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QVXYModelMapper, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QVXYModelMapper, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QVXYModelMapper, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QVXYModelMapper, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QVXYModelMapper, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qvxymodelmapper.Children: Memory allocation failed");
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QVXYModelMapper, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QVXYModelMapper, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QVXYModelMapper, obj: anytype) void {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QVXYModelMapper, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn Disconnect3(self: QVXYModelMapper) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QVXYModelMapper, receiver: anytype) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn DumpObjectTree(self: QVXYModelMapper) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn DumpObjectInfo(self: QVXYModelMapper) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QVXYModelMapper, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QVXYModelMapper, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QVXYModelMapper, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qvxymodelmapper.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qvxymodelmapper.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn BindingStorage(self: QVXYModelMapper) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn BindingStorage2(self: QVXYModelMapper) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn Destroyed(self: QVXYModelMapper) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn Parent(self: QVXYModelMapper) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QVXYModelMapper, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn DeleteLater(self: QVXYModelMapper) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QVXYModelMapper, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QVXYModelMapper, time: i64, timerType: i32) i32 {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QVXYModelMapper, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QVXYModelMapper, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QVXYModelMapper, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QVXYModelMapper, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QVXYModelMapper, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QVXYModelMapper, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, QObject) callconv(.c) void) void {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QVXYModelMapper, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVXYModelMapper_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QVXYModelMapper, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVXYModelMapper_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, QEvent) callconv(.c) bool) void {
        qtc.QVXYModelMapper_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QVXYModelMapper, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVXYModelMapper_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QVXYModelMapper, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVXYModelMapper_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, QObject, QEvent) callconv(.c) bool) void {
        qtc.QVXYModelMapper_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QVXYModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QVXYModelMapper_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QVXYModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QVXYModelMapper_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, QTimerEvent) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QVXYModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QVXYModelMapper_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QVXYModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QVXYModelMapper_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, QChildEvent) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QVXYModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QVXYModelMapper_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QVXYModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QVXYModelMapper_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, QEvent) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QVXYModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVXYModelMapper_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QVXYModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVXYModelMapper_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QVXYModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVXYModelMapper_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QVXYModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVXYModelMapper_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn First(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_First(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperFirst` instead
    ///
    pub const QBaseFirst = SuperFirst;

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn SuperFirst(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_SuperFirst(@ptrCast(self.ptr));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnFirst(self: QVXYModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVXYModelMapper_OnFirst(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` first: i32 `
    ///
    pub fn SetFirst(self: QVXYModelMapper, first: i32) void {
        qtc.QVXYModelMapper_SetFirst(@ptrCast(self.ptr), @bitCast(first));
    }

    /// ### DEPRECATED: Use `SuperSetFirst` instead
    ///
    pub const QBaseSetFirst = SuperSetFirst;

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` first: i32 `
    ///
    pub fn SuperSetFirst(self: QVXYModelMapper, first: i32) void {
        qtc.QVXYModelMapper_SuperSetFirst(@ptrCast(self.ptr), @bitCast(first));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, first: i32) callconv(.c) void `
    ///
    pub fn OnSetFirst(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, i32) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnSetFirst(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn Count(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperCount` instead
    ///
    pub const QBaseCount = SuperCount;

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn SuperCount(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_SuperCount(@ptrCast(self.ptr));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: QVXYModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVXYModelMapper_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` count: i32 `
    ///
    pub fn SetCount(self: QVXYModelMapper, count: i32) void {
        qtc.QVXYModelMapper_SetCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `SuperSetCount` instead
    ///
    pub const QBaseSetCount = SuperSetCount;

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` count: i32 `
    ///
    pub fn SuperSetCount(self: QVXYModelMapper, count: i32) void {
        qtc.QVXYModelMapper_SuperSetCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, count: i32) callconv(.c) void `
    ///
    pub fn OnSetCount(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, i32) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnSetCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn Orientation(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperOrientation` instead
    ///
    pub const QBaseOrientation = SuperOrientation;

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn SuperOrientation(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_SuperOrientation(@ptrCast(self.ptr));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnOrientation(self: QVXYModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVXYModelMapper_OnOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SetOrientation(self: QVXYModelMapper, orientation: i32) void {
        qtc.QVXYModelMapper_SetOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `SuperSetOrientation` instead
    ///
    pub const QBaseSetOrientation = SuperSetOrientation;

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SuperSetOrientation(self: QVXYModelMapper, orientation: i32) void {
        qtc.QVXYModelMapper_SuperSetOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, orientation: qnamespace_enums.Orientation) callconv(.c) void `
    ///
    pub fn OnSetOrientation(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, i32) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnSetOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn XSection(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_XSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperXSection` instead
    ///
    pub const QBaseXSection = SuperXSection;

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn SuperXSection(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_SuperXSection(@ptrCast(self.ptr));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnXSection(self: QVXYModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVXYModelMapper_OnXSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` xSection: i32 `
    ///
    pub fn SetXSection(self: QVXYModelMapper, xSection: i32) void {
        qtc.QVXYModelMapper_SetXSection(@ptrCast(self.ptr), @bitCast(xSection));
    }

    /// ### DEPRECATED: Use `SuperSetXSection` instead
    ///
    pub const QBaseSetXSection = SuperSetXSection;

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` xSection: i32 `
    ///
    pub fn SuperSetXSection(self: QVXYModelMapper, xSection: i32) void {
        qtc.QVXYModelMapper_SuperSetXSection(@ptrCast(self.ptr), @bitCast(xSection));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, xSection: i32) callconv(.c) void `
    ///
    pub fn OnSetXSection(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, i32) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnSetXSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn YSection(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_YSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperYSection` instead
    ///
    pub const QBaseYSection = SuperYSection;

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn SuperYSection(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_SuperYSection(@ptrCast(self.ptr));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnYSection(self: QVXYModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVXYModelMapper_OnYSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` ySection: i32 `
    ///
    pub fn SetYSection(self: QVXYModelMapper, ySection: i32) void {
        qtc.QVXYModelMapper_SetYSection(@ptrCast(self.ptr), @bitCast(ySection));
    }

    /// ### DEPRECATED: Use `SuperSetYSection` instead
    ///
    pub const QBaseSetYSection = SuperSetYSection;

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` ySection: i32 `
    ///
    pub fn SuperSetYSection(self: QVXYModelMapper, ySection: i32) void {
        qtc.QVXYModelMapper_SuperSetYSection(@ptrCast(self.ptr), @bitCast(ySection));
    }

    /// Inherited from QXYModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, ySection: i32) callconv(.c) void `
    ///
    pub fn OnSetYSection(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, i32) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnSetYSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn Sender(self: QVXYModelMapper) QObject {
        return .{ .ptr = qtc.QVXYModelMapper_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn SuperSender(self: QVXYModelMapper) QObject {
        return .{ .ptr = qtc.QVXYModelMapper_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QVXYModelMapper, callback: *const fn () callconv(.c) QObject) void {
        qtc.QVXYModelMapper_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn SenderSignalIndex(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn SuperSenderSignalIndex(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QVXYModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVXYModelMapper_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QVXYModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVXYModelMapper_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QVXYModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVXYModelMapper_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, [*:0]const u8) callconv(.c) i32) void {
        qtc.QVXYModelMapper_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QVXYModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVXYModelMapper_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QVXYModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVXYModelMapper_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, QMetaMethod) callconv(.c) bool) void {
        qtc.QVXYModelMapper_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#dtor.QVXYModelMapper)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn Delete(self: QVXYModelMapper) void {
        qtc.QVXYModelMapper_Delete(@ptrCast(self.ptr));
    }
};
