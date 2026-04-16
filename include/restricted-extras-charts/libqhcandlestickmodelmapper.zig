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

    /// New constructs a new QHCandlestickModelMapper object.
    ///
    pub fn New() QHCandlestickModelMapper {
        return .{ .ptr = qtc.QHCandlestickModelMapper_new() };
    }

    /// New2 constructs a new QHCandlestickModelMapper object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QHCandlestickModelMapper {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QHCandlestickModelMapper_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn MetaObject(self: QHCandlestickModelMapper) QMetaObject {
        return .{ .ptr = qtc.QHCandlestickModelMapper_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QHCandlestickModelMapper_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn SuperMetaObject(self: QHCandlestickModelMapper) QMetaObject {
        return .{ .ptr = qtc.QHCandlestickModelMapper_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QHCandlestickModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHCandlestickModelMapper_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QHCandlestickModelMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHCandlestickModelMapper_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QHCandlestickModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QHCandlestickModelMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHCandlestickModelMapper_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhcandlestickmodelmapper.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Orientation(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_Orientation(@ptrCast(self.ptr));
    }

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
    pub fn OnOrientation(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOrientation` instead
    ///
    pub const QBaseOrientation = SuperOrientation;

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
    pub fn SuperOrientation(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SuperOrientation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setTimestampColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` timestampColumn: i32 `
    ///
    pub fn SetTimestampColumn(self: QHCandlestickModelMapper, timestampColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetTimestampColumn(@ptrCast(self.ptr), @bitCast(timestampColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#timestampColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn TimestampColumn(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_TimestampColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setOpenColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` openColumn: i32 `
    ///
    pub fn SetOpenColumn(self: QHCandlestickModelMapper, openColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetOpenColumn(@ptrCast(self.ptr), @bitCast(openColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#openColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn OpenColumn(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_OpenColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setHighColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` highColumn: i32 `
    ///
    pub fn SetHighColumn(self: QHCandlestickModelMapper, highColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetHighColumn(@ptrCast(self.ptr), @bitCast(highColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#highColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn HighColumn(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_HighColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setLowColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` lowColumn: i32 `
    ///
    pub fn SetLowColumn(self: QHCandlestickModelMapper, lowColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetLowColumn(@ptrCast(self.ptr), @bitCast(lowColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lowColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn LowColumn(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_LowColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setCloseColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` closeColumn: i32 `
    ///
    pub fn SetCloseColumn(self: QHCandlestickModelMapper, closeColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetCloseColumn(@ptrCast(self.ptr), @bitCast(closeColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#closeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn CloseColumn(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_CloseColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setFirstSetRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` firstSetRow: i32 `
    ///
    pub fn SetFirstSetRow(self: QHCandlestickModelMapper, firstSetRow: i32) void {
        qtc.QHCandlestickModelMapper_SetFirstSetRow(@ptrCast(self.ptr), @bitCast(firstSetRow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#firstSetRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn FirstSetRow(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_FirstSetRow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setLastSetRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` lastSetRow: i32 `
    ///
    pub fn SetLastSetRow(self: QHCandlestickModelMapper, lastSetRow: i32) void {
        qtc.QHCandlestickModelMapper_SetLastSetRow(@ptrCast(self.ptr), @bitCast(lastSetRow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lastSetRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn LastSetRow(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_LastSetRow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#timestampColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn TimestampColumnChanged(self: QHCandlestickModelMapper) void {
        qtc.QHCandlestickModelMapper_TimestampColumnChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#timestampColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn OnTimestampColumnChanged(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_TimestampColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#openColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn OpenColumnChanged(self: QHCandlestickModelMapper) void {
        qtc.QHCandlestickModelMapper_OpenColumnChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#openColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn OnOpenColumnChanged(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_OpenColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#highColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn HighColumnChanged(self: QHCandlestickModelMapper) void {
        qtc.QHCandlestickModelMapper_HighColumnChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#highColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn OnHighColumnChanged(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_HighColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lowColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn LowColumnChanged(self: QHCandlestickModelMapper) void {
        qtc.QHCandlestickModelMapper_LowColumnChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lowColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn OnLowColumnChanged(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_LowColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#closeColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn CloseColumnChanged(self: QHCandlestickModelMapper) void {
        qtc.QHCandlestickModelMapper_CloseColumnChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#closeColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn OnCloseColumnChanged(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_CloseColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#firstSetRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn FirstSetRowChanged(self: QHCandlestickModelMapper) void {
        qtc.QHCandlestickModelMapper_FirstSetRowChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#firstSetRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn OnFirstSetRowChanged(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_FirstSetRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lastSetRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn LastSetRowChanged(self: QHCandlestickModelMapper) void {
        qtc.QHCandlestickModelMapper_LastSetRowChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lastSetRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` callback: *const fn (self: QHCandlestickModelMapper) callconv(.c) void `
    ///
    pub fn OnLastSetRowChanged(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_LastSetRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhcandlestickmodelmapper.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhcandlestickmodelmapper.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SetModel(self: QHCandlestickModelMapper, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.QCandlestickModelMapper_SetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn Model(self: QHCandlestickModelMapper) QAbstractItemModel {
        return .{ .ptr = qtc.QCandlestickModelMapper_Model(@ptrCast(self.ptr)) };
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` series: QCandlestickSeries `
    ///
    pub fn SetSeries(self: QHCandlestickModelMapper, series: anytype) void {
        comptime _ = @TypeOf(series)._is_QCandlestickSeries;
        qtc.QCandlestickModelMapper_SetSeries(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn Series(self: QHCandlestickModelMapper) QCandlestickSeries {
        return .{ .ptr = qtc.QCandlestickModelMapper_Series(@ptrCast(self.ptr)) };
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn ModelReplaced(self: QHCandlestickModelMapper) void {
        qtc.QCandlestickModelMapper_ModelReplaced(@ptrCast(self.ptr));
    }

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
    pub fn OnModelReplaced(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_Connect_ModelReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QCandlestickModelMapper
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn SeriesReplaced(self: QHCandlestickModelMapper) void {
        qtc.QCandlestickModelMapper_SeriesReplaced(@ptrCast(self.ptr));
    }

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
    pub fn OnSeriesReplaced(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_Connect_SeriesReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ObjectName(self: QHCandlestickModelMapper, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhcandlestickmodelmapper.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QHCandlestickModelMapper, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn IsWidgetType(self: QHCandlestickModelMapper) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn IsWindowType(self: QHCandlestickModelMapper) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn IsQuickItemType(self: QHCandlestickModelMapper) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn SignalsBlocked(self: QHCandlestickModelMapper) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QHCandlestickModelMapper, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn Thread(self: QHCandlestickModelMapper) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QHCandlestickModelMapper, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QHCandlestickModelMapper, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QHCandlestickModelMapper, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QHCandlestickModelMapper, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QHCandlestickModelMapper, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QHCandlestickModelMapper, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qhcandlestickmodelmapper.Children: Memory allocation failed");
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QHCandlestickModelMapper, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QHCandlestickModelMapper, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QHCandlestickModelMapper, obj: anytype) void {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QHCandlestickModelMapper, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn Disconnect3(self: QHCandlestickModelMapper) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QHCandlestickModelMapper, receiver: anytype) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn DumpObjectTree(self: QHCandlestickModelMapper) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn DumpObjectInfo(self: QHCandlestickModelMapper) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QHCandlestickModelMapper, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QHCandlestickModelMapper, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QHCandlestickModelMapper, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qhcandlestickmodelmapper.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qhcandlestickmodelmapper.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn BindingStorage(self: QHCandlestickModelMapper) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn BindingStorage2(self: QHCandlestickModelMapper) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn Destroyed(self: QHCandlestickModelMapper) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn Parent(self: QHCandlestickModelMapper) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QHCandlestickModelMapper, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn DeleteLater(self: QHCandlestickModelMapper) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QHCandlestickModelMapper, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QHCandlestickModelMapper, time: i64, timerType: i32) i32 {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QHCandlestickModelMapper, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QHCandlestickModelMapper, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QHCandlestickModelMapper, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QHCandlestickModelMapper, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QHCandlestickModelMapper, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QHCandlestickModelMapper, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, QObject) callconv(.c) void) void {
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QHCandlestickModelMapper, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHCandlestickModelMapper_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QHCandlestickModelMapper, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHCandlestickModelMapper_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, QEvent) callconv(.c) bool) void {
        qtc.QHCandlestickModelMapper_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QHCandlestickModelMapper, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHCandlestickModelMapper_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QHCandlestickModelMapper, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHCandlestickModelMapper_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, QObject, QEvent) callconv(.c) bool) void {
        qtc.QHCandlestickModelMapper_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QHCandlestickModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QHCandlestickModelMapper_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QHCandlestickModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QHCandlestickModelMapper_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, QTimerEvent) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QHCandlestickModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QHCandlestickModelMapper_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QHCandlestickModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QHCandlestickModelMapper_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, QChildEvent) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QHCandlestickModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QHCandlestickModelMapper_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QHCandlestickModelMapper, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QHCandlestickModelMapper_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, QEvent) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QHCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHCandlestickModelMapper_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QHCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHCandlestickModelMapper_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QHCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHCandlestickModelMapper_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QHCandlestickModelMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHCandlestickModelMapper_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` timestamp: i32 `
    ///
    pub fn SetTimestamp(self: QHCandlestickModelMapper, timestamp: i32) void {
        qtc.QHCandlestickModelMapper_SetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` timestamp: i32 `
    ///
    pub fn SuperSetTimestamp(self: QHCandlestickModelMapper, timestamp: i32) void {
        qtc.QHCandlestickModelMapper_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

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
    pub fn OnSetTimestamp(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Timestamp(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_Timestamp(@ptrCast(self.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn SuperTimestamp(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SuperTimestamp(@ptrCast(self.ptr));
    }

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
    pub fn OnTimestamp(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` open: i32 `
    ///
    pub fn SetOpen(self: QHCandlestickModelMapper, open: i32) void {
        qtc.QHCandlestickModelMapper_SetOpen(@ptrCast(self.ptr), @bitCast(open));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` open: i32 `
    ///
    pub fn SuperSetOpen(self: QHCandlestickModelMapper, open: i32) void {
        qtc.QHCandlestickModelMapper_SuperSetOpen(@ptrCast(self.ptr), @bitCast(open));
    }

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
    pub fn OnSetOpen(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Open(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_Open(@ptrCast(self.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn SuperOpen(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SuperOpen(@ptrCast(self.ptr));
    }

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
    pub fn OnOpen(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` high: i32 `
    ///
    pub fn SetHigh(self: QHCandlestickModelMapper, high: i32) void {
        qtc.QHCandlestickModelMapper_SetHigh(@ptrCast(self.ptr), @bitCast(high));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` high: i32 `
    ///
    pub fn SuperSetHigh(self: QHCandlestickModelMapper, high: i32) void {
        qtc.QHCandlestickModelMapper_SuperSetHigh(@ptrCast(self.ptr), @bitCast(high));
    }

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
    pub fn OnSetHigh(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetHigh(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn High(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_High(@ptrCast(self.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn SuperHigh(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SuperHigh(@ptrCast(self.ptr));
    }

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
    pub fn OnHigh(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnHigh(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` low: i32 `
    ///
    pub fn SetLow(self: QHCandlestickModelMapper, low: i32) void {
        qtc.QHCandlestickModelMapper_SetLow(@ptrCast(self.ptr), @bitCast(low));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` low: i32 `
    ///
    pub fn SuperSetLow(self: QHCandlestickModelMapper, low: i32) void {
        qtc.QHCandlestickModelMapper_SuperSetLow(@ptrCast(self.ptr), @bitCast(low));
    }

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
    pub fn OnSetLow(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetLow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Low(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_Low(@ptrCast(self.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn SuperLow(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SuperLow(@ptrCast(self.ptr));
    }

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
    pub fn OnLow(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnLow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` close: i32 `
    ///
    pub fn SetClose(self: QHCandlestickModelMapper, close: i32) void {
        qtc.QHCandlestickModelMapper_SetClose(@ptrCast(self.ptr), @bitCast(close));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` close: i32 `
    ///
    pub fn SuperSetClose(self: QHCandlestickModelMapper, close: i32) void {
        qtc.QHCandlestickModelMapper_SuperSetClose(@ptrCast(self.ptr), @bitCast(close));
    }

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
    pub fn OnSetClose(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Close(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_Close(@ptrCast(self.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn SuperClose(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SuperClose(@ptrCast(self.ptr));
    }

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
    pub fn OnClose(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` firstSetSection: i32 `
    ///
    pub fn SetFirstSetSection(self: QHCandlestickModelMapper, firstSetSection: i32) void {
        qtc.QHCandlestickModelMapper_SetFirstSetSection(@ptrCast(self.ptr), @bitCast(firstSetSection));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` firstSetSection: i32 `
    ///
    pub fn SuperSetFirstSetSection(self: QHCandlestickModelMapper, firstSetSection: i32) void {
        qtc.QHCandlestickModelMapper_SuperSetFirstSetSection(@ptrCast(self.ptr), @bitCast(firstSetSection));
    }

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
    pub fn OnSetFirstSetSection(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetFirstSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn FirstSetSection(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_FirstSetSection(@ptrCast(self.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn SuperFirstSetSection(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SuperFirstSetSection(@ptrCast(self.ptr));
    }

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
    pub fn OnFirstSetSection(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnFirstSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` lastSetSection: i32 `
    ///
    pub fn SetLastSetSection(self: QHCandlestickModelMapper, lastSetSection: i32) void {
        qtc.QHCandlestickModelMapper_SetLastSetSection(@ptrCast(self.ptr), @bitCast(lastSetSection));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` lastSetSection: i32 `
    ///
    pub fn SuperSetLastSetSection(self: QHCandlestickModelMapper, lastSetSection: i32) void {
        qtc.QHCandlestickModelMapper_SuperSetLastSetSection(@ptrCast(self.ptr), @bitCast(lastSetSection));
    }

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
    pub fn OnSetLastSetSection(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, i32) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_OnSetLastSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn LastSetSection(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_LastSetSection(@ptrCast(self.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn SuperLastSetSection(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SuperLastSetSection(@ptrCast(self.ptr));
    }

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
    pub fn OnLastSetSection(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnLastSetSection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QHCandlestickModelMapper) QObject {
        return .{ .ptr = qtc.QHCandlestickModelMapper_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn SuperSender(self: QHCandlestickModelMapper) QObject {
        return .{ .ptr = qtc.QHCandlestickModelMapper_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) QObject) void {
        qtc.QHCandlestickModelMapper_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn SuperSenderSignalIndex(self: QHCandlestickModelMapper) i32 {
        return qtc.QHCandlestickModelMapper_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QHCandlestickModelMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QHCandlestickModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHCandlestickModelMapper_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QHCandlestickModelMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHCandlestickModelMapper_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, [*:0]const u8) callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QHCandlestickModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHCandlestickModelMapper_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHCandlestickModelMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QHCandlestickModelMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHCandlestickModelMapper_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, QMetaMethod) callconv(.c) bool) void {
        qtc.QHCandlestickModelMapper_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QHCandlestickModelMapper, callback: *const fn (QHCandlestickModelMapper, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#dtor.QHCandlestickModelMapper)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QHCandlestickModelMapper `
    ///
    pub fn Delete(self: QHCandlestickModelMapper) void {
        qtc.QHCandlestickModelMapper_Delete(@ptrCast(self.ptr));
    }
};
