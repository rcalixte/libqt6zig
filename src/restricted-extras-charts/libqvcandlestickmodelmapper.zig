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

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html)
pub const QVCandlestickModelMapper = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVCandlestickModelMapper,

    pub const _is_QVCandlestickModelMapper = {};
    pub const _is_QCandlestickModelMapper = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QVCandlestickModelMapper object in C++ memory
    ///
    pub fn new() QVCandlestickModelMapper {
        return .{ .ptr = qtc.QVCandlestickModelMapper_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QVCandlestickModelMapper object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QVCandlestickModelMapper {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QVCandlestickModelMapper_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn metaObject(self: QVCandlestickModelMapper) QMetaObject {
        return .{ .ptr = qtc.QVCandlestickModelMapper_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QVCandlestickModelMapper_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn superMetaObject(self: QVCandlestickModelMapper) QMetaObject {
        return .{ .ptr = qtc.QVCandlestickModelMapper_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QVCandlestickModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVCandlestickModelMapper_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QVCandlestickModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVCandlestickModelMapper_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QVCandlestickModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QVCandlestickModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVCandlestickModelMapper.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn orientation(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOrientation` instead
    ///
    pub const OnOrientation = onOrientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#orientation)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onOrientation(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOrientation` instead
    ///
    pub const SuperOrientation = superOrientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#orientation)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn superOrientation(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SuperOrientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimestampRow` instead
    ///
    pub const SetTimestampRow = setTimestampRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setTimestampRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _timestampRow: i32 `
    ///
    pub fn setTimestampRow(self: QVCandlestickModelMapper, _timestampRow: i32) void {
        qtc.QVCandlestickModelMapper_SetTimestampRow(@ptrCast(self.ptr), @bitCast(_timestampRow));
    }

    /// ### DEPRECATED: Use `timestampRow` instead
    ///
    pub const TimestampRow = timestampRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#timestampRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn timestampRow(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_TimestampRow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpenRow` instead
    ///
    pub const SetOpenRow = setOpenRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setOpenRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _openRow: i32 `
    ///
    pub fn setOpenRow(self: QVCandlestickModelMapper, _openRow: i32) void {
        qtc.QVCandlestickModelMapper_SetOpenRow(@ptrCast(self.ptr), @bitCast(_openRow));
    }

    /// ### DEPRECATED: Use `openRow` instead
    ///
    pub const OpenRow = openRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#openRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn openRow(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_OpenRow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHighRow` instead
    ///
    pub const SetHighRow = setHighRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setHighRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _highRow: i32 `
    ///
    pub fn setHighRow(self: QVCandlestickModelMapper, _highRow: i32) void {
        qtc.QVCandlestickModelMapper_SetHighRow(@ptrCast(self.ptr), @bitCast(_highRow));
    }

    /// ### DEPRECATED: Use `highRow` instead
    ///
    pub const HighRow = highRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#highRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn highRow(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_HighRow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLowRow` instead
    ///
    pub const SetLowRow = setLowRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setLowRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _lowRow: i32 `
    ///
    pub fn setLowRow(self: QVCandlestickModelMapper, _lowRow: i32) void {
        qtc.QVCandlestickModelMapper_SetLowRow(@ptrCast(self.ptr), @bitCast(_lowRow));
    }

    /// ### DEPRECATED: Use `lowRow` instead
    ///
    pub const LowRow = lowRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lowRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn lowRow(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_LowRow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCloseRow` instead
    ///
    pub const SetCloseRow = setCloseRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setCloseRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _closeRow: i32 `
    ///
    pub fn setCloseRow(self: QVCandlestickModelMapper, _closeRow: i32) void {
        qtc.QVCandlestickModelMapper_SetCloseRow(@ptrCast(self.ptr), @bitCast(_closeRow));
    }

    /// ### DEPRECATED: Use `closeRow` instead
    ///
    pub const CloseRow = closeRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#closeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn closeRow(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_CloseRow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFirstSetColumn` instead
    ///
    pub const SetFirstSetColumn = setFirstSetColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setFirstSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _firstSetColumn: i32 `
    ///
    pub fn setFirstSetColumn(self: QVCandlestickModelMapper, _firstSetColumn: i32) void {
        qtc.QVCandlestickModelMapper_SetFirstSetColumn(@ptrCast(self.ptr), @bitCast(_firstSetColumn));
    }

    /// ### DEPRECATED: Use `firstSetColumn` instead
    ///
    pub const FirstSetColumn = firstSetColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#firstSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn firstSetColumn(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_FirstSetColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLastSetColumn` instead
    ///
    pub const SetLastSetColumn = setLastSetColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setLastSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _lastSetColumn: i32 `
    ///
    pub fn setLastSetColumn(self: QVCandlestickModelMapper, _lastSetColumn: i32) void {
        qtc.QVCandlestickModelMapper_SetLastSetColumn(@ptrCast(self.ptr), @bitCast(_lastSetColumn));
    }

    /// ### DEPRECATED: Use `lastSetColumn` instead
    ///
    pub const LastSetColumn = lastSetColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lastSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn lastSetColumn(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_LastSetColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `timestampRowChanged` instead
    ///
    pub const TimestampRowChanged = timestampRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#timestampRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn timestampRowChanged(self: QVCandlestickModelMapper) void {
        qtc.QVCandlestickModelMapper_TimestampRowChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTimestampRowChanged` instead
    ///
    pub const OnTimestampRowChanged = onTimestampRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#timestampRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onTimestampRowChanged(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_TimestampRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `openRowChanged` instead
    ///
    pub const OpenRowChanged = openRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#openRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn openRowChanged(self: QVCandlestickModelMapper) void {
        qtc.QVCandlestickModelMapper_OpenRowChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOpenRowChanged` instead
    ///
    pub const OnOpenRowChanged = onOpenRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#openRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onOpenRowChanged(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_OpenRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `highRowChanged` instead
    ///
    pub const HighRowChanged = highRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#highRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn highRowChanged(self: QVCandlestickModelMapper) void {
        qtc.QVCandlestickModelMapper_HighRowChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHighRowChanged` instead
    ///
    pub const OnHighRowChanged = onHighRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#highRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onHighRowChanged(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_HighRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lowRowChanged` instead
    ///
    pub const LowRowChanged = lowRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lowRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn lowRowChanged(self: QVCandlestickModelMapper) void {
        qtc.QVCandlestickModelMapper_LowRowChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLowRowChanged` instead
    ///
    pub const OnLowRowChanged = onLowRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lowRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onLowRowChanged(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_LowRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeRowChanged` instead
    ///
    pub const CloseRowChanged = closeRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#closeRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn closeRowChanged(self: QVCandlestickModelMapper) void {
        qtc.QVCandlestickModelMapper_CloseRowChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCloseRowChanged` instead
    ///
    pub const OnCloseRowChanged = onCloseRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#closeRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onCloseRowChanged(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_CloseRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `firstSetColumnChanged` instead
    ///
    pub const FirstSetColumnChanged = firstSetColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#firstSetColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn firstSetColumnChanged(self: QVCandlestickModelMapper) void {
        qtc.QVCandlestickModelMapper_FirstSetColumnChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFirstSetColumnChanged` instead
    ///
    pub const OnFirstSetColumnChanged = onFirstSetColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#firstSetColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onFirstSetColumnChanged(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_FirstSetColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lastSetColumnChanged` instead
    ///
    pub const LastSetColumnChanged = lastSetColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lastSetColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn lastSetColumnChanged(self: QVCandlestickModelMapper) void {
        qtc.QVCandlestickModelMapper_LastSetColumnChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLastSetColumnChanged` instead
    ///
    pub const OnLastSetColumnChanged = onLastSetColumnChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lastSetColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onLastSetColumnChanged(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_LastSetColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVCandlestickModelMapper.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVCandlestickModelMapper.tr3: Memory allocation failed");
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn setModel(self: QVCandlestickModelMapper, _model: anytype) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn model(self: QVCandlestickModelMapper) QAbstractItemModel {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _series: QCandlestickSeries `
    ///
    pub fn setSeries(self: QVCandlestickModelMapper, _series: anytype) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn series(self: QVCandlestickModelMapper) QCandlestickSeries {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn modelReplaced(self: QVCandlestickModelMapper) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onModelReplaced(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn seriesReplaced(self: QVCandlestickModelMapper) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onSeriesReplaced(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QVCandlestickModelMapper, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVCandlestickModelMapper.objectName: Memory allocation failed");
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QVCandlestickModelMapper, name: []const u8) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn isWidgetType(self: QVCandlestickModelMapper) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn isWindowType(self: QVCandlestickModelMapper) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn isQuickItemType(self: QVCandlestickModelMapper) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn signalsBlocked(self: QVCandlestickModelMapper) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QVCandlestickModelMapper, b: bool) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn thread(self: QVCandlestickModelMapper) QThread {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QVCandlestickModelMapper, _thread: anytype) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QVCandlestickModelMapper, interval: i32) i32 {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QVCandlestickModelMapper, time: i64) i32 {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QVCandlestickModelMapper, id: i32) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QVCandlestickModelMapper, id: i32) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QVCandlestickModelMapper, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QVCandlestickModelMapper.children: Memory allocation failed");
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QVCandlestickModelMapper, _parent: anytype) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QVCandlestickModelMapper, filterObj: anytype) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QVCandlestickModelMapper, obj: anytype) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QVCandlestickModelMapper, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn disconnect3(self: QVCandlestickModelMapper) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QVCandlestickModelMapper, receiver: anytype) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn dumpObjectTree(self: QVCandlestickModelMapper) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn dumpObjectInfo(self: QVCandlestickModelMapper) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QVCandlestickModelMapper, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QVCandlestickModelMapper, name: [:0]const u8) QVariant {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QVCandlestickModelMapper, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QVCandlestickModelMapper.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QVCandlestickModelMapper.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn bindingStorage(self: QVCandlestickModelMapper) QBindingStorage {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn bindingStorage2(self: QVCandlestickModelMapper) QBindingStorage {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn destroyed(self: QVCandlestickModelMapper) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn parent(self: QVCandlestickModelMapper) QObject {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QVCandlestickModelMapper, classname: [:0]const u8) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn deleteLater(self: QVCandlestickModelMapper) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QVCandlestickModelMapper, interval: i32, timerType: i32) i32 {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QVCandlestickModelMapper, time: i64, timerType: i32) i32 {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QVCandlestickModelMapper, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QVCandlestickModelMapper, signal: [:0]const u8) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QVCandlestickModelMapper, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QVCandlestickModelMapper, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QVCandlestickModelMapper, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QVCandlestickModelMapper, param1: anytype) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, QObject) callconv(.c) void) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QVCandlestickModelMapper, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVCandlestickModelMapper_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QVCandlestickModelMapper, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVCandlestickModelMapper_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, QEvent) callconv(.c) bool) void {
        qtc.QVCandlestickModelMapper_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QVCandlestickModelMapper, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVCandlestickModelMapper_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QVCandlestickModelMapper, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVCandlestickModelMapper_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, QObject, QEvent) callconv(.c) bool) void {
        qtc.QVCandlestickModelMapper_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QVCandlestickModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QVCandlestickModelMapper_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QVCandlestickModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QVCandlestickModelMapper_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, QTimerEvent) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QVCandlestickModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QVCandlestickModelMapper_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QVCandlestickModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QVCandlestickModelMapper_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, QChildEvent) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QVCandlestickModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QVCandlestickModelMapper_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QVCandlestickModelMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QVCandlestickModelMapper_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, QEvent) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QVCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVCandlestickModelMapper_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QVCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVCandlestickModelMapper_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QVCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVCandlestickModelMapper_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QVCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVCandlestickModelMapper_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _timestamp: i32 `
    ///
    pub fn setTimestamp(self: QVCandlestickModelMapper, _timestamp: i32) void {
        qtc.QVCandlestickModelMapper_SetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _timestamp: i32 `
    ///
    pub fn superSetTimestamp(self: QVCandlestickModelMapper, _timestamp: i32) void {
        qtc.QVCandlestickModelMapper_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, timestamp: i32) callconv(.c) void `
    ///
    pub fn onSetTimestamp(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn timestamp(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_Timestamp(@ptrCast(self.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn superTimestamp(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SuperTimestamp(@ptrCast(self.ptr));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onTimestamp(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _open: i32 `
    ///
    pub fn setOpen(self: QVCandlestickModelMapper, _open: i32) void {
        qtc.QVCandlestickModelMapper_SetOpen(@ptrCast(self.ptr), @bitCast(_open));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _open: i32 `
    ///
    pub fn superSetOpen(self: QVCandlestickModelMapper, _open: i32) void {
        qtc.QVCandlestickModelMapper_SuperSetOpen(@ptrCast(self.ptr), @bitCast(_open));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, open: i32) callconv(.c) void `
    ///
    pub fn onSetOpen(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn open(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_Open(@ptrCast(self.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn superOpen(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SuperOpen(@ptrCast(self.ptr));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onOpen(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _high: i32 `
    ///
    pub fn setHigh(self: QVCandlestickModelMapper, _high: i32) void {
        qtc.QVCandlestickModelMapper_SetHigh(@ptrCast(self.ptr), @bitCast(_high));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _high: i32 `
    ///
    pub fn superSetHigh(self: QVCandlestickModelMapper, _high: i32) void {
        qtc.QVCandlestickModelMapper_SuperSetHigh(@ptrCast(self.ptr), @bitCast(_high));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, high: i32) callconv(.c) void `
    ///
    pub fn onSetHigh(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetHigh(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn high(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_High(@ptrCast(self.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn superHigh(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SuperHigh(@ptrCast(self.ptr));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onHigh(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnHigh(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _low: i32 `
    ///
    pub fn setLow(self: QVCandlestickModelMapper, _low: i32) void {
        qtc.QVCandlestickModelMapper_SetLow(@ptrCast(self.ptr), @bitCast(_low));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _low: i32 `
    ///
    pub fn superSetLow(self: QVCandlestickModelMapper, _low: i32) void {
        qtc.QVCandlestickModelMapper_SuperSetLow(@ptrCast(self.ptr), @bitCast(_low));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, low: i32) callconv(.c) void `
    ///
    pub fn onSetLow(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetLow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn low(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_Low(@ptrCast(self.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn superLow(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SuperLow(@ptrCast(self.ptr));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onLow(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnLow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _close: i32 `
    ///
    pub fn setClose(self: QVCandlestickModelMapper, _close: i32) void {
        qtc.QVCandlestickModelMapper_SetClose(@ptrCast(self.ptr), @bitCast(_close));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _close: i32 `
    ///
    pub fn superSetClose(self: QVCandlestickModelMapper, _close: i32) void {
        qtc.QVCandlestickModelMapper_SuperSetClose(@ptrCast(self.ptr), @bitCast(_close));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, close: i32) callconv(.c) void `
    ///
    pub fn onSetClose(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn close(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_Close(@ptrCast(self.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn superClose(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SuperClose(@ptrCast(self.ptr));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onClose(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _firstSetSection: i32 `
    ///
    pub fn setFirstSetSection(self: QVCandlestickModelMapper, _firstSetSection: i32) void {
        qtc.QVCandlestickModelMapper_SetFirstSetSection(@ptrCast(self.ptr), @bitCast(_firstSetSection));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _firstSetSection: i32 `
    ///
    pub fn superSetFirstSetSection(self: QVCandlestickModelMapper, _firstSetSection: i32) void {
        qtc.QVCandlestickModelMapper_SuperSetFirstSetSection(@ptrCast(self.ptr), @bitCast(_firstSetSection));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, firstSetSection: i32) callconv(.c) void `
    ///
    pub fn onSetFirstSetSection(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetFirstSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn firstSetSection(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_FirstSetSection(@ptrCast(self.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn superFirstSetSection(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SuperFirstSetSection(@ptrCast(self.ptr));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onFirstSetSection(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnFirstSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _lastSetSection: i32 `
    ///
    pub fn setLastSetSection(self: QVCandlestickModelMapper, _lastSetSection: i32) void {
        qtc.QVCandlestickModelMapper_SetLastSetSection(@ptrCast(self.ptr), @bitCast(_lastSetSection));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` _lastSetSection: i32 `
    ///
    pub fn superSetLastSetSection(self: QVCandlestickModelMapper, _lastSetSection: i32) void {
        qtc.QVCandlestickModelMapper_SuperSetLastSetSection(@ptrCast(self.ptr), @bitCast(_lastSetSection));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, lastSetSection: i32) callconv(.c) void `
    ///
    pub fn onSetLastSetSection(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetLastSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn lastSetSection(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_LastSetSection(@ptrCast(self.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn superLastSetSection(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SuperLastSetSection(@ptrCast(self.ptr));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onLastSetSection(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnLastSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn sender(self: QVCandlestickModelMapper) QObject {
        return .{ .ptr = qtc.QVCandlestickModelMapper_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn superSender(self: QVCandlestickModelMapper) QObject {
        return .{ .ptr = qtc.QVCandlestickModelMapper_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) QObject) void {
        qtc.QVCandlestickModelMapper_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn senderSignalIndex(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn superSenderSignalIndex(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QVCandlestickModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVCandlestickModelMapper_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QVCandlestickModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVCandlestickModelMapper_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, [*:0]const u8) callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QVCandlestickModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVCandlestickModelMapper_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QVCandlestickModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVCandlestickModelMapper_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVCandlestickModelMapper`
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, QMetaMethod) callconv(.c) bool) void {
        qtc.QVCandlestickModelMapper_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#dtor.QVCandlestickModelMapper)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn delete(self: QVCandlestickModelMapper) void {
        qtc.QVCandlestickModelMapper_Delete(@ptrCast(self.ptr));
    }
};
