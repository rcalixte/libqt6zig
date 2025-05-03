const C = @import("qt6c");
const qchart_enums = @import("libqchart.zig").enums;
const qgraphicsitem_enums = @import("../libqgraphicsitem.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpolarchart_enums = enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qpolarchart.html
pub const qpolarchart = struct {
    /// New constructs a new QPolarChart object.
    ///
    ///
    pub fn New() ?*C.QPolarChart {
        return C.QPolarChart_new();
    }

    /// New2 constructs a new QPolarChart object.
    ///
    /// ``` parent: ?*C.QGraphicsItem ```
    pub fn New2(parent: ?*anyopaque) ?*C.QPolarChart {
        return C.QPolarChart_new2(@ptrCast(parent));
    }

    /// New3 constructs a new QPolarChart object.
    ///
    /// ``` parent: ?*C.QGraphicsItem, wFlags: i32 ```
    pub fn New3(parent: ?*anyopaque, wFlags: i64) ?*C.QPolarChart {
        return C.QPolarChart_new3(@ptrCast(parent), @intCast(wFlags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QPolarChart_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QPolarChart, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QPolarChart_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QPolarChart, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QPolarChart_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QPolarChart_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QPolarChart, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QPolarChart_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QPolarChart_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart.html#addAxis)
    ///
    /// ``` self: ?*C.QPolarChart, axis: ?*C.QAbstractAxis, polarOrientation: qpolarchart_enums.PolarOrientation ```
    pub fn AddAxis(self: ?*anyopaque, axis: ?*anyopaque, polarOrientation: i64) void {
        C.QPolarChart_AddAxis(@ptrCast(self), @ptrCast(axis), @intCast(polarOrientation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart.html#axes)
    ///
    /// ``` self: ?*C.QPolarChart, allocator: std.mem.Allocator ```
    pub fn Axes(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QAbstractAxis {
        const _arr: C.struct_libqt_list = C.QPolarChart_Axes(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QAbstractAxis, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart.html#axisPolarOrientation)
    ///
    /// ``` axis: ?*C.QAbstractAxis ```
    pub fn AxisPolarOrientation(axis: ?*anyopaque) i64 {
        return C.QPolarChart_AxisPolarOrientation(@ptrCast(axis));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QPolarChart_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QPolarChart_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart.html#axes)
    ///
    /// ``` self: ?*C.QPolarChart, polarOrientation: i32, allocator: std.mem.Allocator ```
    pub fn Axes1(self: ?*anyopaque, polarOrientation: i64, allocator: std.mem.Allocator) []?*C.QAbstractAxis {
        const _arr: C.struct_libqt_list = C.QPolarChart_Axes1(@ptrCast(self), @intCast(polarOrientation));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QAbstractAxis, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart.html#axes)
    ///
    /// ``` self: ?*C.QPolarChart, polarOrientation: i32, series: ?*C.QAbstractSeries, allocator: std.mem.Allocator ```
    pub fn Axes2(self: ?*anyopaque, polarOrientation: i64, series: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QAbstractAxis {
        const _arr: C.struct_libqt_list = C.QPolarChart_Axes2(@ptrCast(self), @intCast(polarOrientation), @ptrCast(series));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QAbstractAxis, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#addSeries)
    ///
    /// ``` self: ?*C.QPolarChart, series: ?*C.QAbstractSeries ```
    pub fn AddSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        C.QChart_AddSeries(@ptrCast(self), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#removeSeries)
    ///
    /// ``` self: ?*C.QPolarChart, series: ?*C.QAbstractSeries ```
    pub fn RemoveSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        C.QChart_RemoveSeries(@ptrCast(self), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#removeAllSeries)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn RemoveAllSeries(self: ?*anyopaque) void {
        C.QChart_RemoveAllSeries(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#series)
    ///
    /// ``` self: ?*C.QPolarChart, allocator: std.mem.Allocator ```
    pub fn Series(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QAbstractSeries {
        const _arr: C.struct_libqt_list = C.QChart_Series(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QAbstractSeries, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QAbstractSeries = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisX)
    ///
    /// ``` self: ?*C.QPolarChart, axis: ?*C.QAbstractAxis ```
    pub fn SetAxisX(self: ?*anyopaque, axis: ?*anyopaque) void {
        C.QChart_SetAxisX(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisY)
    ///
    /// ``` self: ?*C.QPolarChart, axis: ?*C.QAbstractAxis ```
    pub fn SetAxisY(self: ?*anyopaque, axis: ?*anyopaque) void {
        C.QChart_SetAxisY(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisX)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn AxisX(self: ?*anyopaque) ?*C.QAbstractAxis {
        return C.QChart_AxisX(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisY)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn AxisY(self: ?*anyopaque) ?*C.QAbstractAxis {
        return C.QChart_AxisY(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#removeAxis)
    ///
    /// ``` self: ?*C.QPolarChart, axis: ?*C.QAbstractAxis ```
    pub fn RemoveAxis(self: ?*anyopaque, axis: ?*anyopaque) void {
        C.QChart_RemoveAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#createDefaultAxes)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn CreateDefaultAxes(self: ?*anyopaque) void {
        C.QChart_CreateDefaultAxes(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTheme)
    ///
    /// ``` self: ?*C.QPolarChart, theme: qchart_enums.ChartTheme ```
    pub fn SetTheme(self: ?*anyopaque, theme: i64) void {
        C.QChart_SetTheme(@ptrCast(self), @intCast(theme));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#theme)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Theme(self: ?*anyopaque) i64 {
        return C.QChart_Theme(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTitle)
    ///
    /// ``` self: ?*C.QPolarChart, title: []const u8 ```
    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = C.struct_libqt_string{
            .len = title.len,
            .data = @constCast(title.ptr),
        };
        C.QChart_SetTitle(@ptrCast(self), title_str);
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#title)
    ///
    /// ``` self: ?*C.QPolarChart, allocator: std.mem.Allocator ```
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QChart_Title(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTitleFont)
    ///
    /// ``` self: ?*C.QPolarChart, font: ?*C.QFont ```
    pub fn SetTitleFont(self: ?*anyopaque, font: ?*anyopaque) void {
        C.QChart_SetTitleFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#titleFont)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn TitleFont(self: ?*anyopaque) ?*C.QFont {
        return C.QChart_TitleFont(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTitleBrush)
    ///
    /// ``` self: ?*C.QPolarChart, brush: ?*C.QBrush ```
    pub fn SetTitleBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QChart_SetTitleBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#titleBrush)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn TitleBrush(self: ?*anyopaque) ?*C.QBrush {
        return C.QChart_TitleBrush(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundBrush)
    ///
    /// ``` self: ?*C.QPolarChart, brush: ?*C.QBrush ```
    pub fn SetBackgroundBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QChart_SetBackgroundBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#backgroundBrush)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn BackgroundBrush(self: ?*anyopaque) ?*C.QBrush {
        return C.QChart_BackgroundBrush(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundPen)
    ///
    /// ``` self: ?*C.QPolarChart, pen: ?*C.QPen ```
    pub fn SetBackgroundPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QChart_SetBackgroundPen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#backgroundPen)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn BackgroundPen(self: ?*anyopaque) ?*C.QPen {
        return C.QChart_BackgroundPen(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundVisible)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn SetBackgroundVisible(self: ?*anyopaque) void {
        C.QChart_SetBackgroundVisible(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isBackgroundVisible)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsBackgroundVisible(self: ?*anyopaque) bool {
        return C.QChart_IsBackgroundVisible(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setDropShadowEnabled)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn SetDropShadowEnabled(self: ?*anyopaque) void {
        C.QChart_SetDropShadowEnabled(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isDropShadowEnabled)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsDropShadowEnabled(self: ?*anyopaque) bool {
        return C.QChart_IsDropShadowEnabled(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundRoundness)
    ///
    /// ``` self: ?*C.QPolarChart, diameter: f64 ```
    pub fn SetBackgroundRoundness(self: ?*anyopaque, diameter: f64) void {
        C.QChart_SetBackgroundRoundness(@ptrCast(self), @floatCast(diameter));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#backgroundRoundness)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn BackgroundRoundness(self: ?*anyopaque) f64 {
        return C.QChart_BackgroundRoundness(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAnimationOptions)
    ///
    /// ``` self: ?*C.QPolarChart, options: i32 ```
    pub fn SetAnimationOptions(self: ?*anyopaque, options: i64) void {
        C.QChart_SetAnimationOptions(@ptrCast(self), @intCast(options));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#animationOptions)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn AnimationOptions(self: ?*anyopaque) i64 {
        return C.QChart_AnimationOptions(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAnimationDuration)
    ///
    /// ``` self: ?*C.QPolarChart, msecs: i32 ```
    pub fn SetAnimationDuration(self: ?*anyopaque, msecs: i32) void {
        C.QChart_SetAnimationDuration(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#animationDuration)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn AnimationDuration(self: ?*anyopaque) i32 {
        return C.QChart_AnimationDuration(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAnimationEasingCurve)
    ///
    /// ``` self: ?*C.QPolarChart, curve: ?*C.QEasingCurve ```
    pub fn SetAnimationEasingCurve(self: ?*anyopaque, curve: ?*anyopaque) void {
        C.QChart_SetAnimationEasingCurve(@ptrCast(self), @ptrCast(curve));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#animationEasingCurve)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn AnimationEasingCurve(self: ?*anyopaque) ?*C.QEasingCurve {
        return C.QChart_AnimationEasingCurve(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomIn)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ZoomIn(self: ?*anyopaque) void {
        C.QChart_ZoomIn(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomOut)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ZoomOut(self: ?*anyopaque) void {
        C.QChart_ZoomOut(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomIn)
    ///
    /// ``` self: ?*C.QPolarChart, rect: ?*C.QRectF ```
    pub fn ZoomInWithRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QChart_ZoomInWithRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoom)
    ///
    /// ``` self: ?*C.QPolarChart, factor: f64 ```
    pub fn Zoom(self: ?*anyopaque, factor: f64) void {
        C.QChart_Zoom(@ptrCast(self), @floatCast(factor));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomReset)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ZoomReset(self: ?*anyopaque) void {
        C.QChart_ZoomReset(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isZoomed)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsZoomed(self: ?*anyopaque) bool {
        return C.QChart_IsZoomed(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#scroll)
    ///
    /// ``` self: ?*C.QPolarChart, dx: f64, dy: f64 ```
    pub fn Scroll(self: ?*anyopaque, dx: f64, dy: f64) void {
        C.QChart_Scroll(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#legend)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Legend(self: ?*anyopaque) ?*C.QLegend {
        return C.QChart_Legend(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setMargins)
    ///
    /// ``` self: ?*C.QPolarChart, margins: ?*C.QMargins ```
    pub fn SetMargins(self: ?*anyopaque, margins: ?*anyopaque) void {
        C.QChart_SetMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#margins)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Margins(self: ?*anyopaque) ?*C.QMargins {
        return C.QChart_Margins(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotArea)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn PlotArea(self: ?*anyopaque) ?*C.QRectF {
        return C.QChart_PlotArea(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotArea)
    ///
    /// ``` self: ?*C.QPolarChart, rect: ?*C.QRectF ```
    pub fn SetPlotArea(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QChart_SetPlotArea(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundBrush)
    ///
    /// ``` self: ?*C.QPolarChart, brush: ?*C.QBrush ```
    pub fn SetPlotAreaBackgroundBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QChart_SetPlotAreaBackgroundBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundBrush)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn PlotAreaBackgroundBrush(self: ?*anyopaque) ?*C.QBrush {
        return C.QChart_PlotAreaBackgroundBrush(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundPen)
    ///
    /// ``` self: ?*C.QPolarChart, pen: ?*C.QPen ```
    pub fn SetPlotAreaBackgroundPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QChart_SetPlotAreaBackgroundPen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundPen)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn PlotAreaBackgroundPen(self: ?*anyopaque) ?*C.QPen {
        return C.QChart_PlotAreaBackgroundPen(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundVisible)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn SetPlotAreaBackgroundVisible(self: ?*anyopaque) void {
        C.QChart_SetPlotAreaBackgroundVisible(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isPlotAreaBackgroundVisible)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsPlotAreaBackgroundVisible(self: ?*anyopaque) bool {
        return C.QChart_IsPlotAreaBackgroundVisible(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setLocalizeNumbers)
    ///
    /// ``` self: ?*C.QPolarChart, localize: bool ```
    pub fn SetLocalizeNumbers(self: ?*anyopaque, localize: bool) void {
        C.QChart_SetLocalizeNumbers(@ptrCast(self), localize);
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#localizeNumbers)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn LocalizeNumbers(self: ?*anyopaque) bool {
        return C.QChart_LocalizeNumbers(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setLocale)
    ///
    /// ``` self: ?*C.QPolarChart, locale: ?*C.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        C.QChart_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#locale)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Locale(self: ?*anyopaque) ?*C.QLocale {
        return C.QChart_Locale(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToValue)
    ///
    /// ``` self: ?*C.QPolarChart, position: ?*C.QPointF ```
    pub fn MapToValue(self: ?*anyopaque, position: ?*anyopaque) ?*C.QPointF {
        return C.QChart_MapToValue(@ptrCast(self), @ptrCast(position));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToPosition)
    ///
    /// ``` self: ?*C.QPolarChart, value: ?*C.QPointF ```
    pub fn MapToPosition(self: ?*anyopaque, value: ?*anyopaque) ?*C.QPointF {
        return C.QChart_MapToPosition(@ptrCast(self), @ptrCast(value));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#chartType)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ChartType(self: ?*anyopaque) i64 {
        return C.QChart_ChartType(@ptrCast(self));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotAreaChanged)
    ///
    /// ``` self: ?*C.QPolarChart, plotArea: ?*C.QRectF ```
    pub fn PlotAreaChanged(self: ?*anyopaque, plotArea: ?*anyopaque) void {
        C.QChart_PlotAreaChanged(@ptrCast(self), @ptrCast(plotArea));
    }

    /// Inherited from QChart
    ///
    /// ``` self: ?*C.QChart, slot: fn (?*C.QChart, ?*C.QRectF) callconv(.c) void ```
    pub fn OnPlotAreaChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QChart_Connect_PlotAreaChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisX)
    ///
    /// ``` self: ?*C.QPolarChart, axis: ?*C.QAbstractAxis, series: ?*C.QAbstractSeries ```
    pub fn SetAxisX2(self: ?*anyopaque, axis: ?*anyopaque, series: ?*anyopaque) void {
        C.QChart_SetAxisX2(@ptrCast(self), @ptrCast(axis), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisY)
    ///
    /// ``` self: ?*C.QPolarChart, axis: ?*C.QAbstractAxis, series: ?*C.QAbstractSeries ```
    pub fn SetAxisY2(self: ?*anyopaque, axis: ?*anyopaque, series: ?*anyopaque) void {
        C.QChart_SetAxisY2(@ptrCast(self), @ptrCast(axis), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisX)
    ///
    /// ``` self: ?*C.QPolarChart, series: ?*C.QAbstractSeries ```
    pub fn AxisX1(self: ?*anyopaque, series: ?*anyopaque) ?*C.QAbstractAxis {
        return C.QChart_AxisX1(@ptrCast(self), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisY)
    ///
    /// ``` self: ?*C.QPolarChart, series: ?*C.QAbstractSeries ```
    pub fn AxisY1(self: ?*anyopaque, series: ?*anyopaque) ?*C.QAbstractAxis {
        return C.QChart_AxisY1(@ptrCast(self), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundVisible)
    ///
    /// ``` self: ?*C.QPolarChart, visible: bool ```
    pub fn SetBackgroundVisible1(self: ?*anyopaque, visible: bool) void {
        C.QChart_SetBackgroundVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setDropShadowEnabled)
    ///
    /// ``` self: ?*C.QPolarChart, enabled: bool ```
    pub fn SetDropShadowEnabled1(self: ?*anyopaque, enabled: bool) void {
        C.QChart_SetDropShadowEnabled1(@ptrCast(self), enabled);
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundVisible)
    ///
    /// ``` self: ?*C.QPolarChart, visible: bool ```
    pub fn SetPlotAreaBackgroundVisible1(self: ?*anyopaque, visible: bool) void {
        C.QChart_SetPlotAreaBackgroundVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToValue)
    ///
    /// ``` self: ?*C.QPolarChart, position: ?*C.QPointF, series: ?*C.QAbstractSeries ```
    pub fn MapToValue2(self: ?*anyopaque, position: ?*anyopaque, series: ?*anyopaque) ?*C.QPointF {
        return C.QChart_MapToValue2(@ptrCast(self), @ptrCast(position), @ptrCast(series));
    }

    /// Inherited from QChart
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToPosition)
    ///
    /// ``` self: ?*C.QPolarChart, value: ?*C.QPointF, series: ?*C.QAbstractSeries ```
    pub fn MapToPosition2(self: ?*anyopaque, value: ?*anyopaque, series: ?*anyopaque) ?*C.QPointF {
        return C.QChart_MapToPosition2(@ptrCast(self), @ptrCast(value), @ptrCast(series));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Layout(self: ?*anyopaque) ?*C.QGraphicsLayout {
        return C.QGraphicsWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
    ///
    /// ``` self: ?*C.QPolarChart, layout: ?*C.QGraphicsLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        C.QGraphicsWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        C.QGraphicsWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return C.QGraphicsWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
    ///
    /// ``` self: ?*C.QPolarChart, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        C.QGraphicsWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        C.QGraphicsWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Style(self: ?*anyopaque) ?*C.QStyle {
        return C.QGraphicsWidget_Style(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
    ///
    /// ``` self: ?*C.QPolarChart, style: ?*C.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        C.QGraphicsWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Font(self: ?*anyopaque) ?*C.QFont {
        return C.QGraphicsWidget_Font(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
    ///
    /// ``` self: ?*C.QPolarChart, font: ?*C.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        C.QGraphicsWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Palette(self: ?*anyopaque) ?*C.QPalette {
        return C.QGraphicsWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
    ///
    /// ``` self: ?*C.QPolarChart, palette: ?*C.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        C.QGraphicsWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return C.QGraphicsWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
    ///
    /// ``` self: ?*C.QPolarChart, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        C.QGraphicsWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ``` self: ?*C.QPolarChart, size: ?*C.QSizeF ```
    pub fn Resize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QGraphicsWidget_Resize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ``` self: ?*C.QPolarChart, w: f64, h: f64 ```
    pub fn Resize2(self: ?*anyopaque, w: f64, h: f64) void {
        C.QGraphicsWidget_Resize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Size(self: ?*anyopaque) ?*C.QSizeF {
        return C.QGraphicsWidget_Size(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// ``` self: ?*C.QPolarChart, x: f64, y: f64, w: f64, h: f64 ```
    pub fn SetGeometry2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        C.QGraphicsWidget_SetGeometry2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Rect(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QPolarChart, left: f64, top: f64, right: f64, bottom: f64 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: f64, top: f64, right: f64, bottom: f64) void {
        C.QGraphicsWidget_SetContentsMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QPolarChart, margins: C.QMarginsF ```
    pub fn SetContentsMarginsWithMargins(self: ?*anyopaque, margins: C.QMarginsF) void {
        C.QGraphicsWidget_SetContentsMarginsWithMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ``` self: ?*C.QPolarChart, left: f64, top: f64, right: f64, bottom: f64 ```
    pub fn SetWindowFrameMargins(self: ?*anyopaque, left: f64, top: f64, right: f64, bottom: f64) void {
        C.QGraphicsWidget_SetWindowFrameMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ``` self: ?*C.QPolarChart, margins: C.QMarginsF ```
    pub fn SetWindowFrameMarginsWithMargins(self: ?*anyopaque, margins: C.QMarginsF) void {
        C.QGraphicsWidget_SetWindowFrameMarginsWithMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
    ///
    /// ``` self: ?*C.QPolarChart, left: ?*f64, top: ?*f64, right: ?*f64, bottom: ?*f64 ```
    pub fn GetWindowFrameMargins(self: ?*anyopaque, left: ?*anyopaque, top: ?*anyopaque, right: ?*anyopaque, bottom: ?*anyopaque) void {
        C.QGraphicsWidget_GetWindowFrameMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn UnsetWindowFrameMargins(self: ?*anyopaque) void {
        C.QGraphicsWidget_UnsetWindowFrameMargins(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn WindowFrameGeometry(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsWidget_WindowFrameGeometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn WindowFrameRect(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsWidget_WindowFrameRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return C.QGraphicsWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn WindowType(self: ?*anyopaque) i64 {
        return C.QGraphicsWidget_WindowType(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
    ///
    /// ``` self: ?*C.QPolarChart, wFlags: i32 ```
    pub fn SetWindowFlags(self: ?*anyopaque, wFlags: i64) void {
        C.QGraphicsWidget_SetWindowFlags(@ptrCast(self), @intCast(wFlags));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return C.QGraphicsWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
    ///
    /// ``` self: ?*C.QPolarChart, title: []const u8 ```
    pub fn SetWindowTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = C.struct_libqt_string{
            .len = title.len,
            .data = @constCast(title.ptr),
        };
        C.QGraphicsWidget_SetWindowTitle(@ptrCast(self), title_str);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
    ///
    /// ``` self: ?*C.QPolarChart, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QGraphicsWidget_WindowTitle(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn FocusPolicy(self: ?*anyopaque) i64 {
        return C.QGraphicsWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
    ///
    /// ``` self: ?*C.QPolarChart, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i64) void {
        C.QGraphicsWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
    ///
    /// ``` first: ?*C.QGraphicsWidget, second: ?*C.QGraphicsWidget ```
    pub fn SetTabOrder(first: ?*anyopaque, second: ?*anyopaque) void {
        C.QGraphicsWidget_SetTabOrder(@ptrCast(first), @ptrCast(second));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn FocusWidget(self: ?*anyopaque) ?*C.QGraphicsWidget {
        return C.QGraphicsWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
    ///
    /// ``` self: ?*C.QPolarChart, sequence: ?*C.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, sequence: ?*anyopaque) i32 {
        return C.QGraphicsWidget_GrabShortcut(@ptrCast(self), @ptrCast(sequence));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
    ///
    /// ``` self: ?*C.QPolarChart, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        C.QGraphicsWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
    ///
    /// ``` self: ?*C.QPolarChart, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        C.QGraphicsWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: ?*C.QPolarChart, id: i32 ```
    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        C.QGraphicsWidget_SetShortcutAutoRepeat(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
    ///
    /// ``` self: ?*C.QPolarChart, action: ?*C.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        C.QGraphicsWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
    ///
    /// ``` self: ?*C.QPolarChart, actions: []?*C.QAction ```
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = C.struct_libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        C.QGraphicsWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
    ///
    /// ``` self: ?*C.QPolarChart, before: ?*C.QAction, actions: []?*C.QAction ```
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = C.struct_libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        C.QGraphicsWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
    ///
    /// ``` self: ?*C.QPolarChart, before: ?*C.QAction, action: ?*C.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        C.QGraphicsWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
    ///
    /// ``` self: ?*C.QPolarChart, action: ?*C.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        C.QGraphicsWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
    ///
    /// ``` self: ?*C.QPolarChart, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QAction {
        const _arr: C.struct_libqt_list = C.QGraphicsWidget_Actions(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QAction, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
    ///
    /// ``` self: ?*C.QPolarChart, attribute: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, attribute: i64) void {
        C.QGraphicsWidget_SetAttribute(@ptrCast(self), @intCast(attribute));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
    ///
    /// ``` self: ?*C.QPolarChart, attribute: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, attribute: i64) bool {
        return C.QGraphicsWidget_TestAttribute(@ptrCast(self), @intCast(attribute));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn GeometryChanged(self: ?*anyopaque) void {
        C.QGraphicsWidget_GeometryChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget) callconv(.c) void ```
    pub fn OnGeometryChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_Connect_GeometryChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn LayoutChanged(self: ?*anyopaque) void {
        C.QGraphicsWidget_LayoutChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget) callconv(.c) void ```
    pub fn OnLayoutChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_Connect_LayoutChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Close(self: ?*anyopaque) bool {
        return C.QGraphicsWidget_Close(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
    ///
    /// ``` self: ?*C.QPolarChart, sequence: ?*C.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, sequence: ?*anyopaque, context: i64) i32 {
        return C.QGraphicsWidget_GrabShortcut2(@ptrCast(self), @ptrCast(sequence), @intCast(context));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
    ///
    /// ``` self: ?*C.QPolarChart, id: i32, enabled: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enabled: bool) void {
        C.QGraphicsWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enabled);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: ?*C.QPolarChart, id: i32, enabled: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enabled: bool) void {
        C.QGraphicsWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enabled);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
    ///
    /// ``` self: ?*C.QPolarChart, attribute: qnamespace_enums.WidgetAttribute, on: bool ```
    pub fn SetAttribute2(self: ?*anyopaque, attribute: i64, on: bool) void {
        C.QGraphicsWidget_SetAttribute2(@ptrCast(self), @intCast(attribute), on);
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ``` self: ?*C.QPolarChart, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        C.QGraphicsObject_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
    ///
    /// ``` self: ?*C.QPolarChart, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        C.QGraphicsObject_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ParentChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_ParentChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnParentChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_ParentChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn OpacityChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_OpacityChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnOpacityChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_OpacityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn VisibleChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn EnabledChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_EnabledChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnEnabledChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_EnabledChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn XChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_XChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnXChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_XChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn YChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_YChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnYChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_YChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ZChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_ZChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnZChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_ZChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn RotationChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_RotationChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnRotationChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_RotationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ScaleChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_ScaleChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnScaleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_ScaleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ChildrenChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_ChildrenChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnChildrenChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_ChildrenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn WidthChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_WidthChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_WidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn HeightChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_HeightChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnHeightChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_HeightChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ``` self: ?*C.QPolarChart, typeVal: qnamespace_enums.GestureType, flags: i32 ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i64) void {
        C.QGraphicsObject_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QPolarChart, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QPolarChart, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QPolarChart, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QPolarChart, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QPolarChart, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QPolarChart, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QPolarChart, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QPolarChart, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QPolarChart, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QPolarChart, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QPolarChart, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QPolarChart, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QPolarChart, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QPolarChart, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QPolarChart, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QPolarChart, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QPolarChart, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QPolarChart, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Scene(self: ?*anyopaque) ?*C.QGraphicsScene {
        return C.QGraphicsItem_Scene(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ParentItem(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsItem_ParentItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn TopLevelItem(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsItem_TopLevelItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ParentObject(self: ?*anyopaque) ?*C.QGraphicsObject {
        return C.QGraphicsItem_ParentObject(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ParentWidget(self: ?*anyopaque) ?*C.QGraphicsWidget {
        return C.QGraphicsItem_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn TopLevelWidget(self: ?*anyopaque) ?*C.QGraphicsWidget {
        return C.QGraphicsItem_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Window(self: ?*anyopaque) ?*C.QGraphicsWidget {
        return C.QGraphicsItem_Window(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Panel(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsItem_Panel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
    ///
    /// ``` self: ?*C.QPolarChart, parent: ?*C.QGraphicsItem ```
    pub fn SetParentItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QGraphicsItem_SetParentItem(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
    ///
    /// ``` self: ?*C.QPolarChart, allocator: std.mem.Allocator ```
    pub fn ChildItems(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsItem_ChildItems(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsWidget(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsWindow(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsPanel(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsPanel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ToGraphicsObject(self: ?*anyopaque) ?*C.QGraphicsObject {
        return C.QGraphicsItem_ToGraphicsObject(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ToGraphicsObject2(self: ?*anyopaque) ?*C.QGraphicsObject {
        return C.QGraphicsItem_ToGraphicsObject2(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Group(self: ?*anyopaque) ?*C.QGraphicsItemGroup {
        return C.QGraphicsItem_Group(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
    ///
    /// ``` self: ?*C.QPolarChart, group: ?*C.QGraphicsItemGroup ```
    pub fn SetGroup(self: ?*anyopaque, group: ?*anyopaque) void {
        C.QGraphicsItem_SetGroup(@ptrCast(self), @ptrCast(group));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Flags(self: ?*anyopaque) i64 {
        return C.QGraphicsItem_Flags(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ``` self: ?*C.QPolarChart, flag: qgraphicsitem_enums.GraphicsItemFlag ```
    pub fn SetFlag(self: ?*anyopaque, flag: i64) void {
        C.QGraphicsItem_SetFlag(@ptrCast(self), @intCast(flag));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
    ///
    /// ``` self: ?*C.QPolarChart, flags: i32 ```
    pub fn SetFlags(self: ?*anyopaque, flags: i64) void {
        C.QGraphicsItem_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn CacheMode(self: ?*anyopaque) i64 {
        return C.QGraphicsItem_CacheMode(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ``` self: ?*C.QPolarChart, mode: qgraphicsitem_enums.CacheMode ```
    pub fn SetCacheMode(self: ?*anyopaque, mode: i64) void {
        C.QGraphicsItem_SetCacheMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn PanelModality(self: ?*anyopaque) i64 {
        return C.QGraphicsItem_PanelModality(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
    ///
    /// ``` self: ?*C.QPolarChart, panelModality: qgraphicsitem_enums.PanelModality ```
    pub fn SetPanelModality(self: ?*anyopaque, panelModality: i64) void {
        C.QGraphicsItem_SetPanelModality(@ptrCast(self), @intCast(panelModality));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsBlockedByModalPanel(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsBlockedByModalPanel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
    ///
    /// ``` self: ?*C.QPolarChart, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QGraphicsItem_ToolTip(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
    ///
    /// ``` self: ?*C.QPolarChart, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = C.struct_libqt_string{
            .len = toolTip.len,
            .data = @constCast(toolTip.ptr),
        };
        C.QGraphicsItem_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Cursor(self: ?*anyopaque) ?*C.QCursor {
        return C.QGraphicsItem_Cursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
    ///
    /// ``` self: ?*C.QPolarChart, cursor: ?*C.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        C.QGraphicsItem_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn HasCursor(self: ?*anyopaque) bool {
        return C.QGraphicsItem_HasCursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        C.QGraphicsItem_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsVisible(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
    ///
    /// ``` self: ?*C.QPolarChart, parent: ?*C.QGraphicsItem ```
    pub fn IsVisibleTo(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return C.QGraphicsItem_IsVisibleTo(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
    ///
    /// ``` self: ?*C.QPolarChart, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        C.QGraphicsItem_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Hide(self: ?*anyopaque) void {
        C.QGraphicsItem_Hide(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Show(self: ?*anyopaque) void {
        C.QGraphicsItem_Show(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
    ///
    /// ``` self: ?*C.QPolarChart, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QGraphicsItem_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsSelected(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsSelected(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
    ///
    /// ``` self: ?*C.QPolarChart, selected: bool ```
    pub fn SetSelected(self: ?*anyopaque, selected: bool) void {
        C.QGraphicsItem_SetSelected(@ptrCast(self), selected);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return C.QGraphicsItem_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
    ///
    /// ``` self: ?*C.QPolarChart, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        C.QGraphicsItem_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return C.QGraphicsItem_Opacity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn EffectiveOpacity(self: ?*anyopaque) f64 {
        return C.QGraphicsItem_EffectiveOpacity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
    ///
    /// ``` self: ?*C.QPolarChart, opacity: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        C.QGraphicsItem_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn GraphicsEffect(self: ?*anyopaque) ?*C.QGraphicsEffect {
        return C.QGraphicsItem_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
    ///
    /// ``` self: ?*C.QPolarChart, effect: ?*C.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        C.QGraphicsItem_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn AcceptedMouseButtons(self: ?*anyopaque) i64 {
        return C.QGraphicsItem_AcceptedMouseButtons(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
    ///
    /// ``` self: ?*C.QPolarChart, buttons: i32 ```
    pub fn SetAcceptedMouseButtons(self: ?*anyopaque, buttons: i64) void {
        C.QGraphicsItem_SetAcceptedMouseButtons(@ptrCast(self), @intCast(buttons));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn AcceptHoverEvents(self: ?*anyopaque) bool {
        return C.QGraphicsItem_AcceptHoverEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
    ///
    /// ``` self: ?*C.QPolarChart, enabled: bool ```
    pub fn SetAcceptHoverEvents(self: ?*anyopaque, enabled: bool) void {
        C.QGraphicsItem_SetAcceptHoverEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn AcceptTouchEvents(self: ?*anyopaque) bool {
        return C.QGraphicsItem_AcceptTouchEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
    ///
    /// ``` self: ?*C.QPolarChart, enabled: bool ```
    pub fn SetAcceptTouchEvents(self: ?*anyopaque, enabled: bool) void {
        C.QGraphicsItem_SetAcceptTouchEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn FiltersChildEvents(self: ?*anyopaque) bool {
        return C.QGraphicsItem_FiltersChildEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
    ///
    /// ``` self: ?*C.QPolarChart, enabled: bool ```
    pub fn SetFiltersChildEvents(self: ?*anyopaque, enabled: bool) void {
        C.QGraphicsItem_SetFiltersChildEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn HandlesChildEvents(self: ?*anyopaque) bool {
        return C.QGraphicsItem_HandlesChildEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
    ///
    /// ``` self: ?*C.QPolarChart, enabled: bool ```
    pub fn SetHandlesChildEvents(self: ?*anyopaque, enabled: bool) void {
        C.QGraphicsItem_SetHandlesChildEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsActive(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
    ///
    /// ``` self: ?*C.QPolarChart, active: bool ```
    pub fn SetActive(self: ?*anyopaque, active: bool) void {
        C.QGraphicsItem_SetActive(@ptrCast(self), active);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn HasFocus(self: ?*anyopaque) bool {
        return C.QGraphicsItem_HasFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn SetFocus(self: ?*anyopaque) void {
        C.QGraphicsItem_SetFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        C.QGraphicsItem_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn FocusProxy(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsItem_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
    ///
    /// ``` self: ?*C.QPolarChart, item: ?*C.QGraphicsItem ```
    pub fn SetFocusProxy(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QGraphicsItem_SetFocusProxy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn FocusItem(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsItem_FocusItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn FocusScopeItem(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsItem_FocusScopeItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        C.QGraphicsItem_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn UngrabMouse(self: ?*anyopaque) void {
        C.QGraphicsItem_UngrabMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        C.QGraphicsItem_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn UngrabKeyboard(self: ?*anyopaque) void {
        C.QGraphicsItem_UngrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Pos(self: ?*anyopaque) ?*C.QPointF {
        return C.QGraphicsItem_Pos(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn X(self: ?*anyopaque) f64 {
        return C.QGraphicsItem_X(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
    ///
    /// ``` self: ?*C.QPolarChart, x: f64 ```
    pub fn SetX(self: ?*anyopaque, x: f64) void {
        C.QGraphicsItem_SetX(@ptrCast(self), @floatCast(x));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Y(self: ?*anyopaque) f64 {
        return C.QGraphicsItem_Y(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
    ///
    /// ``` self: ?*C.QPolarChart, y: f64 ```
    pub fn SetY(self: ?*anyopaque, y: f64) void {
        C.QGraphicsItem_SetY(@ptrCast(self), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ScenePos(self: ?*anyopaque) ?*C.QPointF {
        return C.QGraphicsItem_ScenePos(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ``` self: ?*C.QPolarChart, pos: ?*C.QPointF ```
    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        C.QGraphicsItem_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ``` self: ?*C.QPolarChart, x: f64, y: f64 ```
    pub fn SetPos2(self: ?*anyopaque, x: f64, y: f64) void {
        C.QGraphicsItem_SetPos2(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
    ///
    /// ``` self: ?*C.QPolarChart, dx: f64, dy: f64 ```
    pub fn MoveBy(self: ?*anyopaque, dx: f64, dy: f64) void {
        C.QGraphicsItem_MoveBy(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn EnsureVisible(self: ?*anyopaque) void {
        C.QGraphicsItem_EnsureVisible(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: ?*C.QPolarChart, x: f64, y: f64, w: f64, h: f64 ```
    pub fn EnsureVisible2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        C.QGraphicsItem_EnsureVisible2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Transform(self: ?*anyopaque) ?*C.QTransform {
        return C.QGraphicsItem_Transform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn SceneTransform(self: ?*anyopaque) ?*C.QTransform {
        return C.QGraphicsItem_SceneTransform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
    ///
    /// ``` self: ?*C.QPolarChart, viewportTransform: ?*C.QTransform ```
    pub fn DeviceTransform(self: ?*anyopaque, viewportTransform: ?*anyopaque) ?*C.QTransform {
        return C.QGraphicsItem_DeviceTransform(@ptrCast(self), @ptrCast(viewportTransform));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ``` self: ?*C.QPolarChart, other: ?*C.QGraphicsItem ```
    pub fn ItemTransform(self: ?*anyopaque, other: ?*anyopaque) ?*C.QTransform {
        return C.QGraphicsItem_ItemTransform(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ``` self: ?*C.QPolarChart, matrix: ?*C.QTransform ```
    pub fn SetTransform(self: ?*anyopaque, matrix: ?*anyopaque) void {
        C.QGraphicsItem_SetTransform(@ptrCast(self), @ptrCast(matrix));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ResetTransform(self: ?*anyopaque) void {
        C.QGraphicsItem_ResetTransform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
    ///
    /// ``` self: ?*C.QPolarChart, angle: f64 ```
    pub fn SetRotation(self: ?*anyopaque, angle: f64) void {
        C.QGraphicsItem_SetRotation(@ptrCast(self), @floatCast(angle));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Rotation(self: ?*anyopaque) f64 {
        return C.QGraphicsItem_Rotation(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
    ///
    /// ``` self: ?*C.QPolarChart, scale: f64 ```
    pub fn SetScale(self: ?*anyopaque, scale: f64) void {
        C.QGraphicsItem_SetScale(@ptrCast(self), @floatCast(scale));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Scale(self: ?*anyopaque) f64 {
        return C.QGraphicsItem_Scale(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
    ///
    /// ``` self: ?*C.QPolarChart, allocator: std.mem.Allocator ```
    pub fn Transformations(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QGraphicsTransform {
        const _arr: C.struct_libqt_list = C.QGraphicsItem_Transformations(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsTransform, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsTransform = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
    ///
    /// ``` self: ?*C.QPolarChart, transformations: []?*C.QGraphicsTransform ```
    pub fn SetTransformations(self: ?*anyopaque, transformations: []?*anyopaque) void {
        const transformations_list = C.struct_libqt_list{
            .len = transformations.len,
            .data = @ptrCast(transformations.ptr),
        };
        C.QGraphicsItem_SetTransformations(@ptrCast(self), transformations_list);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn TransformOriginPoint(self: ?*anyopaque) ?*C.QPointF {
        return C.QGraphicsItem_TransformOriginPoint(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ``` self: ?*C.QPolarChart, origin: ?*C.QPointF ```
    pub fn SetTransformOriginPoint(self: ?*anyopaque, origin: ?*anyopaque) void {
        C.QGraphicsItem_SetTransformOriginPoint(@ptrCast(self), @ptrCast(origin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ``` self: ?*C.QPolarChart, ax: f64, ay: f64 ```
    pub fn SetTransformOriginPoint2(self: ?*anyopaque, ax: f64, ay: f64) void {
        C.QGraphicsItem_SetTransformOriginPoint2(@ptrCast(self), @floatCast(ax), @floatCast(ay));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ZValue(self: ?*anyopaque) f64 {
        return C.QGraphicsItem_ZValue(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
    ///
    /// ``` self: ?*C.QPolarChart, z: f64 ```
    pub fn SetZValue(self: ?*anyopaque, z: f64) void {
        C.QGraphicsItem_SetZValue(@ptrCast(self), @floatCast(z));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
    ///
    /// ``` self: ?*C.QPolarChart, sibling: ?*C.QGraphicsItem ```
    pub fn StackBefore(self: ?*anyopaque, sibling: ?*anyopaque) void {
        C.QGraphicsItem_StackBefore(@ptrCast(self), @ptrCast(sibling));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ChildrenBoundingRect(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsItem_ChildrenBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn SceneBoundingRect(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsItem_SceneBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsClipped(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsClipped(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ClipPath(self: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsItem_ClipPath(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ``` self: ?*C.QPolarChart, allocator: std.mem.Allocator ```
    pub fn CollidingItems(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsItem_CollidingItems(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsObscured(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsObscured(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ``` self: ?*C.QPolarChart, x: f64, y: f64, w: f64, h: f64 ```
    pub fn IsObscured2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) bool {
        return C.QGraphicsItem_IsObscured2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
    ///
    /// ``` self: ?*C.QPolarChart, itemToDeviceTransform: ?*C.QTransform ```
    pub fn BoundingRegion(self: ?*anyopaque, itemToDeviceTransform: ?*anyopaque) ?*C.QRegion {
        return C.QGraphicsItem_BoundingRegion(@ptrCast(self), @ptrCast(itemToDeviceTransform));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn BoundingRegionGranularity(self: ?*anyopaque) f64 {
        return C.QGraphicsItem_BoundingRegionGranularity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
    ///
    /// ``` self: ?*C.QPolarChart, granularity: f64 ```
    pub fn SetBoundingRegionGranularity(self: ?*anyopaque, granularity: f64) void {
        C.QGraphicsItem_SetBoundingRegionGranularity(@ptrCast(self), @floatCast(granularity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Update(self: ?*anyopaque) void {
        C.QGraphicsItem_Update(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ``` self: ?*C.QPolarChart, x: f64, y: f64, width: f64, height: f64 ```
    pub fn Update2(self: ?*anyopaque, x: f64, y: f64, width: f64, height: f64) void {
        C.QGraphicsItem_Update2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(width), @floatCast(height));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ``` self: ?*C.QPolarChart, item: ?*C.QGraphicsItem, point: ?*C.QPointF ```
    pub fn MapToItem(self: ?*anyopaque, item: ?*anyopaque, point: ?*anyopaque) ?*C.QPointF {
        return C.QGraphicsItem_MapToItem(@ptrCast(self), @ptrCast(item), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ``` self: ?*C.QPolarChart, point: ?*C.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, point: ?*anyopaque) ?*C.QPointF {
        return C.QGraphicsItem_MapToParent(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ``` self: ?*C.QPolarChart, point: ?*C.QPointF ```
    pub fn MapToScene(self: ?*anyopaque, point: ?*anyopaque) ?*C.QPointF {
        return C.QGraphicsItem_MapToScene(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ``` self: ?*C.QPolarChart, item: ?*C.QGraphicsItem, rect: ?*C.QRectF ```
    pub fn MapRectToItem(self: ?*anyopaque, item: ?*anyopaque, rect: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsItem_MapRectToItem(@ptrCast(self), @ptrCast(item), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ``` self: ?*C.QPolarChart, rect: ?*C.QRectF ```
    pub fn MapRectToParent(self: ?*anyopaque, rect: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsItem_MapRectToParent(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ``` self: ?*C.QPolarChart, rect: ?*C.QRectF ```
    pub fn MapRectToScene(self: ?*anyopaque, rect: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsItem_MapRectToScene(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ``` self: ?*C.QPolarChart, item: ?*C.QGraphicsItem, path: ?*C.QPainterPath ```
    pub fn MapToItem4(self: ?*anyopaque, item: ?*anyopaque, path: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsItem_MapToItem4(@ptrCast(self), @ptrCast(item), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ``` self: ?*C.QPolarChart, path: ?*C.QPainterPath ```
    pub fn MapToParentWithPath(self: ?*anyopaque, path: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsItem_MapToParentWithPath(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ``` self: ?*C.QPolarChart, path: ?*C.QPainterPath ```
    pub fn MapToSceneWithPath(self: ?*anyopaque, path: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsItem_MapToSceneWithPath(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ``` self: ?*C.QPolarChart, item: ?*C.QGraphicsItem, point: ?*C.QPointF ```
    pub fn MapFromItem(self: ?*anyopaque, item: ?*anyopaque, point: ?*anyopaque) ?*C.QPointF {
        return C.QGraphicsItem_MapFromItem(@ptrCast(self), @ptrCast(item), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ``` self: ?*C.QPolarChart, point: ?*C.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, point: ?*anyopaque) ?*C.QPointF {
        return C.QGraphicsItem_MapFromParent(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ``` self: ?*C.QPolarChart, point: ?*C.QPointF ```
    pub fn MapFromScene(self: ?*anyopaque, point: ?*anyopaque) ?*C.QPointF {
        return C.QGraphicsItem_MapFromScene(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ``` self: ?*C.QPolarChart, item: ?*C.QGraphicsItem, rect: ?*C.QRectF ```
    pub fn MapRectFromItem(self: ?*anyopaque, item: ?*anyopaque, rect: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsItem_MapRectFromItem(@ptrCast(self), @ptrCast(item), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ``` self: ?*C.QPolarChart, rect: ?*C.QRectF ```
    pub fn MapRectFromParent(self: ?*anyopaque, rect: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsItem_MapRectFromParent(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ``` self: ?*C.QPolarChart, rect: ?*C.QRectF ```
    pub fn MapRectFromScene(self: ?*anyopaque, rect: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsItem_MapRectFromScene(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ``` self: ?*C.QPolarChart, item: ?*C.QGraphicsItem, path: ?*C.QPainterPath ```
    pub fn MapFromItem4(self: ?*anyopaque, item: ?*anyopaque, path: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsItem_MapFromItem4(@ptrCast(self), @ptrCast(item), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ``` self: ?*C.QPolarChart, path: ?*C.QPainterPath ```
    pub fn MapFromParentWithPath(self: ?*anyopaque, path: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsItem_MapFromParentWithPath(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ``` self: ?*C.QPolarChart, path: ?*C.QPainterPath ```
    pub fn MapFromSceneWithPath(self: ?*anyopaque, path: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsItem_MapFromSceneWithPath(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ``` self: ?*C.QPolarChart, item: ?*C.QGraphicsItem, x: f64, y: f64 ```
    pub fn MapToItem5(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64) ?*C.QPointF {
        return C.QGraphicsItem_MapToItem5(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ``` self: ?*C.QPolarChart, x: f64, y: f64 ```
    pub fn MapToParent2(self: ?*anyopaque, x: f64, y: f64) ?*C.QPointF {
        return C.QGraphicsItem_MapToParent2(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ``` self: ?*C.QPolarChart, x: f64, y: f64 ```
    pub fn MapToScene2(self: ?*anyopaque, x: f64, y: f64) ?*C.QPointF {
        return C.QGraphicsItem_MapToScene2(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ``` self: ?*C.QPolarChart, item: ?*C.QGraphicsItem, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectToItem2(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) ?*C.QRectF {
        return C.QGraphicsItem_MapRectToItem2(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ``` self: ?*C.QPolarChart, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectToParent2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) ?*C.QRectF {
        return C.QGraphicsItem_MapRectToParent2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ``` self: ?*C.QPolarChart, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectToScene2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) ?*C.QRectF {
        return C.QGraphicsItem_MapRectToScene2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ``` self: ?*C.QPolarChart, item: ?*C.QGraphicsItem, x: f64, y: f64 ```
    pub fn MapFromItem5(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64) ?*C.QPointF {
        return C.QGraphicsItem_MapFromItem5(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ``` self: ?*C.QPolarChart, x: f64, y: f64 ```
    pub fn MapFromParent2(self: ?*anyopaque, x: f64, y: f64) ?*C.QPointF {
        return C.QGraphicsItem_MapFromParent2(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ``` self: ?*C.QPolarChart, x: f64, y: f64 ```
    pub fn MapFromScene2(self: ?*anyopaque, x: f64, y: f64) ?*C.QPointF {
        return C.QGraphicsItem_MapFromScene2(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ``` self: ?*C.QPolarChart, item: ?*C.QGraphicsItem, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectFromItem2(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) ?*C.QRectF {
        return C.QGraphicsItem_MapRectFromItem2(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ``` self: ?*C.QPolarChart, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectFromParent2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) ?*C.QRectF {
        return C.QGraphicsItem_MapRectFromParent2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ``` self: ?*C.QPolarChart, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectFromScene2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) ?*C.QRectF {
        return C.QGraphicsItem_MapRectFromScene2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
    ///
    /// ``` self: ?*C.QPolarChart, child: ?*C.QGraphicsItem ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return C.QGraphicsItem_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
    ///
    /// ``` self: ?*C.QPolarChart, other: ?*C.QGraphicsItem ```
    pub fn CommonAncestorItem(self: ?*anyopaque, other: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsItem_CommonAncestorItem(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsUnderMouse(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsUnderMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
    ///
    /// ``` self: ?*C.QPolarChart, key: i32 ```
    pub fn Data(self: ?*anyopaque, key: i32) ?*C.QVariant {
        return C.QGraphicsItem_Data(@ptrCast(self), @intCast(key));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
    ///
    /// ``` self: ?*C.QPolarChart, key: i32, value: ?*C.QVariant ```
    pub fn SetData(self: ?*anyopaque, key: i32, value: ?*anyopaque) void {
        C.QGraphicsItem_SetData(@ptrCast(self), @intCast(key), @ptrCast(value));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return C.QGraphicsItem_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
    ///
    /// ``` self: ?*C.QPolarChart, hints: i32 ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        C.QGraphicsItem_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
    ///
    /// ``` self: ?*C.QPolarChart, filterItem: ?*C.QGraphicsItem ```
    pub fn InstallSceneEventFilter(self: ?*anyopaque, filterItem: ?*anyopaque) void {
        C.QGraphicsItem_InstallSceneEventFilter(@ptrCast(self), @ptrCast(filterItem));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
    ///
    /// ``` self: ?*C.QPolarChart, filterItem: ?*C.QGraphicsItem ```
    pub fn RemoveSceneEventFilter(self: ?*anyopaque, filterItem: ?*anyopaque) void {
        C.QGraphicsItem_RemoveSceneEventFilter(@ptrCast(self), @ptrCast(filterItem));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ``` self: ?*C.QPolarChart, flag: qgraphicsitem_enums.GraphicsItemFlag, enabled: bool ```
    pub fn SetFlag2(self: ?*anyopaque, flag: i64, enabled: bool) void {
        C.QGraphicsItem_SetFlag2(@ptrCast(self), @intCast(flag), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ``` self: ?*C.QPolarChart, mode: qgraphicsitem_enums.CacheMode, cacheSize: ?*C.QSize ```
    pub fn SetCacheMode2(self: ?*anyopaque, mode: i64, cacheSize: ?*anyopaque) void {
        C.QGraphicsItem_SetCacheMode2(@ptrCast(self), @intCast(mode), @ptrCast(cacheSize));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ``` self: ?*C.QPolarChart, focusReason: qnamespace_enums.FocusReason ```
    pub fn SetFocus1(self: ?*anyopaque, focusReason: i64) void {
        C.QGraphicsItem_SetFocus1(@ptrCast(self), @intCast(focusReason));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: ?*C.QPolarChart, rect: ?*C.QRectF ```
    pub fn EnsureVisible1(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QGraphicsItem_EnsureVisible1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: ?*C.QPolarChart, rect: ?*C.QRectF, xmargin: i32 ```
    pub fn EnsureVisible22(self: ?*anyopaque, rect: ?*anyopaque, xmargin: i32) void {
        C.QGraphicsItem_EnsureVisible22(@ptrCast(self), @ptrCast(rect), @intCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: ?*C.QPolarChart, rect: ?*C.QRectF, xmargin: i32, ymargin: i32 ```
    pub fn EnsureVisible3(self: ?*anyopaque, rect: ?*anyopaque, xmargin: i32, ymargin: i32) void {
        C.QGraphicsItem_EnsureVisible3(@ptrCast(self), @ptrCast(rect), @intCast(xmargin), @intCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: ?*C.QPolarChart, x: f64, y: f64, w: f64, h: f64, xmargin: i32 ```
    pub fn EnsureVisible5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xmargin: i32) void {
        C.QGraphicsItem_EnsureVisible5(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @intCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: ?*C.QPolarChart, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32 ```
    pub fn EnsureVisible6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32) void {
        C.QGraphicsItem_EnsureVisible6(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @intCast(xmargin), @intCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ``` self: ?*C.QPolarChart, other: ?*C.QGraphicsItem, ok: ?*bool ```
    pub fn ItemTransform2(self: ?*anyopaque, other: ?*anyopaque, ok: ?*anyopaque) ?*C.QTransform {
        return C.QGraphicsItem_ItemTransform2(@ptrCast(self), @ptrCast(other), @ptrCast(ok));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ``` self: ?*C.QPolarChart, matrix: ?*C.QTransform, combine: bool ```
    pub fn SetTransform2(self: ?*anyopaque, matrix: ?*anyopaque, combine: bool) void {
        C.QGraphicsItem_SetTransform2(@ptrCast(self), @ptrCast(matrix), combine);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ``` self: ?*C.QPolarChart, mode: qnamespace_enums.ItemSelectionMode, allocator: std.mem.Allocator ```
    pub fn CollidingItems1(self: ?*anyopaque, mode: i64, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsItem_CollidingItems1(@ptrCast(self), @intCast(mode));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ``` self: ?*C.QPolarChart, rect: ?*C.QRectF ```
    pub fn IsObscured1(self: ?*anyopaque, rect: ?*anyopaque) bool {
        return C.QGraphicsItem_IsObscured1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ``` self: ?*C.QPolarChart, rect: ?*C.QRectF ```
    pub fn Update1(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QGraphicsItem_Update1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ``` self: ?*C.QPolarChart, dx: f64, dy: f64, rect: ?*C.QRectF ```
    pub fn Scroll3(self: ?*anyopaque, dx: f64, dy: f64, rect: ?*anyopaque) void {
        C.QGraphicsItem_Scroll3(@ptrCast(self), @floatCast(dx), @floatCast(dy), @ptrCast(rect));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: ?*C.QPolarChart, policy: ?*C.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, policy: ?*anyopaque) void {
        C.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self), @ptrCast(policy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: ?*C.QPolarChart, hPolicy: qsizepolicy_enums.Policy, vPolicy: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, hPolicy: i64, vPolicy: i64) void {
        C.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self), @intCast(hPolicy), @intCast(vPolicy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn SizePolicy(self: ?*anyopaque) ?*C.QSizePolicy {
        return C.QGraphicsLayoutItem_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ``` self: ?*C.QPolarChart, size: ?*C.QSizeF ```
    pub fn SetMinimumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ``` self: ?*C.QPolarChart, w: f64, h: f64 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        C.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn MinimumSize(self: ?*anyopaque) ?*C.QSizeF {
        return C.QGraphicsLayoutItem_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ``` self: ?*C.QPolarChart, width: f64 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, width: f64) void {
        C.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn MinimumWidth(self: ?*anyopaque) f64 {
        return C.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ``` self: ?*C.QPolarChart, height: f64 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, height: f64) void {
        C.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn MinimumHeight(self: ?*anyopaque) f64 {
        return C.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ``` self: ?*C.QPolarChart, size: ?*C.QSizeF ```
    pub fn SetPreferredSize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ``` self: ?*C.QPolarChart, w: f64, h: f64 ```
    pub fn SetPreferredSize2(self: ?*anyopaque, w: f64, h: f64) void {
        C.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn PreferredSize(self: ?*anyopaque) ?*C.QSizeF {
        return C.QGraphicsLayoutItem_PreferredSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ``` self: ?*C.QPolarChart, width: f64 ```
    pub fn SetPreferredWidth(self: ?*anyopaque, width: f64) void {
        C.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn PreferredWidth(self: ?*anyopaque) f64 {
        return C.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ``` self: ?*C.QPolarChart, height: f64 ```
    pub fn SetPreferredHeight(self: ?*anyopaque, height: f64) void {
        C.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn PreferredHeight(self: ?*anyopaque) f64 {
        return C.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ``` self: ?*C.QPolarChart, size: ?*C.QSizeF ```
    pub fn SetMaximumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ``` self: ?*C.QPolarChart, w: f64, h: f64 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        C.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn MaximumSize(self: ?*anyopaque) ?*C.QSizeF {
        return C.QGraphicsLayoutItem_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ``` self: ?*C.QPolarChart, width: f64 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, width: f64) void {
        C.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn MaximumWidth(self: ?*anyopaque) f64 {
        return C.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ``` self: ?*C.QPolarChart, height: f64 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, height: f64) void {
        C.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn MaximumHeight(self: ?*anyopaque) f64 {
        return C.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Geometry(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsLayoutItem_Geometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ContentsRect(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsLayoutItem_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ``` self: ?*C.QPolarChart, which: qnamespace_enums.SizeHint ```
    pub fn EffectiveSizeHint(self: ?*anyopaque, which: i64) ?*C.QSizeF {
        return C.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self), @intCast(which));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn ParentLayoutItem(self: ?*anyopaque) ?*C.QGraphicsLayoutItem {
        return C.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ``` self: ?*C.QPolarChart, parent: ?*C.QGraphicsLayoutItem ```
    pub fn SetParentLayoutItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsLayout(self: ?*anyopaque) bool {
        return C.QGraphicsLayoutItem_IsLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn GraphicsItem(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn OwnedByLayout(self: ?*anyopaque) bool {
        return C.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: ?*C.QPolarChart, hPolicy: qsizepolicy_enums.Policy, vPolicy: qsizepolicy_enums.Policy, controlType: qsizepolicy_enums.ControlType ```
    pub fn SetSizePolicy3(self: ?*anyopaque, hPolicy: i64, vPolicy: i64, controlType: i64) void {
        C.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self), @intCast(hPolicy), @intCast(vPolicy), @intCast(controlType));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ``` self: ?*C.QPolarChart, which: qnamespace_enums.SizeHint, constraint: ?*C.QSizeF ```
    pub fn EffectiveSizeHint2(self: ?*anyopaque, which: i64, constraint: ?*anyopaque) ?*C.QSizeF {
        return C.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, rect: ?*C.QRectF ```
    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QPolarChart_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, rect: ?*C.QRectF ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QPolarChart_QBaseSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QRectF) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, left: ?*f64, top: ?*f64, right: ?*f64, bottom: ?*f64 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: ?*anyopaque, top: ?*anyopaque, right: ?*anyopaque, bottom: ?*anyopaque) void {
        C.QPolarChart_GetContentsMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, left: ?*f64, top: ?*f64, right: ?*f64, bottom: ?*f64 ```
    pub fn QBaseGetContentsMargins(self: ?*anyopaque, left: ?*anyopaque, top: ?*anyopaque, right: ?*anyopaque, bottom: ?*anyopaque) void {
        C.QPolarChart_QBaseGetContentsMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*f64, ?*f64, ?*f64, ?*f64) callconv(.c) void ```
    pub fn OnGetContentsMargins(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnGetContentsMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Type(self: ?*anyopaque) i32 {
        return C.QPolarChart_Type(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn QBaseType(self: ?*anyopaque) i32 {
        return C.QPolarChart_QBaseType(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn () callconv(.c) i32 ```
    pub fn OnType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QPolarChart_OnType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, painter: ?*C.QPainter, option: ?*C.QStyleOptionGraphicsItem, widget: ?*C.QWidget ```
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        C.QPolarChart_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, painter: ?*C.QPainter, option: ?*C.QStyleOptionGraphicsItem, widget: ?*C.QWidget ```
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        C.QPolarChart_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QPainter, ?*C.QStyleOptionGraphicsItem, ?*C.QWidget) callconv(.c) void ```
    pub fn OnPaint(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnPaint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, painter: ?*C.QPainter, option: ?*C.QStyleOptionGraphicsItem, widget: ?*C.QWidget ```
    pub fn PaintWindowFrame(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        C.QPolarChart_PaintWindowFrame(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, painter: ?*C.QPainter, option: ?*C.QStyleOptionGraphicsItem, widget: ?*C.QWidget ```
    pub fn QBasePaintWindowFrame(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        C.QPolarChart_QBasePaintWindowFrame(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QPainter, ?*C.QStyleOptionGraphicsItem, ?*C.QWidget) callconv(.c) void ```
    pub fn OnPaintWindowFrame(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnPaintWindowFrame(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn BoundingRect(self: ?*anyopaque) ?*C.QRectF {
        return C.QPolarChart_BoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn QBaseBoundingRect(self: ?*anyopaque) ?*C.QRectF {
        return C.QPolarChart_QBaseBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn () callconv(.c) ?*C.QRectF ```
    pub fn OnBoundingRect(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QRectF) void {
        C.QPolarChart_OnBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Shape(self: ?*anyopaque) ?*C.QPainterPath {
        return C.QPolarChart_Shape(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn QBaseShape(self: ?*anyopaque) ?*C.QPainterPath {
        return C.QPolarChart_QBaseShape(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn () callconv(.c) ?*C.QPainterPath ```
    pub fn OnShape(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QPainterPath) void {
        C.QPolarChart_OnShape(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, option: ?*C.QStyleOption ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        C.QPolarChart_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, option: ?*C.QStyleOption ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        C.QPolarChart_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QStyleOption) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnInitStyleOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, which: qnamespace_enums.SizeHint, constraint: ?*C.QSizeF ```
    pub fn SizeHint(self: ?*anyopaque, which: i64, constraint: ?*anyopaque) ?*C.QSizeF {
        return C.QPolarChart_SizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, which: qnamespace_enums.SizeHint, constraint: ?*C.QSizeF ```
    pub fn QBaseSizeHint(self: ?*anyopaque, which: i64, constraint: ?*anyopaque) ?*C.QSizeF {
        return C.QPolarChart_QBaseSizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, qnamespace_enums.SizeHint, ?*C.QSizeF) callconv(.c) ?*C.QSizeF ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) ?*C.QSizeF) void {
        C.QPolarChart_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        C.QPolarChart_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn QBaseUpdateGeometry(self: ?*anyopaque) void {
        C.QPolarChart_QBaseUpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn () callconv(.c) void ```
    pub fn OnUpdateGeometry(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QPolarChart_OnUpdateGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, change: qgraphicsitem_enums.GraphicsItemChange, value: ?*C.QVariant ```
    pub fn ItemChange(self: ?*anyopaque, change: i64, value: ?*anyopaque) ?*C.QVariant {
        return C.QPolarChart_ItemChange(@ptrCast(self), @intCast(change), @ptrCast(value));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, change: qgraphicsitem_enums.GraphicsItemChange, value: ?*C.QVariant ```
    pub fn QBaseItemChange(self: ?*anyopaque, change: i64, value: ?*anyopaque) ?*C.QVariant {
        return C.QPolarChart_QBaseItemChange(@ptrCast(self), @intCast(change), @ptrCast(value));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, qgraphicsitem_enums.GraphicsItemChange, ?*C.QVariant) callconv(.c) ?*C.QVariant ```
    pub fn OnItemChange(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) ?*C.QVariant) void {
        C.QPolarChart_OnItemChange(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, propertyName: []const u8, value: ?*C.QVariant ```
    pub fn PropertyChange(self: ?*anyopaque, propertyName: []const u8, value: ?*anyopaque) ?*C.QVariant {
        const propertyName_str = C.struct_libqt_string{
            .len = propertyName.len,
            .data = @constCast(propertyName.ptr),
        };
        return C.QPolarChart_PropertyChange(@ptrCast(self), propertyName_str, @ptrCast(value));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, propertyName: []const u8, value: ?*C.QVariant ```
    pub fn QBasePropertyChange(self: ?*anyopaque, propertyName: []const u8, value: ?*anyopaque) ?*C.QVariant {
        const propertyName_str = C.struct_libqt_string{
            .len = propertyName.len,
            .data = @constCast(propertyName.ptr),
        };
        return C.QPolarChart_QBasePropertyChange(@ptrCast(self), propertyName_str, @ptrCast(value));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, []const u8, ?*C.QVariant) callconv(.c) ?*C.QVariant ```
    pub fn OnPropertyChange(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, ?*anyopaque) callconv(.c) ?*C.QVariant) void {
        C.QPolarChart_OnPropertyChange(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QEvent ```
    pub fn SceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPolarChart_SceneEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QEvent ```
    pub fn QBaseSceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPolarChart_QBaseSceneEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnSceneEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QPolarChart_OnSceneEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, e: ?*C.QEvent ```
    pub fn WindowFrameEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return C.QPolarChart_WindowFrameEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, e: ?*C.QEvent ```
    pub fn QBaseWindowFrameEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return C.QPolarChart_QBaseWindowFrameEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnWindowFrameEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QPolarChart_OnWindowFrameEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, pos: ?*C.QPointF ```
    pub fn WindowFrameSectionAt(self: ?*anyopaque, pos: ?*anyopaque) i64 {
        return C.QPolarChart_WindowFrameSectionAt(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, pos: ?*C.QPointF ```
    pub fn QBaseWindowFrameSectionAt(self: ?*anyopaque, pos: ?*anyopaque) i64 {
        return C.QPolarChart_QBaseWindowFrameSectionAt(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QPointF) callconv(.c) i64 ```
    pub fn OnWindowFrameSectionAt(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i64) void {
        C.QPolarChart_OnWindowFrameSectionAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPolarChart_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPolarChart_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QPolarChart_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_ChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnChangeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnCloseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return C.QPolarChart_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return C.QPolarChart_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) bool) void {
        C.QPolarChart_OnFocusNextPrevChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnHideEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsSceneMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn PolishEvent(self: ?*anyopaque) void {
        C.QPolarChart_PolishEvent(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn QBasePolishEvent(self: ?*anyopaque) void {
        C.QPolarChart_QBasePolishEvent(@ptrCast(self));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn () callconv(.c) void ```
    pub fn OnPolishEvent(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QPolarChart_OnPolishEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsSceneResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnResizeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnShowEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneHoverEvent ```
    pub fn HoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_HoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneHoverEvent ```
    pub fn QBaseHoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseHoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsSceneHoverEvent) callconv(.c) void ```
    pub fn OnHoverMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnHoverMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneHoverEvent ```
    pub fn HoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_HoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneHoverEvent ```
    pub fn QBaseHoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseHoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsSceneHoverEvent) callconv(.c) void ```
    pub fn OnHoverLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnHoverLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QEvent ```
    pub fn GrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_GrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QEvent ```
    pub fn QBaseGrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseGrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QEvent) callconv(.c) void ```
    pub fn OnGrabMouseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnGrabMouseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QEvent ```
    pub fn UngrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_UngrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QEvent ```
    pub fn QBaseUngrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseUngrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QEvent) callconv(.c) void ```
    pub fn OnUngrabMouseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnUngrabMouseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QEvent ```
    pub fn GrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_GrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QEvent ```
    pub fn QBaseGrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseGrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QEvent) callconv(.c) void ```
    pub fn OnGrabKeyboardEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnGrabKeyboardEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QEvent ```
    pub fn UngrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_UngrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QEvent ```
    pub fn QBaseUngrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseUngrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QEvent) callconv(.c) void ```
    pub fn OnUngrabKeyboardEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnUngrabKeyboardEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPolarChart_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPolarChart_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QPolarChart_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QPolarChart_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QPolarChart_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QPolarChart_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QPolarChart_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, phase: i32 ```
    pub fn Advance(self: ?*anyopaque, phase: i32) void {
        C.QPolarChart_Advance(@ptrCast(self), @intCast(phase));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, phase: i32 ```
    pub fn QBaseAdvance(self: ?*anyopaque, phase: i32) void {
        C.QPolarChart_QBaseAdvance(@ptrCast(self), @intCast(phase));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, i32) callconv(.c) void ```
    pub fn OnAdvance(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QPolarChart_OnAdvance(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, point: ?*C.QPointF ```
    pub fn Contains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return C.QPolarChart_Contains(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, point: ?*C.QPointF ```
    pub fn QBaseContains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return C.QPolarChart_QBaseContains(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QPointF) callconv(.c) bool ```
    pub fn OnContains(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QPolarChart_OnContains(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, other: ?*C.QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn CollidesWithItem(self: ?*anyopaque, other: ?*anyopaque, mode: i64) bool {
        return C.QPolarChart_CollidesWithItem(@ptrCast(self), @ptrCast(other), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, other: ?*C.QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn QBaseCollidesWithItem(self: ?*anyopaque, other: ?*anyopaque, mode: i64) bool {
        return C.QPolarChart_QBaseCollidesWithItem(@ptrCast(self), @ptrCast(other), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsItem, qnamespace_enums.ItemSelectionMode) callconv(.c) bool ```
    pub fn OnCollidesWithItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) bool) void {
        C.QPolarChart_OnCollidesWithItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, path: ?*C.QPainterPath, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn CollidesWithPath(self: ?*anyopaque, path: ?*anyopaque, mode: i64) bool {
        return C.QPolarChart_CollidesWithPath(@ptrCast(self), @ptrCast(path), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, path: ?*C.QPainterPath, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn QBaseCollidesWithPath(self: ?*anyopaque, path: ?*anyopaque, mode: i64) bool {
        return C.QPolarChart_QBaseCollidesWithPath(@ptrCast(self), @ptrCast(path), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QPainterPath, qnamespace_enums.ItemSelectionMode) callconv(.c) bool ```
    pub fn OnCollidesWithPath(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) bool) void {
        C.QPolarChart_OnCollidesWithPath(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, item: ?*C.QGraphicsItem ```
    pub fn IsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return C.QPolarChart_IsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, item: ?*C.QGraphicsItem ```
    pub fn QBaseIsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return C.QPolarChart_QBaseIsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsItem) callconv(.c) bool ```
    pub fn OnIsObscuredBy(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QPolarChart_OnIsObscuredBy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn OpaqueArea(self: ?*anyopaque) ?*C.QPainterPath {
        return C.QPolarChart_OpaqueArea(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn QBaseOpaqueArea(self: ?*anyopaque) ?*C.QPainterPath {
        return C.QPolarChart_QBaseOpaqueArea(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn () callconv(.c) ?*C.QPainterPath ```
    pub fn OnOpaqueArea(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QPainterPath) void {
        C.QPolarChart_OnOpaqueArea(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, watched: ?*C.QGraphicsItem, event: ?*C.QEvent ```
    pub fn SceneEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPolarChart_SceneEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, watched: ?*C.QGraphicsItem, event: ?*C.QEvent ```
    pub fn QBaseSceneEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPolarChart_QBaseSceneEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsItem, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnSceneEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QPolarChart_OnSceneEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsSceneContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnContextMenuEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnDragEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnDragLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnDragMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnDropEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneHoverEvent ```
    pub fn HoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_HoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneHoverEvent ```
    pub fn QBaseHoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseHoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsSceneHoverEvent) callconv(.c) void ```
    pub fn OnHoverEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnHoverEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QGraphicsSceneWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsSceneWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, event: ?*C.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPolarChart_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnInputMethodEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, query: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, query: i64) ?*C.QVariant {
        return C.QPolarChart_InputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, query: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, query: i64) ?*C.QVariant {
        return C.QPolarChart_QBaseInputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, qnamespace_enums.InputMethodQuery) callconv(.c) ?*C.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) ?*C.QVariant) void {
        C.QPolarChart_OnInputMethodQuery(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, extension: qgraphicsitem_enums.Extension ```
    pub fn SupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return C.QPolarChart_SupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, extension: qgraphicsitem_enums.Extension ```
    pub fn QBaseSupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return C.QPolarChart_QBaseSupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, qgraphicsitem_enums.Extension) callconv(.c) bool ```
    pub fn OnSupportsExtension(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        C.QPolarChart_OnSupportsExtension(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, extension: qgraphicsitem_enums.Extension, variant: ?*C.QVariant ```
    pub fn SetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        C.QPolarChart_SetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, extension: qgraphicsitem_enums.Extension, variant: ?*C.QVariant ```
    pub fn QBaseSetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        C.QPolarChart_QBaseSetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, qgraphicsitem_enums.Extension, ?*C.QVariant) callconv(.c) void ```
    pub fn OnSetExtension(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnSetExtension(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, variant: ?*C.QVariant ```
    pub fn Extension(self: ?*anyopaque, variant: ?*anyopaque) ?*C.QVariant {
        return C.QPolarChart_Extension(@ptrCast(self), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, variant: ?*C.QVariant ```
    pub fn QBaseExtension(self: ?*anyopaque, variant: ?*anyopaque) ?*C.QVariant {
        return C.QPolarChart_QBaseExtension(@ptrCast(self), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QVariant) callconv(.c) ?*C.QVariant ```
    pub fn OnExtension(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QVariant) void {
        C.QPolarChart_OnExtension(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return C.QPolarChart_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return C.QPolarChart_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QPolarChart_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        C.QPolarChart_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        C.QPolarChart_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QPolarChart_OnUpdateMicroFocus(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QPolarChart_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QPolarChart_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QPolarChart_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QPolarChart_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QPolarChart_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QPolarChart_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QPolarChart_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QPolarChart_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QPolarChart_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QPolarChart_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QPolarChart_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QPolarChart_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn AddToIndex(self: ?*anyopaque) void {
        C.QPolarChart_AddToIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn QBaseAddToIndex(self: ?*anyopaque) void {
        C.QPolarChart_QBaseAddToIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn () callconv(.c) void ```
    pub fn OnAddToIndex(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QPolarChart_OnAddToIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn RemoveFromIndex(self: ?*anyopaque) void {
        C.QPolarChart_RemoveFromIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn QBaseRemoveFromIndex(self: ?*anyopaque) void {
        C.QPolarChart_QBaseRemoveFromIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn () callconv(.c) void ```
    pub fn OnRemoveFromIndex(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QPolarChart_OnRemoveFromIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn PrepareGeometryChange(self: ?*anyopaque) void {
        C.QPolarChart_PrepareGeometryChange(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn QBasePrepareGeometryChange(self: ?*anyopaque) void {
        C.QPolarChart_QBasePrepareGeometryChange(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn () callconv(.c) void ```
    pub fn OnPrepareGeometryChange(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QPolarChart_OnPrepareGeometryChange(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, item: ?*C.QGraphicsItem ```
    pub fn SetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QPolarChart_SetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, item: ?*C.QGraphicsItem ```
    pub fn QBaseSetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QPolarChart_QBaseSetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, ?*C.QGraphicsItem) callconv(.c) void ```
    pub fn OnSetGraphicsItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPolarChart_OnSetGraphicsItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, ownedByLayout: bool ```
    pub fn SetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        C.QPolarChart_SetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, ownedByLayout: bool ```
    pub fn QBaseSetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        C.QPolarChart_QBaseSetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPolarChart, slot: fn (?*C.QPolarChart, bool) callconv(.c) void ```
    pub fn OnSetOwnedByLayout(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QPolarChart_OnSetOwnedByLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QPolarChart ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QPolarChart_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpolarchart.html#types
pub const enums = struct {
    pub const PolarOrientation = enum {
        pub const PolarOrientationRadial: i32 = 1;
        pub const PolarOrientationAngular: i32 = 2;
    };
};
