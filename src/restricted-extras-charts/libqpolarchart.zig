const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qchart_enums = @import("libqchart.zig").enums;
const qgraphicsitem_enums = @import("../libqgraphicsitem.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpolarchart_enums = enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qpolarchart-qtcharts.html
pub const qpolarchart = struct {
    /// New constructs a new QPolarChart object.
    ///
    ///
    pub fn New() QtC.QPolarChart {
        return qtc.QPolarChart_new();
    }

    /// New2 constructs a new QPolarChart object.
    ///
    /// ``` parent: QtC.QGraphicsItem ```
    pub fn New2(parent: ?*anyopaque) QtC.QPolarChart {
        return qtc.QPolarChart_new2(@ptrCast(parent));
    }

    /// New3 constructs a new QPolarChart object.
    ///
    /// ``` parent: QtC.QGraphicsItem, wFlags: flag of qnamespace_enums.WindowType ```
    pub fn New3(parent: ?*anyopaque, wFlags: i64) QtC.QPolarChart {
        return qtc.QPolarChart_new3(@ptrCast(parent), @intCast(wFlags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QPolarChart_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QPolarChart, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPolarChart_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QPolarChart, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QPolarChart_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QPolarChart_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QPolarChart, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QPolarChart_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QPolarChart_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#addAxis)
    ///
    /// ``` self: QtC.QPolarChart, axis: QtC.QAbstractAxis, polarOrientation: qpolarchart_enums.PolarOrientation ```
    pub fn AddAxis(self: ?*anyopaque, axis: ?*anyopaque, polarOrientation: i32) void {
        qtc.QPolarChart_AddAxis(@ptrCast(self), @ptrCast(axis), @intCast(polarOrientation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axes)
    ///
    /// ``` self: QtC.QPolarChart, allocator: std.mem.Allocator ```
    pub fn Axes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QPolarChart_Axes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractAxis, _arr.len) catch @panic("qpolarchart.Axes: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axisPolarOrientation)
    ///
    /// ``` axis: QtC.QAbstractAxis ```
    ///
    /// Returns: ``` qpolarchart_enums.PolarOrientation ```
    pub fn AxisPolarOrientation(axis: ?*anyopaque) i32 {
        return qtc.QPolarChart_AxisPolarOrientation(@ptrCast(axis));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QPolarChart_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QPolarChart_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axes)
    ///
    /// ``` self: QtC.QPolarChart, polarOrientation: flag of qpolarchart_enums.PolarOrientation, allocator: std.mem.Allocator ```
    pub fn Axes1(self: ?*anyopaque, polarOrientation: i32, allocator: std.mem.Allocator) []QtC.QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QPolarChart_Axes1(@ptrCast(self), @intCast(polarOrientation));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractAxis, _arr.len) catch @panic("qpolarchart.Axes1: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axes)
    ///
    /// ``` self: QtC.QPolarChart, polarOrientation: flag of qpolarchart_enums.PolarOrientation, series: QtC.QAbstractSeries, allocator: std.mem.Allocator ```
    pub fn Axes2(self: ?*anyopaque, polarOrientation: i32, series: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QPolarChart_Axes2(@ptrCast(self), @intCast(polarOrientation), @ptrCast(series));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractAxis, _arr.len) catch @panic("qpolarchart.Axes2: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#addSeries)
    ///
    /// ``` self: QtC.QPolarChart, series: QtC.QAbstractSeries ```
    pub fn AddSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QChart_AddSeries(@ptrCast(self), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#removeSeries)
    ///
    /// ``` self: QtC.QPolarChart, series: QtC.QAbstractSeries ```
    pub fn RemoveSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QChart_RemoveSeries(@ptrCast(self), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#removeAllSeries)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn RemoveAllSeries(self: ?*anyopaque) void {
        qtc.QChart_RemoveAllSeries(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#series)
    ///
    /// ``` self: QtC.QPolarChart, allocator: std.mem.Allocator ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisX)
    ///
    /// ``` self: QtC.QPolarChart, axis: QtC.QAbstractAxis ```
    pub fn SetAxisX(self: ?*anyopaque, axis: ?*anyopaque) void {
        qtc.QChart_SetAxisX(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisY)
    ///
    /// ``` self: QtC.QPolarChart, axis: QtC.QAbstractAxis ```
    pub fn SetAxisY(self: ?*anyopaque, axis: ?*anyopaque) void {
        qtc.QChart_SetAxisY(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisX)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn AxisX(self: ?*anyopaque) QtC.QAbstractAxis {
        return qtc.QChart_AxisX(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisY)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn AxisY(self: ?*anyopaque) QtC.QAbstractAxis {
        return qtc.QChart_AxisY(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#removeAxis)
    ///
    /// ``` self: QtC.QPolarChart, axis: QtC.QAbstractAxis ```
    pub fn RemoveAxis(self: ?*anyopaque, axis: ?*anyopaque) void {
        qtc.QChart_RemoveAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#createDefaultAxes)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn CreateDefaultAxes(self: ?*anyopaque) void {
        qtc.QChart_CreateDefaultAxes(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTheme)
    ///
    /// ``` self: QtC.QPolarChart, theme: qchart_enums.ChartTheme ```
    pub fn SetTheme(self: ?*anyopaque, theme: i32) void {
        qtc.QChart_SetTheme(@ptrCast(self), @intCast(theme));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#theme)
    ///
    /// ``` self: QtC.QPolarChart ```
    ///
    /// Returns: ``` qchart_enums.ChartTheme ```
    pub fn Theme(self: ?*anyopaque) i32 {
        return qtc.QChart_Theme(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTitle)
    ///
    /// ``` self: QtC.QPolarChart, title: []const u8 ```
    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QChart_SetTitle(@ptrCast(self), title_str);
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#title)
    ///
    /// ``` self: QtC.QPolarChart, allocator: std.mem.Allocator ```
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QChart_Title(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTitleFont)
    ///
    /// ``` self: QtC.QPolarChart, font: QtC.QFont ```
    pub fn SetTitleFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QChart_SetTitleFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#titleFont)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn TitleFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QChart_TitleFont(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTitleBrush)
    ///
    /// ``` self: QtC.QPolarChart, brush: QtC.QBrush ```
    pub fn SetTitleBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QChart_SetTitleBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#titleBrush)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn TitleBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QChart_TitleBrush(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundBrush)
    ///
    /// ``` self: QtC.QPolarChart, brush: QtC.QBrush ```
    pub fn SetBackgroundBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QChart_SetBackgroundBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#backgroundBrush)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn BackgroundBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QChart_BackgroundBrush(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundPen)
    ///
    /// ``` self: QtC.QPolarChart, pen: QtC.QPen ```
    pub fn SetBackgroundPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QChart_SetBackgroundPen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#backgroundPen)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn BackgroundPen(self: ?*anyopaque) QtC.QPen {
        return qtc.QChart_BackgroundPen(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundVisible)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn SetBackgroundVisible(self: ?*anyopaque) void {
        qtc.QChart_SetBackgroundVisible(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isBackgroundVisible)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsBackgroundVisible(self: ?*anyopaque) bool {
        return qtc.QChart_IsBackgroundVisible(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setDropShadowEnabled)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn SetDropShadowEnabled(self: ?*anyopaque) void {
        qtc.QChart_SetDropShadowEnabled(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isDropShadowEnabled)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsDropShadowEnabled(self: ?*anyopaque) bool {
        return qtc.QChart_IsDropShadowEnabled(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundRoundness)
    ///
    /// ``` self: QtC.QPolarChart, diameter: f64 ```
    pub fn SetBackgroundRoundness(self: ?*anyopaque, diameter: f64) void {
        qtc.QChart_SetBackgroundRoundness(@ptrCast(self), @floatCast(diameter));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#backgroundRoundness)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn BackgroundRoundness(self: ?*anyopaque) f64 {
        return qtc.QChart_BackgroundRoundness(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAnimationOptions)
    ///
    /// ``` self: QtC.QPolarChart, options: flag of qchart_enums.AnimationOption ```
    pub fn SetAnimationOptions(self: ?*anyopaque, options: i32) void {
        qtc.QChart_SetAnimationOptions(@ptrCast(self), @intCast(options));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#animationOptions)
    ///
    /// ``` self: QtC.QPolarChart ```
    ///
    /// Returns: ``` flag of qchart_enums.AnimationOption ```
    pub fn AnimationOptions(self: ?*anyopaque) i32 {
        return qtc.QChart_AnimationOptions(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAnimationDuration)
    ///
    /// ``` self: QtC.QPolarChart, msecs: i32 ```
    pub fn SetAnimationDuration(self: ?*anyopaque, msecs: i32) void {
        qtc.QChart_SetAnimationDuration(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#animationDuration)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn AnimationDuration(self: ?*anyopaque) i32 {
        return qtc.QChart_AnimationDuration(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAnimationEasingCurve)
    ///
    /// ``` self: QtC.QPolarChart, curve: QtC.QEasingCurve ```
    pub fn SetAnimationEasingCurve(self: ?*anyopaque, curve: ?*anyopaque) void {
        qtc.QChart_SetAnimationEasingCurve(@ptrCast(self), @ptrCast(curve));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#animationEasingCurve)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn AnimationEasingCurve(self: ?*anyopaque) QtC.QEasingCurve {
        return qtc.QChart_AnimationEasingCurve(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomIn)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ZoomIn(self: ?*anyopaque) void {
        qtc.QChart_ZoomIn(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomOut)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ZoomOut(self: ?*anyopaque) void {
        qtc.QChart_ZoomOut(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomIn)
    ///
    /// ``` self: QtC.QPolarChart, rect: QtC.QRectF ```
    pub fn ZoomIn2(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QChart_ZoomIn2(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoom)
    ///
    /// ``` self: QtC.QPolarChart, factor: f64 ```
    pub fn Zoom(self: ?*anyopaque, factor: f64) void {
        qtc.QChart_Zoom(@ptrCast(self), @floatCast(factor));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomReset)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ZoomReset(self: ?*anyopaque) void {
        qtc.QChart_ZoomReset(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isZoomed)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsZoomed(self: ?*anyopaque) bool {
        return qtc.QChart_IsZoomed(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#scroll)
    ///
    /// ``` self: QtC.QPolarChart, dx: f64, dy: f64 ```
    pub fn Scroll(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QChart_Scroll(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#legend)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Legend(self: ?*anyopaque) QtC.QLegend {
        return qtc.QChart_Legend(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setMargins)
    ///
    /// ``` self: QtC.QPolarChart, margins: QtC.QMargins ```
    pub fn SetMargins(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QChart_SetMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#margins)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Margins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QChart_Margins(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotArea)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn PlotArea(self: ?*anyopaque) QtC.QRectF {
        return qtc.QChart_PlotArea(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotArea)
    ///
    /// ``` self: QtC.QPolarChart, rect: QtC.QRectF ```
    pub fn SetPlotArea(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QChart_SetPlotArea(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundBrush)
    ///
    /// ``` self: QtC.QPolarChart, brush: QtC.QBrush ```
    pub fn SetPlotAreaBackgroundBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QChart_SetPlotAreaBackgroundBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundBrush)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn PlotAreaBackgroundBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QChart_PlotAreaBackgroundBrush(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundPen)
    ///
    /// ``` self: QtC.QPolarChart, pen: QtC.QPen ```
    pub fn SetPlotAreaBackgroundPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QChart_SetPlotAreaBackgroundPen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundPen)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn PlotAreaBackgroundPen(self: ?*anyopaque) QtC.QPen {
        return qtc.QChart_PlotAreaBackgroundPen(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundVisible)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn SetPlotAreaBackgroundVisible(self: ?*anyopaque) void {
        qtc.QChart_SetPlotAreaBackgroundVisible(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isPlotAreaBackgroundVisible)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsPlotAreaBackgroundVisible(self: ?*anyopaque) bool {
        return qtc.QChart_IsPlotAreaBackgroundVisible(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setLocalizeNumbers)
    ///
    /// ``` self: QtC.QPolarChart, localize: bool ```
    pub fn SetLocalizeNumbers(self: ?*anyopaque, localize: bool) void {
        qtc.QChart_SetLocalizeNumbers(@ptrCast(self), localize);
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#localizeNumbers)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn LocalizeNumbers(self: ?*anyopaque) bool {
        return qtc.QChart_LocalizeNumbers(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setLocale)
    ///
    /// ``` self: QtC.QPolarChart, locale: QtC.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QChart_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#locale)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QChart_Locale(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToValue)
    ///
    /// ``` self: QtC.QPolarChart, position: QtC.QPointF ```
    pub fn MapToValue(self: ?*anyopaque, position: ?*anyopaque) QtC.QPointF {
        return qtc.QChart_MapToValue(@ptrCast(self), @ptrCast(position));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToPosition)
    ///
    /// ``` self: QtC.QPolarChart, value: QtC.QPointF ```
    pub fn MapToPosition(self: ?*anyopaque, value: ?*anyopaque) QtC.QPointF {
        return qtc.QChart_MapToPosition(@ptrCast(self), @ptrCast(value));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#chartType)
    ///
    /// ``` self: QtC.QPolarChart ```
    ///
    /// Returns: ``` qchart_enums.ChartType ```
    pub fn ChartType(self: ?*anyopaque) i32 {
        return qtc.QChart_ChartType(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotAreaChanged)
    ///
    /// ``` self: QtC.QPolarChart, plotArea: QtC.QRectF ```
    pub fn PlotAreaChanged(self: ?*anyopaque, plotArea: ?*anyopaque) void {
        qtc.QChart_PlotAreaChanged(@ptrCast(self), @ptrCast(plotArea));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotAreaChanged)
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, plotArea: QtC.QRectF) callconv(.c) void ```
    pub fn OnPlotAreaChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QChart_Connect_PlotAreaChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisX)
    ///
    /// ``` self: QtC.QPolarChart, axis: QtC.QAbstractAxis, series: QtC.QAbstractSeries ```
    pub fn SetAxisX2(self: ?*anyopaque, axis: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QChart_SetAxisX2(@ptrCast(self), @ptrCast(axis), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisY)
    ///
    /// ``` self: QtC.QPolarChart, axis: QtC.QAbstractAxis, series: QtC.QAbstractSeries ```
    pub fn SetAxisY2(self: ?*anyopaque, axis: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QChart_SetAxisY2(@ptrCast(self), @ptrCast(axis), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisX)
    ///
    /// ``` self: QtC.QPolarChart, series: QtC.QAbstractSeries ```
    pub fn AxisX1(self: ?*anyopaque, series: ?*anyopaque) QtC.QAbstractAxis {
        return qtc.QChart_AxisX1(@ptrCast(self), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisY)
    ///
    /// ``` self: QtC.QPolarChart, series: QtC.QAbstractSeries ```
    pub fn AxisY1(self: ?*anyopaque, series: ?*anyopaque) QtC.QAbstractAxis {
        return qtc.QChart_AxisY1(@ptrCast(self), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundVisible)
    ///
    /// ``` self: QtC.QPolarChart, visible: bool ```
    pub fn SetBackgroundVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QChart_SetBackgroundVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setDropShadowEnabled)
    ///
    /// ``` self: QtC.QPolarChart, enabled: bool ```
    pub fn SetDropShadowEnabled1(self: ?*anyopaque, enabled: bool) void {
        qtc.QChart_SetDropShadowEnabled1(@ptrCast(self), enabled);
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundVisible)
    ///
    /// ``` self: QtC.QPolarChart, visible: bool ```
    pub fn SetPlotAreaBackgroundVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QChart_SetPlotAreaBackgroundVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToValue)
    ///
    /// ``` self: QtC.QPolarChart, position: QtC.QPointF, series: QtC.QAbstractSeries ```
    pub fn MapToValue2(self: ?*anyopaque, position: ?*anyopaque, series: ?*anyopaque) QtC.QPointF {
        return qtc.QChart_MapToValue2(@ptrCast(self), @ptrCast(position), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToPosition)
    ///
    /// ``` self: QtC.QPolarChart, value: QtC.QPointF, series: QtC.QAbstractSeries ```
    pub fn MapToPosition2(self: ?*anyopaque, value: ?*anyopaque, series: ?*anyopaque) QtC.QPointF {
        return qtc.QChart_MapToPosition2(@ptrCast(self), @ptrCast(value), @ptrCast(series));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Layout(self: ?*anyopaque) QtC.QGraphicsLayout {
        return qtc.QGraphicsWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
    ///
    /// ``` self: QtC.QPolarChart, layout: QtC.QGraphicsLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
    ///
    /// ``` self: QtC.QPolarChart ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
    ///
    /// ``` self: QtC.QPolarChart, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QGraphicsWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QGraphicsWidget_Style(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
    ///
    /// ``` self: QtC.QPolarChart, style: QtC.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QGraphicsWidget_Font(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
    ///
    /// ``` self: QtC.QPolarChart, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QGraphicsWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
    ///
    /// ``` self: QtC.QPolarChart, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
    ///
    /// ``` self: QtC.QPolarChart, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ``` self: QtC.QPolarChart, size: QtC.QSizeF ```
    pub fn Resize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsWidget_Resize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ``` self: QtC.QPolarChart, w: f64, h: f64 ```
    pub fn Resize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsWidget_Resize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Size(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsWidget_Size(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// ``` self: QtC.QPolarChart, x: f64, y: f64, w: f64, h: f64 ```
    pub fn SetGeometry2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsWidget_SetGeometry2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Rect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.QPolarChart, left: f64, top: f64, right: f64, bottom: f64 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsWidget_SetContentsMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.QPolarChart, margins: QtC.QMarginsF ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: QtC.QMarginsF) void {
        qtc.QGraphicsWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ``` self: QtC.QPolarChart, left: f64, top: f64, right: f64, bottom: f64 ```
    pub fn SetWindowFrameMargins(self: ?*anyopaque, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsWidget_SetWindowFrameMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ``` self: QtC.QPolarChart, margins: QtC.QMarginsF ```
    pub fn SetWindowFrameMargins2(self: ?*anyopaque, margins: QtC.QMarginsF) void {
        qtc.QGraphicsWidget_SetWindowFrameMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
    ///
    /// ``` self: QtC.QPolarChart, left: *f64, top: *f64, right: *f64, bottom: *f64 ```
    pub fn GetWindowFrameMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsWidget_GetWindowFrameMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn UnsetWindowFrameMargins(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_UnsetWindowFrameMargins(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn WindowFrameGeometry(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsWidget_WindowFrameGeometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn WindowFrameRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsWidget_WindowFrameRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
    ///
    /// ``` self: QtC.QPolarChart ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowType ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return qtc.QGraphicsWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
    ///
    /// ``` self: QtC.QPolarChart ```
    ///
    /// Returns: ``` qnamespace_enums.WindowType ```
    pub fn WindowType(self: ?*anyopaque) i64 {
        return qtc.QGraphicsWidget_WindowType(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
    ///
    /// ``` self: QtC.QPolarChart, wFlags: flag of qnamespace_enums.WindowType ```
    pub fn SetWindowFlags(self: ?*anyopaque, wFlags: i64) void {
        qtc.QGraphicsWidget_SetWindowFlags(@ptrCast(self), @intCast(wFlags));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
    ///
    /// ``` self: QtC.QPolarChart, title: []const u8 ```
    pub fn SetWindowTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QGraphicsWidget_SetWindowTitle(@ptrCast(self), title_str);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
    ///
    /// ``` self: QtC.QPolarChart, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsWidget_WindowTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
    ///
    /// ``` self: QtC.QPolarChart ```
    ///
    /// Returns: ``` qnamespace_enums.FocusPolicy ```
    pub fn FocusPolicy(self: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
    ///
    /// ``` self: QtC.QPolarChart, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QGraphicsWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
    ///
    /// ``` first: QtC.QGraphicsWidget, second: QtC.QGraphicsWidget ```
    pub fn SetTabOrder(first: ?*anyopaque, second: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetTabOrder(@ptrCast(first), @ptrCast(second));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn FocusWidget(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
    ///
    /// ``` self: QtC.QPolarChart, sequence: QtC.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, sequence: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_GrabShortcut(@ptrCast(self), @ptrCast(sequence));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
    ///
    /// ``` self: QtC.QPolarChart, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QGraphicsWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.QPolarChart, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QGraphicsWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.QPolarChart, id: i32 ```
    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        qtc.QGraphicsWidget_SetShortcutAutoRepeat(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
    ///
    /// ``` self: QtC.QPolarChart, action: QtC.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QGraphicsWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
    ///
    /// ``` self: QtC.QPolarChart, actions: []QtC.QAction ```
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QGraphicsWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
    ///
    /// ``` self: QtC.QPolarChart, before: QtC.QAction, actions: []QtC.QAction ```
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QGraphicsWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
    ///
    /// ``` self: QtC.QPolarChart, before: QtC.QAction, action: QtC.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QGraphicsWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
    ///
    /// ``` self: QtC.QPolarChart, action: QtC.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QGraphicsWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
    ///
    /// ``` self: QtC.QPolarChart, allocator: std.mem.Allocator ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
    ///
    /// ``` self: QtC.QPolarChart, attribute: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, attribute: i32) void {
        qtc.QGraphicsWidget_SetAttribute(@ptrCast(self), @intCast(attribute));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
    ///
    /// ``` self: QtC.QPolarChart, attribute: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, attribute: i32) bool {
        return qtc.QGraphicsWidget_TestAttribute(@ptrCast(self), @intCast(attribute));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn GeometryChanged(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_GeometryChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart) callconv(.c) void ```
    pub fn OnGeometryChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_Connect_GeometryChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn LayoutChanged(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_LayoutChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart) callconv(.c) void ```
    pub fn OnLayoutChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_Connect_LayoutChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_Close(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
    ///
    /// ``` self: QtC.QPolarChart, sequence: QtC.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, sequence: ?*anyopaque, context: i32) i32 {
        return qtc.QGraphicsWidget_GrabShortcut2(@ptrCast(self), @ptrCast(sequence), @intCast(context));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.QPolarChart, id: i32, enabled: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enabled: bool) void {
        qtc.QGraphicsWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enabled);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.QPolarChart, id: i32, enabled: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enabled: bool) void {
        qtc.QGraphicsWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enabled);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
    ///
    /// ``` self: QtC.QPolarChart, attribute: qnamespace_enums.WidgetAttribute, on: bool ```
    pub fn SetAttribute2(self: ?*anyopaque, attribute: i32, on: bool) void {
        qtc.QGraphicsWidget_SetAttribute2(@ptrCast(self), @intCast(attribute), on);
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ``` self: QtC.QPolarChart, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QGraphicsObject_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
    ///
    /// ``` self: QtC.QPolarChart, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QGraphicsObject_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ParentChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ParentChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart) callconv(.c) void ```
    pub fn OnParentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ParentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn OpacityChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_OpacityChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart) callconv(.c) void ```
    pub fn OnOpacityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_OpacityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn VisibleChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_VisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn EnabledChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_EnabledChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart) callconv(.c) void ```
    pub fn OnEnabledChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_EnabledChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn XChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_XChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart) callconv(.c) void ```
    pub fn OnXChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_XChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn YChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_YChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart) callconv(.c) void ```
    pub fn OnYChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_YChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ZChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ZChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart) callconv(.c) void ```
    pub fn OnZChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ZChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn RotationChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_RotationChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart) callconv(.c) void ```
    pub fn OnRotationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_RotationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ScaleChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ScaleChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart) callconv(.c) void ```
    pub fn OnScaleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ScaleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ChildrenChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ChildrenChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart) callconv(.c) void ```
    pub fn OnChildrenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ChildrenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn WidthChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_WidthChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart) callconv(.c) void ```
    pub fn OnWidthChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_WidthChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn HeightChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_HeightChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart) callconv(.c) void ```
    pub fn OnHeightChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_HeightChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ``` self: QtC.QPolarChart, typeVal: qnamespace_enums.GestureType, flags: flag of qnamespace_enums.GestureFlag ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i32) void {
        qtc.QGraphicsObject_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QPolarChart, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QPolarChart, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QPolarChart, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QPolarChart, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QPolarChart, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QPolarChart, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QPolarChart, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QPolarChart, allocator: std.mem.Allocator ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QPolarChart, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QPolarChart, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QPolarChart, obj: QtC.QObject ```
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
    /// ``` self: QtC.QPolarChart, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QPolarChart ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QPolarChart, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QPolarChart, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QPolarChart, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QPolarChart, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QPolarChart, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QPolarChart, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QPolarChart, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QPolarChart, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Scene(self: ?*anyopaque) QtC.QGraphicsScene {
        return qtc.QGraphicsItem_Scene(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ParentItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_ParentItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn TopLevelItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_TopLevelItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ParentObject(self: ?*anyopaque) QtC.QGraphicsObject {
        return qtc.QGraphicsItem_ParentObject(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsItem_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsItem_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Window(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsItem_Window(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Panel(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_Panel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
    ///
    /// ``` self: QtC.QPolarChart, parent: QtC.QGraphicsItem ```
    pub fn SetParentItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QGraphicsItem_SetParentItem(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
    ///
    /// ``` self: QtC.QPolarChart, allocator: std.mem.Allocator ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsWidget(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsWindow(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsPanel(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsPanel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ToGraphicsObject(self: ?*anyopaque) QtC.QGraphicsObject {
        return qtc.QGraphicsItem_ToGraphicsObject(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ToGraphicsObject2(self: ?*anyopaque) QtC.QGraphicsObject {
        return qtc.QGraphicsItem_ToGraphicsObject2(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Group(self: ?*anyopaque) QtC.QGraphicsItemGroup {
        return qtc.QGraphicsItem_Group(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
    ///
    /// ``` self: QtC.QPolarChart, group: QtC.QGraphicsItemGroup ```
    pub fn SetGroup(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.QGraphicsItem_SetGroup(@ptrCast(self), @ptrCast(group));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
    ///
    /// ``` self: QtC.QPolarChart ```
    ///
    /// Returns: ``` flag of qgraphicsitem_enums.GraphicsItemFlag ```
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItem_Flags(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ``` self: QtC.QPolarChart, flag: qgraphicsitem_enums.GraphicsItemFlag ```
    pub fn SetFlag(self: ?*anyopaque, flag: i32) void {
        qtc.QGraphicsItem_SetFlag(@ptrCast(self), @intCast(flag));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
    ///
    /// ``` self: QtC.QPolarChart, flags: flag of qgraphicsitem_enums.GraphicsItemFlag ```
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QGraphicsItem_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
    ///
    /// ``` self: QtC.QPolarChart ```
    ///
    /// Returns: ``` qgraphicsitem_enums.CacheMode ```
    pub fn CacheMode(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItem_CacheMode(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ``` self: QtC.QPolarChart, mode: qgraphicsitem_enums.CacheMode ```
    pub fn SetCacheMode(self: ?*anyopaque, mode: i32) void {
        qtc.QGraphicsItem_SetCacheMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
    ///
    /// ``` self: QtC.QPolarChart ```
    ///
    /// Returns: ``` qgraphicsitem_enums.PanelModality ```
    pub fn PanelModality(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItem_PanelModality(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
    ///
    /// ``` self: QtC.QPolarChart, panelModality: qgraphicsitem_enums.PanelModality ```
    pub fn SetPanelModality(self: ?*anyopaque, panelModality: i32) void {
        qtc.QGraphicsItem_SetPanelModality(@ptrCast(self), @intCast(panelModality));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsBlockedByModalPanel(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
    ///
    /// ``` self: QtC.QPolarChart, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsItem_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
    ///
    /// ``` self: QtC.QPolarChart, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QGraphicsItem_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QGraphicsItem_Cursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
    ///
    /// ``` self: QtC.QPolarChart, cursor: QtC.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QGraphicsItem_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn HasCursor(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_HasCursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QGraphicsItem_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsVisible(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
    ///
    /// ``` self: QtC.QPolarChart, parent: QtC.QGraphicsItem ```
    pub fn IsVisibleTo(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsVisibleTo(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
    ///
    /// ``` self: QtC.QPolarChart, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QGraphicsItem_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QGraphicsItem_Hide(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QGraphicsItem_Show(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
    ///
    /// ``` self: QtC.QPolarChart, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsSelected(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsSelected(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
    ///
    /// ``` self: QtC.QPolarChart, selected: bool ```
    pub fn SetSelected(self: ?*anyopaque, selected: bool) void {
        qtc.QGraphicsItem_SetSelected(@ptrCast(self), selected);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
    ///
    /// ``` self: QtC.QPolarChart, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QGraphicsItem_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Opacity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn EffectiveOpacity(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_EffectiveOpacity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
    ///
    /// ``` self: QtC.QPolarChart, opacity: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QGraphicsItem_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QGraphicsItem_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
    ///
    /// ``` self: QtC.QPolarChart, effect: QtC.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QGraphicsItem_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
    ///
    /// ``` self: QtC.QPolarChart ```
    ///
    /// Returns: ``` flag of qnamespace_enums.MouseButton ```
    pub fn AcceptedMouseButtons(self: ?*anyopaque) i64 {
        return qtc.QGraphicsItem_AcceptedMouseButtons(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
    ///
    /// ``` self: QtC.QPolarChart, buttons: flag of qnamespace_enums.MouseButton ```
    pub fn SetAcceptedMouseButtons(self: ?*anyopaque, buttons: i64) void {
        qtc.QGraphicsItem_SetAcceptedMouseButtons(@ptrCast(self), @intCast(buttons));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn AcceptHoverEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_AcceptHoverEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
    ///
    /// ``` self: QtC.QPolarChart, enabled: bool ```
    pub fn SetAcceptHoverEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptHoverEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn AcceptTouchEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_AcceptTouchEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
    ///
    /// ``` self: QtC.QPolarChart, enabled: bool ```
    pub fn SetAcceptTouchEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptTouchEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn FiltersChildEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_FiltersChildEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
    ///
    /// ``` self: QtC.QPolarChart, enabled: bool ```
    pub fn SetFiltersChildEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetFiltersChildEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn HandlesChildEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_HandlesChildEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
    ///
    /// ``` self: QtC.QPolarChart, enabled: bool ```
    pub fn SetHandlesChildEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetHandlesChildEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsActive(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
    ///
    /// ``` self: QtC.QPolarChart, active: bool ```
    pub fn SetActive(self: ?*anyopaque, active: bool) void {
        qtc.QGraphicsItem_SetActive(@ptrCast(self), active);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn HasFocus(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_HasFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QGraphicsItem_SetFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QGraphicsItem_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn FocusProxy(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
    ///
    /// ``` self: QtC.QPolarChart, item: QtC.QGraphicsItem ```
    pub fn SetFocusProxy(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsItem_SetFocusProxy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn FocusItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_FocusItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn FocusScopeItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_FocusScopeItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QGraphicsItem_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn UngrabMouse(self: ?*anyopaque) void {
        qtc.QGraphicsItem_UngrabMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QGraphicsItem_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn UngrabKeyboard(self: ?*anyopaque) void {
        qtc.QGraphicsItem_UngrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Pos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_Pos(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn X(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_X(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
    ///
    /// ``` self: QtC.QPolarChart, x: f64 ```
    pub fn SetX(self: ?*anyopaque, x: f64) void {
        qtc.QGraphicsItem_SetX(@ptrCast(self), @floatCast(x));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Y(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Y(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
    ///
    /// ``` self: QtC.QPolarChart, y: f64 ```
    pub fn SetY(self: ?*anyopaque, y: f64) void {
        qtc.QGraphicsItem_SetY(@ptrCast(self), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_ScenePos(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ``` self: QtC.QPolarChart, pos: QtC.QPointF ```
    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsItem_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ``` self: QtC.QPolarChart, x: f64, y: f64 ```
    pub fn SetPos2(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QGraphicsItem_SetPos2(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
    ///
    /// ``` self: QtC.QPolarChart, dx: f64, dy: f64 ```
    pub fn MoveBy(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_MoveBy(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn EnsureVisible(self: ?*anyopaque) void {
        qtc.QGraphicsItem_EnsureVisible(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QPolarChart, x: f64, y: f64, w: f64, h: f64 ```
    pub fn EnsureVisible2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsItem_EnsureVisible2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Transform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_Transform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn SceneTransform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_SceneTransform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
    ///
    /// ``` self: QtC.QPolarChart, viewportTransform: QtC.QTransform ```
    pub fn DeviceTransform(self: ?*anyopaque, viewportTransform: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_DeviceTransform(@ptrCast(self), @ptrCast(viewportTransform));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ``` self: QtC.QPolarChart, other: QtC.QGraphicsItem ```
    pub fn ItemTransform(self: ?*anyopaque, other: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_ItemTransform(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ``` self: QtC.QPolarChart, matrix: QtC.QTransform ```
    pub fn SetTransform(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QGraphicsItem_SetTransform(@ptrCast(self), @ptrCast(matrix));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ResetTransform(self: ?*anyopaque) void {
        qtc.QGraphicsItem_ResetTransform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
    ///
    /// ``` self: QtC.QPolarChart, angle: f64 ```
    pub fn SetRotation(self: ?*anyopaque, angle: f64) void {
        qtc.QGraphicsItem_SetRotation(@ptrCast(self), @floatCast(angle));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Rotation(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Rotation(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
    ///
    /// ``` self: QtC.QPolarChart, scale: f64 ```
    pub fn SetScale(self: ?*anyopaque, scale: f64) void {
        qtc.QGraphicsItem_SetScale(@ptrCast(self), @floatCast(scale));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Scale(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Scale(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
    ///
    /// ``` self: QtC.QPolarChart, allocator: std.mem.Allocator ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
    ///
    /// ``` self: QtC.QPolarChart, transformations: []QtC.QGraphicsTransform ```
    pub fn SetTransformations(self: ?*anyopaque, transformations: []?*anyopaque) void {
        const transformations_list = qtc.libqt_list{
            .len = transformations.len,
            .data = @ptrCast(transformations.ptr),
        };
        qtc.QGraphicsItem_SetTransformations(@ptrCast(self), transformations_list);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn TransformOriginPoint(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_TransformOriginPoint(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ``` self: QtC.QPolarChart, origin: QtC.QPointF ```
    pub fn SetTransformOriginPoint(self: ?*anyopaque, origin: ?*anyopaque) void {
        qtc.QGraphicsItem_SetTransformOriginPoint(@ptrCast(self), @ptrCast(origin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ``` self: QtC.QPolarChart, ax: f64, ay: f64 ```
    pub fn SetTransformOriginPoint2(self: ?*anyopaque, ax: f64, ay: f64) void {
        qtc.QGraphicsItem_SetTransformOriginPoint2(@ptrCast(self), @floatCast(ax), @floatCast(ay));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ZValue(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_ZValue(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
    ///
    /// ``` self: QtC.QPolarChart, z: f64 ```
    pub fn SetZValue(self: ?*anyopaque, z: f64) void {
        qtc.QGraphicsItem_SetZValue(@ptrCast(self), @floatCast(z));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
    ///
    /// ``` self: QtC.QPolarChart, sibling: QtC.QGraphicsItem ```
    pub fn StackBefore(self: ?*anyopaque, sibling: ?*anyopaque) void {
        qtc.QGraphicsItem_StackBefore(@ptrCast(self), @ptrCast(sibling));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ChildrenBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_ChildrenBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn SceneBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_SceneBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsClipped(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsClipped(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ClipPath(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_ClipPath(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ``` self: QtC.QPolarChart, allocator: std.mem.Allocator ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsObscured(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsObscured(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ``` self: QtC.QPolarChart, x: f64, y: f64, w: f64, h: f64 ```
    pub fn IsObscured2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) bool {
        return qtc.QGraphicsItem_IsObscured2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
    ///
    /// ``` self: QtC.QPolarChart, itemToDeviceTransform: QtC.QTransform ```
    pub fn BoundingRegion(self: ?*anyopaque, itemToDeviceTransform: ?*anyopaque) QtC.QRegion {
        return qtc.QGraphicsItem_BoundingRegion(@ptrCast(self), @ptrCast(itemToDeviceTransform));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn BoundingRegionGranularity(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_BoundingRegionGranularity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
    ///
    /// ``` self: QtC.QPolarChart, granularity: f64 ```
    pub fn SetBoundingRegionGranularity(self: ?*anyopaque, granularity: f64) void {
        qtc.QGraphicsItem_SetBoundingRegionGranularity(@ptrCast(self), @floatCast(granularity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QGraphicsItem_Update(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ``` self: QtC.QPolarChart, x: f64, y: f64, width: f64, height: f64 ```
    pub fn Update2(self: ?*anyopaque, x: f64, y: f64, width: f64, height: f64) void {
        qtc.QGraphicsItem_Update2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(width), @floatCast(height));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ``` self: QtC.QPolarChart, item: QtC.QGraphicsItem, point: QtC.QPointF ```
    pub fn MapToItem(self: ?*anyopaque, item: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapToItem(@ptrCast(self), @ptrCast(item), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ``` self: QtC.QPolarChart, point: QtC.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapToParent(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ``` self: QtC.QPolarChart, point: QtC.QPointF ```
    pub fn MapToScene(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapToScene(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ``` self: QtC.QPolarChart, item: QtC.QGraphicsItem, rect: QtC.QRectF ```
    pub fn MapRectToItem(self: ?*anyopaque, item: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToItem(@ptrCast(self), @ptrCast(item), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ``` self: QtC.QPolarChart, rect: QtC.QRectF ```
    pub fn MapRectToParent(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToParent(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ``` self: QtC.QPolarChart, rect: QtC.QRectF ```
    pub fn MapRectToScene(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToScene(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ``` self: QtC.QPolarChart, item: QtC.QGraphicsItem, path: QtC.QPainterPath ```
    pub fn MapToItem4(self: ?*anyopaque, item: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapToItem4(@ptrCast(self), @ptrCast(item), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ``` self: QtC.QPolarChart, path: QtC.QPainterPath ```
    pub fn MapToParent4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapToParent4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ``` self: QtC.QPolarChart, path: QtC.QPainterPath ```
    pub fn MapToScene4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapToScene4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ``` self: QtC.QPolarChart, item: QtC.QGraphicsItem, point: QtC.QPointF ```
    pub fn MapFromItem(self: ?*anyopaque, item: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromItem(@ptrCast(self), @ptrCast(item), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ``` self: QtC.QPolarChart, point: QtC.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromParent(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ``` self: QtC.QPolarChart, point: QtC.QPointF ```
    pub fn MapFromScene(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromScene(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ``` self: QtC.QPolarChart, item: QtC.QGraphicsItem, rect: QtC.QRectF ```
    pub fn MapRectFromItem(self: ?*anyopaque, item: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromItem(@ptrCast(self), @ptrCast(item), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ``` self: QtC.QPolarChart, rect: QtC.QRectF ```
    pub fn MapRectFromParent(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromParent(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ``` self: QtC.QPolarChart, rect: QtC.QRectF ```
    pub fn MapRectFromScene(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromScene(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ``` self: QtC.QPolarChart, item: QtC.QGraphicsItem, path: QtC.QPainterPath ```
    pub fn MapFromItem4(self: ?*anyopaque, item: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapFromItem4(@ptrCast(self), @ptrCast(item), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ``` self: QtC.QPolarChart, path: QtC.QPainterPath ```
    pub fn MapFromParent4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapFromParent4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ``` self: QtC.QPolarChart, path: QtC.QPainterPath ```
    pub fn MapFromScene4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapFromScene4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ``` self: QtC.QPolarChart, item: QtC.QGraphicsItem, x: f64, y: f64 ```
    pub fn MapToItem5(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapToItem5(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ``` self: QtC.QPolarChart, x: f64, y: f64 ```
    pub fn MapToParent5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapToParent5(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ``` self: QtC.QPolarChart, x: f64, y: f64 ```
    pub fn MapToScene5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapToScene5(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ``` self: QtC.QPolarChart, item: QtC.QGraphicsItem, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectToItem2(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToItem2(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ``` self: QtC.QPolarChart, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectToParent2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToParent2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ``` self: QtC.QPolarChart, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectToScene2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToScene2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ``` self: QtC.QPolarChart, item: QtC.QGraphicsItem, x: f64, y: f64 ```
    pub fn MapFromItem5(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromItem5(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ``` self: QtC.QPolarChart, x: f64, y: f64 ```
    pub fn MapFromParent5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromParent5(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ``` self: QtC.QPolarChart, x: f64, y: f64 ```
    pub fn MapFromScene5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromScene5(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ``` self: QtC.QPolarChart, item: QtC.QGraphicsItem, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectFromItem2(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromItem2(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ``` self: QtC.QPolarChart, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectFromParent2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromParent2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ``` self: QtC.QPolarChart, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectFromScene2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromScene2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
    ///
    /// ``` self: QtC.QPolarChart, child: QtC.QGraphicsItem ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
    ///
    /// ``` self: QtC.QPolarChart, other: QtC.QGraphicsItem ```
    pub fn CommonAncestorItem(self: ?*anyopaque, other: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_CommonAncestorItem(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsUnderMouse(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsUnderMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
    ///
    /// ``` self: QtC.QPolarChart, key: i32 ```
    pub fn Data(self: ?*anyopaque, key: i32) QtC.QVariant {
        return qtc.QGraphicsItem_Data(@ptrCast(self), @intCast(key));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
    ///
    /// ``` self: QtC.QPolarChart, key: i32, value: QtC.QVariant ```
    pub fn SetData(self: ?*anyopaque, key: i32, value: ?*anyopaque) void {
        qtc.QGraphicsItem_SetData(@ptrCast(self), @intCast(key), @ptrCast(value));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
    ///
    /// ``` self: QtC.QPolarChart ```
    ///
    /// Returns: ``` flag of qnamespace_enums.InputMethodHint ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return qtc.QGraphicsItem_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
    ///
    /// ``` self: QtC.QPolarChart, hints: flag of qnamespace_enums.InputMethodHint ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        qtc.QGraphicsItem_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
    ///
    /// ``` self: QtC.QPolarChart, filterItem: QtC.QGraphicsItem ```
    pub fn InstallSceneEventFilter(self: ?*anyopaque, filterItem: ?*anyopaque) void {
        qtc.QGraphicsItem_InstallSceneEventFilter(@ptrCast(self), @ptrCast(filterItem));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
    ///
    /// ``` self: QtC.QPolarChart, filterItem: QtC.QGraphicsItem ```
    pub fn RemoveSceneEventFilter(self: ?*anyopaque, filterItem: ?*anyopaque) void {
        qtc.QGraphicsItem_RemoveSceneEventFilter(@ptrCast(self), @ptrCast(filterItem));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ``` self: QtC.QPolarChart, flag: qgraphicsitem_enums.GraphicsItemFlag, enabled: bool ```
    pub fn SetFlag2(self: ?*anyopaque, flag: i32, enabled: bool) void {
        qtc.QGraphicsItem_SetFlag2(@ptrCast(self), @intCast(flag), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ``` self: QtC.QPolarChart, mode: qgraphicsitem_enums.CacheMode, cacheSize: QtC.QSize ```
    pub fn SetCacheMode2(self: ?*anyopaque, mode: i32, cacheSize: ?*anyopaque) void {
        qtc.QGraphicsItem_SetCacheMode2(@ptrCast(self), @intCast(mode), @ptrCast(cacheSize));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ``` self: QtC.QPolarChart, focusReason: qnamespace_enums.FocusReason ```
    pub fn SetFocus1(self: ?*anyopaque, focusReason: i32) void {
        qtc.QGraphicsItem_SetFocus1(@ptrCast(self), @intCast(focusReason));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QPolarChart, rect: QtC.QRectF ```
    pub fn EnsureVisible1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsItem_EnsureVisible1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QPolarChart, rect: QtC.QRectF, xmargin: i32 ```
    pub fn EnsureVisible22(self: ?*anyopaque, rect: ?*anyopaque, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible22(@ptrCast(self), @ptrCast(rect), @intCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QPolarChart, rect: QtC.QRectF, xmargin: i32, ymargin: i32 ```
    pub fn EnsureVisible3(self: ?*anyopaque, rect: ?*anyopaque, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible3(@ptrCast(self), @ptrCast(rect), @intCast(xmargin), @intCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QPolarChart, x: f64, y: f64, w: f64, h: f64, xmargin: i32 ```
    pub fn EnsureVisible5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible5(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @intCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QPolarChart, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32 ```
    pub fn EnsureVisible6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible6(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @intCast(xmargin), @intCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ``` self: QtC.QPolarChart, other: QtC.QGraphicsItem, ok: *bool ```
    pub fn ItemTransform2(self: ?*anyopaque, other: ?*anyopaque, ok: *bool) QtC.QTransform {
        return qtc.QGraphicsItem_ItemTransform2(@ptrCast(self), @ptrCast(other), @ptrCast(ok));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ``` self: QtC.QPolarChart, matrix: QtC.QTransform, combine: bool ```
    pub fn SetTransform2(self: ?*anyopaque, matrix: ?*anyopaque, combine: bool) void {
        qtc.QGraphicsItem_SetTransform2(@ptrCast(self), @ptrCast(matrix), combine);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ``` self: QtC.QPolarChart, mode: qnamespace_enums.ItemSelectionMode, allocator: std.mem.Allocator ```
    pub fn CollidingItems1(self: ?*anyopaque, mode: i32, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems1(@ptrCast(self), @intCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qpolarchart.CollidingItems1: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ``` self: QtC.QPolarChart, rect: QtC.QRectF ```
    pub fn IsObscured1(self: ?*anyopaque, rect: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsObscured1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ``` self: QtC.QPolarChart, rect: QtC.QRectF ```
    pub fn Update1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsItem_Update1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ``` self: QtC.QPolarChart, dx: f64, dy: f64, rect: QtC.QRectF ```
    pub fn Scroll3(self: ?*anyopaque, dx: f64, dy: f64, rect: ?*anyopaque) void {
        qtc.QGraphicsItem_Scroll3(@ptrCast(self), @floatCast(dx), @floatCast(dy), @ptrCast(rect));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: QtC.QPolarChart, policy: QtC.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, policy: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self), @ptrCast(policy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: QtC.QPolarChart, hPolicy: qsizepolicy_enums.Policy, vPolicy: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, hPolicy: i32, vPolicy: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self), @intCast(hPolicy), @intCast(vPolicy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ``` self: QtC.QPolarChart, size: QtC.QSizeF ```
    pub fn SetMinimumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ``` self: QtC.QPolarChart, w: f64, h: f64 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ``` self: QtC.QPolarChart, width: f64 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn MinimumWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ``` self: QtC.QPolarChart, height: f64 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn MinimumHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ``` self: QtC.QPolarChart, size: QtC.QSizeF ```
    pub fn SetPreferredSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ``` self: QtC.QPolarChart, w: f64, h: f64 ```
    pub fn SetPreferredSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn PreferredSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ``` self: QtC.QPolarChart, width: f64 ```
    pub fn SetPreferredWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn PreferredWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ``` self: QtC.QPolarChart, height: f64 ```
    pub fn SetPreferredHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn PreferredHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ``` self: QtC.QPolarChart, size: QtC.QSizeF ```
    pub fn SetMaximumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ``` self: QtC.QPolarChart, w: f64, h: f64 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ``` self: QtC.QPolarChart, width: f64 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn MaximumWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ``` self: QtC.QPolarChart, height: f64 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn MaximumHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ``` self: QtC.QPolarChart, which: qnamespace_enums.SizeHint ```
    pub fn EffectiveSizeHint(self: ?*anyopaque, which: i32) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self), @intCast(which));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn ParentLayoutItem(self: ?*anyopaque) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ``` self: QtC.QPolarChart, parent: QtC.QGraphicsLayoutItem ```
    pub fn SetParentLayoutItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsLayout(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn GraphicsItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn OwnedByLayout(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: QtC.QPolarChart, hPolicy: qsizepolicy_enums.Policy, vPolicy: qsizepolicy_enums.Policy, controlType: qsizepolicy_enums.ControlType ```
    pub fn SetSizePolicy3(self: ?*anyopaque, hPolicy: i32, vPolicy: i32, controlType: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self), @intCast(hPolicy), @intCast(vPolicy), @intCast(controlType));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ``` self: QtC.QPolarChart, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF ```
    pub fn EffectiveSizeHint2(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, rect: QtC.QRectF ```
    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QPolarChart_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, rect: QtC.QRectF ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QPolarChart_QBaseSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, rect: QtC.QRectF) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnSetGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, left: *f64, top: *f64, right: *f64, bottom: *f64 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QPolarChart_GetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, left: *f64, top: *f64, right: *f64, bottom: *f64 ```
    pub fn QBaseGetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QPolarChart_QBaseGetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, left: *f64, top: *f64, right: *f64, bottom: *f64) callconv(.c) void ```
    pub fn OnGetContentsMargins(self: ?*anyopaque, callback: *const fn (?*anyopaque, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QPolarChart_OnGetContentsMargins(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QPolarChart_Type(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn QBaseType(self: ?*anyopaque) i32 {
        return qtc.QPolarChart_QBaseType(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn () callconv(.c) i32 ```
    pub fn OnType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QPolarChart_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, painter: QtC.QPainter, option: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget ```
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QPolarChart_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, painter: QtC.QPainter, option: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget ```
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QPolarChart_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, painter: QtC.QPainter, option: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, painter: QtC.QPainter, option: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget ```
    pub fn PaintWindowFrame(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QPolarChart_PaintWindowFrame(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, painter: QtC.QPainter, option: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget ```
    pub fn QBasePaintWindowFrame(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QPolarChart_QBasePaintWindowFrame(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, painter: QtC.QPainter, option: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnPaintWindowFrame(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnPaintWindowFrame(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn BoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QPolarChart_BoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn QBaseBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QPolarChart_QBaseBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn () callconv(.c) QtC.QRectF ```
    pub fn OnBoundingRect(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QRectF) void {
        qtc.QPolarChart_OnBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Shape(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPolarChart_Shape(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn QBaseShape(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPolarChart_QBaseShape(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn () callconv(.c) QtC.QPainterPath ```
    pub fn OnShape(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainterPath) void {
        qtc.QPolarChart_OnShape(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, option: QtC.QStyleOption ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QPolarChart_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, option: QtC.QStyleOption ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QPolarChart_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, option: QtC.QStyleOption) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF ```
    pub fn SizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QPolarChart_SizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF ```
    pub fn QBaseSizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QPolarChart_QBaseSizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF) callconv(.c) QtC.QSizeF ```
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QSizeF) void {
        qtc.QPolarChart_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QPolarChart_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn QBaseUpdateGeometry(self: ?*anyopaque) void {
        qtc.QPolarChart_QBaseUpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn () callconv(.c) void ```
    pub fn OnUpdateGeometry(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnUpdateGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, change: qgraphicsitem_enums.GraphicsItemChange, value: QtC.QVariant ```
    pub fn ItemChange(self: ?*anyopaque, change: i32, value: ?*anyopaque) QtC.QVariant {
        return qtc.QPolarChart_ItemChange(@ptrCast(self), @intCast(change), @ptrCast(value));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, change: qgraphicsitem_enums.GraphicsItemChange, value: QtC.QVariant ```
    pub fn QBaseItemChange(self: ?*anyopaque, change: i32, value: ?*anyopaque) QtC.QVariant {
        return qtc.QPolarChart_QBaseItemChange(@ptrCast(self), @intCast(change), @ptrCast(value));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, change: qgraphicsitem_enums.GraphicsItemChange, value: QtC.QVariant) callconv(.c) QtC.QVariant ```
    pub fn OnItemChange(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QPolarChart_OnItemChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, propertyName: []const u8, value: QtC.QVariant ```
    pub fn PropertyChange(self: ?*anyopaque, propertyName: []const u8, value: ?*anyopaque) QtC.QVariant {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return qtc.QPolarChart_PropertyChange(@ptrCast(self), propertyName_str, @ptrCast(value));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, propertyName: []const u8, value: QtC.QVariant ```
    pub fn QBasePropertyChange(self: ?*anyopaque, propertyName: []const u8, value: ?*anyopaque) QtC.QVariant {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return qtc.QPolarChart_QBasePropertyChange(@ptrCast(self), propertyName_str, @ptrCast(value));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, propertyName: [*:0]const u8, value: QtC.QVariant) callconv(.c) QtC.QVariant ```
    pub fn OnPropertyChange(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QPolarChart_OnPropertyChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QEvent ```
    pub fn SceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPolarChart_SceneEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QEvent ```
    pub fn QBaseSceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPolarChart_QBaseSceneEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnSceneEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPolarChart_OnSceneEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, e: QtC.QEvent ```
    pub fn WindowFrameEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QPolarChart_WindowFrameEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, e: QtC.QEvent ```
    pub fn QBaseWindowFrameEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QPolarChart_QBaseWindowFrameEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, e: QtC.QEvent) callconv(.c) bool ```
    pub fn OnWindowFrameEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPolarChart_OnWindowFrameEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, pos: QtC.QPointF ```
    ///
    /// Returns: ``` qnamespace_enums.WindowFrameSection ```
    pub fn WindowFrameSectionAt(self: ?*anyopaque, pos: ?*anyopaque) i32 {
        return qtc.QPolarChart_WindowFrameSectionAt(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, pos: QtC.QPointF ```
    ///
    /// Returns: ``` qnamespace_enums.WindowFrameSection ```
    pub fn QBaseWindowFrameSectionAt(self: ?*anyopaque, pos: ?*anyopaque) i32 {
        return qtc.QPolarChart_QBaseWindowFrameSectionAt(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, pos: QtC.QPointF) callconv(.c) i32 ```
    pub fn OnWindowFrameSectionAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QPolarChart_OnWindowFrameSectionAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPolarChart_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPolarChart_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPolarChart_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_ChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnCloseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QPolarChart_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QPolarChart_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, next: bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QPolarChart_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnHideEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn PolishEvent(self: ?*anyopaque) void {
        qtc.QPolarChart_PolishEvent(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn QBasePolishEvent(self: ?*anyopaque) void {
        qtc.QPolarChart_QBasePolishEvent(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn () callconv(.c) void ```
    pub fn OnPolishEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnPolishEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneHoverEvent ```
    pub fn HoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_HoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneHoverEvent ```
    pub fn QBaseHoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseHoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneHoverEvent) callconv(.c) void ```
    pub fn OnHoverMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnHoverMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneHoverEvent ```
    pub fn HoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_HoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneHoverEvent ```
    pub fn QBaseHoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseHoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneHoverEvent) callconv(.c) void ```
    pub fn OnHoverLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnHoverLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QEvent ```
    pub fn GrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_GrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QEvent ```
    pub fn QBaseGrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseGrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnGrabMouseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnGrabMouseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QEvent ```
    pub fn UngrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_UngrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QEvent ```
    pub fn QBaseUngrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseUngrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnUngrabMouseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnUngrabMouseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QEvent ```
    pub fn GrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_GrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QEvent ```
    pub fn QBaseGrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseGrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnGrabKeyboardEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnGrabKeyboardEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QEvent ```
    pub fn UngrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_UngrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QEvent ```
    pub fn QBaseUngrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseUngrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnUngrabKeyboardEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnUngrabKeyboardEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPolarChart_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPolarChart_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPolarChart_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPolarChart_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPolarChart_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPolarChart_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPolarChart_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, phase: i32 ```
    pub fn Advance(self: ?*anyopaque, phase: i32) void {
        qtc.QPolarChart_Advance(@ptrCast(self), @intCast(phase));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, phase: i32 ```
    pub fn QBaseAdvance(self: ?*anyopaque, phase: i32) void {
        qtc.QPolarChart_QBaseAdvance(@ptrCast(self), @intCast(phase));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, phase: i32) callconv(.c) void ```
    pub fn OnAdvance(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPolarChart_OnAdvance(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, point: QtC.QPointF ```
    pub fn Contains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QPolarChart_Contains(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, point: QtC.QPointF ```
    pub fn QBaseContains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QPolarChart_QBaseContains(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, point: QtC.QPointF) callconv(.c) bool ```
    pub fn OnContains(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPolarChart_OnContains(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, other: QtC.QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn CollidesWithItem(self: ?*anyopaque, other: ?*anyopaque, mode: i32) bool {
        return qtc.QPolarChart_CollidesWithItem(@ptrCast(self), @ptrCast(other), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, other: QtC.QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn QBaseCollidesWithItem(self: ?*anyopaque, other: ?*anyopaque, mode: i32) bool {
        return qtc.QPolarChart_QBaseCollidesWithItem(@ptrCast(self), @ptrCast(other), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, other: QtC.QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool ```
    pub fn OnCollidesWithItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QPolarChart_OnCollidesWithItem(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, path: QtC.QPainterPath, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn CollidesWithPath(self: ?*anyopaque, path: ?*anyopaque, mode: i32) bool {
        return qtc.QPolarChart_CollidesWithPath(@ptrCast(self), @ptrCast(path), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, path: QtC.QPainterPath, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn QBaseCollidesWithPath(self: ?*anyopaque, path: ?*anyopaque, mode: i32) bool {
        return qtc.QPolarChart_QBaseCollidesWithPath(@ptrCast(self), @ptrCast(path), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, path: QtC.QPainterPath, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool ```
    pub fn OnCollidesWithPath(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QPolarChart_OnCollidesWithPath(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, item: QtC.QGraphicsItem ```
    pub fn IsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QPolarChart_IsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, item: QtC.QGraphicsItem ```
    pub fn QBaseIsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QPolarChart_QBaseIsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, item: QtC.QGraphicsItem) callconv(.c) bool ```
    pub fn OnIsObscuredBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPolarChart_OnIsObscuredBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn OpaqueArea(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPolarChart_OpaqueArea(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn QBaseOpaqueArea(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPolarChart_QBaseOpaqueArea(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn () callconv(.c) QtC.QPainterPath ```
    pub fn OnOpaqueArea(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainterPath) void {
        qtc.QPolarChart_OnOpaqueArea(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, watched: QtC.QGraphicsItem, event: QtC.QEvent ```
    pub fn SceneEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPolarChart_SceneEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, watched: QtC.QGraphicsItem, event: QtC.QEvent ```
    pub fn QBaseSceneEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPolarChart_QBaseSceneEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, watched: QtC.QGraphicsItem, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnSceneEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPolarChart_OnSceneEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneHoverEvent ```
    pub fn HoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_HoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneHoverEvent ```
    pub fn QBaseHoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseHoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneHoverEvent) callconv(.c) void ```
    pub fn OnHoverEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnHoverEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QGraphicsSceneWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QGraphicsSceneWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, event: QtC.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPolarChart_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, event: QtC.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, query: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QPolarChart_InputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, query: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QPolarChart_QBaseInputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, query: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QPolarChart_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, extension: qgraphicsitem_enums.Extension ```
    pub fn SupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QPolarChart_SupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, extension: qgraphicsitem_enums.Extension ```
    pub fn QBaseSupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QPolarChart_QBaseSupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, extension: qgraphicsitem_enums.Extension) callconv(.c) bool ```
    pub fn OnSupportsExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QPolarChart_OnSupportsExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, extension: qgraphicsitem_enums.Extension, variant: QtC.QVariant ```
    pub fn SetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QPolarChart_SetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, extension: qgraphicsitem_enums.Extension, variant: QtC.QVariant ```
    pub fn QBaseSetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QPolarChart_QBaseSetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, extension: qgraphicsitem_enums.Extension, variant: QtC.QVariant) callconv(.c) void ```
    pub fn OnSetExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnSetExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, variant: QtC.QVariant ```
    pub fn Extension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QPolarChart_Extension(@ptrCast(self), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, variant: QtC.QVariant ```
    pub fn QBaseExtension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QPolarChart_QBaseExtension(@ptrCast(self), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, variant: QtC.QVariant) callconv(.c) QtC.QVariant ```
    pub fn OnExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QPolarChart_OnExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QPolarChart_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return qtc.QPolarChart_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QPolarChart_OnIsEmpty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QPolarChart_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QPolarChart_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnUpdateMicroFocus(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPolarChart_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPolarChart_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QPolarChart_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPolarChart_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPolarChart_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QPolarChart_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPolarChart_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPolarChart_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPolarChart_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPolarChart_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPolarChart_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPolarChart_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn AddToIndex(self: ?*anyopaque) void {
        qtc.QPolarChart_AddToIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn QBaseAddToIndex(self: ?*anyopaque) void {
        qtc.QPolarChart_QBaseAddToIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn () callconv(.c) void ```
    pub fn OnAddToIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnAddToIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn RemoveFromIndex(self: ?*anyopaque) void {
        qtc.QPolarChart_RemoveFromIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn QBaseRemoveFromIndex(self: ?*anyopaque) void {
        qtc.QPolarChart_QBaseRemoveFromIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn () callconv(.c) void ```
    pub fn OnRemoveFromIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnRemoveFromIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn PrepareGeometryChange(self: ?*anyopaque) void {
        qtc.QPolarChart_PrepareGeometryChange(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn QBasePrepareGeometryChange(self: ?*anyopaque) void {
        qtc.QPolarChart_QBasePrepareGeometryChange(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn () callconv(.c) void ```
    pub fn OnPrepareGeometryChange(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPolarChart_OnPrepareGeometryChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, item: QtC.QGraphicsItem ```
    pub fn SetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QPolarChart_SetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, item: QtC.QGraphicsItem ```
    pub fn QBaseSetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QPolarChart_QBaseSetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, item: QtC.QGraphicsItem) callconv(.c) void ```
    pub fn OnSetGraphicsItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPolarChart_OnSetGraphicsItem(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, ownedByLayout: bool ```
    pub fn SetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        qtc.QPolarChart_SetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, ownedByLayout: bool ```
    pub fn QBaseSetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        qtc.QPolarChart_QBaseSetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, ownedByLayout: bool) callconv(.c) void ```
    pub fn OnSetOwnedByLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPolarChart_OnSetOwnedByLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QPolarChart, callback: *const fn (self: QtC.QPolarChart, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#dtor.QPolarChart)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPolarChart ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPolarChart_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#types
pub const enums = struct {
    pub const PolarOrientation = enum {
        pub const PolarOrientationRadial: i32 = 1;
        pub const PolarOrientationAngular: i32 = 2;
    };
};
