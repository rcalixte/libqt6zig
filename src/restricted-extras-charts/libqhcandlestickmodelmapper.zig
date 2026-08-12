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

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html)
pub const QHCandlestickModelMapper = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHCandlestickModelMapper,

    pub const _is_QHCandlestickModelMapper = {};
    pub const _is_QCandlestickModelMapper = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QHCandlestickModelMapper object in C++ memory
    ///
    pub fn new() QHCandlestickModelMapper {
        return .{ .ptr = qtc.QHCandlestickModelMapper_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QHCandlestickModelMapper object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QHCandlestickModelMapper {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QHCandlestickModelMapper_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn metaObject(self: QHCandlestickModelMapper) QMetaObject {
        return .{ .ptr = qtc.QHCandlestickModelMapper_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QHCandlestickModelMapper_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn superMetaObject(self: QHCandlestickModelMapper) QMetaObject {
        return .{ .ptr = qtc.QHCandlestickModelMapper_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QHCandlestickModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHCandlestickModelMapper_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QHCandlestickModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHCandlestickModelMapper_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QHCandlestickModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QHCandlestickModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHCandlestickModelMapper.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn orientation(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOrientation` instead
    ///
    pub const OnOrientation = onOrientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#orientation)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onOrientation(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOrientation` instead
    ///
    pub const SuperOrientation = superOrientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#orientation)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn superOrientation(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SuperOrientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimestampColumn` instead
    ///
    pub const SetTimestampColumn = setTimestampColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setTimestampColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _timestampColumn: i32 `
    ///
    pub fn setTimestampColumn(self: QHCandlestickModelMapper, _timestampColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetTimestampColumn(@ptrCast(self.ptr), @bitCast(_timestampColumn));
    }

    /// ### DEPRECATED: Use `timestampColumn` instead
    ///
    pub const TimestampColumn = timestampColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#timestampColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn timestampColumn(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_TimestampColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpenColumn` instead
    ///
    pub const SetOpenColumn = setOpenColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setOpenColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _openColumn: i32 `
    ///
    pub fn setOpenColumn(self: QHCandlestickModelMapper, _openColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetOpenColumn(@ptrCast(self.ptr), @bitCast(_openColumn));
    }

    /// ### DEPRECATED: Use `openColumn` instead
    ///
    pub const OpenColumn = openColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#openColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn openColumn(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_OpenColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHighColumn` instead
    ///
    pub const SetHighColumn = setHighColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setHighColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _highColumn: i32 `
    ///
    pub fn setHighColumn(self: QHCandlestickModelMapper, _highColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetHighColumn(@ptrCast(self.ptr), @bitCast(_highColumn));
    }

    /// ### DEPRECATED: Use `highColumn` instead
    ///
    pub const HighColumn = highColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#highColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn highColumn(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_HighColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLowColumn` instead
    ///
    pub const SetLowColumn = setLowColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setLowColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _lowColumn: i32 `
    ///
    pub fn setLowColumn(self: QHCandlestickModelMapper, _lowColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetLowColumn(@ptrCast(self.ptr), @bitCast(_lowColumn));
    }

    /// ### DEPRECATED: Use `lowColumn` instead
    ///
    pub const LowColumn = lowColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lowColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn lowColumn(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_LowColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCloseColumn` instead
    ///
    pub const SetCloseColumn = setCloseColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setCloseColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _closeColumn: i32 `
    ///
    pub fn setCloseColumn(self: QHCandlestickModelMapper, _closeColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetCloseColumn(@ptrCast(self.ptr), @bitCast(_closeColumn));
    }

    /// ### DEPRECATED: Use `closeColumn` instead
    ///
    pub const CloseColumn = closeColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#closeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn closeColumn(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_CloseColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFirstSetRow` instead
    ///
    pub const SetFirstSetRow = setFirstSetRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setFirstSetRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _firstSetRow: i32 `
    ///
    pub fn setFirstSetRow(self: QHCandlestickModelMapper, _firstSetRow: i32) void {
        qtc.QHCandlestickModelMapper_SetFirstSetRow(@ptrCast(self.ptr), @bitCast(_firstSetRow));
    }

    /// ### DEPRECATED: Use `firstSetRow` instead
    ///
    pub const FirstSetRow = firstSetRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#firstSetRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn firstSetRow(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_FirstSetRow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLastSetRow` instead
    ///
    pub const SetLastSetRow = setLastSetRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setLastSetRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _lastSetRow: i32 `
    ///
    pub fn setLastSetRow(self: QHCandlestickModelMapper, _lastSetRow: i32) void {
        qtc.QHCandlestickModelMapper_SetLastSetRow(@ptrCast(self.ptr), @bitCast(_lastSetRow));
    }

    /// ### DEPRECATED: Use `lastSetRow` instead
    ///
    pub const LastSetRow = lastSetRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lastSetRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn lastSetRow(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_LastSetRow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `timestampColumnChanged` instead
    ///
    pub const TimestampColumnChanged = timestampColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#timestampColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn timestampColumnChanged(self: QHCandlestickModelMapper) void {
        qtc.QHCandlestickModelMapper_TimestampColumnChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTimestampColumnChanged` instead
    ///
    pub const OnTimestampColumnChanged = onTimestampColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#timestampColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onTimestampColumnChanged(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_TimestampColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `openColumnChanged` instead
    ///
    pub const OpenColumnChanged = openColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#openColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn openColumnChanged(self: QHCandlestickModelMapper) void {
        qtc.QHCandlestickModelMapper_OpenColumnChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOpenColumnChanged` instead
    ///
    pub const OnOpenColumnChanged = onOpenColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#openColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onOpenColumnChanged(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_OpenColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `highColumnChanged` instead
    ///
    pub const HighColumnChanged = highColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#highColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn highColumnChanged(self: QHCandlestickModelMapper) void {
        qtc.QHCandlestickModelMapper_HighColumnChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHighColumnChanged` instead
    ///
    pub const OnHighColumnChanged = onHighColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#highColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onHighColumnChanged(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_HighColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lowColumnChanged` instead
    ///
    pub const LowColumnChanged = lowColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lowColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn lowColumnChanged(self: QHCandlestickModelMapper) void {
        qtc.QHCandlestickModelMapper_LowColumnChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLowColumnChanged` instead
    ///
    pub const OnLowColumnChanged = onLowColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lowColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onLowColumnChanged(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_LowColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeColumnChanged` instead
    ///
    pub const CloseColumnChanged = closeColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#closeColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn closeColumnChanged(self: QHCandlestickModelMapper) void {
        qtc.QHCandlestickModelMapper_CloseColumnChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCloseColumnChanged` instead
    ///
    pub const OnCloseColumnChanged = onCloseColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#closeColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onCloseColumnChanged(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_CloseColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `firstSetRowChanged` instead
    ///
    pub const FirstSetRowChanged = firstSetRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#firstSetRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn firstSetRowChanged(self: QHCandlestickModelMapper) void {
        qtc.QHCandlestickModelMapper_FirstSetRowChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFirstSetRowChanged` instead
    ///
    pub const OnFirstSetRowChanged = onFirstSetRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#firstSetRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onFirstSetRowChanged(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_FirstSetRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lastSetRowChanged` instead
    ///
    pub const LastSetRowChanged = lastSetRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lastSetRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn lastSetRowChanged(self: QHCandlestickModelMapper) void {
        qtc.QHCandlestickModelMapper_LastSetRowChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLastSetRowChanged` instead
    ///
    pub const OnLastSetRowChanged = onLastSetRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lastSetRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onLastSetRowChanged(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_LastSetRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHCandlestickModelMapper.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHCandlestickModelMapper.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setModel` instead
    ///
    pub const SetModel = setModel;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn setModel(self: QHCandlestickModelMapper, _model: anytype) void {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        qtc.QCandlestickModelMapper_SetModel(@ptrCast(self.ptr), @ptrCast(_model.ptr));
    }

    /// ### DEPRECATED: Use `model` instead
    ///
    pub const Model = model;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn model(self: QHCandlestickModelMapper) QAbstractItemModel {
        return .{ .ptr = qtc.QCandlestickModelMapper_Model(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSeries` instead
    ///
    pub const SetSeries = setSeries;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _series: QCandlestickSeries `
    ///
    pub fn setSeries(self: QHCandlestickModelMapper, _series: anytype) void {
        comptime _ = @TypeOf(_series)._is_QCandlestickSeries;
        qtc.QCandlestickModelMapper_SetSeries(@ptrCast(self.ptr), @ptrCast(_series.ptr));
    }

    /// ### DEPRECATED: Use `series` instead
    ///
    pub const Series = series;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn series(self: QHCandlestickModelMapper) QCandlestickSeries {
        return .{ .ptr = qtc.QCandlestickModelMapper_Series(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `modelReplaced` instead
    ///
    pub const ModelReplaced = modelReplaced;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn modelReplaced(self: QHCandlestickModelMapper) void {
        qtc.QCandlestickModelMapper_ModelReplaced(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onModelReplaced` instead
    ///
    pub const OnModelReplaced = onModelReplaced;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onModelReplaced(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_Connect_ModelReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `seriesReplaced` instead
    ///
    pub const SeriesReplaced = seriesReplaced;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn seriesReplaced(self: QHCandlestickModelMapper) void {
        qtc.QCandlestickModelMapper_SeriesReplaced(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSeriesReplaced` instead
    ///
    pub const OnSeriesReplaced = onSeriesReplaced;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onSeriesReplaced(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_Connect_SeriesReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QHCandlestickModelMapper, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHCandlestickModelMapper.objectName: Memory allocation failed");
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QHCandlestickModelMapper, name: []const u8) void {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn isWidgetType(self: QHCandlestickModelMapper) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn isWindowType(self: QHCandlestickModelMapper) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn isQuickItemType(self: QHCandlestickModelMapper) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn signalsBlocked(self: QHCandlestickModelMapper) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QHCandlestickModelMapper, b: bool) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn thread(self: QHCandlestickModelMapper) QThread {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QHCandlestickModelMapper, _thread: anytype) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QHCandlestickModelMapper, interval: i32) i32 {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QHCandlestickModelMapper, time: i64) i32 {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QHCandlestickModelMapper, id: i32) void {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QHCandlestickModelMapper, id: i32) void {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QHCandlestickModelMapper, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QHCandlestickModelMapper.children: Memory allocation failed");
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QHCandlestickModelMapper, _parent: anytype) void {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QHCandlestickModelMapper, filterObj: anytype) void {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QHCandlestickModelMapper, obj: anytype) void {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QHCandlestickModelMapper, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn disconnect3(self: QHCandlestickModelMapper) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QHCandlestickModelMapper, receiver: anytype) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn dumpObjectTree(self: QHCandlestickModelMapper) void {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn dumpObjectInfo(self: QHCandlestickModelMapper) void {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QHCandlestickModelMapper, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QHCandlestickModelMapper, name: [:0]const u8) QVariant {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QHCandlestickModelMapper, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QHCandlestickModelMapper.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QHCandlestickModelMapper.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn bindingStorage(self: QHCandlestickModelMapper) QBindingStorage {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn bindingStorage2(self: QHCandlestickModelMapper) QBindingStorage {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn destroyed(self: QHCandlestickModelMapper) void {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn parent(self: QHCandlestickModelMapper) QObject {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QHCandlestickModelMapper, classname: [:0]const u8) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn deleteLater(self: QHCandlestickModelMapper) void {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QHCandlestickModelMapper, interval: i32, timerType: i32) i32 {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QHCandlestickModelMapper, time: i64, timerType: i32) i32 {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QHCandlestickModelMapper, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QHCandlestickModelMapper, signal: [:0]const u8) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QHCandlestickModelMapper, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QHCandlestickModelMapper, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QHCandlestickModelMapper, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QHCandlestickModelMapper, param1: anytype) void {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, QObject) callconv(.c) void) void {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QHCandlestickModelMapper, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHCandlestickModelMapper_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QHCandlestickModelMapper, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHCandlestickModelMapper_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, QEvent) callconv(.c) bool) void {
        qtc.QHCandlestickModelMapper_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QHCandlestickModelMapper, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHCandlestickModelMapper_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QHCandlestickModelMapper, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHCandlestickModelMapper_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, QObject, QEvent) callconv(.c) bool) void {
        qtc.QHCandlestickModelMapper_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QHCandlestickModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QHCandlestickModelMapper_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QHCandlestickModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QHCandlestickModelMapper_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, QTimerEvent) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QHCandlestickModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QHCandlestickModelMapper_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QHCandlestickModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QHCandlestickModelMapper_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, QChildEvent) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QHCandlestickModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QHCandlestickModelMapper_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QHCandlestickModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QHCandlestickModelMapper_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, QEvent) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QHCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHCandlestickModelMapper_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QHCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHCandlestickModelMapper_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QHCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHCandlestickModelMapper_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QHCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHCandlestickModelMapper_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _timestamp: i32 `
    ///
    pub fn setTimestamp(self: QHCandlestickModelMapper, _timestamp: i32) void {
        qtc.QHCandlestickModelMapper_SetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `superSetTimestamp` instead
    ///
    pub const SuperSetTimestamp = superSetTimestamp;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _timestamp: i32 `
    ///
    pub fn superSetTimestamp(self: QHCandlestickModelMapper, _timestamp: i32) void {
        qtc.QHCandlestickModelMapper_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `onSetTimestamp` instead
    ///
    pub const OnSetTimestamp = onSetTimestamp;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, timestamp: i32) callconv(.c) void `
    ///
    pub fn onSetTimestamp(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn timestamp(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superTimestamp` instead
    ///
    pub const SuperTimestamp = superTimestamp;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn superTimestamp(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SuperTimestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTimestamp` instead
    ///
    pub const OnTimestamp = onTimestamp;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onTimestamp(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setOpen` instead
    ///
    pub const SetOpen = setOpen;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _open: i32 `
    ///
    pub fn setOpen(self: QHCandlestickModelMapper, _open: i32) void {
        qtc.QHCandlestickModelMapper_SetOpen(@ptrCast(self.ptr), @bitCast(_open));
    }

    /// ### DEPRECATED: Use `superSetOpen` instead
    ///
    pub const SuperSetOpen = superSetOpen;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _open: i32 `
    ///
    pub fn superSetOpen(self: QHCandlestickModelMapper, _open: i32) void {
        qtc.QHCandlestickModelMapper_SuperSetOpen(@ptrCast(self.ptr), @bitCast(_open));
    }

    /// ### DEPRECATED: Use `onSetOpen` instead
    ///
    pub const OnSetOpen = onSetOpen;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, open: i32) callconv(.c) void `
    ///
    pub fn onSetOpen(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn open(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_Open(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superOpen` instead
    ///
    pub const SuperOpen = superOpen;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn superOpen(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SuperOpen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOpen` instead
    ///
    pub const OnOpen = onOpen;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onOpen(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setHigh` instead
    ///
    pub const SetHigh = setHigh;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _high: i32 `
    ///
    pub fn setHigh(self: QHCandlestickModelMapper, _high: i32) void {
        qtc.QHCandlestickModelMapper_SetHigh(@ptrCast(self.ptr), @bitCast(_high));
    }

    /// ### DEPRECATED: Use `superSetHigh` instead
    ///
    pub const SuperSetHigh = superSetHigh;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _high: i32 `
    ///
    pub fn superSetHigh(self: QHCandlestickModelMapper, _high: i32) void {
        qtc.QHCandlestickModelMapper_SuperSetHigh(@ptrCast(self.ptr), @bitCast(_high));
    }

    /// ### DEPRECATED: Use `onSetHigh` instead
    ///
    pub const OnSetHigh = onSetHigh;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, high: i32) callconv(.c) void `
    ///
    pub fn onSetHigh(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetHigh(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `high` instead
    ///
    pub const High = high;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn high(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_High(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superHigh` instead
    ///
    pub const SuperHigh = superHigh;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn superHigh(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SuperHigh(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHigh` instead
    ///
    pub const OnHigh = onHigh;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onHigh(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnHigh(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setLow` instead
    ///
    pub const SetLow = setLow;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _low: i32 `
    ///
    pub fn setLow(self: QHCandlestickModelMapper, _low: i32) void {
        qtc.QHCandlestickModelMapper_SetLow(@ptrCast(self.ptr), @bitCast(_low));
    }

    /// ### DEPRECATED: Use `superSetLow` instead
    ///
    pub const SuperSetLow = superSetLow;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _low: i32 `
    ///
    pub fn superSetLow(self: QHCandlestickModelMapper, _low: i32) void {
        qtc.QHCandlestickModelMapper_SuperSetLow(@ptrCast(self.ptr), @bitCast(_low));
    }

    /// ### DEPRECATED: Use `onSetLow` instead
    ///
    pub const OnSetLow = onSetLow;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, low: i32) callconv(.c) void `
    ///
    pub fn onSetLow(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetLow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `low` instead
    ///
    pub const Low = low;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn low(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_Low(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superLow` instead
    ///
    pub const SuperLow = superLow;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn superLow(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SuperLow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLow` instead
    ///
    pub const OnLow = onLow;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onLow(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnLow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setClose` instead
    ///
    pub const SetClose = setClose;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _close: i32 `
    ///
    pub fn setClose(self: QHCandlestickModelMapper, _close: i32) void {
        qtc.QHCandlestickModelMapper_SetClose(@ptrCast(self.ptr), @bitCast(_close));
    }

    /// ### DEPRECATED: Use `superSetClose` instead
    ///
    pub const SuperSetClose = superSetClose;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _close: i32 `
    ///
    pub fn superSetClose(self: QHCandlestickModelMapper, _close: i32) void {
        qtc.QHCandlestickModelMapper_SuperSetClose(@ptrCast(self.ptr), @bitCast(_close));
    }

    /// ### DEPRECATED: Use `onSetClose` instead
    ///
    pub const OnSetClose = onSetClose;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, close: i32) callconv(.c) void `
    ///
    pub fn onSetClose(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn close(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superClose` instead
    ///
    pub const SuperClose = superClose;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn superClose(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SuperClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClose` instead
    ///
    pub const OnClose = onClose;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onClose(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setFirstSetSection` instead
    ///
    pub const SetFirstSetSection = setFirstSetSection;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _firstSetSection: i32 `
    ///
    pub fn setFirstSetSection(self: QHCandlestickModelMapper, _firstSetSection: i32) void {
        qtc.QHCandlestickModelMapper_SetFirstSetSection(@ptrCast(self.ptr), @bitCast(_firstSetSection));
    }

    /// ### DEPRECATED: Use `superSetFirstSetSection` instead
    ///
    pub const SuperSetFirstSetSection = superSetFirstSetSection;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _firstSetSection: i32 `
    ///
    pub fn superSetFirstSetSection(self: QHCandlestickModelMapper, _firstSetSection: i32) void {
        qtc.QHCandlestickModelMapper_SuperSetFirstSetSection(@ptrCast(self.ptr), @bitCast(_firstSetSection));
    }

    /// ### DEPRECATED: Use `onSetFirstSetSection` instead
    ///
    pub const OnSetFirstSetSection = onSetFirstSetSection;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, firstSetSection: i32) callconv(.c) void `
    ///
    pub fn onSetFirstSetSection(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetFirstSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `firstSetSection` instead
    ///
    pub const FirstSetSection = firstSetSection;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn firstSetSection(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_FirstSetSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superFirstSetSection` instead
    ///
    pub const SuperFirstSetSection = superFirstSetSection;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn superFirstSetSection(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SuperFirstSetSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFirstSetSection` instead
    ///
    pub const OnFirstSetSection = onFirstSetSection;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onFirstSetSection(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnFirstSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setLastSetSection` instead
    ///
    pub const SetLastSetSection = setLastSetSection;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _lastSetSection: i32 `
    ///
    pub fn setLastSetSection(self: QHCandlestickModelMapper, _lastSetSection: i32) void {
        qtc.QHCandlestickModelMapper_SetLastSetSection(@ptrCast(self.ptr), @bitCast(_lastSetSection));
    }

    /// ### DEPRECATED: Use `superSetLastSetSection` instead
    ///
    pub const SuperSetLastSetSection = superSetLastSetSection;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` _lastSetSection: i32 `
    ///
    pub fn superSetLastSetSection(self: QHCandlestickModelMapper, _lastSetSection: i32) void {
        qtc.QHCandlestickModelMapper_SuperSetLastSetSection(@ptrCast(self.ptr), @bitCast(_lastSetSection));
    }

    /// ### DEPRECATED: Use `onSetLastSetSection` instead
    ///
    pub const OnSetLastSetSection = onSetLastSetSection;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, lastSetSection: i32) callconv(.c) void `
    ///
    pub fn onSetLastSetSection(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetLastSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lastSetSection` instead
    ///
    pub const LastSetSection = lastSetSection;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn lastSetSection(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_LastSetSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superLastSetSection` instead
    ///
    pub const SuperLastSetSection = superLastSetSection;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn superLastSetSection(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SuperLastSetSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLastSetSection` instead
    ///
    pub const OnLastSetSection = onLastSetSection;

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onLastSetSection(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnLastSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn sender(self: QHCandlestickModelMapper) QObject {
        return .{ .ptr = qtc.QHCandlestickModelMapper_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn superSender(self: QHCandlestickModelMapper) QObject {
        return .{ .ptr = qtc.QHCandlestickModelMapper_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) QObject) void {
        qtc.QHCandlestickModelMapper_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn senderSignalIndex(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn superSenderSignalIndex(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QHCandlestickModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHCandlestickModelMapper_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QHCandlestickModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHCandlestickModelMapper_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, [*:0]const u8) callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QHCandlestickModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHCandlestickModelMapper_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QHCandlestickModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHCandlestickModelMapper_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, QMetaMethod) callconv(.c) bool) void {
        qtc.QHCandlestickModelMapper_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#dtor.QHCandlestickModelMapper)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn delete(self: QHCandlestickModelMapper) void {
        qtc.QHCandlestickModelMapper_Delete(@ptrCast(self.ptr));
    }
};
