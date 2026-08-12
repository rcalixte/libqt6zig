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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCandlestickSet object in C++ memory
    ///
    pub fn new() QCandlestickSet {
        return .{ .ptr = qtc.QCandlestickSet_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCandlestickSet object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _open: f64 `
    ///
    /// ` _high: f64 `
    ///
    /// ` _low: f64 `
    ///
    /// ` _close: f64 `
    ///
    pub fn new2(_open: f64, _high: f64, _low: f64, _close: f64) QCandlestickSet {
        return .{ .ptr = qtc.QCandlestickSet_new2(@bitCast(_open), @bitCast(_high), @bitCast(_low), @bitCast(_close)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCandlestickSet object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _timestamp: f64 `
    ///
    pub fn new3(_timestamp: f64) QCandlestickSet {
        return .{ .ptr = qtc.QCandlestickSet_new3(@bitCast(_timestamp)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QCandlestickSet object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _timestamp: f64 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_timestamp: f64, _parent: anytype) QCandlestickSet {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QCandlestickSet_new4(@bitCast(_timestamp), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QCandlestickSet object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _open: f64 `
    ///
    /// ` _high: f64 `
    ///
    /// ` _low: f64 `
    ///
    /// ` _close: f64 `
    ///
    /// ` _timestamp: f64 `
    ///
    pub fn new5(_open: f64, _high: f64, _low: f64, _close: f64, _timestamp: f64) QCandlestickSet {
        return .{ .ptr = qtc.QCandlestickSet_new5(@bitCast(_open), @bitCast(_high), @bitCast(_low), @bitCast(_close), @bitCast(_timestamp)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QCandlestickSet object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _open: f64 `
    ///
    /// ` _high: f64 `
    ///
    /// ` _low: f64 `
    ///
    /// ` _close: f64 `
    ///
    /// ` _timestamp: f64 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new6(_open: f64, _high: f64, _low: f64, _close: f64, _timestamp: f64, _parent: anytype) QCandlestickSet {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QCandlestickSet_new6(@bitCast(_open), @bitCast(_high), @bitCast(_low), @bitCast(_close), @bitCast(_timestamp), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn metaObject(self: QCandlestickSet) QMetaObject {
        return .{ .ptr = qtc.QCandlestickSet_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QCandlestickSet, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QCandlestickSet_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSet `
    ///
    pub fn superMetaObject(self: QCandlestickSet) QMetaObject {
        return .{ .ptr = qtc.QCandlestickSet_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QCandlestickSet, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCandlestickSet_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QCandlestickSet, callback: *const fn (QCandlestickSet, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QCandlestickSet_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QCandlestickSet, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCandlestickSet_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QCandlestickSet, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCandlestickSet_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QCandlestickSet, callback: *const fn (QCandlestickSet, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QCandlestickSet_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QCandlestickSet, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCandlestickSet_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCandlestickSet.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` _timestamp: f64 `
    ///
    pub fn setTimestamp(self: QCandlestickSet, _timestamp: f64) void {
        qtc.QCandlestickSet_SetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn timestamp(self: QCandlestickSet) f64 {
        return qtc.QCandlestickSet_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpen` instead
    ///
    pub const SetOpen = setOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` _open: f64 `
    ///
    pub fn setOpen(self: QCandlestickSet, _open: f64) void {
        qtc.QCandlestickSet_SetOpen(@ptrCast(self.ptr), @bitCast(_open));
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn open(self: QCandlestickSet) f64 {
        return qtc.QCandlestickSet_Open(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHigh` instead
    ///
    pub const SetHigh = setHigh;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setHigh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` _high: f64 `
    ///
    pub fn setHigh(self: QCandlestickSet, _high: f64) void {
        qtc.QCandlestickSet_SetHigh(@ptrCast(self.ptr), @bitCast(_high));
    }

    /// ### DEPRECATED: Use `high` instead
    ///
    pub const High = high;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#high)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn high(self: QCandlestickSet) f64 {
        return qtc.QCandlestickSet_High(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLow` instead
    ///
    pub const SetLow = setLow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setLow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` _low: f64 `
    ///
    pub fn setLow(self: QCandlestickSet, _low: f64) void {
        qtc.QCandlestickSet_SetLow(@ptrCast(self.ptr), @bitCast(_low));
    }

    /// ### DEPRECATED: Use `low` instead
    ///
    pub const Low = low;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#low)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn low(self: QCandlestickSet) f64 {
        return qtc.QCandlestickSet_Low(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setClose` instead
    ///
    pub const SetClose = setClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` _close: f64 `
    ///
    pub fn setClose(self: QCandlestickSet, _close: f64) void {
        qtc.QCandlestickSet_SetClose(@ptrCast(self.ptr), @bitCast(_close));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn close(self: QCandlestickSet) f64 {
        return qtc.QCandlestickSet_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBrush` instead
    ///
    pub const SetBrush = setBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn setBrush(self: QCandlestickSet, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QCandlestickSet_SetBrush(@ptrCast(self.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `brush` instead
    ///
    pub const Brush = brush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn brush(self: QCandlestickSet) QBrush {
        return .{ .ptr = qtc.QCandlestickSet_Brush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPen` instead
    ///
    pub const SetPen = setPen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` _pen: QPen `
    ///
    pub fn setPen(self: QCandlestickSet, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QCandlestickSet_SetPen(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `pen` instead
    ///
    pub const Pen = pen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn pen(self: QCandlestickSet) QPen {
        return .{ .ptr = qtc.QCandlestickSet_Pen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clicked` instead
    ///
    pub const Clicked = clicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn clicked(self: QCandlestickSet) void {
        qtc.QCandlestickSet_Clicked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClicked` instead
    ///
    pub const OnClicked = onClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn onClicked(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hovered` instead
    ///
    pub const Hovered = hovered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` status: bool `
    ///
    pub fn hovered(self: QCandlestickSet, status: bool) void {
        qtc.QCandlestickSet_Hovered(@ptrCast(self.ptr), status);
    }

    /// ### DEPRECATED: Use `onHovered` instead
    ///
    pub const OnHovered = onHovered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet, status: bool) callconv(.c) void `
    ///
    pub fn onHovered(self: QCandlestickSet, callback: *const fn (QCandlestickSet, bool) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pressed` instead
    ///
    pub const Pressed = pressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn pressed(self: QCandlestickSet) void {
        qtc.QCandlestickSet_Pressed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPressed` instead
    ///
    pub const OnPressed = onPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn onPressed(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `released` instead
    ///
    pub const Released = released;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn released(self: QCandlestickSet) void {
        qtc.QCandlestickSet_Released(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReleased` instead
    ///
    pub const OnReleased = onReleased;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn onReleased(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doubleClicked` instead
    ///
    pub const DoubleClicked = doubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn doubleClicked(self: QCandlestickSet) void {
        qtc.QCandlestickSet_DoubleClicked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoubleClicked` instead
    ///
    pub const OnDoubleClicked = onDoubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn onDoubleClicked(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timestampChanged` instead
    ///
    pub const TimestampChanged = timestampChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#timestampChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn timestampChanged(self: QCandlestickSet) void {
        qtc.QCandlestickSet_TimestampChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTimestampChanged` instead
    ///
    pub const OnTimestampChanged = onTimestampChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#timestampChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn onTimestampChanged(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_TimestampChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `openChanged` instead
    ///
    pub const OpenChanged = openChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#openChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn openChanged(self: QCandlestickSet) void {
        qtc.QCandlestickSet_OpenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOpenChanged` instead
    ///
    pub const OnOpenChanged = onOpenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#openChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn onOpenChanged(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_OpenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `highChanged` instead
    ///
    pub const HighChanged = highChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#highChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn highChanged(self: QCandlestickSet) void {
        qtc.QCandlestickSet_HighChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHighChanged` instead
    ///
    pub const OnHighChanged = onHighChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#highChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn onHighChanged(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_HighChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lowChanged` instead
    ///
    pub const LowChanged = lowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#lowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn lowChanged(self: QCandlestickSet) void {
        qtc.QCandlestickSet_LowChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLowChanged` instead
    ///
    pub const OnLowChanged = onLowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#lowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn onLowChanged(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_LowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeChanged` instead
    ///
    pub const CloseChanged = closeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#closeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn closeChanged(self: QCandlestickSet) void {
        qtc.QCandlestickSet_CloseChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCloseChanged` instead
    ///
    pub const OnCloseChanged = onCloseChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#closeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn onCloseChanged(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_CloseChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `brushChanged` instead
    ///
    pub const BrushChanged = brushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#brushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn brushChanged(self: QCandlestickSet) void {
        qtc.QCandlestickSet_BrushChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBrushChanged` instead
    ///
    pub const OnBrushChanged = onBrushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#brushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn onBrushChanged(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_BrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `penChanged` instead
    ///
    pub const PenChanged = penChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn penChanged(self: QCandlestickSet) void {
        qtc.QCandlestickSet_PenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPenChanged` instead
    ///
    pub const OnPenChanged = onPenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn onPenChanged(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_PenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCandlestickSet.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCandlestickSet.tr3: Memory allocation failed");
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
    /// ` self: QCandlestickSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QCandlestickSet, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCandlestickSet.objectName: Memory allocation failed");
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
    /// ` self: QCandlestickSet `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QCandlestickSet, name: []const u8) void {
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
    /// ` self: QCandlestickSet `
    ///
    pub fn isWidgetType(self: QCandlestickSet) bool {
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
    /// ` self: QCandlestickSet `
    ///
    pub fn isWindowType(self: QCandlestickSet) bool {
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
    /// ` self: QCandlestickSet `
    ///
    pub fn isQuickItemType(self: QCandlestickSet) bool {
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
    /// ` self: QCandlestickSet `
    ///
    pub fn signalsBlocked(self: QCandlestickSet) bool {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QCandlestickSet, b: bool) bool {
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
    /// ` self: QCandlestickSet `
    ///
    pub fn thread(self: QCandlestickSet) QThread {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QCandlestickSet, _thread: anytype) bool {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QCandlestickSet, interval: i32) i32 {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QCandlestickSet, time: i64) i32 {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QCandlestickSet, id: i32) void {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QCandlestickSet, id: i32) void {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QCandlestickSet, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QCandlestickSet.children: Memory allocation failed");
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
    /// ` self: QCandlestickSet `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QCandlestickSet, _parent: anytype) void {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QCandlestickSet, filterObj: anytype) void {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QCandlestickSet, obj: anytype) void {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QCandlestickSet, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QCandlestickSet `
    ///
    pub fn disconnect3(self: QCandlestickSet) bool {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QCandlestickSet, receiver: anytype) bool {
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
    /// ` self: QCandlestickSet `
    ///
    pub fn dumpObjectTree(self: QCandlestickSet) void {
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
    /// ` self: QCandlestickSet `
    ///
    pub fn dumpObjectInfo(self: QCandlestickSet) void {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QCandlestickSet, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QCandlestickSet, name: [:0]const u8) QVariant {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QCandlestickSet, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QCandlestickSet.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCandlestickSet.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QCandlestickSet `
    ///
    pub fn bindingStorage(self: QCandlestickSet) QBindingStorage {
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
    /// ` self: QCandlestickSet `
    ///
    pub fn bindingStorage2(self: QCandlestickSet) QBindingStorage {
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
    /// ` self: QCandlestickSet `
    ///
    pub fn destroyed(self: QCandlestickSet) void {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QCandlestickSet, callback: *const fn (QCandlestickSet) callconv(.c) void) void {
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
    /// ` self: QCandlestickSet `
    ///
    pub fn parent(self: QCandlestickSet) QObject {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QCandlestickSet, classname: [:0]const u8) bool {
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
    /// ` self: QCandlestickSet `
    ///
    pub fn deleteLater(self: QCandlestickSet) void {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QCandlestickSet, interval: i32, timerType: i32) i32 {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QCandlestickSet, time: i64, timerType: i32) i32 {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QCandlestickSet, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QCandlestickSet, signal: [:0]const u8) bool {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QCandlestickSet, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QCandlestickSet, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QCandlestickSet, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QCandlestickSet, param1: anytype) void {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QCandlestickSet, callback: *const fn (QCandlestickSet, QObject) callconv(.c) void) void {
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
    /// ` self: QCandlestickSet `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QCandlestickSet, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCandlestickSet_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QCandlestickSet, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCandlestickSet_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn (self: QCandlestickSet, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QCandlestickSet, callback: *const fn (QCandlestickSet, QEvent) callconv(.c) bool) void {
        qtc.QCandlestickSet_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QCandlestickSet, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCandlestickSet_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QCandlestickSet, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCandlestickSet_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn (self: QCandlestickSet, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QCandlestickSet, callback: *const fn (QCandlestickSet, QObject, QEvent) callconv(.c) bool) void {
        qtc.QCandlestickSet_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QCandlestickSet, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QCandlestickSet_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QCandlestickSet, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QCandlestickSet_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn (self: QCandlestickSet, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QCandlestickSet, callback: *const fn (QCandlestickSet, QTimerEvent) callconv(.c) void) void {
        qtc.QCandlestickSet_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QCandlestickSet, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QCandlestickSet_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QCandlestickSet, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QCandlestickSet_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn (self: QCandlestickSet, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QCandlestickSet, callback: *const fn (QCandlestickSet, QChildEvent) callconv(.c) void) void {
        qtc.QCandlestickSet_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QCandlestickSet, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCandlestickSet_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QCandlestickSet, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCandlestickSet_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn (self: QCandlestickSet, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QCandlestickSet, callback: *const fn (QCandlestickSet, QEvent) callconv(.c) void) void {
        qtc.QCandlestickSet_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QCandlestickSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickSet_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QCandlestickSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickSet_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn (self: QCandlestickSet, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QCandlestickSet, callback: *const fn (QCandlestickSet, QMetaMethod) callconv(.c) void) void {
        qtc.QCandlestickSet_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QCandlestickSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickSet_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QCandlestickSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickSet_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn (self: QCandlestickSet, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QCandlestickSet, callback: *const fn (QCandlestickSet, QMetaMethod) callconv(.c) void) void {
        qtc.QCandlestickSet_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSet `
    ///
    pub fn sender(self: QCandlestickSet) QObject {
        return .{ .ptr = qtc.QCandlestickSet_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QCandlestickSet `
    ///
    pub fn superSender(self: QCandlestickSet) QObject {
        return .{ .ptr = qtc.QCandlestickSet_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QCandlestickSet, callback: *const fn () callconv(.c) QObject) void {
        qtc.QCandlestickSet_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSet `
    ///
    pub fn senderSignalIndex(self: QCandlestickSet) i32 {
        return qtc.QCandlestickSet_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCandlestickSet `
    ///
    pub fn superSenderSignalIndex(self: QCandlestickSet) i32 {
        return qtc.QCandlestickSet_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QCandlestickSet, callback: *const fn () callconv(.c) i32) void {
        qtc.QCandlestickSet_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QCandlestickSet, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCandlestickSet_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QCandlestickSet, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCandlestickSet_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn (self: QCandlestickSet, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QCandlestickSet, callback: *const fn (QCandlestickSet, [*:0]const u8) callconv(.c) i32) void {
        qtc.QCandlestickSet_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QCandlestickSet, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCandlestickSet_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QCandlestickSet, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCandlestickSet_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickSet`
    ///
    /// ` callback: *const fn (self: QCandlestickSet, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QCandlestickSet, callback: *const fn (QCandlestickSet, QMetaMethod) callconv(.c) bool) void {
        qtc.QCandlestickSet_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSet `
    ///
    /// ` callback: *const fn (self: QCandlestickSet, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QCandlestickSet, callback: *const fn (QCandlestickSet, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#dtor.QCandlestickSet)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCandlestickSet `
    ///
    pub fn delete(self: QCandlestickSet) void {
        qtc.QCandlestickSet_Delete(@ptrCast(self.ptr));
    }
};
