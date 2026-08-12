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

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html)
pub const QHXYModelMapper = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHXYModelMapper,

    pub const _is_QHXYModelMapper = {};
    pub const _is_QXYModelMapper = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QHXYModelMapper object in C++ memory
    ///
    pub fn new() QHXYModelMapper {
        return .{ .ptr = qtc.QHXYModelMapper_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QHXYModelMapper object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QHXYModelMapper {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QHXYModelMapper_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    pub fn metaObject(self: QHXYModelMapper) QMetaObject {
        return .{ .ptr = qtc.QHXYModelMapper_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QHXYModelMapper, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QHXYModelMapper_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn superMetaObject(self: QHXYModelMapper) QMetaObject {
        return .{ .ptr = qtc.QHXYModelMapper_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QHXYModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHXYModelMapper_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHXYModelMapper `
    ///
    /// ` callback: *const fn (self: QHXYModelMapper, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QHXYModelMapper_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QHXYModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHXYModelMapper_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QHXYModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHXYModelMapper_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHXYModelMapper `
    ///
    /// ` callback: *const fn (self: QHXYModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QHXYModelMapper_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QHXYModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHXYModelMapper_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHXYModelMapper.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `model` instead
    ///
    pub const Model = model;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    pub fn model(self: QHXYModelMapper) QAbstractItemModel {
        return .{ .ptr = qtc.QHXYModelMapper_Model(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModel` instead
    ///
    pub const SetModel = setModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn setModel(self: QHXYModelMapper, _model: anytype) void {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        qtc.QHXYModelMapper_SetModel(@ptrCast(self.ptr), @ptrCast(_model.ptr));
    }

    /// ### DEPRECATED: Use `series` instead
    ///
    pub const Series = series;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    pub fn series(self: QHXYModelMapper) QXYSeries {
        return .{ .ptr = qtc.QHXYModelMapper_Series(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSeries` instead
    ///
    pub const SetSeries = setSeries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    /// ` _series: QXYSeries `
    ///
    pub fn setSeries(self: QHXYModelMapper, _series: anytype) void {
        comptime _ = @TypeOf(_series)._is_QXYSeries;
        qtc.QHXYModelMapper_SetSeries(@ptrCast(self.ptr), @ptrCast(_series.ptr));
    }

    /// ### DEPRECATED: Use `xRow` instead
    ///
    pub const XRow = xRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#xRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    pub fn xRow(self: QHXYModelMapper) i32 {
        return qtc.QHXYModelMapper_XRow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setXRow` instead
    ///
    pub const SetXRow = setXRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setXRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    /// ` _xRow: i32 `
    ///
    pub fn setXRow(self: QHXYModelMapper, _xRow: i32) void {
        qtc.QHXYModelMapper_SetXRow(@ptrCast(self.ptr), @bitCast(_xRow));
    }

    /// ### DEPRECATED: Use `yRow` instead
    ///
    pub const YRow = yRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#yRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    pub fn yRow(self: QHXYModelMapper) i32 {
        return qtc.QHXYModelMapper_YRow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setYRow` instead
    ///
    pub const SetYRow = setYRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setYRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    /// ` _yRow: i32 `
    ///
    pub fn setYRow(self: QHXYModelMapper, _yRow: i32) void {
        qtc.QHXYModelMapper_SetYRow(@ptrCast(self.ptr), @bitCast(_yRow));
    }

    /// ### DEPRECATED: Use `firstColumn` instead
    ///
    pub const FirstColumn = firstColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#firstColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    pub fn firstColumn(self: QHXYModelMapper) i32 {
        return qtc.QHXYModelMapper_FirstColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFirstColumn` instead
    ///
    pub const SetFirstColumn = setFirstColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setFirstColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    /// ` _firstColumn: i32 `
    ///
    pub fn setFirstColumn(self: QHXYModelMapper, _firstColumn: i32) void {
        qtc.QHXYModelMapper_SetFirstColumn(@ptrCast(self.ptr), @bitCast(_firstColumn));
    }

    /// ### DEPRECATED: Use `columnCount` instead
    ///
    pub const ColumnCount = columnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    pub fn columnCount(self: QHXYModelMapper) i32 {
        return qtc.QHXYModelMapper_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColumnCount` instead
    ///
    pub const SetColumnCount = setColumnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setColumnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    /// ` _columnCount: i32 `
    ///
    pub fn setColumnCount(self: QHXYModelMapper, _columnCount: i32) void {
        qtc.QHXYModelMapper_SetColumnCount(@ptrCast(self.ptr), @bitCast(_columnCount));
    }

    /// ### DEPRECATED: Use `seriesReplaced` instead
    ///
    pub const SeriesReplaced = seriesReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    pub fn seriesReplaced(self: QHXYModelMapper) void {
        qtc.QHXYModelMapper_SeriesReplaced(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSeriesReplaced` instead
    ///
    pub const OnSeriesReplaced = onSeriesReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHXYModelMapper `
    ///
    /// ` callback: *const fn (self: QHXYModelMapper) callconv(.c) void `
    ///
    pub fn onSeriesReplaced(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper) callconv(.c) void) void {
        qtc.QHXYModelMapper_Connect_SeriesReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `modelReplaced` instead
    ///
    pub const ModelReplaced = modelReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    pub fn modelReplaced(self: QHXYModelMapper) void {
        qtc.QHXYModelMapper_ModelReplaced(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onModelReplaced` instead
    ///
    pub const OnModelReplaced = onModelReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHXYModelMapper `
    ///
    /// ` callback: *const fn (self: QHXYModelMapper) callconv(.c) void `
    ///
    pub fn onModelReplaced(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper) callconv(.c) void) void {
        qtc.QHXYModelMapper_Connect_ModelReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xRowChanged` instead
    ///
    pub const XRowChanged = xRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#xRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    pub fn xRowChanged(self: QHXYModelMapper) void {
        qtc.QHXYModelMapper_XRowChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onXRowChanged` instead
    ///
    pub const OnXRowChanged = onXRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#xRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHXYModelMapper `
    ///
    /// ` callback: *const fn (self: QHXYModelMapper) callconv(.c) void `
    ///
    pub fn onXRowChanged(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper) callconv(.c) void) void {
        qtc.QHXYModelMapper_Connect_XRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yRowChanged` instead
    ///
    pub const YRowChanged = yRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#yRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    pub fn yRowChanged(self: QHXYModelMapper) void {
        qtc.QHXYModelMapper_YRowChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onYRowChanged` instead
    ///
    pub const OnYRowChanged = onYRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#yRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHXYModelMapper `
    ///
    /// ` callback: *const fn (self: QHXYModelMapper) callconv(.c) void `
    ///
    pub fn onYRowChanged(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper) callconv(.c) void) void {
        qtc.QHXYModelMapper_Connect_YRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `firstColumnChanged` instead
    ///
    pub const FirstColumnChanged = firstColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#firstColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    pub fn firstColumnChanged(self: QHXYModelMapper) void {
        qtc.QHXYModelMapper_FirstColumnChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFirstColumnChanged` instead
    ///
    pub const OnFirstColumnChanged = onFirstColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#firstColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHXYModelMapper `
    ///
    /// ` callback: *const fn (self: QHXYModelMapper) callconv(.c) void `
    ///
    pub fn onFirstColumnChanged(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper) callconv(.c) void) void {
        qtc.QHXYModelMapper_Connect_FirstColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnCountChanged` instead
    ///
    pub const ColumnCountChanged = columnCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#columnCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHXYModelMapper `
    ///
    pub fn columnCountChanged(self: QHXYModelMapper) void {
        qtc.QHXYModelMapper_ColumnCountChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onColumnCountChanged` instead
    ///
    pub const OnColumnCountChanged = onColumnCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#columnCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHXYModelMapper `
    ///
    /// ` callback: *const fn (self: QHXYModelMapper) callconv(.c) void `
    ///
    pub fn onColumnCountChanged(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper) callconv(.c) void) void {
        qtc.QHXYModelMapper_Connect_ColumnCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHXYModelMapper.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHXYModelMapper.tr3: Memory allocation failed");
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QHXYModelMapper, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHXYModelMapper.objectName: Memory allocation failed");
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QHXYModelMapper, name: []const u8) void {
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn isWidgetType(self: QHXYModelMapper) bool {
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn isWindowType(self: QHXYModelMapper) bool {
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn isQuickItemType(self: QHXYModelMapper) bool {
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn signalsBlocked(self: QHXYModelMapper) bool {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QHXYModelMapper, b: bool) bool {
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn thread(self: QHXYModelMapper) QThread {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QHXYModelMapper, _thread: anytype) bool {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QHXYModelMapper, interval: i32) i32 {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QHXYModelMapper, time: i64) i32 {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QHXYModelMapper, id: i32) void {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QHXYModelMapper, id: i32) void {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QHXYModelMapper, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QHXYModelMapper.children: Memory allocation failed");
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QHXYModelMapper, _parent: anytype) void {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QHXYModelMapper, filterObj: anytype) void {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QHXYModelMapper, obj: anytype) void {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QHXYModelMapper, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn disconnect3(self: QHXYModelMapper) bool {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QHXYModelMapper, receiver: anytype) bool {
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn dumpObjectTree(self: QHXYModelMapper) void {
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn dumpObjectInfo(self: QHXYModelMapper) void {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QHXYModelMapper, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QHXYModelMapper, name: [:0]const u8) QVariant {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QHXYModelMapper, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QHXYModelMapper.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QHXYModelMapper.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn bindingStorage(self: QHXYModelMapper) QBindingStorage {
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn bindingStorage2(self: QHXYModelMapper) QBindingStorage {
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn destroyed(self: QHXYModelMapper) void {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` callback: *const fn (self: QHXYModelMapper) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper) callconv(.c) void) void {
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn parent(self: QHXYModelMapper) QObject {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QHXYModelMapper, classname: [:0]const u8) bool {
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn deleteLater(self: QHXYModelMapper) void {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QHXYModelMapper, interval: i32, timerType: i32) i32 {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QHXYModelMapper, time: i64, timerType: i32) i32 {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QHXYModelMapper, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QHXYModelMapper, signal: [:0]const u8) bool {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QHXYModelMapper, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QHXYModelMapper, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QHXYModelMapper, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QHXYModelMapper, param1: anytype) void {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` callback: *const fn (self: QHXYModelMapper, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper, QObject) callconv(.c) void) void {
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QHXYModelMapper, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHXYModelMapper_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QHXYModelMapper, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHXYModelMapper_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn (self: QHXYModelMapper, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper, QEvent) callconv(.c) bool) void {
        qtc.QHXYModelMapper_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QHXYModelMapper, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHXYModelMapper_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QHXYModelMapper, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHXYModelMapper_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn (self: QHXYModelMapper, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper, QObject, QEvent) callconv(.c) bool) void {
        qtc.QHXYModelMapper_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QHXYModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QHXYModelMapper_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QHXYModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QHXYModelMapper_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn (self: QHXYModelMapper, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper, QTimerEvent) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QHXYModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QHXYModelMapper_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QHXYModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QHXYModelMapper_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn (self: QHXYModelMapper, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper, QChildEvent) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QHXYModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QHXYModelMapper_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QHXYModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QHXYModelMapper_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn (self: QHXYModelMapper, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper, QEvent) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QHXYModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHXYModelMapper_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QHXYModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHXYModelMapper_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn (self: QHXYModelMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QHXYModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHXYModelMapper_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QHXYModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHXYModelMapper_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn (self: QHXYModelMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn first(self: QHXYModelMapper) i32 {
        return qtc.QHXYModelMapper_First(@ptrCast(self.ptr));
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn superFirst(self: QHXYModelMapper) i32 {
        return qtc.QHXYModelMapper_SuperFirst(@ptrCast(self.ptr));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onFirst(self: QHXYModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHXYModelMapper_OnFirst(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _first: i32 `
    ///
    pub fn setFirst(self: QHXYModelMapper, _first: i32) void {
        qtc.QHXYModelMapper_SetFirst(@ptrCast(self.ptr), @bitCast(_first));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _first: i32 `
    ///
    pub fn superSetFirst(self: QHXYModelMapper, _first: i32) void {
        qtc.QHXYModelMapper_SuperSetFirst(@ptrCast(self.ptr), @bitCast(_first));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn (self: QHXYModelMapper, first: i32) callconv(.c) void `
    ///
    pub fn onSetFirst(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper, i32) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnSetFirst(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn count(self: QHXYModelMapper) i32 {
        return qtc.QHXYModelMapper_Count(@ptrCast(self.ptr));
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn superCount(self: QHXYModelMapper) i32 {
        return qtc.QHXYModelMapper_SuperCount(@ptrCast(self.ptr));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onCount(self: QHXYModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHXYModelMapper_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _count: i32 `
    ///
    pub fn setCount(self: QHXYModelMapper, _count: i32) void {
        qtc.QHXYModelMapper_SetCount(@ptrCast(self.ptr), @bitCast(_count));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _count: i32 `
    ///
    pub fn superSetCount(self: QHXYModelMapper, _count: i32) void {
        qtc.QHXYModelMapper_SuperSetCount(@ptrCast(self.ptr), @bitCast(_count));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn (self: QHXYModelMapper, count: i32) callconv(.c) void `
    ///
    pub fn onSetCount(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper, i32) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnSetCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn orientation(self: QHXYModelMapper) i32 {
        return qtc.QHXYModelMapper_Orientation(@ptrCast(self.ptr));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn superOrientation(self: QHXYModelMapper) i32 {
        return qtc.QHXYModelMapper_SuperOrientation(@ptrCast(self.ptr));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onOrientation(self: QHXYModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHXYModelMapper_OnOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _orientation: qnamespace_enums.Orientation `
    ///
    pub fn setOrientation(self: QHXYModelMapper, _orientation: i32) void {
        qtc.QHXYModelMapper_SetOrientation(@ptrCast(self.ptr), @bitCast(_orientation));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _orientation: qnamespace_enums.Orientation `
    ///
    pub fn superSetOrientation(self: QHXYModelMapper, _orientation: i32) void {
        qtc.QHXYModelMapper_SuperSetOrientation(@ptrCast(self.ptr), @bitCast(_orientation));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn (self: QHXYModelMapper, orientation: qnamespace_enums.Orientation) callconv(.c) void `
    ///
    pub fn onSetOrientation(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper, i32) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnSetOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn xSection(self: QHXYModelMapper) i32 {
        return qtc.QHXYModelMapper_XSection(@ptrCast(self.ptr));
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn superXSection(self: QHXYModelMapper) i32 {
        return qtc.QHXYModelMapper_SuperXSection(@ptrCast(self.ptr));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onXSection(self: QHXYModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHXYModelMapper_OnXSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _xSection: i32 `
    ///
    pub fn setXSection(self: QHXYModelMapper, _xSection: i32) void {
        qtc.QHXYModelMapper_SetXSection(@ptrCast(self.ptr), @bitCast(_xSection));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _xSection: i32 `
    ///
    pub fn superSetXSection(self: QHXYModelMapper, _xSection: i32) void {
        qtc.QHXYModelMapper_SuperSetXSection(@ptrCast(self.ptr), @bitCast(_xSection));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn (self: QHXYModelMapper, xSection: i32) callconv(.c) void `
    ///
    pub fn onSetXSection(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper, i32) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnSetXSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn ySection(self: QHXYModelMapper) i32 {
        return qtc.QHXYModelMapper_YSection(@ptrCast(self.ptr));
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn superYSection(self: QHXYModelMapper) i32 {
        return qtc.QHXYModelMapper_SuperYSection(@ptrCast(self.ptr));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onYSection(self: QHXYModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHXYModelMapper_OnYSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _ySection: i32 `
    ///
    pub fn setYSection(self: QHXYModelMapper, _ySection: i32) void {
        qtc.QHXYModelMapper_SetYSection(@ptrCast(self.ptr), @bitCast(_ySection));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` _ySection: i32 `
    ///
    pub fn superSetYSection(self: QHXYModelMapper, _ySection: i32) void {
        qtc.QHXYModelMapper_SuperSetYSection(@ptrCast(self.ptr), @bitCast(_ySection));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn (self: QHXYModelMapper, ySection: i32) callconv(.c) void `
    ///
    pub fn onSetYSection(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper, i32) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnSetYSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn sender(self: QHXYModelMapper) QObject {
        return .{ .ptr = qtc.QHXYModelMapper_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn superSender(self: QHXYModelMapper) QObject {
        return .{ .ptr = qtc.QHXYModelMapper_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QHXYModelMapper, callback: *const fn () callconv(.c) QObject) void {
        qtc.QHXYModelMapper_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn senderSignalIndex(self: QHXYModelMapper) i32 {
        return qtc.QHXYModelMapper_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QHXYModelMapper `
    ///
    pub fn superSenderSignalIndex(self: QHXYModelMapper) i32 {
        return qtc.QHXYModelMapper_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QHXYModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHXYModelMapper_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QHXYModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHXYModelMapper_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QHXYModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHXYModelMapper_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn (self: QHXYModelMapper, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper, [*:0]const u8) callconv(.c) i32) void {
        qtc.QHXYModelMapper_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QHXYModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHXYModelMapper_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QHXYModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHXYModelMapper_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHXYModelMapper`
    ///
    /// ` callback: *const fn (self: QHXYModelMapper, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper, QMetaMethod) callconv(.c) bool) void {
        qtc.QHXYModelMapper_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHXYModelMapper `
    ///
    /// ` callback: *const fn (self: QHXYModelMapper, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QHXYModelMapper, callback: *const fn (QHXYModelMapper, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#dtor.QHXYModelMapper)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QHXYModelMapper `
    ///
    pub fn delete(self: QHXYModelMapper) void {
        qtc.QHXYModelMapper_Delete(@ptrCast(self.ptr));
    }
};
