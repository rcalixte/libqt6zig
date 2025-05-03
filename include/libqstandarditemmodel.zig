const C = @import("qt6c");
const qabstractitemmodel_enums = @import("libqabstractitemmodel.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");
pub const map_i32_cqvariant = std.AutoHashMapUnmanaged(i32, ?*C.QVariant);
pub const map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// https://doc.qt.io/qt-6/qstandarditem.html
pub const qstandarditem = struct {
    /// New constructs a new QStandardItem object.
    ///
    ///
    pub fn New() ?*C.QStandardItem {
        return C.QStandardItem_new();
    }

    /// New2 constructs a new QStandardItem object.
    ///
    /// ``` text: []const u8 ```
    pub fn New2(text: []const u8) ?*C.QStandardItem {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };

        return C.QStandardItem_new2(text_str);
    }

    /// New3 constructs a new QStandardItem object.
    ///
    /// ``` icon: ?*C.QIcon, text: []const u8 ```
    pub fn New3(icon: ?*anyopaque, text: []const u8) ?*C.QStandardItem {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };

        return C.QStandardItem_new3(@ptrCast(icon), text_str);
    }

    /// New4 constructs a new QStandardItem object.
    ///
    /// ``` rows: i32 ```
    pub fn New4(rows: i32) ?*C.QStandardItem {
        return C.QStandardItem_new4(@intCast(rows));
    }

    /// New5 constructs a new QStandardItem object.
    ///
    /// ``` rows: i32, columns: i32 ```
    pub fn New5(rows: i32, columns: i32) ?*C.QStandardItem {
        return C.QStandardItem_new5(@intCast(rows), @intCast(columns));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#data)
    ///
    /// ``` self: ?*C.QStandardItem, role: i32 ```
    pub fn Data(self: ?*anyopaque, role: i32) ?*C.QVariant {
        return C.QStandardItem_Data(@ptrCast(self), @intCast(role));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItem, slot: fn (?*C.QStandardItem, i32) callconv(.c) ?*C.QVariant ```
    pub fn OnData(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QVariant) void {
        C.QStandardItem_OnData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItem, role: i32 ```
    pub fn QBaseData(self: ?*anyopaque, role: i32) ?*C.QVariant {
        return C.QStandardItem_QBaseData(@ptrCast(self), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#multiData)
    ///
    /// ``` self: ?*C.QStandardItem, roleDataSpan: ?*C.QModelRoleDataSpan ```
    pub fn MultiData(self: ?*anyopaque, roleDataSpan: ?*C.QModelRoleDataSpan) void {
        C.QStandardItem_MultiData(@ptrCast(self), @ptrCast(roleDataSpan));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItem, slot: fn (?*C.QStandardItem, ?*C.QModelRoleDataSpan) callconv(.c) void ```
    pub fn OnMultiData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*C.QModelRoleDataSpan) callconv(.c) void) void {
        C.QStandardItem_OnMultiData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItem, roleDataSpan: ?*C.QModelRoleDataSpan ```
    pub fn QBaseMultiData(self: ?*anyopaque, roleDataSpan: ?*C.QModelRoleDataSpan) void {
        C.QStandardItem_QBaseMultiData(@ptrCast(self), @ptrCast(roleDataSpan));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setData)
    ///
    /// ``` self: ?*C.QStandardItem, value: ?*C.QVariant, role: i32 ```
    pub fn SetData(self: ?*anyopaque, value: ?*anyopaque, role: i32) void {
        C.QStandardItem_SetData(@ptrCast(self), @ptrCast(value), @intCast(role));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItem, slot: fn (?*C.QStandardItem, ?*C.QVariant, i32) callconv(.c) void ```
    pub fn OnSetData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QStandardItem_OnSetData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItem, value: ?*C.QVariant, role: i32 ```
    pub fn QBaseSetData(self: ?*anyopaque, value: ?*anyopaque, role: i32) void {
        C.QStandardItem_QBaseSetData(@ptrCast(self), @ptrCast(value), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#clearData)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn ClearData(self: ?*anyopaque) void {
        C.QStandardItem_ClearData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#text)
    ///
    /// ``` self: ?*C.QStandardItem, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QStandardItem_Text(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setText)
    ///
    /// ``` self: ?*C.QStandardItem, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QStandardItem_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#icon)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn Icon(self: ?*anyopaque) ?*C.QIcon {
        return C.QStandardItem_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setIcon)
    ///
    /// ``` self: ?*C.QStandardItem, icon: ?*C.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        C.QStandardItem_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#toolTip)
    ///
    /// ``` self: ?*C.QStandardItem, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QStandardItem_ToolTip(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setToolTip)
    ///
    /// ``` self: ?*C.QStandardItem, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = C.struct_libqt_string{
            .len = toolTip.len,
            .data = @constCast(toolTip.ptr),
        };
        C.QStandardItem_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#statusTip)
    ///
    /// ``` self: ?*C.QStandardItem, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QStandardItem_StatusTip(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setStatusTip)
    ///
    /// ``` self: ?*C.QStandardItem, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = C.struct_libqt_string{
            .len = statusTip.len,
            .data = @constCast(statusTip.ptr),
        };
        C.QStandardItem_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#whatsThis)
    ///
    /// ``` self: ?*C.QStandardItem, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QStandardItem_WhatsThis(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setWhatsThis)
    ///
    /// ``` self: ?*C.QStandardItem, whatsThis: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = C.struct_libqt_string{
            .len = whatsThis.len,
            .data = @constCast(whatsThis.ptr),
        };
        C.QStandardItem_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#sizeHint)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn SizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QStandardItem_SizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setSizeHint)
    ///
    /// ``` self: ?*C.QStandardItem, sizeHint: ?*C.QSize ```
    pub fn SetSizeHint(self: ?*anyopaque, sizeHint: ?*anyopaque) void {
        C.QStandardItem_SetSizeHint(@ptrCast(self), @ptrCast(sizeHint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#font)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn Font(self: ?*anyopaque) ?*C.QFont {
        return C.QStandardItem_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setFont)
    ///
    /// ``` self: ?*C.QStandardItem, font: ?*C.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        C.QStandardItem_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#textAlignment)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn TextAlignment(self: ?*anyopaque) i64 {
        return C.QStandardItem_TextAlignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setTextAlignment)
    ///
    /// ``` self: ?*C.QStandardItem, textAlignment: i32 ```
    pub fn SetTextAlignment(self: ?*anyopaque, textAlignment: i64) void {
        C.QStandardItem_SetTextAlignment(@ptrCast(self), @intCast(textAlignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#background)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn Background(self: ?*anyopaque) ?*C.QBrush {
        return C.QStandardItem_Background(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setBackground)
    ///
    /// ``` self: ?*C.QStandardItem, brush: ?*C.QBrush ```
    pub fn SetBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QStandardItem_SetBackground(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#foreground)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn Foreground(self: ?*anyopaque) ?*C.QBrush {
        return C.QStandardItem_Foreground(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setForeground)
    ///
    /// ``` self: ?*C.QStandardItem, brush: ?*C.QBrush ```
    pub fn SetForeground(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QStandardItem_SetForeground(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#checkState)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn CheckState(self: ?*anyopaque) i64 {
        return C.QStandardItem_CheckState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setCheckState)
    ///
    /// ``` self: ?*C.QStandardItem, checkState: qnamespace_enums.CheckState ```
    pub fn SetCheckState(self: ?*anyopaque, checkState: i64) void {
        C.QStandardItem_SetCheckState(@ptrCast(self), @intCast(checkState));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#accessibleText)
    ///
    /// ``` self: ?*C.QStandardItem, allocator: std.mem.Allocator ```
    pub fn AccessibleText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QStandardItem_AccessibleText(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setAccessibleText)
    ///
    /// ``` self: ?*C.QStandardItem, accessibleText: []const u8 ```
    pub fn SetAccessibleText(self: ?*anyopaque, accessibleText: []const u8) void {
        const accessibleText_str = C.struct_libqt_string{
            .len = accessibleText.len,
            .data = @constCast(accessibleText.ptr),
        };
        C.QStandardItem_SetAccessibleText(@ptrCast(self), accessibleText_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#accessibleDescription)
    ///
    /// ``` self: ?*C.QStandardItem, allocator: std.mem.Allocator ```
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QStandardItem_AccessibleDescription(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setAccessibleDescription)
    ///
    /// ``` self: ?*C.QStandardItem, accessibleDescription: []const u8 ```
    pub fn SetAccessibleDescription(self: ?*anyopaque, accessibleDescription: []const u8) void {
        const accessibleDescription_str = C.struct_libqt_string{
            .len = accessibleDescription.len,
            .data = @constCast(accessibleDescription.ptr),
        };
        C.QStandardItem_SetAccessibleDescription(@ptrCast(self), accessibleDescription_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#flags)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn Flags(self: ?*anyopaque) i64 {
        return C.QStandardItem_Flags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setFlags)
    ///
    /// ``` self: ?*C.QStandardItem, flags: i32 ```
    pub fn SetFlags(self: ?*anyopaque, flags: i64) void {
        C.QStandardItem_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isEnabled)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return C.QStandardItem_IsEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setEnabled)
    ///
    /// ``` self: ?*C.QStandardItem, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QStandardItem_SetEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isEditable)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn IsEditable(self: ?*anyopaque) bool {
        return C.QStandardItem_IsEditable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setEditable)
    ///
    /// ``` self: ?*C.QStandardItem, editable: bool ```
    pub fn SetEditable(self: ?*anyopaque, editable: bool) void {
        C.QStandardItem_SetEditable(@ptrCast(self), editable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isSelectable)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn IsSelectable(self: ?*anyopaque) bool {
        return C.QStandardItem_IsSelectable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setSelectable)
    ///
    /// ``` self: ?*C.QStandardItem, selectable: bool ```
    pub fn SetSelectable(self: ?*anyopaque, selectable: bool) void {
        C.QStandardItem_SetSelectable(@ptrCast(self), selectable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isCheckable)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn IsCheckable(self: ?*anyopaque) bool {
        return C.QStandardItem_IsCheckable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setCheckable)
    ///
    /// ``` self: ?*C.QStandardItem, checkable: bool ```
    pub fn SetCheckable(self: ?*anyopaque, checkable: bool) void {
        C.QStandardItem_SetCheckable(@ptrCast(self), checkable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isAutoTristate)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn IsAutoTristate(self: ?*anyopaque) bool {
        return C.QStandardItem_IsAutoTristate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setAutoTristate)
    ///
    /// ``` self: ?*C.QStandardItem, tristate: bool ```
    pub fn SetAutoTristate(self: ?*anyopaque, tristate: bool) void {
        C.QStandardItem_SetAutoTristate(@ptrCast(self), tristate);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isUserTristate)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn IsUserTristate(self: ?*anyopaque) bool {
        return C.QStandardItem_IsUserTristate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setUserTristate)
    ///
    /// ``` self: ?*C.QStandardItem, tristate: bool ```
    pub fn SetUserTristate(self: ?*anyopaque, tristate: bool) void {
        C.QStandardItem_SetUserTristate(@ptrCast(self), tristate);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isDragEnabled)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn IsDragEnabled(self: ?*anyopaque) bool {
        return C.QStandardItem_IsDragEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setDragEnabled)
    ///
    /// ``` self: ?*C.QStandardItem, dragEnabled: bool ```
    pub fn SetDragEnabled(self: ?*anyopaque, dragEnabled: bool) void {
        C.QStandardItem_SetDragEnabled(@ptrCast(self), dragEnabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isDropEnabled)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn IsDropEnabled(self: ?*anyopaque) bool {
        return C.QStandardItem_IsDropEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setDropEnabled)
    ///
    /// ``` self: ?*C.QStandardItem, dropEnabled: bool ```
    pub fn SetDropEnabled(self: ?*anyopaque, dropEnabled: bool) void {
        C.QStandardItem_SetDropEnabled(@ptrCast(self), dropEnabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#parent)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn Parent(self: ?*anyopaque) ?*C.QStandardItem {
        return C.QStandardItem_Parent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#row)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn Row(self: ?*anyopaque) i32 {
        return C.QStandardItem_Row(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#column)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn Column(self: ?*anyopaque) i32 {
        return C.QStandardItem_Column(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#index)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn Index(self: ?*anyopaque) ?*C.QModelIndex {
        return C.QStandardItem_Index(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#model)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn Model(self: ?*anyopaque) ?*C.QStandardItemModel {
        return C.QStandardItem_Model(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#rowCount)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn RowCount(self: ?*anyopaque) i32 {
        return C.QStandardItem_RowCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setRowCount)
    ///
    /// ``` self: ?*C.QStandardItem, rows: i32 ```
    pub fn SetRowCount(self: ?*anyopaque, rows: i32) void {
        C.QStandardItem_SetRowCount(@ptrCast(self), @intCast(rows));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#columnCount)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn ColumnCount(self: ?*anyopaque) i32 {
        return C.QStandardItem_ColumnCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setColumnCount)
    ///
    /// ``` self: ?*C.QStandardItem, columns: i32 ```
    pub fn SetColumnCount(self: ?*anyopaque, columns: i32) void {
        C.QStandardItem_SetColumnCount(@ptrCast(self), @intCast(columns));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#hasChildren)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn HasChildren(self: ?*anyopaque) bool {
        return C.QStandardItem_HasChildren(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#child)
    ///
    /// ``` self: ?*C.QStandardItem, row: i32 ```
    pub fn Child(self: ?*anyopaque, row: i32) ?*C.QStandardItem {
        return C.QStandardItem_Child(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setChild)
    ///
    /// ``` self: ?*C.QStandardItem, row: i32, column: i32, item: ?*C.QStandardItem ```
    pub fn SetChild(self: ?*anyopaque, row: i32, column: i32, item: ?*anyopaque) void {
        C.QStandardItem_SetChild(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setChild)
    ///
    /// ``` self: ?*C.QStandardItem, row: i32, item: ?*C.QStandardItem ```
    pub fn SetChild2(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        C.QStandardItem_SetChild2(@ptrCast(self), @intCast(row), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertRow)
    ///
    /// ``` self: ?*C.QStandardItem, row: i32, items: []?*C.QStandardItem ```
    pub fn InsertRow(self: ?*anyopaque, row: i32, items: []?*anyopaque) void {
        const items_list = C.struct_libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        C.QStandardItem_InsertRow(@ptrCast(self), @intCast(row), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertColumn)
    ///
    /// ``` self: ?*C.QStandardItem, column: i32, items: []?*C.QStandardItem ```
    pub fn InsertColumn(self: ?*anyopaque, column: i32, items: []?*anyopaque) void {
        const items_list = C.struct_libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        C.QStandardItem_InsertColumn(@ptrCast(self), @intCast(column), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertRows)
    ///
    /// ``` self: ?*C.QStandardItem, row: i32, items: []?*C.QStandardItem ```
    pub fn InsertRows(self: ?*anyopaque, row: i32, items: []?*anyopaque) void {
        const items_list = C.struct_libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        C.QStandardItem_InsertRows(@ptrCast(self), @intCast(row), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertRows)
    ///
    /// ``` self: ?*C.QStandardItem, row: i32, count: i32 ```
    pub fn InsertRows2(self: ?*anyopaque, row: i32, count: i32) void {
        C.QStandardItem_InsertRows2(@ptrCast(self), @intCast(row), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertColumns)
    ///
    /// ``` self: ?*C.QStandardItem, column: i32, count: i32 ```
    pub fn InsertColumns(self: ?*anyopaque, column: i32, count: i32) void {
        C.QStandardItem_InsertColumns(@ptrCast(self), @intCast(column), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#removeRow)
    ///
    /// ``` self: ?*C.QStandardItem, row: i32 ```
    pub fn RemoveRow(self: ?*anyopaque, row: i32) void {
        C.QStandardItem_RemoveRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#removeColumn)
    ///
    /// ``` self: ?*C.QStandardItem, column: i32 ```
    pub fn RemoveColumn(self: ?*anyopaque, column: i32) void {
        C.QStandardItem_RemoveColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#removeRows)
    ///
    /// ``` self: ?*C.QStandardItem, row: i32, count: i32 ```
    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32) void {
        C.QStandardItem_RemoveRows(@ptrCast(self), @intCast(row), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#removeColumns)
    ///
    /// ``` self: ?*C.QStandardItem, column: i32, count: i32 ```
    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32) void {
        C.QStandardItem_RemoveColumns(@ptrCast(self), @intCast(column), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#appendRow)
    ///
    /// ``` self: ?*C.QStandardItem, items: []?*C.QStandardItem ```
    pub fn AppendRow(self: ?*anyopaque, items: []?*anyopaque) void {
        const items_list = C.struct_libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        C.QStandardItem_AppendRow(@ptrCast(self), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#appendRows)
    ///
    /// ``` self: ?*C.QStandardItem, items: []?*C.QStandardItem ```
    pub fn AppendRows(self: ?*anyopaque, items: []?*anyopaque) void {
        const items_list = C.struct_libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        C.QStandardItem_AppendRows(@ptrCast(self), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#appendColumn)
    ///
    /// ``` self: ?*C.QStandardItem, items: []?*C.QStandardItem ```
    pub fn AppendColumn(self: ?*anyopaque, items: []?*anyopaque) void {
        const items_list = C.struct_libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        C.QStandardItem_AppendColumn(@ptrCast(self), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertRow)
    ///
    /// ``` self: ?*C.QStandardItem, row: i32, item: ?*C.QStandardItem ```
    pub fn InsertRow2(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        C.QStandardItem_InsertRow2(@ptrCast(self), @intCast(row), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#appendRow)
    ///
    /// ``` self: ?*C.QStandardItem, item: ?*C.QStandardItem ```
    pub fn AppendRowWithItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QStandardItem_AppendRowWithItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#takeChild)
    ///
    /// ``` self: ?*C.QStandardItem, row: i32 ```
    pub fn TakeChild(self: ?*anyopaque, row: i32) ?*C.QStandardItem {
        return C.QStandardItem_TakeChild(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#takeRow)
    ///
    /// ``` self: ?*C.QStandardItem, row: i32, allocator: std.mem.Allocator ```
    pub fn TakeRow(self: ?*anyopaque, row: i32, allocator: std.mem.Allocator) []?*C.QStandardItem {
        const _arr: C.struct_libqt_list = C.QStandardItem_TakeRow(@ptrCast(self), @intCast(row));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QStandardItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QStandardItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#takeColumn)
    ///
    /// ``` self: ?*C.QStandardItem, column: i32, allocator: std.mem.Allocator ```
    pub fn TakeColumn(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []?*C.QStandardItem {
        const _arr: C.struct_libqt_list = C.QStandardItem_TakeColumn(@ptrCast(self), @intCast(column));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QStandardItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QStandardItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#sortChildren)
    ///
    /// ``` self: ?*C.QStandardItem, column: i32 ```
    pub fn SortChildren(self: ?*anyopaque, column: i32) void {
        C.QStandardItem_SortChildren(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#clone)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn Clone(self: ?*anyopaque) ?*C.QStandardItem {
        return C.QStandardItem_Clone(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItem, slot: fn () callconv(.c) ?*C.QStandardItem ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QStandardItem) void {
        C.QStandardItem_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn QBaseClone(self: ?*anyopaque) ?*C.QStandardItem {
        return C.QStandardItem_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#type)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn Type(self: ?*anyopaque) i32 {
        return C.QStandardItem_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItem, slot: fn () callconv(.c) i32 ```
    pub fn OnType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QStandardItem_OnType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn QBaseType(self: ?*anyopaque) i32 {
        return C.QStandardItem_QBaseType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#read)
    ///
    /// ``` self: ?*C.QStandardItem, in: ?*C.QDataStream ```
    pub fn Read(self: ?*anyopaque, in: ?*anyopaque) void {
        C.QStandardItem_Read(@ptrCast(self), @ptrCast(in));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItem, slot: fn (?*C.QStandardItem, ?*C.QDataStream) callconv(.c) void ```
    pub fn OnRead(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QStandardItem_OnRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItem, in: ?*C.QDataStream ```
    pub fn QBaseRead(self: ?*anyopaque, in: ?*anyopaque) void {
        C.QStandardItem_QBaseRead(@ptrCast(self), @ptrCast(in));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#write)
    ///
    /// ``` self: ?*C.QStandardItem, out: ?*C.QDataStream ```
    pub fn Write(self: ?*anyopaque, out: ?*anyopaque) void {
        C.QStandardItem_Write(@ptrCast(self), @ptrCast(out));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItem, slot: fn (?*C.QStandardItem, ?*C.QDataStream) callconv(.c) void ```
    pub fn OnWrite(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QStandardItem_OnWrite(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItem, out: ?*C.QDataStream ```
    pub fn QBaseWrite(self: ?*anyopaque, out: ?*anyopaque) void {
        C.QStandardItem_QBaseWrite(@ptrCast(self), @ptrCast(out));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#operator<)
    ///
    /// ``` self: ?*C.QStandardItem, other: ?*C.QStandardItem ```
    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QStandardItem_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItem, slot: fn (?*C.QStandardItem, ?*C.QStandardItem) callconv(.c) bool ```
    pub fn OnOperatorLesser(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QStandardItem_OnOperatorLesser(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItem, other: ?*C.QStandardItem ```
    pub fn QBaseOperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QStandardItem_QBaseOperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#operator=)
    ///
    /// ``` self: ?*C.QStandardItem, other: ?*C.QStandardItem ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QStandardItem_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItem, slot: fn (?*C.QStandardItem, ?*C.QStandardItem) callconv(.c) void ```
    pub fn OnOperatorAssign(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QStandardItem_OnOperatorAssign(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItem, other: ?*C.QStandardItem ```
    pub fn QBaseOperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QStandardItem_QBaseOperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#emitDataChanged)
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn EmitDataChanged(self: ?*anyopaque) void {
        C.QStandardItem_EmitDataChanged(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItem, slot: fn () callconv(.c) void ```
    pub fn OnEmitDataChanged(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QStandardItem_OnEmitDataChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn QBaseEmitDataChanged(self: ?*anyopaque) void {
        C.QStandardItem_QBaseEmitDataChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#child)
    ///
    /// ``` self: ?*C.QStandardItem, row: i32, column: i32 ```
    pub fn Child2(self: ?*anyopaque, row: i32, column: i32) ?*C.QStandardItem {
        return C.QStandardItem_Child2(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#takeChild)
    ///
    /// ``` self: ?*C.QStandardItem, row: i32, column: i32 ```
    pub fn TakeChild2(self: ?*anyopaque, row: i32, column: i32) ?*C.QStandardItem {
        return C.QStandardItem_TakeChild2(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#sortChildren)
    ///
    /// ``` self: ?*C.QStandardItem, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn SortChildren2(self: ?*anyopaque, column: i32, order: i64) void {
        C.QStandardItem_SortChildren2(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QStandardItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QStandardItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstandarditemmodel.html
pub const qstandarditemmodel = struct {
    /// New constructs a new QStandardItemModel object.
    ///
    ///
    pub fn New() ?*C.QStandardItemModel {
        return C.QStandardItemModel_new();
    }

    /// New2 constructs a new QStandardItemModel object.
    ///
    /// ``` rows: i32, columns: i32 ```
    pub fn New2(rows: i32, columns: i32) ?*C.QStandardItemModel {
        return C.QStandardItemModel_new2(@intCast(rows), @intCast(columns));
    }

    /// New3 constructs a new QStandardItemModel object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New3(parent: ?*anyopaque) ?*C.QStandardItemModel {
        return C.QStandardItemModel_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QStandardItemModel object.
    ///
    /// ``` rows: i32, columns: i32, parent: ?*C.QObject ```
    pub fn New4(rows: i32, columns: i32, parent: ?*anyopaque) ?*C.QStandardItemModel {
        return C.QStandardItemModel_new4(@intCast(rows), @intCast(columns), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QStandardItemModel_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QStandardItemModel, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QStandardItemModel_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QStandardItemModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QStandardItemModel_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QStandardItemModel_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QStandardItemModel_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QStandardItemModel_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemRoleNames)
    ///
    /// ``` self: ?*C.QStandardItemModel, roleNames: map_i32_u8, allocator: std.mem.Allocator ```
    pub fn SetItemRoleNames(self: ?*anyopaque, roleNames: map_i32_u8, allocator: std.mem.Allocator) void {
        const roleNames_keys = allocator.alloc(i32, roleNames.count()) catch @panic("Memory allocation failed");
        defer allocator.free(roleNames_keys);
        const roleNames_values = allocator.alloc([]u8, roleNames.count()) catch @panic("Memory allocation failed");
        defer allocator.free(roleNames_values);
        var _i: usize = 0;
        var roleNames_it = roleNames.iterator();
        while (roleNames_it.next()) |entry| {
            const key = entry.key_ptr.*;
            roleNames_keys[_i] = @intCast(key);
            roleNames_values[_i] = entry.value_ptr.*;
            _i += 1;
        }
        const roleNames_map = C.struct_libqt_map{
            .len = roleNames.count(),
            .keys = @ptrCast(roleNames_keys.ptr),
            .values = @ptrCast(roleNames_values.ptr),
        };
        C.QStandardItemModel_SetItemRoleNames(@ptrCast(self), roleNames_map);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#roleNames)
    ///
    /// ``` self: ?*C.QStandardItemModel, allocator: std.mem.Allocator ```
    pub fn RoleNames(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: C.struct_libqt_map = C.QStandardItemModel_RoleNames(@ptrCast(self));
        var _ret: map_i32_u8 = .empty;
        defer {
            C.libqt_free(_map.keys);
            C.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]u8 = @ptrCast(@alignCast(_map.values));
        var _i: usize = 0;
        while (_i < _map.len) : (_i += 1) {
            const _key = _keys[_i];
            const _value = _values[_i];
            _ret.put(allocator, _key, _value) catch @panic("Memory allocation failed");
        }
        return _ret;
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn () callconv(.c) map_i32_u8 ```
    pub fn OnRoleNames(self: ?*anyopaque, slot: fn () callconv(.c) map_i32_u8) void {
        C.QStandardItemModel_OnRoleNames(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, allocator: std.mem.Allocator ```
    pub fn QBaseRoleNames(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: C.struct_libqt_map = C.QStandardItemModel_QBaseRoleNames(@ptrCast(self));
        var _ret: map_i32_u8 = .empty;
        defer {
            C.libqt_free(_map.keys);
            C.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]u8 = @ptrCast(@alignCast(_map.values));
        var _i: usize = 0;
        while (_i < _map.len) : (_i += 1) {
            const _key = _keys[_i];
            const _value = _values[_i];
            _ret.put(allocator, _key, _value) catch @panic("Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#index)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, column: i32, parent: ?*C.QModelIndex ```
    pub fn Index(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) ?*C.QModelIndex {
        return C.QStandardItemModel_Index(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, i32, i32, ?*C.QModelIndex) callconv(.c) ?*C.QModelIndex ```
    pub fn OnIndex(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) ?*C.QModelIndex) void {
        C.QStandardItemModel_OnIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, column: i32, parent: ?*C.QModelIndex ```
    pub fn QBaseIndex(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) ?*C.QModelIndex {
        return C.QStandardItemModel_QBaseIndex(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#parent)
    ///
    /// ``` self: ?*C.QStandardItemModel, child: ?*C.QModelIndex ```
    pub fn Parent(self: ?*anyopaque, child: ?*anyopaque) ?*C.QModelIndex {
        return C.QStandardItemModel_Parent(@ptrCast(self), @ptrCast(child));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex) callconv(.c) ?*C.QModelIndex ```
    pub fn OnParent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QModelIndex) void {
        C.QStandardItemModel_OnParent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, child: ?*C.QModelIndex ```
    pub fn QBaseParent(self: ?*anyopaque, child: ?*anyopaque) ?*C.QModelIndex {
        return C.QStandardItemModel_QBaseParent(@ptrCast(self), @ptrCast(child));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#rowCount)
    ///
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QModelIndex ```
    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return C.QStandardItemModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex) callconv(.c) i32 ```
    pub fn OnRowCount(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QStandardItemModel_OnRowCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QModelIndex ```
    pub fn QBaseRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return C.QStandardItemModel_QBaseRowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#columnCount)
    ///
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QModelIndex ```
    pub fn ColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return C.QStandardItemModel_ColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex) callconv(.c) i32 ```
    pub fn OnColumnCount(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QStandardItemModel_OnColumnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QModelIndex ```
    pub fn QBaseColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return C.QStandardItemModel_QBaseColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#hasChildren)
    ///
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QModelIndex ```
    pub fn HasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return C.QStandardItemModel_HasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnHasChildren(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QStandardItemModel_OnHasChildren(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QModelIndex ```
    pub fn QBaseHasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return C.QStandardItemModel_QBaseHasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#data)
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex, role: i32 ```
    pub fn Data(self: ?*anyopaque, index: ?*anyopaque, role: i32) ?*C.QVariant {
        return C.QStandardItemModel_Data(@ptrCast(self), @ptrCast(index), @intCast(role));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex, i32) callconv(.c) ?*C.QVariant ```
    pub fn OnData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) ?*C.QVariant) void {
        C.QStandardItemModel_OnData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex, role: i32 ```
    pub fn QBaseData(self: ?*anyopaque, index: ?*anyopaque, role: i32) ?*C.QVariant {
        return C.QStandardItemModel_QBaseData(@ptrCast(self), @ptrCast(index), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#multiData)
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex, roleDataSpan: ?*C.QModelRoleDataSpan ```
    pub fn MultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: ?*C.QModelRoleDataSpan) void {
        C.QStandardItemModel_MultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex, ?*C.QModelRoleDataSpan) callconv(.c) void ```
    pub fn OnMultiData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*C.QModelRoleDataSpan) callconv(.c) void) void {
        C.QStandardItemModel_OnMultiData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex, roleDataSpan: ?*C.QModelRoleDataSpan ```
    pub fn QBaseMultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: ?*C.QModelRoleDataSpan) void {
        C.QStandardItemModel_QBaseMultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setData)
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex, value: ?*C.QVariant, role: i32 ```
    pub fn SetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return C.QStandardItemModel_SetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), @intCast(role));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex, ?*C.QVariant, i32) callconv(.c) bool ```
    pub fn OnSetData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        C.QStandardItemModel_OnSetData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex, value: ?*C.QVariant, role: i32 ```
    pub fn QBaseSetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return C.QStandardItemModel_QBaseSetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#clearItemData)
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex ```
    pub fn ClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return C.QStandardItemModel_ClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnClearItemData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QStandardItemModel_OnClearItemData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex ```
    pub fn QBaseClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return C.QStandardItemModel_QBaseClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#headerData)
    ///
    /// ``` self: ?*C.QStandardItemModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32 ```
    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i64, role: i32) ?*C.QVariant {
        return C.QStandardItemModel_HeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @intCast(role));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, i32, qnamespace_enums.Orientation, i32) callconv(.c) ?*C.QVariant ```
    pub fn OnHeaderData(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i64, i32) callconv(.c) ?*C.QVariant) void {
        C.QStandardItemModel_OnHeaderData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32 ```
    pub fn QBaseHeaderData(self: ?*anyopaque, section: i32, orientation: i64, role: i32) ?*C.QVariant {
        return C.QStandardItemModel_QBaseHeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHeaderData)
    ///
    /// ``` self: ?*C.QStandardItemModel, section: i32, orientation: qnamespace_enums.Orientation, value: ?*C.QVariant, role: i32 ```
    pub fn SetHeaderData(self: ?*anyopaque, section: i32, orientation: i64, value: ?*anyopaque, role: i32) bool {
        return C.QStandardItemModel_SetHeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @ptrCast(value), @intCast(role));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, i32, qnamespace_enums.Orientation, ?*C.QVariant, i32) callconv(.c) bool ```
    pub fn OnSetHeaderData(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i64, ?*anyopaque, i32) callconv(.c) bool) void {
        C.QStandardItemModel_OnSetHeaderData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, section: i32, orientation: qnamespace_enums.Orientation, value: ?*C.QVariant, role: i32 ```
    pub fn QBaseSetHeaderData(self: ?*anyopaque, section: i32, orientation: i64, value: ?*anyopaque, role: i32) bool {
        return C.QStandardItemModel_QBaseSetHeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @ptrCast(value), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRows)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, count: i32, parent: ?*C.QModelIndex ```
    pub fn InsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return C.QStandardItemModel_InsertRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, i32, i32, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnInsertRows(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        C.QStandardItemModel_OnInsertRows(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, count: i32, parent: ?*C.QModelIndex ```
    pub fn QBaseInsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return C.QStandardItemModel_QBaseInsertRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumns)
    ///
    /// ``` self: ?*C.QStandardItemModel, column: i32, count: i32, parent: ?*C.QModelIndex ```
    pub fn InsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return C.QStandardItemModel_InsertColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, i32, i32, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnInsertColumns(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        C.QStandardItemModel_OnInsertColumns(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, column: i32, count: i32, parent: ?*C.QModelIndex ```
    pub fn QBaseInsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return C.QStandardItemModel_QBaseInsertColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeRows)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, count: i32, parent: ?*C.QModelIndex ```
    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return C.QStandardItemModel_RemoveRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, i32, i32, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnRemoveRows(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        C.QStandardItemModel_OnRemoveRows(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, count: i32, parent: ?*C.QModelIndex ```
    pub fn QBaseRemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return C.QStandardItemModel_QBaseRemoveRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeColumns)
    ///
    /// ``` self: ?*C.QStandardItemModel, column: i32, count: i32, parent: ?*C.QModelIndex ```
    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return C.QStandardItemModel_RemoveColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, i32, i32, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnRemoveColumns(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        C.QStandardItemModel_OnRemoveColumns(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, column: i32, count: i32, parent: ?*C.QModelIndex ```
    pub fn QBaseRemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return C.QStandardItemModel_QBaseRemoveColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#flags)
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex ```
    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i64 {
        return C.QStandardItemModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex) callconv(.c) i64 ```
    pub fn OnFlags(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i64) void {
        C.QStandardItemModel_OnFlags(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex ```
    pub fn QBaseFlags(self: ?*anyopaque, index: ?*anyopaque) i64 {
        return C.QStandardItemModel_QBaseFlags(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#supportedDropActions)
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn SupportedDropActions(self: ?*anyopaque) i64 {
        return C.QStandardItemModel_SupportedDropActions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn () callconv(.c) i64 ```
    pub fn OnSupportedDropActions(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QStandardItemModel_OnSupportedDropActions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn QBaseSupportedDropActions(self: ?*anyopaque) i64 {
        return C.QStandardItemModel_QBaseSupportedDropActions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemData)
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex, allocator: std.mem.Allocator ```
    pub fn ItemData(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) map_i32_cqvariant {
        const _map: C.struct_libqt_map = C.QStandardItemModel_ItemData(@ptrCast(self), @ptrCast(index));
        var _ret: map_i32_cqvariant = .empty;
        defer {
            C.libqt_free(_map.keys);
            C.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]?*C.QVariant = @ptrCast(@alignCast(_map.values));
        var _i: usize = 0;
        while (_i < _map.len) : (_i += 1) {
            const _key = _keys[_i];
            const _value = _values[_i];
            _ret.put(allocator, _key, _value) catch @panic("Memory allocation failed");
        }
        return _ret;
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex) callconv(.c) map_i32_cqvariant ```
    pub fn OnItemData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) map_i32_cqvariant) void {
        C.QStandardItemModel_OnItemData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex, allocator: std.mem.Allocator ```
    pub fn QBaseItemData(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) map_i32_cqvariant {
        const _map: C.struct_libqt_map = C.QStandardItemModel_QBaseItemData(@ptrCast(self), @ptrCast(index));
        var _ret: map_i32_cqvariant = .empty;
        defer {
            C.libqt_free(_map.keys);
            C.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]?*C.QVariant = @ptrCast(@alignCast(_map.values));
        var _i: usize = 0;
        while (_i < _map.len) : (_i += 1) {
            const _key = _keys[_i];
            const _value = _values[_i];
            _ret.put(allocator, _key, _value) catch @panic("Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemData)
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex, roles: map_i32_cqvariant, allocator: std.mem.Allocator ```
    pub fn SetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: map_i32_cqvariant, allocator: std.mem.Allocator) bool {
        const roles_keys = allocator.alloc(i32, roles.count()) catch @panic("Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(?*C.QVariant, roles.count()) catch @panic("Memory allocation failed");
        defer allocator.free(roles_values);
        var _i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |entry| {
            const key = entry.key_ptr.*;
            roles_keys[_i] = @intCast(key);
            roles_values[_i] = entry.value_ptr.*;
            _i += 1;
        }
        const roles_map = C.struct_libqt_map{
            .len = roles.count(),
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return C.QStandardItemModel_SetItemData(@ptrCast(self), @ptrCast(index), roles_map);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex, map_i32_cqvariant) callconv(.c) bool ```
    pub fn OnSetItemData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, map_i32_cqvariant) callconv(.c) bool) void {
        C.QStandardItemModel_OnSetItemData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex, roles: map_i32_cqvariant, allocator: std.mem.Allocator ```
    pub fn QBaseSetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: map_i32_cqvariant, allocator: std.mem.Allocator) bool {
        const roles_keys = allocator.alloc(i32, roles.count()) catch @panic("Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(?*C.QVariant, roles.count()) catch @panic("Memory allocation failed");
        defer allocator.free(roles_values);
        var _i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |entry| {
            const key = entry.key_ptr.*;
            roles_keys[_i] = @intCast(key);
            roles_values[_i] = entry.value_ptr.*;
            _i += 1;
        }
        const roles_map = C.struct_libqt_map{
            .len = roles.count(),
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return C.QStandardItemModel_QBaseSetItemData(@ptrCast(self), @ptrCast(index), roles_map);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#clear)
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn Clear(self: ?*anyopaque) void {
        C.QStandardItemModel_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#sort)
    ///
    /// ``` self: ?*C.QStandardItemModel, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn Sort(self: ?*anyopaque, column: i32, order: i64) void {
        C.QStandardItemModel_Sort(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, i32, qnamespace_enums.SortOrder) callconv(.c) void ```
    pub fn OnSort(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i64) callconv(.c) void) void {
        C.QStandardItemModel_OnSort(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn QBaseSort(self: ?*anyopaque, column: i32, order: i64) void {
        C.QStandardItemModel_QBaseSort(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemFromIndex)
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex ```
    pub fn ItemFromIndex(self: ?*anyopaque, index: ?*anyopaque) ?*C.QStandardItem {
        return C.QStandardItemModel_ItemFromIndex(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#indexFromItem)
    ///
    /// ``` self: ?*C.QStandardItemModel, item: ?*C.QStandardItem ```
    pub fn IndexFromItem(self: ?*anyopaque, item: ?*anyopaque) ?*C.QModelIndex {
        return C.QStandardItemModel_IndexFromItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#item)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32 ```
    pub fn Item(self: ?*anyopaque, row: i32) ?*C.QStandardItem {
        return C.QStandardItemModel_Item(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItem)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, column: i32, item: ?*C.QStandardItem ```
    pub fn SetItem(self: ?*anyopaque, row: i32, column: i32, item: ?*anyopaque) void {
        C.QStandardItemModel_SetItem(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItem)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, item: ?*C.QStandardItem ```
    pub fn SetItem2(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        C.QStandardItemModel_SetItem2(@ptrCast(self), @intCast(row), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#invisibleRootItem)
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn InvisibleRootItem(self: ?*anyopaque) ?*C.QStandardItem {
        return C.QStandardItemModel_InvisibleRootItem(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#horizontalHeaderItem)
    ///
    /// ``` self: ?*C.QStandardItemModel, column: i32 ```
    pub fn HorizontalHeaderItem(self: ?*anyopaque, column: i32) ?*C.QStandardItem {
        return C.QStandardItemModel_HorizontalHeaderItem(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHorizontalHeaderItem)
    ///
    /// ``` self: ?*C.QStandardItemModel, column: i32, item: ?*C.QStandardItem ```
    pub fn SetHorizontalHeaderItem(self: ?*anyopaque, column: i32, item: ?*anyopaque) void {
        C.QStandardItemModel_SetHorizontalHeaderItem(@ptrCast(self), @intCast(column), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#verticalHeaderItem)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32 ```
    pub fn VerticalHeaderItem(self: ?*anyopaque, row: i32) ?*C.QStandardItem {
        return C.QStandardItemModel_VerticalHeaderItem(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setVerticalHeaderItem)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, item: ?*C.QStandardItem ```
    pub fn SetVerticalHeaderItem(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        C.QStandardItemModel_SetVerticalHeaderItem(@ptrCast(self), @intCast(row), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHorizontalHeaderLabels)
    ///
    /// ``` self: ?*C.QStandardItemModel, labels: [][]const u8, allocator: std.mem.Allocator ```
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
        C.QStandardItemModel_SetHorizontalHeaderLabels(@ptrCast(self), labels_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setVerticalHeaderLabels)
    ///
    /// ``` self: ?*C.QStandardItemModel, labels: [][]const u8, allocator: std.mem.Allocator ```
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
        C.QStandardItemModel_SetVerticalHeaderLabels(@ptrCast(self), labels_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setRowCount)
    ///
    /// ``` self: ?*C.QStandardItemModel, rows: i32 ```
    pub fn SetRowCount(self: ?*anyopaque, rows: i32) void {
        C.QStandardItemModel_SetRowCount(@ptrCast(self), @intCast(rows));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setColumnCount)
    ///
    /// ``` self: ?*C.QStandardItemModel, columns: i32 ```
    pub fn SetColumnCount(self: ?*anyopaque, columns: i32) void {
        C.QStandardItemModel_SetColumnCount(@ptrCast(self), @intCast(columns));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#appendRow)
    ///
    /// ``` self: ?*C.QStandardItemModel, items: []?*C.QStandardItem ```
    pub fn AppendRow(self: ?*anyopaque, items: []?*anyopaque) void {
        const items_list = C.struct_libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        C.QStandardItemModel_AppendRow(@ptrCast(self), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#appendColumn)
    ///
    /// ``` self: ?*C.QStandardItemModel, items: []?*C.QStandardItem ```
    pub fn AppendColumn(self: ?*anyopaque, items: []?*anyopaque) void {
        const items_list = C.struct_libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        C.QStandardItemModel_AppendColumn(@ptrCast(self), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#appendRow)
    ///
    /// ``` self: ?*C.QStandardItemModel, item: ?*C.QStandardItem ```
    pub fn AppendRowWithItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QStandardItemModel_AppendRowWithItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, items: []?*C.QStandardItem ```
    pub fn InsertRow(self: ?*anyopaque, row: i32, items: []?*anyopaque) void {
        const items_list = C.struct_libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        C.QStandardItemModel_InsertRow(@ptrCast(self), @intCast(row), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumn)
    ///
    /// ``` self: ?*C.QStandardItemModel, column: i32, items: []?*C.QStandardItem ```
    pub fn InsertColumn(self: ?*anyopaque, column: i32, items: []?*anyopaque) void {
        const items_list = C.struct_libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        C.QStandardItemModel_InsertColumn(@ptrCast(self), @intCast(column), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, item: ?*C.QStandardItem ```
    pub fn InsertRow2(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        C.QStandardItemModel_InsertRow2(@ptrCast(self), @intCast(row), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32 ```
    pub fn InsertRowWithRow(self: ?*anyopaque, row: i32) bool {
        return C.QStandardItemModel_InsertRowWithRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumn)
    ///
    /// ``` self: ?*C.QStandardItemModel, column: i32 ```
    pub fn InsertColumnWithColumn(self: ?*anyopaque, column: i32) bool {
        return C.QStandardItemModel_InsertColumnWithColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeItem)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32 ```
    pub fn TakeItem(self: ?*anyopaque, row: i32) ?*C.QStandardItem {
        return C.QStandardItemModel_TakeItem(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeRow)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, allocator: std.mem.Allocator ```
    pub fn TakeRow(self: ?*anyopaque, row: i32, allocator: std.mem.Allocator) []?*C.QStandardItem {
        const _arr: C.struct_libqt_list = C.QStandardItemModel_TakeRow(@ptrCast(self), @intCast(row));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QStandardItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QStandardItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeColumn)
    ///
    /// ``` self: ?*C.QStandardItemModel, column: i32, allocator: std.mem.Allocator ```
    pub fn TakeColumn(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []?*C.QStandardItem {
        const _arr: C.struct_libqt_list = C.QStandardItemModel_TakeColumn(@ptrCast(self), @intCast(column));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QStandardItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QStandardItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeHorizontalHeaderItem)
    ///
    /// ``` self: ?*C.QStandardItemModel, column: i32 ```
    pub fn TakeHorizontalHeaderItem(self: ?*anyopaque, column: i32) ?*C.QStandardItem {
        return C.QStandardItemModel_TakeHorizontalHeaderItem(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeVerticalHeaderItem)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32 ```
    pub fn TakeVerticalHeaderItem(self: ?*anyopaque, row: i32) ?*C.QStandardItem {
        return C.QStandardItemModel_TakeVerticalHeaderItem(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemPrototype)
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn ItemPrototype(self: ?*anyopaque) ?*C.QStandardItem {
        return C.QStandardItemModel_ItemPrototype(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemPrototype)
    ///
    /// ``` self: ?*C.QStandardItemModel, item: ?*C.QStandardItem ```
    pub fn SetItemPrototype(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QStandardItemModel_SetItemPrototype(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#findItems)
    ///
    /// ``` self: ?*C.QStandardItemModel, text: []const u8, allocator: std.mem.Allocator ```
    pub fn FindItems(self: ?*anyopaque, text: []const u8, allocator: std.mem.Allocator) []?*C.QStandardItem {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        const _arr: C.struct_libqt_list = C.QStandardItemModel_FindItems(@ptrCast(self), text_str);
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QStandardItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QStandardItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#sortRole)
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn SortRole(self: ?*anyopaque) i32 {
        return C.QStandardItemModel_SortRole(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setSortRole)
    ///
    /// ``` self: ?*C.QStandardItemModel, role: i32 ```
    pub fn SetSortRole(self: ?*anyopaque, role: i32) void {
        C.QStandardItemModel_SetSortRole(@ptrCast(self), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeTypes)
    ///
    /// ``` self: ?*C.QStandardItemModel, allocator: std.mem.Allocator ```
    pub fn MimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QStandardItemModel_MimeTypes(@ptrCast(self));
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
    /// ``` self: ?*C.QStandardItemModel, slot: fn () callconv(.c) [][]const u8 ```
    pub fn OnMimeTypes(self: ?*anyopaque, slot: fn () callconv(.c) [][]const u8) void {
        C.QStandardItemModel_OnMimeTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, allocator: std.mem.Allocator ```
    pub fn QBaseMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QStandardItemModel_QBaseMimeTypes(@ptrCast(self));
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeData)
    ///
    /// ``` self: ?*C.QStandardItemModel, indexes: []?*C.QModelIndex ```
    pub fn MimeData(self: ?*anyopaque, indexes: []?*C.QModelIndex) ?*C.QMimeData {
        const indexes_list = C.struct_libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return C.QStandardItemModel_MimeData(@ptrCast(self), indexes_list);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, []?*C.QModelIndex) callconv(.c) ?*C.QMimeData ```
    pub fn OnMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, []?*C.QModelIndex) callconv(.c) ?*C.QMimeData) void {
        C.QStandardItemModel_OnMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, indexes: []?*C.QModelIndex ```
    pub fn QBaseMimeData(self: ?*anyopaque, indexes: []?*C.QModelIndex) ?*C.QMimeData {
        const indexes_list = C.struct_libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return C.QStandardItemModel_QBaseMimeData(@ptrCast(self), indexes_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#dropMimeData)
    ///
    /// ``` self: ?*C.QStandardItemModel, data: ?*C.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: ?*C.QModelIndex ```
    pub fn DropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i64, row: i32, column: i32, parent: ?*anyopaque) bool {
        return C.QStandardItemModel_DropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QMimeData, qnamespace_enums.DropAction, i32, i32, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnDropMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        C.QStandardItemModel_OnDropMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QStandardItemModel, data: ?*C.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: ?*C.QModelIndex ```
    pub fn QBaseDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i64, row: i32, column: i32, parent: ?*anyopaque) bool {
        return C.QStandardItemModel_QBaseDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemChanged)
    ///
    /// ``` self: ?*C.QStandardItemModel, item: ?*C.QStandardItem ```
    pub fn ItemChanged(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QStandardItemModel_ItemChanged(@ptrCast(self), @ptrCast(item));
    }

    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QStandardItem) callconv(.c) void ```
    pub fn OnItemChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QStandardItemModel_Connect_ItemChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QStandardItemModel_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QStandardItemModel_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#item)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, column: i32 ```
    pub fn Item2(self: ?*anyopaque, row: i32, column: i32) ?*C.QStandardItem {
        return C.QStandardItemModel_Item2(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, parent: ?*C.QModelIndex ```
    pub fn InsertRow22(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return C.QStandardItemModel_InsertRow22(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumn)
    ///
    /// ``` self: ?*C.QStandardItemModel, column: i32, parent: ?*C.QModelIndex ```
    pub fn InsertColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return C.QStandardItemModel_InsertColumn2(@ptrCast(self), @intCast(column), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeItem)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, column: i32 ```
    pub fn TakeItem2(self: ?*anyopaque, row: i32, column: i32) ?*C.QStandardItem {
        return C.QStandardItemModel_TakeItem2(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#findItems)
    ///
    /// ``` self: ?*C.QStandardItemModel, text: []const u8, flags: i32, allocator: std.mem.Allocator ```
    pub fn FindItems2(self: ?*anyopaque, text: []const u8, flags: i64, allocator: std.mem.Allocator) []?*C.QStandardItem {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        const _arr: C.struct_libqt_list = C.QStandardItemModel_FindItems2(@ptrCast(self), text_str, @intCast(flags));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QStandardItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QStandardItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#findItems)
    ///
    /// ``` self: ?*C.QStandardItemModel, text: []const u8, flags: i32, column: i32, allocator: std.mem.Allocator ```
    pub fn FindItems3(self: ?*anyopaque, text: []const u8, flags: i64, column: i32, allocator: std.mem.Allocator) []?*C.QStandardItem {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        const _arr: C.struct_libqt_list = C.QStandardItemModel_FindItems3(@ptrCast(self), text_str, @intCast(flags), @intCast(column));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QStandardItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QStandardItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, column: i32 ```
    pub fn HasIndex(self: ?*anyopaque, row: i32, column: i32) bool {
        return C.QAbstractItemModel_HasIndex(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32 ```
    pub fn RemoveRow(self: ?*anyopaque, row: i32) bool {
        return C.QAbstractItemModel_RemoveRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ``` self: ?*C.QStandardItemModel, column: i32 ```
    pub fn RemoveColumn(self: ?*anyopaque, column: i32) bool {
        return C.QAbstractItemModel_RemoveColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
    ///
    /// ``` self: ?*C.QStandardItemModel, sourceParent: ?*C.QModelIndex, sourceRow: i32, destinationParent: ?*C.QModelIndex, destinationChild: i32 ```
    pub fn MoveRow(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return C.QAbstractItemModel_MoveRow(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceRow), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
    ///
    /// ``` self: ?*C.QStandardItemModel, sourceParent: ?*C.QModelIndex, sourceColumn: i32, destinationParent: ?*C.QModelIndex, destinationChild: i32 ```
    pub fn MoveColumn(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return C.QAbstractItemModel_MoveColumn(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceColumn), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex ```
    pub fn CheckIndex(self: ?*anyopaque, index: ?*anyopaque) bool {
        return C.QAbstractItemModel_CheckIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ``` self: ?*C.QStandardItemModel, topLeft: ?*C.QModelIndex, bottomRight: ?*C.QModelIndex ```
    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque) void {
        C.QAbstractItemModel_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ``` self: ?*C.QAbstractItemModel, slot: fn (?*C.QAbstractItemModel, ?*C.QModelIndex, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnDataChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractItemModel_Connect_DataChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ``` self: ?*C.QStandardItemModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32 ```
    pub fn HeaderDataChanged(self: ?*anyopaque, orientation: i64, first: i32, last: i32) void {
        C.QAbstractItemModel_HeaderDataChanged(@ptrCast(self), @intCast(orientation), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ``` self: ?*C.QAbstractItemModel, slot: fn (?*C.QAbstractItemModel, qnamespace_enums.Orientation, i32, i32) callconv(.c) void ```
    pub fn OnHeaderDataChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, i32) callconv(.c) void) void {
        C.QAbstractItemModel_Connect_HeaderDataChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn LayoutChanged(self: ?*anyopaque) void {
        C.QAbstractItemModel_LayoutChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ``` self: ?*C.QAbstractItemModel, slot: fn (?*C.QAbstractItemModel) callconv(.c) void ```
    pub fn OnLayoutChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractItemModel_Connect_LayoutChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn LayoutAboutToBeChanged(self: ?*anyopaque) void {
        C.QAbstractItemModel_LayoutAboutToBeChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ``` self: ?*C.QAbstractItemModel, slot: fn (?*C.QAbstractItemModel) callconv(.c) void ```
    pub fn OnLayoutAboutToBeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractItemModel_Connect_LayoutAboutToBeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, column: i32, parent: ?*C.QModelIndex ```
    pub fn HasIndex3(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) bool {
        return C.QAbstractItemModel_HasIndex3(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, parent: ?*C.QModelIndex ```
    pub fn RemoveRow2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return C.QAbstractItemModel_RemoveRow2(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ``` self: ?*C.QStandardItemModel, column: i32, parent: ?*C.QModelIndex ```
    pub fn RemoveColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return C.QAbstractItemModel_RemoveColumn2(@ptrCast(self), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex, options: i32 ```
    pub fn CheckIndex2(self: ?*anyopaque, index: ?*anyopaque, options: i64) bool {
        return C.QAbstractItemModel_CheckIndex2(@ptrCast(self), @ptrCast(index), @intCast(options));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ``` self: ?*C.QStandardItemModel, topLeft: ?*C.QModelIndex, bottomRight: ?*C.QModelIndex, roles: []i32 ```
    pub fn DataChanged3(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = C.struct_libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        C.QAbstractItemModel_DataChanged3(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ``` self: ?*C.QAbstractItemModel, slot: fn (?*C.QAbstractItemModel, ?*C.QModelIndex, ?*C.QModelIndex, []i32) callconv(.c) void ```
    pub fn OnDataChanged3(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, []i32) callconv(.c) void) void {
        C.QAbstractItemModel_Connect_DataChanged3(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: ?*C.QStandardItemModel, parents: []?*C.QPersistentModelIndex ```
    pub fn LayoutChanged1(self: ?*anyopaque, parents: []?*C.QPersistentModelIndex) void {
        const parents_list = C.struct_libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        C.QAbstractItemModel_LayoutChanged1(@ptrCast(self), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ``` self: ?*C.QAbstractItemModel, slot: fn (?*C.QAbstractItemModel, []?*C.QPersistentModelIndex) callconv(.c) void ```
    pub fn OnLayoutChanged1(self: ?*anyopaque, slot: fn (?*anyopaque, []?*C.QPersistentModelIndex) callconv(.c) void) void {
        C.QAbstractItemModel_Connect_LayoutChanged1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: ?*C.QStandardItemModel, parents: []?*C.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint ```
    pub fn LayoutChanged2(self: ?*anyopaque, parents: []?*C.QPersistentModelIndex, hint: i64) void {
        const parents_list = C.struct_libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        C.QAbstractItemModel_LayoutChanged2(@ptrCast(self), parents_list, @intCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ``` self: ?*C.QAbstractItemModel, slot: fn (?*C.QAbstractItemModel, []?*C.QPersistentModelIndex, qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void ```
    pub fn OnLayoutChanged2(self: ?*anyopaque, slot: fn (?*anyopaque, []?*C.QPersistentModelIndex, i64) callconv(.c) void) void {
        C.QAbstractItemModel_Connect_LayoutChanged2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: ?*C.QStandardItemModel, parents: []?*C.QPersistentModelIndex ```
    pub fn LayoutAboutToBeChanged1(self: ?*anyopaque, parents: []?*C.QPersistentModelIndex) void {
        const parents_list = C.struct_libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        C.QAbstractItemModel_LayoutAboutToBeChanged1(@ptrCast(self), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ``` self: ?*C.QAbstractItemModel, slot: fn (?*C.QAbstractItemModel, []?*C.QPersistentModelIndex) callconv(.c) void ```
    pub fn OnLayoutAboutToBeChanged1(self: ?*anyopaque, slot: fn (?*anyopaque, []?*C.QPersistentModelIndex) callconv(.c) void) void {
        C.QAbstractItemModel_Connect_LayoutAboutToBeChanged1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: ?*C.QStandardItemModel, parents: []?*C.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint ```
    pub fn LayoutAboutToBeChanged2(self: ?*anyopaque, parents: []?*C.QPersistentModelIndex, hint: i64) void {
        const parents_list = C.struct_libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        C.QAbstractItemModel_LayoutAboutToBeChanged2(@ptrCast(self), parents_list, @intCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ``` self: ?*C.QAbstractItemModel, slot: fn (?*C.QAbstractItemModel, []?*C.QPersistentModelIndex, qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void ```
    pub fn OnLayoutAboutToBeChanged2(self: ?*anyopaque, slot: fn (?*anyopaque, []?*C.QPersistentModelIndex, i64) callconv(.c) void) void {
        C.QAbstractItemModel_Connect_LayoutAboutToBeChanged2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QStandardItemModel, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QStandardItemModel, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QStandardItemModel, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QStandardItemModel, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QStandardItemModel, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QStandardItemModel, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QStandardItemModel, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QStandardItemModel, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QStandardItemModel, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QStandardItemModel, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QStandardItemModel, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QStandardItemModel, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QStandardItemModel, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QStandardItemModel ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QStandardItemModel, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QStandardItemModel, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QStandardItemModel, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QStandardItemModel, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, column: i32, idx: ?*C.QModelIndex ```
    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) ?*C.QModelIndex {
        return C.QStandardItemModel_Sibling(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(idx));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, column: i32, idx: ?*C.QModelIndex ```
    pub fn QBaseSibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) ?*C.QModelIndex {
        return C.QStandardItemModel_QBaseSibling(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(idx));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, i32, i32, ?*C.QModelIndex) callconv(.c) ?*C.QModelIndex ```
    pub fn OnSibling(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) ?*C.QModelIndex) void {
        C.QStandardItemModel_OnSibling(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, data: ?*C.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: ?*C.QModelIndex ```
    pub fn CanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i64, row: i32, column: i32, parent: ?*anyopaque) bool {
        return C.QStandardItemModel_CanDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, data: ?*C.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: ?*C.QModelIndex ```
    pub fn QBaseCanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i64, row: i32, column: i32, parent: ?*anyopaque) bool {
        return C.QStandardItemModel_QBaseCanDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QMimeData, qnamespace_enums.DropAction, i32, i32, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnCanDropMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        C.QStandardItemModel_OnCanDropMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn SupportedDragActions(self: ?*anyopaque) i64 {
        return C.QStandardItemModel_SupportedDragActions(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn QBaseSupportedDragActions(self: ?*anyopaque) i64 {
        return C.QStandardItemModel_QBaseSupportedDragActions(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn () callconv(.c) i64 ```
    pub fn OnSupportedDragActions(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QStandardItemModel_OnSupportedDragActions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, sourceParent: ?*C.QModelIndex, sourceRow: i32, count: i32, destinationParent: ?*C.QModelIndex, destinationChild: i32 ```
    pub fn MoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return C.QStandardItemModel_MoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceRow), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, sourceParent: ?*C.QModelIndex, sourceRow: i32, count: i32, destinationParent: ?*C.QModelIndex, destinationChild: i32 ```
    pub fn QBaseMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return C.QStandardItemModel_QBaseMoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceRow), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex, i32, i32, ?*C.QModelIndex, i32) callconv(.c) bool ```
    pub fn OnMoveRows(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        C.QStandardItemModel_OnMoveRows(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, sourceParent: ?*C.QModelIndex, sourceColumn: i32, count: i32, destinationParent: ?*C.QModelIndex, destinationChild: i32 ```
    pub fn MoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return C.QStandardItemModel_MoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceColumn), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, sourceParent: ?*C.QModelIndex, sourceColumn: i32, count: i32, destinationParent: ?*C.QModelIndex, destinationChild: i32 ```
    pub fn QBaseMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return C.QStandardItemModel_QBaseMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceColumn), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex, i32, i32, ?*C.QModelIndex, i32) callconv(.c) bool ```
    pub fn OnMoveColumns(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        C.QStandardItemModel_OnMoveColumns(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QModelIndex ```
    pub fn FetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QStandardItemModel_FetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QModelIndex ```
    pub fn QBaseFetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QStandardItemModel_QBaseFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnFetchMore(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QStandardItemModel_OnFetchMore(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QModelIndex ```
    pub fn CanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return C.QStandardItemModel_CanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QModelIndex ```
    pub fn QBaseCanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return C.QStandardItemModel_QBaseCanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnCanFetchMore(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QStandardItemModel_OnCanFetchMore(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex ```
    pub fn Buddy(self: ?*anyopaque, index: ?*anyopaque) ?*C.QModelIndex {
        return C.QStandardItemModel_Buddy(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex ```
    pub fn QBaseBuddy(self: ?*anyopaque, index: ?*anyopaque) ?*C.QModelIndex {
        return C.QStandardItemModel_QBaseBuddy(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex) callconv(.c) ?*C.QModelIndex ```
    pub fn OnBuddy(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QModelIndex) void {
        C.QStandardItemModel_OnBuddy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, start: ?*C.QModelIndex, role: i32, value: ?*C.QVariant, hits: i32, flags: i32, allocator: std.mem.Allocator ```
    pub fn Match(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i64, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QStandardItemModel_Match(@ptrCast(self), @ptrCast(start), @intCast(role), @ptrCast(value), @intCast(hits), @intCast(flags));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, start: ?*C.QModelIndex, role: i32, value: ?*C.QVariant, hits: i32, flags: i32, allocator: std.mem.Allocator ```
    pub fn QBaseMatch(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i64, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QStandardItemModel_QBaseMatch(@ptrCast(self), @ptrCast(start), @intCast(role), @ptrCast(value), @intCast(hits), @intCast(flags));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex, i32, ?*C.QVariant, i32, i32) callconv(.c) []?*C.QModelIndex ```
    pub fn OnMatch(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, i32, i64) callconv(.c) []?*C.QModelIndex) void {
        C.QStandardItemModel_OnMatch(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex ```
    pub fn Span(self: ?*anyopaque, index: ?*anyopaque) ?*C.QSize {
        return C.QStandardItemModel_Span(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, index: ?*C.QModelIndex ```
    pub fn QBaseSpan(self: ?*anyopaque, index: ?*anyopaque) ?*C.QSize {
        return C.QStandardItemModel_QBaseSpan(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex) callconv(.c) ?*C.QSize ```
    pub fn OnSpan(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QSize) void {
        C.QStandardItemModel_OnSpan(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn Submit(self: ?*anyopaque) bool {
        return C.QStandardItemModel_Submit(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn QBaseSubmit(self: ?*anyopaque) bool {
        return C.QStandardItemModel_QBaseSubmit(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn () callconv(.c) bool ```
    pub fn OnSubmit(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QStandardItemModel_OnSubmit(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn Revert(self: ?*anyopaque) void {
        C.QStandardItemModel_Revert(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn QBaseRevert(self: ?*anyopaque) void {
        C.QStandardItemModel_QBaseRevert(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn () callconv(.c) void ```
    pub fn OnRevert(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QStandardItemModel_OnRevert(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn ResetInternalData(self: ?*anyopaque) void {
        C.QStandardItemModel_ResetInternalData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn QBaseResetInternalData(self: ?*anyopaque) void {
        C.QStandardItemModel_QBaseResetInternalData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn () callconv(.c) void ```
    pub fn OnResetInternalData(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QStandardItemModel_OnResetInternalData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QStandardItemModel_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QStandardItemModel_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QStandardItemModel_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QStandardItemModel_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QStandardItemModel_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QStandardItemModel_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QStandardItemModel_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QStandardItemModel_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QStandardItemModel_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QStandardItemModel_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QStandardItemModel_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QStandardItemModel_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QStandardItemModel_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QStandardItemModel_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QStandardItemModel_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QStandardItemModel_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QStandardItemModel_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QStandardItemModel_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QStandardItemModel_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QStandardItemModel_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QStandardItemModel_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, column: i32 ```
    pub fn CreateIndex(self: ?*anyopaque, row: i32, column: i32) ?*C.QModelIndex {
        return C.QStandardItemModel_CreateIndex(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, column: i32 ```
    pub fn QBaseCreateIndex(self: ?*anyopaque, row: i32, column: i32) ?*C.QModelIndex {
        return C.QStandardItemModel_QBaseCreateIndex(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, i32, i32) callconv(.c) ?*C.QModelIndex ```
    pub fn OnCreateIndex(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) ?*C.QModelIndex) void {
        C.QStandardItemModel_OnCreateIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, indexes: []?*C.QModelIndex, stream: ?*C.QDataStream ```
    pub fn EncodeData(self: ?*anyopaque, indexes: []?*C.QModelIndex, stream: ?*anyopaque) void {
        const indexes_list = C.struct_libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        C.QStandardItemModel_EncodeData(@ptrCast(self), indexes_list, @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, indexes: []?*C.QModelIndex, stream: ?*C.QDataStream ```
    pub fn QBaseEncodeData(self: ?*anyopaque, indexes: []?*C.QModelIndex, stream: ?*anyopaque) void {
        const indexes_list = C.struct_libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        C.QStandardItemModel_QBaseEncodeData(@ptrCast(self), indexes_list, @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, []?*C.QModelIndex, ?*C.QDataStream) callconv(.c) void ```
    pub fn OnEncodeData(self: ?*anyopaque, slot: fn (?*anyopaque, []?*C.QModelIndex, ?*anyopaque) callconv(.c) void) void {
        C.QStandardItemModel_OnEncodeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, column: i32, parent: ?*C.QModelIndex, stream: ?*C.QDataStream ```
    pub fn DecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return C.QStandardItemModel_DecodeData(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent), @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, row: i32, column: i32, parent: ?*C.QModelIndex, stream: ?*C.QDataStream ```
    pub fn QBaseDecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return C.QStandardItemModel_QBaseDecodeData(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent), @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, i32, i32, ?*C.QModelIndex, ?*C.QDataStream) callconv(.c) bool ```
    pub fn OnDecodeData(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QStandardItemModel_OnDecodeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QModelIndex, first: i32, last: i32 ```
    pub fn BeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        C.QStandardItemModel_BeginInsertRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        C.QStandardItemModel_QBaseBeginInsertRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex, i32, i32) callconv(.c) void ```
    pub fn OnBeginInsertRows(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QStandardItemModel_OnBeginInsertRows(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn EndInsertRows(self: ?*anyopaque) void {
        C.QStandardItemModel_EndInsertRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn QBaseEndInsertRows(self: ?*anyopaque) void {
        C.QStandardItemModel_QBaseEndInsertRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn () callconv(.c) void ```
    pub fn OnEndInsertRows(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QStandardItemModel_OnEndInsertRows(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QModelIndex, first: i32, last: i32 ```
    pub fn BeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        C.QStandardItemModel_BeginRemoveRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        C.QStandardItemModel_QBaseBeginRemoveRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex, i32, i32) callconv(.c) void ```
    pub fn OnBeginRemoveRows(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QStandardItemModel_OnBeginRemoveRows(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn EndRemoveRows(self: ?*anyopaque) void {
        C.QStandardItemModel_EndRemoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn QBaseEndRemoveRows(self: ?*anyopaque) void {
        C.QStandardItemModel_QBaseEndRemoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn () callconv(.c) void ```
    pub fn OnEndRemoveRows(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QStandardItemModel_OnEndRemoveRows(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, sourceParent: ?*C.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: ?*C.QModelIndex, destinationRow: i32 ```
    pub fn BeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return C.QStandardItemModel_BeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, sourceParent: ?*C.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: ?*C.QModelIndex, destinationRow: i32 ```
    pub fn QBaseBeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return C.QStandardItemModel_QBaseBeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex, i32, i32, ?*C.QModelIndex, i32) callconv(.c) bool ```
    pub fn OnBeginMoveRows(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        C.QStandardItemModel_OnBeginMoveRows(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn EndMoveRows(self: ?*anyopaque) void {
        C.QStandardItemModel_EndMoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn QBaseEndMoveRows(self: ?*anyopaque) void {
        C.QStandardItemModel_QBaseEndMoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn () callconv(.c) void ```
    pub fn OnEndMoveRows(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QStandardItemModel_OnEndMoveRows(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QModelIndex, first: i32, last: i32 ```
    pub fn BeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        C.QStandardItemModel_BeginInsertColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        C.QStandardItemModel_QBaseBeginInsertColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex, i32, i32) callconv(.c) void ```
    pub fn OnBeginInsertColumns(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QStandardItemModel_OnBeginInsertColumns(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn EndInsertColumns(self: ?*anyopaque) void {
        C.QStandardItemModel_EndInsertColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn QBaseEndInsertColumns(self: ?*anyopaque) void {
        C.QStandardItemModel_QBaseEndInsertColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn () callconv(.c) void ```
    pub fn OnEndInsertColumns(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QStandardItemModel_OnEndInsertColumns(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QModelIndex, first: i32, last: i32 ```
    pub fn BeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        C.QStandardItemModel_BeginRemoveColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, parent: ?*C.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        C.QStandardItemModel_QBaseBeginRemoveColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex, i32, i32) callconv(.c) void ```
    pub fn OnBeginRemoveColumns(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QStandardItemModel_OnBeginRemoveColumns(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn EndRemoveColumns(self: ?*anyopaque) void {
        C.QStandardItemModel_EndRemoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn QBaseEndRemoveColumns(self: ?*anyopaque) void {
        C.QStandardItemModel_QBaseEndRemoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn () callconv(.c) void ```
    pub fn OnEndRemoveColumns(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QStandardItemModel_OnEndRemoveColumns(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, sourceParent: ?*C.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: ?*C.QModelIndex, destinationColumn: i32 ```
    pub fn BeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return C.QStandardItemModel_BeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, sourceParent: ?*C.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: ?*C.QModelIndex, destinationColumn: i32 ```
    pub fn QBaseBeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return C.QStandardItemModel_QBaseBeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex, i32, i32, ?*C.QModelIndex, i32) callconv(.c) bool ```
    pub fn OnBeginMoveColumns(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        C.QStandardItemModel_OnBeginMoveColumns(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn EndMoveColumns(self: ?*anyopaque) void {
        C.QStandardItemModel_EndMoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn QBaseEndMoveColumns(self: ?*anyopaque) void {
        C.QStandardItemModel_QBaseEndMoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn () callconv(.c) void ```
    pub fn OnEndMoveColumns(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QStandardItemModel_OnEndMoveColumns(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn BeginResetModel(self: ?*anyopaque) void {
        C.QStandardItemModel_BeginResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn QBaseBeginResetModel(self: ?*anyopaque) void {
        C.QStandardItemModel_QBaseBeginResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn () callconv(.c) void ```
    pub fn OnBeginResetModel(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QStandardItemModel_OnBeginResetModel(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn EndResetModel(self: ?*anyopaque) void {
        C.QStandardItemModel_EndResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn QBaseEndResetModel(self: ?*anyopaque) void {
        C.QStandardItemModel_QBaseEndResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn () callconv(.c) void ```
    pub fn OnEndResetModel(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QStandardItemModel_OnEndResetModel(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, from: ?*C.QModelIndex, to: ?*C.QModelIndex ```
    pub fn ChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        C.QStandardItemModel_ChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, from: ?*C.QModelIndex, to: ?*C.QModelIndex ```
    pub fn QBaseChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        C.QStandardItemModel_QBaseChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QModelIndex, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnChangePersistentIndex(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QStandardItemModel_OnChangePersistentIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, from: []?*C.QModelIndex, to: []?*C.QModelIndex ```
    pub fn ChangePersistentIndexList(self: ?*anyopaque, from: []?*C.QModelIndex, to: []?*C.QModelIndex) void {
        const from_list = C.struct_libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = C.struct_libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        C.QStandardItemModel_ChangePersistentIndexList(@ptrCast(self), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, from: []?*C.QModelIndex, to: []?*C.QModelIndex ```
    pub fn QBaseChangePersistentIndexList(self: ?*anyopaque, from: []?*C.QModelIndex, to: []?*C.QModelIndex) void {
        const from_list = C.struct_libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = C.struct_libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        C.QStandardItemModel_QBaseChangePersistentIndexList(@ptrCast(self), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, []?*C.QModelIndex, []?*C.QModelIndex) callconv(.c) void ```
    pub fn OnChangePersistentIndexList(self: ?*anyopaque, slot: fn (?*anyopaque, []?*C.QModelIndex, []?*C.QModelIndex) callconv(.c) void) void {
        C.QStandardItemModel_OnChangePersistentIndexList(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, allocator: std.mem.Allocator ```
    pub fn PersistentIndexList(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QStandardItemModel_PersistentIndexList(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, allocator: std.mem.Allocator ```
    pub fn QBasePersistentIndexList(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QStandardItemModel_QBasePersistentIndexList(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn () callconv(.c) []?*C.QModelIndex ```
    pub fn OnPersistentIndexList(self: ?*anyopaque, slot: fn () callconv(.c) []?*C.QModelIndex) void {
        C.QStandardItemModel_OnPersistentIndexList(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QStandardItemModel_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QStandardItemModel_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QStandardItemModel_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QStandardItemModel_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QStandardItemModel_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QStandardItemModel_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QStandardItemModel_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QStandardItemModel_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QStandardItemModel_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QStandardItemModel_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QStandardItemModel_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QStandardItemModel, slot: fn (?*C.QStandardItemModel, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QStandardItemModel_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QStandardItemModel ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QStandardItemModel_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstandarditemmodel.html#types
pub const enums = struct {
    pub const ItemType = enum {
        pub const Type: i32 = 0;
        pub const UserType: i32 = 1000;
    };
};
