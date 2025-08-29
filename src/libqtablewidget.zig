const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractitemdelegate_enums = @import("libqabstractitemdelegate.zig").enums;
const qabstractitemview_enums = @import("libqabstractitemview.zig").enums;
const qabstractscrollarea_enums = @import("libqabstractscrollarea.zig").enums;
const qframe_enums = @import("libqframe.zig").enums;
const qitemselectionmodel_enums = @import("libqitemselectionmodel.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qwidget_enums = @import("libqwidget.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qtablewidgetselectionrange.html
pub const qtablewidgetselectionrange = struct {
    /// New constructs a new QTableWidgetSelectionRange object.
    ///
    /// ``` other: QtC.QTableWidgetSelectionRange ```
    pub fn New(other: ?*anyopaque) QtC.QTableWidgetSelectionRange {
        return qtc.QTableWidgetSelectionRange_new(@ptrCast(other));
    }

    /// New2 constructs a new QTableWidgetSelectionRange object and invalidates the source QTableWidgetSelectionRange object.
    ///
    /// ``` other: QtC.QTableWidgetSelectionRange ```
    pub fn New2(other: ?*anyopaque) QtC.QTableWidgetSelectionRange {
        return qtc.QTableWidgetSelectionRange_new2(@ptrCast(other));
    }

    /// New3 constructs a new QTableWidgetSelectionRange object.
    ///
    ///
    pub fn New3() QtC.QTableWidgetSelectionRange {
        return qtc.QTableWidgetSelectionRange_new3();
    }

    /// New4 constructs a new QTableWidgetSelectionRange object.
    ///
    /// ``` top: i32, left: i32, bottom: i32, right: i32 ```
    pub fn New4(top: i32, left: i32, bottom: i32, right: i32) QtC.QTableWidgetSelectionRange {
        return qtc.QTableWidgetSelectionRange_new4(@intCast(top), @intCast(left), @intCast(bottom), @intCast(right));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QTableWidgetSelectionRange, other: QtC.QTableWidgetSelectionRange ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTableWidgetSelectionRange_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QTableWidgetSelectionRange, other: QtC.QTableWidgetSelectionRange ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTableWidgetSelectionRange_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#topRow)
    ///
    /// ``` self: QtC.QTableWidgetSelectionRange ```
    pub fn TopRow(self: ?*anyopaque) i32 {
        return qtc.QTableWidgetSelectionRange_TopRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#bottomRow)
    ///
    /// ``` self: QtC.QTableWidgetSelectionRange ```
    pub fn BottomRow(self: ?*anyopaque) i32 {
        return qtc.QTableWidgetSelectionRange_BottomRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#leftColumn)
    ///
    /// ``` self: QtC.QTableWidgetSelectionRange ```
    pub fn LeftColumn(self: ?*anyopaque) i32 {
        return qtc.QTableWidgetSelectionRange_LeftColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#rightColumn)
    ///
    /// ``` self: QtC.QTableWidgetSelectionRange ```
    pub fn RightColumn(self: ?*anyopaque) i32 {
        return qtc.QTableWidgetSelectionRange_RightColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#rowCount)
    ///
    /// ``` self: QtC.QTableWidgetSelectionRange ```
    pub fn RowCount(self: ?*anyopaque) i32 {
        return qtc.QTableWidgetSelectionRange_RowCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#columnCount)
    ///
    /// ``` self: QtC.QTableWidgetSelectionRange ```
    pub fn ColumnCount(self: ?*anyopaque) i32 {
        return qtc.QTableWidgetSelectionRange_ColumnCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#dtor.QTableWidgetSelectionRange)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTableWidgetSelectionRange ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTableWidgetSelectionRange_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtablewidgetitem.html
pub const qtablewidgetitem = struct {
    /// New constructs a new QTableWidgetItem object.
    ///
    ///
    pub fn New() QtC.QTableWidgetItem {
        return qtc.QTableWidgetItem_new();
    }

    /// New2 constructs a new QTableWidgetItem object.
    ///
    /// ``` text: []const u8 ```
    pub fn New2(text: []const u8) QtC.QTableWidgetItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QTableWidgetItem_new2(text_str);
    }

    /// New3 constructs a new QTableWidgetItem object.
    ///
    /// ``` icon: QtC.QIcon, text: []const u8 ```
    pub fn New3(icon: ?*anyopaque, text: []const u8) QtC.QTableWidgetItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QTableWidgetItem_new3(@ptrCast(icon), text_str);
    }

    /// New4 constructs a new QTableWidgetItem object.
    ///
    /// ``` other: QtC.QTableWidgetItem ```
    pub fn New4(other: ?*anyopaque) QtC.QTableWidgetItem {
        return qtc.QTableWidgetItem_new4(@ptrCast(other));
    }

    /// New5 constructs a new QTableWidgetItem object.
    ///
    /// ``` typeVal: i32 ```
    pub fn New5(typeVal: i32) QtC.QTableWidgetItem {
        return qtc.QTableWidgetItem_new5(@intCast(typeVal));
    }

    /// New6 constructs a new QTableWidgetItem object.
    ///
    /// ``` text: []const u8, typeVal: i32 ```
    pub fn New6(text: []const u8, typeVal: i32) QtC.QTableWidgetItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QTableWidgetItem_new6(text_str, @intCast(typeVal));
    }

    /// New7 constructs a new QTableWidgetItem object.
    ///
    /// ``` icon: QtC.QIcon, text: []const u8, typeVal: i32 ```
    pub fn New7(icon: ?*anyopaque, text: []const u8, typeVal: i32) QtC.QTableWidgetItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QTableWidgetItem_new7(@ptrCast(icon), text_str, @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#clone)
    ///
    /// ``` self: QtC.QTableWidgetItem ```
    pub fn Clone(self: ?*anyopaque) QtC.QTableWidgetItem {
        return qtc.QTableWidgetItem_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTableWidgetItem, slot: fn () callconv(.c) QtC.QTableWidgetItem ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QTableWidgetItem) void {
        qtc.QTableWidgetItem_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTableWidgetItem ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QTableWidgetItem {
        return qtc.QTableWidgetItem_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#tableWidget)
    ///
    /// ``` self: QtC.QTableWidgetItem ```
    pub fn TableWidget(self: ?*anyopaque) QtC.QTableWidget {
        return qtc.QTableWidgetItem_TableWidget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#row)
    ///
    /// ``` self: QtC.QTableWidgetItem ```
    pub fn Row(self: ?*anyopaque) i32 {
        return qtc.QTableWidgetItem_Row(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#column)
    ///
    /// ``` self: QtC.QTableWidgetItem ```
    pub fn Column(self: ?*anyopaque) i32 {
        return qtc.QTableWidgetItem_Column(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setSelected)
    ///
    /// ``` self: QtC.QTableWidgetItem, selectVal: bool ```
    pub fn SetSelected(self: ?*anyopaque, selectVal: bool) void {
        qtc.QTableWidgetItem_SetSelected(@ptrCast(self), selectVal);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#isSelected)
    ///
    /// ``` self: QtC.QTableWidgetItem ```
    pub fn IsSelected(self: ?*anyopaque) bool {
        return qtc.QTableWidgetItem_IsSelected(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#flags)
    ///
    /// ``` self: QtC.QTableWidgetItem ```
    ///
    /// Returns: ``` flag of qnamespace_enums.ItemFlag ```
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.QTableWidgetItem_Flags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setFlags)
    ///
    /// ``` self: QtC.QTableWidgetItem, flags: flag of qnamespace_enums.ItemFlag ```
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QTableWidgetItem_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#text)
    ///
    /// ``` self: QtC.QTableWidgetItem, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTableWidgetItem_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidgetitem.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setText)
    ///
    /// ``` self: QtC.QTableWidgetItem, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTableWidgetItem_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#icon)
    ///
    /// ``` self: QtC.QTableWidgetItem ```
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QTableWidgetItem_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setIcon)
    ///
    /// ``` self: QtC.QTableWidgetItem, icon: QtC.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QTableWidgetItem_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#statusTip)
    ///
    /// ``` self: QtC.QTableWidgetItem, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTableWidgetItem_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidgetitem.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setStatusTip)
    ///
    /// ``` self: QtC.QTableWidgetItem, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QTableWidgetItem_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#toolTip)
    ///
    /// ``` self: QtC.QTableWidgetItem, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTableWidgetItem_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidgetitem.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setToolTip)
    ///
    /// ``` self: QtC.QTableWidgetItem, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QTableWidgetItem_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#whatsThis)
    ///
    /// ``` self: QtC.QTableWidgetItem, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTableWidgetItem_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidgetitem.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setWhatsThis)
    ///
    /// ``` self: QtC.QTableWidgetItem, whatsThis: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QTableWidgetItem_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#font)
    ///
    /// ``` self: QtC.QTableWidgetItem ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QTableWidgetItem_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setFont)
    ///
    /// ``` self: QtC.QTableWidgetItem, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QTableWidgetItem_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#textAlignment)
    ///
    /// ``` self: QtC.QTableWidgetItem ```
    pub fn TextAlignment(self: ?*anyopaque) i32 {
        return qtc.QTableWidgetItem_TextAlignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
    ///
    /// ``` self: QtC.QTableWidgetItem, alignment: i32 ```
    pub fn SetTextAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QTableWidgetItem_SetTextAlignment(@ptrCast(self), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
    ///
    /// ``` self: QtC.QTableWidgetItem, alignment: qnamespace_enums.AlignmentFlag ```
    pub fn SetTextAlignment2(self: ?*anyopaque, alignment: i32) void {
        qtc.QTableWidgetItem_SetTextAlignment2(@ptrCast(self), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
    ///
    /// ``` self: QtC.QTableWidgetItem, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetTextAlignment3(self: ?*anyopaque, alignment: i32) void {
        qtc.QTableWidgetItem_SetTextAlignment3(@ptrCast(self), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#background)
    ///
    /// ``` self: QtC.QTableWidgetItem ```
    pub fn Background(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTableWidgetItem_Background(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setBackground)
    ///
    /// ``` self: QtC.QTableWidgetItem, brush: QtC.QBrush ```
    pub fn SetBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTableWidgetItem_SetBackground(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#foreground)
    ///
    /// ``` self: QtC.QTableWidgetItem ```
    pub fn Foreground(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTableWidgetItem_Foreground(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setForeground)
    ///
    /// ``` self: QtC.QTableWidgetItem, brush: QtC.QBrush ```
    pub fn SetForeground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTableWidgetItem_SetForeground(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#checkState)
    ///
    /// ``` self: QtC.QTableWidgetItem ```
    ///
    /// Returns: ``` qnamespace_enums.CheckState ```
    pub fn CheckState(self: ?*anyopaque) i32 {
        return qtc.QTableWidgetItem_CheckState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setCheckState)
    ///
    /// ``` self: QtC.QTableWidgetItem, state: qnamespace_enums.CheckState ```
    pub fn SetCheckState(self: ?*anyopaque, state: i32) void {
        qtc.QTableWidgetItem_SetCheckState(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#sizeHint)
    ///
    /// ``` self: QtC.QTableWidgetItem ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QTableWidgetItem_SizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setSizeHint)
    ///
    /// ``` self: QtC.QTableWidgetItem, size: QtC.QSize ```
    pub fn SetSizeHint(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QTableWidgetItem_SetSizeHint(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#data)
    ///
    /// ``` self: QtC.QTableWidgetItem, role: i32 ```
    pub fn Data(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QTableWidgetItem_Data(@ptrCast(self), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTableWidgetItem, slot: fn (self: QtC.QTableWidgetItem, role: i32) callconv(.c) QtC.QVariant ```
    pub fn OnData(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QTableWidgetItem_OnData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#data)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTableWidgetItem, role: i32 ```
    pub fn QBaseData(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QTableWidgetItem_QBaseData(@ptrCast(self), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setData)
    ///
    /// ``` self: QtC.QTableWidgetItem, role: i32, value: QtC.QVariant ```
    pub fn SetData(self: ?*anyopaque, role: i32, value: ?*anyopaque) void {
        qtc.QTableWidgetItem_SetData(@ptrCast(self), @intCast(role), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTableWidgetItem, slot: fn (self: QtC.QTableWidgetItem, role: i32, value: QtC.QVariant) callconv(.c) void ```
    pub fn OnSetData(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidgetItem_OnSetData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTableWidgetItem, role: i32, value: QtC.QVariant ```
    pub fn QBaseSetData(self: ?*anyopaque, role: i32, value: ?*anyopaque) void {
        qtc.QTableWidgetItem_QBaseSetData(@ptrCast(self), @intCast(role), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator-lt)
    ///
    /// ``` self: QtC.QTableWidgetItem, other: QtC.QTableWidgetItem ```
    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTableWidgetItem_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator-lt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTableWidgetItem, slot: fn (self: QtC.QTableWidgetItem, other: QtC.QTableWidgetItem) callconv(.c) bool ```
    pub fn OnOperatorLesser(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTableWidgetItem_OnOperatorLesser(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator-lt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTableWidgetItem, other: QtC.QTableWidgetItem ```
    pub fn QBaseOperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTableWidgetItem_QBaseOperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#read)
    ///
    /// ``` self: QtC.QTableWidgetItem, in: QtC.QDataStream ```
    pub fn Read(self: ?*anyopaque, in: ?*anyopaque) void {
        qtc.QTableWidgetItem_Read(@ptrCast(self), @ptrCast(in));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#read)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTableWidgetItem, slot: fn (self: QtC.QTableWidgetItem, in: QtC.QDataStream) callconv(.c) void ```
    pub fn OnRead(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidgetItem_OnRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#read)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTableWidgetItem, in: QtC.QDataStream ```
    pub fn QBaseRead(self: ?*anyopaque, in: ?*anyopaque) void {
        qtc.QTableWidgetItem_QBaseRead(@ptrCast(self), @ptrCast(in));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#write)
    ///
    /// ``` self: QtC.QTableWidgetItem, out: QtC.QDataStream ```
    pub fn Write(self: ?*anyopaque, out: ?*anyopaque) void {
        qtc.QTableWidgetItem_Write(@ptrCast(self), @ptrCast(out));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#write)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTableWidgetItem, slot: fn (self: QtC.QTableWidgetItem, out: QtC.QDataStream) callconv(.c) void ```
    pub fn OnWrite(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidgetItem_OnWrite(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#write)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTableWidgetItem, out: QtC.QDataStream ```
    pub fn QBaseWrite(self: ?*anyopaque, out: ?*anyopaque) void {
        qtc.QTableWidgetItem_QBaseWrite(@ptrCast(self), @ptrCast(out));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator-eq)
    ///
    /// ``` self: QtC.QTableWidgetItem, other: QtC.QTableWidgetItem ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTableWidgetItem_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#type)
    ///
    /// ``` self: QtC.QTableWidgetItem ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QTableWidgetItem_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#dtor.QTableWidgetItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTableWidgetItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTableWidgetItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtablewidget.html
pub const qtablewidget = struct {
    /// New constructs a new QTableWidget object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.QTableWidget {
        return qtc.QTableWidget_new(@ptrCast(parent));
    }

    /// New2 constructs a new QTableWidget object.
    ///
    ///
    pub fn New2() QtC.QTableWidget {
        return qtc.QTableWidget_new2();
    }

    /// New3 constructs a new QTableWidget object.
    ///
    /// ``` rows: i32, columns: i32 ```
    pub fn New3(rows: i32, columns: i32) QtC.QTableWidget {
        return qtc.QTableWidget_new3(@intCast(rows), @intCast(columns));
    }

    /// New4 constructs a new QTableWidget object.
    ///
    /// ``` rows: i32, columns: i32, parent: QtC.QWidget ```
    pub fn New4(rows: i32, columns: i32, parent: ?*anyopaque) QtC.QTableWidget {
        return qtc.QTableWidget_new4(@intCast(rows), @intCast(columns), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QTableWidget_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QTableWidget, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTableWidget_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QTableWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QTableWidget_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QTableWidget_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QTableWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QTableWidget_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QTableWidget_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setRowCount)
    ///
    /// ``` self: QtC.QTableWidget, rows: i32 ```
    pub fn SetRowCount(self: ?*anyopaque, rows: i32) void {
        qtc.QTableWidget_SetRowCount(@ptrCast(self), @intCast(rows));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#rowCount)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn RowCount(self: ?*anyopaque) i32 {
        return qtc.QTableWidget_RowCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setColumnCount)
    ///
    /// ``` self: QtC.QTableWidget, columns: i32 ```
    pub fn SetColumnCount(self: ?*anyopaque, columns: i32) void {
        qtc.QTableWidget_SetColumnCount(@ptrCast(self), @intCast(columns));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#columnCount)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ColumnCount(self: ?*anyopaque) i32 {
        return qtc.QTableWidget_ColumnCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#row)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem ```
    pub fn Row(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QTableWidget_Row(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#column)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem ```
    pub fn Column(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QTableWidget_Column(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#item)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32 ```
    pub fn Item(self: ?*anyopaque, row: i32, column: i32) QtC.QTableWidgetItem {
        return qtc.QTableWidget_Item(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setItem)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32, item: QtC.QTableWidgetItem ```
    pub fn SetItem(self: ?*anyopaque, row: i32, column: i32, item: ?*anyopaque) void {
        qtc.QTableWidget_SetItem(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#takeItem)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32 ```
    pub fn TakeItem(self: ?*anyopaque, row: i32, column: i32) QtC.QTableWidgetItem {
        return qtc.QTableWidget_TakeItem(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#items)
    ///
    /// ``` self: QtC.QTableWidget, data: QtC.QMimeData, allocator: std.mem.Allocator ```
    pub fn Items(self: ?*anyopaque, data: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QTableWidgetItem {
        const _arr: qtc.libqt_list = qtc.QTableWidget_Items(@ptrCast(self), @ptrCast(data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTableWidgetItem, _arr.len) catch @panic("qtablewidget.Items: Memory allocation failed");
        const _data: [*]QtC.QTableWidgetItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#indexFromItem)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem ```
    pub fn IndexFromItem(self: ?*anyopaque, item: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTableWidget_IndexFromItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemFromIndex)
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn ItemFromIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QTableWidgetItem {
        return qtc.QTableWidget_ItemFromIndex(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#verticalHeaderItem)
    ///
    /// ``` self: QtC.QTableWidget, row: i32 ```
    pub fn VerticalHeaderItem(self: ?*anyopaque, row: i32) QtC.QTableWidgetItem {
        return qtc.QTableWidget_VerticalHeaderItem(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setVerticalHeaderItem)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, item: QtC.QTableWidgetItem ```
    pub fn SetVerticalHeaderItem(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        qtc.QTableWidget_SetVerticalHeaderItem(@ptrCast(self), @intCast(row), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#takeVerticalHeaderItem)
    ///
    /// ``` self: QtC.QTableWidget, row: i32 ```
    pub fn TakeVerticalHeaderItem(self: ?*anyopaque, row: i32) QtC.QTableWidgetItem {
        return qtc.QTableWidget_TakeVerticalHeaderItem(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#horizontalHeaderItem)
    ///
    /// ``` self: QtC.QTableWidget, column: i32 ```
    pub fn HorizontalHeaderItem(self: ?*anyopaque, column: i32) QtC.QTableWidgetItem {
        return qtc.QTableWidget_HorizontalHeaderItem(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setHorizontalHeaderItem)
    ///
    /// ``` self: QtC.QTableWidget, column: i32, item: QtC.QTableWidgetItem ```
    pub fn SetHorizontalHeaderItem(self: ?*anyopaque, column: i32, item: ?*anyopaque) void {
        qtc.QTableWidget_SetHorizontalHeaderItem(@ptrCast(self), @intCast(column), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#takeHorizontalHeaderItem)
    ///
    /// ``` self: QtC.QTableWidget, column: i32 ```
    pub fn TakeHorizontalHeaderItem(self: ?*anyopaque, column: i32) QtC.QTableWidgetItem {
        return qtc.QTableWidget_TakeHorizontalHeaderItem(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setVerticalHeaderLabels)
    ///
    /// ``` self: QtC.QTableWidget, labels: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetVerticalHeaderLabels(self: ?*anyopaque, labels: [][]const u8, allocator: std.mem.Allocator) void {
        var labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("qtablewidget.SetVerticalHeaderLabels: Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |item, i| {
            labels_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const labels_list = qtc.libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        qtc.QTableWidget_SetVerticalHeaderLabels(@ptrCast(self), labels_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setHorizontalHeaderLabels)
    ///
    /// ``` self: QtC.QTableWidget, labels: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetHorizontalHeaderLabels(self: ?*anyopaque, labels: [][]const u8, allocator: std.mem.Allocator) void {
        var labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("qtablewidget.SetHorizontalHeaderLabels: Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |item, i| {
            labels_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const labels_list = qtc.libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        qtc.QTableWidget_SetHorizontalHeaderLabels(@ptrCast(self), labels_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentRow)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn CurrentRow(self: ?*anyopaque) i32 {
        return qtc.QTableWidget_CurrentRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentColumn)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn CurrentColumn(self: ?*anyopaque) i32 {
        return qtc.QTableWidget_CurrentColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentItem)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn CurrentItem(self: ?*anyopaque) QtC.QTableWidgetItem {
        return qtc.QTableWidget_CurrentItem(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentItem)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem ```
    pub fn SetCurrentItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_SetCurrentItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentItem)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem, command: flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn SetCurrentItem2(self: ?*anyopaque, item: ?*anyopaque, command: i32) void {
        qtc.QTableWidget_SetCurrentItem2(@ptrCast(self), @ptrCast(item), @intCast(command));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentCell)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32 ```
    pub fn SetCurrentCell(self: ?*anyopaque, row: i32, column: i32) void {
        qtc.QTableWidget_SetCurrentCell(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentCell)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32, command: flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn SetCurrentCell2(self: ?*anyopaque, row: i32, column: i32, command: i32) void {
        qtc.QTableWidget_SetCurrentCell2(@ptrCast(self), @intCast(row), @intCast(column), @intCast(command));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#sortItems)
    ///
    /// ``` self: QtC.QTableWidget, column: i32 ```
    pub fn SortItems(self: ?*anyopaque, column: i32) void {
        qtc.QTableWidget_SortItems(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setSortingEnabled)
    ///
    /// ``` self: QtC.QTableWidget, enable: bool ```
    pub fn SetSortingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QTableWidget_SetSortingEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#isSortingEnabled)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn IsSortingEnabled(self: ?*anyopaque) bool {
        return qtc.QTableWidget_IsSortingEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#editItem)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem ```
    pub fn EditItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_EditItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#openPersistentEditor)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem ```
    pub fn OpenPersistentEditor(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_OpenPersistentEditor(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#closePersistentEditor)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem ```
    pub fn ClosePersistentEditor(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_ClosePersistentEditor(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#isPersistentEditorOpen)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem ```
    pub fn IsPersistentEditorOpen(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QTableWidget_IsPersistentEditorOpen(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellWidget)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32 ```
    pub fn CellWidget(self: ?*anyopaque, row: i32, column: i32) QtC.QWidget {
        return qtc.QTableWidget_CellWidget(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCellWidget)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32, widget: QtC.QWidget ```
    pub fn SetCellWidget(self: ?*anyopaque, row: i32, column: i32, widget: ?*anyopaque) void {
        qtc.QTableWidget_SetCellWidget(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#removeCellWidget)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32 ```
    pub fn RemoveCellWidget(self: ?*anyopaque, row: i32, column: i32) void {
        qtc.QTableWidget_RemoveCellWidget(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setRangeSelected)
    ///
    /// ``` self: QtC.QTableWidget, range: QtC.QTableWidgetSelectionRange, selectVal: bool ```
    pub fn SetRangeSelected(self: ?*anyopaque, range: ?*anyopaque, selectVal: bool) void {
        qtc.QTableWidget_SetRangeSelected(@ptrCast(self), @ptrCast(range), selectVal);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#selectedRanges)
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn SelectedRanges(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QTableWidgetSelectionRange {
        const _arr: qtc.libqt_list = qtc.QTableWidget_SelectedRanges(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTableWidgetSelectionRange, _arr.len) catch @panic("qtablewidget.SelectedRanges: Memory allocation failed");
        const _data: [*]QtC.QTableWidgetSelectionRange = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#selectedItems)
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn SelectedItems(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QTableWidgetItem {
        const _arr: qtc.libqt_list = qtc.QTableWidget_SelectedItems(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTableWidgetItem, _arr.len) catch @panic("qtablewidget.SelectedItems: Memory allocation failed");
        const _data: [*]QtC.QTableWidgetItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#findItems)
    ///
    /// ``` self: QtC.QTableWidget, text: []const u8, flags: flag of qnamespace_enums.MatchFlag, allocator: std.mem.Allocator ```
    pub fn FindItems(self: ?*anyopaque, text: []const u8, flags: i32, allocator: std.mem.Allocator) []QtC.QTableWidgetItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QTableWidget_FindItems(@ptrCast(self), text_str, @intCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTableWidgetItem, _arr.len) catch @panic("qtablewidget.FindItems: Memory allocation failed");
        const _data: [*]QtC.QTableWidgetItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#visualRow)
    ///
    /// ``` self: QtC.QTableWidget, logicalRow: i32 ```
    pub fn VisualRow(self: ?*anyopaque, logicalRow: i32) i32 {
        return qtc.QTableWidget_VisualRow(@ptrCast(self), @intCast(logicalRow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#visualColumn)
    ///
    /// ``` self: QtC.QTableWidget, logicalColumn: i32 ```
    pub fn VisualColumn(self: ?*anyopaque, logicalColumn: i32) i32 {
        return qtc.QTableWidget_VisualColumn(@ptrCast(self), @intCast(logicalColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemAt)
    ///
    /// ``` self: QtC.QTableWidget, p: QtC.QPoint ```
    pub fn ItemAt(self: ?*anyopaque, p: ?*anyopaque) QtC.QTableWidgetItem {
        return qtc.QTableWidget_ItemAt(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemAt)
    ///
    /// ``` self: QtC.QTableWidget, x: i32, y: i32 ```
    pub fn ItemAt2(self: ?*anyopaque, x: i32, y: i32) QtC.QTableWidgetItem {
        return qtc.QTableWidget_ItemAt2(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#visualItemRect)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem ```
    pub fn VisualItemRect(self: ?*anyopaque, item: ?*anyopaque) QtC.QRect {
        return qtc.QTableWidget_VisualItemRect(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemPrototype)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ItemPrototype(self: ?*anyopaque) QtC.QTableWidgetItem {
        return qtc.QTableWidget_ItemPrototype(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setItemPrototype)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem ```
    pub fn SetItemPrototype(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_SetItemPrototype(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#scrollToItem)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem ```
    pub fn ScrollToItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_ScrollToItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#insertRow)
    ///
    /// ``` self: QtC.QTableWidget, row: i32 ```
    pub fn InsertRow(self: ?*anyopaque, row: i32) void {
        qtc.QTableWidget_InsertRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#insertColumn)
    ///
    /// ``` self: QtC.QTableWidget, column: i32 ```
    pub fn InsertColumn(self: ?*anyopaque, column: i32) void {
        qtc.QTableWidget_InsertColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#removeRow)
    ///
    /// ``` self: QtC.QTableWidget, row: i32 ```
    pub fn RemoveRow(self: ?*anyopaque, row: i32) void {
        qtc.QTableWidget_RemoveRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#removeColumn)
    ///
    /// ``` self: QtC.QTableWidget, column: i32 ```
    pub fn RemoveColumn(self: ?*anyopaque, column: i32) void {
        qtc.QTableWidget_RemoveColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#clear)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QTableWidget_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#clearContents)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ClearContents(self: ?*anyopaque) void {
        qtc.QTableWidget_ClearContents(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemPressed)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem ```
    pub fn ItemPressed(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_ItemPressed(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemPressed)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, item: QtC.QTableWidgetItem) callconv(.c) void ```
    pub fn OnItemPressed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemPressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemClicked)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem ```
    pub fn ItemClicked(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_ItemClicked(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemClicked)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, item: QtC.QTableWidgetItem) callconv(.c) void ```
    pub fn OnItemClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemDoubleClicked)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem ```
    pub fn ItemDoubleClicked(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_ItemDoubleClicked(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemDoubleClicked)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, item: QtC.QTableWidgetItem) callconv(.c) void ```
    pub fn OnItemDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemDoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemActivated)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem ```
    pub fn ItemActivated(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_ItemActivated(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemActivated)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, item: QtC.QTableWidgetItem) callconv(.c) void ```
    pub fn OnItemActivated(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemActivated(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemEntered)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem ```
    pub fn ItemEntered(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_ItemEntered(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemEntered)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, item: QtC.QTableWidgetItem) callconv(.c) void ```
    pub fn OnItemEntered(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemEntered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemChanged)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem ```
    pub fn ItemChanged(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QTableWidget_ItemChanged(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemChanged)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, item: QtC.QTableWidgetItem) callconv(.c) void ```
    pub fn OnItemChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentItemChanged)
    ///
    /// ``` self: QtC.QTableWidget, current: QtC.QTableWidgetItem, previous: QtC.QTableWidgetItem ```
    pub fn CurrentItemChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QTableWidget_CurrentItemChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentItemChanged)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, current: QtC.QTableWidgetItem, previous: QtC.QTableWidgetItem) callconv(.c) void ```
    pub fn OnCurrentItemChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CurrentItemChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemSelectionChanged)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ItemSelectionChanged(self: ?*anyopaque) void {
        qtc.QTableWidget_ItemSelectionChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemSelectionChanged)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget) callconv(.c) void ```
    pub fn OnItemSelectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemSelectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellPressed)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32 ```
    pub fn CellPressed(self: ?*anyopaque, row: i32, column: i32) void {
        qtc.QTableWidget_CellPressed(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellPressed)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, row: i32, column: i32) callconv(.c) void ```
    pub fn OnCellPressed(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellPressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellClicked)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32 ```
    pub fn CellClicked(self: ?*anyopaque, row: i32, column: i32) void {
        qtc.QTableWidget_CellClicked(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellClicked)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, row: i32, column: i32) callconv(.c) void ```
    pub fn OnCellClicked(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellDoubleClicked)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32 ```
    pub fn CellDoubleClicked(self: ?*anyopaque, row: i32, column: i32) void {
        qtc.QTableWidget_CellDoubleClicked(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellDoubleClicked)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, row: i32, column: i32) callconv(.c) void ```
    pub fn OnCellDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellDoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellActivated)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32 ```
    pub fn CellActivated(self: ?*anyopaque, row: i32, column: i32) void {
        qtc.QTableWidget_CellActivated(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellActivated)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, row: i32, column: i32) callconv(.c) void ```
    pub fn OnCellActivated(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellActivated(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellEntered)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32 ```
    pub fn CellEntered(self: ?*anyopaque, row: i32, column: i32) void {
        qtc.QTableWidget_CellEntered(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellEntered)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, row: i32, column: i32) callconv(.c) void ```
    pub fn OnCellEntered(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellEntered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellChanged)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32 ```
    pub fn CellChanged(self: ?*anyopaque, row: i32, column: i32) void {
        qtc.QTableWidget_CellChanged(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellChanged)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, row: i32, column: i32) callconv(.c) void ```
    pub fn OnCellChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentCellChanged)
    ///
    /// ``` self: QtC.QTableWidget, currentRow: i32, currentColumn: i32, previousRow: i32, previousColumn: i32 ```
    pub fn CurrentCellChanged(self: ?*anyopaque, currentRow: i32, currentColumn: i32, previousRow: i32, previousColumn: i32) void {
        qtc.QTableWidget_CurrentCellChanged(@ptrCast(self), @intCast(currentRow), @intCast(currentColumn), @intCast(previousRow), @intCast(previousColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentCellChanged)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, currentRow: i32, currentColumn: i32, previousRow: i32, previousColumn: i32) callconv(.c) void ```
    pub fn OnCurrentCellChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CurrentCellChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#event)
    ///
    /// ``` self: QtC.QTableWidget, e: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QTableWidget_Event(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, e: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTableWidget_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#event)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTableWidget, e: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QTableWidget_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeTypes)
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn MimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QTableWidget_MimeTypes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qtablewidget.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtablewidget.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) [*][*:0]const u8 ```
    pub fn OnMimeTypes(self: ?*anyopaque, slot: fn () callconv(.c) [*][*:0]const u8) void {
        qtc.QTableWidget_OnMimeTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeTypes)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn QBaseMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QTableWidget_QBaseMimeTypes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qtablewidget.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtablewidget.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeData)
    ///
    /// ``` self: QtC.QTableWidget, items: []QtC.QTableWidgetItem ```
    pub fn MimeData(self: ?*anyopaque, items: []?*anyopaque) QtC.QMimeData {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return qtc.QTableWidget_MimeData(@ptrCast(self), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, items: [*]QtC.QTableWidgetItem) callconv(.c) QtC.QMimeData ```
    pub fn OnMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, [*]?*anyopaque) callconv(.c) QtC.QMimeData) void {
        qtc.QTableWidget_OnMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTableWidget, items: []QtC.QTableWidgetItem ```
    pub fn QBaseMimeData(self: ?*anyopaque, items: []?*anyopaque) QtC.QMimeData {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return qtc.QTableWidget_QBaseMimeData(@ptrCast(self), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropMimeData)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32, data: QtC.QMimeData, action: qnamespace_enums.DropAction ```
    pub fn DropMimeData(self: ?*anyopaque, row: i32, column: i32, data: ?*anyopaque, action: i32) bool {
        return qtc.QTableWidget_DropMimeData(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(data), @intCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropMimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, row: i32, column: i32, data: QtC.QMimeData, action: qnamespace_enums.DropAction) callconv(.c) bool ```
    pub fn OnDropMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QTableWidget_OnDropMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropMimeData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32, data: QtC.QMimeData, action: qnamespace_enums.DropAction ```
    pub fn QBaseDropMimeData(self: ?*anyopaque, row: i32, column: i32, data: ?*anyopaque, action: i32) bool {
        return qtc.QTableWidget_QBaseDropMimeData(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(data), @intCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#supportedDropActions)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn SupportedDropActions(self: ?*anyopaque) i32 {
        return qtc.QTableWidget_SupportedDropActions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#supportedDropActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnSupportedDropActions(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnSupportedDropActions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#supportedDropActions)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn QBaseSupportedDropActions(self: ?*anyopaque) i32 {
        return qtc.QTableWidget_QBaseSupportedDropActions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropEvent)
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnDropEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QTableWidget_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QTableWidget_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#sortItems)
    ///
    /// ``` self: QtC.QTableWidget, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn SortItems2(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QTableWidget_SortItems2(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#scrollToItem)
    ///
    /// ``` self: QtC.QTableWidget, item: QtC.QTableWidgetItem, hint: qabstractitemview_enums.ScrollHint ```
    pub fn ScrollToItem2(self: ?*anyopaque, item: ?*anyopaque, hint: i32) void {
        qtc.QTableWidget_ScrollToItem2(@ptrCast(self), @ptrCast(item), @intCast(hint));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setModel)
    ///
    /// ``` self: QtC.QTableWidget, model: QtC.QAbstractItemModel ```
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QTableView_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, model: QtC.QAbstractItemModel) callconv(.c) void ```
    pub fn OnSetModel(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableView_OnSetModel(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setModel)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTableWidget, model: QtC.QAbstractItemModel ```
    pub fn QBaseSetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QTableView_QBaseSetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalHeader)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn HorizontalHeader(self: ?*anyopaque) QtC.QHeaderView {
        return qtc.QTableView_HorizontalHeader(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalHeader)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn VerticalHeader(self: ?*anyopaque) QtC.QHeaderView {
        return qtc.QTableView_VerticalHeader(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setHorizontalHeader)
    ///
    /// ``` self: QtC.QTableWidget, header: QtC.QHeaderView ```
    pub fn SetHorizontalHeader(self: ?*anyopaque, header: ?*anyopaque) void {
        qtc.QTableView_SetHorizontalHeader(@ptrCast(self), @ptrCast(header));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setVerticalHeader)
    ///
    /// ``` self: QtC.QTableWidget, header: QtC.QHeaderView ```
    pub fn SetVerticalHeader(self: ?*anyopaque, header: ?*anyopaque) void {
        qtc.QTableView_SetVerticalHeader(@ptrCast(self), @ptrCast(header));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowViewportPosition)
    ///
    /// ``` self: QtC.QTableWidget, row: i32 ```
    pub fn RowViewportPosition(self: ?*anyopaque, row: i32) i32 {
        return qtc.QTableView_RowViewportPosition(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowAt)
    ///
    /// ``` self: QtC.QTableWidget, y: i32 ```
    pub fn RowAt(self: ?*anyopaque, y: i32) i32 {
        return qtc.QTableView_RowAt(@ptrCast(self), @intCast(y));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRowHeight)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, height: i32 ```
    pub fn SetRowHeight(self: ?*anyopaque, row: i32, height: i32) void {
        qtc.QTableView_SetRowHeight(@ptrCast(self), @intCast(row), @intCast(height));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowHeight)
    ///
    /// ``` self: QtC.QTableWidget, row: i32 ```
    pub fn RowHeight(self: ?*anyopaque, row: i32) i32 {
        return qtc.QTableView_RowHeight(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnViewportPosition)
    ///
    /// ``` self: QtC.QTableWidget, column: i32 ```
    pub fn ColumnViewportPosition(self: ?*anyopaque, column: i32) i32 {
        return qtc.QTableView_ColumnViewportPosition(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnAt)
    ///
    /// ``` self: QtC.QTableWidget, x: i32 ```
    pub fn ColumnAt(self: ?*anyopaque, x: i32) i32 {
        return qtc.QTableView_ColumnAt(@ptrCast(self), @intCast(x));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setColumnWidth)
    ///
    /// ``` self: QtC.QTableWidget, column: i32, width: i32 ```
    pub fn SetColumnWidth(self: ?*anyopaque, column: i32, width: i32) void {
        qtc.QTableView_SetColumnWidth(@ptrCast(self), @intCast(column), @intCast(width));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnWidth)
    ///
    /// ``` self: QtC.QTableWidget, column: i32 ```
    pub fn ColumnWidth(self: ?*anyopaque, column: i32) i32 {
        return qtc.QTableView_ColumnWidth(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isRowHidden)
    ///
    /// ``` self: QtC.QTableWidget, row: i32 ```
    pub fn IsRowHidden(self: ?*anyopaque, row: i32) bool {
        return qtc.QTableView_IsRowHidden(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRowHidden)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, hide: bool ```
    pub fn SetRowHidden(self: ?*anyopaque, row: i32, hide: bool) void {
        qtc.QTableView_SetRowHidden(@ptrCast(self), @intCast(row), hide);
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isColumnHidden)
    ///
    /// ``` self: QtC.QTableWidget, column: i32 ```
    pub fn IsColumnHidden(self: ?*anyopaque, column: i32) bool {
        return qtc.QTableView_IsColumnHidden(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setColumnHidden)
    ///
    /// ``` self: QtC.QTableWidget, column: i32, hide: bool ```
    pub fn SetColumnHidden(self: ?*anyopaque, column: i32, hide: bool) void {
        qtc.QTableView_SetColumnHidden(@ptrCast(self), @intCast(column), hide);
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showGrid)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ShowGrid(self: ?*anyopaque) bool {
        return qtc.QTableView_ShowGrid(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#gridStyle)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qnamespace_enums.PenStyle ```
    pub fn GridStyle(self: ?*anyopaque) i32 {
        return qtc.QTableView_GridStyle(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setGridStyle)
    ///
    /// ``` self: QtC.QTableWidget, style: qnamespace_enums.PenStyle ```
    pub fn SetGridStyle(self: ?*anyopaque, style: i32) void {
        qtc.QTableView_SetGridStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setWordWrap)
    ///
    /// ``` self: QtC.QTableWidget, on: bool ```
    pub fn SetWordWrap(self: ?*anyopaque, on: bool) void {
        qtc.QTableView_SetWordWrap(@ptrCast(self), on);
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#wordWrap)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn WordWrap(self: ?*anyopaque) bool {
        return qtc.QTableView_WordWrap(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setCornerButtonEnabled)
    ///
    /// ``` self: QtC.QTableWidget, enable: bool ```
    pub fn SetCornerButtonEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QTableView_SetCornerButtonEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isCornerButtonEnabled)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn IsCornerButtonEnabled(self: ?*anyopaque) bool {
        return qtc.QTableView_IsCornerButtonEnabled(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSpan)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32, rowSpan: i32, columnSpan: i32 ```
    pub fn SetSpan(self: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        qtc.QTableView_SetSpan(@ptrCast(self), @intCast(row), @intCast(column), @intCast(rowSpan), @intCast(columnSpan));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowSpan)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32 ```
    pub fn RowSpan(self: ?*anyopaque, row: i32, column: i32) i32 {
        return qtc.QTableView_RowSpan(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnSpan)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, column: i32 ```
    pub fn ColumnSpan(self: ?*anyopaque, row: i32, column: i32) i32 {
        return qtc.QTableView_ColumnSpan(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#clearSpans)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ClearSpans(self: ?*anyopaque) void {
        qtc.QTableView_ClearSpans(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectRow)
    ///
    /// ``` self: QtC.QTableWidget, row: i32 ```
    pub fn SelectRow(self: ?*anyopaque, row: i32) void {
        qtc.QTableView_SelectRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectColumn)
    ///
    /// ``` self: QtC.QTableWidget, column: i32 ```
    pub fn SelectColumn(self: ?*anyopaque, column: i32) void {
        qtc.QTableView_SelectColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#hideRow)
    ///
    /// ``` self: QtC.QTableWidget, row: i32 ```
    pub fn HideRow(self: ?*anyopaque, row: i32) void {
        qtc.QTableView_HideRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#hideColumn)
    ///
    /// ``` self: QtC.QTableWidget, column: i32 ```
    pub fn HideColumn(self: ?*anyopaque, column: i32) void {
        qtc.QTableView_HideColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showRow)
    ///
    /// ``` self: QtC.QTableWidget, row: i32 ```
    pub fn ShowRow(self: ?*anyopaque, row: i32) void {
        qtc.QTableView_ShowRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showColumn)
    ///
    /// ``` self: QtC.QTableWidget, column: i32 ```
    pub fn ShowColumn(self: ?*anyopaque, column: i32) void {
        qtc.QTableView_ShowColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeRowToContents)
    ///
    /// ``` self: QtC.QTableWidget, row: i32 ```
    pub fn ResizeRowToContents(self: ?*anyopaque, row: i32) void {
        qtc.QTableView_ResizeRowToContents(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeRowsToContents)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ResizeRowsToContents(self: ?*anyopaque) void {
        qtc.QTableView_ResizeRowsToContents(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeColumnToContents)
    ///
    /// ``` self: QtC.QTableWidget, column: i32 ```
    pub fn ResizeColumnToContents(self: ?*anyopaque, column: i32) void {
        qtc.QTableView_ResizeColumnToContents(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeColumnsToContents)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ResizeColumnsToContents(self: ?*anyopaque) void {
        qtc.QTableView_ResizeColumnsToContents(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sortByColumn)
    ///
    /// ``` self: QtC.QTableWidget, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn SortByColumn(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QTableView_SortByColumn(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setShowGrid)
    ///
    /// ``` self: QtC.QTableWidget, show: bool ```
    pub fn SetShowGrid(self: ?*anyopaque, show: bool) void {
        qtc.QTableView_SetShowGrid(@ptrCast(self), show);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Model(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QAbstractItemView_Model(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn SelectionModel(self: ?*anyopaque) QtC.QItemSelectionModel {
        return qtc.QAbstractItemView_SelectionModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
    ///
    /// ``` self: QtC.QTableWidget, delegate: QtC.QAbstractItemDelegate ```
    pub fn SetItemDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        qtc.QAbstractItemView_SetItemDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ItemDelegate(self: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegate(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
    ///
    /// ``` self: QtC.QTableWidget, mode: qabstractitemview_enums.SelectionMode ```
    pub fn SetSelectionMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetSelectionMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qabstractitemview_enums.SelectionMode ```
    pub fn SelectionMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_SelectionMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
    ///
    /// ``` self: QtC.QTableWidget, behavior: qabstractitemview_enums.SelectionBehavior ```
    pub fn SetSelectionBehavior(self: ?*anyopaque, behavior: i32) void {
        qtc.QAbstractItemView_SetSelectionBehavior(@ptrCast(self), @intCast(behavior));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qabstractitemview_enums.SelectionBehavior ```
    pub fn SelectionBehavior(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_SelectionBehavior(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn CurrentIndex(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemView_CurrentIndex(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn RootIndex(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemView_RootIndex(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
    ///
    /// ``` self: QtC.QTableWidget, triggers: flag of qabstractitemview_enums.EditTrigger ```
    pub fn SetEditTriggers(self: ?*anyopaque, triggers: i32) void {
        qtc.QAbstractItemView_SetEditTriggers(@ptrCast(self), @intCast(triggers));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` flag of qabstractitemview_enums.EditTrigger ```
    pub fn EditTriggers(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_EditTriggers(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
    ///
    /// ``` self: QtC.QTableWidget, mode: qabstractitemview_enums.ScrollMode ```
    pub fn SetVerticalScrollMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetVerticalScrollMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qabstractitemview_enums.ScrollMode ```
    pub fn VerticalScrollMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_VerticalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ResetVerticalScrollMode(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ResetVerticalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
    ///
    /// ``` self: QtC.QTableWidget, mode: qabstractitemview_enums.ScrollMode ```
    pub fn SetHorizontalScrollMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetHorizontalScrollMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qabstractitemview_enums.ScrollMode ```
    pub fn HorizontalScrollMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_HorizontalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ResetHorizontalScrollMode(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ResetHorizontalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
    ///
    /// ``` self: QtC.QTableWidget, enable: bool ```
    pub fn SetAutoScroll(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetAutoScroll(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn HasAutoScroll(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_HasAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
    ///
    /// ``` self: QtC.QTableWidget, margin: i32 ```
    pub fn SetAutoScrollMargin(self: ?*anyopaque, margin: i32) void {
        qtc.QAbstractItemView_SetAutoScrollMargin(@ptrCast(self), @intCast(margin));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn AutoScrollMargin(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_AutoScrollMargin(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
    ///
    /// ``` self: QtC.QTableWidget, enable: bool ```
    pub fn SetTabKeyNavigation(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetTabKeyNavigation(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn TabKeyNavigation(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_TabKeyNavigation(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
    ///
    /// ``` self: QtC.QTableWidget, enable: bool ```
    pub fn SetDropIndicatorShown(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetDropIndicatorShown(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ShowDropIndicator(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_ShowDropIndicator(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
    ///
    /// ``` self: QtC.QTableWidget, enable: bool ```
    pub fn SetDragEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetDragEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn DragEnabled(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_DragEnabled(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
    ///
    /// ``` self: QtC.QTableWidget, overwrite: bool ```
    pub fn SetDragDropOverwriteMode(self: ?*anyopaque, overwrite: bool) void {
        qtc.QAbstractItemView_SetDragDropOverwriteMode(@ptrCast(self), overwrite);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn DragDropOverwriteMode(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_DragDropOverwriteMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
    ///
    /// ``` self: QtC.QTableWidget, behavior: qabstractitemview_enums.DragDropMode ```
    pub fn SetDragDropMode(self: ?*anyopaque, behavior: i32) void {
        qtc.QAbstractItemView_SetDragDropMode(@ptrCast(self), @intCast(behavior));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qabstractitemview_enums.DragDropMode ```
    pub fn DragDropMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_DragDropMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
    ///
    /// ``` self: QtC.QTableWidget, dropAction: qnamespace_enums.DropAction ```
    pub fn SetDefaultDropAction(self: ?*anyopaque, dropAction: i32) void {
        qtc.QAbstractItemView_SetDefaultDropAction(@ptrCast(self), @intCast(dropAction));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qnamespace_enums.DropAction ```
    pub fn DefaultDropAction(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_DefaultDropAction(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
    ///
    /// ``` self: QtC.QTableWidget, enable: bool ```
    pub fn SetAlternatingRowColors(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetAlternatingRowColors(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn AlternatingRowColors(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_AlternatingRowColors(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
    ///
    /// ``` self: QtC.QTableWidget, size: QtC.QSize ```
    pub fn SetIconSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QAbstractItemView_SetIconSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn IconSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractItemView_IconSize(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
    ///
    /// ``` self: QtC.QTableWidget, mode: qnamespace_enums.TextElideMode ```
    pub fn SetTextElideMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetTextElideMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qnamespace_enums.TextElideMode ```
    pub fn TextElideMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_TextElideMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn SizeHintForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractItemView_SizeHintForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex, widget: QtC.QWidget ```
    pub fn SetIndexWidget(self: ?*anyopaque, index: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractItemView_SetIndexWidget(@ptrCast(self), @ptrCast(index), @ptrCast(widget));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn IndexWidget(self: ?*anyopaque, index: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractItemView_IndexWidget(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
    ///
    /// ``` self: QtC.QTableWidget, row: i32, delegate: QtC.QAbstractItemDelegate ```
    pub fn SetItemDelegateForRow(self: ?*anyopaque, row: i32, delegate: ?*anyopaque) void {
        qtc.QAbstractItemView_SetItemDelegateForRow(@ptrCast(self), @intCast(row), @ptrCast(delegate));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
    ///
    /// ``` self: QtC.QTableWidget, row: i32 ```
    pub fn ItemDelegateForRow(self: ?*anyopaque, row: i32) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegateForRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
    ///
    /// ``` self: QtC.QTableWidget, column: i32, delegate: QtC.QAbstractItemDelegate ```
    pub fn SetItemDelegateForColumn(self: ?*anyopaque, column: i32, delegate: ?*anyopaque) void {
        qtc.QAbstractItemView_SetItemDelegateForColumn(@ptrCast(self), @intCast(column), @ptrCast(delegate));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
    ///
    /// ``` self: QtC.QTableWidget, column: i32 ```
    pub fn ItemDelegateForColumn(self: ?*anyopaque, column: i32) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegateForColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn ItemDelegate2(self: ?*anyopaque, index: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegate2(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn Edit(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Edit(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ClearSelection(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ClearSelection(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn SetCurrentIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_SetCurrentIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ScrollToTop(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ScrollToTop(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ScrollToBottom(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ScrollToBottom(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn Update(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Update(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn Pressed(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Pressed(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnPressed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Pressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn Clicked(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Clicked(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Clicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn DoubleClicked(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_DoubleClicked(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_DoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn Activated(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Activated(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnActivated(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Activated(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn Entered(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Entered(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnEntered(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Entered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ViewportEntered(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ViewportEntered(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget) callconv(.c) void ```
    pub fn OnViewportEntered(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_ViewportEntered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ``` self: QtC.QTableWidget, size: QtC.QSize ```
    pub fn IconSizeChanged(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QAbstractItemView_IconSizeChanged(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, size: QtC.QSize) callconv(.c) void ```
    pub fn OnIconSizeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_IconSizeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qnamespace_enums.ScrollBarPolicy ```
    pub fn VerticalScrollBarPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ``` self: QtC.QTableWidget, verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetVerticalScrollBarPolicy(self: ?*anyopaque, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self), @intCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn VerticalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ``` self: QtC.QTableWidget, scrollbar: QtC.QScrollBar ```
    pub fn SetVerticalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qnamespace_enums.ScrollBarPolicy ```
    pub fn HorizontalScrollBarPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ``` self: QtC.QTableWidget, horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetHorizontalScrollBarPolicy(self: ?*anyopaque, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self), @intCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn HorizontalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ``` self: QtC.QTableWidget, scrollbar: QtC.QScrollBar ```
    pub fn SetHorizontalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn CornerWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ``` self: QtC.QTableWidget, widget: QtC.QWidget ```
    pub fn SetCornerWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ``` self: QtC.QTableWidget, widget: QtC.QWidget, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn AddScrollBarWidget(self: ?*anyopaque, widget: ?*anyopaque, alignment: i32) void {
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self), @ptrCast(widget), @intCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ``` self: QtC.QTableWidget, alignment: flag of qnamespace_enums.AlignmentFlag, allocator: std.mem.Allocator ```
    pub fn ScrollBarWidgets(self: ?*anyopaque, alignment: i32, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self), @intCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("qtablewidget.ScrollBarWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Viewport(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_Viewport(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ``` self: QtC.QTableWidget, widget: QtC.QWidget ```
    pub fn SetViewport(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn MaximumViewportSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qabstractscrollarea_enums.SizeAdjustPolicy ```
    pub fn SizeAdjustPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ``` self: QtC.QTableWidget, policy: qabstractscrollarea_enums.SizeAdjustPolicy ```
    pub fn SetSizeAdjustPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn FrameStyle(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ``` self: QtC.QTableWidget, frameStyle: i32 ```
    pub fn SetFrameStyle(self: ?*anyopaque, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self), @intCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn FrameWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qframe_enums.Shape ```
    pub fn FrameShape(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ``` self: QtC.QTableWidget, frameShape: qframe_enums.Shape ```
    pub fn SetFrameShape(self: ?*anyopaque, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self), @intCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qframe_enums.Shadow ```
    pub fn FrameShadow(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ``` self: QtC.QTableWidget, frameShadow: qframe_enums.Shadow ```
    pub fn SetFrameShadow(self: ?*anyopaque, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self), @intCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ``` self: QtC.QTableWidget, lineWidth: i32 ```
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self), @intCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ``` self: QtC.QTableWidget, midLineWidth: i32 ```
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self), @intCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn FrameRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QFrame_FrameRect(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ``` self: QtC.QTableWidget, frameRect: QtC.QRect ```
    pub fn SetFrameRect(self: ?*anyopaque, frameRect: ?*anyopaque) void {
        qtc.QFrame_SetFrameRect(@ptrCast(self), @ptrCast(frameRect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn WinId(self: ?*anyopaque) usize {
        return qtc.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn CreateWinId(self: ?*anyopaque) void {
        qtc.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ``` self: QtC.QTableWidget, style: QtC.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return qtc.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qnamespace_enums.WindowModality ```
    pub fn WindowModality(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ``` self: QtC.QTableWidget, windowModality: qnamespace_enums.WindowModality ```
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QWidget ```
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ``` self: QtC.QTableWidget, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ``` self: QtC.QTableWidget, disabled: bool ```
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ``` self: QtC.QTableWidget, windowModified: bool ```
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn NormalGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn FrameSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ChildrenRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ChildrenRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.QTableWidget, minimumSize: QtC.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        qtc.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.QTableWidget, minw: i32, minh: i32 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self), @intCast(minw), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.QTableWidget, maximumSize: QtC.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        qtc.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.QTableWidget, maxw: i32, maxh: i32 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self), @intCast(maxw), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ``` self: QtC.QTableWidget, minw: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self), @intCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ``` self: QtC.QTableWidget, minh: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ``` self: QtC.QTableWidget, maxw: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self), @intCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ``` self: QtC.QTableWidget, maxh: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn SizeIncrement(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.QTableWidget, sizeIncrement: QtC.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        qtc.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.QTableWidget, w: i32, h: i32 ```
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn BaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.QTableWidget, baseSize: QtC.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        qtc.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.QTableWidget, basew: i32, baseh: i32 ```
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self), @intCast(basew), @intCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.QTableWidget, fixedSize: QtC.QSize ```
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        qtc.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.QTableWidget, w: i32, h: i32 ```
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ``` self: QtC.QTableWidget, w: i32 ```
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ``` self: QtC.QTableWidget, h: i32 ```
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QPoint ```
    pub fn MapToGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QPoint ```
    pub fn MapFromGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QPoint ```
    pub fn MapToParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QPoint ```
    pub fn MapFromParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Window(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn NativeParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ``` self: QtC.QTableWidget, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ``` self: QtC.QTableWidget, backgroundRole: qpalette_enums.ColorRole ```
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self), @intCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn BackgroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ``` self: QtC.QTableWidget, foregroundRole: qpalette_enums.ColorRole ```
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self), @intCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn ForegroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ``` self: QtC.QTableWidget, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn FontInfo(self: ?*anyopaque) QtC.QFontInfo {
        return qtc.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ``` self: QtC.QTableWidget, cursor: QtC.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ``` self: QtC.QTableWidget, enable: bool ```
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ``` self: QtC.QTableWidget, enable: bool ```
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.QTableWidget, mask: QtC.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.QTableWidget, mask: QtC.QRegion ```
    pub fn SetMask2(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask2(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ClearMask(self: ?*anyopaque) void {
        qtc.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QTableWidget, target: QtC.QPaintDevice ```
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QTableWidget, painter: QtC.QPainter ```
    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QWidget_Render2(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Grab(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ``` self: QtC.QTableWidget, effect: QtC.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.QTableWidget, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ``` self: QtC.QTableWidget, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ``` self: QtC.QTableWidget, windowTitle: []const u8 ```
    pub fn SetWindowTitle(self: ?*anyopaque, windowTitle: []const u8) void {
        const windowTitle_str = qtc.libqt_string{
            .len = windowTitle.len,
            .data = windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self), windowTitle_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ``` self: QtC.QTableWidget, styleSheet: []const u8 ```
    pub fn SetStyleSheet(self: ?*anyopaque, styleSheet: []const u8) void {
        const styleSheet_str = qtc.libqt_string{
            .len = styleSheet.len,
            .data = styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self), styleSheet_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StyleSheet(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ``` self: QtC.QTableWidget, icon: QtC.QIcon ```
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn WindowIcon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ``` self: QtC.QTableWidget, windowIconText: []const u8 ```
    pub fn SetWindowIconText(self: ?*anyopaque, windowIconText: []const u8) void {
        const windowIconText_str = qtc.libqt_string{
            .len = windowIconText.len,
            .data = windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self), windowIconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn WindowIconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowIconText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ``` self: QtC.QTableWidget, windowRole: []const u8 ```
    pub fn SetWindowRole(self: ?*anyopaque, windowRole: []const u8) void {
        const windowRole_str = qtc.libqt_string{
            .len = windowRole.len,
            .data = windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self), windowRole_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowRole(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ``` self: QtC.QTableWidget, filePath: []const u8 ```
    pub fn SetWindowFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self), filePath_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn WindowFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ``` self: QtC.QTableWidget, level: f64 ```
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ``` self: QtC.QTableWidget, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ``` self: QtC.QTableWidget, msec: i32 ```
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ``` self: QtC.QTableWidget, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ``` self: QtC.QTableWidget, whatsThis: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn AccessibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ``` self: QtC.QTableWidget, name: []const u8 ```
    pub fn SetAccessibleName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self), name_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ``` self: QtC.QTableWidget, description: []const u8 ```
    pub fn SetAccessibleDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self), description_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ``` self: QtC.QTableWidget, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ``` self: QtC.QTableWidget, locale: QtC.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn UnsetLocale(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ActivateWindow(self: ?*anyopaque) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.QTableWidget, reason: qnamespace_enums.FocusReason ```
    pub fn SetFocus2(self: ?*anyopaque, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qnamespace_enums.FocusPolicy ```
    pub fn FocusPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ``` self: QtC.QTableWidget, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn HasFocus(self: ?*anyopaque) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
    ///
    /// ``` param1: QtC.QWidget, param2: QtC.QWidget ```
    pub fn SetTabOrder(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QWidget_SetTabOrder(@ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ``` self: QtC.QTableWidget, focusProxy: QtC.QWidget ```
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        qtc.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn FocusProxy(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qnamespace_enums.ContextMenuPolicy ```
    pub fn ContextMenuPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ``` self: QtC.QTableWidget, policy: qnamespace_enums.ContextMenuPolicy ```
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QCursor ```
    pub fn GrabMouse2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_GrabMouse2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.QTableWidget, key: QtC.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return qtc.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ``` self: QtC.QTableWidget, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.QTableWidget, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.QTableWidget, id: i32 ```
    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    ///
    pub fn MouseGrabber() QtC.QWidget {
        return qtc.QWidget_MouseGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    ///
    pub fn KeyboardGrabber() QtC.QWidget {
        return qtc.QWidget_KeyboardGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ``` self: QtC.QTableWidget, enable: bool ```
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn GraphicsProxyWidget(self: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Repaint(self: ?*anyopaque) void {
        qtc.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QTableWidget, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QRect ```
    pub fn Update3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QRegion ```
    pub fn Update4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QTableWidget, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QRect ```
    pub fn Repaint3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QRegion ```
    pub fn Repaint4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ``` self: QtC.QTableWidget, hidden: bool ```
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        qtc.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Raise(self: ?*anyopaque) void {
        qtc.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Lower(self: ?*anyopaque) void {
        qtc.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QWidget ```
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.QTableWidget, x: i32, y: i32 ```
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QPoint ```
    pub fn Move2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Move2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.QTableWidget, w: i32, h: i32 ```
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QSize ```
    pub fn Resize2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Resize2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.QTableWidget, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.QTableWidget, geometry: QtC.QRect ```
    pub fn SetGeometry2(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidget_SetGeometry2(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn SaveGeometry(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtablewidget.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ``` self: QtC.QTableWidget, geometry: []u8 ```
    pub fn RestoreGeometry(self: ?*anyopaque, geometry: []u8) bool {
        const geometry_str = qtc.libqt_string{
            .len = geometry.len,
            .data = geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self), geometry_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QWidget ```
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowState ```
    pub fn WindowState(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ``` self: QtC.QTableWidget, state: flag of qnamespace_enums.WindowState ```
    pub fn SetWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ``` self: QtC.QTableWidget, state: flag of qnamespace_enums.WindowState ```
    pub fn OverrideWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.QTableWidget, sizePolicy: QtC.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: QtC.QSizePolicy) void {
        qtc.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.QTableWidget, horizontal: qsizepolicy_enums.Policy, vertical: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self), @intCast(horizontal), @intCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn VisibleRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.QTableWidget, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.QTableWidget, margins: QtC.QMargins ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ``` self: QtC.QTableWidget, layout: QtC.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.QTableWidget, parent: QtC.QWidget ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.QTableWidget, parent: QtC.QWidget, f: flag of qnamespace_enums.WindowType ```
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i64) void {
        qtc.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @intCast(f));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.QTableWidget, dx: i32, dy: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.QTableWidget, dx: i32, dy: i32, param3: QtC.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        qtc.QWidget_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn FocusWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn NextInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn PreviousInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ``` self: QtC.QTableWidget, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QTableWidget, action: QtC.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ``` self: QtC.QTableWidget, actions: []QtC.QAction ```
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ``` self: QtC.QTableWidget, before: QtC.QAction, actions: []QtC.QAction ```
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ``` self: QtC.QTableWidget, before: QtC.QAction, action: QtC.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ``` self: QtC.QTableWidget, action: QtC.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("qtablewidget.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QTableWidget, text: []const u8 ```
    pub fn AddAction2(self: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction2(@ptrCast(self), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QTableWidget, icon: QtC.QIcon, text: []const u8 ```
    pub fn AddAction3(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction3(@ptrCast(self), @ptrCast(icon), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QTableWidget, text: []const u8, shortcut: QtC.QKeySequence ```
    pub fn AddAction4(self: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction4(@ptrCast(self), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QTableWidget, icon: QtC.QIcon, text: []const u8, shortcut: QtC.QKeySequence ```
    pub fn AddAction5(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction5(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ``` self: QtC.QTableWidget, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowType ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.QTableWidget, param1: qnamespace_enums.WindowType ```
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i64) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ``` self: QtC.QTableWidget, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qnamespace_enums.WindowType ```
    pub fn WindowType(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
    ///
    /// ``` param1: u64 ```
    pub fn Find(param1: u64) QtC.QWidget {
        return qtc.QWidget_Find(@intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QTableWidget, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QWidget {
        return qtc.QWidget_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QTableWidget, p: QtC.QPoint ```
    pub fn ChildAt2(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt2(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QTableWidget, p: QtC.QPointF ```
    pub fn ChildAt3(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt3(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.QTableWidget, param1: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ``` self: QtC.QTableWidget, param1: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn EnsurePolished(self: ?*anyopaque) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ``` self: QtC.QTableWidget, child: QtC.QWidget ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ``` self: QtC.QTableWidget, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn BackingStore(self: ?*anyopaque) QtC.QBackingStore {
        return qtc.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn WindowHandle(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ``` self: QtC.QTableWidget, screen: QtC.QScreen ```
    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWidget_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow ```
    pub fn CreateWindowContainer(window: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer(@ptrCast(window));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: QtC.QTableWidget, title: []const u8 ```
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, title: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.QTableWidget, icon: QtC.QIcon ```
    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, icon: QtC.QIcon) callconv(.c) void ```
    pub fn OnWindowIconChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.QTableWidget, iconText: []const u8 ```
    pub fn WindowIconTextChanged(self: ?*anyopaque, iconText: []const u8) void {
        const iconText_str = qtc.libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self), iconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, iconText: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowIconTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.QTableWidget, pos: QtC.QPoint ```
    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, pos: QtC.QPoint) callconv(.c) void ```
    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` flag of qnamespace_enums.InputMethodHint ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ``` self: QtC.QTableWidget, hints: flag of qnamespace_enums.InputMethodHint ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QTableWidget, target: QtC.QPaintDevice, targetOffset: QtC.QPoint ```
    pub fn Render22(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render22(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QTableWidget, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QTableWidget, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QTableWidget, painter: QtC.QPainter, targetOffset: QtC.QPoint ```
    pub fn Render23(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render23(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QTableWidget, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QTableWidget, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.QTableWidget, rectangle: QtC.QRect ```
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.QTableWidget, typeVal: qnamespace_enums.GestureType, flags: flag of qnamespace_enums.GestureFlag ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.QTableWidget, key: QtC.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i32) i32 {
        return qtc.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @intCast(context));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.QTableWidget, id: i32, enable: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.QTableWidget, id: i32, enable: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.QTableWidget, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.QTableWidget, param1: qnamespace_enums.WidgetAttribute, on: bool ```
    pub fn SetAttribute2(self: ?*anyopaque, param1: i32, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow, parent: QtC.QWidget ```
    pub fn CreateWindowContainer2(window: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer2(@ptrCast(window), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow, parent: QtC.QWidget, flags: flag of qnamespace_enums.WindowType ```
    pub fn CreateWindowContainer3(window: ?*anyopaque, parent: ?*anyopaque, flags: i64) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer3(@ptrCast(window), @ptrCast(parent), @intCast(flags));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QTableWidget, name: []const u8 ```
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
    /// ``` self: QtC.QTableWidget ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QTableWidget, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QTableWidget, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QTableWidget, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QTableWidget, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QTableWidget, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qtablewidget.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QTableWidget, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QTableWidget, obj: QtC.QObject ```
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
    /// ``` self: QtC.QTableWidget, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QTableWidget ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QTableWidget, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QTableWidget, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtablewidget.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtablewidget.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QTableWidget, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QTableWidget, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QTableWidget, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QTableWidget, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ``` metric: qpaintdevice_enums.PaintDeviceMetric, value: f64 ```
    pub fn EncodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@intCast(metric), @floatCast(value));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn SetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QTableWidget_SetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn QBaseSetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QTableWidget_QBaseSetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnSetRootIndex(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnSetRootIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, selectionModel: QtC.QItemSelectionModel ```
    pub fn SetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QTableWidget_SetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, selectionModel: QtC.QItemSelectionModel ```
    pub fn QBaseSetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QTableWidget_QBaseSetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, selectionModel: QtC.QItemSelectionModel) callconv(.c) void ```
    pub fn OnSetSelectionModel(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnSetSelectionModel(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn DoItemsLayout(self: ?*anyopaque) void {
        qtc.QTableWidget_DoItemsLayout(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseDoItemsLayout(self: ?*anyopaque) void {
        qtc.QTableWidget_QBaseDoItemsLayout(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnDoItemsLayout(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QTableWidget_OnDoItemsLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn VisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QTableWidget_VisualRect(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn QBaseVisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QTableWidget_QBaseVisualRect(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, index: QtC.QModelIndex) callconv(.c) QtC.QRect ```
    pub fn OnVisualRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QTableWidget_OnVisualRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex, hint: qabstractitemview_enums.ScrollHint ```
    pub fn ScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QTableWidget_ScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex, hint: qabstractitemview_enums.ScrollHint ```
    pub fn QBaseScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QTableWidget_QBaseScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, index: QtC.QModelIndex, hint: qabstractitemview_enums.ScrollHint) callconv(.c) void ```
    pub fn OnScrollTo(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnScrollTo(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#indexAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, p: QtC.QPoint ```
    pub fn IndexAt(self: ?*anyopaque, p: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTableWidget_IndexAt(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#indexAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, p: QtC.QPoint ```
    pub fn QBaseIndexAt(self: ?*anyopaque, p: ?*anyopaque) QtC.QModelIndex {
        return qtc.QTableWidget_QBaseIndexAt(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#indexAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, p: QtC.QPoint) callconv(.c) QtC.QModelIndex ```
    pub fn OnIndexAt(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QTableWidget_OnIndexAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, dx: i32, dy: i32 ```
    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QTableWidget_ScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, dx: i32, dy: i32 ```
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QTableWidget_QBaseScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, dx: i32, dy: i32) callconv(.c) void ```
    pub fn OnScrollContentsBy(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnScrollContentsBy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, option: QtC.QStyleOptionViewItem ```
    pub fn InitViewItemOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QTableWidget_InitViewItemOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, option: QtC.QStyleOptionViewItem ```
    pub fn QBaseInitViewItemOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QTableWidget_QBaseInitViewItemOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, option: QtC.QStyleOptionViewItem) callconv(.c) void ```
    pub fn OnInitViewItemOption(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnInitViewItemOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, e: QtC.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTableWidget_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, e: QtC.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTableWidget_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, e: QtC.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnPaintEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn HorizontalOffset(self: ?*anyopaque) i32 {
        return qtc.QTableWidget_HorizontalOffset(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseHorizontalOffset(self: ?*anyopaque) i32 {
        return qtc.QTableWidget_QBaseHorizontalOffset(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnHorizontalOffset(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnHorizontalOffset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn VerticalOffset(self: ?*anyopaque) i32 {
        return qtc.QTableWidget_VerticalOffset(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseVerticalOffset(self: ?*anyopaque) i32 {
        return qtc.QTableWidget_QBaseVerticalOffset(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnVerticalOffset(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnVerticalOffset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, cursorAction: qabstractitemview_enums.CursorAction, modifiers: flag of qnamespace_enums.KeyboardModifier ```
    pub fn MoveCursor(self: ?*anyopaque, cursorAction: i32, modifiers: i64) QtC.QModelIndex {
        return qtc.QTableWidget_MoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, cursorAction: qabstractitemview_enums.CursorAction, modifiers: flag of qnamespace_enums.KeyboardModifier ```
    pub fn QBaseMoveCursor(self: ?*anyopaque, cursorAction: i32, modifiers: i64) QtC.QModelIndex {
        return qtc.QTableWidget_QBaseMoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, cursorAction: qabstractitemview_enums.CursorAction, modifiers: flag of qnamespace_enums.KeyboardModifier) callconv(.c) QtC.QModelIndex ```
    pub fn OnMoveCursor(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i64) callconv(.c) QtC.QModelIndex) void {
        qtc.QTableWidget_OnMoveCursor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, rect: QtC.QRect, command: flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn SetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i32) void {
        qtc.QTableWidget_SetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, rect: QtC.QRect, command: flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn QBaseSetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i32) void {
        qtc.QTableWidget_QBaseSetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, rect: QtC.QRect, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void ```
    pub fn OnSetSelection(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnSetSelection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, selection: QtC.QItemSelection ```
    pub fn VisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QTableWidget_VisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, selection: QtC.QItemSelection ```
    pub fn QBaseVisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QTableWidget_QBaseVisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, selection: QtC.QItemSelection) callconv(.c) QtC.QRegion ```
    pub fn OnVisualRegionForSelection(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRegion) void {
        qtc.QTableWidget_OnVisualRegionForSelection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn SelectedIndexes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QTableWidget_SelectedIndexes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qtablewidget.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, allocator: std.mem.Allocator ```
    pub fn QBaseSelectedIndexes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QTableWidget_QBaseSelectedIndexes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qtablewidget.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) [*:null]QtC.QModelIndex ```
    pub fn OnSelectedIndexes(self: ?*anyopaque, slot: fn () callconv(.c) [*:null]QtC.QModelIndex) void {
        qtc.QTableWidget_OnSelectedIndexes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn UpdateGeometries(self: ?*anyopaque) void {
        qtc.QTableWidget_UpdateGeometries(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseUpdateGeometries(self: ?*anyopaque) void {
        qtc.QTableWidget_QBaseUpdateGeometries(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnUpdateGeometries(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QTableWidget_OnUpdateGeometries(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QTableWidget_ViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QTableWidget_QBaseViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnViewportSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QTableWidget_OnViewportSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, row: i32 ```
    pub fn SizeHintForRow(self: ?*anyopaque, row: i32) i32 {
        return qtc.QTableWidget_SizeHintForRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, row: i32 ```
    pub fn QBaseSizeHintForRow(self: ?*anyopaque, row: i32) i32 {
        return qtc.QTableWidget_QBaseSizeHintForRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, row: i32) callconv(.c) i32 ```
    pub fn OnSizeHintForRow(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QTableWidget_OnSizeHintForRow(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, column: i32 ```
    pub fn SizeHintForColumn(self: ?*anyopaque, column: i32) i32 {
        return qtc.QTableWidget_SizeHintForColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, column: i32 ```
    pub fn QBaseSizeHintForColumn(self: ?*anyopaque, column: i32) i32 {
        return qtc.QTableWidget_QBaseSizeHintForColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, column: i32) callconv(.c) i32 ```
    pub fn OnSizeHintForColumn(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QTableWidget_OnSizeHintForColumn(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, action: i32 ```
    pub fn VerticalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QTableWidget_VerticalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, action: i32 ```
    pub fn QBaseVerticalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QTableWidget_QBaseVerticalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, action: i32) callconv(.c) void ```
    pub fn OnVerticalScrollbarAction(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnVerticalScrollbarAction(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, action: i32 ```
    pub fn HorizontalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QTableWidget_HorizontalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, action: i32 ```
    pub fn QBaseHorizontalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QTableWidget_QBaseHorizontalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, action: i32) callconv(.c) void ```
    pub fn OnHorizontalScrollbarAction(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnHorizontalScrollbarAction(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn IsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QTableWidget_IsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn QBaseIsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QTableWidget_QBaseIsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, index: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnIsIndexHidden(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTableWidget_OnIsIndexHidden(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, selected: QtC.QItemSelection, deselected: QtC.QItemSelection ```
    pub fn SelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QTableWidget_SelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, selected: QtC.QItemSelection, deselected: QtC.QItemSelection ```
    pub fn QBaseSelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QTableWidget_QBaseSelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, selected: QtC.QItemSelection, deselected: QtC.QItemSelection) callconv(.c) void ```
    pub fn OnSelectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnSelectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, current: QtC.QModelIndex, previous: QtC.QModelIndex ```
    pub fn CurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QTableWidget_CurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, current: QtC.QModelIndex, previous: QtC.QModelIndex ```
    pub fn QBaseCurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QTableWidget_QBaseCurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, current: QtC.QModelIndex, previous: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnCurrentChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnCurrentChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, search: []const u8 ```
    pub fn KeyboardSearch(self: ?*anyopaque, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QTableWidget_KeyboardSearch(@ptrCast(self), search_str);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, search: []const u8 ```
    pub fn QBaseKeyboardSearch(self: ?*anyopaque, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QTableWidget_QBaseKeyboardSearch(@ptrCast(self), search_str);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, search: [*:0]const u8) callconv(.c) void ```
    pub fn OnKeyboardSearch(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QTableWidget_OnKeyboardSearch(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn ItemDelegateForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QTableWidget_ItemDelegateForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex ```
    pub fn QBaseItemDelegateForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QTableWidget_QBaseItemDelegateForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, index: QtC.QModelIndex) callconv(.c) QtC.QAbstractItemDelegate ```
    pub fn OnItemDelegateForIndex(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QAbstractItemDelegate) void {
        qtc.QTableWidget_OnItemDelegateForIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, query: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QTableWidget_InputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, query: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QTableWidget_QBaseInputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, query: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QTableWidget_OnInputMethodQuery(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QTableWidget_Reset(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseReset(self: ?*anyopaque) void {
        qtc.QTableWidget_QBaseReset(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnReset(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QTableWidget_OnReset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn SelectAll(self: ?*anyopaque) void {
        qtc.QTableWidget_SelectAll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseSelectAll(self: ?*anyopaque) void {
        qtc.QTableWidget_QBaseSelectAll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnSelectAll(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QTableWidget_OnSelectAll(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: []i32 ```
    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QTableWidget_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: []i32 ```
    pub fn QBaseDataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QTableWidget_QBaseDataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: [*:-1]i32) callconv(.c) void ```
    pub fn OnDataChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, [*:-1]i32) callconv(.c) void) void {
        qtc.QTableWidget_OnDataChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, parent: QtC.QModelIndex, start: i32, end: i32 ```
    pub fn RowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QTableWidget_RowsInserted(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, parent: QtC.QModelIndex, start: i32, end: i32 ```
    pub fn QBaseRowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QTableWidget_QBaseRowsInserted(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, parent: QtC.QModelIndex, start: i32, end: i32) callconv(.c) void ```
    pub fn OnRowsInserted(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnRowsInserted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, parent: QtC.QModelIndex, start: i32, end: i32 ```
    pub fn RowsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QTableWidget_RowsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, parent: QtC.QModelIndex, start: i32, end: i32 ```
    pub fn QBaseRowsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QTableWidget_QBaseRowsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, parent: QtC.QModelIndex, start: i32, end: i32) callconv(.c) void ```
    pub fn OnRowsAboutToBeRemoved(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnRowsAboutToBeRemoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn UpdateEditorData(self: ?*anyopaque) void {
        qtc.QTableWidget_UpdateEditorData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseUpdateEditorData(self: ?*anyopaque) void {
        qtc.QTableWidget_QBaseUpdateEditorData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnUpdateEditorData(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QTableWidget_OnUpdateEditorData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn UpdateEditorGeometries(self: ?*anyopaque) void {
        qtc.QTableWidget_UpdateEditorGeometries(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseUpdateEditorGeometries(self: ?*anyopaque) void {
        qtc.QTableWidget_QBaseUpdateEditorGeometries(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnUpdateEditorGeometries(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QTableWidget_OnUpdateEditorGeometries(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, value: i32 ```
    pub fn VerticalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QTableWidget_VerticalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, value: i32 ```
    pub fn QBaseVerticalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QTableWidget_QBaseVerticalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, value: i32) callconv(.c) void ```
    pub fn OnVerticalScrollbarValueChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnVerticalScrollbarValueChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, value: i32 ```
    pub fn HorizontalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QTableWidget_HorizontalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, value: i32 ```
    pub fn QBaseHorizontalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QTableWidget_QBaseHorizontalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, value: i32) callconv(.c) void ```
    pub fn OnHorizontalScrollbarValueChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnHorizontalScrollbarValueChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, editor: QtC.QWidget, hint: qabstractitemdelegate_enums.EndEditHint ```
    pub fn CloseEditor(self: ?*anyopaque, editor: ?*anyopaque, hint: i32) void {
        qtc.QTableWidget_CloseEditor(@ptrCast(self), @ptrCast(editor), @intCast(hint));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, editor: QtC.QWidget, hint: qabstractitemdelegate_enums.EndEditHint ```
    pub fn QBaseCloseEditor(self: ?*anyopaque, editor: ?*anyopaque, hint: i32) void {
        qtc.QTableWidget_QBaseCloseEditor(@ptrCast(self), @ptrCast(editor), @intCast(hint));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, editor: QtC.QWidget, hint: qabstractitemdelegate_enums.EndEditHint) callconv(.c) void ```
    pub fn OnCloseEditor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnCloseEditor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, editor: QtC.QWidget ```
    pub fn CommitData(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QTableWidget_CommitData(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, editor: QtC.QWidget ```
    pub fn QBaseCommitData(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QTableWidget_QBaseCommitData(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, editor: QtC.QWidget) callconv(.c) void ```
    pub fn OnCommitData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnCommitData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, editor: QtC.QObject ```
    pub fn EditorDestroyed(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QTableWidget_EditorDestroyed(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, editor: QtC.QObject ```
    pub fn QBaseEditorDestroyed(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QTableWidget_QBaseEditorDestroyed(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, editor: QtC.QObject) callconv(.c) void ```
    pub fn OnEditorDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnEditorDestroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: QtC.QEvent ```
    pub fn Edit2(self: ?*anyopaque, index: ?*anyopaque, trigger: i32, event: ?*anyopaque) bool {
        return qtc.QTableWidget_Edit2(@ptrCast(self), @ptrCast(index), @intCast(trigger), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: QtC.QEvent ```
    pub fn QBaseEdit2(self: ?*anyopaque, index: ?*anyopaque, trigger: i32, event: ?*anyopaque) bool {
        return qtc.QTableWidget_QBaseEdit2(@ptrCast(self), @ptrCast(index), @intCast(trigger), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, index: QtC.QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEdit2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTableWidget_OnEdit2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex, event: QtC.QEvent ```
    ///
    /// Returns: ``` flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn SelectionCommand(self: ?*anyopaque, index: ?*anyopaque, event: ?*anyopaque) i32 {
        return qtc.QTableWidget_SelectionCommand(@ptrCast(self), @ptrCast(index), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, index: QtC.QModelIndex, event: QtC.QEvent ```
    ///
    /// Returns: ``` flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn QBaseSelectionCommand(self: ?*anyopaque, index: ?*anyopaque, event: ?*anyopaque) i32 {
        return qtc.QTableWidget_QBaseSelectionCommand(@ptrCast(self), @ptrCast(index), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, index: QtC.QModelIndex, event: QtC.QEvent) callconv(.c) i32 ```
    pub fn OnSelectionCommand(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QTableWidget_OnSelectionCommand(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, supportedActions: flag of qnamespace_enums.DropAction ```
    pub fn StartDrag(self: ?*anyopaque, supportedActions: i32) void {
        qtc.QTableWidget_StartDrag(@ptrCast(self), @intCast(supportedActions));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, supportedActions: flag of qnamespace_enums.DropAction ```
    pub fn QBaseStartDrag(self: ?*anyopaque, supportedActions: i32) void {
        qtc.QTableWidget_QBaseStartDrag(@ptrCast(self), @intCast(supportedActions));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, supportedActions: flag of qnamespace_enums.DropAction) callconv(.c) void ```
    pub fn OnStartDrag(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnStartDrag(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QTableWidget_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QTableWidget_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, next: bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QTableWidget_OnFocusNextPrevChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QEvent ```
    pub fn ViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QTableWidget_ViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QEvent ```
    pub fn QBaseViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QTableWidget_QBaseViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnViewportEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTableWidget_OnViewportEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QDragEnterEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QDragEnterEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QDragEnterEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnDragEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QDragMoveEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QDragMoveEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QDragMoveEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnDragMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QDragLeaveEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QDragLeaveEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QDragLeaveEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnDragLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnResizeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnInputMethodEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, object: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QTableWidget_EventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, object: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QTableWidget_QBaseEventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, object: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTableWidget_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn MinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QTableWidget_MinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QTableWidget_QBaseMinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QTableWidget_OnMinimumSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QTableWidget_SizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QTableWidget_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QTableWidget_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, viewport: QtC.QWidget ```
    pub fn SetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QTableWidget_SetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, viewport: QtC.QWidget ```
    pub fn QBaseSetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QTableWidget_QBaseSetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, viewport: QtC.QWidget) callconv(.c) void ```
    pub fn OnSetupViewport(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnSetupViewport(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTableWidget_WheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTableWidget_QBaseWheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, param1: QtC.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTableWidget_ContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTableWidget_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, param1: QtC.QContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnContextMenuEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTableWidget_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTableWidget_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, param1: QtC.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnChangeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, option: QtC.QStyleOptionFrame ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QTableWidget_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, option: QtC.QStyleOptionFrame ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QTableWidget_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, option: QtC.QStyleOptionFrame) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnInitStyleOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QTableWidget_DevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.QTableWidget_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnDevType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QTableWidget_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, visible: bool ```
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QTableWidget_QBaseSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, visible: bool) callconv(.c) void ```
    pub fn OnSetVisible(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTableWidget_OnSetVisible(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QTableWidget_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QTableWidget_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QTableWidget_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QTableWidget_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QTableWidget_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QTableWidget_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QTableWidget_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QTableWidget_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QTableWidget_OnPaintEngine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QEnterEvent ```
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QEnterEvent ```
    pub fn QBaseEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QEnterEvent) callconv(.c) void ```
    pub fn OnEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QEvent ```
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QEvent ```
    pub fn QBaseLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnCloseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnTabletEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QActionEvent ```
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QActionEvent ```
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QActionEvent) callconv(.c) void ```
    pub fn OnActionEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnActionEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnShowEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnHideEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QTableWidget_NativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QTableWidget_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, eventType: [*:0]u8, message: ?*anyopaque, result: *isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QTableWidget_OnNativeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QTableWidget_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QTableWidget_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QTableWidget_OnMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QTableWidget_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QTableWidget_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnInitPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QTableWidget_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QTableWidget_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QTableWidget_OnRedirected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QTableWidget_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QTableWidget_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPainter) void {
        qtc.QTableWidget_OnSharedPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTableWidget_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QTableWidget_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QTableWidget_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QTableWidget_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QTableWidget_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, row: i32, oldIndex: i32, newIndex: i32 ```
    pub fn RowMoved(self: ?*anyopaque, row: i32, oldIndex: i32, newIndex: i32) void {
        qtc.QTableWidget_RowMoved(@ptrCast(self), @intCast(row), @intCast(oldIndex), @intCast(newIndex));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, row: i32, oldIndex: i32, newIndex: i32 ```
    pub fn QBaseRowMoved(self: ?*anyopaque, row: i32, oldIndex: i32, newIndex: i32) void {
        qtc.QTableWidget_QBaseRowMoved(@ptrCast(self), @intCast(row), @intCast(oldIndex), @intCast(newIndex));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, row: i32, oldIndex: i32, newIndex: i32) callconv(.c) void ```
    pub fn OnRowMoved(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnRowMoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, column: i32, oldIndex: i32, newIndex: i32 ```
    pub fn ColumnMoved(self: ?*anyopaque, column: i32, oldIndex: i32, newIndex: i32) void {
        qtc.QTableWidget_ColumnMoved(@ptrCast(self), @intCast(column), @intCast(oldIndex), @intCast(newIndex));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, column: i32, oldIndex: i32, newIndex: i32 ```
    pub fn QBaseColumnMoved(self: ?*anyopaque, column: i32, oldIndex: i32, newIndex: i32) void {
        qtc.QTableWidget_QBaseColumnMoved(@ptrCast(self), @intCast(column), @intCast(oldIndex), @intCast(newIndex));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, column: i32, oldIndex: i32, newIndex: i32) callconv(.c) void ```
    pub fn OnColumnMoved(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnColumnMoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowResized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, row: i32, oldHeight: i32, newHeight: i32 ```
    pub fn RowResized(self: ?*anyopaque, row: i32, oldHeight: i32, newHeight: i32) void {
        qtc.QTableWidget_RowResized(@ptrCast(self), @intCast(row), @intCast(oldHeight), @intCast(newHeight));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowResized)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, row: i32, oldHeight: i32, newHeight: i32 ```
    pub fn QBaseRowResized(self: ?*anyopaque, row: i32, oldHeight: i32, newHeight: i32) void {
        qtc.QTableWidget_QBaseRowResized(@ptrCast(self), @intCast(row), @intCast(oldHeight), @intCast(newHeight));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowResized)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, row: i32, oldHeight: i32, newHeight: i32) callconv(.c) void ```
    pub fn OnRowResized(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnRowResized(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnResized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, column: i32, oldWidth: i32, newWidth: i32 ```
    pub fn ColumnResized(self: ?*anyopaque, column: i32, oldWidth: i32, newWidth: i32) void {
        qtc.QTableWidget_ColumnResized(@ptrCast(self), @intCast(column), @intCast(oldWidth), @intCast(newWidth));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnResized)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, column: i32, oldWidth: i32, newWidth: i32 ```
    pub fn QBaseColumnResized(self: ?*anyopaque, column: i32, oldWidth: i32, newWidth: i32) void {
        qtc.QTableWidget_QBaseColumnResized(@ptrCast(self), @intCast(column), @intCast(oldWidth), @intCast(newWidth));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnResized)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, column: i32, oldWidth: i32, newWidth: i32) callconv(.c) void ```
    pub fn OnColumnResized(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnColumnResized(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, oldCount: i32, newCount: i32 ```
    pub fn RowCountChanged(self: ?*anyopaque, oldCount: i32, newCount: i32) void {
        qtc.QTableWidget_RowCountChanged(@ptrCast(self), @intCast(oldCount), @intCast(newCount));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, oldCount: i32, newCount: i32 ```
    pub fn QBaseRowCountChanged(self: ?*anyopaque, oldCount: i32, newCount: i32) void {
        qtc.QTableWidget_QBaseRowCountChanged(@ptrCast(self), @intCast(oldCount), @intCast(newCount));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, oldCount: i32, newCount: i32) callconv(.c) void ```
    pub fn OnRowCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnRowCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, oldCount: i32, newCount: i32 ```
    pub fn ColumnCountChanged(self: ?*anyopaque, oldCount: i32, newCount: i32) void {
        qtc.QTableWidget_ColumnCountChanged(@ptrCast(self), @intCast(oldCount), @intCast(newCount));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, oldCount: i32, newCount: i32 ```
    pub fn QBaseColumnCountChanged(self: ?*anyopaque, oldCount: i32, newCount: i32) void {
        qtc.QTableWidget_QBaseColumnCountChanged(@ptrCast(self), @intCast(oldCount), @intCast(newCount));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, oldCount: i32, newCount: i32) callconv(.c) void ```
    pub fn OnColumnCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnColumnCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qabstractitemview_enums.State ```
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QTableWidget_State(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qabstractitemview_enums.State ```
    pub fn QBaseState(self: ?*anyopaque) i32 {
        return qtc.QTableWidget_QBaseState(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnState(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, state: qabstractitemview_enums.State ```
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QTableWidget_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, state: qabstractitemview_enums.State ```
    pub fn QBaseSetState(self: ?*anyopaque, state: i32) void {
        qtc.QTableWidget_QBaseSetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, state: qabstractitemview_enums.State) callconv(.c) void ```
    pub fn OnSetState(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnSetState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ScheduleDelayedItemsLayout(self: ?*anyopaque) void {
        qtc.QTableWidget_ScheduleDelayedItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseScheduleDelayedItemsLayout(self: ?*anyopaque) void {
        qtc.QTableWidget_QBaseScheduleDelayedItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnScheduleDelayedItemsLayout(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QTableWidget_OnScheduleDelayedItemsLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ExecuteDelayedItemsLayout(self: ?*anyopaque) void {
        qtc.QTableWidget_ExecuteDelayedItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseExecuteDelayedItemsLayout(self: ?*anyopaque) void {
        qtc.QTableWidget_QBaseExecuteDelayedItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnExecuteDelayedItemsLayout(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QTableWidget_OnExecuteDelayedItemsLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, region: QtC.QRegion ```
    pub fn SetDirtyRegion(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QTableWidget_SetDirtyRegion(@ptrCast(self), @ptrCast(region));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, region: QtC.QRegion ```
    pub fn QBaseSetDirtyRegion(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QTableWidget_QBaseSetDirtyRegion(@ptrCast(self), @ptrCast(region));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, region: QtC.QRegion) callconv(.c) void ```
    pub fn OnSetDirtyRegion(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnSetDirtyRegion(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, dx: i32, dy: i32 ```
    pub fn ScrollDirtyRegion(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QTableWidget_ScrollDirtyRegion(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, dx: i32, dy: i32 ```
    pub fn QBaseScrollDirtyRegion(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QTableWidget_QBaseScrollDirtyRegion(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, dx: i32, dy: i32) callconv(.c) void ```
    pub fn OnScrollDirtyRegion(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnScrollDirtyRegion(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn DirtyRegionOffset(self: ?*anyopaque) QtC.QPoint {
        return qtc.QTableWidget_DirtyRegionOffset(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseDirtyRegionOffset(self: ?*anyopaque) QtC.QPoint {
        return qtc.QTableWidget_QBaseDirtyRegionOffset(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) QtC.QPoint ```
    pub fn OnDirtyRegionOffset(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPoint) void {
        qtc.QTableWidget_OnDirtyRegionOffset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn StartAutoScroll(self: ?*anyopaque) void {
        qtc.QTableWidget_StartAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseStartAutoScroll(self: ?*anyopaque) void {
        qtc.QTableWidget_QBaseStartAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnStartAutoScroll(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QTableWidget_OnStartAutoScroll(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn StopAutoScroll(self: ?*anyopaque) void {
        qtc.QTableWidget_StopAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseStopAutoScroll(self: ?*anyopaque) void {
        qtc.QTableWidget_QBaseStopAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnStopAutoScroll(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QTableWidget_OnStopAutoScroll(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn DoAutoScroll(self: ?*anyopaque) void {
        qtc.QTableWidget_DoAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseDoAutoScroll(self: ?*anyopaque) void {
        qtc.QTableWidget_QBaseDoAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnDoAutoScroll(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QTableWidget_OnDoAutoScroll(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qabstractitemview_enums.DropIndicatorPosition ```
    pub fn DropIndicatorPosition(self: ?*anyopaque) i32 {
        return qtc.QTableWidget_DropIndicatorPosition(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    ///
    /// Returns: ``` qabstractitemview_enums.DropIndicatorPosition ```
    pub fn QBaseDropIndicatorPosition(self: ?*anyopaque) i32 {
        return qtc.QTableWidget_QBaseDropIndicatorPosition(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnDropIndicatorPosition(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnDropIndicatorPosition(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QTableWidget_SetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn QBaseSetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QTableWidget_QBaseSetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void ```
    pub fn OnSetViewportMargins(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnSetViewportMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn ViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QTableWidget_ViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QTableWidget_QBaseViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) QtC.QMargins ```
    pub fn OnViewportMargins(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QMargins) void {
        qtc.QTableWidget_OnViewportMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QPainter ```
    pub fn DrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTableWidget_DrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, param1: QtC.QPainter ```
    pub fn QBaseDrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTableWidget_QBaseDrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, param1: QtC.QPainter) callconv(.c) void ```
    pub fn OnDrawFrame(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTableWidget_OnDrawFrame(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QTableWidget_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QTableWidget_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QTableWidget_OnUpdateMicroFocus(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Create(self: ?*anyopaque) void {
        qtc.QTableWidget_Create(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseCreate(self: ?*anyopaque) void {
        qtc.QTableWidget_QBaseCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnCreate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QTableWidget_OnCreate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.QTableWidget_Destroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseDestroy(self: ?*anyopaque) void {
        qtc.QTableWidget_QBaseDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnDestroy(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QTableWidget_OnDestroy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return qtc.QTableWidget_FocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseFocusNextChild(self: ?*anyopaque) bool {
        return qtc.QTableWidget_QBaseFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) bool ```
    pub fn OnFocusNextChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QTableWidget_OnFocusNextChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.QTableWidget_FocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseFocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.QTableWidget_QBaseFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) bool ```
    pub fn OnFocusPreviousChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QTableWidget_OnFocusPreviousChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QTableWidget_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QTableWidget_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QTableWidget_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QTableWidget_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QTableWidget_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTableWidget_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTableWidget_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTableWidget_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QTableWidget_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QTableWidget_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTableWidget_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QTableWidget_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QTableWidget_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.QTableWidget_OnGetDecodedMetricF(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QTableWidget, slot: fn (self: QtC.QTableWidget, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dtor.QTableWidget)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTableWidget ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTableWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtablewidget.html#types
pub const enums = struct {
    pub const ItemType = enum {
        pub const Type: i32 = 0;
        pub const UserType: i32 = 1000;
    };
};
