const C = @import("qt6c");
const qabstractitemdelegate_enums = @import("libqabstractitemdelegate.zig").enums;
const qabstractitemview_enums = @import("libqabstractitemview.zig").enums;
const qabstractscrollarea_enums = @import("libqabstractscrollarea.zig").enums;
const qframe_enums = @import("libqframe.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qtablewidgetselectionrange.html
pub const qtablewidgetselectionrange = struct {
    /// New constructs a new QTableWidgetSelectionRange object.
    ///
    /// ``` other: ?*C.QTableWidgetSelectionRange ```
    pub fn New(other: ?*anyopaque) ?*C.QTableWidgetSelectionRange {
        return C.QTableWidgetSelectionRange_new(@ptrCast(other));
    }

    /// New2 constructs a new QTableWidgetSelectionRange object and invalidates the source QTableWidgetSelectionRange object.
    ///
    /// ``` other: ?*C.QTableWidgetSelectionRange ```
    pub fn New2(other: ?*anyopaque) ?*C.QTableWidgetSelectionRange {
        return C.QTableWidgetSelectionRange_new2(@ptrCast(other));
    }

    /// New3 constructs a new QTableWidgetSelectionRange object.
    ///
    ///
    pub fn New3() ?*C.QTableWidgetSelectionRange {
        return C.QTableWidgetSelectionRange_new3();
    }

    /// New4 constructs a new QTableWidgetSelectionRange object.
    ///
    /// ``` top: i32, left: i32, bottom: i32, right: i32 ```
    pub fn New4(top: i32, left: i32, bottom: i32, right: i32) ?*C.QTableWidgetSelectionRange {
        return C.QTableWidgetSelectionRange_new4(@intCast(top), @intCast(left), @intCast(bottom), @intCast(right));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: ?*QTableWidgetSelectionRange, other: ?*QTableWidgetSelectionRange ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QTableWidgetSelectionRange_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: ?*QTableWidgetSelectionRange, other: ?*QTableWidgetSelectionRange ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QTableWidgetSelectionRange_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#topRow)
    ///
    /// ``` self: ?*C.QTableWidgetSelectionRange ```
    pub fn TopRow(self: ?*anyopaque) i32 {
        return C.QTableWidgetSelectionRange_TopRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#bottomRow)
    ///
    /// ``` self: ?*C.QTableWidgetSelectionRange ```
    pub fn BottomRow(self: ?*anyopaque) i32 {
        return C.QTableWidgetSelectionRange_BottomRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#leftColumn)
    ///
    /// ``` self: ?*C.QTableWidgetSelectionRange ```
    pub fn LeftColumn(self: ?*anyopaque) i32 {
        return C.QTableWidgetSelectionRange_LeftColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#rightColumn)
    ///
    /// ``` self: ?*C.QTableWidgetSelectionRange ```
    pub fn RightColumn(self: ?*anyopaque) i32 {
        return C.QTableWidgetSelectionRange_RightColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#rowCount)
    ///
    /// ``` self: ?*C.QTableWidgetSelectionRange ```
    pub fn RowCount(self: ?*anyopaque) i32 {
        return C.QTableWidgetSelectionRange_RowCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#columnCount)
    ///
    /// ``` self: ?*C.QTableWidgetSelectionRange ```
    pub fn ColumnCount(self: ?*anyopaque) i32 {
        return C.QTableWidgetSelectionRange_ColumnCount(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTableWidgetSelectionRange ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTableWidgetSelectionRange_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtablewidgetitem.html
pub const qtablewidgetitem = struct {
    /// New constructs a new QTableWidgetItem object.
    ///
    ///
    pub fn New() ?*C.QTableWidgetItem {
        return C.QTableWidgetItem_new();
    }

    /// New2 constructs a new QTableWidgetItem object.
    ///
    /// ``` text: []const u8 ```
    pub fn New2(text: []const u8) ?*C.QTableWidgetItem {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };

        return C.QTableWidgetItem_new2(text_str);
    }

    /// New3 constructs a new QTableWidgetItem object.
    ///
    /// ``` icon: ?*C.QIcon, text: []const u8 ```
    pub fn New3(icon: ?*anyopaque, text: []const u8) ?*C.QTableWidgetItem {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };

        return C.QTableWidgetItem_new3(@ptrCast(icon), text_str);
    }

    /// New4 constructs a new QTableWidgetItem object.
    ///
    /// ``` other: ?*C.QTableWidgetItem ```
    pub fn New4(other: ?*anyopaque) ?*C.QTableWidgetItem {
        return C.QTableWidgetItem_new4(@ptrCast(other));
    }

    /// New5 constructs a new QTableWidgetItem object.
    ///
    /// ``` typeVal: i32 ```
    pub fn New5(typeVal: i32) ?*C.QTableWidgetItem {
        return C.QTableWidgetItem_new5(@intCast(typeVal));
    }

    /// New6 constructs a new QTableWidgetItem object.
    ///
    /// ``` text: []const u8, typeVal: i32 ```
    pub fn New6(text: []const u8, typeVal: i32) ?*C.QTableWidgetItem {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };

        return C.QTableWidgetItem_new6(text_str, @intCast(typeVal));
    }

    /// New7 constructs a new QTableWidgetItem object.
    ///
    /// ``` icon: ?*C.QIcon, text: []const u8, typeVal: i32 ```
    pub fn New7(icon: ?*anyopaque, text: []const u8, typeVal: i32) ?*C.QTableWidgetItem {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };

        return C.QTableWidgetItem_new7(@ptrCast(icon), text_str, @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#clone)
    ///
    /// ``` self: ?*C.QTableWidgetItem ```
    pub fn Clone(self: ?*anyopaque) ?*C.QTableWidgetItem {
        return C.QTableWidgetItem_Clone(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTableWidgetItem, slot: fn () callconv(.c) ?*C.QTableWidgetItem ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QTableWidgetItem) void {
        C.QTableWidgetItem_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTableWidgetItem ```
    pub fn QBaseClone(self: ?*anyopaque) ?*C.QTableWidgetItem {
        return C.QTableWidgetItem_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#tableWidget)
    ///
    /// ``` self: ?*C.QTableWidgetItem ```
    pub fn TableWidget(self: ?*anyopaque) ?*C.QTableWidget {
        return C.QTableWidgetItem_TableWidget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#row)
    ///
    /// ``` self: ?*C.QTableWidgetItem ```
    pub fn Row(self: ?*anyopaque) i32 {
        return C.QTableWidgetItem_Row(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#column)
    ///
    /// ``` self: ?*C.QTableWidgetItem ```
    pub fn Column(self: ?*anyopaque) i32 {
        return C.QTableWidgetItem_Column(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setSelected)
    ///
    /// ``` self: ?*C.QTableWidgetItem, selectVal: bool ```
    pub fn SetSelected(self: ?*anyopaque, selectVal: bool) void {
        C.QTableWidgetItem_SetSelected(@ptrCast(self), selectVal);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#isSelected)
    ///
    /// ``` self: ?*C.QTableWidgetItem ```
    pub fn IsSelected(self: ?*anyopaque) bool {
        return C.QTableWidgetItem_IsSelected(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#flags)
    ///
    /// ``` self: ?*C.QTableWidgetItem ```
    pub fn Flags(self: ?*anyopaque) i64 {
        return C.QTableWidgetItem_Flags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setFlags)
    ///
    /// ``` self: ?*C.QTableWidgetItem, flags: i32 ```
    pub fn SetFlags(self: ?*anyopaque, flags: i64) void {
        C.QTableWidgetItem_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#text)
    ///
    /// ``` self: ?*C.QTableWidgetItem, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTableWidgetItem_Text(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setText)
    ///
    /// ``` self: ?*C.QTableWidgetItem, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QTableWidgetItem_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#icon)
    ///
    /// ``` self: ?*C.QTableWidgetItem ```
    pub fn Icon(self: ?*anyopaque) ?*C.QIcon {
        return C.QTableWidgetItem_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setIcon)
    ///
    /// ``` self: ?*C.QTableWidgetItem, icon: ?*C.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        C.QTableWidgetItem_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#statusTip)
    ///
    /// ``` self: ?*C.QTableWidgetItem, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTableWidgetItem_StatusTip(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setStatusTip)
    ///
    /// ``` self: ?*C.QTableWidgetItem, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = C.struct_libqt_string{
            .len = statusTip.len,
            .data = @constCast(statusTip.ptr),
        };
        C.QTableWidgetItem_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#toolTip)
    ///
    /// ``` self: ?*C.QTableWidgetItem, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTableWidgetItem_ToolTip(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setToolTip)
    ///
    /// ``` self: ?*C.QTableWidgetItem, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = C.struct_libqt_string{
            .len = toolTip.len,
            .data = @constCast(toolTip.ptr),
        };
        C.QTableWidgetItem_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#whatsThis)
    ///
    /// ``` self: ?*C.QTableWidgetItem, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTableWidgetItem_WhatsThis(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setWhatsThis)
    ///
    /// ``` self: ?*C.QTableWidgetItem, whatsThis: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = C.struct_libqt_string{
            .len = whatsThis.len,
            .data = @constCast(whatsThis.ptr),
        };
        C.QTableWidgetItem_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#font)
    ///
    /// ``` self: ?*C.QTableWidgetItem ```
    pub fn Font(self: ?*anyopaque) ?*C.QFont {
        return C.QTableWidgetItem_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setFont)
    ///
    /// ``` self: ?*C.QTableWidgetItem, font: ?*C.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        C.QTableWidgetItem_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#textAlignment)
    ///
    /// ``` self: ?*C.QTableWidgetItem ```
    pub fn TextAlignment(self: ?*anyopaque) i32 {
        return C.QTableWidgetItem_TextAlignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
    ///
    /// ``` self: ?*C.QTableWidgetItem, alignment: i32 ```
    pub fn SetTextAlignment(self: ?*anyopaque, alignment: i32) void {
        C.QTableWidgetItem_SetTextAlignment(@ptrCast(self), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
    ///
    /// ``` self: ?*C.QTableWidgetItem, alignment: qnamespace_enums.AlignmentFlag ```
    pub fn SetTextAlignmentWithAlignment(self: ?*anyopaque, alignment: i64) void {
        C.QTableWidgetItem_SetTextAlignmentWithAlignment(@ptrCast(self), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
    ///
    /// ``` self: ?*C.QTableWidgetItem, alignment: i32 ```
    pub fn SetTextAlignment2(self: ?*anyopaque, alignment: i64) void {
        C.QTableWidgetItem_SetTextAlignment2(@ptrCast(self), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#background)
    ///
    /// ``` self: ?*C.QTableWidgetItem ```
    pub fn Background(self: ?*anyopaque) ?*C.QBrush {
        return C.QTableWidgetItem_Background(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setBackground)
    ///
    /// ``` self: ?*C.QTableWidgetItem, brush: ?*C.QBrush ```
    pub fn SetBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QTableWidgetItem_SetBackground(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#foreground)
    ///
    /// ``` self: ?*C.QTableWidgetItem ```
    pub fn Foreground(self: ?*anyopaque) ?*C.QBrush {
        return C.QTableWidgetItem_Foreground(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setForeground)
    ///
    /// ``` self: ?*C.QTableWidgetItem, brush: ?*C.QBrush ```
    pub fn SetForeground(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QTableWidgetItem_SetForeground(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#checkState)
    ///
    /// ``` self: ?*C.QTableWidgetItem ```
    pub fn CheckState(self: ?*anyopaque) i64 {
        return C.QTableWidgetItem_CheckState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setCheckState)
    ///
    /// ``` self: ?*C.QTableWidgetItem, state: qnamespace_enums.CheckState ```
    pub fn SetCheckState(self: ?*anyopaque, state: i64) void {
        C.QTableWidgetItem_SetCheckState(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#sizeHint)
    ///
    /// ``` self: ?*C.QTableWidgetItem ```
    pub fn SizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QTableWidgetItem_SizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setSizeHint)
    ///
    /// ``` self: ?*C.QTableWidgetItem, size: ?*C.QSize ```
    pub fn SetSizeHint(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QTableWidgetItem_SetSizeHint(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#data)
    ///
    /// ``` self: ?*C.QTableWidgetItem, role: i32 ```
    pub fn Data(self: ?*anyopaque, role: i32) ?*C.QVariant {
        return C.QTableWidgetItem_Data(@ptrCast(self), @intCast(role));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTableWidgetItem, slot: fn (?*C.QTableWidgetItem, i32) callconv(.c) ?*C.QVariant ```
    pub fn OnData(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QVariant) void {
        C.QTableWidgetItem_OnData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTableWidgetItem, role: i32 ```
    pub fn QBaseData(self: ?*anyopaque, role: i32) ?*C.QVariant {
        return C.QTableWidgetItem_QBaseData(@ptrCast(self), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setData)
    ///
    /// ``` self: ?*C.QTableWidgetItem, role: i32, value: ?*C.QVariant ```
    pub fn SetData(self: ?*anyopaque, role: i32, value: ?*anyopaque) void {
        C.QTableWidgetItem_SetData(@ptrCast(self), @intCast(role), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTableWidgetItem, slot: fn (?*C.QTableWidgetItem, i32, ?*C.QVariant) callconv(.c) void ```
    pub fn OnSetData(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidgetItem_OnSetData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTableWidgetItem, role: i32, value: ?*C.QVariant ```
    pub fn QBaseSetData(self: ?*anyopaque, role: i32, value: ?*anyopaque) void {
        C.QTableWidgetItem_QBaseSetData(@ptrCast(self), @intCast(role), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator<)
    ///
    /// ``` self: ?*C.QTableWidgetItem, other: ?*C.QTableWidgetItem ```
    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QTableWidgetItem_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTableWidgetItem, slot: fn (?*C.QTableWidgetItem, ?*C.QTableWidgetItem) callconv(.c) bool ```
    pub fn OnOperatorLesser(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTableWidgetItem_OnOperatorLesser(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTableWidgetItem, other: ?*C.QTableWidgetItem ```
    pub fn QBaseOperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QTableWidgetItem_QBaseOperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#read)
    ///
    /// ``` self: ?*C.QTableWidgetItem, in: ?*C.QDataStream ```
    pub fn Read(self: ?*anyopaque, in: ?*anyopaque) void {
        C.QTableWidgetItem_Read(@ptrCast(self), @ptrCast(in));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTableWidgetItem, slot: fn (?*C.QTableWidgetItem, ?*C.QDataStream) callconv(.c) void ```
    pub fn OnRead(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidgetItem_OnRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTableWidgetItem, in: ?*C.QDataStream ```
    pub fn QBaseRead(self: ?*anyopaque, in: ?*anyopaque) void {
        C.QTableWidgetItem_QBaseRead(@ptrCast(self), @ptrCast(in));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#write)
    ///
    /// ``` self: ?*C.QTableWidgetItem, out: ?*C.QDataStream ```
    pub fn Write(self: ?*anyopaque, out: ?*anyopaque) void {
        C.QTableWidgetItem_Write(@ptrCast(self), @ptrCast(out));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTableWidgetItem, slot: fn (?*C.QTableWidgetItem, ?*C.QDataStream) callconv(.c) void ```
    pub fn OnWrite(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidgetItem_OnWrite(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTableWidgetItem, out: ?*C.QDataStream ```
    pub fn QBaseWrite(self: ?*anyopaque, out: ?*anyopaque) void {
        C.QTableWidgetItem_QBaseWrite(@ptrCast(self), @ptrCast(out));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator=)
    ///
    /// ``` self: ?*C.QTableWidgetItem, other: ?*C.QTableWidgetItem ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QTableWidgetItem_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#type)
    ///
    /// ``` self: ?*C.QTableWidgetItem ```
    pub fn Type(self: ?*anyopaque) i32 {
        return C.QTableWidgetItem_Type(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTableWidgetItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTableWidgetItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtablewidget.html
pub const qtablewidget = struct {
    /// New constructs a new QTableWidget object.
    ///
    /// ``` parent: ?*C.QWidget ```
    pub fn New(parent: ?*anyopaque) ?*C.QTableWidget {
        return C.QTableWidget_new(@ptrCast(parent));
    }

    /// New2 constructs a new QTableWidget object.
    ///
    ///
    pub fn New2() ?*C.QTableWidget {
        return C.QTableWidget_new2();
    }

    /// New3 constructs a new QTableWidget object.
    ///
    /// ``` rows: i32, columns: i32 ```
    pub fn New3(rows: i32, columns: i32) ?*C.QTableWidget {
        return C.QTableWidget_new3(@intCast(rows), @intCast(columns));
    }

    /// New4 constructs a new QTableWidget object.
    ///
    /// ``` rows: i32, columns: i32, parent: ?*C.QWidget ```
    pub fn New4(rows: i32, columns: i32, parent: ?*anyopaque) ?*C.QTableWidget {
        return C.QTableWidget_new4(@intCast(rows), @intCast(columns), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QTableWidget_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QTableWidget, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QTableWidget_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QTableWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QTableWidget_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QTableWidget_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTableWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QTableWidget_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QTableWidget_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setRowCount)
    ///
    /// ``` self: ?*C.QTableWidget, rows: i32 ```
    pub fn SetRowCount(self: ?*anyopaque, rows: i32) void {
        C.QTableWidget_SetRowCount(@ptrCast(self), @intCast(rows));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#rowCount)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn RowCount(self: ?*anyopaque) i32 {
        return C.QTableWidget_RowCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setColumnCount)
    ///
    /// ``` self: ?*C.QTableWidget, columns: i32 ```
    pub fn SetColumnCount(self: ?*anyopaque, columns: i32) void {
        C.QTableWidget_SetColumnCount(@ptrCast(self), @intCast(columns));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#columnCount)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ColumnCount(self: ?*anyopaque) i32 {
        return C.QTableWidget_ColumnCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#row)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem ```
    pub fn Row(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return C.QTableWidget_Row(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#column)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem ```
    pub fn Column(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return C.QTableWidget_Column(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#item)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32 ```
    pub fn Item(self: ?*anyopaque, row: i32, column: i32) ?*C.QTableWidgetItem {
        return C.QTableWidget_Item(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setItem)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32, item: ?*C.QTableWidgetItem ```
    pub fn SetItem(self: ?*anyopaque, row: i32, column: i32, item: ?*anyopaque) void {
        C.QTableWidget_SetItem(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#takeItem)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32 ```
    pub fn TakeItem(self: ?*anyopaque, row: i32, column: i32) ?*C.QTableWidgetItem {
        return C.QTableWidget_TakeItem(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#items)
    ///
    /// ``` self: ?*C.QTableWidget, data: ?*C.QMimeData, allocator: std.mem.Allocator ```
    pub fn Items(self: ?*anyopaque, data: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QTableWidgetItem {
        const _arr: C.struct_libqt_list = C.QTableWidget_Items(@ptrCast(self), @ptrCast(data));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QTableWidgetItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QTableWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#indexFromItem)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem ```
    pub fn IndexFromItem(self: ?*anyopaque, item: ?*anyopaque) ?*C.QModelIndex {
        return C.QTableWidget_IndexFromItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemFromIndex)
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn ItemFromIndex(self: ?*anyopaque, index: ?*anyopaque) ?*C.QTableWidgetItem {
        return C.QTableWidget_ItemFromIndex(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#verticalHeaderItem)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32 ```
    pub fn VerticalHeaderItem(self: ?*anyopaque, row: i32) ?*C.QTableWidgetItem {
        return C.QTableWidget_VerticalHeaderItem(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setVerticalHeaderItem)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, item: ?*C.QTableWidgetItem ```
    pub fn SetVerticalHeaderItem(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        C.QTableWidget_SetVerticalHeaderItem(@ptrCast(self), @intCast(row), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#takeVerticalHeaderItem)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32 ```
    pub fn TakeVerticalHeaderItem(self: ?*anyopaque, row: i32) ?*C.QTableWidgetItem {
        return C.QTableWidget_TakeVerticalHeaderItem(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#horizontalHeaderItem)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32 ```
    pub fn HorizontalHeaderItem(self: ?*anyopaque, column: i32) ?*C.QTableWidgetItem {
        return C.QTableWidget_HorizontalHeaderItem(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setHorizontalHeaderItem)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32, item: ?*C.QTableWidgetItem ```
    pub fn SetHorizontalHeaderItem(self: ?*anyopaque, column: i32, item: ?*anyopaque) void {
        C.QTableWidget_SetHorizontalHeaderItem(@ptrCast(self), @intCast(column), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#takeHorizontalHeaderItem)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32 ```
    pub fn TakeHorizontalHeaderItem(self: ?*anyopaque, column: i32) ?*C.QTableWidgetItem {
        return C.QTableWidget_TakeHorizontalHeaderItem(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setVerticalHeaderLabels)
    ///
    /// ``` self: ?*C.QTableWidget, labels: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetVerticalHeaderLabels(self: ?*anyopaque, labels: [][]const u8, allocator: std.mem.Allocator) void {
        var labels_arr = allocator.alloc(C.struct_libqt_string, labels.len) catch @panic("Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |item, _i| {
            labels_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const labels_list = C.struct_libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        C.QTableWidget_SetVerticalHeaderLabels(@ptrCast(self), labels_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setHorizontalHeaderLabels)
    ///
    /// ``` self: ?*C.QTableWidget, labels: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetHorizontalHeaderLabels(self: ?*anyopaque, labels: [][]const u8, allocator: std.mem.Allocator) void {
        var labels_arr = allocator.alloc(C.struct_libqt_string, labels.len) catch @panic("Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |item, _i| {
            labels_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const labels_list = C.struct_libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        C.QTableWidget_SetHorizontalHeaderLabels(@ptrCast(self), labels_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentRow)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn CurrentRow(self: ?*anyopaque) i32 {
        return C.QTableWidget_CurrentRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentColumn)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn CurrentColumn(self: ?*anyopaque) i32 {
        return C.QTableWidget_CurrentColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentItem)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn CurrentItem(self: ?*anyopaque) ?*C.QTableWidgetItem {
        return C.QTableWidget_CurrentItem(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentItem)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem ```
    pub fn SetCurrentItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTableWidget_SetCurrentItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentItem)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem, command: i32 ```
    pub fn SetCurrentItem2(self: ?*anyopaque, item: ?*anyopaque, command: i64) void {
        C.QTableWidget_SetCurrentItem2(@ptrCast(self), @ptrCast(item), @intCast(command));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentCell)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32 ```
    pub fn SetCurrentCell(self: ?*anyopaque, row: i32, column: i32) void {
        C.QTableWidget_SetCurrentCell(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentCell)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32, command: i32 ```
    pub fn SetCurrentCell2(self: ?*anyopaque, row: i32, column: i32, command: i64) void {
        C.QTableWidget_SetCurrentCell2(@ptrCast(self), @intCast(row), @intCast(column), @intCast(command));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#sortItems)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32 ```
    pub fn SortItems(self: ?*anyopaque, column: i32) void {
        C.QTableWidget_SortItems(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setSortingEnabled)
    ///
    /// ``` self: ?*C.QTableWidget, enable: bool ```
    pub fn SetSortingEnabled(self: ?*anyopaque, enable: bool) void {
        C.QTableWidget_SetSortingEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#isSortingEnabled)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IsSortingEnabled(self: ?*anyopaque) bool {
        return C.QTableWidget_IsSortingEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#editItem)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem ```
    pub fn EditItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTableWidget_EditItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#openPersistentEditor)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem ```
    pub fn OpenPersistentEditor(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTableWidget_OpenPersistentEditor(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#closePersistentEditor)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem ```
    pub fn ClosePersistentEditor(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTableWidget_ClosePersistentEditor(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#isPersistentEditorOpen)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem ```
    pub fn IsPersistentEditorOpen(self: ?*anyopaque, item: ?*anyopaque) bool {
        return C.QTableWidget_IsPersistentEditorOpen(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellWidget)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32 ```
    pub fn CellWidget(self: ?*anyopaque, row: i32, column: i32) ?*C.QWidget {
        return C.QTableWidget_CellWidget(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCellWidget)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32, widget: ?*C.QWidget ```
    pub fn SetCellWidget(self: ?*anyopaque, row: i32, column: i32, widget: ?*anyopaque) void {
        C.QTableWidget_SetCellWidget(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#removeCellWidget)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32 ```
    pub fn RemoveCellWidget(self: ?*anyopaque, row: i32, column: i32) void {
        C.QTableWidget_RemoveCellWidget(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setRangeSelected)
    ///
    /// ``` self: ?*C.QTableWidget, range: ?*C.QTableWidgetSelectionRange, selectVal: bool ```
    pub fn SetRangeSelected(self: ?*anyopaque, range: ?*anyopaque, selectVal: bool) void {
        C.QTableWidget_SetRangeSelected(@ptrCast(self), @ptrCast(range), selectVal);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#selectedRanges)
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
    pub fn SelectedRanges(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QTableWidgetSelectionRange {
        const _arr: C.struct_libqt_list = C.QTableWidget_SelectedRanges(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QTableWidgetSelectionRange, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QTableWidgetSelectionRange = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#selectedItems)
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
    pub fn SelectedItems(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QTableWidgetItem {
        const _arr: C.struct_libqt_list = C.QTableWidget_SelectedItems(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QTableWidgetItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QTableWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#findItems)
    ///
    /// ``` self: ?*C.QTableWidget, text: []const u8, flags: i32, allocator: std.mem.Allocator ```
    pub fn FindItems(self: ?*anyopaque, text: []const u8, flags: i64, allocator: std.mem.Allocator) []?*C.QTableWidgetItem {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        const _arr: C.struct_libqt_list = C.QTableWidget_FindItems(@ptrCast(self), text_str, @intCast(flags));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QTableWidgetItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QTableWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#visualRow)
    ///
    /// ``` self: ?*C.QTableWidget, logicalRow: i32 ```
    pub fn VisualRow(self: ?*anyopaque, logicalRow: i32) i32 {
        return C.QTableWidget_VisualRow(@ptrCast(self), @intCast(logicalRow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#visualColumn)
    ///
    /// ``` self: ?*C.QTableWidget, logicalColumn: i32 ```
    pub fn VisualColumn(self: ?*anyopaque, logicalColumn: i32) i32 {
        return C.QTableWidget_VisualColumn(@ptrCast(self), @intCast(logicalColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemAt)
    ///
    /// ``` self: ?*C.QTableWidget, p: ?*C.QPoint ```
    pub fn ItemAt(self: ?*anyopaque, p: ?*anyopaque) ?*C.QTableWidgetItem {
        return C.QTableWidget_ItemAt(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemAt)
    ///
    /// ``` self: ?*C.QTableWidget, x: i32, y: i32 ```
    pub fn ItemAt2(self: ?*anyopaque, x: i32, y: i32) ?*C.QTableWidgetItem {
        return C.QTableWidget_ItemAt2(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#visualItemRect)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem ```
    pub fn VisualItemRect(self: ?*anyopaque, item: ?*anyopaque) ?*C.QRect {
        return C.QTableWidget_VisualItemRect(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemPrototype)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ItemPrototype(self: ?*anyopaque) ?*C.QTableWidgetItem {
        return C.QTableWidget_ItemPrototype(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setItemPrototype)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem ```
    pub fn SetItemPrototype(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTableWidget_SetItemPrototype(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#scrollToItem)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem ```
    pub fn ScrollToItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTableWidget_ScrollToItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#insertRow)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32 ```
    pub fn InsertRow(self: ?*anyopaque, row: i32) void {
        C.QTableWidget_InsertRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#insertColumn)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32 ```
    pub fn InsertColumn(self: ?*anyopaque, column: i32) void {
        C.QTableWidget_InsertColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#removeRow)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32 ```
    pub fn RemoveRow(self: ?*anyopaque, row: i32) void {
        C.QTableWidget_RemoveRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#removeColumn)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32 ```
    pub fn RemoveColumn(self: ?*anyopaque, column: i32) void {
        C.QTableWidget_RemoveColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#clear)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Clear(self: ?*anyopaque) void {
        C.QTableWidget_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#clearContents)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ClearContents(self: ?*anyopaque) void {
        C.QTableWidget_ClearContents(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemPressed)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem ```
    pub fn ItemPressed(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTableWidget_ItemPressed(@ptrCast(self), @ptrCast(item));
    }

    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QTableWidgetItem) callconv(.c) void ```
    pub fn OnItemPressed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_Connect_ItemPressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemClicked)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem ```
    pub fn ItemClicked(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTableWidget_ItemClicked(@ptrCast(self), @ptrCast(item));
    }

    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QTableWidgetItem) callconv(.c) void ```
    pub fn OnItemClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_Connect_ItemClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemDoubleClicked)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem ```
    pub fn ItemDoubleClicked(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTableWidget_ItemDoubleClicked(@ptrCast(self), @ptrCast(item));
    }

    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QTableWidgetItem) callconv(.c) void ```
    pub fn OnItemDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_Connect_ItemDoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemActivated)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem ```
    pub fn ItemActivated(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTableWidget_ItemActivated(@ptrCast(self), @ptrCast(item));
    }

    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QTableWidgetItem) callconv(.c) void ```
    pub fn OnItemActivated(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_Connect_ItemActivated(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemEntered)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem ```
    pub fn ItemEntered(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTableWidget_ItemEntered(@ptrCast(self), @ptrCast(item));
    }

    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QTableWidgetItem) callconv(.c) void ```
    pub fn OnItemEntered(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_Connect_ItemEntered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemChanged)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem ```
    pub fn ItemChanged(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTableWidget_ItemChanged(@ptrCast(self), @ptrCast(item));
    }

    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QTableWidgetItem) callconv(.c) void ```
    pub fn OnItemChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_Connect_ItemChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentItemChanged)
    ///
    /// ``` self: ?*C.QTableWidget, current: ?*C.QTableWidgetItem, previous: ?*C.QTableWidgetItem ```
    pub fn CurrentItemChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        C.QTableWidget_CurrentItemChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QTableWidgetItem, ?*C.QTableWidgetItem) callconv(.c) void ```
    pub fn OnCurrentItemChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_Connect_CurrentItemChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemSelectionChanged)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ItemSelectionChanged(self: ?*anyopaque) void {
        C.QTableWidget_ItemSelectionChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget) callconv(.c) void ```
    pub fn OnItemSelectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_Connect_ItemSelectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellPressed)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32 ```
    pub fn CellPressed(self: ?*anyopaque, row: i32, column: i32) void {
        C.QTableWidget_CellPressed(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32, i32) callconv(.c) void ```
    pub fn OnCellPressed(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QTableWidget_Connect_CellPressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellClicked)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32 ```
    pub fn CellClicked(self: ?*anyopaque, row: i32, column: i32) void {
        C.QTableWidget_CellClicked(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32, i32) callconv(.c) void ```
    pub fn OnCellClicked(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QTableWidget_Connect_CellClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellDoubleClicked)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32 ```
    pub fn CellDoubleClicked(self: ?*anyopaque, row: i32, column: i32) void {
        C.QTableWidget_CellDoubleClicked(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32, i32) callconv(.c) void ```
    pub fn OnCellDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QTableWidget_Connect_CellDoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellActivated)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32 ```
    pub fn CellActivated(self: ?*anyopaque, row: i32, column: i32) void {
        C.QTableWidget_CellActivated(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32, i32) callconv(.c) void ```
    pub fn OnCellActivated(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QTableWidget_Connect_CellActivated(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellEntered)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32 ```
    pub fn CellEntered(self: ?*anyopaque, row: i32, column: i32) void {
        C.QTableWidget_CellEntered(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32, i32) callconv(.c) void ```
    pub fn OnCellEntered(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QTableWidget_Connect_CellEntered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellChanged)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32 ```
    pub fn CellChanged(self: ?*anyopaque, row: i32, column: i32) void {
        C.QTableWidget_CellChanged(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32, i32) callconv(.c) void ```
    pub fn OnCellChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QTableWidget_Connect_CellChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentCellChanged)
    ///
    /// ``` self: ?*C.QTableWidget, currentRow: i32, currentColumn: i32, previousRow: i32, previousColumn: i32 ```
    pub fn CurrentCellChanged(self: ?*anyopaque, currentRow: i32, currentColumn: i32, previousRow: i32, previousColumn: i32) void {
        C.QTableWidget_CurrentCellChanged(@ptrCast(self), @intCast(currentRow), @intCast(currentColumn), @intCast(previousRow), @intCast(previousColumn));
    }

    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32, i32, i32, i32) callconv(.c) void ```
    pub fn OnCurrentCellChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        C.QTableWidget_Connect_CurrentCellChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#event)
    ///
    /// ``` self: ?*C.QTableWidget, e: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return C.QTableWidget_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTableWidget_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTableWidget, e: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return C.QTableWidget_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeTypes)
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
    pub fn MimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QTableWidget_MimeTypes(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) [][]const u8 ```
    pub fn OnMimeTypes(self: ?*anyopaque, slot: fn () callconv(.c) [][]const u8) void {
        C.QTableWidget_OnMimeTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
    pub fn QBaseMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QTableWidget_QBaseMimeTypes(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeData)
    ///
    /// ``` self: ?*C.QTableWidget, items: []?*C.QTableWidgetItem ```
    pub fn MimeData(self: ?*anyopaque, items: []?*anyopaque) ?*C.QMimeData {
        const items_list = C.struct_libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return C.QTableWidget_MimeData(@ptrCast(self), items_list);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, []?*C.QTableWidgetItem) callconv(.c) ?*C.QMimeData ```
    pub fn OnMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, []?*anyopaque) callconv(.c) ?*C.QMimeData) void {
        C.QTableWidget_OnMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTableWidget, items: []?*C.QTableWidgetItem ```
    pub fn QBaseMimeData(self: ?*anyopaque, items: []?*anyopaque) ?*C.QMimeData {
        const items_list = C.struct_libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return C.QTableWidget_QBaseMimeData(@ptrCast(self), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropMimeData)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32, data: ?*C.QMimeData, action: qnamespace_enums.DropAction ```
    pub fn DropMimeData(self: ?*anyopaque, row: i32, column: i32, data: ?*anyopaque, action: i64) bool {
        return C.QTableWidget_DropMimeData(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(data), @intCast(action));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32, i32, ?*C.QMimeData, qnamespace_enums.DropAction) callconv(.c) bool ```
    pub fn OnDropMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque, i64) callconv(.c) bool) void {
        C.QTableWidget_OnDropMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32, data: ?*C.QMimeData, action: qnamespace_enums.DropAction ```
    pub fn QBaseDropMimeData(self: ?*anyopaque, row: i32, column: i32, data: ?*anyopaque, action: i64) bool {
        return C.QTableWidget_QBaseDropMimeData(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(data), @intCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#supportedDropActions)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn SupportedDropActions(self: ?*anyopaque) i64 {
        return C.QTableWidget_SupportedDropActions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) i64 ```
    pub fn OnSupportedDropActions(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QTableWidget_OnSupportedDropActions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseSupportedDropActions(self: ?*anyopaque) i64 {
        return C.QTableWidget_QBaseSupportedDropActions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropEvent)
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnDropEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QTableWidget_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QTableWidget_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#sortItems)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn SortItems2(self: ?*anyopaque, column: i32, order: i64) void {
        C.QTableWidget_SortItems2(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#scrollToItem)
    ///
    /// ``` self: ?*C.QTableWidget, item: ?*C.QTableWidgetItem, hint: qabstractitemview_enums.ScrollHint ```
    pub fn ScrollToItem2(self: ?*anyopaque, item: ?*anyopaque, hint: i64) void {
        C.QTableWidget_ScrollToItem2(@ptrCast(self), @ptrCast(item), @intCast(hint));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setModel)
    ///
    /// ``` self: ?*C.QTableWidget, model: ?*C.QAbstractItemModel ```
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        C.QTableView_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Inherited from QTableView
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTableView, slot: fn (?*C.QTableView, ?*C.QAbstractItemModel) callconv(.c) void ```
    pub fn OnSetModel(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableView_OnSetModel(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTableWidget, model: ?*C.QAbstractItemModel ```
    pub fn QBaseSetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        C.QTableView_QBaseSetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalHeader)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn HorizontalHeader(self: ?*anyopaque) ?*C.QHeaderView {
        return C.QTableView_HorizontalHeader(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalHeader)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn VerticalHeader(self: ?*anyopaque) ?*C.QHeaderView {
        return C.QTableView_VerticalHeader(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setHorizontalHeader)
    ///
    /// ``` self: ?*C.QTableWidget, header: ?*C.QHeaderView ```
    pub fn SetHorizontalHeader(self: ?*anyopaque, header: ?*anyopaque) void {
        C.QTableView_SetHorizontalHeader(@ptrCast(self), @ptrCast(header));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setVerticalHeader)
    ///
    /// ``` self: ?*C.QTableWidget, header: ?*C.QHeaderView ```
    pub fn SetVerticalHeader(self: ?*anyopaque, header: ?*anyopaque) void {
        C.QTableView_SetVerticalHeader(@ptrCast(self), @ptrCast(header));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowViewportPosition)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32 ```
    pub fn RowViewportPosition(self: ?*anyopaque, row: i32) i32 {
        return C.QTableView_RowViewportPosition(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowAt)
    ///
    /// ``` self: ?*C.QTableWidget, y: i32 ```
    pub fn RowAt(self: ?*anyopaque, y: i32) i32 {
        return C.QTableView_RowAt(@ptrCast(self), @intCast(y));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRowHeight)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, height: i32 ```
    pub fn SetRowHeight(self: ?*anyopaque, row: i32, height: i32) void {
        C.QTableView_SetRowHeight(@ptrCast(self), @intCast(row), @intCast(height));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowHeight)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32 ```
    pub fn RowHeight(self: ?*anyopaque, row: i32) i32 {
        return C.QTableView_RowHeight(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnViewportPosition)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32 ```
    pub fn ColumnViewportPosition(self: ?*anyopaque, column: i32) i32 {
        return C.QTableView_ColumnViewportPosition(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnAt)
    ///
    /// ``` self: ?*C.QTableWidget, x: i32 ```
    pub fn ColumnAt(self: ?*anyopaque, x: i32) i32 {
        return C.QTableView_ColumnAt(@ptrCast(self), @intCast(x));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setColumnWidth)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32, width: i32 ```
    pub fn SetColumnWidth(self: ?*anyopaque, column: i32, width: i32) void {
        C.QTableView_SetColumnWidth(@ptrCast(self), @intCast(column), @intCast(width));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnWidth)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32 ```
    pub fn ColumnWidth(self: ?*anyopaque, column: i32) i32 {
        return C.QTableView_ColumnWidth(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isRowHidden)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32 ```
    pub fn IsRowHidden(self: ?*anyopaque, row: i32) bool {
        return C.QTableView_IsRowHidden(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRowHidden)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, hide: bool ```
    pub fn SetRowHidden(self: ?*anyopaque, row: i32, hide: bool) void {
        C.QTableView_SetRowHidden(@ptrCast(self), @intCast(row), hide);
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isColumnHidden)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32 ```
    pub fn IsColumnHidden(self: ?*anyopaque, column: i32) bool {
        return C.QTableView_IsColumnHidden(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setColumnHidden)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32, hide: bool ```
    pub fn SetColumnHidden(self: ?*anyopaque, column: i32, hide: bool) void {
        C.QTableView_SetColumnHidden(@ptrCast(self), @intCast(column), hide);
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showGrid)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ShowGrid(self: ?*anyopaque) bool {
        return C.QTableView_ShowGrid(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#gridStyle)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn GridStyle(self: ?*anyopaque) i64 {
        return C.QTableView_GridStyle(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setGridStyle)
    ///
    /// ``` self: ?*C.QTableWidget, style: qnamespace_enums.PenStyle ```
    pub fn SetGridStyle(self: ?*anyopaque, style: i64) void {
        C.QTableView_SetGridStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setWordWrap)
    ///
    /// ``` self: ?*C.QTableWidget, on: bool ```
    pub fn SetWordWrap(self: ?*anyopaque, on: bool) void {
        C.QTableView_SetWordWrap(@ptrCast(self), on);
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#wordWrap)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn WordWrap(self: ?*anyopaque) bool {
        return C.QTableView_WordWrap(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setCornerButtonEnabled)
    ///
    /// ``` self: ?*C.QTableWidget, enable: bool ```
    pub fn SetCornerButtonEnabled(self: ?*anyopaque, enable: bool) void {
        C.QTableView_SetCornerButtonEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isCornerButtonEnabled)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IsCornerButtonEnabled(self: ?*anyopaque) bool {
        return C.QTableView_IsCornerButtonEnabled(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSpan)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32, rowSpan: i32, columnSpan: i32 ```
    pub fn SetSpan(self: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        C.QTableView_SetSpan(@ptrCast(self), @intCast(row), @intCast(column), @intCast(rowSpan), @intCast(columnSpan));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowSpan)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32 ```
    pub fn RowSpan(self: ?*anyopaque, row: i32, column: i32) i32 {
        return C.QTableView_RowSpan(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnSpan)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, column: i32 ```
    pub fn ColumnSpan(self: ?*anyopaque, row: i32, column: i32) i32 {
        return C.QTableView_ColumnSpan(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#clearSpans)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ClearSpans(self: ?*anyopaque) void {
        C.QTableView_ClearSpans(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectRow)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32 ```
    pub fn SelectRow(self: ?*anyopaque, row: i32) void {
        C.QTableView_SelectRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectColumn)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32 ```
    pub fn SelectColumn(self: ?*anyopaque, column: i32) void {
        C.QTableView_SelectColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#hideRow)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32 ```
    pub fn HideRow(self: ?*anyopaque, row: i32) void {
        C.QTableView_HideRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#hideColumn)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32 ```
    pub fn HideColumn(self: ?*anyopaque, column: i32) void {
        C.QTableView_HideColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showRow)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32 ```
    pub fn ShowRow(self: ?*anyopaque, row: i32) void {
        C.QTableView_ShowRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showColumn)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32 ```
    pub fn ShowColumn(self: ?*anyopaque, column: i32) void {
        C.QTableView_ShowColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeRowToContents)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32 ```
    pub fn ResizeRowToContents(self: ?*anyopaque, row: i32) void {
        C.QTableView_ResizeRowToContents(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeRowsToContents)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ResizeRowsToContents(self: ?*anyopaque) void {
        C.QTableView_ResizeRowsToContents(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeColumnToContents)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32 ```
    pub fn ResizeColumnToContents(self: ?*anyopaque, column: i32) void {
        C.QTableView_ResizeColumnToContents(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeColumnsToContents)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ResizeColumnsToContents(self: ?*anyopaque) void {
        C.QTableView_ResizeColumnsToContents(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sortByColumn)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn SortByColumn(self: ?*anyopaque, column: i32, order: i64) void {
        C.QTableView_SortByColumn(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setShowGrid)
    ///
    /// ``` self: ?*C.QTableWidget, show: bool ```
    pub fn SetShowGrid(self: ?*anyopaque, show: bool) void {
        C.QTableView_SetShowGrid(@ptrCast(self), show);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Model(self: ?*anyopaque) ?*C.QAbstractItemModel {
        return C.QAbstractItemView_Model(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn SelectionModel(self: ?*anyopaque) ?*C.QItemSelectionModel {
        return C.QAbstractItemView_SelectionModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
    ///
    /// ``` self: ?*C.QTableWidget, delegate: ?*C.QAbstractItemDelegate ```
    pub fn SetItemDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        C.QAbstractItemView_SetItemDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ItemDelegate(self: ?*anyopaque) ?*C.QAbstractItemDelegate {
        return C.QAbstractItemView_ItemDelegate(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
    ///
    /// ``` self: ?*C.QTableWidget, mode: qabstractitemview_enums.SelectionMode ```
    pub fn SetSelectionMode(self: ?*anyopaque, mode: i64) void {
        C.QAbstractItemView_SetSelectionMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn SelectionMode(self: ?*anyopaque) i64 {
        return C.QAbstractItemView_SelectionMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
    ///
    /// ``` self: ?*C.QTableWidget, behavior: qabstractitemview_enums.SelectionBehavior ```
    pub fn SetSelectionBehavior(self: ?*anyopaque, behavior: i64) void {
        C.QAbstractItemView_SetSelectionBehavior(@ptrCast(self), @intCast(behavior));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn SelectionBehavior(self: ?*anyopaque) i64 {
        return C.QAbstractItemView_SelectionBehavior(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn CurrentIndex(self: ?*anyopaque) ?*C.QModelIndex {
        return C.QAbstractItemView_CurrentIndex(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn RootIndex(self: ?*anyopaque) ?*C.QModelIndex {
        return C.QAbstractItemView_RootIndex(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
    ///
    /// ``` self: ?*C.QTableWidget, triggers: i32 ```
    pub fn SetEditTriggers(self: ?*anyopaque, triggers: i64) void {
        C.QAbstractItemView_SetEditTriggers(@ptrCast(self), @intCast(triggers));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn EditTriggers(self: ?*anyopaque) i64 {
        return C.QAbstractItemView_EditTriggers(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
    ///
    /// ``` self: ?*C.QTableWidget, mode: qabstractitemview_enums.ScrollMode ```
    pub fn SetVerticalScrollMode(self: ?*anyopaque, mode: i64) void {
        C.QAbstractItemView_SetVerticalScrollMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn VerticalScrollMode(self: ?*anyopaque) i64 {
        return C.QAbstractItemView_VerticalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ResetVerticalScrollMode(self: ?*anyopaque) void {
        C.QAbstractItemView_ResetVerticalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
    ///
    /// ``` self: ?*C.QTableWidget, mode: qabstractitemview_enums.ScrollMode ```
    pub fn SetHorizontalScrollMode(self: ?*anyopaque, mode: i64) void {
        C.QAbstractItemView_SetHorizontalScrollMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn HorizontalScrollMode(self: ?*anyopaque) i64 {
        return C.QAbstractItemView_HorizontalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ResetHorizontalScrollMode(self: ?*anyopaque) void {
        C.QAbstractItemView_ResetHorizontalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
    ///
    /// ``` self: ?*C.QTableWidget, enable: bool ```
    pub fn SetAutoScroll(self: ?*anyopaque, enable: bool) void {
        C.QAbstractItemView_SetAutoScroll(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn HasAutoScroll(self: ?*anyopaque) bool {
        return C.QAbstractItemView_HasAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
    ///
    /// ``` self: ?*C.QTableWidget, margin: i32 ```
    pub fn SetAutoScrollMargin(self: ?*anyopaque, margin: i32) void {
        C.QAbstractItemView_SetAutoScrollMargin(@ptrCast(self), @intCast(margin));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn AutoScrollMargin(self: ?*anyopaque) i32 {
        return C.QAbstractItemView_AutoScrollMargin(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
    ///
    /// ``` self: ?*C.QTableWidget, enable: bool ```
    pub fn SetTabKeyNavigation(self: ?*anyopaque, enable: bool) void {
        C.QAbstractItemView_SetTabKeyNavigation(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn TabKeyNavigation(self: ?*anyopaque) bool {
        return C.QAbstractItemView_TabKeyNavigation(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
    ///
    /// ``` self: ?*C.QTableWidget, enable: bool ```
    pub fn SetDropIndicatorShown(self: ?*anyopaque, enable: bool) void {
        C.QAbstractItemView_SetDropIndicatorShown(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ShowDropIndicator(self: ?*anyopaque) bool {
        return C.QAbstractItemView_ShowDropIndicator(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
    ///
    /// ``` self: ?*C.QTableWidget, enable: bool ```
    pub fn SetDragEnabled(self: ?*anyopaque, enable: bool) void {
        C.QAbstractItemView_SetDragEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn DragEnabled(self: ?*anyopaque) bool {
        return C.QAbstractItemView_DragEnabled(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
    ///
    /// ``` self: ?*C.QTableWidget, overwrite: bool ```
    pub fn SetDragDropOverwriteMode(self: ?*anyopaque, overwrite: bool) void {
        C.QAbstractItemView_SetDragDropOverwriteMode(@ptrCast(self), overwrite);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn DragDropOverwriteMode(self: ?*anyopaque) bool {
        return C.QAbstractItemView_DragDropOverwriteMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
    ///
    /// ``` self: ?*C.QTableWidget, behavior: qabstractitemview_enums.DragDropMode ```
    pub fn SetDragDropMode(self: ?*anyopaque, behavior: i64) void {
        C.QAbstractItemView_SetDragDropMode(@ptrCast(self), @intCast(behavior));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn DragDropMode(self: ?*anyopaque) i64 {
        return C.QAbstractItemView_DragDropMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
    ///
    /// ``` self: ?*C.QTableWidget, dropAction: qnamespace_enums.DropAction ```
    pub fn SetDefaultDropAction(self: ?*anyopaque, dropAction: i64) void {
        C.QAbstractItemView_SetDefaultDropAction(@ptrCast(self), @intCast(dropAction));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn DefaultDropAction(self: ?*anyopaque) i64 {
        return C.QAbstractItemView_DefaultDropAction(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
    ///
    /// ``` self: ?*C.QTableWidget, enable: bool ```
    pub fn SetAlternatingRowColors(self: ?*anyopaque, enable: bool) void {
        C.QAbstractItemView_SetAlternatingRowColors(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn AlternatingRowColors(self: ?*anyopaque) bool {
        return C.QAbstractItemView_AlternatingRowColors(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
    ///
    /// ``` self: ?*C.QTableWidget, size: ?*C.QSize ```
    pub fn SetIconSize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QAbstractItemView_SetIconSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IconSize(self: ?*anyopaque) ?*C.QSize {
        return C.QAbstractItemView_IconSize(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
    ///
    /// ``` self: ?*C.QTableWidget, mode: qnamespace_enums.TextElideMode ```
    pub fn SetTextElideMode(self: ?*anyopaque, mode: i64) void {
        C.QAbstractItemView_SetTextElideMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn TextElideMode(self: ?*anyopaque) i64 {
        return C.QAbstractItemView_TextElideMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn SizeHintForIndex(self: ?*anyopaque, index: ?*anyopaque) ?*C.QSize {
        return C.QAbstractItemView_SizeHintForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex, widget: ?*C.QWidget ```
    pub fn SetIndexWidget(self: ?*anyopaque, index: ?*anyopaque, widget: ?*anyopaque) void {
        C.QAbstractItemView_SetIndexWidget(@ptrCast(self), @ptrCast(index), @ptrCast(widget));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn IndexWidget(self: ?*anyopaque, index: ?*anyopaque) ?*C.QWidget {
        return C.QAbstractItemView_IndexWidget(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, delegate: ?*C.QAbstractItemDelegate ```
    pub fn SetItemDelegateForRow(self: ?*anyopaque, row: i32, delegate: ?*anyopaque) void {
        C.QAbstractItemView_SetItemDelegateForRow(@ptrCast(self), @intCast(row), @ptrCast(delegate));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
    ///
    /// ``` self: ?*C.QTableWidget, row: i32 ```
    pub fn ItemDelegateForRow(self: ?*anyopaque, row: i32) ?*C.QAbstractItemDelegate {
        return C.QAbstractItemView_ItemDelegateForRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32, delegate: ?*C.QAbstractItemDelegate ```
    pub fn SetItemDelegateForColumn(self: ?*anyopaque, column: i32, delegate: ?*anyopaque) void {
        C.QAbstractItemView_SetItemDelegateForColumn(@ptrCast(self), @intCast(column), @ptrCast(delegate));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
    ///
    /// ``` self: ?*C.QTableWidget, column: i32 ```
    pub fn ItemDelegateForColumn(self: ?*anyopaque, column: i32) ?*C.QAbstractItemDelegate {
        return C.QAbstractItemView_ItemDelegateForColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn ItemDelegateWithIndex(self: ?*anyopaque, index: ?*anyopaque) ?*C.QAbstractItemDelegate {
        return C.QAbstractItemView_ItemDelegateWithIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn Edit(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QAbstractItemView_Edit(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ClearSelection(self: ?*anyopaque) void {
        C.QAbstractItemView_ClearSelection(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn SetCurrentIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QAbstractItemView_SetCurrentIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ScrollToTop(self: ?*anyopaque) void {
        C.QAbstractItemView_ScrollToTop(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ScrollToBottom(self: ?*anyopaque) void {
        C.QAbstractItemView_ScrollToBottom(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn Update(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QAbstractItemView_Update(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn Pressed(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QAbstractItemView_Pressed(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ``` self: ?*C.QAbstractItemView, slot: fn (?*C.QAbstractItemView, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnPressed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractItemView_Connect_Pressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn Clicked(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QAbstractItemView_Clicked(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ``` self: ?*C.QAbstractItemView, slot: fn (?*C.QAbstractItemView, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractItemView_Connect_Clicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn DoubleClicked(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QAbstractItemView_DoubleClicked(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ``` self: ?*C.QAbstractItemView, slot: fn (?*C.QAbstractItemView, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractItemView_Connect_DoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn Activated(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QAbstractItemView_Activated(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ``` self: ?*C.QAbstractItemView, slot: fn (?*C.QAbstractItemView, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnActivated(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractItemView_Connect_Activated(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn Entered(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QAbstractItemView_Entered(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ``` self: ?*C.QAbstractItemView, slot: fn (?*C.QAbstractItemView, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnEntered(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractItemView_Connect_Entered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ViewportEntered(self: ?*anyopaque) void {
        C.QAbstractItemView_ViewportEntered(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ``` self: ?*C.QAbstractItemView, slot: fn (?*C.QAbstractItemView) callconv(.c) void ```
    pub fn OnViewportEntered(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractItemView_Connect_ViewportEntered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ``` self: ?*C.QTableWidget, size: ?*C.QSize ```
    pub fn IconSizeChanged(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QAbstractItemView_IconSizeChanged(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ``` self: ?*C.QAbstractItemView, slot: fn (?*C.QAbstractItemView, ?*C.QSize) callconv(.c) void ```
    pub fn OnIconSizeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractItemView_Connect_IconSizeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn VerticalScrollBarPolicy(self: ?*anyopaque) i64 {
        return C.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ``` self: ?*C.QTableWidget, verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetVerticalScrollBarPolicy(self: ?*anyopaque, verticalScrollBarPolicy: i64) void {
        C.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self), @intCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn VerticalScrollBar(self: ?*anyopaque) ?*C.QScrollBar {
        return C.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ``` self: ?*C.QTableWidget, scrollbar: ?*C.QScrollBar ```
    pub fn SetVerticalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        C.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn HorizontalScrollBarPolicy(self: ?*anyopaque) i64 {
        return C.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ``` self: ?*C.QTableWidget, horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetHorizontalScrollBarPolicy(self: ?*anyopaque, horizontalScrollBarPolicy: i64) void {
        C.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self), @intCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn HorizontalScrollBar(self: ?*anyopaque) ?*C.QScrollBar {
        return C.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ``` self: ?*C.QTableWidget, scrollbar: ?*C.QScrollBar ```
    pub fn SetHorizontalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        C.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn CornerWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QAbstractScrollArea_CornerWidget(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ``` self: ?*C.QTableWidget, widget: ?*C.QWidget ```
    pub fn SetCornerWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QAbstractScrollArea_SetCornerWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ``` self: ?*C.QTableWidget, widget: ?*C.QWidget, alignment: i32 ```
    pub fn AddScrollBarWidget(self: ?*anyopaque, widget: ?*anyopaque, alignment: i64) void {
        C.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self), @ptrCast(widget), @intCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ``` self: ?*C.QTableWidget, alignment: i32, allocator: std.mem.Allocator ```
    pub fn ScrollBarWidgets(self: ?*anyopaque, alignment: i64, allocator: std.mem.Allocator) []?*C.QWidget {
        const _arr: C.struct_libqt_list = C.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self), @intCast(alignment));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QWidget, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Viewport(self: ?*anyopaque) ?*C.QWidget {
        return C.QAbstractScrollArea_Viewport(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ``` self: ?*C.QTableWidget, widget: ?*C.QWidget ```
    pub fn SetViewport(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QAbstractScrollArea_SetViewport(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn MaximumViewportSize(self: ?*anyopaque) ?*C.QSize {
        return C.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn SizeAdjustPolicy(self: ?*anyopaque) i64 {
        return C.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ``` self: ?*C.QTableWidget, policy: qabstractscrollarea_enums.SizeAdjustPolicy ```
    pub fn SetSizeAdjustPolicy(self: ?*anyopaque, policy: i64) void {
        C.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn FrameStyle(self: ?*anyopaque) i32 {
        return C.QFrame_FrameStyle(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ``` self: ?*C.QTableWidget, frameStyle: i32 ```
    pub fn SetFrameStyle(self: ?*anyopaque, frameStyle: i32) void {
        C.QFrame_SetFrameStyle(@ptrCast(self), @intCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn FrameWidth(self: ?*anyopaque) i32 {
        return C.QFrame_FrameWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn FrameShape(self: ?*anyopaque) i64 {
        return C.QFrame_FrameShape(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ``` self: ?*C.QTableWidget, frameShape: qframe_enums.Shape ```
    pub fn SetFrameShape(self: ?*anyopaque, frameShape: i64) void {
        C.QFrame_SetFrameShape(@ptrCast(self), @intCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn FrameShadow(self: ?*anyopaque) i64 {
        return C.QFrame_FrameShadow(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ``` self: ?*C.QTableWidget, frameShadow: qframe_enums.Shadow ```
    pub fn SetFrameShadow(self: ?*anyopaque, frameShadow: i64) void {
        C.QFrame_SetFrameShadow(@ptrCast(self), @intCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return C.QFrame_LineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ``` self: ?*C.QTableWidget, lineWidth: i32 ```
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        C.QFrame_SetLineWidth(@ptrCast(self), @intCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return C.QFrame_MidLineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ``` self: ?*C.QTableWidget, midLineWidth: i32 ```
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        C.QFrame_SetMidLineWidth(@ptrCast(self), @intCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn FrameRect(self: ?*anyopaque) ?*C.QRect {
        return C.QFrame_FrameRect(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ``` self: ?*C.QTableWidget, frameRect: ?*C.QRect ```
    pub fn SetFrameRect(self: ?*anyopaque, frameRect: ?*anyopaque) void {
        C.QFrame_SetFrameRect(@ptrCast(self), @ptrCast(frameRect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn WinId(self: ?*anyopaque) usize {
        return C.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn CreateWinId(self: ?*anyopaque) void {
        C.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return C.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return C.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Style(self: ?*anyopaque) ?*C.QStyle {
        return C.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ``` self: ?*C.QTableWidget, style: ?*C.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        C.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return C.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return C.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return C.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn WindowModality(self: ?*anyopaque) i64 {
        return C.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ``` self: ?*C.QTableWidget, windowModality: qnamespace_enums.WindowModality ```
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i64) void {
        C.QWidget_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return C.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QWidget ```
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ``` self: ?*C.QTableWidget, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ``` self: ?*C.QTableWidget, disabled: bool ```
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        C.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ``` self: ?*C.QTableWidget, windowModified: bool ```
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        C.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn FrameGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Geometry(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn NormalGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn X(self: ?*anyopaque) i32 {
        return C.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Y(self: ?*anyopaque) i32 {
        return C.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Pos(self: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn FrameSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Size(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Width(self: ?*anyopaque) i32 {
        return C.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Height(self: ?*anyopaque) i32 {
        return C.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Rect(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ChildrenRect(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ChildrenRegion(self: ?*anyopaque) ?*C.QRegion {
        return C.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn MinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn MaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return C.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return C.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return C.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return C.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: ?*C.QTableWidget, minimumSize: ?*C.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        C.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: ?*C.QTableWidget, minw: i32, minh: i32 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        C.QWidget_SetMinimumSize2(@ptrCast(self), @intCast(minw), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: ?*C.QTableWidget, maximumSize: ?*C.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        C.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: ?*C.QTableWidget, maxw: i32, maxh: i32 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        C.QWidget_SetMaximumSize2(@ptrCast(self), @intCast(maxw), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ``` self: ?*C.QTableWidget, minw: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        C.QWidget_SetMinimumWidth(@ptrCast(self), @intCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ``` self: ?*C.QTableWidget, minh: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        C.QWidget_SetMinimumHeight(@ptrCast(self), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ``` self: ?*C.QTableWidget, maxw: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        C.QWidget_SetMaximumWidth(@ptrCast(self), @intCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ``` self: ?*C.QTableWidget, maxh: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        C.QWidget_SetMaximumHeight(@ptrCast(self), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn SizeIncrement(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: ?*C.QTableWidget, sizeIncrement: ?*C.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        C.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: ?*C.QTableWidget, w: i32, h: i32 ```
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        C.QWidget_SetSizeIncrement2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn BaseSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: ?*C.QTableWidget, baseSize: ?*C.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        C.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: ?*C.QTableWidget, basew: i32, baseh: i32 ```
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        C.QWidget_SetBaseSize2(@ptrCast(self), @intCast(basew), @intCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: ?*C.QTableWidget, fixedSize: ?*C.QSize ```
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        C.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: ?*C.QTableWidget, w: i32, h: i32 ```
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        C.QWidget_SetFixedSize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ``` self: ?*C.QTableWidget, w: i32 ```
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        C.QWidget_SetFixedWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ``` self: ?*C.QTableWidget, h: i32 ```
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        C.QWidget_SetFixedHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QPoint ```
    pub fn MapToGlobalWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapToGlobalWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QPoint ```
    pub fn MapFromGlobalWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapFromGlobalWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QPoint ```
    pub fn MapToParentWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapToParentWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QPoint ```
    pub fn MapFromParentWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapFromParentWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QWidget, param2: ?*C.QPointF ```
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QWidget, param2: ?*C.QPoint ```
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QWidget, param2: ?*C.QPointF ```
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QWidget, param2: ?*C.QPoint ```
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Window(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn NativeParentWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn TopLevelWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Palette(self: ?*anyopaque) ?*C.QPalette {
        return C.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ``` self: ?*C.QTableWidget, palette: ?*C.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        C.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ``` self: ?*C.QTableWidget, backgroundRole: qpalette_enums.ColorRole ```
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i64) void {
        C.QWidget_SetBackgroundRole(@ptrCast(self), @intCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn BackgroundRole(self: ?*anyopaque) i64 {
        return C.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ``` self: ?*C.QTableWidget, foregroundRole: qpalette_enums.ColorRole ```
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i64) void {
        C.QWidget_SetForegroundRole(@ptrCast(self), @intCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ForegroundRole(self: ?*anyopaque) i64 {
        return C.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Font(self: ?*anyopaque) ?*C.QFont {
        return C.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ``` self: ?*C.QTableWidget, font: ?*C.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        C.QWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn FontMetrics(self: ?*anyopaque) ?*C.QFontMetrics {
        return C.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn FontInfo(self: ?*anyopaque) ?*C.QFontInfo {
        return C.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Cursor(self: ?*anyopaque) ?*C.QCursor {
        return C.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ``` self: ?*C.QTableWidget, cursor: ?*C.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        C.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        C.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ``` self: ?*C.QTableWidget, enable: bool ```
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        C.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return C.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return C.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ``` self: ?*C.QTableWidget, enable: bool ```
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        C.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return C.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: ?*C.QTableWidget, mask: ?*C.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        C.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: ?*C.QTableWidget, mask: ?*C.QRegion ```
    pub fn SetMaskWithMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        C.QWidget_SetMaskWithMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Mask(self: ?*anyopaque) ?*C.QRegion {
        return C.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ClearMask(self: ?*anyopaque) void {
        C.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QTableWidget, target: ?*C.QPaintDevice ```
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        C.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QTableWidget, painter: ?*C.QPainter ```
    pub fn RenderWithPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        C.QWidget_RenderWithPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Grab(self: ?*anyopaque) ?*C.QPixmap {
        return C.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn GraphicsEffect(self: ?*anyopaque) ?*C.QGraphicsEffect {
        return C.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ``` self: ?*C.QTableWidget, effect: ?*C.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        C.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: ?*C.QTableWidget, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        C.QWidget_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ``` self: ?*C.QTableWidget, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        C.QWidget_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ``` self: ?*C.QTableWidget, windowTitle: []const u8 ```
    pub fn SetWindowTitle(self: ?*anyopaque, windowTitle: []const u8) void {
        const windowTitle_str = C.struct_libqt_string{
            .len = windowTitle.len,
            .data = @constCast(windowTitle.ptr),
        };
        C.QWidget_SetWindowTitle(@ptrCast(self), windowTitle_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ``` self: ?*C.QTableWidget, styleSheet: []const u8 ```
    pub fn SetStyleSheet(self: ?*anyopaque, styleSheet: []const u8) void {
        const styleSheet_str = C.struct_libqt_string{
            .len = styleSheet.len,
            .data = @constCast(styleSheet.ptr),
        };
        C.QWidget_SetStyleSheet(@ptrCast(self), styleSheet_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_StyleSheet(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_WindowTitle(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ``` self: ?*C.QTableWidget, icon: ?*C.QIcon ```
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        C.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn WindowIcon(self: ?*anyopaque) ?*C.QIcon {
        return C.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ``` self: ?*C.QTableWidget, windowIconText: []const u8 ```
    pub fn SetWindowIconText(self: ?*anyopaque, windowIconText: []const u8) void {
        const windowIconText_str = C.struct_libqt_string{
            .len = windowIconText.len,
            .data = @constCast(windowIconText.ptr),
        };
        C.QWidget_SetWindowIconText(@ptrCast(self), windowIconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
    pub fn WindowIconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_WindowIconText(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ``` self: ?*C.QTableWidget, windowRole: []const u8 ```
    pub fn SetWindowRole(self: ?*anyopaque, windowRole: []const u8) void {
        const windowRole_str = C.struct_libqt_string{
            .len = windowRole.len,
            .data = @constCast(windowRole.ptr),
        };
        C.QWidget_SetWindowRole(@ptrCast(self), windowRole_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_WindowRole(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ``` self: ?*C.QTableWidget, filePath: []const u8 ```
    pub fn SetWindowFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = C.struct_libqt_string{
            .len = filePath.len,
            .data = @constCast(filePath.ptr),
        };
        C.QWidget_SetWindowFilePath(@ptrCast(self), filePath_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
    pub fn WindowFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_WindowFilePath(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ``` self: ?*C.QTableWidget, level: f64 ```
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        C.QWidget_SetWindowOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return C.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return C.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ``` self: ?*C.QTableWidget, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = C.struct_libqt_string{
            .len = toolTip.len,
            .data = @constCast(toolTip.ptr),
        };
        C.QWidget_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_ToolTip(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ``` self: ?*C.QTableWidget, msec: i32 ```
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        C.QWidget_SetToolTipDuration(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return C.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ``` self: ?*C.QTableWidget, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = C.struct_libqt_string{
            .len = statusTip.len,
            .data = @constCast(statusTip.ptr),
        };
        C.QWidget_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_StatusTip(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ``` self: ?*C.QTableWidget, whatsThis: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = C.struct_libqt_string{
            .len = whatsThis.len,
            .data = @constCast(whatsThis.ptr),
        };
        C.QWidget_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_WhatsThis(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
    pub fn AccessibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_AccessibleName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ``` self: ?*C.QTableWidget, name: []const u8 ```
    pub fn SetAccessibleName(self: ?*anyopaque, name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QWidget_SetAccessibleName(@ptrCast(self), name_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_AccessibleDescription(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ``` self: ?*C.QTableWidget, description: []const u8 ```
    pub fn SetAccessibleDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = C.struct_libqt_string{
            .len = description.len,
            .data = @constCast(description.ptr),
        };
        C.QWidget_SetAccessibleDescription(@ptrCast(self), description_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ``` self: ?*C.QTableWidget, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        C.QWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return C.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        C.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ``` self: ?*C.QTableWidget, locale: ?*C.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        C.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Locale(self: ?*anyopaque) ?*C.QLocale {
        return C.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn UnsetLocale(self: ?*anyopaque) void {
        C.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return C.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return C.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn SetFocus(self: ?*anyopaque) void {
        C.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return C.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ActivateWindow(self: ?*anyopaque) void {
        C.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        C.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: ?*C.QTableWidget, reason: qnamespace_enums.FocusReason ```
    pub fn SetFocusWithReason(self: ?*anyopaque, reason: i64) void {
        C.QWidget_SetFocusWithReason(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn FocusPolicy(self: ?*anyopaque) i64 {
        return C.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ``` self: ?*C.QTableWidget, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i64) void {
        C.QWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn HasFocus(self: ?*anyopaque) bool {
        return C.QWidget_HasFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
    ///
    /// ``` param1: ?*C.QWidget, param2: ?*C.QWidget ```
    pub fn SetTabOrder(param1: ?*anyopaque, param2: ?*anyopaque) void {
        C.QWidget_SetTabOrder(@ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ``` self: ?*C.QTableWidget, focusProxy: ?*C.QWidget ```
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        C.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn FocusProxy(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ContextMenuPolicy(self: ?*anyopaque) i64 {
        return C.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ``` self: ?*C.QTableWidget, policy: qnamespace_enums.ContextMenuPolicy ```
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i64) void {
        C.QWidget_SetContextMenuPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        C.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QCursor ```
    pub fn GrabMouseWithQCursor(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_GrabMouseWithQCursor(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        C.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        C.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        C.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: ?*C.QTableWidget, key: ?*C.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return C.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ``` self: ?*C.QTableWidget, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        C.QWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: ?*C.QTableWidget, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        C.QWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: ?*C.QTableWidget, id: i32 ```
    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        C.QWidget_SetShortcutAutoRepeat(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    ///
    pub fn MouseGrabber() ?*C.QWidget {
        return C.QWidget_MouseGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    ///
    pub fn KeyboardGrabber() ?*C.QWidget {
        return C.QWidget_KeyboardGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return C.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ``` self: ?*C.QTableWidget, enable: bool ```
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        C.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn GraphicsProxyWidget(self: ?*anyopaque) ?*C.QGraphicsProxyWidget {
        return C.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Repaint(self: ?*anyopaque) void {
        C.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: ?*C.QTableWidget, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        C.QWidget_Update2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QRect ```
    pub fn UpdateWithQRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_UpdateWithQRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QRegion ```
    pub fn UpdateWithQRegion(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_UpdateWithQRegion(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: ?*C.QTableWidget, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        C.QWidget_Repaint2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QRect ```
    pub fn RepaintWithQRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_RepaintWithQRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QRegion ```
    pub fn RepaintWithQRegion(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_RepaintWithQRegion(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ``` self: ?*C.QTableWidget, hidden: bool ```
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        C.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Show(self: ?*anyopaque) void {
        C.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Hide(self: ?*anyopaque) void {
        C.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        C.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        C.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        C.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        C.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Close(self: ?*anyopaque) bool {
        return C.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Raise(self: ?*anyopaque) void {
        C.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Lower(self: ?*anyopaque) void {
        C.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QWidget ```
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: ?*C.QTableWidget, x: i32, y: i32 ```
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        C.QWidget_Move(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QPoint ```
    pub fn MoveWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_MoveWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: ?*C.QTableWidget, w: i32, h: i32 ```
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        C.QWidget_Resize(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QSize ```
    pub fn ResizeWithQSize(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_ResizeWithQSize(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: ?*C.QTableWidget, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        C.QWidget_SetGeometry(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: ?*C.QTableWidget, geometry: ?*C.QRect ```
    pub fn SetGeometryWithGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        C.QWidget_SetGeometryWithGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
    pub fn SaveGeometry(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QWidget_SaveGeometry(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ``` self: ?*C.QTableWidget, geometry: []u8 ```
    pub fn RestoreGeometry(self: ?*anyopaque, geometry: []u8) bool {
        const geometry_str = C.struct_libqt_string{
            .len = geometry.len,
            .data = @constCast(geometry.ptr),
        };
        return C.QWidget_RestoreGeometry(@ptrCast(self), geometry_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        C.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return C.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QWidget ```
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return C.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return C.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return C.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return C.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn WindowState(self: ?*anyopaque) i64 {
        return C.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ``` self: ?*C.QTableWidget, state: i32 ```
    pub fn SetWindowState(self: ?*anyopaque, state: i64) void {
        C.QWidget_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ``` self: ?*C.QTableWidget, state: i32 ```
    pub fn OverrideWindowState(self: ?*anyopaque, state: i64) void {
        C.QWidget_OverrideWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn SizePolicy(self: ?*anyopaque) ?*C.QSizePolicy {
        return C.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: ?*C.QTableWidget, sizePolicy: ?*C.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: ?*C.QSizePolicy) void {
        C.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: ?*C.QTableWidget, horizontal: qsizepolicy_enums.Policy, vertical: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i64, vertical: i64) void {
        C.QWidget_SetSizePolicy2(@ptrCast(self), @intCast(horizontal), @intCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn VisibleRegion(self: ?*anyopaque) ?*C.QRegion {
        return C.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QTableWidget, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        C.QWidget_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QTableWidget, margins: ?*C.QMargins ```
    pub fn SetContentsMarginsWithMargins(self: ?*anyopaque, margins: ?*anyopaque) void {
        C.QWidget_SetContentsMarginsWithMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ContentsMargins(self: ?*anyopaque) ?*C.QMargins {
        return C.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ContentsRect(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Layout(self: ?*anyopaque) ?*C.QLayout {
        return C.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ``` self: ?*C.QTableWidget, layout: ?*C.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        C.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        C.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: ?*C.QTableWidget, parent: ?*C.QWidget ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: ?*C.QTableWidget, parent: ?*C.QWidget, f: i32 ```
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i64) void {
        C.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @intCast(f));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: ?*C.QTableWidget, dx: i32, dy: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        C.QWidget_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: ?*C.QTableWidget, dx: i32, dy: i32, param3: ?*C.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        C.QWidget_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn FocusWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn NextInFocusChain(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn PreviousInFocusChain(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return C.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ``` self: ?*C.QTableWidget, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        C.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: ?*C.QTableWidget, action: ?*C.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        C.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ``` self: ?*C.QTableWidget, actions: []?*C.QAction ```
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = C.struct_libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        C.QWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ``` self: ?*C.QTableWidget, before: ?*C.QAction, actions: []?*C.QAction ```
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = C.struct_libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        C.QWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ``` self: ?*C.QTableWidget, before: ?*C.QAction, action: ?*C.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        C.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ``` self: ?*C.QTableWidget, action: ?*C.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        C.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QAction {
        const _arr: C.struct_libqt_list = C.QWidget_Actions(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QAction, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: ?*C.QTableWidget, text: []const u8 ```
    pub fn AddActionWithText(self: ?*anyopaque, text: []const u8) ?*C.QAction {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QWidget_AddActionWithText(@ptrCast(self), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: ?*C.QTableWidget, icon: ?*C.QIcon, text: []const u8 ```
    pub fn AddAction2(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) ?*C.QAction {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QWidget_AddAction2(@ptrCast(self), @ptrCast(icon), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: ?*C.QTableWidget, text: []const u8, shortcut: ?*C.QKeySequence ```
    pub fn AddAction3(self: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) ?*C.QAction {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QWidget_AddAction3(@ptrCast(self), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: ?*C.QTableWidget, icon: ?*C.QIcon, text: []const u8, shortcut: ?*C.QKeySequence ```
    pub fn AddAction4(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) ?*C.QAction {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QWidget_AddAction4(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ParentWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ``` self: ?*C.QTableWidget, typeVal: i32 ```
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        C.QWidget_SetWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return C.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: ?*C.QTableWidget, param1: qnamespace_enums.WindowType ```
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i64) void {
        C.QWidget_SetWindowFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ``` self: ?*C.QTableWidget, typeVal: i32 ```
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        C.QWidget_OverrideWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn WindowType(self: ?*anyopaque) i64 {
        return C.QWidget_WindowType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
    ///
    /// ``` param1: u64 ```
    pub fn Find(param1: u64) ?*C.QWidget {
        return C.QWidget_Find(@intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: ?*C.QTableWidget, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) ?*C.QWidget {
        return C.QWidget_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: ?*C.QTableWidget, p: ?*C.QPoint ```
    pub fn ChildAtWithQPoint(self: ?*anyopaque, p: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_ChildAtWithQPoint(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: ?*C.QTableWidget, param1: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, param1: i64) void {
        C.QWidget_SetAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ``` self: ?*C.QTableWidget, param1: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, param1: i64) bool {
        return C.QWidget_TestAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn EnsurePolished(self: ?*anyopaque) void {
        C.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ``` self: ?*C.QTableWidget, child: ?*C.QWidget ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return C.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return C.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ``` self: ?*C.QTableWidget, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        C.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn BackingStore(self: ?*anyopaque) ?*C.QBackingStore {
        return C.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn WindowHandle(self: ?*anyopaque) ?*C.QWindow {
        return C.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Screen(self: ?*anyopaque) ?*C.QScreen {
        return C.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ``` self: ?*C.QTableWidget, screen: ?*C.QScreen ```
    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        C.QWidget_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: ?*C.QWindow ```
    pub fn CreateWindowContainer(window: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_CreateWindowContainer(@ptrCast(window));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: ?*C.QTableWidget, title: []const u8 ```
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = C.struct_libqt_string{
            .len = title.len,
            .data = @constCast(title.ptr),
        };
        C.QWidget_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QWidget
    ///
    /// ``` self: ?*C.QWidget, slot: fn (?*C.QWidget, []const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: ?*C.QTableWidget, icon: ?*C.QIcon ```
    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        C.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// ``` self: ?*C.QWidget, slot: fn (?*C.QWidget, ?*C.QIcon) callconv(.c) void ```
    pub fn OnWindowIconChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWidget_Connect_WindowIconChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: ?*C.QTableWidget, iconText: []const u8 ```
    pub fn WindowIconTextChanged(self: ?*anyopaque, iconText: []const u8) void {
        const iconText_str = C.struct_libqt_string{
            .len = iconText.len,
            .data = @constCast(iconText.ptr),
        };
        C.QWidget_WindowIconTextChanged(@ptrCast(self), iconText_str);
    }

    /// Inherited from QWidget
    ///
    /// ``` self: ?*C.QWidget, slot: fn (?*C.QWidget, []const u8) callconv(.c) void ```
    pub fn OnWindowIconTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: ?*C.QTableWidget, pos: ?*C.QPoint ```
    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        C.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWidget
    ///
    /// ``` self: ?*C.QWidget, slot: fn (?*C.QWidget, ?*C.QPoint) callconv(.c) void ```
    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return C.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ``` self: ?*C.QTableWidget, hints: i32 ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        C.QWidget_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QTableWidget, target: ?*C.QPaintDevice, targetOffset: ?*C.QPoint ```
    pub fn Render2(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        C.QWidget_Render2(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QTableWidget, target: ?*C.QPaintDevice, targetOffset: ?*C.QPoint, sourceRegion: ?*C.QRegion ```
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        C.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QTableWidget, target: ?*C.QPaintDevice, targetOffset: ?*C.QPoint, sourceRegion: ?*C.QRegion, renderFlags: i32 ```
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i64) void {
        C.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QTableWidget, painter: ?*C.QPainter, targetOffset: ?*C.QPoint ```
    pub fn Render22(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        C.QWidget_Render22(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QTableWidget, painter: ?*C.QPainter, targetOffset: ?*C.QPoint, sourceRegion: ?*C.QRegion ```
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        C.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QTableWidget, painter: ?*C.QPainter, targetOffset: ?*C.QPoint, sourceRegion: ?*C.QRegion, renderFlags: i32 ```
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i64) void {
        C.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: ?*C.QTableWidget, rectangle: ?*C.QRect ```
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) ?*C.QPixmap {
        return C.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: ?*C.QTableWidget, typeVal: qnamespace_enums.GestureType, flags: i32 ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i64) void {
        C.QWidget_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: ?*C.QTableWidget, key: ?*C.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i64) i32 {
        return C.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @intCast(context));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: ?*C.QTableWidget, id: i32, enable: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        C.QWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: ?*C.QTableWidget, id: i32, enable: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        C.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: ?*C.QTableWidget, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        C.QWidget_SetWindowFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: ?*C.QTableWidget, param1: qnamespace_enums.WidgetAttribute, on: bool ```
    pub fn SetAttribute2(self: ?*anyopaque, param1: i64, on: bool) void {
        C.QWidget_SetAttribute2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: ?*C.QWindow, parent: ?*C.QWidget ```
    pub fn CreateWindowContainer2(window: ?*anyopaque, parent: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_CreateWindowContainer2(@ptrCast(window), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: ?*C.QWindow, parent: ?*C.QWidget, flags: i32 ```
    pub fn CreateWindowContainer3(window: ?*anyopaque, parent: ?*anyopaque, flags: i64) ?*C.QWidget {
        return C.QWidget_CreateWindowContainer3(@ptrCast(window), @ptrCast(parent), @intCast(flags));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTableWidget, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QTableWidget, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QTableWidget, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QTableWidget, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QTableWidget, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QTableWidget, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QTableWidget, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QTableWidget, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QTableWidget ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QTableWidget, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QTableWidget, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTableWidget ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QTableWidget ```
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
    /// ``` self: ?*C.QTableWidget ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QTableWidget, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QTableWidget, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QTableWidget, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return C.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return C.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return C.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return C.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return C.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return C.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return C.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return C.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return C.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return C.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return C.QPaintDevice_Depth(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return C.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn SetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QTableWidget_SetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn QBaseSetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QTableWidget_QBaseSetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnSetRootIndex(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnSetRootIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, selectionModel: ?*C.QItemSelectionModel ```
    pub fn SetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        C.QTableWidget_SetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, selectionModel: ?*C.QItemSelectionModel ```
    pub fn QBaseSetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        C.QTableWidget_QBaseSetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QItemSelectionModel) callconv(.c) void ```
    pub fn OnSetSelectionModel(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnSetSelectionModel(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn DoItemsLayout(self: ?*anyopaque) void {
        C.QTableWidget_DoItemsLayout(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseDoItemsLayout(self: ?*anyopaque) void {
        C.QTableWidget_QBaseDoItemsLayout(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnDoItemsLayout(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTableWidget_OnDoItemsLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn VisualRect(self: ?*anyopaque, index: ?*anyopaque) ?*C.QRect {
        return C.QTableWidget_VisualRect(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn QBaseVisualRect(self: ?*anyopaque, index: ?*anyopaque) ?*C.QRect {
        return C.QTableWidget_QBaseVisualRect(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QModelIndex) callconv(.c) ?*C.QRect ```
    pub fn OnVisualRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QRect) void {
        C.QTableWidget_OnVisualRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex, hint: qabstractitemview_enums.ScrollHint ```
    pub fn ScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i64) void {
        C.QTableWidget_ScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex, hint: qabstractitemview_enums.ScrollHint ```
    pub fn QBaseScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i64) void {
        C.QTableWidget_QBaseScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QModelIndex, qabstractitemview_enums.ScrollHint) callconv(.c) void ```
    pub fn OnScrollTo(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) void) void {
        C.QTableWidget_OnScrollTo(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#indexAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, p: ?*C.QPoint ```
    pub fn IndexAt(self: ?*anyopaque, p: ?*anyopaque) ?*C.QModelIndex {
        return C.QTableWidget_IndexAt(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, p: ?*C.QPoint ```
    pub fn QBaseIndexAt(self: ?*anyopaque, p: ?*anyopaque) ?*C.QModelIndex {
        return C.QTableWidget_QBaseIndexAt(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QPoint) callconv(.c) ?*C.QModelIndex ```
    pub fn OnIndexAt(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QModelIndex) void {
        C.QTableWidget_OnIndexAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, dx: i32, dy: i32 ```
    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        C.QTableWidget_ScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, dx: i32, dy: i32 ```
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        C.QTableWidget_QBaseScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32, i32) callconv(.c) void ```
    pub fn OnScrollContentsBy(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QTableWidget_OnScrollContentsBy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, option: ?*C.QStyleOptionViewItem ```
    pub fn InitViewItemOption(self: ?*anyopaque, option: ?*anyopaque) void {
        C.QTableWidget_InitViewItemOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, option: ?*C.QStyleOptionViewItem ```
    pub fn QBaseInitViewItemOption(self: ?*anyopaque, option: ?*anyopaque) void {
        C.QTableWidget_QBaseInitViewItemOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QStyleOptionViewItem) callconv(.c) void ```
    pub fn OnInitViewItemOption(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnInitViewItemOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, e: ?*C.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QTableWidget_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, e: ?*C.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QTableWidget_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnPaintEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn HorizontalOffset(self: ?*anyopaque) i32 {
        return C.QTableWidget_HorizontalOffset(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseHorizontalOffset(self: ?*anyopaque) i32 {
        return C.QTableWidget_QBaseHorizontalOffset(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnHorizontalOffset(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QTableWidget_OnHorizontalOffset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn VerticalOffset(self: ?*anyopaque) i32 {
        return C.QTableWidget_VerticalOffset(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseVerticalOffset(self: ?*anyopaque) i32 {
        return C.QTableWidget_QBaseVerticalOffset(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnVerticalOffset(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QTableWidget_OnVerticalOffset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, cursorAction: qabstractitemview_enums.CursorAction, modifiers: i32 ```
    pub fn MoveCursor(self: ?*anyopaque, cursorAction: i64, modifiers: i64) ?*C.QModelIndex {
        return C.QTableWidget_MoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, cursorAction: qabstractitemview_enums.CursorAction, modifiers: i32 ```
    pub fn QBaseMoveCursor(self: ?*anyopaque, cursorAction: i64, modifiers: i64) ?*C.QModelIndex {
        return C.QTableWidget_QBaseMoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, qabstractitemview_enums.CursorAction, i32) callconv(.c) ?*C.QModelIndex ```
    pub fn OnMoveCursor(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i64) callconv(.c) ?*C.QModelIndex) void {
        C.QTableWidget_OnMoveCursor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, rect: ?*C.QRect, command: i32 ```
    pub fn SetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i64) void {
        C.QTableWidget_SetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, rect: ?*C.QRect, command: i32 ```
    pub fn QBaseSetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i64) void {
        C.QTableWidget_QBaseSetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QRect, i32) callconv(.c) void ```
    pub fn OnSetSelection(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) void) void {
        C.QTableWidget_OnSetSelection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, selection: ?*C.QItemSelection ```
    pub fn VisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) ?*C.QRegion {
        return C.QTableWidget_VisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, selection: ?*C.QItemSelection ```
    pub fn QBaseVisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) ?*C.QRegion {
        return C.QTableWidget_QBaseVisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QItemSelection) callconv(.c) ?*C.QRegion ```
    pub fn OnVisualRegionForSelection(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QRegion) void {
        C.QTableWidget_OnVisualRegionForSelection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
    pub fn SelectedIndexes(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QTableWidget_SelectedIndexes(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, allocator: std.mem.Allocator ```
    pub fn QBaseSelectedIndexes(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QTableWidget_QBaseSelectedIndexes(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) []?*C.QModelIndex ```
    pub fn OnSelectedIndexes(self: ?*anyopaque, slot: fn () callconv(.c) []?*C.QModelIndex) void {
        C.QTableWidget_OnSelectedIndexes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn UpdateGeometries(self: ?*anyopaque) void {
        C.QTableWidget_UpdateGeometries(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseUpdateGeometries(self: ?*anyopaque) void {
        C.QTableWidget_QBaseUpdateGeometries(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnUpdateGeometries(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTableWidget_OnUpdateGeometries(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ViewportSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QTableWidget_ViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseViewportSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QTableWidget_QBaseViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnViewportSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QTableWidget_OnViewportSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, row: i32 ```
    pub fn SizeHintForRow(self: ?*anyopaque, row: i32) i32 {
        return C.QTableWidget_SizeHintForRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, row: i32 ```
    pub fn QBaseSizeHintForRow(self: ?*anyopaque, row: i32) i32 {
        return C.QTableWidget_QBaseSizeHintForRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32) callconv(.c) i32 ```
    pub fn OnSizeHintForRow(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QTableWidget_OnSizeHintForRow(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, column: i32 ```
    pub fn SizeHintForColumn(self: ?*anyopaque, column: i32) i32 {
        return C.QTableWidget_SizeHintForColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, column: i32 ```
    pub fn QBaseSizeHintForColumn(self: ?*anyopaque, column: i32) i32 {
        return C.QTableWidget_QBaseSizeHintForColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32) callconv(.c) i32 ```
    pub fn OnSizeHintForColumn(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QTableWidget_OnSizeHintForColumn(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, action: i32 ```
    pub fn VerticalScrollbarAction(self: ?*anyopaque, action: i32) void {
        C.QTableWidget_VerticalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, action: i32 ```
    pub fn QBaseVerticalScrollbarAction(self: ?*anyopaque, action: i32) void {
        C.QTableWidget_QBaseVerticalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32) callconv(.c) void ```
    pub fn OnVerticalScrollbarAction(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QTableWidget_OnVerticalScrollbarAction(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, action: i32 ```
    pub fn HorizontalScrollbarAction(self: ?*anyopaque, action: i32) void {
        C.QTableWidget_HorizontalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, action: i32 ```
    pub fn QBaseHorizontalScrollbarAction(self: ?*anyopaque, action: i32) void {
        C.QTableWidget_QBaseHorizontalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32) callconv(.c) void ```
    pub fn OnHorizontalScrollbarAction(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QTableWidget_OnHorizontalScrollbarAction(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn IsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return C.QTableWidget_IsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn QBaseIsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return C.QTableWidget_QBaseIsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnIsIndexHidden(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTableWidget_OnIsIndexHidden(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, selected: ?*C.QItemSelection, deselected: ?*C.QItemSelection ```
    pub fn SelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        C.QTableWidget_SelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, selected: ?*C.QItemSelection, deselected: ?*C.QItemSelection ```
    pub fn QBaseSelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        C.QTableWidget_QBaseSelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QItemSelection, ?*C.QItemSelection) callconv(.c) void ```
    pub fn OnSelectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnSelectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, current: ?*C.QModelIndex, previous: ?*C.QModelIndex ```
    pub fn CurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        C.QTableWidget_CurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, current: ?*C.QModelIndex, previous: ?*C.QModelIndex ```
    pub fn QBaseCurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        C.QTableWidget_QBaseCurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QModelIndex, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnCurrentChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnCurrentChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, search: []const u8 ```
    pub fn KeyboardSearch(self: ?*anyopaque, search: []const u8) void {
        const search_str = C.struct_libqt_string{
            .len = search.len,
            .data = @constCast(search.ptr),
        };
        C.QTableWidget_KeyboardSearch(@ptrCast(self), search_str);
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, search: []const u8 ```
    pub fn QBaseKeyboardSearch(self: ?*anyopaque, search: []const u8) void {
        const search_str = C.struct_libqt_string{
            .len = search.len,
            .data = @constCast(search.ptr),
        };
        C.QTableWidget_QBaseKeyboardSearch(@ptrCast(self), search_str);
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, []const u8) callconv(.c) void ```
    pub fn OnKeyboardSearch(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QTableWidget_OnKeyboardSearch(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn ItemDelegateForIndex(self: ?*anyopaque, index: ?*anyopaque) ?*C.QAbstractItemDelegate {
        return C.QTableWidget_ItemDelegateForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex ```
    pub fn QBaseItemDelegateForIndex(self: ?*anyopaque, index: ?*anyopaque) ?*C.QAbstractItemDelegate {
        return C.QTableWidget_QBaseItemDelegateForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QModelIndex) callconv(.c) ?*C.QAbstractItemDelegate ```
    pub fn OnItemDelegateForIndex(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QAbstractItemDelegate) void {
        C.QTableWidget_OnItemDelegateForIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, query: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, query: i64) ?*C.QVariant {
        return C.QTableWidget_InputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, query: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, query: i64) ?*C.QVariant {
        return C.QTableWidget_QBaseInputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, qnamespace_enums.InputMethodQuery) callconv(.c) ?*C.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) ?*C.QVariant) void {
        C.QTableWidget_OnInputMethodQuery(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Reset(self: ?*anyopaque) void {
        C.QTableWidget_Reset(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseReset(self: ?*anyopaque) void {
        C.QTableWidget_QBaseReset(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnReset(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTableWidget_OnReset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn SelectAll(self: ?*anyopaque) void {
        C.QTableWidget_SelectAll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseSelectAll(self: ?*anyopaque) void {
        C.QTableWidget_QBaseSelectAll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnSelectAll(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTableWidget_OnSelectAll(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, topLeft: ?*C.QModelIndex, bottomRight: ?*C.QModelIndex, roles: []i32 ```
    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = C.struct_libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        C.QTableWidget_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, topLeft: ?*C.QModelIndex, bottomRight: ?*C.QModelIndex, roles: []i32 ```
    pub fn QBaseDataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = C.struct_libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        C.QTableWidget_QBaseDataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QModelIndex, ?*C.QModelIndex, []i32) callconv(.c) void ```
    pub fn OnDataChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, []i32) callconv(.c) void) void {
        C.QTableWidget_OnDataChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, parent: ?*C.QModelIndex, start: i32, end: i32 ```
    pub fn RowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        C.QTableWidget_RowsInserted(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, parent: ?*C.QModelIndex, start: i32, end: i32 ```
    pub fn QBaseRowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        C.QTableWidget_QBaseRowsInserted(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QModelIndex, i32, i32) callconv(.c) void ```
    pub fn OnRowsInserted(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QTableWidget_OnRowsInserted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, parent: ?*C.QModelIndex, start: i32, end: i32 ```
    pub fn RowsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        C.QTableWidget_RowsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, parent: ?*C.QModelIndex, start: i32, end: i32 ```
    pub fn QBaseRowsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        C.QTableWidget_QBaseRowsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QModelIndex, i32, i32) callconv(.c) void ```
    pub fn OnRowsAboutToBeRemoved(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QTableWidget_OnRowsAboutToBeRemoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn UpdateEditorData(self: ?*anyopaque) void {
        C.QTableWidget_UpdateEditorData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseUpdateEditorData(self: ?*anyopaque) void {
        C.QTableWidget_QBaseUpdateEditorData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnUpdateEditorData(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTableWidget_OnUpdateEditorData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn UpdateEditorGeometries(self: ?*anyopaque) void {
        C.QTableWidget_UpdateEditorGeometries(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseUpdateEditorGeometries(self: ?*anyopaque) void {
        C.QTableWidget_QBaseUpdateEditorGeometries(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnUpdateEditorGeometries(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTableWidget_OnUpdateEditorGeometries(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, value: i32 ```
    pub fn VerticalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        C.QTableWidget_VerticalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, value: i32 ```
    pub fn QBaseVerticalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        C.QTableWidget_QBaseVerticalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32) callconv(.c) void ```
    pub fn OnVerticalScrollbarValueChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QTableWidget_OnVerticalScrollbarValueChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, value: i32 ```
    pub fn HorizontalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        C.QTableWidget_HorizontalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, value: i32 ```
    pub fn QBaseHorizontalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        C.QTableWidget_QBaseHorizontalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32) callconv(.c) void ```
    pub fn OnHorizontalScrollbarValueChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QTableWidget_OnHorizontalScrollbarValueChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, editor: ?*C.QWidget, hint: qabstractitemdelegate_enums.EndEditHint ```
    pub fn CloseEditor(self: ?*anyopaque, editor: ?*anyopaque, hint: i64) void {
        C.QTableWidget_CloseEditor(@ptrCast(self), @ptrCast(editor), @intCast(hint));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, editor: ?*C.QWidget, hint: qabstractitemdelegate_enums.EndEditHint ```
    pub fn QBaseCloseEditor(self: ?*anyopaque, editor: ?*anyopaque, hint: i64) void {
        C.QTableWidget_QBaseCloseEditor(@ptrCast(self), @ptrCast(editor), @intCast(hint));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QWidget, qabstractitemdelegate_enums.EndEditHint) callconv(.c) void ```
    pub fn OnCloseEditor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) void) void {
        C.QTableWidget_OnCloseEditor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, editor: ?*C.QWidget ```
    pub fn CommitData(self: ?*anyopaque, editor: ?*anyopaque) void {
        C.QTableWidget_CommitData(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, editor: ?*C.QWidget ```
    pub fn QBaseCommitData(self: ?*anyopaque, editor: ?*anyopaque) void {
        C.QTableWidget_QBaseCommitData(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QWidget) callconv(.c) void ```
    pub fn OnCommitData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnCommitData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, editor: ?*C.QObject ```
    pub fn EditorDestroyed(self: ?*anyopaque, editor: ?*anyopaque) void {
        C.QTableWidget_EditorDestroyed(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, editor: ?*C.QObject ```
    pub fn QBaseEditorDestroyed(self: ?*anyopaque, editor: ?*anyopaque) void {
        C.QTableWidget_QBaseEditorDestroyed(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QObject) callconv(.c) void ```
    pub fn OnEditorDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnEditorDestroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: ?*C.QEvent ```
    pub fn Edit2(self: ?*anyopaque, index: ?*anyopaque, trigger: i64, event: ?*anyopaque) bool {
        return C.QTableWidget_Edit2(@ptrCast(self), @ptrCast(index), @intCast(trigger), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: ?*C.QEvent ```
    pub fn QBaseEdit2(self: ?*anyopaque, index: ?*anyopaque, trigger: i64, event: ?*anyopaque) bool {
        return C.QTableWidget_QBaseEdit2(@ptrCast(self), @ptrCast(index), @intCast(trigger), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QModelIndex, qabstractitemview_enums.EditTrigger, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEdit2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64, ?*anyopaque) callconv(.c) bool) void {
        C.QTableWidget_OnEdit2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex, event: ?*C.QEvent ```
    pub fn SelectionCommand(self: ?*anyopaque, index: ?*anyopaque, event: ?*anyopaque) i64 {
        return C.QTableWidget_SelectionCommand(@ptrCast(self), @ptrCast(index), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, index: ?*C.QModelIndex, event: ?*C.QEvent ```
    pub fn QBaseSelectionCommand(self: ?*anyopaque, index: ?*anyopaque, event: ?*anyopaque) i64 {
        return C.QTableWidget_QBaseSelectionCommand(@ptrCast(self), @ptrCast(index), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QModelIndex, ?*C.QEvent) callconv(.c) i64 ```
    pub fn OnSelectionCommand(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i64) void {
        C.QTableWidget_OnSelectionCommand(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, supportedActions: i32 ```
    pub fn StartDrag(self: ?*anyopaque, supportedActions: i64) void {
        C.QTableWidget_StartDrag(@ptrCast(self), @intCast(supportedActions));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, supportedActions: i32 ```
    pub fn QBaseStartDrag(self: ?*anyopaque, supportedActions: i64) void {
        C.QTableWidget_QBaseStartDrag(@ptrCast(self), @intCast(supportedActions));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32) callconv(.c) void ```
    pub fn OnStartDrag(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QTableWidget_OnStartDrag(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return C.QTableWidget_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return C.QTableWidget_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) bool) void {
        C.QTableWidget_OnFocusNextPrevChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QEvent ```
    pub fn ViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTableWidget_ViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QEvent ```
    pub fn QBaseViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTableWidget_QBaseViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnViewportEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTableWidget_OnViewportEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QDragEnterEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QDragEnterEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QDragEnterEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnDragEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QDragMoveEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QDragMoveEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QDragMoveEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnDragMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QDragLeaveEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QDragLeaveEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QDragLeaveEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnDragLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnResizeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnInputMethodEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, object: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTableWidget_EventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, object: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTableWidget_QBaseEventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTableWidget_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn MinimumSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QTableWidget_MinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QTableWidget_QBaseMinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnMinimumSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QTableWidget_OnMinimumSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn SizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QTableWidget_SizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QTableWidget_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QTableWidget_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, viewport: ?*C.QWidget ```
    pub fn SetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        C.QTableWidget_SetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, viewport: ?*C.QWidget ```
    pub fn QBaseSetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        C.QTableWidget_QBaseSetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QWidget) callconv(.c) void ```
    pub fn OnSetupViewport(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnSetupViewport(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTableWidget_WheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTableWidget_QBaseWheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTableWidget_ContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTableWidget_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnContextMenuEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTableWidget_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTableWidget_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnChangeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, option: ?*C.QStyleOptionFrame ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        C.QTableWidget_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, option: ?*C.QStyleOptionFrame ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        C.QTableWidget_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QStyleOptionFrame) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnInitStyleOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return C.QTableWidget_DevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return C.QTableWidget_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QTableWidget_OnDevType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        C.QTableWidget_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, visible: bool ```
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        C.QTableWidget_QBaseSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, bool) callconv(.c) void ```
    pub fn OnSetVisible(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QTableWidget_OnSetVisible(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QTableWidget_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QTableWidget_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QTableWidget_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return C.QTableWidget_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return C.QTableWidget_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QTableWidget_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn PaintEngine(self: ?*anyopaque) ?*C.QPaintEngine {
        return C.QTableWidget_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBasePaintEngine(self: ?*anyopaque) ?*C.QPaintEngine {
        return C.QTableWidget_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) ?*C.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QPaintEngine) void {
        C.QTableWidget_OnPaintEngine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QEnterEvent ```
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QEnterEvent ```
    pub fn QBaseEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QEnterEvent) callconv(.c) void ```
    pub fn OnEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QEvent ```
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QEvent ```
    pub fn QBaseLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QEvent) callconv(.c) void ```
    pub fn OnLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnCloseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnTabletEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QActionEvent ```
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QActionEvent ```
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QActionEvent) callconv(.c) void ```
    pub fn OnActionEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnActionEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnShowEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnHideEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, eventType: []u8, message: ?*anyopaque, result: ?*isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: ?*anyopaque) bool {
        const eventType_str = C.struct_libqt_string{
            .len = eventType.len,
            .data = @constCast(eventType.ptr),
        };
        return C.QTableWidget_NativeEvent(@ptrCast(self), eventType_str, message, @intCast(result));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, eventType: []u8, message: ?*anyopaque, result: ?*isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: ?*anyopaque) bool {
        const eventType_str = C.struct_libqt_string{
            .len = eventType.len,
            .data = @constCast(eventType.ptr),
        };
        return C.QTableWidget_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @intCast(result));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, []u8, ?*anyopaque, ?*isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, []u8, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTableWidget_OnNativeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i64) i32 {
        return C.QTableWidget_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i64) i32 {
        return C.QTableWidget_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i32) void {
        C.QTableWidget_OnMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, painter: ?*C.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        C.QTableWidget_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, painter: ?*C.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        C.QTableWidget_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnInitPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, offset: ?*C.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) ?*C.QPaintDevice {
        return C.QTableWidget_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, offset: ?*C.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) ?*C.QPaintDevice {
        return C.QTableWidget_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QPoint) callconv(.c) ?*C.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QPaintDevice) void {
        C.QTableWidget_OnRedirected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn SharedPainter(self: ?*anyopaque) ?*C.QPainter {
        return C.QTableWidget_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) ?*C.QPainter {
        return C.QTableWidget_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) ?*C.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QPainter) void {
        C.QTableWidget_OnSharedPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTableWidget_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTableWidget_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTableWidget_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTableWidget_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTableWidget_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, oldIndex: i32, newIndex: i32 ```
    pub fn RowMoved(self: ?*anyopaque, row: i32, oldIndex: i32, newIndex: i32) void {
        C.QTableWidget_RowMoved(@ptrCast(self), @intCast(row), @intCast(oldIndex), @intCast(newIndex));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, oldIndex: i32, newIndex: i32 ```
    pub fn QBaseRowMoved(self: ?*anyopaque, row: i32, oldIndex: i32, newIndex: i32) void {
        C.QTableWidget_QBaseRowMoved(@ptrCast(self), @intCast(row), @intCast(oldIndex), @intCast(newIndex));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32, i32, i32) callconv(.c) void ```
    pub fn OnRowMoved(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        C.QTableWidget_OnRowMoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, column: i32, oldIndex: i32, newIndex: i32 ```
    pub fn ColumnMoved(self: ?*anyopaque, column: i32, oldIndex: i32, newIndex: i32) void {
        C.QTableWidget_ColumnMoved(@ptrCast(self), @intCast(column), @intCast(oldIndex), @intCast(newIndex));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, column: i32, oldIndex: i32, newIndex: i32 ```
    pub fn QBaseColumnMoved(self: ?*anyopaque, column: i32, oldIndex: i32, newIndex: i32) void {
        C.QTableWidget_QBaseColumnMoved(@ptrCast(self), @intCast(column), @intCast(oldIndex), @intCast(newIndex));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32, i32, i32) callconv(.c) void ```
    pub fn OnColumnMoved(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        C.QTableWidget_OnColumnMoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowResized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, oldHeight: i32, newHeight: i32 ```
    pub fn RowResized(self: ?*anyopaque, row: i32, oldHeight: i32, newHeight: i32) void {
        C.QTableWidget_RowResized(@ptrCast(self), @intCast(row), @intCast(oldHeight), @intCast(newHeight));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, row: i32, oldHeight: i32, newHeight: i32 ```
    pub fn QBaseRowResized(self: ?*anyopaque, row: i32, oldHeight: i32, newHeight: i32) void {
        C.QTableWidget_QBaseRowResized(@ptrCast(self), @intCast(row), @intCast(oldHeight), @intCast(newHeight));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32, i32, i32) callconv(.c) void ```
    pub fn OnRowResized(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        C.QTableWidget_OnRowResized(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnResized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, column: i32, oldWidth: i32, newWidth: i32 ```
    pub fn ColumnResized(self: ?*anyopaque, column: i32, oldWidth: i32, newWidth: i32) void {
        C.QTableWidget_ColumnResized(@ptrCast(self), @intCast(column), @intCast(oldWidth), @intCast(newWidth));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, column: i32, oldWidth: i32, newWidth: i32 ```
    pub fn QBaseColumnResized(self: ?*anyopaque, column: i32, oldWidth: i32, newWidth: i32) void {
        C.QTableWidget_QBaseColumnResized(@ptrCast(self), @intCast(column), @intCast(oldWidth), @intCast(newWidth));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32, i32, i32) callconv(.c) void ```
    pub fn OnColumnResized(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        C.QTableWidget_OnColumnResized(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, oldCount: i32, newCount: i32 ```
    pub fn RowCountChanged(self: ?*anyopaque, oldCount: i32, newCount: i32) void {
        C.QTableWidget_RowCountChanged(@ptrCast(self), @intCast(oldCount), @intCast(newCount));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, oldCount: i32, newCount: i32 ```
    pub fn QBaseRowCountChanged(self: ?*anyopaque, oldCount: i32, newCount: i32) void {
        C.QTableWidget_QBaseRowCountChanged(@ptrCast(self), @intCast(oldCount), @intCast(newCount));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32, i32) callconv(.c) void ```
    pub fn OnRowCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QTableWidget_OnRowCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTableView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, oldCount: i32, newCount: i32 ```
    pub fn ColumnCountChanged(self: ?*anyopaque, oldCount: i32, newCount: i32) void {
        C.QTableWidget_ColumnCountChanged(@ptrCast(self), @intCast(oldCount), @intCast(newCount));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, oldCount: i32, newCount: i32 ```
    pub fn QBaseColumnCountChanged(self: ?*anyopaque, oldCount: i32, newCount: i32) void {
        C.QTableWidget_QBaseColumnCountChanged(@ptrCast(self), @intCast(oldCount), @intCast(newCount));
    }

    /// Inherited from QTableView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32, i32) callconv(.c) void ```
    pub fn OnColumnCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QTableWidget_OnColumnCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn State(self: ?*anyopaque) i64 {
        return C.QTableWidget_State(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseState(self: ?*anyopaque) i64 {
        return C.QTableWidget_QBaseState(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) i64 ```
    pub fn OnState(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QTableWidget_OnState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, state: qabstractitemview_enums.State ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        C.QTableWidget_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, state: qabstractitemview_enums.State ```
    pub fn QBaseSetState(self: ?*anyopaque, state: i64) void {
        C.QTableWidget_QBaseSetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, qabstractitemview_enums.State) callconv(.c) void ```
    pub fn OnSetState(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QTableWidget_OnSetState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ScheduleDelayedItemsLayout(self: ?*anyopaque) void {
        C.QTableWidget_ScheduleDelayedItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseScheduleDelayedItemsLayout(self: ?*anyopaque) void {
        C.QTableWidget_QBaseScheduleDelayedItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnScheduleDelayedItemsLayout(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTableWidget_OnScheduleDelayedItemsLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ExecuteDelayedItemsLayout(self: ?*anyopaque) void {
        C.QTableWidget_ExecuteDelayedItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseExecuteDelayedItemsLayout(self: ?*anyopaque) void {
        C.QTableWidget_QBaseExecuteDelayedItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnExecuteDelayedItemsLayout(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTableWidget_OnExecuteDelayedItemsLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, region: ?*C.QRegion ```
    pub fn SetDirtyRegion(self: ?*anyopaque, region: ?*anyopaque) void {
        C.QTableWidget_SetDirtyRegion(@ptrCast(self), @ptrCast(region));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, region: ?*C.QRegion ```
    pub fn QBaseSetDirtyRegion(self: ?*anyopaque, region: ?*anyopaque) void {
        C.QTableWidget_QBaseSetDirtyRegion(@ptrCast(self), @ptrCast(region));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QRegion) callconv(.c) void ```
    pub fn OnSetDirtyRegion(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnSetDirtyRegion(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, dx: i32, dy: i32 ```
    pub fn ScrollDirtyRegion(self: ?*anyopaque, dx: i32, dy: i32) void {
        C.QTableWidget_ScrollDirtyRegion(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, dx: i32, dy: i32 ```
    pub fn QBaseScrollDirtyRegion(self: ?*anyopaque, dx: i32, dy: i32) void {
        C.QTableWidget_QBaseScrollDirtyRegion(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32, i32) callconv(.c) void ```
    pub fn OnScrollDirtyRegion(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QTableWidget_OnScrollDirtyRegion(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn DirtyRegionOffset(self: ?*anyopaque) ?*C.QPoint {
        return C.QTableWidget_DirtyRegionOffset(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseDirtyRegionOffset(self: ?*anyopaque) ?*C.QPoint {
        return C.QTableWidget_QBaseDirtyRegionOffset(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) ?*C.QPoint ```
    pub fn OnDirtyRegionOffset(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QPoint) void {
        C.QTableWidget_OnDirtyRegionOffset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn StartAutoScroll(self: ?*anyopaque) void {
        C.QTableWidget_StartAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseStartAutoScroll(self: ?*anyopaque) void {
        C.QTableWidget_QBaseStartAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnStartAutoScroll(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTableWidget_OnStartAutoScroll(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn StopAutoScroll(self: ?*anyopaque) void {
        C.QTableWidget_StopAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseStopAutoScroll(self: ?*anyopaque) void {
        C.QTableWidget_QBaseStopAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnStopAutoScroll(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTableWidget_OnStopAutoScroll(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn DoAutoScroll(self: ?*anyopaque) void {
        C.QTableWidget_DoAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseDoAutoScroll(self: ?*anyopaque) void {
        C.QTableWidget_QBaseDoAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnDoAutoScroll(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTableWidget_OnDoAutoScroll(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn DropIndicatorPosition(self: ?*anyopaque) i64 {
        return C.QTableWidget_DropIndicatorPosition(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseDropIndicatorPosition(self: ?*anyopaque) i64 {
        return C.QTableWidget_QBaseDropIndicatorPosition(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) i64 ```
    pub fn OnDropIndicatorPosition(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QTableWidget_OnDropIndicatorPosition(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        C.QTableWidget_SetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn QBaseSetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        C.QTableWidget_QBaseSetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, i32, i32, i32, i32) callconv(.c) void ```
    pub fn OnSetViewportMargins(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        C.QTableWidget_OnSetViewportMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn ViewportMargins(self: ?*anyopaque) ?*C.QMargins {
        return C.QTableWidget_ViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseViewportMargins(self: ?*anyopaque) ?*C.QMargins {
        return C.QTableWidget_QBaseViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) ?*C.QMargins ```
    pub fn OnViewportMargins(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QMargins) void {
        C.QTableWidget_OnViewportMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QPainter ```
    pub fn DrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTableWidget_DrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, param1: ?*C.QPainter ```
    pub fn QBaseDrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTableWidget_QBaseDrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QPainter) callconv(.c) void ```
    pub fn OnDrawFrame(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTableWidget_OnDrawFrame(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        C.QTableWidget_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        C.QTableWidget_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTableWidget_OnUpdateMicroFocus(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Create(self: ?*anyopaque) void {
        C.QTableWidget_Create(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseCreate(self: ?*anyopaque) void {
        C.QTableWidget_QBaseCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnCreate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTableWidget_OnCreate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Destroy(self: ?*anyopaque) void {
        C.QTableWidget_Destroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseDestroy(self: ?*anyopaque) void {
        C.QTableWidget_QBaseDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) void ```
    pub fn OnDestroy(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTableWidget_OnDestroy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return C.QTableWidget_FocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseFocusNextChild(self: ?*anyopaque) bool {
        return C.QTableWidget_QBaseFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) bool ```
    pub fn OnFocusNextChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QTableWidget_OnFocusNextChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return C.QTableWidget_FocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseFocusPreviousChild(self: ?*anyopaque) bool {
        return C.QTableWidget_QBaseFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) bool ```
    pub fn OnFocusPreviousChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QTableWidget_OnFocusPreviousChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QTableWidget_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QTableWidget_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QTableWidget_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QTableWidget_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QTableWidget_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QTableWidget_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QTableWidget_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QTableWidget_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QTableWidget_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QTableWidget_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QTableWidget_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTableWidget, slot: fn (?*C.QTableWidget, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTableWidget_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTableWidget ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTableWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtablewidget.html#types
pub const enums = struct {
    pub const ItemType = enum {
        pub const Type: i32 = 0;
        pub const UserType: i32 = 1000;
    };
};
