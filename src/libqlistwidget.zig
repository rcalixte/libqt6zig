const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractitemdelegate_enums = @import("libqabstractitemdelegate.zig").enums;
const qabstractitemview_enums = @import("libqabstractitemview.zig").enums;
const qabstractscrollarea_enums = @import("libqabstractscrollarea.zig").enums;
const qframe_enums = @import("libqframe.zig").enums;
const qitemselectionmodel_enums = @import("libqitemselectionmodel.zig").enums;
const qlistview_enums = @import("libqlistview.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qwidget_enums = @import("libqwidget.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qlistwidgetitem.html
pub const qlistwidgetitem = struct {
    /// New constructs a new QListWidgetItem object.
    ///
    ///
    pub fn New() QtC.QListWidgetItem {
        return qtc.QListWidgetItem_new();
    }

    /// New2 constructs a new QListWidgetItem object.
    ///
    /// ``` text: []const u8 ```
    pub fn New2(text: []const u8) QtC.QListWidgetItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QListWidgetItem_new2(text_str);
    }

    /// New3 constructs a new QListWidgetItem object.
    ///
    /// ``` icon: QtC.QIcon, text: []const u8 ```
    pub fn New3(icon: ?*anyopaque, text: []const u8) QtC.QListWidgetItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QListWidgetItem_new3(@ptrCast(icon), text_str);
    }

    /// New4 constructs a new QListWidgetItem object.
    ///
    /// ``` other: QtC.QListWidgetItem ```
    pub fn New4(other: ?*anyopaque) QtC.QListWidgetItem {
        return qtc.QListWidgetItem_new4(@ptrCast(other));
    }

    /// New5 constructs a new QListWidgetItem object.
    ///
    /// ``` listview: QtC.QListWidget ```
    pub fn New5(listview: ?*anyopaque) QtC.QListWidgetItem {
        return qtc.QListWidgetItem_new5(@ptrCast(listview));
    }

    /// New6 constructs a new QListWidgetItem object.
    ///
    /// ``` listview: QtC.QListWidget, typeVal: i32 ```
    pub fn New6(listview: ?*anyopaque, typeVal: i32) QtC.QListWidgetItem {
        return qtc.QListWidgetItem_new6(@ptrCast(listview), @intCast(typeVal));
    }

    /// New7 constructs a new QListWidgetItem object.
    ///
    /// ``` text: []const u8, listview: QtC.QListWidget ```
    pub fn New7(text: []const u8, listview: ?*anyopaque) QtC.QListWidgetItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QListWidgetItem_new7(text_str, @ptrCast(listview));
    }

    /// New8 constructs a new QListWidgetItem object.
    ///
    /// ``` text: []const u8, listview: QtC.QListWidget, typeVal: i32 ```
    pub fn New8(text: []const u8, listview: ?*anyopaque, typeVal: i32) QtC.QListWidgetItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QListWidgetItem_new8(text_str, @ptrCast(listview), @intCast(typeVal));
    }

    /// New9 constructs a new QListWidgetItem object.
    ///
    /// ``` icon: QtC.QIcon, text: []const u8, listview: QtC.QListWidget ```
    pub fn New9(icon: ?*anyopaque, text: []const u8, listview: ?*anyopaque) QtC.QListWidgetItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QListWidgetItem_new9(@ptrCast(icon), text_str, @ptrCast(listview));
    }

    /// New10 constructs a new QListWidgetItem object.
    ///
    /// ``` icon: QtC.QIcon, text: []const u8, listview: QtC.QListWidget, typeVal: i32 ```
    pub fn New10(icon: ?*anyopaque, text: []const u8, listview: ?*anyopaque, typeVal: i32) QtC.QListWidgetItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QListWidgetItem_new10(@ptrCast(icon), text_str, @ptrCast(listview), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#clone)
    ///
    /// ``` self: QtC.QListWidgetItem ```
    pub fn Clone(self: ?*anyopaque) QtC.QListWidgetItem {
        return qtc.QListWidgetItem_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QListWidgetItem, callback: *const fn () callconv(.c) QtC.QListWidgetItem ```
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QListWidgetItem) void {
        qtc.QListWidgetItem_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QListWidgetItem ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QListWidgetItem {
        return qtc.QListWidgetItem_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#listWidget)
    ///
    /// ``` self: QtC.QListWidgetItem ```
    pub fn ListWidget(self: ?*anyopaque) QtC.QListWidget {
        return qtc.QListWidgetItem_ListWidget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setSelected)
    ///
    /// ``` self: QtC.QListWidgetItem, selectVal: bool ```
    pub fn SetSelected(self: ?*anyopaque, selectVal: bool) void {
        qtc.QListWidgetItem_SetSelected(@ptrCast(self), selectVal);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#isSelected)
    ///
    /// ``` self: QtC.QListWidgetItem ```
    pub fn IsSelected(self: ?*anyopaque) bool {
        return qtc.QListWidgetItem_IsSelected(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setHidden)
    ///
    /// ``` self: QtC.QListWidgetItem, hide: bool ```
    pub fn SetHidden(self: ?*anyopaque, hide: bool) void {
        qtc.QListWidgetItem_SetHidden(@ptrCast(self), hide);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#isHidden)
    ///
    /// ``` self: QtC.QListWidgetItem ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QListWidgetItem_IsHidden(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#flags)
    ///
    /// ``` self: QtC.QListWidgetItem ```
    ///
    /// Returns: ``` flag of qnamespace_enums.ItemFlag ```
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.QListWidgetItem_Flags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setFlags)
    ///
    /// ``` self: QtC.QListWidgetItem, flags: flag of qnamespace_enums.ItemFlag ```
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QListWidgetItem_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#text)
    ///
    /// ``` self: QtC.QListWidgetItem, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QListWidgetItem_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidgetitem.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setText)
    ///
    /// ``` self: QtC.QListWidgetItem, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QListWidgetItem_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#icon)
    ///
    /// ``` self: QtC.QListWidgetItem ```
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QListWidgetItem_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setIcon)
    ///
    /// ``` self: QtC.QListWidgetItem, icon: QtC.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QListWidgetItem_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#statusTip)
    ///
    /// ``` self: QtC.QListWidgetItem, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QListWidgetItem_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidgetitem.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setStatusTip)
    ///
    /// ``` self: QtC.QListWidgetItem, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QListWidgetItem_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#toolTip)
    ///
    /// ``` self: QtC.QListWidgetItem, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QListWidgetItem_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidgetitem.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setToolTip)
    ///
    /// ``` self: QtC.QListWidgetItem, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QListWidgetItem_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#whatsThis)
    ///
    /// ``` self: QtC.QListWidgetItem, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QListWidgetItem_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidgetitem.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setWhatsThis)
    ///
    /// ``` self: QtC.QListWidgetItem, whatsThis: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QListWidgetItem_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#font)
    ///
    /// ``` self: QtC.QListWidgetItem ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QListWidgetItem_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setFont)
    ///
    /// ``` self: QtC.QListWidgetItem, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QListWidgetItem_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#textAlignment)
    ///
    /// ``` self: QtC.QListWidgetItem ```
    pub fn TextAlignment(self: ?*anyopaque) i32 {
        return qtc.QListWidgetItem_TextAlignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setTextAlignment)
    ///
    /// ``` self: QtC.QListWidgetItem, alignment: i32 ```
    pub fn SetTextAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QListWidgetItem_SetTextAlignment(@ptrCast(self), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setTextAlignment)
    ///
    /// ``` self: QtC.QListWidgetItem, alignment: qnamespace_enums.AlignmentFlag ```
    pub fn SetTextAlignment2(self: ?*anyopaque, alignment: i32) void {
        qtc.QListWidgetItem_SetTextAlignment2(@ptrCast(self), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setTextAlignment)
    ///
    /// ``` self: QtC.QListWidgetItem, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetTextAlignment3(self: ?*anyopaque, alignment: i32) void {
        qtc.QListWidgetItem_SetTextAlignment3(@ptrCast(self), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#background)
    ///
    /// ``` self: QtC.QListWidgetItem ```
    pub fn Background(self: ?*anyopaque) QtC.QBrush {
        return qtc.QListWidgetItem_Background(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setBackground)
    ///
    /// ``` self: QtC.QListWidgetItem, brush: QtC.QBrush ```
    pub fn SetBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QListWidgetItem_SetBackground(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#foreground)
    ///
    /// ``` self: QtC.QListWidgetItem ```
    pub fn Foreground(self: ?*anyopaque) QtC.QBrush {
        return qtc.QListWidgetItem_Foreground(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setForeground)
    ///
    /// ``` self: QtC.QListWidgetItem, brush: QtC.QBrush ```
    pub fn SetForeground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QListWidgetItem_SetForeground(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#checkState)
    ///
    /// ``` self: QtC.QListWidgetItem ```
    ///
    /// Returns: ``` qnamespace_enums.CheckState ```
    pub fn CheckState(self: ?*anyopaque) i32 {
        return qtc.QListWidgetItem_CheckState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setCheckState)
    ///
    /// ``` self: QtC.QListWidgetItem, state: qnamespace_enums.CheckState ```
    pub fn SetCheckState(self: ?*anyopaque, state: i32) void {
        qtc.QListWidgetItem_SetCheckState(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#sizeHint)
    ///
    /// ``` self: QtC.QListWidgetItem ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QListWidgetItem_SizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setSizeHint)
    ///
    /// ``` self: QtC.QListWidgetItem, size: QtC.QSize ```
    pub fn SetSizeHint(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QListWidgetItem_SetSizeHint(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#data)
    ///
    /// ``` self: QtC.QListWidgetItem, role: i32 ```
    pub fn Data(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QListWidgetItem_Data(@ptrCast(self), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QListWidgetItem, callback: *const fn (self: QtC.QListWidgetItem, role: i32) callconv(.c) QtC.QVariant ```
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QListWidgetItem_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#data)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QListWidgetItem, role: i32 ```
    pub fn QBaseData(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QListWidgetItem_QBaseData(@ptrCast(self), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setData)
    ///
    /// ``` self: QtC.QListWidgetItem, role: i32, value: QtC.QVariant ```
    pub fn SetData(self: ?*anyopaque, role: i32, value: ?*anyopaque) void {
        qtc.QListWidgetItem_SetData(@ptrCast(self), @intCast(role), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QListWidgetItem, callback: *const fn (self: QtC.QListWidgetItem, role: i32, value: QtC.QVariant) callconv(.c) void ```
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidgetItem_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QListWidgetItem, role: i32, value: QtC.QVariant ```
    pub fn QBaseSetData(self: ?*anyopaque, role: i32, value: ?*anyopaque) void {
        qtc.QListWidgetItem_QBaseSetData(@ptrCast(self), @intCast(role), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#operator-lt)
    ///
    /// ``` self: QtC.QListWidgetItem, other: QtC.QListWidgetItem ```
    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QListWidgetItem_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#operator-lt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QListWidgetItem, callback: *const fn (self: QtC.QListWidgetItem, other: QtC.QListWidgetItem) callconv(.c) bool ```
    pub fn OnOperatorLesser(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QListWidgetItem_OnOperatorLesser(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#operator-lt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QListWidgetItem, other: QtC.QListWidgetItem ```
    pub fn QBaseOperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QListWidgetItem_QBaseOperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#read)
    ///
    /// ``` self: QtC.QListWidgetItem, in: QtC.QDataStream ```
    pub fn Read(self: ?*anyopaque, in: ?*anyopaque) void {
        qtc.QListWidgetItem_Read(@ptrCast(self), @ptrCast(in));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#read)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QListWidgetItem, callback: *const fn (self: QtC.QListWidgetItem, in: QtC.QDataStream) callconv(.c) void ```
    pub fn OnRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidgetItem_OnRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#read)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QListWidgetItem, in: QtC.QDataStream ```
    pub fn QBaseRead(self: ?*anyopaque, in: ?*anyopaque) void {
        qtc.QListWidgetItem_QBaseRead(@ptrCast(self), @ptrCast(in));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#write)
    ///
    /// ``` self: QtC.QListWidgetItem, out: QtC.QDataStream ```
    pub fn Write(self: ?*anyopaque, out: ?*anyopaque) void {
        qtc.QListWidgetItem_Write(@ptrCast(self), @ptrCast(out));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#write)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QListWidgetItem, callback: *const fn (self: QtC.QListWidgetItem, out: QtC.QDataStream) callconv(.c) void ```
    pub fn OnWrite(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidgetItem_OnWrite(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#write)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QListWidgetItem, out: QtC.QDataStream ```
    pub fn QBaseWrite(self: ?*anyopaque, out: ?*anyopaque) void {
        qtc.QListWidgetItem_QBaseWrite(@ptrCast(self), @ptrCast(out));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#operator-eq)
    ///
    /// ``` self: QtC.QListWidgetItem, other: QtC.QListWidgetItem ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QListWidgetItem_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#type)
    ///
    /// ``` self: QtC.QListWidgetItem ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QListWidgetItem_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#dtor.QListWidgetItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QListWidgetItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QListWidgetItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qlistwidget.html
pub const qlistwidget = struct {
    /// New constructs a new QListWidget object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.QListWidget {
        return qtc.QListWidget_new(@ptrCast(parent));
    }

    /// New2 constructs a new QListWidget object.
    ///
    ///
    pub fn New2() QtC.QListWidget {
        return qtc.QListWidget_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QListWidget_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QListWidget, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QListWidget_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QListWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QListWidget_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QListWidget_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QListWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QListWidget_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QListWidget_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidget.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setSelectionModel)
    ///
    /// ``` self: QtC.QListWidget, selectionModel: QtC.QItemSelectionModel ```
    pub fn SetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QListWidget_SetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setSelectionModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, selectionModel: QtC.QItemSelectionModel) callconv(.c) void ```
    pub fn OnSetSelectionModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnSetSelectionModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setSelectionModel)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QListWidget, selectionModel: QtC.QItemSelectionModel ```
    pub fn QBaseSetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QListWidget_QBaseSetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#item)
    ///
    /// ``` self: QtC.QListWidget, row: i32 ```
    pub fn Item(self: ?*anyopaque, row: i32) QtC.QListWidgetItem {
        return qtc.QListWidget_Item(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#row)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem ```
    pub fn Row(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QListWidget_Row(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#insertItem)
    ///
    /// ``` self: QtC.QListWidget, row: i32, item: QtC.QListWidgetItem ```
    pub fn InsertItem(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        qtc.QListWidget_InsertItem(@ptrCast(self), @intCast(row), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#insertItem)
    ///
    /// ``` self: QtC.QListWidget, row: i32, label: []const u8 ```
    pub fn InsertItem2(self: ?*anyopaque, row: i32, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QListWidget_InsertItem2(@ptrCast(self), @intCast(row), label_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#insertItems)
    ///
    /// ``` self: QtC.QListWidget, row: i32, labels: [][]const u8, allocator: std.mem.Allocator ```
    pub fn InsertItems(self: ?*anyopaque, row: i32, labels: [][]const u8, allocator: std.mem.Allocator) void {
        var labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("qlistwidget.InsertItems: Memory allocation failed");
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
        qtc.QListWidget_InsertItems(@ptrCast(self), @intCast(row), labels_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#addItem)
    ///
    /// ``` self: QtC.QListWidget, label: []const u8 ```
    pub fn AddItem(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QListWidget_AddItem(@ptrCast(self), label_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#addItem)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem ```
    pub fn AddItem2(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_AddItem2(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#addItems)
    ///
    /// ``` self: QtC.QListWidget, labels: [][]const u8, allocator: std.mem.Allocator ```
    pub fn AddItems(self: ?*anyopaque, labels: [][]const u8, allocator: std.mem.Allocator) void {
        var labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("qlistwidget.AddItems: Memory allocation failed");
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
        qtc.QListWidget_AddItems(@ptrCast(self), labels_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#takeItem)
    ///
    /// ``` self: QtC.QListWidget, row: i32 ```
    pub fn TakeItem(self: ?*anyopaque, row: i32) QtC.QListWidgetItem {
        return qtc.QListWidget_TakeItem(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#count)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QListWidget_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentItem)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn CurrentItem(self: ?*anyopaque) QtC.QListWidgetItem {
        return qtc.QListWidget_CurrentItem(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentItem)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem ```
    pub fn SetCurrentItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_SetCurrentItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentItem)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem, command: flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn SetCurrentItem2(self: ?*anyopaque, item: ?*anyopaque, command: i32) void {
        qtc.QListWidget_SetCurrentItem2(@ptrCast(self), @ptrCast(item), @intCast(command));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentRow)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn CurrentRow(self: ?*anyopaque) i32 {
        return qtc.QListWidget_CurrentRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentRow)
    ///
    /// ``` self: QtC.QListWidget, row: i32 ```
    pub fn SetCurrentRow(self: ?*anyopaque, row: i32) void {
        qtc.QListWidget_SetCurrentRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentRow)
    ///
    /// ``` self: QtC.QListWidget, row: i32, command: flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn SetCurrentRow2(self: ?*anyopaque, row: i32, command: i32) void {
        qtc.QListWidget_SetCurrentRow2(@ptrCast(self), @intCast(row), @intCast(command));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemAt)
    ///
    /// ``` self: QtC.QListWidget, p: QtC.QPoint ```
    pub fn ItemAt(self: ?*anyopaque, p: ?*anyopaque) QtC.QListWidgetItem {
        return qtc.QListWidget_ItemAt(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemAt)
    ///
    /// ``` self: QtC.QListWidget, x: i32, y: i32 ```
    pub fn ItemAt2(self: ?*anyopaque, x: i32, y: i32) QtC.QListWidgetItem {
        return qtc.QListWidget_ItemAt2(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#visualItemRect)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem ```
    pub fn VisualItemRect(self: ?*anyopaque, item: ?*anyopaque) QtC.QRect {
        return qtc.QListWidget_VisualItemRect(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#sortItems)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn SortItems(self: ?*anyopaque) void {
        qtc.QListWidget_SortItems(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setSortingEnabled)
    ///
    /// ``` self: QtC.QListWidget, enable: bool ```
    pub fn SetSortingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QListWidget_SetSortingEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#isSortingEnabled)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IsSortingEnabled(self: ?*anyopaque) bool {
        return qtc.QListWidget_IsSortingEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#editItem)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem ```
    pub fn EditItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_EditItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#openPersistentEditor)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem ```
    pub fn OpenPersistentEditor(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_OpenPersistentEditor(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#closePersistentEditor)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem ```
    pub fn ClosePersistentEditor(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_ClosePersistentEditor(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#isPersistentEditorOpen)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem ```
    pub fn IsPersistentEditorOpen(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QListWidget_IsPersistentEditorOpen(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemWidget)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem ```
    pub fn ItemWidget(self: ?*anyopaque, item: ?*anyopaque) QtC.QWidget {
        return qtc.QListWidget_ItemWidget(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setItemWidget)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem, widget: QtC.QWidget ```
    pub fn SetItemWidget(self: ?*anyopaque, item: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QListWidget_SetItemWidget(@ptrCast(self), @ptrCast(item), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#removeItemWidget)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem ```
    pub fn RemoveItemWidget(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_RemoveItemWidget(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#selectedItems)
    ///
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn SelectedItems(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QListWidgetItem {
        const _arr: qtc.libqt_list = qtc.QListWidget_SelectedItems(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QListWidgetItem, _arr.len) catch @panic("qlistwidget.SelectedItems: Memory allocation failed");
        const _data: [*]QtC.QListWidgetItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#findItems)
    ///
    /// ``` self: QtC.QListWidget, text: []const u8, flags: flag of qnamespace_enums.MatchFlag, allocator: std.mem.Allocator ```
    pub fn FindItems(self: ?*anyopaque, text: []const u8, flags: i32, allocator: std.mem.Allocator) []QtC.QListWidgetItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QListWidget_FindItems(@ptrCast(self), text_str, @intCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QListWidgetItem, _arr.len) catch @panic("qlistwidget.FindItems: Memory allocation failed");
        const _data: [*]QtC.QListWidgetItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#items)
    ///
    /// ``` self: QtC.QListWidget, data: QtC.QMimeData, allocator: std.mem.Allocator ```
    pub fn Items(self: ?*anyopaque, data: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QListWidgetItem {
        const _arr: qtc.libqt_list = qtc.QListWidget_Items(@ptrCast(self), @ptrCast(data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QListWidgetItem, _arr.len) catch @panic("qlistwidget.Items: Memory allocation failed");
        const _data: [*]QtC.QListWidgetItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#indexFromItem)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem ```
    pub fn IndexFromItem(self: ?*anyopaque, item: ?*anyopaque) QtC.QModelIndex {
        return qtc.QListWidget_IndexFromItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemFromIndex)
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn ItemFromIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QListWidgetItem {
        return qtc.QListWidget_ItemFromIndex(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropEvent)
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#scrollToItem)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem ```
    pub fn ScrollToItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_ScrollToItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#clear)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QListWidget_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemPressed)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem ```
    pub fn ItemPressed(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_ItemPressed(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemPressed)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, item: QtC.QListWidgetItem) callconv(.c) void ```
    pub fn OnItemPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemPressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemClicked)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem ```
    pub fn ItemClicked(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_ItemClicked(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemClicked)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, item: QtC.QListWidgetItem) callconv(.c) void ```
    pub fn OnItemClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemDoubleClicked)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem ```
    pub fn ItemDoubleClicked(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_ItemDoubleClicked(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemDoubleClicked)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, item: QtC.QListWidgetItem) callconv(.c) void ```
    pub fn OnItemDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemDoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemActivated)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem ```
    pub fn ItemActivated(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_ItemActivated(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemActivated)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, item: QtC.QListWidgetItem) callconv(.c) void ```
    pub fn OnItemActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemActivated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemEntered)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem ```
    pub fn ItemEntered(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_ItemEntered(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemEntered)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, item: QtC.QListWidgetItem) callconv(.c) void ```
    pub fn OnItemEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemEntered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemChanged)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem ```
    pub fn ItemChanged(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QListWidget_ItemChanged(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemChanged)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, item: QtC.QListWidgetItem) callconv(.c) void ```
    pub fn OnItemChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentItemChanged)
    ///
    /// ``` self: QtC.QListWidget, current: QtC.QListWidgetItem, previous: QtC.QListWidgetItem ```
    pub fn CurrentItemChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QListWidget_CurrentItemChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentItemChanged)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, current: QtC.QListWidgetItem, previous: QtC.QListWidgetItem) callconv(.c) void ```
    pub fn OnCurrentItemChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_Connect_CurrentItemChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentTextChanged)
    ///
    /// ``` self: QtC.QListWidget, currentText: []const u8 ```
    pub fn CurrentTextChanged(self: ?*anyopaque, currentText: []const u8) void {
        const currentText_str = qtc.libqt_string{
            .len = currentText.len,
            .data = currentText.ptr,
        };
        qtc.QListWidget_CurrentTextChanged(@ptrCast(self), currentText_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentTextChanged)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, currentText: [*:0]const u8) callconv(.c) void ```
    pub fn OnCurrentTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QListWidget_Connect_CurrentTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentRowChanged)
    ///
    /// ``` self: QtC.QListWidget, currentRow: i32 ```
    pub fn CurrentRowChanged(self: ?*anyopaque, currentRow: i32) void {
        qtc.QListWidget_CurrentRowChanged(@ptrCast(self), @intCast(currentRow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentRowChanged)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, currentRow: i32) callconv(.c) void ```
    pub fn OnCurrentRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QListWidget_Connect_CurrentRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemSelectionChanged)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ItemSelectionChanged(self: ?*anyopaque) void {
        qtc.QListWidget_ItemSelectionChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemSelectionChanged)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget) callconv(.c) void ```
    pub fn OnItemSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemSelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#event)
    ///
    /// ``` self: QtC.QListWidget, e: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QListWidget_Event(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, e: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QListWidget_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#event)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QListWidget, e: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QListWidget_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeTypes)
    ///
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn MimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QListWidget_MimeTypes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qlistwidget.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qlistwidget.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) [*][*:0]const u8 ```
    pub fn OnMimeTypes(self: ?*anyopaque, callback: *const fn () callconv(.c) [*][*:0]const u8) void {
        qtc.QListWidget_OnMimeTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeTypes)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn QBaseMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QListWidget_QBaseMimeTypes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qlistwidget.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qlistwidget.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeData)
    ///
    /// ``` self: QtC.QListWidget, items: []QtC.QListWidgetItem ```
    pub fn MimeData(self: ?*anyopaque, items: []?*anyopaque) QtC.QMimeData {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return qtc.QListWidget_MimeData(@ptrCast(self), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, items: [*]QtC.QListWidgetItem) callconv(.c) QtC.QMimeData ```
    pub fn OnMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]?*anyopaque) callconv(.c) QtC.QMimeData) void {
        qtc.QListWidget_OnMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QListWidget, items: []QtC.QListWidgetItem ```
    pub fn QBaseMimeData(self: ?*anyopaque, items: []?*anyopaque) QtC.QMimeData {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return qtc.QListWidget_QBaseMimeData(@ptrCast(self), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropMimeData)
    ///
    /// ``` self: QtC.QListWidget, index: i32, data: QtC.QMimeData, action: qnamespace_enums.DropAction ```
    pub fn DropMimeData(self: ?*anyopaque, index: i32, data: ?*anyopaque, action: i32) bool {
        return qtc.QListWidget_DropMimeData(@ptrCast(self), @intCast(index), @ptrCast(data), @intCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropMimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, index: i32, data: QtC.QMimeData, action: qnamespace_enums.DropAction) callconv(.c) bool ```
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QListWidget_OnDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropMimeData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QListWidget, index: i32, data: QtC.QMimeData, action: qnamespace_enums.DropAction ```
    pub fn QBaseDropMimeData(self: ?*anyopaque, index: i32, data: ?*anyopaque, action: i32) bool {
        return qtc.QListWidget_QBaseDropMimeData(@ptrCast(self), @intCast(index), @ptrCast(data), @intCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#supportedDropActions)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn SupportedDropActions(self: ?*anyopaque) i32 {
        return qtc.QListWidget_SupportedDropActions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#supportedDropActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSupportedDropActions(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QListWidget_OnSupportedDropActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#supportedDropActions)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn QBaseSupportedDropActions(self: ?*anyopaque) i32 {
        return qtc.QListWidget_QBaseSupportedDropActions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QListWidget_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidget.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QListWidget_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidget.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#sortItems)
    ///
    /// ``` self: QtC.QListWidget, order: qnamespace_enums.SortOrder ```
    pub fn SortItems1(self: ?*anyopaque, order: i32) void {
        qtc.QListWidget_SortItems1(@ptrCast(self), @intCast(order));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#scrollToItem)
    ///
    /// ``` self: QtC.QListWidget, item: QtC.QListWidgetItem, hint: qabstractitemview_enums.ScrollHint ```
    pub fn ScrollToItem2(self: ?*anyopaque, item: ?*anyopaque, hint: i32) void {
        qtc.QListWidget_ScrollToItem2(@ptrCast(self), @ptrCast(item), @intCast(hint));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setMovement)
    ///
    /// ``` self: QtC.QListWidget, movement: qlistview_enums.Movement ```
    pub fn SetMovement(self: ?*anyopaque, movement: i32) void {
        qtc.QListView_SetMovement(@ptrCast(self), @intCast(movement));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#movement)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qlistview_enums.Movement ```
    pub fn Movement(self: ?*anyopaque) i32 {
        return qtc.QListView_Movement(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setFlow)
    ///
    /// ``` self: QtC.QListWidget, flow: qlistview_enums.Flow ```
    pub fn SetFlow(self: ?*anyopaque, flow: i32) void {
        qtc.QListView_SetFlow(@ptrCast(self), @intCast(flow));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#flow)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qlistview_enums.Flow ```
    pub fn Flow(self: ?*anyopaque) i32 {
        return qtc.QListView_Flow(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setWrapping)
    ///
    /// ``` self: QtC.QListWidget, enable: bool ```
    pub fn SetWrapping(self: ?*anyopaque, enable: bool) void {
        qtc.QListView_SetWrapping(@ptrCast(self), enable);
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isWrapping)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IsWrapping(self: ?*anyopaque) bool {
        return qtc.QListView_IsWrapping(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setResizeMode)
    ///
    /// ``` self: QtC.QListWidget, mode: qlistview_enums.ResizeMode ```
    pub fn SetResizeMode(self: ?*anyopaque, mode: i32) void {
        qtc.QListView_SetResizeMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeMode)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qlistview_enums.ResizeMode ```
    pub fn ResizeMode(self: ?*anyopaque) i32 {
        return qtc.QListView_ResizeMode(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setLayoutMode)
    ///
    /// ``` self: QtC.QListWidget, mode: qlistview_enums.LayoutMode ```
    pub fn SetLayoutMode(self: ?*anyopaque, mode: i32) void {
        qtc.QListView_SetLayoutMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#layoutMode)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qlistview_enums.LayoutMode ```
    pub fn LayoutMode(self: ?*anyopaque) i32 {
        return qtc.QListView_LayoutMode(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSpacing)
    ///
    /// ``` self: QtC.QListWidget, space: i32 ```
    pub fn SetSpacing(self: ?*anyopaque, space: i32) void {
        qtc.QListView_SetSpacing(@ptrCast(self), @intCast(space));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#spacing)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Spacing(self: ?*anyopaque) i32 {
        return qtc.QListView_Spacing(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setBatchSize)
    ///
    /// ``` self: QtC.QListWidget, batchSize: i32 ```
    pub fn SetBatchSize(self: ?*anyopaque, batchSize: i32) void {
        qtc.QListView_SetBatchSize(@ptrCast(self), @intCast(batchSize));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#batchSize)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn BatchSize(self: ?*anyopaque) i32 {
        return qtc.QListView_BatchSize(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setGridSize)
    ///
    /// ``` self: QtC.QListWidget, size: QtC.QSize ```
    pub fn SetGridSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QListView_SetGridSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#gridSize)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn GridSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QListView_GridSize(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setViewMode)
    ///
    /// ``` self: QtC.QListWidget, mode: qlistview_enums.ViewMode ```
    pub fn SetViewMode(self: ?*anyopaque, mode: i32) void {
        qtc.QListView_SetViewMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewMode)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qlistview_enums.ViewMode ```
    pub fn ViewMode(self: ?*anyopaque) i32 {
        return qtc.QListView_ViewMode(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#clearPropertyFlags)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ClearPropertyFlags(self: ?*anyopaque) void {
        qtc.QListView_ClearPropertyFlags(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isRowHidden)
    ///
    /// ``` self: QtC.QListWidget, row: i32 ```
    pub fn IsRowHidden(self: ?*anyopaque, row: i32) bool {
        return qtc.QListView_IsRowHidden(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRowHidden)
    ///
    /// ``` self: QtC.QListWidget, row: i32, hide: bool ```
    pub fn SetRowHidden(self: ?*anyopaque, row: i32, hide: bool) void {
        qtc.QListView_SetRowHidden(@ptrCast(self), @intCast(row), hide);
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setModelColumn)
    ///
    /// ``` self: QtC.QListWidget, column: i32 ```
    pub fn SetModelColumn(self: ?*anyopaque, column: i32) void {
        qtc.QListView_SetModelColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#modelColumn)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ModelColumn(self: ?*anyopaque) i32 {
        return qtc.QListView_ModelColumn(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setUniformItemSizes)
    ///
    /// ``` self: QtC.QListWidget, enable: bool ```
    pub fn SetUniformItemSizes(self: ?*anyopaque, enable: bool) void {
        qtc.QListView_SetUniformItemSizes(@ptrCast(self), enable);
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#uniformItemSizes)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn UniformItemSizes(self: ?*anyopaque) bool {
        return qtc.QListView_UniformItemSizes(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setWordWrap)
    ///
    /// ``` self: QtC.QListWidget, on: bool ```
    pub fn SetWordWrap(self: ?*anyopaque, on: bool) void {
        qtc.QListView_SetWordWrap(@ptrCast(self), on);
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wordWrap)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn WordWrap(self: ?*anyopaque) bool {
        return qtc.QListView_WordWrap(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelectionRectVisible)
    ///
    /// ``` self: QtC.QListWidget, show: bool ```
    pub fn SetSelectionRectVisible(self: ?*anyopaque, show: bool) void {
        qtc.QListView_SetSelectionRectVisible(@ptrCast(self), show);
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isSelectionRectVisible)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IsSelectionRectVisible(self: ?*anyopaque) bool {
        return qtc.QListView_IsSelectionRectVisible(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setItemAlignment)
    ///
    /// ``` self: QtC.QListWidget, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetItemAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QListView_SetItemAlignment(@ptrCast(self), @intCast(alignment));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#itemAlignment)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn ItemAlignment(self: ?*anyopaque) i32 {
        return qtc.QListView_ItemAlignment(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
    ///
    /// ``` self: QtC.QListWidget, indexes: []QtC.QModelIndex ```
    pub fn IndexesMoved(self: ?*anyopaque, indexes: []QtC.QModelIndex) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        qtc.QListView_IndexesMoved(@ptrCast(self), indexes_list);
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, indexes: [*]QtC.QModelIndex) callconv(.c) void ```
    pub fn OnIndexesMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QModelIndex) callconv(.c) void) void {
        qtc.QListView_Connect_IndexesMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
    ///
    /// ``` self: QtC.QListWidget, model: QtC.QAbstractItemModel ```
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QAbstractItemView_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, model: QtC.QAbstractItemModel) callconv(.c) void ```
    pub fn OnSetModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QListWidget, model: QtC.QAbstractItemModel ```
    pub fn QBaseSetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseSetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Model(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QAbstractItemView_Model(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn SelectionModel(self: ?*anyopaque) QtC.QItemSelectionModel {
        return qtc.QAbstractItemView_SelectionModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
    ///
    /// ``` self: QtC.QListWidget, delegate: QtC.QAbstractItemDelegate ```
    pub fn SetItemDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        qtc.QAbstractItemView_SetItemDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ItemDelegate(self: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegate(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
    ///
    /// ``` self: QtC.QListWidget, mode: qabstractitemview_enums.SelectionMode ```
    pub fn SetSelectionMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetSelectionMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qabstractitemview_enums.SelectionMode ```
    pub fn SelectionMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_SelectionMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
    ///
    /// ``` self: QtC.QListWidget, behavior: qabstractitemview_enums.SelectionBehavior ```
    pub fn SetSelectionBehavior(self: ?*anyopaque, behavior: i32) void {
        qtc.QAbstractItemView_SetSelectionBehavior(@ptrCast(self), @intCast(behavior));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qabstractitemview_enums.SelectionBehavior ```
    pub fn SelectionBehavior(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_SelectionBehavior(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn CurrentIndex(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemView_CurrentIndex(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn RootIndex(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemView_RootIndex(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
    ///
    /// ``` self: QtC.QListWidget, triggers: flag of qabstractitemview_enums.EditTrigger ```
    pub fn SetEditTriggers(self: ?*anyopaque, triggers: i32) void {
        qtc.QAbstractItemView_SetEditTriggers(@ptrCast(self), @intCast(triggers));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` flag of qabstractitemview_enums.EditTrigger ```
    pub fn EditTriggers(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_EditTriggers(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
    ///
    /// ``` self: QtC.QListWidget, mode: qabstractitemview_enums.ScrollMode ```
    pub fn SetVerticalScrollMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetVerticalScrollMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qabstractitemview_enums.ScrollMode ```
    pub fn VerticalScrollMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_VerticalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ResetVerticalScrollMode(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ResetVerticalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
    ///
    /// ``` self: QtC.QListWidget, mode: qabstractitemview_enums.ScrollMode ```
    pub fn SetHorizontalScrollMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetHorizontalScrollMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qabstractitemview_enums.ScrollMode ```
    pub fn HorizontalScrollMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_HorizontalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ResetHorizontalScrollMode(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ResetHorizontalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
    ///
    /// ``` self: QtC.QListWidget, enable: bool ```
    pub fn SetAutoScroll(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetAutoScroll(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn HasAutoScroll(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_HasAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
    ///
    /// ``` self: QtC.QListWidget, margin: i32 ```
    pub fn SetAutoScrollMargin(self: ?*anyopaque, margin: i32) void {
        qtc.QAbstractItemView_SetAutoScrollMargin(@ptrCast(self), @intCast(margin));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn AutoScrollMargin(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_AutoScrollMargin(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
    ///
    /// ``` self: QtC.QListWidget, enable: bool ```
    pub fn SetTabKeyNavigation(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetTabKeyNavigation(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn TabKeyNavigation(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_TabKeyNavigation(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
    ///
    /// ``` self: QtC.QListWidget, enable: bool ```
    pub fn SetDropIndicatorShown(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetDropIndicatorShown(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ShowDropIndicator(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_ShowDropIndicator(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
    ///
    /// ``` self: QtC.QListWidget, enable: bool ```
    pub fn SetDragEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetDragEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn DragEnabled(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_DragEnabled(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
    ///
    /// ``` self: QtC.QListWidget, overwrite: bool ```
    pub fn SetDragDropOverwriteMode(self: ?*anyopaque, overwrite: bool) void {
        qtc.QAbstractItemView_SetDragDropOverwriteMode(@ptrCast(self), overwrite);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn DragDropOverwriteMode(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_DragDropOverwriteMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
    ///
    /// ``` self: QtC.QListWidget, behavior: qabstractitemview_enums.DragDropMode ```
    pub fn SetDragDropMode(self: ?*anyopaque, behavior: i32) void {
        qtc.QAbstractItemView_SetDragDropMode(@ptrCast(self), @intCast(behavior));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qabstractitemview_enums.DragDropMode ```
    pub fn DragDropMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_DragDropMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
    ///
    /// ``` self: QtC.QListWidget, dropAction: qnamespace_enums.DropAction ```
    pub fn SetDefaultDropAction(self: ?*anyopaque, dropAction: i32) void {
        qtc.QAbstractItemView_SetDefaultDropAction(@ptrCast(self), @intCast(dropAction));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qnamespace_enums.DropAction ```
    pub fn DefaultDropAction(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_DefaultDropAction(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
    ///
    /// ``` self: QtC.QListWidget, enable: bool ```
    pub fn SetAlternatingRowColors(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetAlternatingRowColors(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn AlternatingRowColors(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_AlternatingRowColors(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
    ///
    /// ``` self: QtC.QListWidget, size: QtC.QSize ```
    pub fn SetIconSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QAbstractItemView_SetIconSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IconSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractItemView_IconSize(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
    ///
    /// ``` self: QtC.QListWidget, mode: qnamespace_enums.TextElideMode ```
    pub fn SetTextElideMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetTextElideMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qnamespace_enums.TextElideMode ```
    pub fn TextElideMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_TextElideMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn SizeHintForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractItemView_SizeHintForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex, widget: QtC.QWidget ```
    pub fn SetIndexWidget(self: ?*anyopaque, index: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractItemView_SetIndexWidget(@ptrCast(self), @ptrCast(index), @ptrCast(widget));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn IndexWidget(self: ?*anyopaque, index: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractItemView_IndexWidget(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
    ///
    /// ``` self: QtC.QListWidget, row: i32, delegate: QtC.QAbstractItemDelegate ```
    pub fn SetItemDelegateForRow(self: ?*anyopaque, row: i32, delegate: ?*anyopaque) void {
        qtc.QAbstractItemView_SetItemDelegateForRow(@ptrCast(self), @intCast(row), @ptrCast(delegate));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
    ///
    /// ``` self: QtC.QListWidget, row: i32 ```
    pub fn ItemDelegateForRow(self: ?*anyopaque, row: i32) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegateForRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
    ///
    /// ``` self: QtC.QListWidget, column: i32, delegate: QtC.QAbstractItemDelegate ```
    pub fn SetItemDelegateForColumn(self: ?*anyopaque, column: i32, delegate: ?*anyopaque) void {
        qtc.QAbstractItemView_SetItemDelegateForColumn(@ptrCast(self), @intCast(column), @ptrCast(delegate));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
    ///
    /// ``` self: QtC.QListWidget, column: i32 ```
    pub fn ItemDelegateForColumn(self: ?*anyopaque, column: i32) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegateForColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn ItemDelegate2(self: ?*anyopaque, index: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegate2(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn Edit(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Edit(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ClearSelection(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ClearSelection(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn SetCurrentIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_SetCurrentIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ScrollToTop(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ScrollToTop(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ScrollToBottom(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ScrollToBottom(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn Update(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Update(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn Pressed(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Pressed(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Pressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn Clicked(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Clicked(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn DoubleClicked(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_DoubleClicked(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_DoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn Activated(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Activated(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Activated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn Entered(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Entered(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Entered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ViewportEntered(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ViewportEntered(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget) callconv(.c) void ```
    pub fn OnViewportEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_ViewportEntered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ``` self: QtC.QListWidget, size: QtC.QSize ```
    pub fn IconSizeChanged(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QAbstractItemView_IconSizeChanged(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, size: QtC.QSize) callconv(.c) void ```
    pub fn OnIconSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_IconSizeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qnamespace_enums.ScrollBarPolicy ```
    pub fn VerticalScrollBarPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ``` self: QtC.QListWidget, verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetVerticalScrollBarPolicy(self: ?*anyopaque, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self), @intCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn VerticalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ``` self: QtC.QListWidget, scrollbar: QtC.QScrollBar ```
    pub fn SetVerticalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qnamespace_enums.ScrollBarPolicy ```
    pub fn HorizontalScrollBarPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ``` self: QtC.QListWidget, horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetHorizontalScrollBarPolicy(self: ?*anyopaque, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self), @intCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn HorizontalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ``` self: QtC.QListWidget, scrollbar: QtC.QScrollBar ```
    pub fn SetHorizontalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn CornerWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ``` self: QtC.QListWidget, widget: QtC.QWidget ```
    pub fn SetCornerWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ``` self: QtC.QListWidget, widget: QtC.QWidget, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn AddScrollBarWidget(self: ?*anyopaque, widget: ?*anyopaque, alignment: i32) void {
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self), @ptrCast(widget), @intCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ``` self: QtC.QListWidget, alignment: flag of qnamespace_enums.AlignmentFlag, allocator: std.mem.Allocator ```
    pub fn ScrollBarWidgets(self: ?*anyopaque, alignment: i32, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self), @intCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("qlistwidget.ScrollBarWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Viewport(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_Viewport(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ``` self: QtC.QListWidget, widget: QtC.QWidget ```
    pub fn SetViewport(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn MaximumViewportSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qabstractscrollarea_enums.SizeAdjustPolicy ```
    pub fn SizeAdjustPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ``` self: QtC.QListWidget, policy: qabstractscrollarea_enums.SizeAdjustPolicy ```
    pub fn SetSizeAdjustPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn FrameStyle(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ``` self: QtC.QListWidget, frameStyle: i32 ```
    pub fn SetFrameStyle(self: ?*anyopaque, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self), @intCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn FrameWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qframe_enums.Shape ```
    pub fn FrameShape(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ``` self: QtC.QListWidget, frameShape: qframe_enums.Shape ```
    pub fn SetFrameShape(self: ?*anyopaque, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self), @intCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qframe_enums.Shadow ```
    pub fn FrameShadow(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ``` self: QtC.QListWidget, frameShadow: qframe_enums.Shadow ```
    pub fn SetFrameShadow(self: ?*anyopaque, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self), @intCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ``` self: QtC.QListWidget, lineWidth: i32 ```
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self), @intCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ``` self: QtC.QListWidget, midLineWidth: i32 ```
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self), @intCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn FrameRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QFrame_FrameRect(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ``` self: QtC.QListWidget, frameRect: QtC.QRect ```
    pub fn SetFrameRect(self: ?*anyopaque, frameRect: ?*anyopaque) void {
        qtc.QFrame_SetFrameRect(@ptrCast(self), @ptrCast(frameRect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn WinId(self: ?*anyopaque) usize {
        return qtc.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn CreateWinId(self: ?*anyopaque) void {
        qtc.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ``` self: QtC.QListWidget, style: QtC.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return qtc.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qnamespace_enums.WindowModality ```
    pub fn WindowModality(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ``` self: QtC.QListWidget, windowModality: qnamespace_enums.WindowModality ```
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QWidget ```
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ``` self: QtC.QListWidget, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ``` self: QtC.QListWidget, disabled: bool ```
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ``` self: QtC.QListWidget, windowModified: bool ```
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn NormalGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn FrameSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ChildrenRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ChildrenRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.QListWidget, minimumSize: QtC.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        qtc.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.QListWidget, minw: i32, minh: i32 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self), @intCast(minw), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.QListWidget, maximumSize: QtC.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        qtc.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.QListWidget, maxw: i32, maxh: i32 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self), @intCast(maxw), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ``` self: QtC.QListWidget, minw: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self), @intCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ``` self: QtC.QListWidget, minh: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ``` self: QtC.QListWidget, maxw: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self), @intCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ``` self: QtC.QListWidget, maxh: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn SizeIncrement(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.QListWidget, sizeIncrement: QtC.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        qtc.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.QListWidget, w: i32, h: i32 ```
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn BaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.QListWidget, baseSize: QtC.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        qtc.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.QListWidget, basew: i32, baseh: i32 ```
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self), @intCast(basew), @intCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.QListWidget, fixedSize: QtC.QSize ```
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        qtc.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.QListWidget, w: i32, h: i32 ```
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ``` self: QtC.QListWidget, w: i32 ```
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ``` self: QtC.QListWidget, h: i32 ```
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QPoint ```
    pub fn MapToGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QPoint ```
    pub fn MapFromGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QPoint ```
    pub fn MapToParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QPoint ```
    pub fn MapFromParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Window(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn NativeParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ``` self: QtC.QListWidget, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ``` self: QtC.QListWidget, backgroundRole: qpalette_enums.ColorRole ```
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self), @intCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn BackgroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ``` self: QtC.QListWidget, foregroundRole: qpalette_enums.ColorRole ```
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self), @intCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn ForegroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ``` self: QtC.QListWidget, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn FontInfo(self: ?*anyopaque) QtC.QFontInfo {
        return qtc.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ``` self: QtC.QListWidget, cursor: QtC.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ``` self: QtC.QListWidget, enable: bool ```
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ``` self: QtC.QListWidget, enable: bool ```
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.QListWidget, mask: QtC.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.QListWidget, mask: QtC.QRegion ```
    pub fn SetMask2(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask2(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ClearMask(self: ?*anyopaque) void {
        qtc.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QListWidget, target: QtC.QPaintDevice ```
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QListWidget, painter: QtC.QPainter ```
    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QWidget_Render2(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Grab(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ``` self: QtC.QListWidget, effect: QtC.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.QListWidget, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ``` self: QtC.QListWidget, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ``` self: QtC.QListWidget, windowTitle: []const u8 ```
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
    /// ``` self: QtC.QListWidget, styleSheet: []const u8 ```
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
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StyleSheet(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidget.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidget.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ``` self: QtC.QListWidget, icon: QtC.QIcon ```
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn WindowIcon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ``` self: QtC.QListWidget, windowIconText: []const u8 ```
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
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn WindowIconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowIconText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidget.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ``` self: QtC.QListWidget, windowRole: []const u8 ```
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
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowRole(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidget.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ``` self: QtC.QListWidget, filePath: []const u8 ```
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
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn WindowFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidget.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ``` self: QtC.QListWidget, level: f64 ```
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ``` self: QtC.QListWidget, toolTip: []const u8 ```
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
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidget.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ``` self: QtC.QListWidget, msec: i32 ```
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ``` self: QtC.QListWidget, statusTip: []const u8 ```
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
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidget.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ``` self: QtC.QListWidget, whatsThis: []const u8 ```
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
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidget.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn AccessibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidget.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ``` self: QtC.QListWidget, name: []const u8 ```
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
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidget.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ``` self: QtC.QListWidget, description: []const u8 ```
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
    /// ``` self: QtC.QListWidget, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ``` self: QtC.QListWidget, locale: QtC.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn UnsetLocale(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ActivateWindow(self: ?*anyopaque) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.QListWidget, reason: qnamespace_enums.FocusReason ```
    pub fn SetFocus2(self: ?*anyopaque, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qnamespace_enums.FocusPolicy ```
    pub fn FocusPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ``` self: QtC.QListWidget, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ``` self: QtC.QListWidget ```
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
    /// ``` self: QtC.QListWidget, focusProxy: QtC.QWidget ```
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        qtc.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn FocusProxy(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qnamespace_enums.ContextMenuPolicy ```
    pub fn ContextMenuPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ``` self: QtC.QListWidget, policy: qnamespace_enums.ContextMenuPolicy ```
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QCursor ```
    pub fn GrabMouse2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_GrabMouse2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.QListWidget, key: QtC.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return qtc.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ``` self: QtC.QListWidget, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.QListWidget, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.QListWidget, id: i32 ```
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
    /// ``` self: QtC.QListWidget ```
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ``` self: QtC.QListWidget, enable: bool ```
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn GraphicsProxyWidget(self: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Repaint(self: ?*anyopaque) void {
        qtc.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QListWidget, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QRect ```
    pub fn Update3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QRegion ```
    pub fn Update4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QListWidget, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QRect ```
    pub fn Repaint3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QRegion ```
    pub fn Repaint4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ``` self: QtC.QListWidget, hidden: bool ```
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        qtc.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Raise(self: ?*anyopaque) void {
        qtc.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Lower(self: ?*anyopaque) void {
        qtc.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QWidget ```
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.QListWidget, x: i32, y: i32 ```
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QPoint ```
    pub fn Move2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Move2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.QListWidget, w: i32, h: i32 ```
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QSize ```
    pub fn Resize2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Resize2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.QListWidget, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.QListWidget, geometry: QtC.QRect ```
    pub fn SetGeometry2(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidget_SetGeometry2(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn SaveGeometry(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qlistwidget.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ``` self: QtC.QListWidget, geometry: []u8 ```
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
    /// ``` self: QtC.QListWidget ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QWidget ```
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowState ```
    pub fn WindowState(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ``` self: QtC.QListWidget, state: flag of qnamespace_enums.WindowState ```
    pub fn SetWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ``` self: QtC.QListWidget, state: flag of qnamespace_enums.WindowState ```
    pub fn OverrideWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.QListWidget, sizePolicy: QtC.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: QtC.QSizePolicy) void {
        qtc.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.QListWidget, horizontal: qsizepolicy_enums.Policy, vertical: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self), @intCast(horizontal), @intCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn VisibleRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.QListWidget, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.QListWidget, margins: QtC.QMargins ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ``` self: QtC.QListWidget, layout: QtC.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.QListWidget, parent: QtC.QWidget ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.QListWidget, parent: QtC.QWidget, f: flag of qnamespace_enums.WindowType ```
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i64) void {
        qtc.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @intCast(f));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.QListWidget, dx: i32, dy: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.QListWidget, dx: i32, dy: i32, param3: QtC.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        qtc.QWidget_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn FocusWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn NextInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn PreviousInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ``` self: QtC.QListWidget, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QListWidget, action: QtC.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ``` self: QtC.QListWidget, actions: []QtC.QAction ```
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
    /// ``` self: QtC.QListWidget, before: QtC.QAction, actions: []QtC.QAction ```
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
    /// ``` self: QtC.QListWidget, before: QtC.QAction, action: QtC.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ``` self: QtC.QListWidget, action: QtC.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("qlistwidget.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QListWidget, text: []const u8 ```
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
    /// ``` self: QtC.QListWidget, icon: QtC.QIcon, text: []const u8 ```
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
    /// ``` self: QtC.QListWidget, text: []const u8, shortcut: QtC.QKeySequence ```
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
    /// ``` self: QtC.QListWidget, icon: QtC.QIcon, text: []const u8, shortcut: QtC.QKeySequence ```
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
    /// ``` self: QtC.QListWidget ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ``` self: QtC.QListWidget, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowType ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.QListWidget, param1: qnamespace_enums.WindowType ```
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i64) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ``` self: QtC.QListWidget, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ``` self: QtC.QListWidget ```
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
    /// ``` self: QtC.QListWidget, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QWidget {
        return qtc.QWidget_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QListWidget, p: QtC.QPoint ```
    pub fn ChildAt2(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt2(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QListWidget, p: QtC.QPointF ```
    pub fn ChildAt3(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt3(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.QListWidget, param1: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ``` self: QtC.QListWidget, param1: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn EnsurePolished(self: ?*anyopaque) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ``` self: QtC.QListWidget, child: QtC.QWidget ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ``` self: QtC.QListWidget, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn BackingStore(self: ?*anyopaque) QtC.QBackingStore {
        return qtc.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn WindowHandle(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ``` self: QtC.QListWidget, screen: QtC.QScreen ```
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
    /// ``` self: QtC.QListWidget, title: []const u8 ```
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
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, title: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.QListWidget, icon: QtC.QIcon ```
    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, icon: QtC.QIcon) callconv(.c) void ```
    pub fn OnWindowIconChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.QListWidget, iconText: []const u8 ```
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
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, iconText: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowIconTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.QListWidget, pos: QtC.QPoint ```
    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, pos: QtC.QPoint) callconv(.c) void ```
    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` flag of qnamespace_enums.InputMethodHint ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ``` self: QtC.QListWidget, hints: flag of qnamespace_enums.InputMethodHint ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QListWidget, target: QtC.QPaintDevice, targetOffset: QtC.QPoint ```
    pub fn Render22(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render22(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QListWidget, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QListWidget, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QListWidget, painter: QtC.QPainter, targetOffset: QtC.QPoint ```
    pub fn Render23(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render23(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QListWidget, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QListWidget, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.QListWidget, rectangle: QtC.QRect ```
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.QListWidget, typeVal: qnamespace_enums.GestureType, flags: flag of qnamespace_enums.GestureFlag ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.QListWidget, key: QtC.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i32) i32 {
        return qtc.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @intCast(context));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.QListWidget, id: i32, enable: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.QListWidget, id: i32, enable: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.QListWidget, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.QListWidget, param1: qnamespace_enums.WidgetAttribute, on: bool ```
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
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlistwidget.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QListWidget, name: []const u8 ```
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
    /// ``` self: QtC.QListWidget ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QListWidget, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QListWidget, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QListWidget, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QListWidget, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QListWidget, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qlistwidget.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QListWidget, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QListWidget, obj: QtC.QObject ```
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
    /// ``` self: QtC.QListWidget, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QListWidget ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QListWidget, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QListWidget, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qlistwidget.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qlistwidget.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QListWidget, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QListWidget, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QListWidget, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QListWidget, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.QListWidget ```
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

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn VisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QListWidget_VisualRect(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn QBaseVisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QListWidget_QBaseVisualRect(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, index: QtC.QModelIndex) callconv(.c) QtC.QRect ```
    pub fn OnVisualRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QListWidget_OnVisualRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex, hint: qabstractitemview_enums.ScrollHint ```
    pub fn ScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QListWidget_ScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex, hint: qabstractitemview_enums.ScrollHint ```
    pub fn QBaseScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QListWidget_QBaseScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, index: QtC.QModelIndex, hint: qabstractitemview_enums.ScrollHint) callconv(.c) void ```
    pub fn OnScrollTo(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QListWidget_OnScrollTo(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, p: QtC.QPoint ```
    pub fn IndexAt(self: ?*anyopaque, p: ?*anyopaque) QtC.QModelIndex {
        return qtc.QListWidget_IndexAt(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, p: QtC.QPoint ```
    pub fn QBaseIndexAt(self: ?*anyopaque, p: ?*anyopaque) QtC.QModelIndex {
        return qtc.QListWidget_QBaseIndexAt(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, p: QtC.QPoint) callconv(.c) QtC.QModelIndex ```
    pub fn OnIndexAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QListWidget_OnIndexAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn DoItemsLayout(self: ?*anyopaque) void {
        qtc.QListWidget_DoItemsLayout(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseDoItemsLayout(self: ?*anyopaque) void {
        qtc.QListWidget_QBaseDoItemsLayout(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) void ```
    pub fn OnDoItemsLayout(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnDoItemsLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QListWidget_Reset(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseReset(self: ?*anyopaque) void {
        qtc.QListWidget_QBaseReset(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) void ```
    pub fn OnReset(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn SetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QListWidget_SetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn QBaseSetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QListWidget_QBaseSetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnSetRootIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnSetRootIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, dx: i32, dy: i32 ```
    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QListWidget_ScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, dx: i32, dy: i32 ```
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QListWidget_QBaseScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, dx: i32, dy: i32) callconv(.c) void ```
    pub fn OnScrollContentsBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QListWidget_OnScrollContentsBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: []i32 ```
    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QListWidget_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: []i32 ```
    pub fn QBaseDataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QListWidget_QBaseDataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: [*:-1]i32) callconv(.c) void ```
    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, [*:-1]i32) callconv(.c) void) void {
        qtc.QListWidget_OnDataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, parent: QtC.QModelIndex, start: i32, end: i32 ```
    pub fn RowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QListWidget_RowsInserted(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, parent: QtC.QModelIndex, start: i32, end: i32 ```
    pub fn QBaseRowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QListWidget_QBaseRowsInserted(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, parent: QtC.QModelIndex, start: i32, end: i32) callconv(.c) void ```
    pub fn OnRowsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QListWidget_OnRowsInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, parent: QtC.QModelIndex, start: i32, end: i32 ```
    pub fn RowsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QListWidget_RowsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, parent: QtC.QModelIndex, start: i32, end: i32 ```
    pub fn QBaseRowsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QListWidget_QBaseRowsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, parent: QtC.QModelIndex, start: i32, end: i32) callconv(.c) void ```
    pub fn OnRowsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QListWidget_OnRowsAboutToBeRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, e: QtC.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListWidget_MouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, e: QtC.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListWidget_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, e: QtC.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListWidget_MouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, e: QtC.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListWidget_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, e: QtC.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListWidget_WheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, e: QtC.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListWidget_QBaseWheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, e: QtC.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, e: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListWidget_TimerEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, e: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListWidget_QBaseTimerEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, e: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, e: QtC.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListWidget_ResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, e: QtC.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListWidget_QBaseResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, e: QtC.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, e: QtC.QDragMoveEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListWidget_DragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, e: QtC.QDragMoveEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListWidget_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, e: QtC.QDragMoveEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, e: QtC.QDragLeaveEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListWidget_DragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, e: QtC.QDragLeaveEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListWidget_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, e: QtC.QDragLeaveEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#startDrag)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, supportedActions: flag of qnamespace_enums.DropAction ```
    pub fn StartDrag(self: ?*anyopaque, supportedActions: i32) void {
        qtc.QListWidget_StartDrag(@ptrCast(self), @intCast(supportedActions));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#startDrag)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, supportedActions: flag of qnamespace_enums.DropAction ```
    pub fn QBaseStartDrag(self: ?*anyopaque, supportedActions: i32) void {
        qtc.QListWidget_QBaseStartDrag(@ptrCast(self), @intCast(supportedActions));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#startDrag)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, supportedActions: flag of qnamespace_enums.DropAction) callconv(.c) void ```
    pub fn OnStartDrag(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QListWidget_OnStartDrag(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, option: QtC.QStyleOptionViewItem ```
    pub fn InitViewItemOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QListWidget_InitViewItemOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, option: QtC.QStyleOptionViewItem ```
    pub fn QBaseInitViewItemOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QListWidget_QBaseInitViewItemOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, option: QtC.QStyleOptionViewItem) callconv(.c) void ```
    pub fn OnInitViewItemOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnInitViewItemOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, e: QtC.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListWidget_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, e: QtC.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QListWidget_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, e: QtC.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn HorizontalOffset(self: ?*anyopaque) i32 {
        return qtc.QListWidget_HorizontalOffset(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseHorizontalOffset(self: ?*anyopaque) i32 {
        return qtc.QListWidget_QBaseHorizontalOffset(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) i32 ```
    pub fn OnHorizontalOffset(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QListWidget_OnHorizontalOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn VerticalOffset(self: ?*anyopaque) i32 {
        return qtc.QListWidget_VerticalOffset(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseVerticalOffset(self: ?*anyopaque) i32 {
        return qtc.QListWidget_QBaseVerticalOffset(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) i32 ```
    pub fn OnVerticalOffset(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QListWidget_OnVerticalOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, cursorAction: qabstractitemview_enums.CursorAction, modifiers: flag of qnamespace_enums.KeyboardModifier ```
    pub fn MoveCursor(self: ?*anyopaque, cursorAction: i32, modifiers: i64) QtC.QModelIndex {
        return qtc.QListWidget_MoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, cursorAction: qabstractitemview_enums.CursorAction, modifiers: flag of qnamespace_enums.KeyboardModifier ```
    pub fn QBaseMoveCursor(self: ?*anyopaque, cursorAction: i32, modifiers: i64) QtC.QModelIndex {
        return qtc.QListWidget_QBaseMoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, cursorAction: qabstractitemview_enums.CursorAction, modifiers: flag of qnamespace_enums.KeyboardModifier) callconv(.c) QtC.QModelIndex ```
    pub fn OnMoveCursor(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i64) callconv(.c) QtC.QModelIndex) void {
        qtc.QListWidget_OnMoveCursor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, rect: QtC.QRect, command: flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn SetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i32) void {
        qtc.QListWidget_SetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, rect: QtC.QRect, command: flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn QBaseSetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i32) void {
        qtc.QListWidget_QBaseSetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, rect: QtC.QRect, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void ```
    pub fn OnSetSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QListWidget_OnSetSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, selection: QtC.QItemSelection ```
    pub fn VisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QListWidget_VisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, selection: QtC.QItemSelection ```
    pub fn QBaseVisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QListWidget_QBaseVisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, selection: QtC.QItemSelection) callconv(.c) QtC.QRegion ```
    pub fn OnVisualRegionForSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRegion) void {
        qtc.QListWidget_OnVisualRegionForSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn SelectedIndexes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QListWidget_SelectedIndexes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qlistwidget.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, allocator: std.mem.Allocator ```
    pub fn QBaseSelectedIndexes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QListWidget_QBaseSelectedIndexes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qlistwidget.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) [*:null]QtC.QModelIndex ```
    pub fn OnSelectedIndexes(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:null]QtC.QModelIndex) void {
        qtc.QListWidget_OnSelectedIndexes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn UpdateGeometries(self: ?*anyopaque) void {
        qtc.QListWidget_UpdateGeometries(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseUpdateGeometries(self: ?*anyopaque) void {
        qtc.QListWidget_QBaseUpdateGeometries(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) void ```
    pub fn OnUpdateGeometries(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnUpdateGeometries(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn IsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QListWidget_IsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn QBaseIsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QListWidget_QBaseIsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, index: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnIsIndexHidden(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QListWidget_OnIsIndexHidden(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, selected: QtC.QItemSelection, deselected: QtC.QItemSelection ```
    pub fn SelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QListWidget_SelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, selected: QtC.QItemSelection, deselected: QtC.QItemSelection ```
    pub fn QBaseSelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QListWidget_QBaseSelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, selected: QtC.QItemSelection, deselected: QtC.QItemSelection) callconv(.c) void ```
    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnSelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, current: QtC.QModelIndex, previous: QtC.QModelIndex ```
    pub fn CurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QListWidget_CurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, current: QtC.QModelIndex, previous: QtC.QModelIndex ```
    pub fn QBaseCurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QListWidget_QBaseCurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, current: QtC.QModelIndex, previous: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnCurrentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QListWidget_ViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QListWidget_QBaseViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) QtC.QSize ```
    pub fn OnViewportSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QListWidget_OnViewportSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, search: []const u8 ```
    pub fn KeyboardSearch(self: ?*anyopaque, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QListWidget_KeyboardSearch(@ptrCast(self), search_str);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, search: []const u8 ```
    pub fn QBaseKeyboardSearch(self: ?*anyopaque, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QListWidget_QBaseKeyboardSearch(@ptrCast(self), search_str);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, search: [*:0]const u8) callconv(.c) void ```
    pub fn OnKeyboardSearch(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QListWidget_OnKeyboardSearch(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, row: i32 ```
    pub fn SizeHintForRow(self: ?*anyopaque, row: i32) i32 {
        return qtc.QListWidget_SizeHintForRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, row: i32 ```
    pub fn QBaseSizeHintForRow(self: ?*anyopaque, row: i32) i32 {
        return qtc.QListWidget_QBaseSizeHintForRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, row: i32) callconv(.c) i32 ```
    pub fn OnSizeHintForRow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QListWidget_OnSizeHintForRow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, column: i32 ```
    pub fn SizeHintForColumn(self: ?*anyopaque, column: i32) i32 {
        return qtc.QListWidget_SizeHintForColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, column: i32 ```
    pub fn QBaseSizeHintForColumn(self: ?*anyopaque, column: i32) i32 {
        return qtc.QListWidget_QBaseSizeHintForColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, column: i32) callconv(.c) i32 ```
    pub fn OnSizeHintForColumn(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QListWidget_OnSizeHintForColumn(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn ItemDelegateForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QListWidget_ItemDelegateForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn QBaseItemDelegateForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QListWidget_QBaseItemDelegateForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, index: QtC.QModelIndex) callconv(.c) QtC.QAbstractItemDelegate ```
    pub fn OnItemDelegateForIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QAbstractItemDelegate) void {
        qtc.QListWidget_OnItemDelegateForIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, query: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QListWidget_InputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, query: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QListWidget_QBaseInputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, query: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QListWidget_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn SelectAll(self: ?*anyopaque) void {
        qtc.QListWidget_SelectAll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseSelectAll(self: ?*anyopaque) void {
        qtc.QListWidget_QBaseSelectAll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) void ```
    pub fn OnSelectAll(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnSelectAll(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn UpdateEditorData(self: ?*anyopaque) void {
        qtc.QListWidget_UpdateEditorData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseUpdateEditorData(self: ?*anyopaque) void {
        qtc.QListWidget_QBaseUpdateEditorData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) void ```
    pub fn OnUpdateEditorData(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnUpdateEditorData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn UpdateEditorGeometries(self: ?*anyopaque) void {
        qtc.QListWidget_UpdateEditorGeometries(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseUpdateEditorGeometries(self: ?*anyopaque) void {
        qtc.QListWidget_QBaseUpdateEditorGeometries(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) void ```
    pub fn OnUpdateEditorGeometries(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnUpdateEditorGeometries(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, action: i32 ```
    pub fn VerticalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QListWidget_VerticalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, action: i32 ```
    pub fn QBaseVerticalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QListWidget_QBaseVerticalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, action: i32) callconv(.c) void ```
    pub fn OnVerticalScrollbarAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QListWidget_OnVerticalScrollbarAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, action: i32 ```
    pub fn HorizontalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QListWidget_HorizontalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, action: i32 ```
    pub fn QBaseHorizontalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QListWidget_QBaseHorizontalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, action: i32) callconv(.c) void ```
    pub fn OnHorizontalScrollbarAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QListWidget_OnHorizontalScrollbarAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, value: i32 ```
    pub fn VerticalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QListWidget_VerticalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, value: i32 ```
    pub fn QBaseVerticalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QListWidget_QBaseVerticalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, value: i32) callconv(.c) void ```
    pub fn OnVerticalScrollbarValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QListWidget_OnVerticalScrollbarValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, value: i32 ```
    pub fn HorizontalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QListWidget_HorizontalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, value: i32 ```
    pub fn QBaseHorizontalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QListWidget_QBaseHorizontalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, value: i32) callconv(.c) void ```
    pub fn OnHorizontalScrollbarValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QListWidget_OnHorizontalScrollbarValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, editor: QtC.QWidget, hint: qabstractitemdelegate_enums.EndEditHint ```
    pub fn CloseEditor(self: ?*anyopaque, editor: ?*anyopaque, hint: i32) void {
        qtc.QListWidget_CloseEditor(@ptrCast(self), @ptrCast(editor), @intCast(hint));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, editor: QtC.QWidget, hint: qabstractitemdelegate_enums.EndEditHint ```
    pub fn QBaseCloseEditor(self: ?*anyopaque, editor: ?*anyopaque, hint: i32) void {
        qtc.QListWidget_QBaseCloseEditor(@ptrCast(self), @ptrCast(editor), @intCast(hint));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, editor: QtC.QWidget, hint: qabstractitemdelegate_enums.EndEditHint) callconv(.c) void ```
    pub fn OnCloseEditor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QListWidget_OnCloseEditor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, editor: QtC.QWidget ```
    pub fn CommitData(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QListWidget_CommitData(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, editor: QtC.QWidget ```
    pub fn QBaseCommitData(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QListWidget_QBaseCommitData(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, editor: QtC.QWidget) callconv(.c) void ```
    pub fn OnCommitData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnCommitData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, editor: QtC.QObject ```
    pub fn EditorDestroyed(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QListWidget_EditorDestroyed(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, editor: QtC.QObject ```
    pub fn QBaseEditorDestroyed(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QListWidget_QBaseEditorDestroyed(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, editor: QtC.QObject) callconv(.c) void ```
    pub fn OnEditorDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnEditorDestroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: QtC.QEvent ```
    pub fn Edit2(self: ?*anyopaque, index: ?*anyopaque, trigger: i32, event: ?*anyopaque) bool {
        return qtc.QListWidget_Edit2(@ptrCast(self), @ptrCast(index), @intCast(trigger), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: QtC.QEvent ```
    pub fn QBaseEdit2(self: ?*anyopaque, index: ?*anyopaque, trigger: i32, event: ?*anyopaque) bool {
        return qtc.QListWidget_QBaseEdit2(@ptrCast(self), @ptrCast(index), @intCast(trigger), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, index: QtC.QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEdit2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QListWidget_OnEdit2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex, event: QtC.QEvent ```
    ///
    /// Returns: ``` flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn SelectionCommand(self: ?*anyopaque, index: ?*anyopaque, event: ?*anyopaque) i32 {
        return qtc.QListWidget_SelectionCommand(@ptrCast(self), @ptrCast(index), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex, event: QtC.QEvent ```
    ///
    /// Returns: ``` flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn QBaseSelectionCommand(self: ?*anyopaque, index: ?*anyopaque, event: ?*anyopaque) i32 {
        return qtc.QListWidget_QBaseSelectionCommand(@ptrCast(self), @ptrCast(index), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, index: QtC.QModelIndex, event: QtC.QEvent) callconv(.c) i32 ```
    pub fn OnSelectionCommand(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QListWidget_OnSelectionCommand(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QListWidget_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QListWidget_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, next: bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QListWidget_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QEvent ```
    pub fn ViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QListWidget_ViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QEvent ```
    pub fn QBaseViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QListWidget_QBaseViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnViewportEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QListWidget_OnViewportEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QDragEnterEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QDragEnterEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QDragEnterEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, object: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QListWidget_EventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, object: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QListWidget_QBaseEventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, object: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QListWidget_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn MinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QListWidget_MinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QListWidget_QBaseMinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QListWidget_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QListWidget_SizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QListWidget_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QListWidget_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, viewport: QtC.QWidget ```
    pub fn SetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QListWidget_SetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, viewport: QtC.QWidget ```
    pub fn QBaseSetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QListWidget_QBaseSetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, viewport: QtC.QWidget) callconv(.c) void ```
    pub fn OnSetupViewport(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnSetupViewport(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QListWidget_ContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QListWidget_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, param1: QtC.QContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QListWidget_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QListWidget_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, param1: QtC.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, option: QtC.QStyleOptionFrame ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QListWidget_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, option: QtC.QStyleOptionFrame ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QListWidget_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, option: QtC.QStyleOptionFrame) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QListWidget_DevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.QListWidget_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QListWidget_OnDevType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QListWidget_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, visible: bool ```
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QListWidget_QBaseSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, visible: bool) callconv(.c) void ```
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QListWidget_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QListWidget_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QListWidget_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QListWidget_OnHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QListWidget_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QListWidget_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QListWidget_OnHasHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QListWidget_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QListWidget_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QListWidget_OnPaintEngine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QEnterEvent ```
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QEnterEvent ```
    pub fn QBaseEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QEnterEvent) callconv(.c) void ```
    pub fn OnEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QEvent ```
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QEvent ```
    pub fn QBaseLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnCloseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnTabletEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QActionEvent ```
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QActionEvent ```
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QActionEvent) callconv(.c) void ```
    pub fn OnActionEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnActionEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnHideEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QListWidget_NativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QListWidget_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, eventType: [*:0]u8, message: ?*anyopaque, result: *isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QListWidget_OnNativeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QListWidget_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QListWidget_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QListWidget_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QListWidget_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QListWidget_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnInitPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QListWidget_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QListWidget_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QListWidget_OnRedirected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QListWidget_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QListWidget_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainter) void {
        qtc.QListWidget_OnSharedPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QListWidget_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QListWidget_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QListWidget_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QListWidget_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QListWidget_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, width: i32, height: i32 ```
    pub fn ResizeContents(self: ?*anyopaque, width: i32, height: i32) void {
        qtc.QListWidget_ResizeContents(@ptrCast(self), @intCast(width), @intCast(height));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, width: i32, height: i32 ```
    pub fn QBaseResizeContents(self: ?*anyopaque, width: i32, height: i32) void {
        qtc.QListWidget_QBaseResizeContents(@ptrCast(self), @intCast(width), @intCast(height));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, width: i32, height: i32) callconv(.c) void ```
    pub fn OnResizeContents(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QListWidget_OnResizeContents(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ContentsSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QListWidget_ContentsSize(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseContentsSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QListWidget_QBaseContentsSize(@ptrCast(self));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) QtC.QSize ```
    pub fn OnContentsSize(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QListWidget_OnContentsSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn RectForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QListWidget_RectForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, index: QtC.QModelIndex ```
    pub fn QBaseRectForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QListWidget_QBaseRectForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, index: QtC.QModelIndex) callconv(.c) QtC.QRect ```
    pub fn OnRectForIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QListWidget_OnRectForIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, position: QtC.QPoint, index: QtC.QModelIndex ```
    pub fn SetPositionForIndex(self: ?*anyopaque, position: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QListWidget_SetPositionForIndex(@ptrCast(self), @ptrCast(position), @ptrCast(index));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, position: QtC.QPoint, index: QtC.QModelIndex ```
    pub fn QBaseSetPositionForIndex(self: ?*anyopaque, position: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QListWidget_QBaseSetPositionForIndex(@ptrCast(self), @ptrCast(position), @ptrCast(index));
    }

    /// Inherited from QListView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, position: QtC.QPoint, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnSetPositionForIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnSetPositionForIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qabstractitemview_enums.State ```
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QListWidget_State(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qabstractitemview_enums.State ```
    pub fn QBaseState(self: ?*anyopaque) i32 {
        return qtc.QListWidget_QBaseState(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) i32 ```
    pub fn OnState(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QListWidget_OnState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, state: qabstractitemview_enums.State ```
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QListWidget_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, state: qabstractitemview_enums.State ```
    pub fn QBaseSetState(self: ?*anyopaque, state: i32) void {
        qtc.QListWidget_QBaseSetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, state: qabstractitemview_enums.State) callconv(.c) void ```
    pub fn OnSetState(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QListWidget_OnSetState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ScheduleDelayedItemsLayout(self: ?*anyopaque) void {
        qtc.QListWidget_ScheduleDelayedItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseScheduleDelayedItemsLayout(self: ?*anyopaque) void {
        qtc.QListWidget_QBaseScheduleDelayedItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) void ```
    pub fn OnScheduleDelayedItemsLayout(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnScheduleDelayedItemsLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ExecuteDelayedItemsLayout(self: ?*anyopaque) void {
        qtc.QListWidget_ExecuteDelayedItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseExecuteDelayedItemsLayout(self: ?*anyopaque) void {
        qtc.QListWidget_QBaseExecuteDelayedItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) void ```
    pub fn OnExecuteDelayedItemsLayout(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnExecuteDelayedItemsLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, region: QtC.QRegion ```
    pub fn SetDirtyRegion(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QListWidget_SetDirtyRegion(@ptrCast(self), @ptrCast(region));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, region: QtC.QRegion ```
    pub fn QBaseSetDirtyRegion(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QListWidget_QBaseSetDirtyRegion(@ptrCast(self), @ptrCast(region));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, region: QtC.QRegion) callconv(.c) void ```
    pub fn OnSetDirtyRegion(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnSetDirtyRegion(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, dx: i32, dy: i32 ```
    pub fn ScrollDirtyRegion(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QListWidget_ScrollDirtyRegion(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, dx: i32, dy: i32 ```
    pub fn QBaseScrollDirtyRegion(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QListWidget_QBaseScrollDirtyRegion(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, dx: i32, dy: i32) callconv(.c) void ```
    pub fn OnScrollDirtyRegion(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QListWidget_OnScrollDirtyRegion(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn DirtyRegionOffset(self: ?*anyopaque) QtC.QPoint {
        return qtc.QListWidget_DirtyRegionOffset(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseDirtyRegionOffset(self: ?*anyopaque) QtC.QPoint {
        return qtc.QListWidget_QBaseDirtyRegionOffset(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) QtC.QPoint ```
    pub fn OnDirtyRegionOffset(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPoint) void {
        qtc.QListWidget_OnDirtyRegionOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn StartAutoScroll(self: ?*anyopaque) void {
        qtc.QListWidget_StartAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseStartAutoScroll(self: ?*anyopaque) void {
        qtc.QListWidget_QBaseStartAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) void ```
    pub fn OnStartAutoScroll(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnStartAutoScroll(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn StopAutoScroll(self: ?*anyopaque) void {
        qtc.QListWidget_StopAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseStopAutoScroll(self: ?*anyopaque) void {
        qtc.QListWidget_QBaseStopAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) void ```
    pub fn OnStopAutoScroll(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnStopAutoScroll(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn DoAutoScroll(self: ?*anyopaque) void {
        qtc.QListWidget_DoAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseDoAutoScroll(self: ?*anyopaque) void {
        qtc.QListWidget_QBaseDoAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) void ```
    pub fn OnDoAutoScroll(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnDoAutoScroll(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qabstractitemview_enums.DropIndicatorPosition ```
    pub fn DropIndicatorPosition(self: ?*anyopaque) i32 {
        return qtc.QListWidget_DropIndicatorPosition(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    ///
    /// Returns: ``` qabstractitemview_enums.DropIndicatorPosition ```
    pub fn QBaseDropIndicatorPosition(self: ?*anyopaque) i32 {
        return qtc.QListWidget_QBaseDropIndicatorPosition(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) i32 ```
    pub fn OnDropIndicatorPosition(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QListWidget_OnDropIndicatorPosition(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QListWidget_SetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn QBaseSetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QListWidget_QBaseSetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void ```
    pub fn OnSetViewportMargins(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QListWidget_OnSetViewportMargins(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn ViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QListWidget_ViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QListWidget_QBaseViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) QtC.QMargins ```
    pub fn OnViewportMargins(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMargins) void {
        qtc.QListWidget_OnViewportMargins(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QPainter ```
    pub fn DrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QListWidget_DrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, param1: QtC.QPainter ```
    pub fn QBaseDrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QListWidget_QBaseDrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, param1: QtC.QPainter) callconv(.c) void ```
    pub fn OnDrawFrame(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QListWidget_OnDrawFrame(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QListWidget_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QListWidget_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnUpdateMicroFocus(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Create(self: ?*anyopaque) void {
        qtc.QListWidget_Create(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseCreate(self: ?*anyopaque) void {
        qtc.QListWidget_QBaseCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) void ```
    pub fn OnCreate(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnCreate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.QListWidget_Destroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseDestroy(self: ?*anyopaque) void {
        qtc.QListWidget_QBaseDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) void ```
    pub fn OnDestroy(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnDestroy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return qtc.QListWidget_FocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseFocusNextChild(self: ?*anyopaque) bool {
        return qtc.QListWidget_QBaseFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) bool ```
    pub fn OnFocusNextChild(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QListWidget_OnFocusNextChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.QListWidget_FocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseFocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.QListWidget_QBaseFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) bool ```
    pub fn OnFocusPreviousChild(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QListWidget_OnFocusPreviousChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QListWidget_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QListWidget_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QListWidget_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QListWidget_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QListWidget_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QListWidget_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QListWidget_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QListWidget_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QListWidget_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QListWidget_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QListWidget_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QListWidget_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QListWidget_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QListWidget_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.QListWidget_OnGetDecodedMetricF(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QListWidget, callback: *const fn (self: QtC.QListWidget, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dtor.QListWidget)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QListWidget ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QListWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qlistwidget.html#types
pub const enums = struct {
    pub const ItemType = enum {
        pub const Type: i32 = 0;
        pub const UserType: i32 = 1000;
    };
};
