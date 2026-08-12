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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QVBoxPlotModelMapper object in C++ memory
    ///
    pub fn new() QVBoxPlotModelMapper {
        return .{ .ptr = qtc.QVBoxPlotModelMapper_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QVBoxPlotModelMapper object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QVBoxPlotModelMapper {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QVBoxPlotModelMapper_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn metaObject(self: QVBoxPlotModelMapper) QMetaObject {
        return .{ .ptr = qtc.QVBoxPlotModelMapper_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: QVBoxPlotModelMapper, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QVBoxPlotModelMapper_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn superMetaObject(self: QVBoxPlotModelMapper) QMetaObject {
        return .{ .ptr = qtc.QVBoxPlotModelMapper_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QVBoxPlotModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVBoxPlotModelMapper_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QVBoxPlotModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVBoxPlotModelMapper_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QVBoxPlotModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QVBoxPlotModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVBoxPlotModelMapper.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `model` instead
    ///
    pub const Model = model;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn model(self: QVBoxPlotModelMapper) QAbstractItemModel {
        return .{ .ptr = qtc.QVBoxPlotModelMapper_Model(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModel` instead
    ///
    pub const SetModel = setModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn setModel(self: QVBoxPlotModelMapper, _model: anytype) void {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        qtc.QVBoxPlotModelMapper_SetModel(@ptrCast(self.ptr), @ptrCast(_model.ptr));
    }

    /// ### DEPRECATED: Use `series` instead
    ///
    pub const Series = series;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn series(self: QVBoxPlotModelMapper) QBoxPlotSeries {
        return .{ .ptr = qtc.QVBoxPlotModelMapper_Series(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSeries` instead
    ///
    pub const SetSeries = setSeries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` _series: QBoxPlotSeries `
    ///
    pub fn setSeries(self: QVBoxPlotModelMapper, _series: anytype) void {
        comptime _ = @TypeOf(_series)._is_QBoxPlotSeries;
        qtc.QVBoxPlotModelMapper_SetSeries(@ptrCast(self.ptr), @ptrCast(_series.ptr));
    }

    /// ### DEPRECATED: Use `firstBoxSetColumn` instead
    ///
    pub const FirstBoxSetColumn = firstBoxSetColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstBoxSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn firstBoxSetColumn(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_FirstBoxSetColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFirstBoxSetColumn` instead
    ///
    pub const SetFirstBoxSetColumn = setFirstBoxSetColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setFirstBoxSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` _firstBoxSetColumn: i32 `
    ///
    pub fn setFirstBoxSetColumn(self: QVBoxPlotModelMapper, _firstBoxSetColumn: i32) void {
        qtc.QVBoxPlotModelMapper_SetFirstBoxSetColumn(@ptrCast(self.ptr), @bitCast(_firstBoxSetColumn));
    }

    /// ### DEPRECATED: Use `lastBoxSetColumn` instead
    ///
    pub const LastBoxSetColumn = lastBoxSetColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#lastBoxSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn lastBoxSetColumn(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_LastBoxSetColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLastBoxSetColumn` instead
    ///
    pub const SetLastBoxSetColumn = setLastBoxSetColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setLastBoxSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` _lastBoxSetColumn: i32 `
    ///
    pub fn setLastBoxSetColumn(self: QVBoxPlotModelMapper, _lastBoxSetColumn: i32) void {
        qtc.QVBoxPlotModelMapper_SetLastBoxSetColumn(@ptrCast(self.ptr), @bitCast(_lastBoxSetColumn));
    }

    /// ### DEPRECATED: Use `firstRow` instead
    ///
    pub const FirstRow = firstRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn firstRow(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_FirstRow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFirstRow` instead
    ///
    pub const SetFirstRow = setFirstRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setFirstRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` _firstRow: i32 `
    ///
    pub fn setFirstRow(self: QVBoxPlotModelMapper, _firstRow: i32) void {
        qtc.QVBoxPlotModelMapper_SetFirstRow(@ptrCast(self.ptr), @bitCast(_firstRow));
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn rowCount(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_RowCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRowCount` instead
    ///
    pub const SetRowCount = setRowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` _rowCount: i32 `
    ///
    pub fn setRowCount(self: QVBoxPlotModelMapper, _rowCount: i32) void {
        qtc.QVBoxPlotModelMapper_SetRowCount(@ptrCast(self.ptr), @bitCast(_rowCount));
    }

    /// ### DEPRECATED: Use `seriesReplaced` instead
    ///
    pub const SeriesReplaced = seriesReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn seriesReplaced(self: QVBoxPlotModelMapper) void {
        qtc.QVBoxPlotModelMapper_SeriesReplaced(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSeriesReplaced` instead
    ///
    pub const OnSeriesReplaced = onSeriesReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn onSeriesReplaced(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_SeriesReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `modelReplaced` instead
    ///
    pub const ModelReplaced = modelReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn modelReplaced(self: QVBoxPlotModelMapper) void {
        qtc.QVBoxPlotModelMapper_ModelReplaced(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onModelReplaced` instead
    ///
    pub const OnModelReplaced = onModelReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn onModelReplaced(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_ModelReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `firstBoxSetColumnChanged` instead
    ///
    pub const FirstBoxSetColumnChanged = firstBoxSetColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstBoxSetColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn firstBoxSetColumnChanged(self: QVBoxPlotModelMapper) void {
        qtc.QVBoxPlotModelMapper_FirstBoxSetColumnChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFirstBoxSetColumnChanged` instead
    ///
    pub const OnFirstBoxSetColumnChanged = onFirstBoxSetColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstBoxSetColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn onFirstBoxSetColumnChanged(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_FirstBoxSetColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lastBoxSetColumnChanged` instead
    ///
    pub const LastBoxSetColumnChanged = lastBoxSetColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#lastBoxSetColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn lastBoxSetColumnChanged(self: QVBoxPlotModelMapper) void {
        qtc.QVBoxPlotModelMapper_LastBoxSetColumnChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLastBoxSetColumnChanged` instead
    ///
    pub const OnLastBoxSetColumnChanged = onLastBoxSetColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#lastBoxSetColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn onLastBoxSetColumnChanged(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_LastBoxSetColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `firstRowChanged` instead
    ///
    pub const FirstRowChanged = firstRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn firstRowChanged(self: QVBoxPlotModelMapper) void {
        qtc.QVBoxPlotModelMapper_FirstRowChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFirstRowChanged` instead
    ///
    pub const OnFirstRowChanged = onFirstRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn onFirstRowChanged(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_FirstRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowCountChanged` instead
    ///
    pub const RowCountChanged = rowCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#rowCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn rowCountChanged(self: QVBoxPlotModelMapper) void {
        qtc.QVBoxPlotModelMapper_RowCountChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRowCountChanged` instead
    ///
    pub const OnRowCountChanged = onRowCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#rowCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` callback: *const fn (self: QVBoxPlotModelMapper) callconv(.c) void `
    ///
    pub fn onRowCountChanged(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_RowCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVBoxPlotModelMapper.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVBoxPlotModelMapper.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: QVBoxPlotModelMapper, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVBoxPlotModelMapper.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: QVBoxPlotModelMapper, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn isWidgetType(self: QVBoxPlotModelMapper) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn isWindowType(self: QVBoxPlotModelMapper) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn isQuickItemType(self: QVBoxPlotModelMapper) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn signalsBlocked(self: QVBoxPlotModelMapper) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: QVBoxPlotModelMapper, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn thread(self: QVBoxPlotModelMapper) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QVBoxPlotModelMapper, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: QVBoxPlotModelMapper, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: QVBoxPlotModelMapper, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: QVBoxPlotModelMapper, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: QVBoxPlotModelMapper, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: QVBoxPlotModelMapper, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QVBoxPlotModelMapper.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QVBoxPlotModelMapper, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: QVBoxPlotModelMapper, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: QVBoxPlotModelMapper, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QVBoxPlotModelMapper, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn disconnect3(self: QVBoxPlotModelMapper) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: QVBoxPlotModelMapper, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn dumpObjectTree(self: QVBoxPlotModelMapper) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn dumpObjectInfo(self: QVBoxPlotModelMapper) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: QVBoxPlotModelMapper, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: QVBoxPlotModelMapper, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: QVBoxPlotModelMapper, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QVBoxPlotModelMapper.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QVBoxPlotModelMapper.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn bindingStorage(self: QVBoxPlotModelMapper) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn bindingStorage2(self: QVBoxPlotModelMapper) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn destroyed(self: QVBoxPlotModelMapper) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn parent(self: QVBoxPlotModelMapper) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: QVBoxPlotModelMapper, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn deleteLater(self: QVBoxPlotModelMapper) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: QVBoxPlotModelMapper, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: QVBoxPlotModelMapper, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QVBoxPlotModelMapper, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: QVBoxPlotModelMapper, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: QVBoxPlotModelMapper, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: QVBoxPlotModelMapper, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: QVBoxPlotModelMapper, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: QVBoxPlotModelMapper, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QVBoxPlotModelMapper, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVBoxPlotModelMapper_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QVBoxPlotModelMapper, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVBoxPlotModelMapper_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, QEvent) callconv(.c) bool) void {
        qtc.QVBoxPlotModelMapper_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QVBoxPlotModelMapper, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVBoxPlotModelMapper_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QVBoxPlotModelMapper, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVBoxPlotModelMapper_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, QObject, QEvent) callconv(.c) bool) void {
        qtc.QVBoxPlotModelMapper_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QVBoxPlotModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QVBoxPlotModelMapper_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QVBoxPlotModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QVBoxPlotModelMapper_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, QTimerEvent) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QVBoxPlotModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QVBoxPlotModelMapper_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QVBoxPlotModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QVBoxPlotModelMapper_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, QChildEvent) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QVBoxPlotModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QVBoxPlotModelMapper_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QVBoxPlotModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QVBoxPlotModelMapper_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, QEvent) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: QVBoxPlotModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBoxPlotModelMapper_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: QVBoxPlotModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBoxPlotModelMapper_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: QVBoxPlotModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBoxPlotModelMapper_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: QVBoxPlotModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBoxPlotModelMapper_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `first` instead
    ///
    pub const First = first;

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
    pub fn first(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_First(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superFirst` instead
    ///
    pub const SuperFirst = superFirst;

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
    pub fn superFirst(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_SuperFirst(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFirst` instead
    ///
    pub const OnFirst = onFirst;

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
    pub fn onFirst(self: QVBoxPlotModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnFirst(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setFirst` instead
    ///
    pub const SetFirst = setFirst;

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
    /// ` _first: i32 `
    ///
    pub fn setFirst(self: QVBoxPlotModelMapper, _first: i32) void {
        qtc.QVBoxPlotModelMapper_SetFirst(@ptrCast(self.ptr), @bitCast(_first));
    }

    /// ### DEPRECATED: Use `superSetFirst` instead
    ///
    pub const SuperSetFirst = superSetFirst;

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
    /// ` _first: i32 `
    ///
    pub fn superSetFirst(self: QVBoxPlotModelMapper, _first: i32) void {
        qtc.QVBoxPlotModelMapper_SuperSetFirst(@ptrCast(self.ptr), @bitCast(_first));
    }

    /// ### DEPRECATED: Use `onSetFirst` instead
    ///
    pub const OnSetFirst = onSetFirst;

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
    pub fn onSetFirst(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, i32) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnSetFirst(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

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
    pub fn count(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superCount` instead
    ///
    pub const SuperCount = superCount;

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
    pub fn superCount(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_SuperCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCount` instead
    ///
    pub const OnCount = onCount;

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
    pub fn onCount(self: QVBoxPlotModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setCount` instead
    ///
    pub const SetCount = setCount;

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
    /// ` _count: i32 `
    ///
    pub fn setCount(self: QVBoxPlotModelMapper, _count: i32) void {
        qtc.QVBoxPlotModelMapper_SetCount(@ptrCast(self.ptr), @bitCast(_count));
    }

    /// ### DEPRECATED: Use `superSetCount` instead
    ///
    pub const SuperSetCount = superSetCount;

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
    /// ` _count: i32 `
    ///
    pub fn superSetCount(self: QVBoxPlotModelMapper, _count: i32) void {
        qtc.QVBoxPlotModelMapper_SuperSetCount(@ptrCast(self.ptr), @bitCast(_count));
    }

    /// ### DEPRECATED: Use `onSetCount` instead
    ///
    pub const OnSetCount = onSetCount;

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
    pub fn onSetCount(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, i32) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnSetCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `firstBoxSetSection` instead
    ///
    pub const FirstBoxSetSection = firstBoxSetSection;

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
    pub fn firstBoxSetSection(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_FirstBoxSetSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superFirstBoxSetSection` instead
    ///
    pub const SuperFirstBoxSetSection = superFirstBoxSetSection;

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
    pub fn superFirstBoxSetSection(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_SuperFirstBoxSetSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFirstBoxSetSection` instead
    ///
    pub const OnFirstBoxSetSection = onFirstBoxSetSection;

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
    pub fn onFirstBoxSetSection(self: QVBoxPlotModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnFirstBoxSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setFirstBoxSetSection` instead
    ///
    pub const SetFirstBoxSetSection = setFirstBoxSetSection;

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
    /// ` _firstBoxSetSection: i32 `
    ///
    pub fn setFirstBoxSetSection(self: QVBoxPlotModelMapper, _firstBoxSetSection: i32) void {
        qtc.QVBoxPlotModelMapper_SetFirstBoxSetSection(@ptrCast(self.ptr), @bitCast(_firstBoxSetSection));
    }

    /// ### DEPRECATED: Use `superSetFirstBoxSetSection` instead
    ///
    pub const SuperSetFirstBoxSetSection = superSetFirstBoxSetSection;

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
    /// ` _firstBoxSetSection: i32 `
    ///
    pub fn superSetFirstBoxSetSection(self: QVBoxPlotModelMapper, _firstBoxSetSection: i32) void {
        qtc.QVBoxPlotModelMapper_SuperSetFirstBoxSetSection(@ptrCast(self.ptr), @bitCast(_firstBoxSetSection));
    }

    /// ### DEPRECATED: Use `onSetFirstBoxSetSection` instead
    ///
    pub const OnSetFirstBoxSetSection = onSetFirstBoxSetSection;

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
    pub fn onSetFirstBoxSetSection(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, i32) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnSetFirstBoxSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lastBoxSetSection` instead
    ///
    pub const LastBoxSetSection = lastBoxSetSection;

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
    pub fn lastBoxSetSection(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_LastBoxSetSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superLastBoxSetSection` instead
    ///
    pub const SuperLastBoxSetSection = superLastBoxSetSection;

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
    pub fn superLastBoxSetSection(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_SuperLastBoxSetSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLastBoxSetSection` instead
    ///
    pub const OnLastBoxSetSection = onLastBoxSetSection;

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
    pub fn onLastBoxSetSection(self: QVBoxPlotModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnLastBoxSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setLastBoxSetSection` instead
    ///
    pub const SetLastBoxSetSection = setLastBoxSetSection;

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
    /// ` _lastBoxSetSection: i32 `
    ///
    pub fn setLastBoxSetSection(self: QVBoxPlotModelMapper, _lastBoxSetSection: i32) void {
        qtc.QVBoxPlotModelMapper_SetLastBoxSetSection(@ptrCast(self.ptr), @bitCast(_lastBoxSetSection));
    }

    /// ### DEPRECATED: Use `superSetLastBoxSetSection` instead
    ///
    pub const SuperSetLastBoxSetSection = superSetLastBoxSetSection;

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
    /// ` _lastBoxSetSection: i32 `
    ///
    pub fn superSetLastBoxSetSection(self: QVBoxPlotModelMapper, _lastBoxSetSection: i32) void {
        qtc.QVBoxPlotModelMapper_SuperSetLastBoxSetSection(@ptrCast(self.ptr), @bitCast(_lastBoxSetSection));
    }

    /// ### DEPRECATED: Use `onSetLastBoxSetSection` instead
    ///
    pub const OnSetLastBoxSetSection = onSetLastBoxSetSection;

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
    pub fn onSetLastBoxSetSection(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, i32) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnSetLastBoxSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

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
    pub fn orientation(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superOrientation` instead
    ///
    pub const SuperOrientation = superOrientation;

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
    pub fn superOrientation(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_SuperOrientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOrientation` instead
    ///
    pub const OnOrientation = onOrientation;

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
    pub fn onOrientation(self: QVBoxPlotModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setOrientation` instead
    ///
    pub const SetOrientation = setOrientation;

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
    /// ` _orientation: qnamespace_enums.Orientation `
    ///
    pub fn setOrientation(self: QVBoxPlotModelMapper, _orientation: i32) void {
        qtc.QVBoxPlotModelMapper_SetOrientation(@ptrCast(self.ptr), @bitCast(_orientation));
    }

    /// ### DEPRECATED: Use `superSetOrientation` instead
    ///
    pub const SuperSetOrientation = superSetOrientation;

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
    /// ` _orientation: qnamespace_enums.Orientation `
    ///
    pub fn superSetOrientation(self: QVBoxPlotModelMapper, _orientation: i32) void {
        qtc.QVBoxPlotModelMapper_SuperSetOrientation(@ptrCast(self.ptr), @bitCast(_orientation));
    }

    /// ### DEPRECATED: Use `onSetOrientation` instead
    ///
    pub const OnSetOrientation = onSetOrientation;

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
    pub fn onSetOrientation(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, i32) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnSetOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: QVBoxPlotModelMapper) QObject {
        return .{ .ptr = qtc.QVBoxPlotModelMapper_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: QVBoxPlotModelMapper) QObject {
        return .{ .ptr = qtc.QVBoxPlotModelMapper_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: QVBoxPlotModelMapper, callback: *const fn () callconv(.c) QObject) void {
        qtc.QVBoxPlotModelMapper_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: QVBoxPlotModelMapper) i32 {
        return qtc.QVBoxPlotModelMapper_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: QVBoxPlotModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: QVBoxPlotModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVBoxPlotModelMapper_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: QVBoxPlotModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVBoxPlotModelMapper_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, [*:0]const u8) callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: QVBoxPlotModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVBoxPlotModelMapper_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: QVBoxPlotModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVBoxPlotModelMapper_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, QMetaMethod) callconv(.c) bool) void {
        qtc.QVBoxPlotModelMapper_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: QVBoxPlotModelMapper, callback: *const fn (QVBoxPlotModelMapper, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#dtor.QVBoxPlotModelMapper)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVBoxPlotModelMapper `
    ///
    pub fn delete(self: QVBoxPlotModelMapper) void {
        qtc.QVBoxPlotModelMapper_Delete(@ptrCast(self.ptr));
    }
};
