const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QCandlestickSeries = @import("libqt6").QCandlestickSeries;
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

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html)
pub const QCandlestickModelMapper = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCandlestickModelMapper,

    pub const _is_QCandlestickModelMapper = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCandlestickModelMapper object in C++ memory
    ///
    pub fn new() QCandlestickModelMapper {
        return .{ .ptr = qtc.QCandlestickModelMapper_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCandlestickModelMapper object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QCandlestickModelMapper {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QCandlestickModelMapper_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn metaObject(self: QCandlestickModelMapper) QMetaObject {
        return .{ .ptr = qtc.QCandlestickModelMapper_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QCandlestickModelMapper, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QCandlestickModelMapper_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn superMetaObject(self: QCandlestickModelMapper) QMetaObject {
        return .{ .ptr = qtc.QCandlestickModelMapper_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QCandlestickModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCandlestickModelMapper_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QCandlestickModelMapper_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QCandlestickModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCandlestickModelMapper_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QCandlestickModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QCandlestickModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCandlestickModelMapper_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCandlestickModelMapper.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setModel` instead
    ///
    pub const SetModel = setModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn setModel(self: QCandlestickModelMapper, _model: anytype) void {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        qtc.QCandlestickModelMapper_SetModel(@ptrCast(self.ptr), @ptrCast(_model.ptr));
    }

    /// ### DEPRECATED: Use `model` instead
    ///
    pub const Model = model;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn model(self: QCandlestickModelMapper) QAbstractItemModel {
        return .{ .ptr = qtc.QCandlestickModelMapper_Model(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSeries` instead
    ///
    pub const SetSeries = setSeries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _series: QCandlestickSeries `
    ///
    pub fn setSeries(self: QCandlestickModelMapper, _series: anytype) void {
        comptime _ = @TypeOf(_series)._is_QCandlestickSeries;
        qtc.QCandlestickModelMapper_SetSeries(@ptrCast(self.ptr), @ptrCast(_series.ptr));
    }

    /// ### DEPRECATED: Use `series` instead
    ///
    pub const Series = series;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn series(self: QCandlestickModelMapper) QCandlestickSeries {
        return .{ .ptr = qtc.QCandlestickModelMapper_Series(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn orientation(self: QCandlestickModelMapper) i32 {
        return qtc.QCandlestickModelMapper_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOrientation` instead
    ///
    pub const OnOrientation = onOrientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#orientation)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onOrientation(self: QCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOrientation` instead
    ///
    pub const SuperOrientation = superOrientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#orientation)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn superOrientation(self: QCandlestickModelMapper) i32 {
        return qtc.QCandlestickModelMapper_SuperOrientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modelReplaced` instead
    ///
    pub const ModelReplaced = modelReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn modelReplaced(self: QCandlestickModelMapper) void {
        qtc.QCandlestickModelMapper_ModelReplaced(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onModelReplaced` instead
    ///
    pub const OnModelReplaced = onModelReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onModelReplaced(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_Connect_ModelReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `seriesReplaced` instead
    ///
    pub const SeriesReplaced = seriesReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn seriesReplaced(self: QCandlestickModelMapper) void {
        qtc.QCandlestickModelMapper_SeriesReplaced(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSeriesReplaced` instead
    ///
    pub const OnSeriesReplaced = onSeriesReplaced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onSeriesReplaced(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_Connect_SeriesReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _timestamp: i32 `
    ///
    pub fn setTimestamp(self: QCandlestickModelMapper, _timestamp: i32) void {
        qtc.QCandlestickModelMapper_SetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `onSetTimestamp` instead
    ///
    pub const OnSetTimestamp = onSetTimestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setTimestamp)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, timestamp: i32) callconv(.c) void `
    ///
    pub fn onSetTimestamp(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetTimestamp` instead
    ///
    pub const SuperSetTimestamp = superSetTimestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setTimestamp)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _timestamp: i32 `
    ///
    pub fn superSetTimestamp(self: QCandlestickModelMapper, _timestamp: i32) void {
        qtc.QCandlestickModelMapper_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn timestamp(self: QCandlestickModelMapper) i32 {
        return qtc.QCandlestickModelMapper_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTimestamp` instead
    ///
    pub const OnTimestamp = onTimestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#timestamp)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onTimestamp(self: QCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTimestamp` instead
    ///
    pub const SuperTimestamp = superTimestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#timestamp)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn superTimestamp(self: QCandlestickModelMapper) i32 {
        return qtc.QCandlestickModelMapper_SuperTimestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpen` instead
    ///
    pub const SetOpen = setOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _open: i32 `
    ///
    pub fn setOpen(self: QCandlestickModelMapper, _open: i32) void {
        qtc.QCandlestickModelMapper_SetOpen(@ptrCast(self.ptr), @bitCast(_open));
    }

    /// ### DEPRECATED: Use `onSetOpen` instead
    ///
    pub const OnSetOpen = onSetOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setOpen)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, open: i32) callconv(.c) void `
    ///
    pub fn onSetOpen(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetOpen` instead
    ///
    pub const SuperSetOpen = superSetOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setOpen)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _open: i32 `
    ///
    pub fn superSetOpen(self: QCandlestickModelMapper, _open: i32) void {
        qtc.QCandlestickModelMapper_SuperSetOpen(@ptrCast(self.ptr), @bitCast(_open));
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn open(self: QCandlestickModelMapper) i32 {
        return qtc.QCandlestickModelMapper_Open(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOpen` instead
    ///
    pub const OnOpen = onOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#open)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onOpen(self: QCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOpen` instead
    ///
    pub const SuperOpen = superOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#open)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn superOpen(self: QCandlestickModelMapper) i32 {
        return qtc.QCandlestickModelMapper_SuperOpen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHigh` instead
    ///
    pub const SetHigh = setHigh;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setHigh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _high: i32 `
    ///
    pub fn setHigh(self: QCandlestickModelMapper, _high: i32) void {
        qtc.QCandlestickModelMapper_SetHigh(@ptrCast(self.ptr), @bitCast(_high));
    }

    /// ### DEPRECATED: Use `onSetHigh` instead
    ///
    pub const OnSetHigh = onSetHigh;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setHigh)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, high: i32) callconv(.c) void `
    ///
    pub fn onSetHigh(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetHigh(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetHigh` instead
    ///
    pub const SuperSetHigh = superSetHigh;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setHigh)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _high: i32 `
    ///
    pub fn superSetHigh(self: QCandlestickModelMapper, _high: i32) void {
        qtc.QCandlestickModelMapper_SuperSetHigh(@ptrCast(self.ptr), @bitCast(_high));
    }

    /// ### DEPRECATED: Use `high` instead
    ///
    pub const High = high;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#high)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn high(self: QCandlestickModelMapper) i32 {
        return qtc.QCandlestickModelMapper_High(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHigh` instead
    ///
    pub const OnHigh = onHigh;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#high)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onHigh(self: QCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnHigh(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHigh` instead
    ///
    pub const SuperHigh = superHigh;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#high)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn superHigh(self: QCandlestickModelMapper) i32 {
        return qtc.QCandlestickModelMapper_SuperHigh(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLow` instead
    ///
    pub const SetLow = setLow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setLow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _low: i32 `
    ///
    pub fn setLow(self: QCandlestickModelMapper, _low: i32) void {
        qtc.QCandlestickModelMapper_SetLow(@ptrCast(self.ptr), @bitCast(_low));
    }

    /// ### DEPRECATED: Use `onSetLow` instead
    ///
    pub const OnSetLow = onSetLow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setLow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, low: i32) callconv(.c) void `
    ///
    pub fn onSetLow(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetLow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetLow` instead
    ///
    pub const SuperSetLow = superSetLow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setLow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _low: i32 `
    ///
    pub fn superSetLow(self: QCandlestickModelMapper, _low: i32) void {
        qtc.QCandlestickModelMapper_SuperSetLow(@ptrCast(self.ptr), @bitCast(_low));
    }

    /// ### DEPRECATED: Use `low` instead
    ///
    pub const Low = low;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#low)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn low(self: QCandlestickModelMapper) i32 {
        return qtc.QCandlestickModelMapper_Low(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLow` instead
    ///
    pub const OnLow = onLow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#low)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onLow(self: QCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnLow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLow` instead
    ///
    pub const SuperLow = superLow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#low)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn superLow(self: QCandlestickModelMapper) i32 {
        return qtc.QCandlestickModelMapper_SuperLow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setClose` instead
    ///
    pub const SetClose = setClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _close: i32 `
    ///
    pub fn setClose(self: QCandlestickModelMapper, _close: i32) void {
        qtc.QCandlestickModelMapper_SetClose(@ptrCast(self.ptr), @bitCast(_close));
    }

    /// ### DEPRECATED: Use `onSetClose` instead
    ///
    pub const OnSetClose = onSetClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setClose)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, close: i32) callconv(.c) void `
    ///
    pub fn onSetClose(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetClose` instead
    ///
    pub const SuperSetClose = superSetClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setClose)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _close: i32 `
    ///
    pub fn superSetClose(self: QCandlestickModelMapper, _close: i32) void {
        qtc.QCandlestickModelMapper_SuperSetClose(@ptrCast(self.ptr), @bitCast(_close));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn close(self: QCandlestickModelMapper) i32 {
        return qtc.QCandlestickModelMapper_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClose` instead
    ///
    pub const OnClose = onClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#close)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onClose(self: QCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClose` instead
    ///
    pub const SuperClose = superClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#close)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn superClose(self: QCandlestickModelMapper) i32 {
        return qtc.QCandlestickModelMapper_SuperClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFirstSetSection` instead
    ///
    pub const SetFirstSetSection = setFirstSetSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setFirstSetSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _firstSetSection: i32 `
    ///
    pub fn setFirstSetSection(self: QCandlestickModelMapper, _firstSetSection: i32) void {
        qtc.QCandlestickModelMapper_SetFirstSetSection(@ptrCast(self.ptr), @bitCast(_firstSetSection));
    }

    /// ### DEPRECATED: Use `onSetFirstSetSection` instead
    ///
    pub const OnSetFirstSetSection = onSetFirstSetSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setFirstSetSection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, firstSetSection: i32) callconv(.c) void `
    ///
    pub fn onSetFirstSetSection(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetFirstSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetFirstSetSection` instead
    ///
    pub const SuperSetFirstSetSection = superSetFirstSetSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setFirstSetSection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _firstSetSection: i32 `
    ///
    pub fn superSetFirstSetSection(self: QCandlestickModelMapper, _firstSetSection: i32) void {
        qtc.QCandlestickModelMapper_SuperSetFirstSetSection(@ptrCast(self.ptr), @bitCast(_firstSetSection));
    }

    /// ### DEPRECATED: Use `firstSetSection` instead
    ///
    pub const FirstSetSection = firstSetSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#firstSetSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn firstSetSection(self: QCandlestickModelMapper) i32 {
        return qtc.QCandlestickModelMapper_FirstSetSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFirstSetSection` instead
    ///
    pub const OnFirstSetSection = onFirstSetSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#firstSetSection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onFirstSetSection(self: QCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnFirstSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFirstSetSection` instead
    ///
    pub const SuperFirstSetSection = superFirstSetSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#firstSetSection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn superFirstSetSection(self: QCandlestickModelMapper) i32 {
        return qtc.QCandlestickModelMapper_SuperFirstSetSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLastSetSection` instead
    ///
    pub const SetLastSetSection = setLastSetSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setLastSetSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _lastSetSection: i32 `
    ///
    pub fn setLastSetSection(self: QCandlestickModelMapper, _lastSetSection: i32) void {
        qtc.QCandlestickModelMapper_SetLastSetSection(@ptrCast(self.ptr), @bitCast(_lastSetSection));
    }

    /// ### DEPRECATED: Use `onSetLastSetSection` instead
    ///
    pub const OnSetLastSetSection = onSetLastSetSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setLastSetSection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, lastSetSection: i32) callconv(.c) void `
    ///
    pub fn onSetLastSetSection(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetLastSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetLastSetSection` instead
    ///
    pub const SuperSetLastSetSection = superSetLastSetSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setLastSetSection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _lastSetSection: i32 `
    ///
    pub fn superSetLastSetSection(self: QCandlestickModelMapper, _lastSetSection: i32) void {
        qtc.QCandlestickModelMapper_SuperSetLastSetSection(@ptrCast(self.ptr), @bitCast(_lastSetSection));
    }

    /// ### DEPRECATED: Use `lastSetSection` instead
    ///
    pub const LastSetSection = lastSetSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#lastSetSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn lastSetSection(self: QCandlestickModelMapper) i32 {
        return qtc.QCandlestickModelMapper_LastSetSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLastSetSection` instead
    ///
    pub const OnLastSetSection = onLastSetSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#lastSetSection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onLastSetSection(self: QCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnLastSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLastSetSection` instead
    ///
    pub const SuperLastSetSection = superLastSetSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#lastSetSection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn superLastSetSection(self: QCandlestickModelMapper) i32 {
        return qtc.QCandlestickModelMapper_SuperLastSetSection(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCandlestickModelMapper.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCandlestickModelMapper.tr3: Memory allocation failed");
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QCandlestickModelMapper, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCandlestickModelMapper.objectName: Memory allocation failed");
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QCandlestickModelMapper, name: []const u8) void {
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
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn isWidgetType(self: QCandlestickModelMapper) bool {
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
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn isWindowType(self: QCandlestickModelMapper) bool {
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
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn isQuickItemType(self: QCandlestickModelMapper) bool {
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
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn signalsBlocked(self: QCandlestickModelMapper) bool {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QCandlestickModelMapper, b: bool) bool {
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
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn thread(self: QCandlestickModelMapper) QThread {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QCandlestickModelMapper, _thread: anytype) bool {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QCandlestickModelMapper, interval: i32) i32 {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QCandlestickModelMapper, time: i64) i32 {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QCandlestickModelMapper, id: i32) void {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QCandlestickModelMapper, id: i32) void {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QCandlestickModelMapper, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QCandlestickModelMapper.children: Memory allocation failed");
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QCandlestickModelMapper, _parent: anytype) void {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QCandlestickModelMapper, filterObj: anytype) void {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QCandlestickModelMapper, obj: anytype) void {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QCandlestickModelMapper, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn disconnect3(self: QCandlestickModelMapper) bool {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QCandlestickModelMapper, receiver: anytype) bool {
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
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn dumpObjectTree(self: QCandlestickModelMapper) void {
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
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn dumpObjectInfo(self: QCandlestickModelMapper) void {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QCandlestickModelMapper, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QCandlestickModelMapper, name: [:0]const u8) QVariant {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QCandlestickModelMapper, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QCandlestickModelMapper.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCandlestickModelMapper.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn bindingStorage(self: QCandlestickModelMapper) QBindingStorage {
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
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn bindingStorage2(self: QCandlestickModelMapper) QBindingStorage {
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
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn destroyed(self: QCandlestickModelMapper) void {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper) callconv(.c) void) void {
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
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn parent(self: QCandlestickModelMapper) QObject {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QCandlestickModelMapper, classname: [:0]const u8) bool {
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
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn deleteLater(self: QCandlestickModelMapper) void {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QCandlestickModelMapper, interval: i32, timerType: i32) i32 {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QCandlestickModelMapper, time: i64, timerType: i32) i32 {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QCandlestickModelMapper, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QCandlestickModelMapper, signal: [:0]const u8) bool {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QCandlestickModelMapper, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QCandlestickModelMapper, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QCandlestickModelMapper, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QCandlestickModelMapper, param1: anytype) void {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, QObject) callconv(.c) void) void {
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QCandlestickModelMapper, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCandlestickModelMapper_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QCandlestickModelMapper, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCandlestickModelMapper_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, QEvent) callconv(.c) bool) void {
        qtc.QCandlestickModelMapper_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QCandlestickModelMapper, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCandlestickModelMapper_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QCandlestickModelMapper, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCandlestickModelMapper_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, QObject, QEvent) callconv(.c) bool) void {
        qtc.QCandlestickModelMapper_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QCandlestickModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QCandlestickModelMapper_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QCandlestickModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QCandlestickModelMapper_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, QTimerEvent) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QCandlestickModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QCandlestickModelMapper_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QCandlestickModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QCandlestickModelMapper_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, QChildEvent) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QCandlestickModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCandlestickModelMapper_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QCandlestickModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCandlestickModelMapper_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, QEvent) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickModelMapper_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickModelMapper_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickModelMapper_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickModelMapper_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn sender(self: QCandlestickModelMapper) QObject {
        return .{ .ptr = qtc.QCandlestickModelMapper_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn superSender(self: QCandlestickModelMapper) QObject {
        return .{ .ptr = qtc.QCandlestickModelMapper_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QCandlestickModelMapper, callback: *const fn () callconv(.c) QObject) void {
        qtc.QCandlestickModelMapper_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn senderSignalIndex(self: QCandlestickModelMapper) i32 {
        return qtc.QCandlestickModelMapper_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn superSenderSignalIndex(self: QCandlestickModelMapper) i32 {
        return qtc.QCandlestickModelMapper_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QCandlestickModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCandlestickModelMapper_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QCandlestickModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCandlestickModelMapper_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, [*:0]const u8) callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QCandlestickModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCandlestickModelMapper_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QCandlestickModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCandlestickModelMapper_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, QMetaMethod) callconv(.c) bool) void {
        qtc.QCandlestickModelMapper_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QCandlestickModelMapper, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QCandlestickModelMapper, callback: *const fn (QCandlestickModelMapper, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#dtor.QCandlestickModelMapper)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCandlestickModelMapper `
    ///
    pub fn delete(self: QCandlestickModelMapper) void {
        qtc.QCandlestickModelMapper_Delete(@ptrCast(self.ptr));
    }
};
