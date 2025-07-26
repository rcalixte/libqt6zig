const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractaxis_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html
pub const qabstractaxis = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QAbstractAxis_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QAbstractAxis, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractAxis_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QAbstractAxis, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QAbstractAxis_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QAbstractAxis_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractaxis.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#type)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QAbstractAxis_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isVisible)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_IsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setVisible)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn SetVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#show)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QAbstractAxis_Show(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#hide)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QAbstractAxis_Hide(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isLineVisible)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn IsLineVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_IsLineVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLineVisible)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn SetLineVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLineVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLinePen)
    ///
    /// ``` self: QtC.QAbstractAxis, pen: QtC.QPen ```
    pub fn SetLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLinePen(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#linePen)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn LinePen(self: ?*anyopaque) QtC.QPen {
        return qtc.QAbstractAxis_LinePen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLinePenColor)
    ///
    /// ``` self: QtC.QAbstractAxis, color: QtC.QColor ```
    pub fn SetLinePenColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_SetLinePenColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#linePenColor)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn LinePenColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAbstractAxis_LinePenColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isGridLineVisible)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn IsGridLineVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_IsGridLineVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setGridLineVisible)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn SetGridLineVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetGridLineVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setGridLinePen)
    ///
    /// ``` self: QtC.QAbstractAxis, pen: QtC.QPen ```
    pub fn SetGridLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_SetGridLinePen(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLinePen)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn GridLinePen(self: ?*anyopaque) QtC.QPen {
        return qtc.QAbstractAxis_GridLinePen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isMinorGridLineVisible)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn IsMinorGridLineVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_IsMinorGridLineVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMinorGridLineVisible)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn SetMinorGridLineVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMinorGridLinePen)
    ///
    /// ``` self: QtC.QAbstractAxis, pen: QtC.QPen ```
    pub fn SetMinorGridLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_SetMinorGridLinePen(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLinePen)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn MinorGridLinePen(self: ?*anyopaque) QtC.QPen {
        return qtc.QAbstractAxis_MinorGridLinePen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setGridLineColor)
    ///
    /// ``` self: QtC.QAbstractAxis, color: QtC.QColor ```
    pub fn SetGridLineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAbstractAxis_SetGridLineColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLineColor)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn GridLineColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAbstractAxis_GridLineColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMinorGridLineColor)
    ///
    /// ``` self: QtC.QAbstractAxis, color: QtC.QColor ```
    pub fn SetMinorGridLineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAbstractAxis_SetMinorGridLineColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLineColor)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn MinorGridLineColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAbstractAxis_MinorGridLineColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsVisible)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn LabelsVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_LabelsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsVisible)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn SetLabelsVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLabelsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsBrush)
    ///
    /// ``` self: QtC.QAbstractAxis, brush: QtC.QBrush ```
    pub fn SetLabelsBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLabelsBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsBrush)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn LabelsBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QAbstractAxis_LabelsBrush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsFont)
    ///
    /// ``` self: QtC.QAbstractAxis, font: QtC.QFont ```
    pub fn SetLabelsFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLabelsFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsFont)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn LabelsFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QAbstractAxis_LabelsFont(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsAngle)
    ///
    /// ``` self: QtC.QAbstractAxis, angle: i32 ```
    pub fn SetLabelsAngle(self: ?*anyopaque, angle: i32) void {
        qtc.QAbstractAxis_SetLabelsAngle(@ptrCast(self), @intCast(angle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsAngle)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn LabelsAngle(self: ?*anyopaque) i32 {
        return qtc.QAbstractAxis_LabelsAngle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsColor)
    ///
    /// ``` self: QtC.QAbstractAxis, color: QtC.QColor ```
    pub fn SetLabelsColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_SetLabelsColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsColor)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn LabelsColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAbstractAxis_LabelsColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isTitleVisible)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn IsTitleVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_IsTitleVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleVisible)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn SetTitleVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetTitleVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleBrush)
    ///
    /// ``` self: QtC.QAbstractAxis, brush: QtC.QBrush ```
    pub fn SetTitleBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_SetTitleBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleBrush)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn TitleBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QAbstractAxis_TitleBrush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleFont)
    ///
    /// ``` self: QtC.QAbstractAxis, font: QtC.QFont ```
    pub fn SetTitleFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAbstractAxis_SetTitleFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleFont)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn TitleFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QAbstractAxis_TitleFont(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleText)
    ///
    /// ``` self: QtC.QAbstractAxis, title: []const u8 ```
    pub fn SetTitleText(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.struct_libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QAbstractAxis_SetTitleText(@ptrCast(self), title_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleText)
    ///
    /// ``` self: QtC.QAbstractAxis, allocator: std.mem.Allocator ```
    pub fn TitleText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractAxis_TitleText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractaxis.TitleText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesVisible)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn ShadesVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_ShadesVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesVisible)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn SetShadesVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetShadesVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesPen)
    ///
    /// ``` self: QtC.QAbstractAxis, pen: QtC.QPen ```
    pub fn SetShadesPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_SetShadesPen(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesPen)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn ShadesPen(self: ?*anyopaque) QtC.QPen {
        return qtc.QAbstractAxis_ShadesPen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesBrush)
    ///
    /// ``` self: QtC.QAbstractAxis, brush: QtC.QBrush ```
    pub fn SetShadesBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_SetShadesBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBrush)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn ShadesBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QAbstractAxis_ShadesBrush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesColor)
    ///
    /// ``` self: QtC.QAbstractAxis, color: QtC.QColor ```
    pub fn SetShadesColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_SetShadesColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesColor)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn ShadesColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAbstractAxis_ShadesColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesBorderColor)
    ///
    /// ``` self: QtC.QAbstractAxis, color: QtC.QColor ```
    pub fn SetShadesBorderColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_SetShadesBorderColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBorderColor)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn ShadesBorderColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAbstractAxis_ShadesBorderColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#orientation)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn Orientation(self: ?*anyopaque) i64 {
        return qtc.QAbstractAxis_Orientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#alignment)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return qtc.QAbstractAxis_Alignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMin)
    ///
    /// ``` self: QtC.QAbstractAxis, min: QtC.QVariant ```
    pub fn SetMin(self: ?*anyopaque, min: ?*anyopaque) void {
        qtc.QAbstractAxis_SetMin(@ptrCast(self), @ptrCast(min));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMax)
    ///
    /// ``` self: QtC.QAbstractAxis, max: QtC.QVariant ```
    pub fn SetMax(self: ?*anyopaque, max: ?*anyopaque) void {
        qtc.QAbstractAxis_SetMax(@ptrCast(self), @ptrCast(max));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setRange)
    ///
    /// ``` self: QtC.QAbstractAxis, min: QtC.QVariant, max: QtC.QVariant ```
    pub fn SetRange(self: ?*anyopaque, min: ?*anyopaque, max: ?*anyopaque) void {
        qtc.QAbstractAxis_SetRange(@ptrCast(self), @ptrCast(min), @ptrCast(max));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setReverse)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn SetReverse(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetReverse(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isReverse)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn IsReverse(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_IsReverse(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsEditable)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn SetLabelsEditable(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLabelsEditable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsEditable)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn LabelsEditable(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_LabelsEditable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsTruncated)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn LabelsTruncated(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_LabelsTruncated(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTruncateLabels)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn SetTruncateLabels(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetTruncateLabels(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#truncateLabels)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn TruncateLabels(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_TruncateLabels(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#visibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, visible: bool ```
    pub fn VisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_VisibleChanged(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#visibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, visible: bool) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#linePenChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, pen: QtC.QPen ```
    pub fn LinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_LinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#linePenChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, pen: QtC.QPen) callconv(.c) void ```
    pub fn OnLinePenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LinePenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#lineVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, visible: bool ```
    pub fn LineVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_LineVisibleChanged(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#lineVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, visible: bool) callconv(.c) void ```
    pub fn OnLineVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LineVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, visible: bool ```
    pub fn LabelsVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_LabelsVisibleChanged(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, visible: bool) callconv(.c) void ```
    pub fn OnLabelsVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsBrushChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, brush: QtC.QBrush ```
    pub fn LabelsBrushChanged(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_LabelsBrushChanged(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsBrushChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, brush: QtC.QBrush) callconv(.c) void ```
    pub fn OnLabelsBrushChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsBrushChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsFontChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, pen: QtC.QFont ```
    pub fn LabelsFontChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_LabelsFontChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsFontChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, pen: QtC.QFont) callconv(.c) void ```
    pub fn OnLabelsFontChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsFontChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsAngleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, angle: i32 ```
    pub fn LabelsAngleChanged(self: ?*anyopaque, angle: i32) void {
        qtc.QAbstractAxis_LabelsAngleChanged(@ptrCast(self), @intCast(angle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsAngleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, angle: i32) callconv(.c) void ```
    pub fn OnLabelsAngleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsAngleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLinePenChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, pen: QtC.QPen ```
    pub fn GridLinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_GridLinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLinePenChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, pen: QtC.QPen) callconv(.c) void ```
    pub fn OnGridLinePenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLinePenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, visible: bool ```
    pub fn GridVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_GridVisibleChanged(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, visible: bool) callconv(.c) void ```
    pub fn OnGridVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, visible: bool ```
    pub fn MinorGridVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_MinorGridVisibleChanged(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, visible: bool) callconv(.c) void ```
    pub fn OnMinorGridVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLinePenChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, pen: QtC.QPen ```
    pub fn MinorGridLinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_MinorGridLinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLinePenChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, pen: QtC.QPen) callconv(.c) void ```
    pub fn OnMinorGridLinePenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLinePenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLineColorChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, color: QtC.QColor ```
    pub fn GridLineColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAbstractAxis_GridLineColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLineColorChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, color: QtC.QColor) callconv(.c) void ```
    pub fn OnGridLineColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLineColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLineColorChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, color: QtC.QColor ```
    pub fn MinorGridLineColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAbstractAxis_MinorGridLineColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLineColorChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, color: QtC.QColor) callconv(.c) void ```
    pub fn OnMinorGridLineColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLineColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#colorChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, color: QtC.QColor ```
    pub fn ColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#colorChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, color: QtC.QColor) callconv(.c) void ```
    pub fn OnColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsColorChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, color: QtC.QColor ```
    pub fn LabelsColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_LabelsColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsColorChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, color: QtC.QColor) callconv(.c) void ```
    pub fn OnLabelsColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleTextChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, title: []const u8 ```
    pub fn TitleTextChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.struct_libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QAbstractAxis_TitleTextChanged(@ptrCast(self), title_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleTextChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, title: []const u8) callconv(.c) void ```
    pub fn OnTitleTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleTextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleBrushChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, brush: QtC.QBrush ```
    pub fn TitleBrushChanged(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_TitleBrushChanged(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleBrushChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, brush: QtC.QBrush) callconv(.c) void ```
    pub fn OnTitleBrushChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleBrushChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, visible: bool ```
    pub fn TitleVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_TitleVisibleChanged(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, visible: bool) callconv(.c) void ```
    pub fn OnTitleVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleFontChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, font: QtC.QFont ```
    pub fn TitleFontChanged(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAbstractAxis_TitleFontChanged(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleFontChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, font: QtC.QFont) callconv(.c) void ```
    pub fn OnTitleFontChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleFontChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, visible: bool ```
    pub fn ShadesVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_ShadesVisibleChanged(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, visible: bool) callconv(.c) void ```
    pub fn OnShadesVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesColorChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, color: QtC.QColor ```
    pub fn ShadesColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_ShadesColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesColorChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, color: QtC.QColor) callconv(.c) void ```
    pub fn OnShadesColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBorderColorChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, color: QtC.QColor ```
    pub fn ShadesBorderColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_ShadesBorderColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBorderColorChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, color: QtC.QColor) callconv(.c) void ```
    pub fn OnShadesBorderColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBorderColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesPenChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, pen: QtC.QPen ```
    pub fn ShadesPenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_ShadesPenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesPenChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, pen: QtC.QPen) callconv(.c) void ```
    pub fn OnShadesPenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesPenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBrushChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, brush: QtC.QBrush ```
    pub fn ShadesBrushChanged(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_ShadesBrushChanged(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBrushChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, brush: QtC.QBrush) callconv(.c) void ```
    pub fn OnShadesBrushChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBrushChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#reverseChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, reverse: bool ```
    pub fn ReverseChanged(self: ?*anyopaque, reverse: bool) void {
        qtc.QAbstractAxis_ReverseChanged(@ptrCast(self), reverse);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#reverseChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, reverse: bool) callconv(.c) void ```
    pub fn OnReverseChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ReverseChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsEditableChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, editable: bool ```
    pub fn LabelsEditableChanged(self: ?*anyopaque, editable: bool) void {
        qtc.QAbstractAxis_LabelsEditableChanged(@ptrCast(self), editable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsEditableChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, editable: bool) callconv(.c) void ```
    pub fn OnLabelsEditableChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsEditableChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsTruncatedChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, labelsTruncated: bool ```
    pub fn LabelsTruncatedChanged(self: ?*anyopaque, labelsTruncated: bool) void {
        qtc.QAbstractAxis_LabelsTruncatedChanged(@ptrCast(self), labelsTruncated);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsTruncatedChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, labelsTruncated: bool) callconv(.c) void ```
    pub fn OnLabelsTruncatedChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsTruncatedChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#truncateLabelsChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, truncateLabels: bool ```
    pub fn TruncateLabelsChanged(self: ?*anyopaque, truncateLabels: bool) void {
        qtc.QAbstractAxis_TruncateLabelsChanged(@ptrCast(self), truncateLabels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#truncateLabelsChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, truncateLabels: bool) callconv(.c) void ```
    pub fn OnTruncateLabelsChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TruncateLabelsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QAbstractAxis_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractaxis.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QAbstractAxis_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractaxis.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setVisible)
    ///
    /// ``` self: QtC.QAbstractAxis, visible: bool ```
    pub fn SetVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetVisible1(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLineVisible)
    ///
    /// ``` self: QtC.QAbstractAxis, visible: bool ```
    pub fn SetLineVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetLineVisible1(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setGridLineVisible)
    ///
    /// ``` self: QtC.QAbstractAxis, visible: bool ```
    pub fn SetGridLineVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetGridLineVisible1(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMinorGridLineVisible)
    ///
    /// ``` self: QtC.QAbstractAxis, visible: bool ```
    pub fn SetMinorGridLineVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible1(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsVisible)
    ///
    /// ``` self: QtC.QAbstractAxis, visible: bool ```
    pub fn SetLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetLabelsVisible1(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleVisible)
    ///
    /// ``` self: QtC.QAbstractAxis, visible: bool ```
    pub fn SetTitleVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetTitleVisible1(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesVisible)
    ///
    /// ``` self: QtC.QAbstractAxis, visible: bool ```
    pub fn SetShadesVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetShadesVisible1(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setReverse)
    ///
    /// ``` self: QtC.QAbstractAxis, reverse: bool ```
    pub fn SetReverse1(self: ?*anyopaque, reverse: bool) void {
        qtc.QAbstractAxis_SetReverse1(@ptrCast(self), reverse);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsEditable)
    ///
    /// ``` self: QtC.QAbstractAxis, editable: bool ```
    pub fn SetLabelsEditable1(self: ?*anyopaque, editable: bool) void {
        qtc.QAbstractAxis_SetLabelsEditable1(@ptrCast(self), editable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTruncateLabels)
    ///
    /// ``` self: QtC.QAbstractAxis, truncateLabels: bool ```
    pub fn SetTruncateLabels1(self: ?*anyopaque, truncateLabels: bool) void {
        qtc.QAbstractAxis_SetTruncateLabels1(@ptrCast(self), truncateLabels);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.QAbstractAxis, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.QAbstractAxis, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QAbstractAxis, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractaxis.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QAbstractAxis, name: []const u8 ```
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
    /// ``` self: QtC.QAbstractAxis ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QAbstractAxis, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QAbstractAxis, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QAbstractAxis, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QAbstractAxis, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QAbstractAxis, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QAbstractAxis, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qabstractaxis.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QAbstractAxis, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QAbstractAxis, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QAbstractAxis, obj: QtC.QObject ```
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
    /// ``` self: QtC.QAbstractAxis, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QAbstractAxis ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QAbstractAxis, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QAbstractAxis, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QAbstractAxis, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QAbstractAxis, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QAbstractAxis, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QAbstractAxis, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QAbstractAxis, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractAxis, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#dtor.QAbstractAxis)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAbstractAxis ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractAxis_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#types
pub const enums = struct {
    pub const AxisType = enum {
        pub const AxisTypeNoAxis: i32 = 0;
        pub const AxisTypeValue: i32 = 1;
        pub const AxisTypeBarCategory: i32 = 2;
        pub const AxisTypeCategory: i32 = 4;
        pub const AxisTypeDateTime: i32 = 8;
        pub const AxisTypeLogValue: i32 = 16;
        pub const AxisTypeColor: i32 = 32;
    };
};
