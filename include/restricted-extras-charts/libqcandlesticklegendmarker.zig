const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlegend_enums = @import("libqlegend.zig").enums;
const qlegendmarker_enums = @import("libqlegendmarker.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html
pub const qcandlesticklegendmarker = struct {
    /// New constructs a new QCandlestickLegendMarker object.
    ///
    /// ``` series: QtC.QCandlestickSeries, legend: QtC.QLegend ```
    pub fn New(series: ?*anyopaque, legend: ?*anyopaque) QtC.QCandlestickLegendMarker {
        return qtc.QCandlestickLegendMarker_new(@ptrCast(series), @ptrCast(legend));
    }

    /// New2 constructs a new QCandlestickLegendMarker object.
    ///
    /// ``` series: QtC.QCandlestickSeries, legend: QtC.QLegend, parent: QtC.QObject ```
    pub fn New2(series: ?*anyopaque, legend: ?*anyopaque, parent: ?*anyopaque) QtC.QCandlestickLegendMarker {
        return qtc.QCandlestickLegendMarker_new2(@ptrCast(series), @ptrCast(legend), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QCandlestickLegendMarker_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QCandlestickLegendMarker, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCandlestickLegendMarker_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QCandlestickLegendMarker, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QCandlestickLegendMarker_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, slot: fn (self: QtC.QCandlestickLegendMarker, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QCandlestickLegendMarker_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QCandlestickLegendMarker_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QCandlestickLegendMarker_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlesticklegendmarker.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#type)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QCandlestickLegendMarker_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, slot: fn () callconv(.c) i64 ```
    pub fn OnType(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QCandlestickLegendMarker_OnType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn QBaseType(self: ?*anyopaque) i64 {
        return qtc.QCandlestickLegendMarker_QBaseType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#series)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn Series(self: ?*anyopaque) QtC.QCandlestickSeries {
        return qtc.QCandlestickLegendMarker_Series(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#series)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, slot: fn () callconv(.c) QtC.QCandlestickSeries ```
    pub fn OnSeries(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QCandlestickSeries) void {
        qtc.QCandlestickLegendMarker_OnSeries(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#series)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn QBaseSeries(self: ?*anyopaque) QtC.QCandlestickSeries {
        return qtc.QCandlestickLegendMarker_QBaseSeries(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QCandlestickLegendMarker_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlesticklegendmarker.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QCandlestickLegendMarker_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlesticklegendmarker.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#label)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, allocator: std.mem.Allocator ```
    pub fn Label(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLegendMarker_Label(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlesticklegendmarker.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, label: []const u8 ```
    pub fn SetLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.struct_libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QLegendMarker_SetLabel(@ptrCast(self), label_str);
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn LabelBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QLegendMarker_LabelBrush(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, brush: QtC.QBrush ```
    pub fn SetLabelBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QLegendMarker_SetLabelBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#font)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QLegendMarker_Font(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QLegendMarker_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn Pen(self: ?*anyopaque) QtC.QPen {
        return qtc.QLegendMarker_Pen(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, pen: QtC.QPen ```
    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QLegendMarker_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn Brush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QLegendMarker_Brush(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, brush: QtC.QBrush ```
    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QLegendMarker_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QLegendMarker_IsVisible(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QLegendMarker_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn Shape(self: ?*anyopaque) i64 {
        return qtc.QLegendMarker_Shape(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, shape: qlegend_enums.MarkerShape ```
    pub fn SetShape(self: ?*anyopaque, shape: i64) void {
        qtc.QLegendMarker_SetShape(@ptrCast(self), @intCast(shape));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn Clicked(self: ?*anyopaque) void {
        qtc.QLegendMarker_Clicked(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
    ///
    /// ``` self: QtC.QLegendMarker, slot: fn (self: QtC.QLegendMarker) callconv(.c) void ```
    pub fn OnClicked(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_Clicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, status: bool ```
    pub fn Hovered(self: ?*anyopaque, status: bool) void {
        qtc.QLegendMarker_Hovered(@ptrCast(self), status);
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
    ///
    /// ``` self: QtC.QLegendMarker, slot: fn (self: QtC.QLegendMarker, status: bool) callconv(.c) void ```
    pub fn OnHovered(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_Hovered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn LabelChanged(self: ?*anyopaque) void {
        qtc.QLegendMarker_LabelChanged(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
    ///
    /// ``` self: QtC.QLegendMarker, slot: fn (self: QtC.QLegendMarker) callconv(.c) void ```
    pub fn OnLabelChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_LabelChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn LabelBrushChanged(self: ?*anyopaque) void {
        qtc.QLegendMarker_LabelBrushChanged(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
    ///
    /// ``` self: QtC.QLegendMarker, slot: fn (self: QtC.QLegendMarker) callconv(.c) void ```
    pub fn OnLabelBrushChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_LabelBrushChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn FontChanged(self: ?*anyopaque) void {
        qtc.QLegendMarker_FontChanged(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
    ///
    /// ``` self: QtC.QLegendMarker, slot: fn (self: QtC.QLegendMarker) callconv(.c) void ```
    pub fn OnFontChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_FontChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn PenChanged(self: ?*anyopaque) void {
        qtc.QLegendMarker_PenChanged(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
    ///
    /// ``` self: QtC.QLegendMarker, slot: fn (self: QtC.QLegendMarker) callconv(.c) void ```
    pub fn OnPenChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_PenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn BrushChanged(self: ?*anyopaque) void {
        qtc.QLegendMarker_BrushChanged(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
    ///
    /// ``` self: QtC.QLegendMarker, slot: fn (self: QtC.QLegendMarker) callconv(.c) void ```
    pub fn OnBrushChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_BrushChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn VisibleChanged(self: ?*anyopaque) void {
        qtc.QLegendMarker_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
    ///
    /// ``` self: QtC.QLegendMarker, slot: fn (self: QtC.QLegendMarker) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn ShapeChanged(self: ?*anyopaque) void {
        qtc.QLegendMarker_ShapeChanged(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
    ///
    /// ``` self: QtC.QLegendMarker, slot: fn (self: QtC.QLegendMarker) callconv(.c) void ```
    pub fn OnShapeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_ShapeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlesticklegendmarker.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, name: []const u8 ```
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
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qcandlesticklegendmarker.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, obj: QtC.QObject ```
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
    /// ``` self: QtC.QCandlestickLegendMarker, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return qtc.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qcandlesticklegendmarker.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcandlesticklegendmarker.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
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
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
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
    /// ``` self: QtC.QCandlestickLegendMarker, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, param1: QtC.QObject ```
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
    /// ``` self: QtC.QCandlestickLegendMarker, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCandlestickLegendMarker_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCandlestickLegendMarker_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, slot: fn (self: QtC.QCandlestickLegendMarker, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCandlestickLegendMarker_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCandlestickLegendMarker_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCandlestickLegendMarker_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, slot: fn (self: QtC.QCandlestickLegendMarker, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCandlestickLegendMarker_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCandlestickLegendMarker_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCandlestickLegendMarker_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, slot: fn (self: QtC.QCandlestickLegendMarker, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickLegendMarker_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCandlestickLegendMarker_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCandlestickLegendMarker_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, slot: fn (self: QtC.QCandlestickLegendMarker, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickLegendMarker_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCandlestickLegendMarker_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCandlestickLegendMarker_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, slot: fn (self: QtC.QCandlestickLegendMarker, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickLegendMarker_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCandlestickLegendMarker_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCandlestickLegendMarker_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, slot: fn (self: QtC.QCandlestickLegendMarker, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickLegendMarker_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCandlestickLegendMarker_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCandlestickLegendMarker_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, slot: fn (self: QtC.QCandlestickLegendMarker, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickLegendMarker_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QCandlestickLegendMarker_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QCandlestickLegendMarker_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QCandlestickLegendMarker_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QCandlestickLegendMarker_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QCandlestickLegendMarker_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QCandlestickLegendMarker_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCandlestickLegendMarker_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCandlestickLegendMarker_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, slot: fn (self: QtC.QCandlestickLegendMarker, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QCandlestickLegendMarker_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QCandlestickLegendMarker_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QCandlestickLegendMarker_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, slot: fn (self: QtC.QCandlestickLegendMarker, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCandlestickLegendMarker_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QCandlestickLegendMarker, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#dtor.QCandlestickLegendMarker)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCandlestickLegendMarker ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCandlestickLegendMarker_Delete(@ptrCast(self));
    }
};
