const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBrush = @import("libqt6").QBrush;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPen = @import("libqt6").QPen;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html)
pub const QCandlestickSet = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCandlestickSet,

    pub const _is_QCandlestickSet = {};
    pub const _is_QObject = {};

    /// New constructs a new QCandlestickSet object.
    ///
    pub fn New() QCandlestickSet {
        return .{ .ptr = qtc.QCandlestickSet_new() };
    }

    /// New2 constructs a new QCandlestickSet object.
    ///
    /// ## Parameter(s):
    ///
    /// ` open: f64 `
    ///
    /// ` high: f64 `
    ///
    /// ` low: f64 `
    ///
    /// ` close: f64 `
    ///
    pub fn New2(open: f64, high: f64, low: f64, close: f64) QCandlestickSet {
        return .{ .ptr = qtc.QCandlestickSet_new2(@bitCast(open), @bitCast(high), @bitCast(low), @bitCast(close)) };
    }

    /// New3 constructs a new QCandlestickSet object.
    ///
    /// ## Parameter(s):
    ///
    /// ` timestamp: f64 `
    ///
    pub fn New3(timestamp: f64) QCandlestickSet {
        return .{ .ptr = qtc.QCandlestickSet_new3(@bitCast(timestamp)) };
    }

    /// New4 constructs a new QCandlestickSet object.
    ///
    /// ## Parameter(s):
    ///
    /// ` timestamp: f64 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(timestamp: f64, parent: anytype) QCandlestickSet {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QCandlestickSet_new4(@bitCast(timestamp), @ptrCast(parent.ptr)) };
    }

    /// New5 constructs a new QCandlestickSet object.
    ///
    /// ## Parameter(s):
    ///
    /// ` open: f64 `
    ///
    /// ` high: f64 `
    ///
    /// ` low: f64 `
    ///
    /// ` close: f64 `
    ///
    /// ` timestamp: f64 `
    ///
    pub fn New5(open: f64, high: f64, low: f64, close: f64, timestamp: f64) QCandlestickSet {
        return .{ .ptr = qtc.QCandlestickSet_new5(@bitCast(open), @bitCast(high), @bitCast(low), @bitCast(close), @bitCast(timestamp)) };
    }

    /// New6 constructs a new QCandlestickSet object.
    ///
    /// ## Parameter(s):
    ///
    /// ` open: f64 `
    ///
    /// ` high: f64 `
    ///
    /// ` low: f64 `
    ///
    /// ` close: f64 `
    ///
    /// ` timestamp: f64 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New6(open: f64, high: f64, low: f64, close: f64, timestamp: f64, parent: anytype) QCandlestickSet {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QCandlestickSet_new6(@bitCast(open), @bitCast(high), @bitCast(low), @bitCast(close), @bitCast(timestamp), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn MetaObject(self: QCandlestickSet) QMetaObject {
        return .{ .ptr = qtc.QCandlestickSet_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QCandlestickSet, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QCandlestickSet_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSet `
    ///
    pub fn SuperMetaObject(self: QCandlestickSet) QMetaObject {
        return .{ .ptr = qtc.QCandlestickSet_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QCandlestickSet, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCandlestickSet_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QCandlestickSet, callback: *const fn (QCandlestickSet, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QCandlestickSet_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QCandlestickSet, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCandlestickSet_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QCandlestickSet, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCandlestickSet_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QCandlestickSet, callback: *const fn (QCandlestickSet, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QCandlestickSet_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QCandlestickSet, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCandlestickSet_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickset.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` timestamp: f64 `
    ///
    pub fn SetTimestamp(self: QCandlestickSet, timestamp: f64) void {
        qtc.QCandlestickSet_SetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn Timestamp(self: QCandlestickSet) f64 {
        return qtc.QCandlestickSet_Timestamp(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` open: f64 `
    ///
    pub fn SetOpen(self: QCandlestickSet, open: f64) void {
        qtc.QCandlestickSet_SetOpen(@ptrCast(self.ptr), @bitCast(open));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn Open(self: QCandlestickSet) f64 {
        return qtc.QCandlestickSet_Open(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setHigh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` high: f64 `
    ///
    pub fn SetHigh(self: QCandlestickSet, high: f64) void {
        qtc.QCandlestickSet_SetHigh(@ptrCast(self.ptr), @bitCast(high));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#high)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn High(self: QCandlestickSet) f64 {
        return qtc.QCandlestickSet_High(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setLow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` low: f64 `
    ///
    pub fn SetLow(self: QCandlestickSet, low: f64) void {
        qtc.QCandlestickSet_SetLow(@ptrCast(self.ptr), @bitCast(low));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#low)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn Low(self: QCandlestickSet) f64 {
        return qtc.QCandlestickSet_Low(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` close: f64 `
    ///
    pub fn SetClose(self: QCandlestickSet, close: f64) void {
        qtc.QCandlestickSet_SetClose(@ptrCast(self.ptr), @bitCast(close));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn Close(self: QCandlestickSet) f64 {
        return qtc.QCandlestickSet_Close(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBrush(self: QCandlestickSet, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QCandlestickSet_SetBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn Brush(self: QCandlestickSet) QBrush {
        return .{ .ptr = qtc.QCandlestickSet_Brush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetPen(self: QCandlestickSet, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QCandlestickSet_SetPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn Pen(self: QCandlestickSet) QPen {
        return .{ .ptr = qtc.QCandlestickSet_Pen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn Clicked(self: QCandlestickSet) void {
        qtc.QCandlestickSet_Clicked(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn OnClicked(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` status: bool `
    ///
    pub fn Hovered(self: QCandlestickSet, status: bool) void {
        qtc.QCandlestickSet_Hovered(@ptrCast(self.ptr), status);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet, status: bool) callconv(.c) void `
    ///
    pub fn OnHovered(self: QCandlestickSet, callback: *const fn (QCandlestickSet, bool) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn Pressed(self: QCandlestickSet) void {
        qtc.QCandlestickSet_Pressed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn OnPressed(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn Released(self: QCandlestickSet) void {
        qtc.QCandlestickSet_Released(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn OnReleased(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn DoubleClicked(self: QCandlestickSet) void {
        qtc.QCandlestickSet_DoubleClicked(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#timestampChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn TimestampChanged(self: QCandlestickSet) void {
        qtc.QCandlestickSet_TimestampChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#timestampChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn OnTimestampChanged(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_TimestampChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#openChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn OpenChanged(self: QCandlestickSet) void {
        qtc.QCandlestickSet_OpenChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#openChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn OnOpenChanged(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_OpenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#highChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn HighChanged(self: QCandlestickSet) void {
        qtc.QCandlestickSet_HighChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#highChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn OnHighChanged(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_HighChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#lowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn LowChanged(self: QCandlestickSet) void {
        qtc.QCandlestickSet_LowChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#lowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn OnLowChanged(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_LowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#closeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn CloseChanged(self: QCandlestickSet) void {
        qtc.QCandlestickSet_CloseChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#closeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn OnCloseChanged(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_CloseChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#brushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn BrushChanged(self: QCandlestickSet) void {
        qtc.QCandlestickSet_BrushChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#brushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn OnBrushChanged(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_BrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn PenChanged(self: QCandlestickSet) void {
        qtc.QCandlestickSet_PenChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn OnPenChanged(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_PenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickset.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickset.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QCandlestickSet, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickset.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QCandlestickSet, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn IsWidgetType(self: QCandlestickSet) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn IsWindowType(self: QCandlestickSet) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn IsQuickItemType(self: QCandlestickSet) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn SignalsBlocked(self: QCandlestickSet) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QCandlestickSet, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn Thread(self: QCandlestickSet) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QCandlestickSet, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QCandlestickSet, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QCandlestickSet, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QCandlestickSet, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QCandlestickSet, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QCandlestickSet, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qcandlestickset.Children: Memory allocation failed");
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
    /// ` self: QCandlestickSet `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QCandlestickSet, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QCandlestickSet, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QCandlestickSet, obj: anytype) void {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QCandlestickSet, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QCandlestickSet `
    ///
    pub fn Disconnect3(self: QCandlestickSet) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QCandlestickSet, receiver: anytype) bool {
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
    /// ` self: QCandlestickSet `
    ///
    pub fn DumpObjectTree(self: QCandlestickSet) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn DumpObjectInfo(self: QCandlestickSet) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QCandlestickSet, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QCandlestickSet, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QCandlestickSet, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qcandlestickset.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcandlestickset.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QCandlestickSet `
    ///
    pub fn BindingStorage(self: QCandlestickSet) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn BindingStorage2(self: QCandlestickSet) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn Destroyed(self: QCandlestickSet) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn Parent(self: QCandlestickSet) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QCandlestickSet, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn DeleteLater(self: QCandlestickSet) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QCandlestickSet, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QCandlestickSet, time: i64, timerType: i32) i32 {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QCandlestickSet, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QCandlestickSet, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QCandlestickSet, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QCandlestickSet, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QCandlestickSet, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QCandlestickSet, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QCandlestickSet, callback: *const fn (QCandlestickSet, QObject) callconv(.c) void) void {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QCandlestickSet, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCandlestickSet_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QCandlestickSet, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCandlestickSet_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn (self: QCandlestickSet, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QCandlestickSet, callback: *const fn (QCandlestickSet, QEvent) callconv(.c) bool) void {
        qtc.QCandlestickSet_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QCandlestickSet, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCandlestickSet_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QCandlestickSet, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCandlestickSet_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn (self: QCandlestickSet, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QCandlestickSet, callback: *const fn (QCandlestickSet, QObject, QEvent) callconv(.c) bool) void {
        qtc.QCandlestickSet_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QCandlestickSet, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QCandlestickSet_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QCandlestickSet, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QCandlestickSet_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn (self: QCandlestickSet, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QCandlestickSet, callback: *const fn (QCandlestickSet, QTimerEvent) callconv(.c) void) void {
        qtc.QCandlestickSet_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QCandlestickSet, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QCandlestickSet_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QCandlestickSet, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QCandlestickSet_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn (self: QCandlestickSet, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QCandlestickSet, callback: *const fn (QCandlestickSet, QChildEvent) callconv(.c) void) void {
        qtc.QCandlestickSet_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QCandlestickSet, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QCandlestickSet_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QCandlestickSet, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QCandlestickSet_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn (self: QCandlestickSet, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QCandlestickSet, callback: *const fn (QCandlestickSet, QEvent) callconv(.c) void) void {
        qtc.QCandlestickSet_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QCandlestickSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickSet_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QCandlestickSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickSet_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn (self: QCandlestickSet, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QCandlestickSet, callback: *const fn (QCandlestickSet, QMetaMethod) callconv(.c) void) void {
        qtc.QCandlestickSet_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QCandlestickSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickSet_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QCandlestickSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickSet_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn (self: QCandlestickSet, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QCandlestickSet, callback: *const fn (QCandlestickSet, QMetaMethod) callconv(.c) void) void {
        qtc.QCandlestickSet_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn Sender(self: QCandlestickSet) QObject {
        return .{ .ptr = qtc.QCandlestickSet_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QCandlestickSet `
    ///
    pub fn SuperSender(self: QCandlestickSet) QObject {
        return .{ .ptr = qtc.QCandlestickSet_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QCandlestickSet, callback: *const fn () callconv(.c) QObject) void {
        qtc.QCandlestickSet_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn SenderSignalIndex(self: QCandlestickSet) i32 {
        return qtc.QCandlestickSet_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCandlestickSet `
    ///
    pub fn SuperSenderSignalIndex(self: QCandlestickSet) i32 {
        return qtc.QCandlestickSet_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QCandlestickSet, callback: *const fn () callconv(.c) i32) void {
        qtc.QCandlestickSet_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QCandlestickSet, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCandlestickSet_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QCandlestickSet, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCandlestickSet_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn (self: QCandlestickSet, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QCandlestickSet, callback: *const fn (QCandlestickSet, [*:0]const u8) callconv(.c) i32) void {
        qtc.QCandlestickSet_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QCandlestickSet, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCandlestickSet_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QCandlestickSet, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCandlestickSet_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn (self: QCandlestickSet, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QCandlestickSet, callback: *const fn (QCandlestickSet, QMetaMethod) callconv(.c) bool) void {
        qtc.QCandlestickSet_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QCandlestickSet, callback: *const fn (QCandlestickSet, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#dtor.QCandlestickSet)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn Delete(self: QCandlestickSet) void {
        qtc.QCandlestickSet_Delete(@ptrCast(self.ptr));
    }
};
