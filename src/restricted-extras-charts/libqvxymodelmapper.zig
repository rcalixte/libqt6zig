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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QVXYModelMapper object in C++ memory
    ///
    pub fn new() QVXYModelMapper {
        return .{ .ptr = qtc.QVXYModelMapper_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QVXYModelMapper object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QVXYModelMapper {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QVXYModelMapper_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn metaObject(self: QVXYModelMapper) QMetaObject {
        return .{ .ptr = qtc.QVXYModelMapper_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QVXYModelMapper, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QVXYModelMapper_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn superMetaObject(self: QVXYModelMapper) QMetaObject {
        return .{ .ptr = qtc.QVXYModelMapper_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QVXYModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVXYModelMapper_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QVXYModelMapper_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QVXYModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVXYModelMapper_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QVXYModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVXYModelMapper_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QVXYModelMapper_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QVXYModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVXYModelMapper_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVXYModelMapper.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `model` instead
    ///
    pub const Model = model;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn model(self: QVXYModelMapper) QAbstractItemModel {
        return .{ .ptr = qtc.QVXYModelMapper_Model(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModel` instead
    ///
    pub const SetModel = setModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn setModel(self: QVXYModelMapper, _model: anytype) void {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        qtc.QVXYModelMapper_SetModel(@ptrCast(self.ptr), @ptrCast(_model.ptr));
    }

    /// ### DEPRECATED: Use `series` instead
    ///
    pub const Series = series;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn series(self: QVXYModelMapper) QXYSeries {
        return .{ .ptr = qtc.QVXYModelMapper_Series(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSeries` instead
    ///
    pub const SetSeries = setSeries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` _series: QXYSeries `
    ///
    pub fn setSeries(self: QVXYModelMapper, _series: anytype) void {
        comptime _ = @TypeOf(_series)._is_QXYSeries;
        qtc.QVXYModelMapper_SetSeries(@ptrCast(self.ptr), @ptrCast(_series.ptr));
    }

    /// ### DEPRECATED: Use `xColumn` instead
    ///
    pub const XColumn = xColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#xColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn xColumn(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_XColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setXColumn` instead
    ///
    pub const SetXColumn = setXColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setXColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` _xColumn: i32 `
    ///
    pub fn setXColumn(self: QVXYModelMapper, _xColumn: i32) void {
        qtc.QVXYModelMapper_SetXColumn(@ptrCast(self.ptr), @bitCast(_xColumn));
    }

    /// ### DEPRECATED: Use `yColumn` instead
    ///
    pub const YColumn = yColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#yColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn yColumn(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_YColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setYColumn` instead
    ///
    pub const SetYColumn = setYColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setYColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` _yColumn: i32 `
    ///
    pub fn setYColumn(self: QVXYModelMapper, _yColumn: i32) void {
        qtc.QVXYModelMapper_SetYColumn(@ptrCast(self.ptr), @bitCast(_yColumn));
    }

    /// ### DEPRECATED: Use `firstRow` instead
    ///
    pub const FirstRow = firstRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#firstRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn firstRow(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_FirstRow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFirstRow` instead
    ///
    pub const SetFirstRow = setFirstRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setFirstRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` _firstRow: i32 `
    ///
    pub fn setFirstRow(self: QVXYModelMapper, _firstRow: i32) void {
        qtc.QVXYModelMapper_SetFirstRow(@ptrCast(self.ptr), @bitCast(_firstRow));
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn rowCount(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_RowCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRowCount` instead
    ///
    pub const SetRowCount = setRowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` _rowCount: i32 `
    ///
    pub fn setRowCount(self: QVXYModelMapper, _rowCount: i32) void {
        qtc.QVXYModelMapper_SetRowCount(@ptrCast(self.ptr), @bitCast(_rowCount));
    }

    /// ### DEPRECATED: Use `seriesReplaced` instead
    ///
    pub const SeriesReplaced = seriesReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn seriesReplaced(self: QVXYModelMapper) void {
        qtc.QVXYModelMapper_SeriesReplaced(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSeriesReplaced` instead
    ///
    pub const OnSeriesReplaced = onSeriesReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper) callconv(.c) void `
    ///
    pub fn onSeriesReplaced(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper) callconv(.c) void) void {
        qtc.QVXYModelMapper_Connect_SeriesReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `modelReplaced` instead
    ///
    pub const ModelReplaced = modelReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn modelReplaced(self: QVXYModelMapper) void {
        qtc.QVXYModelMapper_ModelReplaced(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onModelReplaced` instead
    ///
    pub const OnModelReplaced = onModelReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper) callconv(.c) void `
    ///
    pub fn onModelReplaced(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper) callconv(.c) void) void {
        qtc.QVXYModelMapper_Connect_ModelReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xColumnChanged` instead
    ///
    pub const XColumnChanged = xColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#xColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn xColumnChanged(self: QVXYModelMapper) void {
        qtc.QVXYModelMapper_XColumnChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onXColumnChanged` instead
    ///
    pub const OnXColumnChanged = onXColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#xColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper) callconv(.c) void `
    ///
    pub fn onXColumnChanged(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper) callconv(.c) void) void {
        qtc.QVXYModelMapper_Connect_XColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yColumnChanged` instead
    ///
    pub const YColumnChanged = yColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#yColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn yColumnChanged(self: QVXYModelMapper) void {
        qtc.QVXYModelMapper_YColumnChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onYColumnChanged` instead
    ///
    pub const OnYColumnChanged = onYColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#yColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper) callconv(.c) void `
    ///
    pub fn onYColumnChanged(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper) callconv(.c) void) void {
        qtc.QVXYModelMapper_Connect_YColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `firstRowChanged` instead
    ///
    pub const FirstRowChanged = firstRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#firstRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn firstRowChanged(self: QVXYModelMapper) void {
        qtc.QVXYModelMapper_FirstRowChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFirstRowChanged` instead
    ///
    pub const OnFirstRowChanged = onFirstRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#firstRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper) callconv(.c) void `
    ///
    pub fn onFirstRowChanged(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper) callconv(.c) void) void {
        qtc.QVXYModelMapper_Connect_FirstRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowCountChanged` instead
    ///
    pub const RowCountChanged = rowCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#rowCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn rowCountChanged(self: QVXYModelMapper) void {
        qtc.QVXYModelMapper_RowCountChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRowCountChanged` instead
    ///
    pub const OnRowCountChanged = onRowCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#rowCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper) callconv(.c) void `
    ///
    pub fn onRowCountChanged(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper) callconv(.c) void) void {
        qtc.QVXYModelMapper_Connect_RowCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVXYModelMapper.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVXYModelMapper.tr3: Memory allocation failed");
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QVXYModelMapper, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVXYModelMapper.objectName: Memory allocation failed");
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QVXYModelMapper, name: []const u8) void {
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn isWidgetType(self: QVXYModelMapper) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn isWindowType(self: QVXYModelMapper) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn isQuickItemType(self: QVXYModelMapper) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn signalsBlocked(self: QVXYModelMapper) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QVXYModelMapper, b: bool) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn thread(self: QVXYModelMapper) QThread {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QVXYModelMapper, _thread: anytype) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QVXYModelMapper, interval: i32) i32 {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QVXYModelMapper, time: i64) i32 {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QVXYModelMapper, id: i32) void {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QVXYModelMapper, id: i32) void {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QVXYModelMapper, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QVXYModelMapper.children: Memory allocation failed");
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QVXYModelMapper, _parent: anytype) void {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QVXYModelMapper, filterObj: anytype) void {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QVXYModelMapper, obj: anytype) void {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QVXYModelMapper, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn disconnect3(self: QVXYModelMapper) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QVXYModelMapper, receiver: anytype) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn dumpObjectTree(self: QVXYModelMapper) void {
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn dumpObjectInfo(self: QVXYModelMapper) void {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QVXYModelMapper, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QVXYModelMapper, name: [:0]const u8) QVariant {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QVXYModelMapper, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QVXYModelMapper.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QVXYModelMapper.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn bindingStorage(self: QVXYModelMapper) QBindingStorage {
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn bindingStorage2(self: QVXYModelMapper) QBindingStorage {
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn destroyed(self: QVXYModelMapper) void {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper) callconv(.c) void) void {
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn parent(self: QVXYModelMapper) QObject {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QVXYModelMapper, classname: [:0]const u8) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn deleteLater(self: QVXYModelMapper) void {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QVXYModelMapper, interval: i32, timerType: i32) i32 {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QVXYModelMapper, time: i64, timerType: i32) i32 {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QVXYModelMapper, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QVXYModelMapper, signal: [:0]const u8) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QVXYModelMapper, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QVXYModelMapper, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QVXYModelMapper, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QVXYModelMapper, param1: anytype) void {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, QObject) callconv(.c) void) void {
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QVXYModelMapper, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVXYModelMapper_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QVXYModelMapper, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVXYModelMapper_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, QEvent) callconv(.c) bool) void {
        qtc.QVXYModelMapper_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QVXYModelMapper, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVXYModelMapper_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QVXYModelMapper, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVXYModelMapper_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, QObject, QEvent) callconv(.c) bool) void {
        qtc.QVXYModelMapper_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QVXYModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QVXYModelMapper_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QVXYModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QVXYModelMapper_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, QTimerEvent) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QVXYModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QVXYModelMapper_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QVXYModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QVXYModelMapper_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, QChildEvent) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QVXYModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QVXYModelMapper_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QVXYModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QVXYModelMapper_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, QEvent) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QVXYModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVXYModelMapper_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QVXYModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVXYModelMapper_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QVXYModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVXYModelMapper_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QVXYModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVXYModelMapper_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `first` instead
    ///
    pub const First = first;

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
    pub fn first(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_First(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superFirst` instead
    ///
    pub const SuperFirst = superFirst;

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
    pub fn superFirst(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_SuperFirst(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFirst` instead
    ///
    pub const OnFirst = onFirst;

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
    pub fn onFirst(self: QVXYModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVXYModelMapper_OnFirst(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setFirst` instead
    ///
    pub const SetFirst = setFirst;

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
    /// ` _first: i32 `
    ///
    pub fn setFirst(self: QVXYModelMapper, _first: i32) void {
        qtc.QVXYModelMapper_SetFirst(@ptrCast(self.ptr), @bitCast(_first));
    }

    /// ### DEPRECATED: Use `superSetFirst` instead
    ///
    pub const SuperSetFirst = superSetFirst;

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
    /// ` _first: i32 `
    ///
    pub fn superSetFirst(self: QVXYModelMapper, _first: i32) void {
        qtc.QVXYModelMapper_SuperSetFirst(@ptrCast(self.ptr), @bitCast(_first));
    }

    /// ### DEPRECATED: Use `onSetFirst` instead
    ///
    pub const OnSetFirst = onSetFirst;

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
    pub fn onSetFirst(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, i32) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnSetFirst(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

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
    pub fn count(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superCount` instead
    ///
    pub const SuperCount = superCount;

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
    pub fn superCount(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_SuperCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCount` instead
    ///
    pub const OnCount = onCount;

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
    pub fn onCount(self: QVXYModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVXYModelMapper_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setCount` instead
    ///
    pub const SetCount = setCount;

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
    /// ` _count: i32 `
    ///
    pub fn setCount(self: QVXYModelMapper, _count: i32) void {
        qtc.QVXYModelMapper_SetCount(@ptrCast(self.ptr), @bitCast(_count));
    }

    /// ### DEPRECATED: Use `superSetCount` instead
    ///
    pub const SuperSetCount = superSetCount;

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
    /// ` _count: i32 `
    ///
    pub fn superSetCount(self: QVXYModelMapper, _count: i32) void {
        qtc.QVXYModelMapper_SuperSetCount(@ptrCast(self.ptr), @bitCast(_count));
    }

    /// ### DEPRECATED: Use `onSetCount` instead
    ///
    pub const OnSetCount = onSetCount;

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
    pub fn onSetCount(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, i32) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnSetCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

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
    pub fn orientation(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superOrientation` instead
    ///
    pub const SuperOrientation = superOrientation;

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
    pub fn superOrientation(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_SuperOrientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOrientation` instead
    ///
    pub const OnOrientation = onOrientation;

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
    pub fn onOrientation(self: QVXYModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVXYModelMapper_OnOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setOrientation` instead
    ///
    pub const SetOrientation = setOrientation;

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
    /// ` _orientation: qnamespace_enums.Orientation `
    ///
    pub fn setOrientation(self: QVXYModelMapper, _orientation: i32) void {
        qtc.QVXYModelMapper_SetOrientation(@ptrCast(self.ptr), @bitCast(_orientation));
    }

    /// ### DEPRECATED: Use `superSetOrientation` instead
    ///
    pub const SuperSetOrientation = superSetOrientation;

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
    /// ` _orientation: qnamespace_enums.Orientation `
    ///
    pub fn superSetOrientation(self: QVXYModelMapper, _orientation: i32) void {
        qtc.QVXYModelMapper_SuperSetOrientation(@ptrCast(self.ptr), @bitCast(_orientation));
    }

    /// ### DEPRECATED: Use `onSetOrientation` instead
    ///
    pub const OnSetOrientation = onSetOrientation;

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
    pub fn onSetOrientation(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, i32) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnSetOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xSection` instead
    ///
    pub const XSection = xSection;

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
    pub fn xSection(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_XSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superXSection` instead
    ///
    pub const SuperXSection = superXSection;

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
    pub fn superXSection(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_SuperXSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onXSection` instead
    ///
    pub const OnXSection = onXSection;

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
    pub fn onXSection(self: QVXYModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVXYModelMapper_OnXSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setXSection` instead
    ///
    pub const SetXSection = setXSection;

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
    /// ` _xSection: i32 `
    ///
    pub fn setXSection(self: QVXYModelMapper, _xSection: i32) void {
        qtc.QVXYModelMapper_SetXSection(@ptrCast(self.ptr), @bitCast(_xSection));
    }

    /// ### DEPRECATED: Use `superSetXSection` instead
    ///
    pub const SuperSetXSection = superSetXSection;

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
    /// ` _xSection: i32 `
    ///
    pub fn superSetXSection(self: QVXYModelMapper, _xSection: i32) void {
        qtc.QVXYModelMapper_SuperSetXSection(@ptrCast(self.ptr), @bitCast(_xSection));
    }

    /// ### DEPRECATED: Use `onSetXSection` instead
    ///
    pub const OnSetXSection = onSetXSection;

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
    pub fn onSetXSection(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, i32) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnSetXSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `ySection` instead
    ///
    pub const YSection = ySection;

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
    pub fn ySection(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_YSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superYSection` instead
    ///
    pub const SuperYSection = superYSection;

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
    pub fn superYSection(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_SuperYSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onYSection` instead
    ///
    pub const OnYSection = onYSection;

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
    pub fn onYSection(self: QVXYModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVXYModelMapper_OnYSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setYSection` instead
    ///
    pub const SetYSection = setYSection;

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
    /// ` _ySection: i32 `
    ///
    pub fn setYSection(self: QVXYModelMapper, _ySection: i32) void {
        qtc.QVXYModelMapper_SetYSection(@ptrCast(self.ptr), @bitCast(_ySection));
    }

    /// ### DEPRECATED: Use `superSetYSection` instead
    ///
    pub const SuperSetYSection = superSetYSection;

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
    /// ` _ySection: i32 `
    ///
    pub fn superSetYSection(self: QVXYModelMapper, _ySection: i32) void {
        qtc.QVXYModelMapper_SuperSetYSection(@ptrCast(self.ptr), @bitCast(_ySection));
    }

    /// ### DEPRECATED: Use `onSetYSection` instead
    ///
    pub const OnSetYSection = onSetYSection;

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
    pub fn onSetYSection(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, i32) callconv(.c) void) void {
        qtc.QVXYModelMapper_OnSetYSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn sender(self: QVXYModelMapper) QObject {
        return .{ .ptr = qtc.QVXYModelMapper_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn superSender(self: QVXYModelMapper) QObject {
        return .{ .ptr = qtc.QVXYModelMapper_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QVXYModelMapper, callback: *const fn () callconv(.c) QObject) void {
        qtc.QVXYModelMapper_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn senderSignalIndex(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QVXYModelMapper `
    ///
    pub fn superSenderSignalIndex(self: QVXYModelMapper) i32 {
        return qtc.QVXYModelMapper_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QVXYModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVXYModelMapper_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QVXYModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVXYModelMapper_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QVXYModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVXYModelMapper_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, [*:0]const u8) callconv(.c) i32) void {
        qtc.QVXYModelMapper_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QVXYModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVXYModelMapper_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QVXYModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVXYModelMapper_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVXYModelMapper`
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, QMetaMethod) callconv(.c) bool) void {
        qtc.QVXYModelMapper_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVXYModelMapper `
    ///
    /// ` callback: *const fn (self: QVXYModelMapper, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QVXYModelMapper, callback: *const fn (QVXYModelMapper, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#dtor.QVXYModelMapper)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVXYModelMapper `
    ///
    pub fn delete(self: QVXYModelMapper) void {
        qtc.QVXYModelMapper_Delete(@ptrCast(self.ptr));
    }
};
