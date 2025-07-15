const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html
pub const qcandlestickset = struct {
    /// New constructs a new QCandlestickSet object.
    ///
    ///
    pub fn New() QtC.QCandlestickSet {
        return qtc.QCandlestickSet_new();
    }

    /// New2 constructs a new QCandlestickSet object.
    ///
    /// ``` open: f64, high: f64, low: f64, close: f64 ```
    pub fn New2(open: f64, high: f64, low: f64, close: f64) QtC.QCandlestickSet {
        return qtc.QCandlestickSet_new2(@floatCast(open), @floatCast(high), @floatCast(low), @floatCast(close));
    }

    /// New3 constructs a new QCandlestickSet object.
    ///
    /// ``` timestamp: f64 ```
    pub fn New3(timestamp: f64) QtC.QCandlestickSet {
        return qtc.QCandlestickSet_new3(@floatCast(timestamp));
    }

    /// New4 constructs a new QCandlestickSet object.
    ///
    /// ``` timestamp: f64, parent: QtC.QObject ```
    pub fn New4(timestamp: f64, parent: ?*anyopaque) QtC.QCandlestickSet {
        return qtc.QCandlestickSet_new4(@floatCast(timestamp), @ptrCast(parent));
    }

    /// New5 constructs a new QCandlestickSet object.
    ///
    /// ``` open: f64, high: f64, low: f64, close: f64, timestamp: f64 ```
    pub fn New5(open: f64, high: f64, low: f64, close: f64, timestamp: f64) QtC.QCandlestickSet {
        return qtc.QCandlestickSet_new5(@floatCast(open), @floatCast(high), @floatCast(low), @floatCast(close), @floatCast(timestamp));
    }

    /// New6 constructs a new QCandlestickSet object.
    ///
    /// ``` open: f64, high: f64, low: f64, close: f64, timestamp: f64, parent: QtC.QObject ```
    pub fn New6(open: f64, high: f64, low: f64, close: f64, timestamp: f64, parent: ?*anyopaque) QtC.QCandlestickSet {
        return qtc.QCandlestickSet_new6(@floatCast(open), @floatCast(high), @floatCast(low), @floatCast(close), @floatCast(timestamp), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QCandlestickSet_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QCandlestickSet, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCandlestickSet_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QCandlestickSet, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QCandlestickSet_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QCandlestickSet_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickSet, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QCandlestickSet_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QCandlestickSet_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickset.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setTimestamp)
    ///
    /// ``` self: QtC.QCandlestickSet, timestamp: f64 ```
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: f64) void {
        qtc.QCandlestickSet_SetTimestamp(@ptrCast(self), @floatCast(timestamp));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#timestamp)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn Timestamp(self: ?*anyopaque) f64 {
        return qtc.QCandlestickSet_Timestamp(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setOpen)
    ///
    /// ``` self: QtC.QCandlestickSet, open: f64 ```
    pub fn SetOpen(self: ?*anyopaque, open: f64) void {
        qtc.QCandlestickSet_SetOpen(@ptrCast(self), @floatCast(open));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#open)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn Open(self: ?*anyopaque) f64 {
        return qtc.QCandlestickSet_Open(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setHigh)
    ///
    /// ``` self: QtC.QCandlestickSet, high: f64 ```
    pub fn SetHigh(self: ?*anyopaque, high: f64) void {
        qtc.QCandlestickSet_SetHigh(@ptrCast(self), @floatCast(high));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#high)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn High(self: ?*anyopaque) f64 {
        return qtc.QCandlestickSet_High(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setLow)
    ///
    /// ``` self: QtC.QCandlestickSet, low: f64 ```
    pub fn SetLow(self: ?*anyopaque, low: f64) void {
        qtc.QCandlestickSet_SetLow(@ptrCast(self), @floatCast(low));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#low)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn Low(self: ?*anyopaque) f64 {
        return qtc.QCandlestickSet_Low(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setClose)
    ///
    /// ``` self: QtC.QCandlestickSet, close: f64 ```
    pub fn SetClose(self: ?*anyopaque, close: f64) void {
        qtc.QCandlestickSet_SetClose(@ptrCast(self), @floatCast(close));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#close)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn Close(self: ?*anyopaque) f64 {
        return qtc.QCandlestickSet_Close(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setBrush)
    ///
    /// ``` self: QtC.QCandlestickSet, brush: QtC.QBrush ```
    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QCandlestickSet_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#brush)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn Brush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QCandlestickSet_Brush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setPen)
    ///
    /// ``` self: QtC.QCandlestickSet, pen: QtC.QPen ```
    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QCandlestickSet_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#pen)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn Pen(self: ?*anyopaque) QtC.QPen {
        return qtc.QCandlestickSet_Pen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#clicked)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn Clicked(self: ?*anyopaque) void {
        qtc.QCandlestickSet_Clicked(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#clicked)
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet) callconv(.c) void ```
    pub fn OnClicked(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_Clicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#hovered)
    ///
    /// ``` self: QtC.QCandlestickSet, status: bool ```
    pub fn Hovered(self: ?*anyopaque, status: bool) void {
        qtc.QCandlestickSet_Hovered(@ptrCast(self), status);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#hovered)
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet, status: bool) callconv(.c) void ```
    pub fn OnHovered(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_Hovered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#pressed)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn Pressed(self: ?*anyopaque) void {
        qtc.QCandlestickSet_Pressed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#pressed)
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet) callconv(.c) void ```
    pub fn OnPressed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_Pressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#released)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn Released(self: ?*anyopaque) void {
        qtc.QCandlestickSet_Released(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#released)
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet) callconv(.c) void ```
    pub fn OnReleased(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_Released(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#doubleClicked)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn DoubleClicked(self: ?*anyopaque) void {
        qtc.QCandlestickSet_DoubleClicked(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#doubleClicked)
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet) callconv(.c) void ```
    pub fn OnDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_DoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#timestampChanged)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn TimestampChanged(self: ?*anyopaque) void {
        qtc.QCandlestickSet_TimestampChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#timestampChanged)
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet) callconv(.c) void ```
    pub fn OnTimestampChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_TimestampChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#openChanged)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn OpenChanged(self: ?*anyopaque) void {
        qtc.QCandlestickSet_OpenChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#openChanged)
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet) callconv(.c) void ```
    pub fn OnOpenChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_OpenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#highChanged)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn HighChanged(self: ?*anyopaque) void {
        qtc.QCandlestickSet_HighChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#highChanged)
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet) callconv(.c) void ```
    pub fn OnHighChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_HighChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#lowChanged)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn LowChanged(self: ?*anyopaque) void {
        qtc.QCandlestickSet_LowChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#lowChanged)
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet) callconv(.c) void ```
    pub fn OnLowChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_LowChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#closeChanged)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn CloseChanged(self: ?*anyopaque) void {
        qtc.QCandlestickSet_CloseChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#closeChanged)
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet) callconv(.c) void ```
    pub fn OnCloseChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_CloseChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#brushChanged)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn BrushChanged(self: ?*anyopaque) void {
        qtc.QCandlestickSet_BrushChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#brushChanged)
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet) callconv(.c) void ```
    pub fn OnBrushChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_BrushChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#penChanged)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn PenChanged(self: ?*anyopaque) void {
        qtc.QCandlestickSet_PenChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#penChanged)
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet) callconv(.c) void ```
    pub fn OnPenChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_PenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QCandlestickSet_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickset.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QCandlestickSet_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickset.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QCandlestickSet, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickset.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QCandlestickSet, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QCandlestickSet, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QCandlestickSet, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QCandlestickSet, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QCandlestickSet, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QCandlestickSet, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QCandlestickSet, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qcandlestickset.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QCandlestickSet, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QCandlestickSet, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QCandlestickSet, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QCandlestickSet, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QCandlestickSet, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QCandlestickSet, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QCandlestickSet, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QCandlestickSet, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QCandlestickSet, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QCandlestickSet, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QCandlestickSet, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QCandlestickSet, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCandlestickSet_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCandlestickSet_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCandlestickSet_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCandlestickSet_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCandlestickSet_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCandlestickSet_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCandlestickSet_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCandlestickSet_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCandlestickSet_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCandlestickSet_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCandlestickSet_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCandlestickSet_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCandlestickSet_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCandlestickSet_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCandlestickSet_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCandlestickSet_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QCandlestickSet_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QCandlestickSet_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QCandlestickSet_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QCandlestickSet_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QCandlestickSet_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QCandlestickSet_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCandlestickSet_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCandlestickSet_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QCandlestickSet_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QCandlestickSet_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QCandlestickSet_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QCandlestickSet, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCandlestickSet_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QCandlestickSet, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#dtor.QCandlestickSet)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCandlestickSet ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCandlestickSet_Delete(@ptrCast(self));
    }
};
