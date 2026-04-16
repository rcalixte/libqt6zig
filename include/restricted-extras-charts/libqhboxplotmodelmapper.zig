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

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html)
pub const QHBoxPlotModelMapper = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHBoxPlotModelMapper,

    pub const _is_QHBoxPlotModelMapper = {};
    pub const _is_QBoxPlotModelMapper = {};
    pub const _is_QObject = {};

    /// New constructs a new QHBoxPlotModelMapper object.
    ///
    pub fn New() QHBoxPlotModelMapper {
        return .{ .ptr = qtc.QHBoxPlotModelMapper_new() };
    }

    /// New2 constructs a new QHBoxPlotModelMapper object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QHBoxPlotModelMapper {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QHBoxPlotModelMapper_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn MetaObject(self: QHBoxPlotModelMapper) QMetaObject {
        return .{ .ptr = qtc.QHBoxPlotModelMapper_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QHBoxPlotModelMapper, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QHBoxPlotModelMapper_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn SuperMetaObject(self: QHBoxPlotModelMapper) QMetaObject {
        return .{ .ptr = qtc.QHBoxPlotModelMapper_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QHBoxPlotModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHBoxPlotModelMapper_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QHBoxPlotModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHBoxPlotModelMapper_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QHBoxPlotModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QHBoxPlotModelMapper_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QHBoxPlotModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHBoxPlotModelMapper_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxplotmodelmapper.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn Model(self: QHBoxPlotModelMapper) QAbstractItemModel {
        return .{ .ptr = qtc.QHBoxPlotModelMapper_Model(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SetModel(self: QHBoxPlotModelMapper, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.QHBoxPlotModelMapper_SetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn Series(self: QHBoxPlotModelMapper) QBoxPlotSeries {
        return .{ .ptr = qtc.QHBoxPlotModelMapper_Series(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` series: QBoxPlotSeries `
    ///
    pub fn SetSeries(self: QHBoxPlotModelMapper, series: anytype) void {
        comptime _ = @TypeOf(series)._is_QBoxPlotSeries;
        qtc.QHBoxPlotModelMapper_SetSeries(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstBoxSetRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn FirstBoxSetRow(self: QHBoxPlotModelMapper) i32 {
        return qtc.QHBoxPlotModelMapper_FirstBoxSetRow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setFirstBoxSetRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` firstBoxSetRow: i32 `
    ///
    pub fn SetFirstBoxSetRow(self: QHBoxPlotModelMapper, firstBoxSetRow: i32) void {
        qtc.QHBoxPlotModelMapper_SetFirstBoxSetRow(@ptrCast(self.ptr), @bitCast(firstBoxSetRow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#lastBoxSetRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn LastBoxSetRow(self: QHBoxPlotModelMapper) i32 {
        return qtc.QHBoxPlotModelMapper_LastBoxSetRow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setLastBoxSetRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` lastBoxSetRow: i32 `
    ///
    pub fn SetLastBoxSetRow(self: QHBoxPlotModelMapper, lastBoxSetRow: i32) void {
        qtc.QHBoxPlotModelMapper_SetLastBoxSetRow(@ptrCast(self.ptr), @bitCast(lastBoxSetRow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn FirstColumn(self: QHBoxPlotModelMapper) i32 {
        return qtc.QHBoxPlotModelMapper_FirstColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setFirstColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` firstColumn: i32 `
    ///
    pub fn SetFirstColumn(self: QHBoxPlotModelMapper, firstColumn: i32) void {
        qtc.QHBoxPlotModelMapper_SetFirstColumn(@ptrCast(self.ptr), @bitCast(firstColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn ColumnCount(self: QHBoxPlotModelMapper) i32 {
        return qtc.QHBoxPlotModelMapper_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setColumnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` rowCount: i32 `
    ///
    pub fn SetColumnCount(self: QHBoxPlotModelMapper, rowCount: i32) void {
        qtc.QHBoxPlotModelMapper_SetColumnCount(@ptrCast(self.ptr), @bitCast(rowCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn SeriesReplaced(self: QHBoxPlotModelMapper) void {
        qtc.QHBoxPlotModelMapper_SeriesReplaced(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnSeriesReplaced(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_Connect_SeriesReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn ModelReplaced(self: QHBoxPlotModelMapper) void {
        qtc.QHBoxPlotModelMapper_ModelReplaced(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnModelReplaced(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_Connect_ModelReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstBoxSetRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn FirstBoxSetRowChanged(self: QHBoxPlotModelMapper) void {
        qtc.QHBoxPlotModelMapper_FirstBoxSetRowChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstBoxSetRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnFirstBoxSetRowChanged(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_Connect_FirstBoxSetRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#lastBoxSetRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn LastBoxSetRowChanged(self: QHBoxPlotModelMapper) void {
        qtc.QHBoxPlotModelMapper_LastBoxSetRowChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#lastBoxSetRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnLastBoxSetRowChanged(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_Connect_LastBoxSetRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn FirstColumnChanged(self: QHBoxPlotModelMapper) void {
        qtc.QHBoxPlotModelMapper_FirstColumnChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnFirstColumnChanged(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_Connect_FirstColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#columnCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn ColumnCountChanged(self: QHBoxPlotModelMapper) void {
        qtc.QHBoxPlotModelMapper_ColumnCountChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#columnCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnColumnCountChanged(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_Connect_ColumnCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxplotmodelmapper.Tr2: Memory allocation failed");
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QHBoxPlotModelMapper, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QHBoxPlotModelMapper, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn IsWidgetType(self: QHBoxPlotModelMapper) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn IsWindowType(self: QHBoxPlotModelMapper) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn IsQuickItemType(self: QHBoxPlotModelMapper) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn SignalsBlocked(self: QHBoxPlotModelMapper) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QHBoxPlotModelMapper, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn Thread(self: QHBoxPlotModelMapper) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QHBoxPlotModelMapper, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QHBoxPlotModelMapper, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QHBoxPlotModelMapper, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QHBoxPlotModelMapper, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QHBoxPlotModelMapper, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QHBoxPlotModelMapper, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qhboxplotmodelmapper.Children: Memory allocation failed");
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QHBoxPlotModelMapper, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QHBoxPlotModelMapper, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QHBoxPlotModelMapper, obj: anytype) void {
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QHBoxPlotModelMapper, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn Disconnect3(self: QHBoxPlotModelMapper) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QHBoxPlotModelMapper, receiver: anytype) bool {
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn DumpObjectTree(self: QHBoxPlotModelMapper) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn DumpObjectInfo(self: QHBoxPlotModelMapper) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QHBoxPlotModelMapper, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QHBoxPlotModelMapper, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QHBoxPlotModelMapper, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn BindingStorage(self: QHBoxPlotModelMapper) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn BindingStorage2(self: QHBoxPlotModelMapper) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn Destroyed(self: QHBoxPlotModelMapper) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn Parent(self: QHBoxPlotModelMapper) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QHBoxPlotModelMapper, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn DeleteLater(self: QHBoxPlotModelMapper) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QHBoxPlotModelMapper, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QHBoxPlotModelMapper, time: i64, timerType: i32) i32 {
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QHBoxPlotModelMapper, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QHBoxPlotModelMapper, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QHBoxPlotModelMapper, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QHBoxPlotModelMapper, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QHBoxPlotModelMapper, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QHBoxPlotModelMapper, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper, QObject) callconv(.c) void) void {
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QHBoxPlotModelMapper, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHBoxPlotModelMapper_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QHBoxPlotModelMapper, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHBoxPlotModelMapper_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper, QEvent) callconv(.c) bool) void {
        qtc.QHBoxPlotModelMapper_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QHBoxPlotModelMapper, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHBoxPlotModelMapper_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QHBoxPlotModelMapper, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHBoxPlotModelMapper_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper, QObject, QEvent) callconv(.c) bool) void {
        qtc.QHBoxPlotModelMapper_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QHBoxPlotModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QHBoxPlotModelMapper_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QHBoxPlotModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QHBoxPlotModelMapper_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper, QTimerEvent) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QHBoxPlotModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QHBoxPlotModelMapper_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QHBoxPlotModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QHBoxPlotModelMapper_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper, QChildEvent) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QHBoxPlotModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QHBoxPlotModelMapper_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QHBoxPlotModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QHBoxPlotModelMapper_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper, QEvent) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QHBoxPlotModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHBoxPlotModelMapper_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QHBoxPlotModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHBoxPlotModelMapper_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QHBoxPlotModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHBoxPlotModelMapper_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QHBoxPlotModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHBoxPlotModelMapper_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn First(self: QHBoxPlotModelMapper) i32 {
        return qtc.QHBoxPlotModelMapper_First(@ptrCast(self.ptr));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn SuperFirst(self: QHBoxPlotModelMapper) i32 {
        return qtc.QHBoxPlotModelMapper_SuperFirst(@ptrCast(self.ptr));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnFirst(self: QHBoxPlotModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxPlotModelMapper_OnFirst(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` first: i32 `
    ///
    pub fn SetFirst(self: QHBoxPlotModelMapper, first: i32) void {
        qtc.QHBoxPlotModelMapper_SetFirst(@ptrCast(self.ptr), @bitCast(first));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` first: i32 `
    ///
    pub fn SuperSetFirst(self: QHBoxPlotModelMapper, first: i32) void {
        qtc.QHBoxPlotModelMapper_SuperSetFirst(@ptrCast(self.ptr), @bitCast(first));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper, first: i32) callconv(.c) void `
    ///
    pub fn OnSetFirst(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper, i32) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnSetFirst(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn Count(self: QHBoxPlotModelMapper) i32 {
        return qtc.QHBoxPlotModelMapper_Count(@ptrCast(self.ptr));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn SuperCount(self: QHBoxPlotModelMapper) i32 {
        return qtc.QHBoxPlotModelMapper_SuperCount(@ptrCast(self.ptr));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: QHBoxPlotModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxPlotModelMapper_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` count: i32 `
    ///
    pub fn SetCount(self: QHBoxPlotModelMapper, count: i32) void {
        qtc.QHBoxPlotModelMapper_SetCount(@ptrCast(self.ptr), @bitCast(count));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` count: i32 `
    ///
    pub fn SuperSetCount(self: QHBoxPlotModelMapper, count: i32) void {
        qtc.QHBoxPlotModelMapper_SuperSetCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper, count: i32) callconv(.c) void `
    ///
    pub fn OnSetCount(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper, i32) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnSetCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn FirstBoxSetSection(self: QHBoxPlotModelMapper) i32 {
        return qtc.QHBoxPlotModelMapper_FirstBoxSetSection(@ptrCast(self.ptr));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn SuperFirstBoxSetSection(self: QHBoxPlotModelMapper) i32 {
        return qtc.QHBoxPlotModelMapper_SuperFirstBoxSetSection(@ptrCast(self.ptr));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnFirstBoxSetSection(self: QHBoxPlotModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxPlotModelMapper_OnFirstBoxSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` firstBoxSetSection: i32 `
    ///
    pub fn SetFirstBoxSetSection(self: QHBoxPlotModelMapper, firstBoxSetSection: i32) void {
        qtc.QHBoxPlotModelMapper_SetFirstBoxSetSection(@ptrCast(self.ptr), @bitCast(firstBoxSetSection));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` firstBoxSetSection: i32 `
    ///
    pub fn SuperSetFirstBoxSetSection(self: QHBoxPlotModelMapper, firstBoxSetSection: i32) void {
        qtc.QHBoxPlotModelMapper_SuperSetFirstBoxSetSection(@ptrCast(self.ptr), @bitCast(firstBoxSetSection));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper, firstBoxSetSection: i32) callconv(.c) void `
    ///
    pub fn OnSetFirstBoxSetSection(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper, i32) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnSetFirstBoxSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn LastBoxSetSection(self: QHBoxPlotModelMapper) i32 {
        return qtc.QHBoxPlotModelMapper_LastBoxSetSection(@ptrCast(self.ptr));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn SuperLastBoxSetSection(self: QHBoxPlotModelMapper) i32 {
        return qtc.QHBoxPlotModelMapper_SuperLastBoxSetSection(@ptrCast(self.ptr));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLastBoxSetSection(self: QHBoxPlotModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxPlotModelMapper_OnLastBoxSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` lastBoxSetSection: i32 `
    ///
    pub fn SetLastBoxSetSection(self: QHBoxPlotModelMapper, lastBoxSetSection: i32) void {
        qtc.QHBoxPlotModelMapper_SetLastBoxSetSection(@ptrCast(self.ptr), @bitCast(lastBoxSetSection));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` lastBoxSetSection: i32 `
    ///
    pub fn SuperSetLastBoxSetSection(self: QHBoxPlotModelMapper, lastBoxSetSection: i32) void {
        qtc.QHBoxPlotModelMapper_SuperSetLastBoxSetSection(@ptrCast(self.ptr), @bitCast(lastBoxSetSection));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper, lastBoxSetSection: i32) callconv(.c) void `
    ///
    pub fn OnSetLastBoxSetSection(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper, i32) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnSetLastBoxSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn Orientation(self: QHBoxPlotModelMapper) i32 {
        return qtc.QHBoxPlotModelMapper_Orientation(@ptrCast(self.ptr));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn SuperOrientation(self: QHBoxPlotModelMapper) i32 {
        return qtc.QHBoxPlotModelMapper_SuperOrientation(@ptrCast(self.ptr));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnOrientation(self: QHBoxPlotModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxPlotModelMapper_OnOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SetOrientation(self: QHBoxPlotModelMapper, orientation: i32) void {
        qtc.QHBoxPlotModelMapper_SetOrientation(@ptrCast(self.ptr), @bitCast(orientation));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SuperSetOrientation(self: QHBoxPlotModelMapper, orientation: i32) void {
        qtc.QHBoxPlotModelMapper_SuperSetOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper, orientation: qnamespace_enums.Orientation) callconv(.c) void `
    ///
    pub fn OnSetOrientation(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper, i32) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_OnSetOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn Sender(self: QHBoxPlotModelMapper) QObject {
        return .{ .ptr = qtc.QHBoxPlotModelMapper_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn SuperSender(self: QHBoxPlotModelMapper) QObject {
        return .{ .ptr = qtc.QHBoxPlotModelMapper_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QHBoxPlotModelMapper, callback: *const fn () callconv(.c) QObject) void {
        qtc.QHBoxPlotModelMapper_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn SenderSignalIndex(self: QHBoxPlotModelMapper) i32 {
        return qtc.QHBoxPlotModelMapper_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn SuperSenderSignalIndex(self: QHBoxPlotModelMapper) i32 {
        return qtc.QHBoxPlotModelMapper_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QHBoxPlotModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxPlotModelMapper_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QHBoxPlotModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHBoxPlotModelMapper_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QHBoxPlotModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHBoxPlotModelMapper_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper, [*:0]const u8) callconv(.c) i32) void {
        qtc.QHBoxPlotModelMapper_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QHBoxPlotModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHBoxPlotModelMapper_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QHBoxPlotModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHBoxPlotModelMapper_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper`
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper, QMetaMethod) callconv(.c) bool) void {
        qtc.QHBoxPlotModelMapper_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QHBoxPlotModelMapper, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QHBoxPlotModelMapper, callback: *const fn (QHBoxPlotModelMapper, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHBoxPlotModelMapper `
    ///
    pub fn Delete(self: QHBoxPlotModelMapper) void {
        qtc.QHBoxPlotModelMapper_Delete(@ptrCast(self.ptr));
    }
};
