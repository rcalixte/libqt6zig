const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractBarSeries = @import("libqt6").QAbstractBarSeries;
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
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html)
pub const QVBarModelMapper = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVBarModelMapper,

    pub const _is_QVBarModelMapper = {};
    pub const _is_QBarModelMapper = {};
    pub const _is_QObject = {};

    /// New constructs a new QVBarModelMapper object.
    ///
    pub fn New() QVBarModelMapper {
        return .{ .ptr = qtc.QVBarModelMapper_new() };
    }

    /// New2 constructs a new QVBarModelMapper object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QVBarModelMapper {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QVBarModelMapper_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn MetaObject(self: QVBarModelMapper) QMetaObject {
        return .{ .ptr = qtc.QVBarModelMapper_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QVBarModelMapper, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QVBarModelMapper_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVBarModelMapper `
    ///
    pub fn SuperMetaObject(self: QVBarModelMapper) QMetaObject {
        return .{ .ptr = qtc.QVBarModelMapper_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QVBarModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVBarModelMapper_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` callback: *const fn (self: QVBarModelMapper, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QVBarModelMapper_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QVBarModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVBarModelMapper_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QVBarModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVBarModelMapper_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` callback: *const fn (self: QVBarModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QVBarModelMapper_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QVBarModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVBarModelMapper_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvbarmodelmapper.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn Model(self: QVBarModelMapper) QAbstractItemModel {
        return .{ .ptr = qtc.QVBarModelMapper_Model(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SetModel(self: QVBarModelMapper, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.QVBarModelMapper_SetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn Series(self: QVBarModelMapper) QAbstractBarSeries {
        return .{ .ptr = qtc.QVBarModelMapper_Series(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#setSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` series: QAbstractBarSeries `
    ///
    pub fn SetSeries(self: QVBarModelMapper, series: anytype) void {
        comptime _ = @TypeOf(series)._is_QAbstractBarSeries;
        qtc.QVBarModelMapper_SetSeries(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#firstBarSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn FirstBarSetColumn(self: QVBarModelMapper) i32 {
        return qtc.QVBarModelMapper_FirstBarSetColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#setFirstBarSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` firstBarSetColumn: i32 `
    ///
    pub fn SetFirstBarSetColumn(self: QVBarModelMapper, firstBarSetColumn: i32) void {
        qtc.QVBarModelMapper_SetFirstBarSetColumn(@ptrCast(self.ptr), @bitCast(firstBarSetColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#lastBarSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn LastBarSetColumn(self: QVBarModelMapper) i32 {
        return qtc.QVBarModelMapper_LastBarSetColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#setLastBarSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` lastBarSetColumn: i32 `
    ///
    pub fn SetLastBarSetColumn(self: QVBarModelMapper, lastBarSetColumn: i32) void {
        qtc.QVBarModelMapper_SetLastBarSetColumn(@ptrCast(self.ptr), @bitCast(lastBarSetColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#firstRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn FirstRow(self: QVBarModelMapper) i32 {
        return qtc.QVBarModelMapper_FirstRow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#setFirstRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` firstRow: i32 `
    ///
    pub fn SetFirstRow(self: QVBarModelMapper, firstRow: i32) void {
        qtc.QVBarModelMapper_SetFirstRow(@ptrCast(self.ptr), @bitCast(firstRow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn RowCount(self: QVBarModelMapper) i32 {
        return qtc.QVBarModelMapper_RowCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#setRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` rowCount: i32 `
    ///
    pub fn SetRowCount(self: QVBarModelMapper, rowCount: i32) void {
        qtc.QVBarModelMapper_SetRowCount(@ptrCast(self.ptr), @bitCast(rowCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn SeriesReplaced(self: QVBarModelMapper) void {
        qtc.QVBarModelMapper_SeriesReplaced(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` callback: *const fn (self: QVBarModelMapper) callconv(.c) void `
    ///
    pub fn OnSeriesReplaced(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper) callconv(.c) void) void {
        qtc.QVBarModelMapper_Connect_SeriesReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn ModelReplaced(self: QVBarModelMapper) void {
        qtc.QVBarModelMapper_ModelReplaced(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` callback: *const fn (self: QVBarModelMapper) callconv(.c) void `
    ///
    pub fn OnModelReplaced(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper) callconv(.c) void) void {
        qtc.QVBarModelMapper_Connect_ModelReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#firstBarSetColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn FirstBarSetColumnChanged(self: QVBarModelMapper) void {
        qtc.QVBarModelMapper_FirstBarSetColumnChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#firstBarSetColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` callback: *const fn (self: QVBarModelMapper) callconv(.c) void `
    ///
    pub fn OnFirstBarSetColumnChanged(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper) callconv(.c) void) void {
        qtc.QVBarModelMapper_Connect_FirstBarSetColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#lastBarSetColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn LastBarSetColumnChanged(self: QVBarModelMapper) void {
        qtc.QVBarModelMapper_LastBarSetColumnChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#lastBarSetColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` callback: *const fn (self: QVBarModelMapper) callconv(.c) void `
    ///
    pub fn OnLastBarSetColumnChanged(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper) callconv(.c) void) void {
        qtc.QVBarModelMapper_Connect_LastBarSetColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#firstRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn FirstRowChanged(self: QVBarModelMapper) void {
        qtc.QVBarModelMapper_FirstRowChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#firstRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` callback: *const fn (self: QVBarModelMapper) callconv(.c) void `
    ///
    pub fn OnFirstRowChanged(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper) callconv(.c) void) void {
        qtc.QVBarModelMapper_Connect_FirstRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#rowCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn RowCountChanged(self: QVBarModelMapper) void {
        qtc.QVBarModelMapper_RowCountChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#rowCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` callback: *const fn (self: QVBarModelMapper) callconv(.c) void `
    ///
    pub fn OnRowCountChanged(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper) callconv(.c) void) void {
        qtc.QVBarModelMapper_Connect_RowCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvbarmodelmapper.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvbarmodelmapper.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QVBarModelMapper, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvbarmodelmapper.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QVBarModelMapper, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn IsWidgetType(self: QVBarModelMapper) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn IsWindowType(self: QVBarModelMapper) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn IsQuickItemType(self: QVBarModelMapper) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn SignalsBlocked(self: QVBarModelMapper) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QVBarModelMapper, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn Thread(self: QVBarModelMapper) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QVBarModelMapper, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QVBarModelMapper, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QVBarModelMapper, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QVBarModelMapper, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QVBarModelMapper, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QVBarModelMapper, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qvbarmodelmapper.Children: Memory allocation failed");
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
    /// ` self: QVBarModelMapper `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QVBarModelMapper, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QVBarModelMapper, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QVBarModelMapper, obj: anytype) void {
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
    /// ` self: QVBarModelMapper `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QVBarModelMapper, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QVBarModelMapper `
    ///
    pub fn Disconnect3(self: QVBarModelMapper) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QVBarModelMapper, receiver: anytype) bool {
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
    /// ` self: QVBarModelMapper `
    ///
    pub fn DumpObjectTree(self: QVBarModelMapper) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn DumpObjectInfo(self: QVBarModelMapper) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QVBarModelMapper, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QVBarModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QVBarModelMapper, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QVBarModelMapper, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qvbarmodelmapper.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qvbarmodelmapper.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QVBarModelMapper `
    ///
    pub fn BindingStorage(self: QVBarModelMapper) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn BindingStorage2(self: QVBarModelMapper) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn Destroyed(self: QVBarModelMapper) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` callback: *const fn (self: QVBarModelMapper) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn Parent(self: QVBarModelMapper) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QVBarModelMapper, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn DeleteLater(self: QVBarModelMapper) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QVBarModelMapper, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QVBarModelMapper, time: i64, timerType: i32) i32 {
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
    /// ` self: QVBarModelMapper `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QVBarModelMapper, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QVBarModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QVBarModelMapper, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QVBarModelMapper, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QVBarModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QVBarModelMapper, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVBarModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QVBarModelMapper, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVBarModelMapper `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QVBarModelMapper, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` callback: *const fn (self: QVBarModelMapper, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper, QObject) callconv(.c) void) void {
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
    /// ` self: QVBarModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QVBarModelMapper, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVBarModelMapper_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVBarModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QVBarModelMapper, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVBarModelMapper_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn (self: QVBarModelMapper, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper, QEvent) callconv(.c) bool) void {
        qtc.QVBarModelMapper_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QVBarModelMapper, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVBarModelMapper_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVBarModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QVBarModelMapper, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVBarModelMapper_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn (self: QVBarModelMapper, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper, QObject, QEvent) callconv(.c) bool) void {
        qtc.QVBarModelMapper_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QVBarModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QVBarModelMapper_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVBarModelMapper `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QVBarModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QVBarModelMapper_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn (self: QVBarModelMapper, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper, QTimerEvent) callconv(.c) void) void {
        qtc.QVBarModelMapper_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QVBarModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QVBarModelMapper_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVBarModelMapper `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QVBarModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QVBarModelMapper_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn (self: QVBarModelMapper, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper, QChildEvent) callconv(.c) void) void {
        qtc.QVBarModelMapper_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QVBarModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QVBarModelMapper_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVBarModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QVBarModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QVBarModelMapper_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn (self: QVBarModelMapper, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper, QEvent) callconv(.c) void) void {
        qtc.QVBarModelMapper_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QVBarModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBarModelMapper_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVBarModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QVBarModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBarModelMapper_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn (self: QVBarModelMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QVBarModelMapper_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QVBarModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBarModelMapper_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVBarModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QVBarModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBarModelMapper_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn (self: QVBarModelMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QVBarModelMapper_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#first)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn First(self: QVBarModelMapper) i32 {
        return qtc.QVBarModelMapper_First(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperFirst` instead
    ///
    pub const QBaseFirst = SuperFirst;

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#first)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn SuperFirst(self: QVBarModelMapper) i32 {
        return qtc.QVBarModelMapper_SuperFirst(@ptrCast(self.ptr));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#first)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnFirst(self: QVBarModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBarModelMapper_OnFirst(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirst)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` first: i32 `
    ///
    pub fn SetFirst(self: QVBarModelMapper, first: i32) void {
        qtc.QVBarModelMapper_SetFirst(@ptrCast(self.ptr), @bitCast(first));
    }

    /// ### DEPRECATED: Use `SuperSetFirst` instead
    ///
    pub const QBaseSetFirst = SuperSetFirst;

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirst)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` first: i32 `
    ///
    pub fn SuperSetFirst(self: QVBarModelMapper, first: i32) void {
        qtc.QVBarModelMapper_SuperSetFirst(@ptrCast(self.ptr), @bitCast(first));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirst)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn (self: QVBarModelMapper, first: i32) callconv(.c) void `
    ///
    pub fn OnSetFirst(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper, i32) callconv(.c) void) void {
        qtc.QVBarModelMapper_OnSetFirst(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#count)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn Count(self: QVBarModelMapper) i32 {
        return qtc.QVBarModelMapper_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperCount` instead
    ///
    pub const QBaseCount = SuperCount;

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#count)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn SuperCount(self: QVBarModelMapper) i32 {
        return qtc.QVBarModelMapper_SuperCount(@ptrCast(self.ptr));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#count)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: QVBarModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBarModelMapper_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#setCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` count: i32 `
    ///
    pub fn SetCount(self: QVBarModelMapper, count: i32) void {
        qtc.QVBarModelMapper_SetCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `SuperSetCount` instead
    ///
    pub const QBaseSetCount = SuperSetCount;

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#setCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` count: i32 `
    ///
    pub fn SuperSetCount(self: QVBarModelMapper, count: i32) void {
        qtc.QVBarModelMapper_SuperSetCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#setCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn (self: QVBarModelMapper, count: i32) callconv(.c) void `
    ///
    pub fn OnSetCount(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper, i32) callconv(.c) void) void {
        qtc.QVBarModelMapper_OnSetCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#firstBarSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn FirstBarSetSection(self: QVBarModelMapper) i32 {
        return qtc.QVBarModelMapper_FirstBarSetSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperFirstBarSetSection` instead
    ///
    pub const QBaseFirstBarSetSection = SuperFirstBarSetSection;

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#firstBarSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn SuperFirstBarSetSection(self: QVBarModelMapper) i32 {
        return qtc.QVBarModelMapper_SuperFirstBarSetSection(@ptrCast(self.ptr));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#firstBarSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnFirstBarSetSection(self: QVBarModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBarModelMapper_OnFirstBarSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirstBarSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` firstBarSetSection: i32 `
    ///
    pub fn SetFirstBarSetSection(self: QVBarModelMapper, firstBarSetSection: i32) void {
        qtc.QVBarModelMapper_SetFirstBarSetSection(@ptrCast(self.ptr), @bitCast(firstBarSetSection));
    }

    /// ### DEPRECATED: Use `SuperSetFirstBarSetSection` instead
    ///
    pub const QBaseSetFirstBarSetSection = SuperSetFirstBarSetSection;

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirstBarSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` firstBarSetSection: i32 `
    ///
    pub fn SuperSetFirstBarSetSection(self: QVBarModelMapper, firstBarSetSection: i32) void {
        qtc.QVBarModelMapper_SuperSetFirstBarSetSection(@ptrCast(self.ptr), @bitCast(firstBarSetSection));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirstBarSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn (self: QVBarModelMapper, firstBarSetSection: i32) callconv(.c) void `
    ///
    pub fn OnSetFirstBarSetSection(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper, i32) callconv(.c) void) void {
        qtc.QVBarModelMapper_OnSetFirstBarSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#lastBarSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn LastBarSetSection(self: QVBarModelMapper) i32 {
        return qtc.QVBarModelMapper_LastBarSetSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperLastBarSetSection` instead
    ///
    pub const QBaseLastBarSetSection = SuperLastBarSetSection;

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#lastBarSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn SuperLastBarSetSection(self: QVBarModelMapper) i32 {
        return qtc.QVBarModelMapper_SuperLastBarSetSection(@ptrCast(self.ptr));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#lastBarSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLastBarSetSection(self: QVBarModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBarModelMapper_OnLastBarSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#setLastBarSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` lastBarSetSection: i32 `
    ///
    pub fn SetLastBarSetSection(self: QVBarModelMapper, lastBarSetSection: i32) void {
        qtc.QVBarModelMapper_SetLastBarSetSection(@ptrCast(self.ptr), @bitCast(lastBarSetSection));
    }

    /// ### DEPRECATED: Use `SuperSetLastBarSetSection` instead
    ///
    pub const QBaseSetLastBarSetSection = SuperSetLastBarSetSection;

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#setLastBarSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` lastBarSetSection: i32 `
    ///
    pub fn SuperSetLastBarSetSection(self: QVBarModelMapper, lastBarSetSection: i32) void {
        qtc.QVBarModelMapper_SuperSetLastBarSetSection(@ptrCast(self.ptr), @bitCast(lastBarSetSection));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#setLastBarSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn (self: QVBarModelMapper, lastBarSetSection: i32) callconv(.c) void `
    ///
    pub fn OnSetLastBarSetSection(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper, i32) callconv(.c) void) void {
        qtc.QVBarModelMapper_OnSetLastBarSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#orientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn Orientation(self: QVBarModelMapper) i32 {
        return qtc.QVBarModelMapper_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperOrientation` instead
    ///
    pub const QBaseOrientation = SuperOrientation;

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#orientation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn SuperOrientation(self: QVBarModelMapper) i32 {
        return qtc.QVBarModelMapper_SuperOrientation(@ptrCast(self.ptr));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#orientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnOrientation(self: QVBarModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBarModelMapper_OnOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SetOrientation(self: QVBarModelMapper, orientation: i32) void {
        qtc.QVBarModelMapper_SetOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `SuperSetOrientation` instead
    ///
    pub const QBaseSetOrientation = SuperSetOrientation;

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SuperSetOrientation(self: QVBarModelMapper, orientation: i32) void {
        qtc.QVBarModelMapper_SuperSetOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// Inherited from QBarModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarmodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn (self: QVBarModelMapper, orientation: qnamespace_enums.Orientation) callconv(.c) void `
    ///
    pub fn OnSetOrientation(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper, i32) callconv(.c) void) void {
        qtc.QVBarModelMapper_OnSetOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn Sender(self: QVBarModelMapper) QObject {
        return .{ .ptr = qtc.QVBarModelMapper_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QVBarModelMapper `
    ///
    pub fn SuperSender(self: QVBarModelMapper) QObject {
        return .{ .ptr = qtc.QVBarModelMapper_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QVBarModelMapper, callback: *const fn () callconv(.c) QObject) void {
        qtc.QVBarModelMapper_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn SenderSignalIndex(self: QVBarModelMapper) i32 {
        return qtc.QVBarModelMapper_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QVBarModelMapper `
    ///
    pub fn SuperSenderSignalIndex(self: QVBarModelMapper) i32 {
        return qtc.QVBarModelMapper_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QVBarModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBarModelMapper_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QVBarModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVBarModelMapper_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QVBarModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QVBarModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVBarModelMapper_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn (self: QVBarModelMapper, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper, [*:0]const u8) callconv(.c) i32) void {
        qtc.QVBarModelMapper_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QVBarModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVBarModelMapper_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVBarModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QVBarModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVBarModelMapper_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper`
    ///
    /// ` callback: *const fn (self: QVBarModelMapper, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper, QMetaMethod) callconv(.c) bool) void {
        qtc.QVBarModelMapper_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBarModelMapper `
    ///
    /// ` callback: *const fn (self: QVBarModelMapper, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QVBarModelMapper, callback: *const fn (QVBarModelMapper, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#dtor.QVBarModelMapper)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QVBarModelMapper `
    ///
    pub fn Delete(self: QVBarModelMapper) void {
        qtc.QVBarModelMapper_Delete(@ptrCast(self.ptr));
    }
};
