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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn metaObject(self: QAbstractAxis) QMetaObject {
        return .{ .ptr = qtc.QAbstractAxis_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QAbstractAxis, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractAxis_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QAbstractAxis, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstractAxis_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractAxis.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QAbstractAxis) i32 {
        return qtc.QAbstractAxis_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn isVisible(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn setVisible(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn show(self: QAbstractAxis) void {
        qtc.QAbstractAxis_Show(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn hide(self: QAbstractAxis) void {
        qtc.QAbstractAxis_Hide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLineVisible` instead
    ///
    pub const IsLineVisible = isLineVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn isLineVisible(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_IsLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineVisible` instead
    ///
    pub const SetLineVisible = setLineVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn setLineVisible(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLinePen` instead
    ///
    pub const SetLinePen = setLinePen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn setLinePen(self: QAbstractAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `linePen` instead
    ///
    pub const LinePen = linePen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#linePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn linePen(self: QAbstractAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_LinePen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLinePenColor` instead
    ///
    pub const SetLinePenColor = setLinePenColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLinePenColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setLinePenColor(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetLinePenColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `linePenColor` instead
    ///
    pub const LinePenColor = linePenColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#linePenColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn linePenColor(self: QAbstractAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_LinePenColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isGridLineVisible` instead
    ///
    pub const IsGridLineVisible = isGridLineVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn isGridLineVisible(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_IsGridLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGridLineVisible` instead
    ///
    pub const SetGridLineVisible = setGridLineVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn setGridLineVisible(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetGridLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGridLinePen` instead
    ///
    pub const SetGridLinePen = setGridLinePen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn setGridLinePen(self: QAbstractAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetGridLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `gridLinePen` instead
    ///
    pub const GridLinePen = gridLinePen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn gridLinePen(self: QAbstractAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_GridLinePen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isMinorGridLineVisible` instead
    ///
    pub const IsMinorGridLineVisible = isMinorGridLineVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn isMinorGridLineVisible(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_IsMinorGridLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinorGridLineVisible` instead
    ///
    pub const SetMinorGridLineVisible = setMinorGridLineVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn setMinorGridLineVisible(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinorGridLinePen` instead
    ///
    pub const SetMinorGridLinePen = setMinorGridLinePen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMinorGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn setMinorGridLinePen(self: QAbstractAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetMinorGridLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `minorGridLinePen` instead
    ///
    pub const MinorGridLinePen = minorGridLinePen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn minorGridLinePen(self: QAbstractAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_MinorGridLinePen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGridLineColor` instead
    ///
    pub const SetGridLineColor = setGridLineColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setGridLineColor(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetGridLineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `gridLineColor` instead
    ///
    pub const GridLineColor = gridLineColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn gridLineColor(self: QAbstractAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_GridLineColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinorGridLineColor` instead
    ///
    pub const SetMinorGridLineColor = setMinorGridLineColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMinorGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setMinorGridLineColor(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetMinorGridLineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `minorGridLineColor` instead
    ///
    pub const MinorGridLineColor = minorGridLineColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn minorGridLineColor(self: QAbstractAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_MinorGridLineColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `labelsVisible` instead
    ///
    pub const LabelsVisible = labelsVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn labelsVisible(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_LabelsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelsVisible` instead
    ///
    pub const SetLabelsVisible = setLabelsVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn setLabelsVisible(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetLabelsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelsBrush` instead
    ///
    pub const SetLabelsBrush = setLabelsBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setLabelsBrush(self: QAbstractAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_SetLabelsBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `labelsBrush` instead
    ///
    pub const LabelsBrush = labelsBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn labelsBrush(self: QAbstractAxis) QBrush {
        return .{ .ptr = qtc.QAbstractAxis_LabelsBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLabelsFont` instead
    ///
    pub const SetLabelsFont = setLabelsFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` font: QFont `
    ///
    pub fn setLabelsFont(self: QAbstractAxis, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAbstractAxis_SetLabelsFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `labelsFont` instead
    ///
    pub const LabelsFont = labelsFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn labelsFont(self: QAbstractAxis) QFont {
        return .{ .ptr = qtc.QAbstractAxis_LabelsFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLabelsAngle` instead
    ///
    pub const SetLabelsAngle = setLabelsAngle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` angle: i32 `
    ///
    pub fn setLabelsAngle(self: QAbstractAxis, angle: i32) void {
        qtc.QAbstractAxis_SetLabelsAngle(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `labelsAngle` instead
    ///
    pub const LabelsAngle = labelsAngle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn labelsAngle(self: QAbstractAxis) i32 {
        return qtc.QAbstractAxis_LabelsAngle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelsColor` instead
    ///
    pub const SetLabelsColor = setLabelsColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setLabelsColor(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetLabelsColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `labelsColor` instead
    ///
    pub const LabelsColor = labelsColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn labelsColor(self: QAbstractAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_LabelsColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isTitleVisible` instead
    ///
    pub const IsTitleVisible = isTitleVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn isTitleVisible(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_IsTitleVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTitleVisible` instead
    ///
    pub const SetTitleVisible = setTitleVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn setTitleVisible(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetTitleVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTitleBrush` instead
    ///
    pub const SetTitleBrush = setTitleBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setTitleBrush(self: QAbstractAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_SetTitleBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `titleBrush` instead
    ///
    pub const TitleBrush = titleBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn titleBrush(self: QAbstractAxis) QBrush {
        return .{ .ptr = qtc.QAbstractAxis_TitleBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTitleFont` instead
    ///
    pub const SetTitleFont = setTitleFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` font: QFont `
    ///
    pub fn setTitleFont(self: QAbstractAxis, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAbstractAxis_SetTitleFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `titleFont` instead
    ///
    pub const TitleFont = titleFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn titleFont(self: QAbstractAxis) QFont {
        return .{ .ptr = qtc.QAbstractAxis_TitleFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTitleText` instead
    ///
    pub const SetTitleText = setTitleText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` title: []const u8 `
    ///
    pub fn setTitleText(self: QAbstractAxis, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QAbstractAxis_SetTitleText(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `titleText` instead
    ///
    pub const TitleText = titleText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn titleText(self: QAbstractAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractAxis_TitleText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractAxis.titleText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `shadesVisible` instead
    ///
    pub const ShadesVisible = shadesVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn shadesVisible(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_ShadesVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShadesVisible` instead
    ///
    pub const SetShadesVisible = setShadesVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn setShadesVisible(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetShadesVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShadesPen` instead
    ///
    pub const SetShadesPen = setShadesPen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn setShadesPen(self: QAbstractAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetShadesPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `shadesPen` instead
    ///
    pub const ShadesPen = shadesPen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn shadesPen(self: QAbstractAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_ShadesPen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setShadesBrush` instead
    ///
    pub const SetShadesBrush = setShadesBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setShadesBrush(self: QAbstractAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_SetShadesBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `shadesBrush` instead
    ///
    pub const ShadesBrush = shadesBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn shadesBrush(self: QAbstractAxis) QBrush {
        return .{ .ptr = qtc.QAbstractAxis_ShadesBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setShadesColor` instead
    ///
    pub const SetShadesColor = setShadesColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setShadesColor(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetShadesColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `shadesColor` instead
    ///
    pub const ShadesColor = shadesColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn shadesColor(self: QAbstractAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_ShadesColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setShadesBorderColor` instead
    ///
    pub const SetShadesBorderColor = setShadesBorderColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setShadesBorderColor(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetShadesBorderColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `shadesBorderColor` instead
    ///
    pub const ShadesBorderColor = shadesBorderColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn shadesBorderColor(self: QAbstractAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_ShadesBorderColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

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
    pub fn orientation(self: QAbstractAxis) i32 {
        return qtc.QAbstractAxis_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

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
    pub fn alignment(self: QAbstractAxis) i32 {
        return qtc.QAbstractAxis_Alignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMin` instead
    ///
    pub const SetMin = setMin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` min: QVariant `
    ///
    pub fn setMin(self: QAbstractAxis, min: anytype) void {
        comptime _ = @TypeOf(min)._is_QVariant;
        qtc.QAbstractAxis_SetMin(@ptrCast(self.ptr), @ptrCast(min.ptr));
    }

    /// ### DEPRECATED: Use `setMax` instead
    ///
    pub const SetMax = setMax;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` max: QVariant `
    ///
    pub fn setMax(self: QAbstractAxis, max: anytype) void {
        comptime _ = @TypeOf(max)._is_QVariant;
        qtc.QAbstractAxis_SetMax(@ptrCast(self.ptr), @ptrCast(max.ptr));
    }

    /// ### DEPRECATED: Use `setRange` instead
    ///
    pub const SetRange = setRange;

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
    pub fn setRange(self: QAbstractAxis, min: anytype, max: anytype) void {
        comptime _ = @TypeOf(min)._is_QVariant;
        comptime _ = @TypeOf(max)._is_QVariant;
        qtc.QAbstractAxis_SetRange(@ptrCast(self.ptr), @ptrCast(min.ptr), @ptrCast(max.ptr));
    }

    /// ### DEPRECATED: Use `setReverse` instead
    ///
    pub const SetReverse = setReverse;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn setReverse(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetReverse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReverse` instead
    ///
    pub const IsReverse = isReverse;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn isReverse(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_IsReverse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelsEditable` instead
    ///
    pub const SetLabelsEditable = setLabelsEditable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn setLabelsEditable(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetLabelsEditable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `labelsEditable` instead
    ///
    pub const LabelsEditable = labelsEditable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn labelsEditable(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_LabelsEditable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `labelsTruncated` instead
    ///
    pub const LabelsTruncated = labelsTruncated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsTruncated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn labelsTruncated(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_LabelsTruncated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTruncateLabels` instead
    ///
    pub const SetTruncateLabels = setTruncateLabels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTruncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn setTruncateLabels(self: QAbstractAxis) void {
        qtc.QAbstractAxis_SetTruncateLabels(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `truncateLabels` instead
    ///
    pub const TruncateLabels = truncateLabels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#truncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn truncateLabels(self: QAbstractAxis) bool {
        return qtc.QAbstractAxis_TruncateLabels(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn visibleChanged(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_VisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `linePenChanged` instead
    ///
    pub const LinePenChanged = linePenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#linePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn linePenChanged(self: QAbstractAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_LinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `onLinePenChanged` instead
    ///
    pub const OnLinePenChanged = onLinePenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#linePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn onLinePenChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lineVisibleChanged` instead
    ///
    pub const LineVisibleChanged = lineVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#lineVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn lineVisibleChanged(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_LineVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onLineVisibleChanged` instead
    ///
    pub const OnLineVisibleChanged = onLineVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#lineVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onLineVisibleChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LineVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsVisibleChanged` instead
    ///
    pub const LabelsVisibleChanged = labelsVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn labelsVisibleChanged(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_LabelsVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onLabelsVisibleChanged` instead
    ///
    pub const OnLabelsVisibleChanged = onLabelsVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onLabelsVisibleChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsBrushChanged` instead
    ///
    pub const LabelsBrushChanged = labelsBrushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn labelsBrushChanged(self: QAbstractAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_LabelsBrushChanged(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `onLabelsBrushChanged` instead
    ///
    pub const OnLabelsBrushChanged = onLabelsBrushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, brush: QBrush) callconv(.c) void `
    ///
    pub fn onLabelsBrushChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QBrush) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsFontChanged` instead
    ///
    pub const LabelsFontChanged = labelsFontChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` pen: QFont `
    ///
    pub fn labelsFontChanged(self: QAbstractAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QFont;
        qtc.QAbstractAxis_LabelsFontChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `onLabelsFontChanged` instead
    ///
    pub const OnLabelsFontChanged = onLabelsFontChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, pen: QFont) callconv(.c) void `
    ///
    pub fn onLabelsFontChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QFont) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsAngleChanged` instead
    ///
    pub const LabelsAngleChanged = labelsAngleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsAngleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` angle: i32 `
    ///
    pub fn labelsAngleChanged(self: QAbstractAxis, angle: i32) void {
        qtc.QAbstractAxis_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `onLabelsAngleChanged` instead
    ///
    pub const OnLabelsAngleChanged = onLabelsAngleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsAngleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, angle: i32) callconv(.c) void `
    ///
    pub fn onLabelsAngleChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, i32) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `gridLinePenChanged` instead
    ///
    pub const GridLinePenChanged = gridLinePenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn gridLinePenChanged(self: QAbstractAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_GridLinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `onGridLinePenChanged` instead
    ///
    pub const OnGridLinePenChanged = onGridLinePenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLinePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn onGridLinePenChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `gridVisibleChanged` instead
    ///
    pub const GridVisibleChanged = gridVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn gridVisibleChanged(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_GridVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onGridVisibleChanged` instead
    ///
    pub const OnGridVisibleChanged = onGridVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onGridVisibleChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minorGridVisibleChanged` instead
    ///
    pub const MinorGridVisibleChanged = minorGridVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn minorGridVisibleChanged(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_MinorGridVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onMinorGridVisibleChanged` instead
    ///
    pub const OnMinorGridVisibleChanged = onMinorGridVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onMinorGridVisibleChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minorGridLinePenChanged` instead
    ///
    pub const MinorGridLinePenChanged = minorGridLinePenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn minorGridLinePenChanged(self: QAbstractAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_MinorGridLinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `onMinorGridLinePenChanged` instead
    ///
    pub const OnMinorGridLinePenChanged = onMinorGridLinePenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLinePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn onMinorGridLinePenChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `gridLineColorChanged` instead
    ///
    pub const GridLineColorChanged = gridLineColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn gridLineColorChanged(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_GridLineColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onGridLineColorChanged` instead
    ///
    pub const OnGridLineColorChanged = onGridLineColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onGridLineColorChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLineColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minorGridLineColorChanged` instead
    ///
    pub const MinorGridLineColorChanged = minorGridLineColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn minorGridLineColorChanged(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_MinorGridLineColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onMinorGridLineColorChanged` instead
    ///
    pub const OnMinorGridLineColorChanged = onMinorGridLineColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onMinorGridLineColorChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLineColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorChanged` instead
    ///
    pub const ColorChanged = colorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn colorChanged(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_ColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onColorChanged` instead
    ///
    pub const OnColorChanged = onColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onColorChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsColorChanged` instead
    ///
    pub const LabelsColorChanged = labelsColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn labelsColorChanged(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_LabelsColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onLabelsColorChanged` instead
    ///
    pub const OnLabelsColorChanged = onLabelsColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onLabelsColorChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleTextChanged` instead
    ///
    pub const TitleTextChanged = titleTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` title: []const u8 `
    ///
    pub fn titleTextChanged(self: QAbstractAxis, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QAbstractAxis_TitleTextChanged(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `onTitleTextChanged` instead
    ///
    pub const OnTitleTextChanged = onTitleTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTitleTextChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleBrushChanged` instead
    ///
    pub const TitleBrushChanged = titleBrushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn titleBrushChanged(self: QAbstractAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_TitleBrushChanged(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `onTitleBrushChanged` instead
    ///
    pub const OnTitleBrushChanged = onTitleBrushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, brush: QBrush) callconv(.c) void `
    ///
    pub fn onTitleBrushChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QBrush) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleVisibleChanged` instead
    ///
    pub const TitleVisibleChanged = titleVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn titleVisibleChanged(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_TitleVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onTitleVisibleChanged` instead
    ///
    pub const OnTitleVisibleChanged = onTitleVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onTitleVisibleChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleFontChanged` instead
    ///
    pub const TitleFontChanged = titleFontChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` font: QFont `
    ///
    pub fn titleFontChanged(self: QAbstractAxis, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAbstractAxis_TitleFontChanged(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `onTitleFontChanged` instead
    ///
    pub const OnTitleFontChanged = onTitleFontChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, font: QFont) callconv(.c) void `
    ///
    pub fn onTitleFontChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QFont) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadesVisibleChanged` instead
    ///
    pub const ShadesVisibleChanged = shadesVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn shadesVisibleChanged(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_ShadesVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onShadesVisibleChanged` instead
    ///
    pub const OnShadesVisibleChanged = onShadesVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onShadesVisibleChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadesColorChanged` instead
    ///
    pub const ShadesColorChanged = shadesColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn shadesColorChanged(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_ShadesColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onShadesColorChanged` instead
    ///
    pub const OnShadesColorChanged = onShadesColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onShadesColorChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadesBorderColorChanged` instead
    ///
    pub const ShadesBorderColorChanged = shadesBorderColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBorderColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn shadesBorderColorChanged(self: QAbstractAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_ShadesBorderColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onShadesBorderColorChanged` instead
    ///
    pub const OnShadesBorderColorChanged = onShadesBorderColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBorderColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onShadesBorderColorChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBorderColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadesPenChanged` instead
    ///
    pub const ShadesPenChanged = shadesPenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesPenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn shadesPenChanged(self: QAbstractAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_ShadesPenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `onShadesPenChanged` instead
    ///
    pub const OnShadesPenChanged = onShadesPenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesPenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn onShadesPenChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesPenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadesBrushChanged` instead
    ///
    pub const ShadesBrushChanged = shadesBrushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn shadesBrushChanged(self: QAbstractAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_ShadesBrushChanged(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `onShadesBrushChanged` instead
    ///
    pub const OnShadesBrushChanged = onShadesBrushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, brush: QBrush) callconv(.c) void `
    ///
    pub fn onShadesBrushChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QBrush) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reverseChanged` instead
    ///
    pub const ReverseChanged = reverseChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#reverseChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` reverse: bool `
    ///
    pub fn reverseChanged(self: QAbstractAxis, reverse: bool) void {
        qtc.QAbstractAxis_ReverseChanged(@ptrCast(self.ptr), reverse);
    }

    /// ### DEPRECATED: Use `onReverseChanged` instead
    ///
    pub const OnReverseChanged = onReverseChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#reverseChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, reverse: bool) callconv(.c) void `
    ///
    pub fn onReverseChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ReverseChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsEditableChanged` instead
    ///
    pub const LabelsEditableChanged = labelsEditableChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsEditableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` editable: bool `
    ///
    pub fn labelsEditableChanged(self: QAbstractAxis, editable: bool) void {
        qtc.QAbstractAxis_LabelsEditableChanged(@ptrCast(self.ptr), editable);
    }

    /// ### DEPRECATED: Use `onLabelsEditableChanged` instead
    ///
    pub const OnLabelsEditableChanged = onLabelsEditableChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsEditableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, editable: bool) callconv(.c) void `
    ///
    pub fn onLabelsEditableChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsEditableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsTruncatedChanged` instead
    ///
    pub const LabelsTruncatedChanged = labelsTruncatedChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsTruncatedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` _labelsTruncated: bool `
    ///
    pub fn labelsTruncatedChanged(self: QAbstractAxis, _labelsTruncated: bool) void {
        qtc.QAbstractAxis_LabelsTruncatedChanged(@ptrCast(self.ptr), _labelsTruncated);
    }

    /// ### DEPRECATED: Use `onLabelsTruncatedChanged` instead
    ///
    pub const OnLabelsTruncatedChanged = onLabelsTruncatedChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsTruncatedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, labelsTruncated: bool) callconv(.c) void `
    ///
    pub fn onLabelsTruncatedChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsTruncatedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `truncateLabelsChanged` instead
    ///
    pub const TruncateLabelsChanged = truncateLabelsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#truncateLabelsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` _truncateLabels: bool `
    ///
    pub fn truncateLabelsChanged(self: QAbstractAxis, _truncateLabels: bool) void {
        qtc.QAbstractAxis_TruncateLabelsChanged(@ptrCast(self.ptr), _truncateLabels);
    }

    /// ### DEPRECATED: Use `onTruncateLabelsChanged` instead
    ///
    pub const OnTruncateLabelsChanged = onTruncateLabelsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#truncateLabelsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, truncateLabels: bool) callconv(.c) void `
    ///
    pub fn onTruncateLabelsChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TruncateLabelsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractAxis.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractAxis.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setVisible1` instead
    ///
    pub const SetVisible1 = setVisible1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible1(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_SetVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setLineVisible1` instead
    ///
    pub const SetLineVisible1 = setLineVisible1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setLineVisible1(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_SetLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setGridLineVisible1` instead
    ///
    pub const SetGridLineVisible1 = setGridLineVisible1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setGridLineVisible1(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_SetGridLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setMinorGridLineVisible1` instead
    ///
    pub const SetMinorGridLineVisible1 = setMinorGridLineVisible1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setMinorGridLineVisible1(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setLabelsVisible1` instead
    ///
    pub const SetLabelsVisible1 = setLabelsVisible1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setLabelsVisible1(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_SetLabelsVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setTitleVisible1` instead
    ///
    pub const SetTitleVisible1 = setTitleVisible1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setTitleVisible1(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_SetTitleVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setShadesVisible1` instead
    ///
    pub const SetShadesVisible1 = setShadesVisible1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setShadesVisible1(self: QAbstractAxis, visible: bool) void {
        qtc.QAbstractAxis_SetShadesVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setReverse1` instead
    ///
    pub const SetReverse1 = setReverse1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` reverse: bool `
    ///
    pub fn setReverse1(self: QAbstractAxis, reverse: bool) void {
        qtc.QAbstractAxis_SetReverse1(@ptrCast(self.ptr), reverse);
    }

    /// ### DEPRECATED: Use `setLabelsEditable1` instead
    ///
    pub const SetLabelsEditable1 = setLabelsEditable1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` editable: bool `
    ///
    pub fn setLabelsEditable1(self: QAbstractAxis, editable: bool) void {
        qtc.QAbstractAxis_SetLabelsEditable1(@ptrCast(self.ptr), editable);
    }

    /// ### DEPRECATED: Use `setTruncateLabels1` instead
    ///
    pub const SetTruncateLabels1 = setTruncateLabels1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTruncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` _truncateLabels: bool `
    ///
    pub fn setTruncateLabels1(self: QAbstractAxis, _truncateLabels: bool) void {
        qtc.QAbstractAxis_SetTruncateLabels1(@ptrCast(self.ptr), _truncateLabels);
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractAxis `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QAbstractAxis, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QAbstractAxis, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAbstractAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QAbstractAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractAxis.objectName: Memory allocation failed");
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
    /// ` self: QAbstractAxis `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QAbstractAxis, name: []const u8) void {
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
    /// ` self: QAbstractAxis `
    ///
    pub fn isWidgetType(self: QAbstractAxis) bool {
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
    /// ` self: QAbstractAxis `
    ///
    pub fn isWindowType(self: QAbstractAxis) bool {
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
    /// ` self: QAbstractAxis `
    ///
    pub fn isQuickItemType(self: QAbstractAxis) bool {
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
    /// ` self: QAbstractAxis `
    ///
    pub fn signalsBlocked(self: QAbstractAxis) bool {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QAbstractAxis, b: bool) bool {
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
    /// ` self: QAbstractAxis `
    ///
    pub fn thread(self: QAbstractAxis) QThread {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QAbstractAxis, _thread: anytype) bool {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QAbstractAxis, interval: i32) i32 {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QAbstractAxis, time: i64) i32 {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QAbstractAxis, id: i32) void {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QAbstractAxis, id: i32) void {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QAbstractAxis, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QAbstractAxis.children: Memory allocation failed");
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
    /// ` self: QAbstractAxis `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QAbstractAxis, _parent: anytype) void {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QAbstractAxis, filterObj: anytype) void {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QAbstractAxis, obj: anytype) void {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QAbstractAxis, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QAbstractAxis `
    ///
    pub fn disconnect3(self: QAbstractAxis) bool {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QAbstractAxis, receiver: anytype) bool {
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
    /// ` self: QAbstractAxis `
    ///
    pub fn dumpObjectTree(self: QAbstractAxis) void {
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
    /// ` self: QAbstractAxis `
    ///
    pub fn dumpObjectInfo(self: QAbstractAxis) void {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QAbstractAxis, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QAbstractAxis, name: [:0]const u8) QVariant {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QAbstractAxis, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QAbstractAxis.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAbstractAxis.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QAbstractAxis `
    ///
    pub fn bindingStorage(self: QAbstractAxis) QBindingStorage {
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
    /// ` self: QAbstractAxis `
    ///
    pub fn bindingStorage2(self: QAbstractAxis) QBindingStorage {
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
    /// ` self: QAbstractAxis `
    ///
    pub fn destroyed(self: QAbstractAxis) void {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QAbstractAxis, callback: *const fn (QAbstractAxis) callconv(.c) void) void {
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
    /// ` self: QAbstractAxis `
    ///
    pub fn parent(self: QAbstractAxis) QObject {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QAbstractAxis, classname: [:0]const u8) bool {
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
    /// ` self: QAbstractAxis `
    ///
    pub fn deleteLater(self: QAbstractAxis) void {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QAbstractAxis, interval: i32, timerType: i32) i32 {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QAbstractAxis, time: i64, timerType: i32) i32 {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QAbstractAxis, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QAbstractAxis, signal: [:0]const u8) bool {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QAbstractAxis, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QAbstractAxis, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QAbstractAxis, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QAbstractAxis, param1: anytype) void {
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
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QAbstractAxis, callback: *const fn (QAbstractAxis, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractAxis `
    ///
    /// ` callback: *const fn (self: QAbstractAxis, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QAbstractAxis, callback: *const fn (QAbstractAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#dtor.QAbstractAxis)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractAxis `
    ///
    pub fn delete(self: QAbstractAxis) void {
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
