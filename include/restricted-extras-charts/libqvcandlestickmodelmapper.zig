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

    /// New constructs a new QVCandlestickModelMapper object.
    ///
    pub fn New() QVCandlestickModelMapper {
        return .{ .ptr = qtc.QVCandlestickModelMapper_new() };
    }

    /// New2 constructs a new QVCandlestickModelMapper object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QVCandlestickModelMapper {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QVCandlestickModelMapper_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn MetaObject(self: QVCandlestickModelMapper) QMetaObject {
        return .{ .ptr = qtc.QVCandlestickModelMapper_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QVCandlestickModelMapper_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn SuperMetaObject(self: QVCandlestickModelMapper) QMetaObject {
        return .{ .ptr = qtc.QVCandlestickModelMapper_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QVCandlestickModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVCandlestickModelMapper_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QVCandlestickModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVCandlestickModelMapper_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QVCandlestickModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QVCandlestickModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVCandlestickModelMapper_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvcandlestickmodelmapper.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Orientation(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_Orientation(@ptrCast(self.ptr));
    }

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
    pub fn OnOrientation(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOrientation` instead
    ///
    pub const QBaseOrientation = SuperOrientation;

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
    pub fn SuperOrientation(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SuperOrientation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setTimestampRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` timestampRow: i32 `
    ///
    pub fn SetTimestampRow(self: QVCandlestickModelMapper, timestampRow: i32) void {
        qtc.QVCandlestickModelMapper_SetTimestampRow(@ptrCast(self.ptr), @bitCast(timestampRow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#timestampRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn TimestampRow(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_TimestampRow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setOpenRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` openRow: i32 `
    ///
    pub fn SetOpenRow(self: QVCandlestickModelMapper, openRow: i32) void {
        qtc.QVCandlestickModelMapper_SetOpenRow(@ptrCast(self.ptr), @bitCast(openRow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#openRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn OpenRow(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_OpenRow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setHighRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` highRow: i32 `
    ///
    pub fn SetHighRow(self: QVCandlestickModelMapper, highRow: i32) void {
        qtc.QVCandlestickModelMapper_SetHighRow(@ptrCast(self.ptr), @bitCast(highRow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#highRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn HighRow(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_HighRow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setLowRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` lowRow: i32 `
    ///
    pub fn SetLowRow(self: QVCandlestickModelMapper, lowRow: i32) void {
        qtc.QVCandlestickModelMapper_SetLowRow(@ptrCast(self.ptr), @bitCast(lowRow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lowRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn LowRow(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_LowRow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setCloseRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` closeRow: i32 `
    ///
    pub fn SetCloseRow(self: QVCandlestickModelMapper, closeRow: i32) void {
        qtc.QVCandlestickModelMapper_SetCloseRow(@ptrCast(self.ptr), @bitCast(closeRow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#closeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn CloseRow(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_CloseRow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setFirstSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` firstSetColumn: i32 `
    ///
    pub fn SetFirstSetColumn(self: QVCandlestickModelMapper, firstSetColumn: i32) void {
        qtc.QVCandlestickModelMapper_SetFirstSetColumn(@ptrCast(self.ptr), @bitCast(firstSetColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#firstSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn FirstSetColumn(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_FirstSetColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setLastSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` lastSetColumn: i32 `
    ///
    pub fn SetLastSetColumn(self: QVCandlestickModelMapper, lastSetColumn: i32) void {
        qtc.QVCandlestickModelMapper_SetLastSetColumn(@ptrCast(self.ptr), @bitCast(lastSetColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lastSetColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn LastSetColumn(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_LastSetColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#timestampRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn TimestampRowChanged(self: QVCandlestickModelMapper) void {
        qtc.QVCandlestickModelMapper_TimestampRowChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#timestampRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn OnTimestampRowChanged(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_TimestampRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#openRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn OpenRowChanged(self: QVCandlestickModelMapper) void {
        qtc.QVCandlestickModelMapper_OpenRowChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#openRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn OnOpenRowChanged(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_OpenRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#highRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn HighRowChanged(self: QVCandlestickModelMapper) void {
        qtc.QVCandlestickModelMapper_HighRowChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#highRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn OnHighRowChanged(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_HighRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lowRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn LowRowChanged(self: QVCandlestickModelMapper) void {
        qtc.QVCandlestickModelMapper_LowRowChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lowRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn OnLowRowChanged(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_LowRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#closeRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn CloseRowChanged(self: QVCandlestickModelMapper) void {
        qtc.QVCandlestickModelMapper_CloseRowChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#closeRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn OnCloseRowChanged(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_CloseRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#firstSetColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn FirstSetColumnChanged(self: QVCandlestickModelMapper) void {
        qtc.QVCandlestickModelMapper_FirstSetColumnChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#firstSetColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn OnFirstSetColumnChanged(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_FirstSetColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lastSetColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn LastSetColumnChanged(self: QVCandlestickModelMapper) void {
        qtc.QVCandlestickModelMapper_LastSetColumnChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lastSetColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QVCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn OnLastSetColumnChanged(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_LastSetColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvcandlestickmodelmapper.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvcandlestickmodelmapper.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SetModel(self: QVCandlestickModelMapper, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.QCandlestickModelMapper_SetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn Model(self: QVCandlestickModelMapper) QAbstractItemModel {
        return .{ .ptr = qtc.QCandlestickModelMapper_Model(@ptrCast(self.ptr)) };
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` series: QCandlestickSeries `
    ///
    pub fn SetSeries(self: QVCandlestickModelMapper, series: anytype) void {
        comptime _ = @TypeOf(series)._is_QCandlestickSeries;
        qtc.QCandlestickModelMapper_SetSeries(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn Series(self: QVCandlestickModelMapper) QCandlestickSeries {
        return .{ .ptr = qtc.QCandlestickModelMapper_Series(@ptrCast(self.ptr)) };
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn ModelReplaced(self: QVCandlestickModelMapper) void {
        qtc.QCandlestickModelMapper_ModelReplaced(@ptrCast(self.ptr));
    }

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
    pub fn OnModelReplaced(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_Connect_ModelReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn SeriesReplaced(self: QVCandlestickModelMapper) void {
        qtc.QCandlestickModelMapper_SeriesReplaced(@ptrCast(self.ptr));
    }

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
    pub fn OnSeriesReplaced(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_Connect_SeriesReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ObjectName(self: QVCandlestickModelMapper, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvcandlestickmodelmapper.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QVCandlestickModelMapper, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn IsWidgetType(self: QVCandlestickModelMapper) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn IsWindowType(self: QVCandlestickModelMapper) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn IsQuickItemType(self: QVCandlestickModelMapper) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn SignalsBlocked(self: QVCandlestickModelMapper) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QVCandlestickModelMapper, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn Thread(self: QVCandlestickModelMapper) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QVCandlestickModelMapper, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QVCandlestickModelMapper, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QVCandlestickModelMapper, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QVCandlestickModelMapper, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QVCandlestickModelMapper, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QVCandlestickModelMapper, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qvcandlestickmodelmapper.Children: Memory allocation failed");
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QVCandlestickModelMapper, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QVCandlestickModelMapper, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QVCandlestickModelMapper, obj: anytype) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QVCandlestickModelMapper, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn Disconnect3(self: QVCandlestickModelMapper) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QVCandlestickModelMapper, receiver: anytype) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn DumpObjectTree(self: QVCandlestickModelMapper) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn DumpObjectInfo(self: QVCandlestickModelMapper) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QVCandlestickModelMapper, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QVCandlestickModelMapper, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QVCandlestickModelMapper, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qvcandlestickmodelmapper.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qvcandlestickmodelmapper.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn BindingStorage(self: QVCandlestickModelMapper) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn BindingStorage2(self: QVCandlestickModelMapper) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn Destroyed(self: QVCandlestickModelMapper) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn Parent(self: QVCandlestickModelMapper) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QVCandlestickModelMapper, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn DeleteLater(self: QVCandlestickModelMapper) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QVCandlestickModelMapper, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QVCandlestickModelMapper, time: i64, timerType: i32) i32 {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QVCandlestickModelMapper, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QVCandlestickModelMapper, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QVCandlestickModelMapper, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QVCandlestickModelMapper, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QVCandlestickModelMapper, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QVCandlestickModelMapper, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, QObject) callconv(.c) void) void {
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QVCandlestickModelMapper, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVCandlestickModelMapper_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QVCandlestickModelMapper, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVCandlestickModelMapper_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, QEvent) callconv(.c) bool) void {
        qtc.QVCandlestickModelMapper_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QVCandlestickModelMapper, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVCandlestickModelMapper_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QVCandlestickModelMapper, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVCandlestickModelMapper_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, QObject, QEvent) callconv(.c) bool) void {
        qtc.QVCandlestickModelMapper_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QVCandlestickModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QVCandlestickModelMapper_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QVCandlestickModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QVCandlestickModelMapper_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, QTimerEvent) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QVCandlestickModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QVCandlestickModelMapper_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QVCandlestickModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QVCandlestickModelMapper_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, QChildEvent) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QVCandlestickModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QVCandlestickModelMapper_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QVCandlestickModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QVCandlestickModelMapper_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, QEvent) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QVCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVCandlestickModelMapper_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QVCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVCandlestickModelMapper_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QVCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVCandlestickModelMapper_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QVCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVCandlestickModelMapper_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` timestamp: i32 `
    ///
    pub fn SetTimestamp(self: QVCandlestickModelMapper, timestamp: i32) void {
        qtc.QVCandlestickModelMapper_SetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// ### DEPRECATED: Use `SuperSetTimestamp` instead
    ///
    pub const QBaseSetTimestamp = SuperSetTimestamp;

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
    /// ` timestamp: i32 `
    ///
    pub fn SuperSetTimestamp(self: QVCandlestickModelMapper, timestamp: i32) void {
        qtc.QVCandlestickModelMapper_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

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
    pub fn OnSetTimestamp(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Timestamp(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimestamp` instead
    ///
    pub const QBaseTimestamp = SuperTimestamp;

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
    pub fn SuperTimestamp(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SuperTimestamp(@ptrCast(self.ptr));
    }

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
    pub fn OnTimestamp(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` open: i32 `
    ///
    pub fn SetOpen(self: QVCandlestickModelMapper, open: i32) void {
        qtc.QVCandlestickModelMapper_SetOpen(@ptrCast(self.ptr), @bitCast(open));
    }

    /// ### DEPRECATED: Use `SuperSetOpen` instead
    ///
    pub const QBaseSetOpen = SuperSetOpen;

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
    /// ` open: i32 `
    ///
    pub fn SuperSetOpen(self: QVCandlestickModelMapper, open: i32) void {
        qtc.QVCandlestickModelMapper_SuperSetOpen(@ptrCast(self.ptr), @bitCast(open));
    }

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
    pub fn OnSetOpen(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Open(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_Open(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperOpen` instead
    ///
    pub const QBaseOpen = SuperOpen;

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
    pub fn SuperOpen(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SuperOpen(@ptrCast(self.ptr));
    }

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
    pub fn OnOpen(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` high: i32 `
    ///
    pub fn SetHigh(self: QVCandlestickModelMapper, high: i32) void {
        qtc.QVCandlestickModelMapper_SetHigh(@ptrCast(self.ptr), @bitCast(high));
    }

    /// ### DEPRECATED: Use `SuperSetHigh` instead
    ///
    pub const QBaseSetHigh = SuperSetHigh;

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
    /// ` high: i32 `
    ///
    pub fn SuperSetHigh(self: QVCandlestickModelMapper, high: i32) void {
        qtc.QVCandlestickModelMapper_SuperSetHigh(@ptrCast(self.ptr), @bitCast(high));
    }

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
    pub fn OnSetHigh(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetHigh(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn High(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_High(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperHigh` instead
    ///
    pub const QBaseHigh = SuperHigh;

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
    pub fn SuperHigh(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SuperHigh(@ptrCast(self.ptr));
    }

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
    pub fn OnHigh(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnHigh(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` low: i32 `
    ///
    pub fn SetLow(self: QVCandlestickModelMapper, low: i32) void {
        qtc.QVCandlestickModelMapper_SetLow(@ptrCast(self.ptr), @bitCast(low));
    }

    /// ### DEPRECATED: Use `SuperSetLow` instead
    ///
    pub const QBaseSetLow = SuperSetLow;

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
    /// ` low: i32 `
    ///
    pub fn SuperSetLow(self: QVCandlestickModelMapper, low: i32) void {
        qtc.QVCandlestickModelMapper_SuperSetLow(@ptrCast(self.ptr), @bitCast(low));
    }

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
    pub fn OnSetLow(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetLow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Low(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_Low(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperLow` instead
    ///
    pub const QBaseLow = SuperLow;

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
    pub fn SuperLow(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SuperLow(@ptrCast(self.ptr));
    }

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
    pub fn OnLow(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnLow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` close: i32 `
    ///
    pub fn SetClose(self: QVCandlestickModelMapper, close: i32) void {
        qtc.QVCandlestickModelMapper_SetClose(@ptrCast(self.ptr), @bitCast(close));
    }

    /// ### DEPRECATED: Use `SuperSetClose` instead
    ///
    pub const QBaseSetClose = SuperSetClose;

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
    /// ` close: i32 `
    ///
    pub fn SuperSetClose(self: QVCandlestickModelMapper, close: i32) void {
        qtc.QVCandlestickModelMapper_SuperSetClose(@ptrCast(self.ptr), @bitCast(close));
    }

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
    pub fn OnSetClose(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Close(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperClose` instead
    ///
    pub const QBaseClose = SuperClose;

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
    pub fn SuperClose(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SuperClose(@ptrCast(self.ptr));
    }

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
    pub fn OnClose(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` firstSetSection: i32 `
    ///
    pub fn SetFirstSetSection(self: QVCandlestickModelMapper, firstSetSection: i32) void {
        qtc.QVCandlestickModelMapper_SetFirstSetSection(@ptrCast(self.ptr), @bitCast(firstSetSection));
    }

    /// ### DEPRECATED: Use `SuperSetFirstSetSection` instead
    ///
    pub const QBaseSetFirstSetSection = SuperSetFirstSetSection;

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
    /// ` firstSetSection: i32 `
    ///
    pub fn SuperSetFirstSetSection(self: QVCandlestickModelMapper, firstSetSection: i32) void {
        qtc.QVCandlestickModelMapper_SuperSetFirstSetSection(@ptrCast(self.ptr), @bitCast(firstSetSection));
    }

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
    pub fn OnSetFirstSetSection(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetFirstSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn FirstSetSection(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_FirstSetSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperFirstSetSection` instead
    ///
    pub const QBaseFirstSetSection = SuperFirstSetSection;

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
    pub fn SuperFirstSetSection(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SuperFirstSetSection(@ptrCast(self.ptr));
    }

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
    pub fn OnFirstSetSection(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnFirstSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` lastSetSection: i32 `
    ///
    pub fn SetLastSetSection(self: QVCandlestickModelMapper, lastSetSection: i32) void {
        qtc.QVCandlestickModelMapper_SetLastSetSection(@ptrCast(self.ptr), @bitCast(lastSetSection));
    }

    /// ### DEPRECATED: Use `SuperSetLastSetSection` instead
    ///
    pub const QBaseSetLastSetSection = SuperSetLastSetSection;

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
    /// ` lastSetSection: i32 `
    ///
    pub fn SuperSetLastSetSection(self: QVCandlestickModelMapper, lastSetSection: i32) void {
        qtc.QVCandlestickModelMapper_SuperSetLastSetSection(@ptrCast(self.ptr), @bitCast(lastSetSection));
    }

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
    pub fn OnSetLastSetSection(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_OnSetLastSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn LastSetSection(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_LastSetSection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperLastSetSection` instead
    ///
    pub const QBaseLastSetSection = SuperLastSetSection;

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
    pub fn SuperLastSetSection(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SuperLastSetSection(@ptrCast(self.ptr));
    }

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
    pub fn OnLastSetSection(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnLastSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QVCandlestickModelMapper) QObject {
        return .{ .ptr = qtc.QVCandlestickModelMapper_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn SuperSender(self: QVCandlestickModelMapper) QObject {
        return .{ .ptr = qtc.QVCandlestickModelMapper_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) QObject) void {
        qtc.QVCandlestickModelMapper_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn SuperSenderSignalIndex(self: QVCandlestickModelMapper) i32 {
        return qtc.QVCandlestickModelMapper_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QVCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QVCandlestickModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVCandlestickModelMapper_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QVCandlestickModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVCandlestickModelMapper_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, [*:0]const u8) callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QVCandlestickModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVCandlestickModelMapper_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QVCandlestickModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVCandlestickModelMapper_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, QMetaMethod) callconv(.c) bool) void {
        qtc.QVCandlestickModelMapper_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QVCandlestickModelMapper, callback: *const fn (QVCandlestickModelMapper, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#dtor.QVCandlestickModelMapper)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QVCandlestickModelMapper `
    ///
    pub fn Delete(self: QVCandlestickModelMapper) void {
        qtc.QVCandlestickModelMapper_Delete(@ptrCast(self.ptr));
    }
};
