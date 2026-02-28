const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qchart_enums = @import("libqchart.zig").enums;
const qgraphicsitem_enums = @import("../libqgraphicsitem.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpolarchart_enums = enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html)
pub const qpolarchart = struct {
    /// New constructs a new QPolarChart object.
    ///
    pub fn New() QtC.QPolarChart {
        return qtc.QPolarChart_new();
    }

    /// New2 constructs a new QPolarChart object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QGraphicsItem `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QPolarChart {
        return qtc.QPolarChart_new2(@ptrCast(parent));
    }

    /// New3 constructs a new QPolarChart object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QGraphicsItem `
    ///
    /// ` wFlags: flag of qnamespace_enums.WindowType `
    ///
    pub fn New3(parent: ?*anyopaque, wFlags: i32) QtC.QPolarChart {
        return qtc.QPolarChart_new3(@ptrCast(parent), @bitCast(wFlags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QPolarChart_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QPolarChart_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QPolarChart_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPolarChart_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPolarChart_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPolarChart_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPolarChart_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPolarChart_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPolarChart_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#addAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` axis: QtC.QAbstractAxis `
    ///
    /// ` polarOrientation: qpolarchart_enums.PolarOrientation `
    ///
    pub fn AddAxis(self: ?*anyopaque, axis: ?*anyopaque, polarOrientation: i32) void {
        qtc.QPolarChart_AddAxis(@ptrCast(self), @ptrCast(axis), @bitCast(polarOrientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Axes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QPolarChart_Axes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractAxis, _arr.len) catch @panic("qpolarchart.Axes: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axisPolarOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` axis: QtC.QAbstractAxis `
    ///
    /// ## Returns:
    ///
    /// ` qpolarchart_enums.PolarOrientation `
    ///
    pub fn AxisPolarOrientation(axis: ?*anyopaque) i32 {
        return qtc.QPolarChart_AxisPolarOrientation(@ptrCast(axis));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` polarOrientation: flag of qpolarchart_enums.PolarOrientation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Axes1(self: ?*anyopaque, polarOrientation: i32, allocator: std.mem.Allocator) []QtC.QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QPolarChart_Axes1(@ptrCast(self), @bitCast(polarOrientation));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractAxis, _arr.len) catch @panic("qpolarchart.Axes1: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` polarOrientation: flag of qpolarchart_enums.PolarOrientation `
    ///
    /// ` series: QtC.QAbstractSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Axes2(self: ?*anyopaque, polarOrientation: i32, series: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QPolarChart_Axes2(@ptrCast(self), @bitCast(polarOrientation), @ptrCast(series));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractAxis, _arr.len) catch @panic("qpolarchart.Axes2: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#addSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` series: QtC.QAbstractSeries `
    ///
    pub fn AddSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QChart_AddSeries(@ptrCast(self), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#removeSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` series: QtC.QAbstractSeries `
    ///
    pub fn RemoveSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QChart_RemoveSeries(@ptrCast(self), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#removeAllSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn RemoveAllSeries(self: ?*anyopaque) void {
        qtc.QChart_RemoveAllSeries(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Series(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractSeries {
        const _arr: qtc.libqt_list = qtc.QChart_Series(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractSeries, _arr.len) catch @panic("qpolarchart.Series: Memory allocation failed");
        const _data: [*]QtC.QAbstractSeries = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAxisX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` axis: QtC.QAbstractAxis `
    ///
    pub fn SetAxisX(self: ?*anyopaque, axis: ?*anyopaque) void {
        qtc.QChart_SetAxisX(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAxisY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` axis: QtC.QAbstractAxis `
    ///
    pub fn SetAxisY(self: ?*anyopaque, axis: ?*anyopaque) void {
        qtc.QChart_SetAxisY(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#axisX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn AxisX(self: ?*anyopaque) QtC.QAbstractAxis {
        return qtc.QChart_AxisX(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#axisY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn AxisY(self: ?*anyopaque) QtC.QAbstractAxis {
        return qtc.QChart_AxisY(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#removeAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` axis: QtC.QAbstractAxis `
    ///
    pub fn RemoveAxis(self: ?*anyopaque, axis: ?*anyopaque) void {
        qtc.QChart_RemoveAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#createDefaultAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn CreateDefaultAxes(self: ?*anyopaque) void {
        qtc.QChart_CreateDefaultAxes(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` theme: qchart_enums.ChartTheme `
    ///
    pub fn SetTheme(self: ?*anyopaque, theme: i32) void {
        qtc.QChart_SetTheme(@ptrCast(self), @bitCast(theme));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#theme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` qchart_enums.ChartTheme `
    ///
    pub fn Theme(self: ?*anyopaque) i32 {
        return qtc.QChart_Theme(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QChart_SetTitle(@ptrCast(self), title_str);
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QChart_Title(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setTitleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn SetTitleFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QChart_SetTitleFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#titleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn TitleFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QChart_TitleFont(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setTitleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetTitleBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QChart_SetTitleBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#titleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn TitleBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QChart_TitleBrush(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setBackgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetBackgroundBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QChart_SetBackgroundBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#backgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn BackgroundBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QChart_BackgroundBrush(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setBackgroundPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn SetBackgroundPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QChart_SetBackgroundPen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#backgroundPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn BackgroundPen(self: ?*anyopaque) QtC.QPen {
        return qtc.QChart_BackgroundPen(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SetBackgroundVisible(self: ?*anyopaque) void {
        qtc.QChart_SetBackgroundVisible(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#isBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn IsBackgroundVisible(self: ?*anyopaque) bool {
        return qtc.QChart_IsBackgroundVisible(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setDropShadowEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SetDropShadowEnabled(self: ?*anyopaque) void {
        qtc.QChart_SetDropShadowEnabled(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#isDropShadowEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn IsDropShadowEnabled(self: ?*anyopaque) bool {
        return qtc.QChart_IsDropShadowEnabled(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setBackgroundRoundness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` diameter: f64 `
    ///
    pub fn SetBackgroundRoundness(self: ?*anyopaque, diameter: f64) void {
        qtc.QChart_SetBackgroundRoundness(@ptrCast(self), @bitCast(diameter));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#backgroundRoundness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn BackgroundRoundness(self: ?*anyopaque) f64 {
        return qtc.QChart_BackgroundRoundness(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAnimationOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` options: flag of qchart_enums.AnimationOption `
    ///
    pub fn SetAnimationOptions(self: ?*anyopaque, options: i32) void {
        qtc.QChart_SetAnimationOptions(@ptrCast(self), @bitCast(options));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#animationOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` flag of qchart_enums.AnimationOption `
    ///
    pub fn AnimationOptions(self: ?*anyopaque) i32 {
        return qtc.QChart_AnimationOptions(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAnimationDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SetAnimationDuration(self: ?*anyopaque, msecs: i32) void {
        qtc.QChart_SetAnimationDuration(@ptrCast(self), @bitCast(msecs));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#animationDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn AnimationDuration(self: ?*anyopaque) i32 {
        return qtc.QChart_AnimationDuration(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAnimationEasingCurve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` curve: QtC.QEasingCurve `
    ///
    pub fn SetAnimationEasingCurve(self: ?*anyopaque, curve: ?*anyopaque) void {
        qtc.QChart_SetAnimationEasingCurve(@ptrCast(self), @ptrCast(curve));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#animationEasingCurve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn AnimationEasingCurve(self: ?*anyopaque) QtC.QEasingCurve {
        return qtc.QChart_AnimationEasingCurve(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ZoomIn(self: ?*anyopaque) void {
        qtc.QChart_ZoomIn(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ZoomOut(self: ?*anyopaque) void {
        qtc.QChart_ZoomOut(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn ZoomIn2(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QChart_ZoomIn2(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` factor: f64 `
    ///
    pub fn Zoom(self: ?*anyopaque, factor: f64) void {
        qtc.QChart_Zoom(@ptrCast(self), @bitCast(factor));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoomReset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ZoomReset(self: ?*anyopaque) void {
        qtc.QChart_ZoomReset(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#isZoomed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn IsZoomed(self: ?*anyopaque) bool {
        return qtc.QChart_IsZoomed(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Scroll(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QChart_Scroll(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#legend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Legend(self: ?*anyopaque) QtC.QLegend {
        return qtc.QChart_Legend(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` margins: QtC.QMargins `
    ///
    pub fn SetMargins(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QChart_SetMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#margins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Margins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QChart_Margins(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn PlotArea(self: ?*anyopaque) QtC.QRectF {
        return qtc.QChart_PlotArea(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn SetPlotArea(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QChart_SetPlotArea(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetPlotAreaBackgroundBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QChart_SetPlotAreaBackgroundBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn PlotAreaBackgroundBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QChart_PlotAreaBackgroundBrush(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn SetPlotAreaBackgroundPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QChart_SetPlotAreaBackgroundPen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn PlotAreaBackgroundPen(self: ?*anyopaque) QtC.QPen {
        return qtc.QChart_PlotAreaBackgroundPen(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SetPlotAreaBackgroundVisible(self: ?*anyopaque) void {
        qtc.QChart_SetPlotAreaBackgroundVisible(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#isPlotAreaBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn IsPlotAreaBackgroundVisible(self: ?*anyopaque) bool {
        return qtc.QChart_IsPlotAreaBackgroundVisible(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setLocalizeNumbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` localize: bool `
    ///
    pub fn SetLocalizeNumbers(self: ?*anyopaque, localize: bool) void {
        qtc.QChart_SetLocalizeNumbers(@ptrCast(self), localize);
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#localizeNumbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn LocalizeNumbers(self: ?*anyopaque) bool {
        return qtc.QChart_LocalizeNumbers(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` locale: QtC.QLocale `
    ///
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QChart_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QChart_Locale(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#mapToValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` position: QtC.QPointF `
    ///
    pub fn MapToValue(self: ?*anyopaque, position: ?*anyopaque) QtC.QPointF {
        return qtc.QChart_MapToValue(@ptrCast(self), @ptrCast(position));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#mapToPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` value: QtC.QPointF `
    ///
    pub fn MapToPosition(self: ?*anyopaque, value: ?*anyopaque) QtC.QPointF {
        return qtc.QChart_MapToPosition(@ptrCast(self), @ptrCast(value));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#chartType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` qchart_enums.ChartType `
    ///
    pub fn ChartType(self: ?*anyopaque) i32 {
        return qtc.QChart_ChartType(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` plotArea: QtC.QRectF `
    ///
    pub fn PlotAreaChanged(self: ?*anyopaque, plotArea: ?*anyopaque) void {
        qtc.QChart_PlotAreaChanged(@ptrCast(self), @ptrCast(plotArea));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, plotArea: QtC.QRectF) callconv(.c) void `
    ///
    pub fn OnPlotAreaChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QChart_Connect_PlotAreaChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAxisX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` axis: QtC.QAbstractAxis `
    ///
    /// ` series: QtC.QAbstractSeries `
    ///
    pub fn SetAxisX2(self: ?*anyopaque, axis: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QChart_SetAxisX2(@ptrCast(self), @ptrCast(axis), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAxisY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` axis: QtC.QAbstractAxis `
    ///
    /// ` series: QtC.QAbstractSeries `
    ///
    pub fn SetAxisY2(self: ?*anyopaque, axis: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QChart_SetAxisY2(@ptrCast(self), @ptrCast(axis), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#axisX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` series: QtC.QAbstractSeries `
    ///
    pub fn AxisX1(self: ?*anyopaque, series: ?*anyopaque) QtC.QAbstractAxis {
        return qtc.QChart_AxisX1(@ptrCast(self), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#axisY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` series: QtC.QAbstractSeries `
    ///
    pub fn AxisY1(self: ?*anyopaque, series: ?*anyopaque) QtC.QAbstractAxis {
        return qtc.QChart_AxisY1(@ptrCast(self), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` visible: bool `
    ///
    pub fn SetBackgroundVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QChart_SetBackgroundVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setDropShadowEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetDropShadowEnabled1(self: ?*anyopaque, enabled: bool) void {
        qtc.QChart_SetDropShadowEnabled1(@ptrCast(self), enabled);
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` visible: bool `
    ///
    pub fn SetPlotAreaBackgroundVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QChart_SetPlotAreaBackgroundVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#mapToValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` position: QtC.QPointF `
    ///
    /// ` series: QtC.QAbstractSeries `
    ///
    pub fn MapToValue2(self: ?*anyopaque, position: ?*anyopaque, series: ?*anyopaque) QtC.QPointF {
        return qtc.QChart_MapToValue2(@ptrCast(self), @ptrCast(position), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchart.html#mapToPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` value: QtC.QPointF `
    ///
    /// ` series: QtC.QAbstractSeries `
    ///
    pub fn MapToPosition2(self: ?*anyopaque, value: ?*anyopaque, series: ?*anyopaque) QtC.QPointF {
        return qtc.QChart_MapToPosition2(@ptrCast(self), @ptrCast(value), @ptrCast(series));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Layout(self: ?*anyopaque) QtC.QGraphicsLayout {
        return qtc.QGraphicsWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` layout: QtC.QGraphicsLayout `
    ///
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QGraphicsWidget_SetLayoutDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QGraphicsWidget_Style(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` style: QtC.QStyle `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QGraphicsWidget_Font(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QGraphicsWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` size: QtC.QSizeF `
    ///
    pub fn Resize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsWidget_Resize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn Resize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsWidget_Resize2(@ptrCast(self), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsWidget_Size(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetGeometry2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsWidget_SetGeometry2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` left: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` right: f64 `
    ///
    /// ` bottom: f64 `
    ///
    pub fn SetContentsMargins(self: ?*anyopaque, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsWidget_SetContentsMargins(@ptrCast(self), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` margins: QtC.QMarginsF `
    ///
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: QtC.QMarginsF) void {
        qtc.QGraphicsWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` left: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` right: f64 `
    ///
    /// ` bottom: f64 `
    ///
    pub fn SetWindowFrameMargins(self: ?*anyopaque, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsWidget_SetWindowFrameMargins(@ptrCast(self), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` margins: QtC.QMarginsF `
    ///
    pub fn SetWindowFrameMargins2(self: ?*anyopaque, margins: QtC.QMarginsF) void {
        qtc.QGraphicsWidget_SetWindowFrameMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn GetWindowFrameMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsWidget_GetWindowFrameMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn UnsetWindowFrameMargins(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_UnsetWindowFrameMargins(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn WindowFrameGeometry(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsWidget_WindowFrameGeometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn WindowFrameRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsWidget_WindowFrameRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_WindowType(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` wFlags: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: ?*anyopaque, wFlags: i32) void {
        qtc.QGraphicsWidget_SetWindowFlags(@ptrCast(self), @bitCast(wFlags));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetWindowTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QGraphicsWidget_SetWindowTitle(@ptrCast(self), title_str);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGraphicsWidget_WindowTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QGraphicsWidget_SetFocusPolicy(@ptrCast(self), @bitCast(policy));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` first: QtC.QGraphicsWidget `
    ///
    /// ` second: QtC.QGraphicsWidget `
    ///
    pub fn SetTabOrder(first: ?*anyopaque, second: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetTabOrder(@ptrCast(first), @ptrCast(second));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn FocusWidget(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` sequence: QtC.QKeySequence `
    ///
    pub fn GrabShortcut(self: ?*anyopaque, sequence: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_GrabShortcut(@ptrCast(self), @ptrCast(sequence));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QGraphicsWidget_ReleaseShortcut(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QGraphicsWidget_SetShortcutEnabled(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        qtc.QGraphicsWidget_SetShortcutAutoRepeat(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QGraphicsWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` actions: []QtC.QAction `
    ///
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QGraphicsWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` before: QtC.QAction `
    ///
    /// ` actions: []QtC.QAction `
    ///
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QGraphicsWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` before: QtC.QAction `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QGraphicsWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QGraphicsWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.QGraphicsWidget_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("qpolarchart.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` attribute: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: ?*anyopaque, attribute: i32) void {
        qtc.QGraphicsWidget_SetAttribute(@ptrCast(self), @bitCast(attribute));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` attribute: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: ?*anyopaque, attribute: i32) bool {
        return qtc.QGraphicsWidget_TestAttribute(@ptrCast(self), @bitCast(attribute));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn GeometryChanged(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_GeometryChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart) callconv(.c) void `
    ///
    pub fn OnGeometryChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_Connect_GeometryChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn LayoutChanged(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_LayoutChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart) callconv(.c) void `
    ///
    pub fn OnLayoutChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_Connect_LayoutChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_Close(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` sequence: QtC.QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: ?*anyopaque, sequence: ?*anyopaque, context: i32) i32 {
        return qtc.QGraphicsWidget_GrabShortcut2(@ptrCast(self), @ptrCast(sequence), @bitCast(context));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` id: i32 `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enabled: bool) void {
        qtc.QGraphicsWidget_SetShortcutEnabled2(@ptrCast(self), @bitCast(id), enabled);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` id: i32 `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enabled: bool) void {
        qtc.QGraphicsWidget_SetShortcutAutoRepeat2(@ptrCast(self), @bitCast(id), enabled);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` attribute: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: ?*anyopaque, attribute: i32, on: bool) void {
        qtc.QGraphicsWidget_SetAttribute2(@ptrCast(self), @bitCast(attribute), on);
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i32) void {
        qtc.QGraphicsObject_GrabGesture(@ptrCast(self), @bitCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i32) void {
        qtc.QGraphicsObject_UngrabGesture(@ptrCast(self), @bitCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ParentChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ParentChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart) callconv(.c) void `
    ///
    pub fn OnParentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ParentChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn OpacityChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_OpacityChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_OpacityChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn VisibleChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_VisibleChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn EnabledChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_EnabledChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart) callconv(.c) void `
    ///
    pub fn OnEnabledChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_EnabledChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn XChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_XChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart) callconv(.c) void `
    ///
    pub fn OnXChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_XChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn YChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_YChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart) callconv(.c) void `
    ///
    pub fn OnYChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_YChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ZChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ZChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart) callconv(.c) void `
    ///
    pub fn OnZChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ZChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn RotationChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_RotationChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart) callconv(.c) void `
    ///
    pub fn OnRotationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_RotationChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ScaleChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ScaleChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart) callconv(.c) void `
    ///
    pub fn OnScaleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ScaleChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ChildrenChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ChildrenChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart) callconv(.c) void `
    ///
    pub fn OnChildrenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ChildrenChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn WidthChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_WidthChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart) callconv(.c) void `
    ///
    pub fn OnWidthChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_WidthChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn HeightChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_HeightChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart) callconv(.c) void `
    ///
    pub fn OnHeightChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_HeightChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i32, flags: i32) void {
        qtc.QGraphicsObject_GrabGesture2(@ptrCast(self), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
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
    /// ` self: QtC.QPolarChart `
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
    /// ` self: QtC.QPolarChart `
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
    /// ` self: QtC.QPolarChart `
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
    /// ` self: QtC.QPolarChart `
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
    /// ` self: QtC.QPolarChart `
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
    /// ` self: QtC.QPolarChart `
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
    /// ` self: QtC.QPolarChart `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qpolarchart.Children: Memory allocation failed");
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
    /// ` self: QtC.QPolarChart `
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
    /// ` self: QtC.QPolarChart `
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
    /// ` self: QtC.QPolarChart `
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
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
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
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
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
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
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
    /// ` self: QtC.QPolarChart `
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
    /// ` self: QtC.QPolarChart `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qpolarchart.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qpolarchart.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.QPolarChart `
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
    /// ` self: QtC.QPolarChart `
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
    /// ` self: QtC.QPolarChart `
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
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
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
    /// ` self: QtC.QPolarChart `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
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
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
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
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Scene(self: ?*anyopaque) QtC.QGraphicsScene {
        return qtc.QGraphicsItem_Scene(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ParentItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_ParentItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn TopLevelItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_TopLevelItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ParentObject(self: ?*anyopaque) QtC.QGraphicsObject {
        return qtc.QGraphicsItem_ParentObject(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ParentWidget(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsItem_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsItem_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Window(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsItem_Window(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Panel(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_Panel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` parent: QtC.QGraphicsItem `
    ///
    pub fn SetParentItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QGraphicsItem_SetParentItem(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildItems(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_ChildItems(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qpolarchart.ChildItems: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn IsWidget(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsWindow(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn IsPanel(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsPanel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ToGraphicsObject(self: ?*anyopaque) QtC.QGraphicsObject {
        return qtc.QGraphicsItem_ToGraphicsObject(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ToGraphicsObject2(self: ?*anyopaque) QtC.QGraphicsObject {
        return qtc.QGraphicsItem_ToGraphicsObject2(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Group(self: ?*anyopaque) QtC.QGraphicsItemGroup {
        return qtc.QGraphicsItem_Group(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` group: QtC.QGraphicsItemGroup `
    ///
    pub fn SetGroup(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.QGraphicsItem_SetGroup(@ptrCast(self), @ptrCast(group));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItem_Flags(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` flag: qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn SetFlag(self: ?*anyopaque, flag: i32) void {
        qtc.QGraphicsItem_SetFlag(@ptrCast(self), @bitCast(flag));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` flags: flag of qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QGraphicsItem_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsitem_enums.CacheMode `
    ///
    pub fn CacheMode(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItem_CacheMode(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` mode: qgraphicsitem_enums.CacheMode `
    ///
    pub fn SetCacheMode(self: ?*anyopaque, mode: i32) void {
        qtc.QGraphicsItem_SetCacheMode(@ptrCast(self), @bitCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsitem_enums.PanelModality `
    ///
    pub fn PanelModality(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItem_PanelModality(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` panelModality: qgraphicsitem_enums.PanelModality `
    ///
    pub fn SetPanelModality(self: ?*anyopaque, panelModality: i32) void {
        qtc.QGraphicsItem_SetPanelModality(@ptrCast(self), @bitCast(panelModality));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn IsBlockedByModalPanel(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGraphicsItem_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QGraphicsItem_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QGraphicsItem_Cursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` cursor: QtC.QCursor `
    ///
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QGraphicsItem_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn HasCursor(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_HasCursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QGraphicsItem_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsVisible(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` parent: QtC.QGraphicsItem `
    ///
    pub fn IsVisibleTo(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsVisibleTo(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QGraphicsItem_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QGraphicsItem_Hide(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Show(self: ?*anyopaque) void {
        qtc.QGraphicsItem_Show(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn IsSelected(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsSelected(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` selected: bool `
    ///
    pub fn SetSelected(self: ?*anyopaque, selected: bool) void {
        qtc.QGraphicsItem_SetSelected(@ptrCast(self), selected);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QGraphicsItem_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Opacity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn EffectiveOpacity(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_EffectiveOpacity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QGraphicsItem_SetOpacity(@ptrCast(self), @bitCast(opacity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QGraphicsItem_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` effect: QtC.QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QGraphicsItem_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn AcceptedMouseButtons(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItem_AcceptedMouseButtons(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn SetAcceptedMouseButtons(self: ?*anyopaque, buttons: i32) void {
        qtc.QGraphicsItem_SetAcceptedMouseButtons(@ptrCast(self), @bitCast(buttons));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn AcceptHoverEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_AcceptHoverEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAcceptHoverEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptHoverEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn AcceptTouchEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_AcceptTouchEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAcceptTouchEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptTouchEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn FiltersChildEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_FiltersChildEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetFiltersChildEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetFiltersChildEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn HandlesChildEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_HandlesChildEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetHandlesChildEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetHandlesChildEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsActive(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` active: bool `
    ///
    pub fn SetActive(self: ?*anyopaque, active: bool) void {
        qtc.QGraphicsItem_SetActive(@ptrCast(self), active);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn HasFocus(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_HasFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QGraphicsItem_SetFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QGraphicsItem_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn FocusProxy(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    pub fn SetFocusProxy(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsItem_SetFocusProxy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn FocusItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_FocusItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn FocusScopeItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_FocusScopeItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QGraphicsItem_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn UngrabMouse(self: ?*anyopaque) void {
        qtc.QGraphicsItem_UngrabMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QGraphicsItem_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn UngrabKeyboard(self: ?*anyopaque) void {
        qtc.QGraphicsItem_UngrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_Pos(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn X(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_X(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` x: f64 `
    ///
    pub fn SetX(self: ?*anyopaque, x: f64) void {
        qtc.QGraphicsItem_SetX(@ptrCast(self), @bitCast(x));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Y(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Y(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` y: f64 `
    ///
    pub fn SetY(self: ?*anyopaque, y: f64) void {
        qtc.QGraphicsItem_SetY(@ptrCast(self), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_ScenePos(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsItem_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn SetPos2(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QGraphicsItem_SetPos2(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn MoveBy(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_MoveBy(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn EnsureVisible(self: ?*anyopaque) void {
        qtc.QGraphicsItem_EnsureVisible(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn EnsureVisible2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsItem_EnsureVisible2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Transform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_Transform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SceneTransform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_SceneTransform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` viewportTransform: QtC.QTransform `
    ///
    pub fn DeviceTransform(self: ?*anyopaque, viewportTransform: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_DeviceTransform(@ptrCast(self), @ptrCast(viewportTransform));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` other: QtC.QGraphicsItem `
    ///
    pub fn ItemTransform(self: ?*anyopaque, other: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_ItemTransform(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` matrix: QtC.QTransform `
    ///
    pub fn SetTransform(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QGraphicsItem_SetTransform(@ptrCast(self), @ptrCast(matrix));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ResetTransform(self: ?*anyopaque) void {
        qtc.QGraphicsItem_ResetTransform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` angle: f64 `
    ///
    pub fn SetRotation(self: ?*anyopaque, angle: f64) void {
        qtc.QGraphicsItem_SetRotation(@ptrCast(self), @bitCast(angle));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Rotation(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Rotation(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` scale: f64 `
    ///
    pub fn SetScale(self: ?*anyopaque, scale: f64) void {
        qtc.QGraphicsItem_SetScale(@ptrCast(self), @bitCast(scale));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Scale(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Scale(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Transformations(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsTransform {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_Transformations(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsTransform, _arr.len) catch @panic("qpolarchart.Transformations: Memory allocation failed");
        const _data: [*]QtC.QGraphicsTransform = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` transformations: []QtC.QGraphicsTransform `
    ///
    pub fn SetTransformations(self: ?*anyopaque, transformations: []?*anyopaque) void {
        const transformations_list = qtc.libqt_list{
            .len = transformations.len,
            .data = @ptrCast(transformations.ptr),
        };
        qtc.QGraphicsItem_SetTransformations(@ptrCast(self), transformations_list);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn TransformOriginPoint(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_TransformOriginPoint(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` origin: QtC.QPointF `
    ///
    pub fn SetTransformOriginPoint(self: ?*anyopaque, origin: ?*anyopaque) void {
        qtc.QGraphicsItem_SetTransformOriginPoint(@ptrCast(self), @ptrCast(origin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` ax: f64 `
    ///
    /// ` ay: f64 `
    ///
    pub fn SetTransformOriginPoint2(self: ?*anyopaque, ax: f64, ay: f64) void {
        qtc.QGraphicsItem_SetTransformOriginPoint2(@ptrCast(self), @bitCast(ax), @bitCast(ay));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ZValue(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_ZValue(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` z: f64 `
    ///
    pub fn SetZValue(self: ?*anyopaque, z: f64) void {
        qtc.QGraphicsItem_SetZValue(@ptrCast(self), @bitCast(z));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` sibling: QtC.QGraphicsItem `
    ///
    pub fn StackBefore(self: ?*anyopaque, sibling: ?*anyopaque) void {
        qtc.QGraphicsItem_StackBefore(@ptrCast(self), @ptrCast(sibling));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ChildrenBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_ChildrenBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SceneBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_SceneBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn IsClipped(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsClipped(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ClipPath(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_ClipPath(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CollidingItems(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qpolarchart.CollidingItems: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn IsObscured(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsObscured(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn IsObscured2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) bool {
        return qtc.QGraphicsItem_IsObscured2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` itemToDeviceTransform: QtC.QTransform `
    ///
    pub fn BoundingRegion(self: ?*anyopaque, itemToDeviceTransform: ?*anyopaque) QtC.QRegion {
        return qtc.QGraphicsItem_BoundingRegion(@ptrCast(self), @ptrCast(itemToDeviceTransform));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn BoundingRegionGranularity(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_BoundingRegionGranularity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` granularity: f64 `
    ///
    pub fn SetBoundingRegionGranularity(self: ?*anyopaque, granularity: f64) void {
        qtc.QGraphicsItem_SetBoundingRegionGranularity(@ptrCast(self), @bitCast(granularity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Update(self: ?*anyopaque) void {
        qtc.QGraphicsItem_Update(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` width: f64 `
    ///
    /// ` height: f64 `
    ///
    pub fn Update2(self: ?*anyopaque, x: f64, y: f64, width: f64, height: f64) void {
        qtc.QGraphicsItem_Update2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn MapToItem(self: ?*anyopaque, item: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapToItem(@ptrCast(self), @ptrCast(item), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn MapToParent(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapToParent(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn MapToScene(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapToScene(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn MapRectToItem(self: ?*anyopaque, item: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToItem(@ptrCast(self), @ptrCast(item), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn MapRectToParent(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToParent(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn MapRectToScene(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToScene(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    pub fn MapToItem4(self: ?*anyopaque, item: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapToItem4(@ptrCast(self), @ptrCast(item), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    pub fn MapToParent4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapToParent4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    pub fn MapToScene4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapToScene4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn MapFromItem(self: ?*anyopaque, item: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromItem(@ptrCast(self), @ptrCast(item), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn MapFromParent(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromParent(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn MapFromScene(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromScene(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn MapRectFromItem(self: ?*anyopaque, item: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromItem(@ptrCast(self), @ptrCast(item), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn MapRectFromParent(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromParent(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn MapRectFromScene(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromScene(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    pub fn MapFromItem4(self: ?*anyopaque, item: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapFromItem4(@ptrCast(self), @ptrCast(item), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    pub fn MapFromParent4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapFromParent4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    pub fn MapFromScene4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapFromScene4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapToItem5(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapToItem5(@ptrCast(self), @ptrCast(item), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapToParent5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapToParent5(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapToScene5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapToScene5(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectToItem2(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToItem2(@ptrCast(self), @ptrCast(item), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectToParent2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToParent2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectToScene2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToScene2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapFromItem5(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromItem5(@ptrCast(self), @ptrCast(item), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapFromParent5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromParent5(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapFromScene5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromScene5(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectFromItem2(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromItem2(@ptrCast(self), @ptrCast(item), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectFromParent2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromParent2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectFromScene2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromScene2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` child: QtC.QGraphicsItem `
    ///
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` other: QtC.QGraphicsItem `
    ///
    pub fn CommonAncestorItem(self: ?*anyopaque, other: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_CommonAncestorItem(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn IsUnderMouse(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsUnderMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` key: i32 `
    ///
    pub fn Data(self: ?*anyopaque, key: i32) QtC.QVariant {
        return qtc.QGraphicsItem_Data(@ptrCast(self), @bitCast(key));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` key: i32 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetData(self: ?*anyopaque, key: i32, value: ?*anyopaque) void {
        qtc.QGraphicsItem_SetData(@ptrCast(self), @bitCast(key), @ptrCast(value));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItem_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i32) void {
        qtc.QGraphicsItem_SetInputMethodHints(@ptrCast(self), @bitCast(hints));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` filterItem: QtC.QGraphicsItem `
    ///
    pub fn InstallSceneEventFilter(self: ?*anyopaque, filterItem: ?*anyopaque) void {
        qtc.QGraphicsItem_InstallSceneEventFilter(@ptrCast(self), @ptrCast(filterItem));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` filterItem: QtC.QGraphicsItem `
    ///
    pub fn RemoveSceneEventFilter(self: ?*anyopaque, filterItem: ?*anyopaque) void {
        qtc.QGraphicsItem_RemoveSceneEventFilter(@ptrCast(self), @ptrCast(filterItem));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` flag: qgraphicsitem_enums.GraphicsItemFlag `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetFlag2(self: ?*anyopaque, flag: i32, enabled: bool) void {
        qtc.QGraphicsItem_SetFlag2(@ptrCast(self), @bitCast(flag), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` mode: qgraphicsitem_enums.CacheMode `
    ///
    /// ` cacheSize: QtC.QSize `
    ///
    pub fn SetCacheMode2(self: ?*anyopaque, mode: i32, cacheSize: ?*anyopaque) void {
        qtc.QGraphicsItem_SetCacheMode2(@ptrCast(self), @bitCast(mode), @ptrCast(cacheSize));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` blockingPanel: *QtC.QGraphicsItem `
    ///
    pub fn IsBlockedByModalPanel1(self: ?*anyopaque, blockingPanel: *?*anyopaque) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel1(@ptrCast(self), @ptrCast(blockingPanel));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` focusReason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus1(self: ?*anyopaque, focusReason: i32) void {
        qtc.QGraphicsItem_SetFocus1(@ptrCast(self), @bitCast(focusReason));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn EnsureVisible1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsItem_EnsureVisible1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` rect: QtC.QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn EnsureVisible22(self: ?*anyopaque, rect: ?*anyopaque, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible22(@ptrCast(self), @ptrCast(rect), @bitCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` rect: QtC.QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn EnsureVisible3(self: ?*anyopaque, rect: ?*anyopaque, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible3(@ptrCast(self), @ptrCast(rect), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn EnsureVisible5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible5(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn EnsureVisible6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible6(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` other: QtC.QGraphicsItem `
    ///
    /// ` ok: *bool `
    ///
    pub fn ItemTransform2(self: ?*anyopaque, other: ?*anyopaque, ok: *bool) QtC.QTransform {
        return qtc.QGraphicsItem_ItemTransform2(@ptrCast(self), @ptrCast(other), @ptrCast(ok));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` matrix: QtC.QTransform `
    ///
    /// ` combine: bool `
    ///
    pub fn SetTransform2(self: ?*anyopaque, matrix: ?*anyopaque, combine: bool) void {
        qtc.QGraphicsItem_SetTransform2(@ptrCast(self), @ptrCast(matrix), combine);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CollidingItems1(self: ?*anyopaque, mode: i32, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems1(@ptrCast(self), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qpolarchart.CollidingItems1: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn IsObscured1(self: ?*anyopaque, rect: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsObscured1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn Update1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsItem_Update1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn Scroll3(self: ?*anyopaque, dx: f64, dy: f64, rect: ?*anyopaque) void {
        qtc.QGraphicsItem_Scroll3(@ptrCast(self), @bitCast(dx), @bitCast(dy), @ptrCast(rect));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` policy: QtC.QSizePolicy `
    ///
    pub fn SetSizePolicy(self: ?*anyopaque, policy: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self), @ptrCast(policy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: ?*anyopaque, hPolicy: i32, vPolicy: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self), @bitCast(hPolicy), @bitCast(vPolicy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` size: QtC.QSizeF `
    ///
    pub fn SetMinimumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetMinimumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` width: f64 `
    ///
    pub fn SetMinimumWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn MinimumWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` height: f64 `
    ///
    pub fn SetMinimumHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn MinimumHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` size: QtC.QSizeF `
    ///
    pub fn SetPreferredSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetPreferredSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn PreferredSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` width: f64 `
    ///
    pub fn SetPreferredWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn PreferredWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` height: f64 `
    ///
    pub fn SetPreferredHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn PreferredHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` size: QtC.QSizeF `
    ///
    pub fn SetMaximumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetMaximumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` width: f64 `
    ///
    pub fn SetMaximumWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn MaximumWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` height: f64 `
    ///
    pub fn SetMaximumHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn MaximumHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Geometry(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    pub fn EffectiveSizeHint(self: ?*anyopaque, which: i32) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self), @bitCast(which));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn ParentLayoutItem(self: ?*anyopaque) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` parent: QtC.QGraphicsLayoutItem `
    ///
    pub fn SetParentLayoutItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn IsLayout(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn GraphicsItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn OwnedByLayout(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` controlType: qsizepolicy_enums.ControlType `
    ///
    pub fn SetSizePolicy3(self: ?*anyopaque, hPolicy: i32, vPolicy: i32, controlType: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self), @bitCast(hPolicy), @bitCast(vPolicy), @bitCast(controlType));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QtC.QSizeF `
    ///
    pub fn EffectiveSizeHint2(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self), @bitCast(which), @ptrCast(constraint));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QPolarChart_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// ### DEPRECATED: Use `SuperSetGeometry` instead
    ///
    pub const QBaseSetGeometry = SuperSetGeometry;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn SuperSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QPolarChart_SuperSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, rect: QtC.QRectF) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnSetGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn GetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QPolarChart_GetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `SuperGetContentsMargins` instead
    ///
    pub const QBaseGetContentsMargins = SuperGetContentsMargins;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn SuperGetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QPolarChart_SuperGetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, left: *f64, top: *f64, right: *f64, bottom: *f64) callconv(.c) void `
    ///
    pub fn OnGetContentsMargins(self: ?*anyopaque, callback: *const fn (?*anyopaque, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QPolarChart_OnGetContentsMargins(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QPolarChart_Type(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperType` instead
    ///
    pub const QBaseType = SuperType;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SuperType(self: ?*anyopaque) i32 {
        return qtc.QPolarChart_SuperType(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QPolarChart_OnType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QPolarChart_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// ### DEPRECATED: Use `SuperPaint` instead
    ///
    pub const QBasePaint = SuperPaint;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperPaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QPolarChart_SuperPaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, painter: QtC.QPainter, option: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnPaint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn PaintWindowFrame(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QPolarChart_PaintWindowFrame(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// ### DEPRECATED: Use `SuperPaintWindowFrame` instead
    ///
    pub const QBasePaintWindowFrame = SuperPaintWindowFrame;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperPaintWindowFrame(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QPolarChart_SuperPaintWindowFrame(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, painter: QtC.QPainter, option: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnPaintWindowFrame(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnPaintWindowFrame(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn BoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QPolarChart_BoundingRect(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperBoundingRect` instead
    ///
    pub const QBaseBoundingRect = SuperBoundingRect;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SuperBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QPolarChart_SuperBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QRectF `
    ///
    pub fn OnBoundingRect(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QRectF) void {
        qtc.QPolarChart_OnBoundingRect(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Shape(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPolarChart_Shape(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperShape` instead
    ///
    pub const QBaseShape = SuperShape;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SuperShape(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPolarChart_SuperShape(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPainterPath `
    ///
    pub fn OnShape(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainterPath) void {
        qtc.QPolarChart_OnShape(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QPolarChart_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    pub fn SuperInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QPolarChart_SuperInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, option: QtC.QStyleOption) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnInitStyleOption(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QtC.QSizeF `
    ///
    pub fn SizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QPolarChart_SizeHint(@ptrCast(self), @bitCast(which), @ptrCast(constraint));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QtC.QSizeF `
    ///
    pub fn SuperSizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QPolarChart_SuperSizeHint(@ptrCast(self), @bitCast(which), @ptrCast(constraint));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF) callconv(.c) QtC.QSizeF `
    ///
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QSizeF) void {
        qtc.QPolarChart_OnSizeHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QPolarChart_UpdateGeometry(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperUpdateGeometry` instead
    ///
    pub const QBaseUpdateGeometry = SuperUpdateGeometry;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SuperUpdateGeometry(self: ?*anyopaque) void {
        qtc.QPolarChart_SuperUpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateGeometry(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnUpdateGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` change: qgraphicsitem_enums.GraphicsItemChange `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn ItemChange(self: ?*anyopaque, change: i32, value: ?*anyopaque) QtC.QVariant {
        return qtc.QPolarChart_ItemChange(@ptrCast(self), @bitCast(change), @ptrCast(value));
    }

    /// ### DEPRECATED: Use `SuperItemChange` instead
    ///
    pub const QBaseItemChange = SuperItemChange;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` change: qgraphicsitem_enums.GraphicsItemChange `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SuperItemChange(self: ?*anyopaque, change: i32, value: ?*anyopaque) QtC.QVariant {
        return qtc.QPolarChart_SuperItemChange(@ptrCast(self), @bitCast(change), @ptrCast(value));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, change: qgraphicsitem_enums.GraphicsItemChange, value: QtC.QVariant) callconv(.c) QtC.QVariant `
    ///
    pub fn OnItemChange(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QPolarChart_OnItemChange(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn PropertyChange(self: ?*anyopaque, propertyName: []const u8, value: ?*anyopaque) QtC.QVariant {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return qtc.QPolarChart_PropertyChange(@ptrCast(self), propertyName_str, @ptrCast(value));
    }

    /// ### DEPRECATED: Use `SuperPropertyChange` instead
    ///
    pub const QBasePropertyChange = SuperPropertyChange;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SuperPropertyChange(self: ?*anyopaque, propertyName: []const u8, value: ?*anyopaque) QtC.QVariant {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return qtc.QPolarChart_SuperPropertyChange(@ptrCast(self), propertyName_str, @ptrCast(value));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, propertyName: [*:0]const u8, value: QtC.QVariant) callconv(.c) QtC.QVariant `
    ///
    pub fn OnPropertyChange(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QPolarChart_OnPropertyChange(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPolarChart_SceneEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperSceneEvent` instead
    ///
    pub const QBaseSceneEvent = SuperSceneEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperSceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPolarChart_SuperSceneEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnSceneEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPolarChart_OnSceneEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` e: QtC.QEvent `
    ///
    pub fn WindowFrameEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QPolarChart_WindowFrameEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### DEPRECATED: Use `SuperWindowFrameEvent` instead
    ///
    pub const QBaseWindowFrameEvent = SuperWindowFrameEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` e: QtC.QEvent `
    ///
    pub fn SuperWindowFrameEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QPolarChart_SuperWindowFrameEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, e: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnWindowFrameEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPolarChart_OnWindowFrameEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` pos: QtC.QPointF `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowFrameSection `
    ///
    pub fn WindowFrameSectionAt(self: ?*anyopaque, pos: ?*anyopaque) i32 {
        return qtc.QPolarChart_WindowFrameSectionAt(@ptrCast(self), @ptrCast(pos));
    }

    /// ### DEPRECATED: Use `SuperWindowFrameSectionAt` instead
    ///
    pub const QBaseWindowFrameSectionAt = SuperWindowFrameSectionAt;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` pos: QtC.QPointF `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowFrameSection `
    ///
    pub fn SuperWindowFrameSectionAt(self: ?*anyopaque, pos: ?*anyopaque) i32 {
        return qtc.QPolarChart_SuperWindowFrameSectionAt(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, pos: QtC.QPointF) callconv(.c) i32 `
    ///
    pub fn OnWindowFrameSectionAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QPolarChart_OnWindowFrameSectionAt(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPolarChart_Event(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPolarChart_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPolarChart_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn ChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_ChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnChangeEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QCloseEvent `
    ///
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperCloseEvent` instead
    ///
    pub const QBaseCloseEvent = SuperCloseEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnCloseEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QFocusEvent `
    ///
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnFocusInEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QPolarChart_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QPolarChart_SuperFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QPolarChart_OnFocusNextPrevChild(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QFocusEvent `
    ///
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnFocusOutEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QHideEvent `
    ///
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperHideEvent` instead
    ///
    pub const QBaseHideEvent = SuperHideEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QHideEvent `
    ///
    pub fn SuperHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnHideEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneMoveEvent `
    ///
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperMoveEvent` instead
    ///
    pub const QBaseMoveEvent = SuperMoveEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneMoveEvent `
    ///
    pub fn SuperMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnMoveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn PolishEvent(self: ?*anyopaque) void {
        qtc.QPolarChart_PolishEvent(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperPolishEvent` instead
    ///
    pub const QBasePolishEvent = SuperPolishEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SuperPolishEvent(self: ?*anyopaque) void {
        qtc.QPolarChart_SuperPolishEvent(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnPolishEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnPolishEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneResizeEvent `
    ///
    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneResizeEvent `
    ///
    pub fn SuperResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnResizeEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QShowEvent `
    ///
    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QShowEvent `
    ///
    pub fn SuperShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnShowEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn HoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_HoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperHoverMoveEvent` instead
    ///
    pub const QBaseHoverMoveEvent = SuperHoverMoveEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn SuperHoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperHoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn OnHoverMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnHoverMoveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn HoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_HoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperHoverLeaveEvent` instead
    ///
    pub const QBaseHoverLeaveEvent = SuperHoverLeaveEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn SuperHoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperHoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn OnHoverLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnHoverLeaveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn GrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_GrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperGrabMouseEvent` instead
    ///
    pub const QBaseGrabMouseEvent = SuperGrabMouseEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperGrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperGrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnGrabMouseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnGrabMouseEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn UngrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_UngrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperUngrabMouseEvent` instead
    ///
    pub const QBaseUngrabMouseEvent = SuperUngrabMouseEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperUngrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperUngrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnUngrabMouseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnUngrabMouseEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn GrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_GrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperGrabKeyboardEvent` instead
    ///
    pub const QBaseGrabKeyboardEvent = SuperGrabKeyboardEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperGrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperGrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnGrabKeyboardEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnGrabKeyboardEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn UngrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_UngrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperUngrabKeyboardEvent` instead
    ///
    pub const QBaseUngrabKeyboardEvent = SuperUngrabKeyboardEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperUngrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperUngrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnUngrabKeyboardEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnUngrabKeyboardEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPolarChart_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
    /// ` self: QtC.QPolarChart `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPolarChart_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPolarChart_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPolarChart_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QPolarChart `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPolarChart_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPolarChart_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QPolarChart `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPolarChart_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` phase: i32 `
    ///
    pub fn Advance(self: ?*anyopaque, phase: i32) void {
        qtc.QPolarChart_Advance(@ptrCast(self), @bitCast(phase));
    }

    /// ### DEPRECATED: Use `SuperAdvance` instead
    ///
    pub const QBaseAdvance = SuperAdvance;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` phase: i32 `
    ///
    pub fn SuperAdvance(self: ?*anyopaque, phase: i32) void {
        qtc.QPolarChart_SuperAdvance(@ptrCast(self), @bitCast(phase));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, phase: i32) callconv(.c) void `
    ///
    pub fn OnAdvance(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPolarChart_OnAdvance(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn Contains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QPolarChart_Contains(@ptrCast(self), @ptrCast(point));
    }

    /// ### DEPRECATED: Use `SuperContains` instead
    ///
    pub const QBaseContains = SuperContains;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn SuperContains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QPolarChart_SuperContains(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, point: QtC.QPointF) callconv(.c) bool `
    ///
    pub fn OnContains(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPolarChart_OnContains(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` other: QtC.QGraphicsItem `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn CollidesWithItem(self: ?*anyopaque, other: ?*anyopaque, mode: i32) bool {
        return qtc.QPolarChart_CollidesWithItem(@ptrCast(self), @ptrCast(other), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `SuperCollidesWithItem` instead
    ///
    pub const QBaseCollidesWithItem = SuperCollidesWithItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` other: QtC.QGraphicsItem `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn SuperCollidesWithItem(self: ?*anyopaque, other: ?*anyopaque, mode: i32) bool {
        return qtc.QPolarChart_SuperCollidesWithItem(@ptrCast(self), @ptrCast(other), @bitCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, other: QtC.QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool `
    ///
    pub fn OnCollidesWithItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QPolarChart_OnCollidesWithItem(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn CollidesWithPath(self: ?*anyopaque, path: ?*anyopaque, mode: i32) bool {
        return qtc.QPolarChart_CollidesWithPath(@ptrCast(self), @ptrCast(path), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `SuperCollidesWithPath` instead
    ///
    pub const QBaseCollidesWithPath = SuperCollidesWithPath;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn SuperCollidesWithPath(self: ?*anyopaque, path: ?*anyopaque, mode: i32) bool {
        return qtc.QPolarChart_SuperCollidesWithPath(@ptrCast(self), @ptrCast(path), @bitCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, path: QtC.QPainterPath, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool `
    ///
    pub fn OnCollidesWithPath(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QPolarChart_OnCollidesWithPath(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    pub fn IsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QPolarChart_IsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// ### DEPRECATED: Use `SuperIsObscuredBy` instead
    ///
    pub const QBaseIsObscuredBy = SuperIsObscuredBy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    pub fn SuperIsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QPolarChart_SuperIsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, item: QtC.QGraphicsItem) callconv(.c) bool `
    ///
    pub fn OnIsObscuredBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPolarChart_OnIsObscuredBy(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn OpaqueArea(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPolarChart_OpaqueArea(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperOpaqueArea` instead
    ///
    pub const QBaseOpaqueArea = SuperOpaqueArea;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SuperOpaqueArea(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPolarChart_SuperOpaqueArea(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPainterPath `
    ///
    pub fn OnOpaqueArea(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainterPath) void {
        qtc.QPolarChart_OnOpaqueArea(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` watched: QtC.QGraphicsItem `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SceneEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPolarChart_SceneEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperSceneEventFilter` instead
    ///
    pub const QBaseSceneEventFilter = SuperSceneEventFilter;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` watched: QtC.QGraphicsItem `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperSceneEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPolarChart_SuperSceneEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, watched: QtC.QGraphicsItem, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnSceneEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPolarChart_OnSceneEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnContextMenuEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnDragEnterEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnDragLeaveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnDragMoveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnDropEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn HoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_HoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperHoverEnterEvent` instead
    ///
    pub const QBaseHoverEnterEvent = SuperHoverEnterEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn SuperHoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperHoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn OnHoverEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnHoverEnterEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QKeyEvent `
    ///
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnKeyPressEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnKeyReleaseEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnMousePressEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnMouseMoveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnMouseReleaseEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnMouseDoubleClickEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneWheelEvent `
    ///
    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QGraphicsSceneWheelEvent `
    ///
    pub fn SuperWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnWheelEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` event: QtC.QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_SuperInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, event: QtC.QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnInputMethodEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: ?*anyopaque, query: i32) QtC.QVariant {
        return qtc.QPolarChart_InputMethodQuery(@ptrCast(self), @bitCast(query));
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: ?*anyopaque, query: i32) QtC.QVariant {
        return qtc.QPolarChart_SuperInputMethodQuery(@ptrCast(self), @bitCast(query));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, query: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant `
    ///
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QPolarChart_OnInputMethodQuery(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    pub fn SupportsExtension(self: ?*anyopaque, extension: i32) bool {
        return qtc.QPolarChart_SupportsExtension(@ptrCast(self), @bitCast(extension));
    }

    /// ### DEPRECATED: Use `SuperSupportsExtension` instead
    ///
    pub const QBaseSupportsExtension = SuperSupportsExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    pub fn SuperSupportsExtension(self: ?*anyopaque, extension: i32) bool {
        return qtc.QPolarChart_SuperSupportsExtension(@ptrCast(self), @bitCast(extension));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, extension: qgraphicsitem_enums.Extension) callconv(.c) bool `
    ///
    pub fn OnSupportsExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QPolarChart_OnSupportsExtension(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    /// ` variant: QtC.QVariant `
    ///
    pub fn SetExtension(self: ?*anyopaque, extension: i32, variant: ?*anyopaque) void {
        qtc.QPolarChart_SetExtension(@ptrCast(self), @bitCast(extension), @ptrCast(variant));
    }

    /// ### DEPRECATED: Use `SuperSetExtension` instead
    ///
    pub const QBaseSetExtension = SuperSetExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    /// ` variant: QtC.QVariant `
    ///
    pub fn SuperSetExtension(self: ?*anyopaque, extension: i32, variant: ?*anyopaque) void {
        qtc.QPolarChart_SuperSetExtension(@ptrCast(self), @bitCast(extension), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, extension: qgraphicsitem_enums.Extension, variant: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnSetExtension(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` variant: QtC.QVariant `
    ///
    pub fn Extension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QPolarChart_Extension(@ptrCast(self), @ptrCast(variant));
    }

    /// ### DEPRECATED: Use `SuperExtension` instead
    ///
    pub const QBaseExtension = SuperExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` variant: QtC.QVariant `
    ///
    pub fn SuperExtension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QPolarChart_SuperExtension(@ptrCast(self), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, variant: QtC.QVariant) callconv(.c) QtC.QVariant `
    ///
    pub fn OnExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QPolarChart_OnExtension(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QPolarChart_IsEmpty(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperIsEmpty` instead
    ///
    pub const QBaseIsEmpty = SuperIsEmpty;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SuperIsEmpty(self: ?*anyopaque) bool {
        return qtc.QPolarChart_SuperIsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QPolarChart_OnIsEmpty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QPolarChart_UpdateMicroFocus(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperUpdateMicroFocus` instead
    ///
    pub const QBaseUpdateMicroFocus = SuperUpdateMicroFocus;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SuperUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QPolarChart_SuperUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnUpdateMicroFocus(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPolarChart_Sender(@ptrCast(self));
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
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPolarChart_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QPolarChart_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPolarChart_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPolarChart_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QPolarChart_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPolarChart_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QPolarChart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPolarChart_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPolarChart_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPolarChart_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QPolarChart `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPolarChart_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPolarChart_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn AddToIndex(self: ?*anyopaque) void {
        qtc.QPolarChart_AddToIndex(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperAddToIndex` instead
    ///
    pub const QBaseAddToIndex = SuperAddToIndex;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SuperAddToIndex(self: ?*anyopaque) void {
        qtc.QPolarChart_SuperAddToIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAddToIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnAddToIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn RemoveFromIndex(self: ?*anyopaque) void {
        qtc.QPolarChart_RemoveFromIndex(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperRemoveFromIndex` instead
    ///
    pub const QBaseRemoveFromIndex = SuperRemoveFromIndex;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SuperRemoveFromIndex(self: ?*anyopaque) void {
        qtc.QPolarChart_SuperRemoveFromIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRemoveFromIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnRemoveFromIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn PrepareGeometryChange(self: ?*anyopaque) void {
        qtc.QPolarChart_PrepareGeometryChange(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperPrepareGeometryChange` instead
    ///
    pub const QBasePrepareGeometryChange = SuperPrepareGeometryChange;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn SuperPrepareGeometryChange(self: ?*anyopaque) void {
        qtc.QPolarChart_SuperPrepareGeometryChange(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnPrepareGeometryChange(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnPrepareGeometryChange(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    pub fn SetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QPolarChart_SetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// ### DEPRECATED: Use `SuperSetGraphicsItem` instead
    ///
    pub const QBaseSetGraphicsItem = SuperSetGraphicsItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    pub fn SuperSetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QPolarChart_SuperSetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, item: QtC.QGraphicsItem) callconv(.c) void `
    ///
    pub fn OnSetGraphicsItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnSetGraphicsItem(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` ownedByLayout: bool `
    ///
    pub fn SetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        qtc.QPolarChart_SetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// ### DEPRECATED: Use `SuperSetOwnedByLayout` instead
    ///
    pub const QBaseSetOwnedByLayout = SuperSetOwnedByLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` ownedByLayout: bool `
    ///
    pub fn SuperSetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        qtc.QPolarChart_SuperSetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart`
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, ownedByLayout: bool) callconv(.c) void `
    ///
    pub fn OnSetOwnedByLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPolarChart_OnSetOwnedByLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    /// ` callback: *const fn (self: QtC.QPolarChart, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#dtor.QPolarChart)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPolarChart `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QPolarChart_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#public-types)
pub const enums = struct {
    pub const PolarOrientation = enum(i32) {
        pub const PolarOrientationRadial: i32 = 1;
        pub const PolarOrientationAngular: i32 = 2;
    };
};
