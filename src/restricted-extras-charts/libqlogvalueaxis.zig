const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractaxis_enums = @import("libqabstractaxis.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html)
pub const qlogvalueaxis = struct {
    /// New constructs a new QLogValueAxis object.
    ///
    pub fn New() QtC.QLogValueAxis {
        return qtc.QLogValueAxis_new();
    }

    /// New2 constructs a new QLogValueAxis object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QLogValueAxis {
        return qtc.QLogValueAxis_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QLogValueAxis_MetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QLogValueAxis_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QLogValueAxis_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxis, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QLogValueAxis_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QLogValueAxis_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlogvalueaxis.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ## Returns:
    ///
    /// ` qabstractaxis_enums.AxisType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QLogValueAxis_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QLogValueAxis_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ## Returns:
    ///
    /// ` qabstractaxis_enums.AxisType `
    ///
    pub fn QBaseType(self: ?*anyopaque) i32 {
        return qtc.QLogValueAxis_QBaseType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#setMin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` min: f64 `
    ///
    pub fn SetMin(self: ?*anyopaque, min: f64) void {
        qtc.QLogValueAxis_SetMin(@ptrCast(self), @floatCast(min));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#min)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn Min(self: ?*anyopaque) f64 {
        return qtc.QLogValueAxis_Min(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#setMax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` max: f64 `
    ///
    pub fn SetMax(self: ?*anyopaque, max: f64) void {
        qtc.QLogValueAxis_SetMax(@ptrCast(self), @floatCast(max));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#max)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn Max(self: ?*anyopaque) f64 {
        return qtc.QLogValueAxis_Max(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` min: f64 `
    ///
    /// ` max: f64 `
    ///
    pub fn SetRange(self: ?*anyopaque, min: f64, max: f64) void {
        qtc.QLogValueAxis_SetRange(@ptrCast(self), @floatCast(min), @floatCast(max));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#setLabelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` format: []const u8 `
    ///
    pub fn SetLabelFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QLogValueAxis_SetLabelFormat(@ptrCast(self), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#labelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LabelFormat(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLogValueAxis_LabelFormat(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlogvalueaxis.LabelFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#setBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` base: f64 `
    ///
    pub fn SetBase(self: ?*anyopaque, base: f64) void {
        qtc.QLogValueAxis_SetBase(@ptrCast(self), @floatCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#base)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn Base(self: ?*anyopaque) f64 {
        return qtc.QLogValueAxis_Base(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#tickCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn TickCount(self: ?*anyopaque) i32 {
        return qtc.QLogValueAxis_TickCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#setMinorTickCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` minorTickCount: i32 `
    ///
    pub fn SetMinorTickCount(self: ?*anyopaque, minorTickCount: i32) void {
        qtc.QLogValueAxis_SetMinorTickCount(@ptrCast(self), @intCast(minorTickCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#minorTickCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn MinorTickCount(self: ?*anyopaque) i32 {
        return qtc.QLogValueAxis_MinorTickCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#minChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` min: f64 `
    ///
    pub fn MinChanged(self: ?*anyopaque, min: f64) void {
        qtc.QLogValueAxis_MinChanged(@ptrCast(self), @floatCast(min));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#minChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxismin: f64) callconv(.c) void `
    ///
    pub fn OnMinChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QLogValueAxis_Connect_MinChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#maxChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` max: f64 `
    ///
    pub fn MaxChanged(self: ?*anyopaque, max: f64) void {
        qtc.QLogValueAxis_MaxChanged(@ptrCast(self), @floatCast(max));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#maxChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxismax: f64) callconv(.c) void `
    ///
    pub fn OnMaxChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QLogValueAxis_Connect_MaxChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#rangeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` min: f64 `
    ///
    /// ` max: f64 `
    ///
    pub fn RangeChanged(self: ?*anyopaque, min: f64, max: f64) void {
        qtc.QLogValueAxis_RangeChanged(@ptrCast(self), @floatCast(min), @floatCast(max));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#rangeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxismin: f64, max: f64) callconv(.c) void `
    ///
    pub fn OnRangeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64, f64) callconv(.c) void) void {
        qtc.QLogValueAxis_Connect_RangeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#labelFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` format: []const u8 `
    ///
    pub fn LabelFormatChanged(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QLogValueAxis_LabelFormatChanged(@ptrCast(self), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#labelFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxisformat: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnLabelFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QLogValueAxis_Connect_LabelFormatChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#baseChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` base: f64 `
    ///
    pub fn BaseChanged(self: ?*anyopaque, base: f64) void {
        qtc.QLogValueAxis_BaseChanged(@ptrCast(self), @floatCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#baseChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxisbase: f64) callconv(.c) void `
    ///
    pub fn OnBaseChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QLogValueAxis_Connect_BaseChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#tickCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` tickCount: i32 `
    ///
    pub fn TickCountChanged(self: ?*anyopaque, tickCount: i32) void {
        qtc.QLogValueAxis_TickCountChanged(@ptrCast(self), @intCast(tickCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#tickCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxistickCount: i32) callconv(.c) void `
    ///
    pub fn OnTickCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QLogValueAxis_Connect_TickCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#minorTickCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` minorTickCount: i32 `
    ///
    pub fn MinorTickCountChanged(self: ?*anyopaque, minorTickCount: i32) void {
        qtc.QLogValueAxis_MinorTickCountChanged(@ptrCast(self), @intCast(minorTickCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#minorTickCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxisminorTickCount: i32) callconv(.c) void `
    ///
    pub fn OnMinorTickCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QLogValueAxis_Connect_MinorTickCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    /// ` c: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlogvalueaxis.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    /// ` c: []const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlogvalueaxis.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_IsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn SetVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn Show(self: ?*anyopaque) void {
        qtc.QAbstractAxis_Show(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QAbstractAxis_Hide(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn IsLineVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_IsLineVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn SetLineVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLineVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn SetLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLinePen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn LinePen(self: ?*anyopaque) QtC.QPen {
        return qtc.QAbstractAxis_LinePen(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetLinePenColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_SetLinePenColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn LinePenColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAbstractAxis_LinePenColor(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn IsGridLineVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_IsGridLineVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn SetGridLineVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetGridLineVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn SetGridLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_SetGridLinePen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn GridLinePen(self: ?*anyopaque) QtC.QPen {
        return qtc.QAbstractAxis_GridLinePen(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn IsMinorGridLineVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_IsMinorGridLineVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn SetMinorGridLineVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn SetMinorGridLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_SetMinorGridLinePen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn MinorGridLinePen(self: ?*anyopaque) QtC.QPen {
        return qtc.QAbstractAxis_MinorGridLinePen(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetGridLineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAbstractAxis_SetGridLineColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn GridLineColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAbstractAxis_GridLineColor(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetMinorGridLineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAbstractAxis_SetMinorGridLineColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn MinorGridLineColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAbstractAxis_MinorGridLineColor(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn LabelsVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_LabelsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn SetLabelsVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLabelsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetLabelsBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLabelsBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn LabelsBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QAbstractAxis_LabelsBrush(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn SetLabelsFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLabelsFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn LabelsFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QAbstractAxis_LabelsFont(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` angle: i32 `
    ///
    pub fn SetLabelsAngle(self: ?*anyopaque, angle: i32) void {
        qtc.QAbstractAxis_SetLabelsAngle(@ptrCast(self), @intCast(angle));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn LabelsAngle(self: ?*anyopaque) i32 {
        return qtc.QAbstractAxis_LabelsAngle(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetLabelsColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_SetLabelsColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn LabelsColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAbstractAxis_LabelsColor(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn IsTitleVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_IsTitleVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn SetTitleVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetTitleVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetTitleBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_SetTitleBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn TitleBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QAbstractAxis_TitleBrush(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn SetTitleFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAbstractAxis_SetTitleFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn TitleFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QAbstractAxis_TitleFont(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitleText(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QAbstractAxis_SetTitleText(@ptrCast(self), title_str);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TitleText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractAxis_TitleText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlogvalueaxis.TitleText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn ShadesVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_ShadesVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn SetShadesVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetShadesVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn SetShadesPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_SetShadesPen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn ShadesPen(self: ?*anyopaque) QtC.QPen {
        return qtc.QAbstractAxis_ShadesPen(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetShadesBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_SetShadesBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn ShadesBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QAbstractAxis_ShadesBrush(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetShadesColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_SetShadesColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn ShadesColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAbstractAxis_ShadesColor(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetShadesBorderColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_SetShadesBorderColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn ShadesBorderColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAbstractAxis_ShadesBorderColor(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn Orientation(self: ?*anyopaque) i32 {
        return qtc.QAbstractAxis_Orientation(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: ?*anyopaque) i32 {
        return qtc.QAbstractAxis_Alignment(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn SetReverse(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetReverse(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn IsReverse(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_IsReverse(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn SetLabelsEditable(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLabelsEditable(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn LabelsEditable(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_LabelsEditable(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn LabelsTruncated(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_LabelsTruncated(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn SetTruncateLabels(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetTruncateLabels(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn TruncateLabels(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_TruncateLabels(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn VisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_VisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxisvisible: bool) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_VisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn LinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_LinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxispen: QtC.QPen) callconv(.c) void `
    ///
    pub fn OnLinePenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LinePenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn LineVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_LineVisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxisvisible: bool) callconv(.c) void `
    ///
    pub fn OnLineVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LineVisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn LabelsVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_LabelsVisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxisvisible: bool) callconv(.c) void `
    ///
    pub fn OnLabelsVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsVisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn LabelsBrushChanged(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_LabelsBrushChanged(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxisbrush: QtC.QBrush) callconv(.c) void `
    ///
    pub fn OnLabelsBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsBrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` pen: QtC.QFont `
    ///
    pub fn LabelsFontChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_LabelsFontChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxispen: QtC.QFont) callconv(.c) void `
    ///
    pub fn OnLabelsFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsFontChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` angle: i32 `
    ///
    pub fn LabelsAngleChanged(self: ?*anyopaque, angle: i32) void {
        qtc.QAbstractAxis_LabelsAngleChanged(@ptrCast(self), @intCast(angle));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxisangle: i32) callconv(.c) void `
    ///
    pub fn OnLabelsAngleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsAngleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn GridLinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_GridLinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxispen: QtC.QPen) callconv(.c) void `
    ///
    pub fn OnGridLinePenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLinePenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn GridVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_GridVisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxisvisible: bool) callconv(.c) void `
    ///
    pub fn OnGridVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridVisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn MinorGridVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_MinorGridVisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxisvisible: bool) callconv(.c) void `
    ///
    pub fn OnMinorGridVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridVisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn MinorGridLinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_MinorGridLinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxispen: QtC.QPen) callconv(.c) void `
    ///
    pub fn OnMinorGridLinePenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLinePenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn GridLineColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAbstractAxis_GridLineColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxiscolor: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnGridLineColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLineColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn MinorGridLineColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAbstractAxis_MinorGridLineColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxiscolor: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnMinorGridLineColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLineColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn ColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxiscolor: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn LabelsColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_LabelsColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxiscolor: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnLabelsColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` title: []const u8 `
    ///
    pub fn TitleTextChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QAbstractAxis_TitleTextChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxistitle: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTitleTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn TitleBrushChanged(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_TitleBrushChanged(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxisbrush: QtC.QBrush) callconv(.c) void `
    ///
    pub fn OnTitleBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleBrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn TitleVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_TitleVisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxisvisible: bool) callconv(.c) void `
    ///
    pub fn OnTitleVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleVisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn TitleFontChanged(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAbstractAxis_TitleFontChanged(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxisfont: QtC.QFont) callconv(.c) void `
    ///
    pub fn OnTitleFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleFontChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn ShadesVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_ShadesVisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxisvisible: bool) callconv(.c) void `
    ///
    pub fn OnShadesVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesVisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn ShadesColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_ShadesColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxiscolor: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnShadesColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn ShadesBorderColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_ShadesBorderColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxiscolor: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnShadesBorderColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBorderColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn ShadesPenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_ShadesPenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxispen: QtC.QPen) callconv(.c) void `
    ///
    pub fn OnShadesPenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesPenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn ShadesBrushChanged(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_ShadesBrushChanged(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxisbrush: QtC.QBrush) callconv(.c) void `
    ///
    pub fn OnShadesBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` reverse: bool `
    ///
    pub fn ReverseChanged(self: ?*anyopaque, reverse: bool) void {
        qtc.QAbstractAxis_ReverseChanged(@ptrCast(self), reverse);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxisreverse: bool) callconv(.c) void `
    ///
    pub fn OnReverseChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ReverseChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` editable: bool `
    ///
    pub fn LabelsEditableChanged(self: ?*anyopaque, editable: bool) void {
        qtc.QAbstractAxis_LabelsEditableChanged(@ptrCast(self), editable);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxiseditable: bool) callconv(.c) void `
    ///
    pub fn OnLabelsEditableChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsEditableChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` labelsTruncated: bool `
    ///
    pub fn LabelsTruncatedChanged(self: ?*anyopaque, labelsTruncated: bool) void {
        qtc.QAbstractAxis_LabelsTruncatedChanged(@ptrCast(self), labelsTruncated);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxislabelsTruncated: bool) callconv(.c) void `
    ///
    pub fn OnLabelsTruncatedChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsTruncatedChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` truncateLabels: bool `
    ///
    pub fn TruncateLabelsChanged(self: ?*anyopaque, truncateLabels: bool) void {
        qtc.QAbstractAxis_TruncateLabelsChanged(@ptrCast(self), truncateLabels);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxistruncateLabels: bool) callconv(.c) void `
    ///
    pub fn OnTruncateLabelsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TruncateLabelsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetLineVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetLineVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetGridLineVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetGridLineVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetMinorGridLineVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetLabelsVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetTitleVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetTitleVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetShadesVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetShadesVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` reverse: bool `
    ///
    pub fn SetReverse1(self: ?*anyopaque, reverse: bool) void {
        qtc.QAbstractAxis_SetReverse1(@ptrCast(self), reverse);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` editable: bool `
    ///
    pub fn SetLabelsEditable1(self: ?*anyopaque, editable: bool) void {
        qtc.QAbstractAxis_SetLabelsEditable1(@ptrCast(self), editable);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` truncateLabels: bool `
    ///
    pub fn SetTruncateLabels1(self: ?*anyopaque, truncateLabels: bool) void {
        qtc.QAbstractAxis_SetTruncateLabels1(@ptrCast(self), truncateLabels);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlogvalueaxis.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qlogvalueaxis.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: []const u8 `
    ///
    /// ` member: []const u8 `
    ///
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qlogvalueaxis.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qlogvalueaxis.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxis) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` classname: []const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` thread: QtC.QThread `
    ///
    /// ` param2: QtC.Disambiguated_t `
    ///
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: []const u8 `
    ///
    /// ` member: []const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxisparam1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QLogValueAxis_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QLogValueAxis_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis`
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxis, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLogValueAxis_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QLogValueAxis_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QLogValueAxis_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis`
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxis, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLogValueAxis_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLogValueAxis_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLogValueAxis_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis`
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxis, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLogValueAxis_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLogValueAxis_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLogValueAxis_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis`
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxis, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLogValueAxis_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLogValueAxis_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLogValueAxis_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis`
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxis, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLogValueAxis_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLogValueAxis_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLogValueAxis_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis`
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxis, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLogValueAxis_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLogValueAxis_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLogValueAxis_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis`
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxis, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLogValueAxis_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QLogValueAxis_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QLogValueAxis_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QLogValueAxis_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QLogValueAxis_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QLogValueAxis_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QLogValueAxis_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` signal: []const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QLogValueAxis_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` signal: []const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QLogValueAxis_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis`
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxis, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QLogValueAxis_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QLogValueAxis_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QLogValueAxis_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis`
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxis, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLogValueAxis_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    /// ` callback: *const fn (self: QtC.QLogValueAxisobjectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#dtor.QLogValueAxis)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QLogValueAxis `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLogValueAxis_Delete(@ptrCast(self));
    }
};
