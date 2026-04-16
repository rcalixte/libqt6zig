const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBrush = @import("libqt6").QBrush;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPen = @import("libqt6").QPen;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const qabstractaxis_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html)
pub const QAbstractAxis = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractAxis,

    pub const _is_QAbstractAxis = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn MetaObject(self: QAbstractAxis) QMetaObject {
        return .{ .ptr = qtc.QAbstractAxis_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QAbstractAxis, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractAxis_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QAbstractAxis, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstractAxis_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractaxis.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ## Returns:
    ///
    /// ` qabstractaxis_enums.AxisType `
    ///
    pub fn Type(self: QAbstractAxis) i32 {
        return qtc.QAbstractAxis_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn IsVisible(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_IsVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn SetVisible(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn Show(self: QAbstractAxis) void {
        qtc.QAbstractAxis_Show(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn Hide(self: QAbstractAxis) void {
        qtc.QAbstractAxis_Hide(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn IsLineVisible(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_IsLineVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn SetLineVisible(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetLineVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetLinePen(self: QAbstractAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#linePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn LinePen(self: QAbstractAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_LinePen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLinePenColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn SetLinePenColor(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetLinePenColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#linePenColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn LinePenColor(self: QAbstractAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_LinePenColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn IsGridLineVisible(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_IsGridLineVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn SetGridLineVisible(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetGridLineVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetGridLinePen(self: QAbstractAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetGridLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn GridLinePen(self: QAbstractAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_GridLinePen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn IsMinorGridLineVisible(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_IsMinorGridLineVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn SetMinorGridLineVisible(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMinorGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetMinorGridLinePen(self: QAbstractAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetMinorGridLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn MinorGridLinePen(self: QAbstractAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_MinorGridLinePen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn SetGridLineColor(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetGridLineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn GridLineColor(self: QAbstractAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_GridLineColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMinorGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn SetMinorGridLineColor(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetMinorGridLineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn MinorGridLineColor(self: QAbstractAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_MinorGridLineColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn LabelsVisible(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_LabelsVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn SetLabelsVisible(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetLabelsVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetLabelsBrush(self: QAbstractAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_SetLabelsBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn LabelsBrush(self: QAbstractAxis) QBrush {
        return .{ .ptr = qtc.QAbstractAxis_LabelsBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` font: QFont `
    ///
    pub fn SetLabelsFont(self: QAbstractAxis, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAbstractAxis_SetLabelsFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn LabelsFont(self: QAbstractAxis) QFont {
        return .{ .ptr = qtc.QAbstractAxis_LabelsFont(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` angle: i32 `
    ///
    pub fn SetLabelsAngle(self: QAbstractAxis, angle: i32) void {
        qtc.QAbstractAxis_SetLabelsAngle(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn LabelsAngle(self: QAbstractAxis) i32 {
        return qtc.QAbstractAxis_LabelsAngle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn SetLabelsColor(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetLabelsColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn LabelsColor(self: QAbstractAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_LabelsColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn IsTitleVisible(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_IsTitleVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn SetTitleVisible(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetTitleVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetTitleBrush(self: QAbstractAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_SetTitleBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn TitleBrush(self: QAbstractAxis) QBrush {
        return .{ .ptr = qtc.QAbstractAxis_TitleBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` font: QFont `
    ///
    pub fn SetTitleFont(self: QAbstractAxis, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAbstractAxis_SetTitleFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn TitleFont(self: QAbstractAxis) QFont {
        return .{ .ptr = qtc.QAbstractAxis_TitleFont(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitleText(self: QAbstractAxis, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QAbstractAxis_SetTitleText(@ptrCast(self.ptr), title_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TitleText(self: QAbstractAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractAxis_TitleText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractaxis.TitleText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn ShadesVisible(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_ShadesVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn SetShadesVisible(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetShadesVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetShadesPen(self: QAbstractAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetShadesPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn ShadesPen(self: QAbstractAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_ShadesPen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetShadesBrush(self: QAbstractAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_SetShadesBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn ShadesBrush(self: QAbstractAxis) QBrush {
        return .{ .ptr = qtc.QAbstractAxis_ShadesBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn SetShadesColor(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetShadesColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn ShadesColor(self: QAbstractAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_ShadesColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn SetShadesBorderColor(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetShadesBorderColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn ShadesBorderColor(self: QAbstractAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_ShadesBorderColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn Orientation(self: QAbstractAxis) i32 {
        return qtc.QAbstractAxis_Orientation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QAbstractAxis) i32 {
        return qtc.QAbstractAxis_Alignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` min: QVariant `
    ///
    pub fn SetMin(self: QAbstractAxis, min: anytype) void {
        comptime _ = @TypeOf(min)._is_QVariant;
        qtc.QAbstractAxis_SetMin(@ptrCast(self.ptr), @ptrCast(min.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` max: QVariant `
    ///
    pub fn SetMax(self: QAbstractAxis, max: anytype) void {
        comptime _ = @TypeOf(max)._is_QVariant;
        qtc.QAbstractAxis_SetMax(@ptrCast(self.ptr), @ptrCast(max.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` min: QVariant `
    ///
    /// ` max: QVariant `
    ///
    pub fn SetRange(self: QAbstractAxis, min: anytype, max: anytype) void {
        comptime _ = @TypeOf(min)._is_QVariant;
        comptime _ = @TypeOf(max)._is_QVariant;
        qtc.QAbstractAxis_SetRange(@ptrCast(self.ptr), @ptrCast(min.ptr), @ptrCast(max.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn SetReverse(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetReverse(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn IsReverse(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_IsReverse(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn SetLabelsEditable(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetLabelsEditable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn LabelsEditable(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_LabelsEditable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsTruncated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn LabelsTruncated(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_LabelsTruncated(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTruncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn SetTruncateLabels(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetTruncateLabels(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#truncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn TruncateLabels(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_TruncateLabels(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn VisibleChanged(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_VisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, visible: bool) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#linePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn LinePenChanged(self: QAbstractAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_LinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#linePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn OnLinePenChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#lineVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn LineVisibleChanged(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_LineVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#lineVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, visible: bool) callconv(.c) void `
    ///
    pub fn OnLineVisibleChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LineVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn LabelsVisibleChanged(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_LabelsVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, visible: bool) callconv(.c) void `
    ///
    pub fn OnLabelsVisibleChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn LabelsBrushChanged(self: QAbstractAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_LabelsBrushChanged(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, brush: QBrush) callconv(.c) void `
    ///
    pub fn OnLabelsBrushChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QBrush) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` pen: QFont `
    ///
    pub fn LabelsFontChanged(self: QAbstractAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QFont;
        qtc.QAbstractAxis_LabelsFontChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, pen: QFont) callconv(.c) void `
    ///
    pub fn OnLabelsFontChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QFont) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsAngleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` angle: i32 `
    ///
    pub fn LabelsAngleChanged(self: QAbstractAxis, angle: i32) void {
        qtc.QAbstractAxis_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsAngleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, angle: i32) callconv(.c) void `
    ///
    pub fn OnLabelsAngleChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, i32) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn GridLinePenChanged(self: QAbstractAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_GridLinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLinePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn OnGridLinePenChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn GridVisibleChanged(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_GridVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, visible: bool) callconv(.c) void `
    ///
    pub fn OnGridVisibleChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn MinorGridVisibleChanged(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_MinorGridVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, visible: bool) callconv(.c) void `
    ///
    pub fn OnMinorGridVisibleChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn MinorGridLinePenChanged(self: QAbstractAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_MinorGridLinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLinePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn OnMinorGridLinePenChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn GridLineColorChanged(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_GridLineColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, color: QColor) callconv(.c) void `
    ///
    pub fn OnGridLineColorChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLineColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn MinorGridLineColorChanged(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_MinorGridLineColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, color: QColor) callconv(.c) void `
    ///
    pub fn OnMinorGridLineColorChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLineColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn ColorChanged(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_ColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, color: QColor) callconv(.c) void `
    ///
    pub fn OnColorChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn LabelsColorChanged(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_LabelsColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, color: QColor) callconv(.c) void `
    ///
    pub fn OnLabelsColorChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` title: []const u8 `
    ///
    pub fn TitleTextChanged(self: QAbstractAxis, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QAbstractAxis_TitleTextChanged(@ptrCast(self.ptr), title_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTitleTextChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn TitleBrushChanged(self: QAbstractAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_TitleBrushChanged(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, brush: QBrush) callconv(.c) void `
    ///
    pub fn OnTitleBrushChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QBrush) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn TitleVisibleChanged(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_TitleVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, visible: bool) callconv(.c) void `
    ///
    pub fn OnTitleVisibleChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` font: QFont `
    ///
    pub fn TitleFontChanged(self: QAbstractAxis, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAbstractAxis_TitleFontChanged(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, font: QFont) callconv(.c) void `
    ///
    pub fn OnTitleFontChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QFont) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn ShadesVisibleChanged(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_ShadesVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, visible: bool) callconv(.c) void `
    ///
    pub fn OnShadesVisibleChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn ShadesColorChanged(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_ShadesColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, color: QColor) callconv(.c) void `
    ///
    pub fn OnShadesColorChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBorderColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn ShadesBorderColorChanged(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_ShadesBorderColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBorderColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, color: QColor) callconv(.c) void `
    ///
    pub fn OnShadesBorderColorChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBorderColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesPenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn ShadesPenChanged(self: QAbstractAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_ShadesPenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesPenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn OnShadesPenChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesPenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn ShadesBrushChanged(self: QAbstractAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_ShadesBrushChanged(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, brush: QBrush) callconv(.c) void `
    ///
    pub fn OnShadesBrushChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QBrush) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#reverseChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` reverse: bool `
    ///
    pub fn ReverseChanged(self: QAbstractAxis, reverse: bool) void {
        qtc.QAbstractAxis_ReverseChanged(@ptrCast(self.ptr), reverse);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#reverseChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, reverse: bool) callconv(.c) void `
    ///
    pub fn OnReverseChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ReverseChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsEditableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` editable: bool `
    ///
    pub fn LabelsEditableChanged(self: QAbstractAxis, editable: bool) void {
        qtc.QAbstractAxis_LabelsEditableChanged(@ptrCast(self.ptr), editable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsEditableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, editable: bool) callconv(.c) void `
    ///
    pub fn OnLabelsEditableChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsEditableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsTruncatedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` labelsTruncated: bool `
    ///
    pub fn LabelsTruncatedChanged(self: QAbstractAxis, labelsTruncated: bool) void {
        qtc.QAbstractAxis_LabelsTruncatedChanged(@ptrCast(self.ptr), labelsTruncated);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsTruncatedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, labelsTruncated: bool) callconv(.c) void `
    ///
    pub fn OnLabelsTruncatedChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsTruncatedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#truncateLabelsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` truncateLabels: bool `
    ///
    pub fn TruncateLabelsChanged(self: QAbstractAxis, truncateLabels: bool) void {
        qtc.QAbstractAxis_TruncateLabelsChanged(@ptrCast(self.ptr), truncateLabels);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#truncateLabelsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, truncateLabels: bool) callconv(.c) void `
    ///
    pub fn OnTruncateLabelsChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TruncateLabelsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractaxis.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractaxis.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible1(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_SetVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetLineVisible1(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_SetLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetGridLineVisible1(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_SetGridLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetMinorGridLineVisible1(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetLabelsVisible1(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_SetLabelsVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetTitleVisible1(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_SetTitleVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetShadesVisible1(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_SetShadesVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` reverse: bool `
    ///
    pub fn SetReverse1(self: QAbstractAxis, reverse: bool) void {
        qtc.QAbstractAxis_SetReverse1(@ptrCast(self.ptr), reverse);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` editable: bool `
    ///
    pub fn SetLabelsEditable1(self: QAbstractAxis, editable: bool) void {
        qtc.QAbstractAxis_SetLabelsEditable1(@ptrCast(self.ptr), editable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTruncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` truncateLabels: bool `
    ///
    pub fn SetTruncateLabels1(self: QAbstractAxis, truncateLabels: bool) void {
        qtc.QAbstractAxis_SetTruncateLabels1(@ptrCast(self.ptr), truncateLabels);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QAbstractAxis, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QAbstractAxis, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QAbstractAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractaxis.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QAbstractAxis, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn IsWidgetType(self: QAbstractAxis) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn IsWindowType(self: QAbstractAxis) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn IsQuickItemType(self: QAbstractAxis) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn SignalsBlocked(self: QAbstractAxis) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QAbstractAxis, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn Thread(self: QAbstractAxis) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QAbstractAxis, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QAbstractAxis, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QAbstractAxis, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QAbstractAxis, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QAbstractAxis, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QAbstractAxis, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qabstractaxis.Children: Memory allocation failed");
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
    /// ` self: QAbstractAxis `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QAbstractAxis, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QAbstractAxis, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QAbstractAxis, obj: anytype) void {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QAbstractAxis, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QAbstractAxis `
    ///
    pub fn Disconnect3(self: QAbstractAxis) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QAbstractAxis, receiver: anytype) bool {
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
    /// ` self: QAbstractAxis `
    ///
    pub fn DumpObjectTree(self: QAbstractAxis) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn DumpObjectInfo(self: QAbstractAxis) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QAbstractAxis, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QAbstractAxis, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QAbstractAxis, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qabstractaxis.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qabstractaxis.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QAbstractAxis `
    ///
    pub fn BindingStorage(self: QAbstractAxis) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn BindingStorage2(self: QAbstractAxis) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn Destroyed(self: QAbstractAxis) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QAbstractAxis, callback: *const fn (QAbstractAxis) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn Parent(self: QAbstractAxis) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QAbstractAxis, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn DeleteLater(self: QAbstractAxis) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QAbstractAxis, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QAbstractAxis, time: i64, timerType: i32) i32 {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QAbstractAxis, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QAbstractAxis, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QAbstractAxis, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QAbstractAxis, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QAbstractAxis, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QAbstractAxis, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#dtor.QAbstractAxis)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn Delete(self: QAbstractAxis) void {
        qtc.QAbstractAxis_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#public-types)
pub const enums = struct {
    pub const AxisType = enum(i32) {
        pub const AxisTypeNoAxis: i32 = 0;
        pub const AxisTypeValue: i32 = 1;
        pub const AxisTypeBarCategory: i32 = 2;
        pub const AxisTypeCategory: i32 = 4;
        pub const AxisTypeDateTime: i32 = 8;
        pub const AxisTypeLogValue: i32 = 16;
        pub const AxisTypeColor: i32 = 32;
    };
};
