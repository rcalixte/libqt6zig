const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlegend_enums = @import("libqlegend.zig").enums;
const qlegendmarker_enums = @import("libqlegendmarker.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qarealegendmarker-qtcharts.html)
pub const qarealegendmarker = struct {
    /// New constructs a new QAreaLegendMarker object.
    ///
    /// ## Parameter(s):
    ///
    /// ` series: QtC.QAreaSeries `
    ///
    /// ` legend: QtC.QLegend `
    ///
    pub fn New(series: ?*anyopaque, legend: ?*anyopaque) QtC.QAreaLegendMarker {
        return qtc.QAreaLegendMarker_new(@ptrCast(series), @ptrCast(legend));
    }

    /// New2 constructs a new QAreaLegendMarker object.
    ///
    /// ## Parameter(s):
    ///
    /// ` series: QtC.QAreaSeries `
    ///
    /// ` legend: QtC.QLegend `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(series: ?*anyopaque, legend: ?*anyopaque, parent: ?*anyopaque) QtC.QAreaLegendMarker {
        return qtc.QAreaLegendMarker_new2(@ptrCast(series), @ptrCast(legend), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QAreaLegendMarker_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QAreaLegendMarker_OnMetaObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn QBaseMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QAreaLegendMarker_QBaseMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAreaLegendMarker_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QAreaLegendMarker_OnMetacast(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn QBaseMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAreaLegendMarker_QBaseMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAreaLegendMarker_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QAreaLegendMarker_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAreaLegendMarker_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qarealegendmarker.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarealegendmarker-qtcharts.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ## Returns:
    ///
    /// ` qlegendmarker_enums.LegendMarkerType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QAreaLegendMarker_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarealegendmarker-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QAreaLegendMarker_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarealegendmarker-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ## Returns:
    ///
    /// ` qlegendmarker_enums.LegendMarkerType `
    ///
    pub fn QBaseType(self: ?*anyopaque) i32 {
        return qtc.QAreaLegendMarker_QBaseType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarealegendmarker-qtcharts.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn Series(self: ?*anyopaque) QtC.QAreaSeries {
        return qtc.QAreaLegendMarker_Series(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarealegendmarker-qtcharts.html#series)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAreaSeries `
    ///
    pub fn OnSeries(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAreaSeries) void {
        qtc.QAreaLegendMarker_OnSeries(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarealegendmarker-qtcharts.html#series)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn QBaseSeries(self: ?*anyopaque) QtC.QAreaSeries {
        return qtc.QAreaLegendMarker_QBaseSeries(@ptrCast(self));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qarealegendmarker.Tr2: Memory allocation failed");
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
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qarealegendmarker.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLegendMarker_Label(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qarealegendmarker.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` label: []const u8 `
    ///
    pub fn SetLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QLegendMarker_SetLabel(@ptrCast(self), label_str);
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn LabelBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QLegendMarker_LabelBrush(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetLabelBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QLegendMarker_SetLabelBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QLegendMarker_Font(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QLegendMarker_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn Pen(self: ?*anyopaque) QtC.QPen {
        return qtc.QLegendMarker_Pen(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QLegendMarker_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn Brush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QLegendMarker_Brush(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QLegendMarker_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QLegendMarker_IsVisible(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QLegendMarker_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ## Returns:
    ///
    /// ` qlegend_enums.MarkerShape `
    ///
    pub fn Shape(self: ?*anyopaque) i32 {
        return qtc.QLegendMarker_Shape(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` shape: qlegend_enums.MarkerShape `
    ///
    pub fn SetShape(self: ?*anyopaque, shape: i32) void {
        qtc.QLegendMarker_SetShape(@ptrCast(self), @intCast(shape));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn Clicked(self: ?*anyopaque) void {
        qtc.QLegendMarker_Clicked(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker) callconv(.c) void `
    ///
    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` status: bool `
    ///
    pub fn Hovered(self: ?*anyopaque, status: bool) void {
        qtc.QLegendMarker_Hovered(@ptrCast(self), status);
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker, status: bool) callconv(.c) void `
    ///
    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn LabelChanged(self: ?*anyopaque) void {
        qtc.QLegendMarker_LabelChanged(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker) callconv(.c) void `
    ///
    pub fn OnLabelChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_LabelChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn LabelBrushChanged(self: ?*anyopaque) void {
        qtc.QLegendMarker_LabelBrushChanged(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker) callconv(.c) void `
    ///
    pub fn OnLabelBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_LabelBrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn FontChanged(self: ?*anyopaque) void {
        qtc.QLegendMarker_FontChanged(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker) callconv(.c) void `
    ///
    pub fn OnFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_FontChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn PenChanged(self: ?*anyopaque) void {
        qtc.QLegendMarker_PenChanged(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker) callconv(.c) void `
    ///
    pub fn OnPenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_PenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn BrushChanged(self: ?*anyopaque) void {
        qtc.QLegendMarker_BrushChanged(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker) callconv(.c) void `
    ///
    pub fn OnBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_BrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn VisibleChanged(self: ?*anyopaque) void {
        qtc.QLegendMarker_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_VisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn ShapeChanged(self: ?*anyopaque) void {
        qtc.QLegendMarker_ShapeChanged(@ptrCast(self));
    }

    /// Inherited from QLegendMarker
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker) callconv(.c) void `
    ///
    pub fn OnShapeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLegendMarker_Connect_ShapeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qarealegendmarker.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qarealegendmarker.Children: Memory allocation failed");
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qarealegendmarker.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qarealegendmarker.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker) callconv(.c) void `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @intCast(time), @intCast(timerType));
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
    /// ` self: QtC.QAreaLegendMarker `
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
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
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
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker, param1: QtC.QObject) callconv(.c) void `
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
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAreaLegendMarker_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAreaLegendMarker_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker`
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAreaLegendMarker_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAreaLegendMarker_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAreaLegendMarker_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker`
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAreaLegendMarker_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAreaLegendMarker_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAreaLegendMarker_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker`
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaLegendMarker_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAreaLegendMarker_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAreaLegendMarker_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker`
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaLegendMarker_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAreaLegendMarker_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAreaLegendMarker_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker`
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaLegendMarker_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QAreaLegendMarker_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QAreaLegendMarker_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker`
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaLegendMarker_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QAreaLegendMarker_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QAreaLegendMarker_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker`
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAreaLegendMarker_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QAreaLegendMarker_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QAreaLegendMarker_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QAreaLegendMarker_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QAreaLegendMarker_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QAreaLegendMarker_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QAreaLegendMarker_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAreaLegendMarker_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAreaLegendMarker_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker`
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QAreaLegendMarker_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QAreaLegendMarker_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QAreaLegendMarker_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker`
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAreaLegendMarker_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    /// ` callback: *const fn (self: QtC.QAreaLegendMarker, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarealegendmarker-qtcharts.html#dtor.QAreaLegendMarker)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAreaLegendMarker `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAreaLegendMarker_Delete(@ptrCast(self));
    }
};
