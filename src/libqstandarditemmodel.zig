const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractitemmodel_enums = @import("libqabstractitemmodel.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");
const arraymap_i32_qtcqvariant = std.AutoArrayHashMapUnmanaged(i32, QtC.QVariant);
const map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html)
pub const qstandarditem = struct {
    /// New constructs a new QStandardItem object.
    ///
    pub fn New() QtC.QStandardItem {
        return qtc.QStandardItem_new();
    }

    /// New2 constructs a new QStandardItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn New2(text: []const u8) QtC.QStandardItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QStandardItem_new2(text_str);
    }

    /// New3 constructs a new QStandardItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` icon: QtC.QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn New3(icon: ?*anyopaque, text: []const u8) QtC.QStandardItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QStandardItem_new3(@ptrCast(icon), text_str);
    }

    /// New4 constructs a new QStandardItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rows: i32 `
    ///
    pub fn New4(rows: i32) QtC.QStandardItem {
        return qtc.QStandardItem_new4(@bitCast(rows));
    }

    /// New5 constructs a new QStandardItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rows: i32 `
    ///
    /// ` columns: i32 `
    ///
    pub fn New5(rows: i32, columns: i32) QtC.QStandardItem {
        return qtc.QStandardItem_new5(@bitCast(rows), @bitCast(columns));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` role: i32 `
    ///
    pub fn Data(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QStandardItem_Data(@ptrCast(self), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItem, role: i32) callconv(.c) QtC.QVariant `
    ///
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QStandardItem_OnData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperData` instead
    ///
    pub const QBaseData = SuperData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperData(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QStandardItem_SuperData(@ptrCast(self), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#multiData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` roleDataSpan: QtC.QModelRoleDataSpan `
    ///
    pub fn MultiData(self: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.QStandardItem_MultiData(@ptrCast(self), @ptrCast(roleDataSpan));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#multiData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItem, roleDataSpan: QtC.QModelRoleDataSpan) callconv(.c) void `
    ///
    pub fn OnMultiData(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QModelRoleDataSpan) callconv(.c) void) void {
        qtc.QStandardItem_OnMultiData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMultiData` instead
    ///
    pub const QBaseMultiData = SuperMultiData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#multiData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` roleDataSpan: QtC.QModelRoleDataSpan `
    ///
    pub fn SuperMultiData(self: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.QStandardItem_SuperMultiData(@ptrCast(self), @ptrCast(roleDataSpan));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SetData(self: ?*anyopaque, value: ?*anyopaque, role: i32) void {
        qtc.QStandardItem_SetData(@ptrCast(self), @ptrCast(value), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItem, value: QtC.QVariant, role: i32) callconv(.c) void `
    ///
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStandardItem_OnSetData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetData` instead
    ///
    pub const QBaseSetData = SuperSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperSetData(self: ?*anyopaque, value: ?*anyopaque, role: i32) void {
        qtc.QStandardItem_SuperSetData(@ptrCast(self), @ptrCast(value), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#clearData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn ClearData(self: ?*anyopaque) void {
        qtc.QStandardItem_ClearData(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStandardItem_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditem.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStandardItem_SetText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QStandardItem_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QStandardItem_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStandardItem_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditem.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QStandardItem_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#statusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStandardItem_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditem.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QStandardItem_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStandardItem_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditem.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QStandardItem_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QStandardItem_SizeHint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` sizeHint: QtC.QSize `
    ///
    pub fn SetSizeHint(self: ?*anyopaque, sizeHint: ?*anyopaque) void {
        qtc.QStandardItem_SetSizeHint(@ptrCast(self), @ptrCast(sizeHint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QStandardItem_Font(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QStandardItem_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#textAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn TextAlignment(self: ?*anyopaque) i32 {
        return qtc.QStandardItem_TextAlignment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setTextAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` textAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetTextAlignment(self: ?*anyopaque, textAlignment: i32) void {
        qtc.QStandardItem_SetTextAlignment(@ptrCast(self), @bitCast(textAlignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn Background(self: ?*anyopaque) QtC.QBrush {
        return qtc.QStandardItem_Background(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QStandardItem_SetBackground(@ptrCast(self), @ptrCast(brush));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn Foreground(self: ?*anyopaque) QtC.QBrush {
        return qtc.QStandardItem_Foreground(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetForeground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QStandardItem_SetForeground(@ptrCast(self), @ptrCast(brush));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#checkState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CheckState `
    ///
    pub fn CheckState(self: ?*anyopaque) i32 {
        return qtc.QStandardItem_CheckState(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setCheckState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` checkState: qnamespace_enums.CheckState `
    ///
    pub fn SetCheckState(self: ?*anyopaque, checkState: i32) void {
        qtc.QStandardItem_SetCheckState(@ptrCast(self), @bitCast(checkState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#accessibleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStandardItem_AccessibleText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditem.AccessibleText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setAccessibleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` accessibleText: []const u8 `
    ///
    pub fn SetAccessibleText(self: ?*anyopaque, accessibleText: []const u8) void {
        const accessibleText_str = qtc.libqt_string{
            .len = accessibleText.len,
            .data = accessibleText.ptr,
        };
        qtc.QStandardItem_SetAccessibleText(@ptrCast(self), accessibleText_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#accessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStandardItem_AccessibleDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditem.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` accessibleDescription: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: ?*anyopaque, accessibleDescription: []const u8) void {
        const accessibleDescription_str = qtc.libqt_string{
            .len = accessibleDescription.len,
            .data = accessibleDescription.ptr,
        };
        qtc.QStandardItem_SetAccessibleDescription(@ptrCast(self), accessibleDescription_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.QStandardItem_Flags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` flags: flag of qnamespace_enums.ItemFlag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QStandardItem_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QStandardItem_IsEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QStandardItem_SetEnabled(@ptrCast(self), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#isEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn IsEditable(self: ?*anyopaque) bool {
        return qtc.QStandardItem_IsEditable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` editable: bool `
    ///
    pub fn SetEditable(self: ?*anyopaque, editable: bool) void {
        qtc.QStandardItem_SetEditable(@ptrCast(self), editable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#isSelectable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn IsSelectable(self: ?*anyopaque) bool {
        return qtc.QStandardItem_IsSelectable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setSelectable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` selectable: bool `
    ///
    pub fn SetSelectable(self: ?*anyopaque, selectable: bool) void {
        qtc.QStandardItem_SetSelectable(@ptrCast(self), selectable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#isCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn IsCheckable(self: ?*anyopaque) bool {
        return qtc.QStandardItem_IsCheckable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` checkable: bool `
    ///
    pub fn SetCheckable(self: ?*anyopaque, checkable: bool) void {
        qtc.QStandardItem_SetCheckable(@ptrCast(self), checkable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#isAutoTristate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn IsAutoTristate(self: ?*anyopaque) bool {
        return qtc.QStandardItem_IsAutoTristate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setAutoTristate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` tristate: bool `
    ///
    pub fn SetAutoTristate(self: ?*anyopaque, tristate: bool) void {
        qtc.QStandardItem_SetAutoTristate(@ptrCast(self), tristate);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#isUserTristate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn IsUserTristate(self: ?*anyopaque) bool {
        return qtc.QStandardItem_IsUserTristate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setUserTristate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` tristate: bool `
    ///
    pub fn SetUserTristate(self: ?*anyopaque, tristate: bool) void {
        qtc.QStandardItem_SetUserTristate(@ptrCast(self), tristate);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#isDragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn IsDragEnabled(self: ?*anyopaque) bool {
        return qtc.QStandardItem_IsDragEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setDragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` dragEnabled: bool `
    ///
    pub fn SetDragEnabled(self: ?*anyopaque, dragEnabled: bool) void {
        qtc.QStandardItem_SetDragEnabled(@ptrCast(self), dragEnabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#isDropEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn IsDropEnabled(self: ?*anyopaque) bool {
        return qtc.QStandardItem_IsDropEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setDropEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` dropEnabled: bool `
    ///
    pub fn SetDropEnabled(self: ?*anyopaque, dropEnabled: bool) void {
        qtc.QStandardItem_SetDropEnabled(@ptrCast(self), dropEnabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QStandardItem {
        return qtc.QStandardItem_Parent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#row)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn Row(self: ?*anyopaque) i32 {
        return qtc.QStandardItem_Row(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn Column(self: ?*anyopaque) i32 {
        return qtc.QStandardItem_Column(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn Index(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStandardItem_Index(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn Model(self: ?*anyopaque) QtC.QStandardItemModel {
        return qtc.QStandardItem_Model(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn RowCount(self: ?*anyopaque) i32 {
        return qtc.QStandardItem_RowCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` rows: i32 `
    ///
    pub fn SetRowCount(self: ?*anyopaque, rows: i32) void {
        qtc.QStandardItem_SetRowCount(@ptrCast(self), @bitCast(rows));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn ColumnCount(self: ?*anyopaque) i32 {
        return qtc.QStandardItem_ColumnCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setColumnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` columns: i32 `
    ///
    pub fn SetColumnCount(self: ?*anyopaque, columns: i32) void {
        qtc.QStandardItem_SetColumnCount(@ptrCast(self), @bitCast(columns));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#hasChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn HasChildren(self: ?*anyopaque) bool {
        return qtc.QStandardItem_HasChildren(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` row: i32 `
    ///
    pub fn Child(self: ?*anyopaque, row: i32) QtC.QStandardItem {
        return qtc.QStandardItem_Child(@ptrCast(self), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` item: QtC.QStandardItem `
    ///
    pub fn SetChild(self: ?*anyopaque, row: i32, column: i32, item: ?*anyopaque) void {
        qtc.QStandardItem_SetChild(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` row: i32 `
    ///
    /// ` item: QtC.QStandardItem `
    ///
    pub fn SetChild2(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        qtc.QStandardItem_SetChild2(@ptrCast(self), @bitCast(row), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` row: i32 `
    ///
    /// ` items: []QtC.QStandardItem `
    ///
    pub fn InsertRow(self: ?*anyopaque, row: i32, items: []?*anyopaque) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItem_InsertRow(@ptrCast(self), @bitCast(row), items_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` column: i32 `
    ///
    /// ` items: []QtC.QStandardItem `
    ///
    pub fn InsertColumn(self: ?*anyopaque, column: i32, items: []?*anyopaque) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItem_InsertColumn(@ptrCast(self), @bitCast(column), items_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#insertRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` row: i32 `
    ///
    /// ` items: []QtC.QStandardItem `
    ///
    pub fn InsertRows(self: ?*anyopaque, row: i32, items: []?*anyopaque) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItem_InsertRows(@ptrCast(self), @bitCast(row), items_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#insertRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn InsertRows2(self: ?*anyopaque, row: i32, count: i32) void {
        qtc.QStandardItem_InsertRows2(@ptrCast(self), @bitCast(row), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#insertColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn InsertColumns(self: ?*anyopaque, column: i32, count: i32) void {
        qtc.QStandardItem_InsertColumns(@ptrCast(self), @bitCast(column), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` row: i32 `
    ///
    pub fn RemoveRow(self: ?*anyopaque, row: i32) void {
        qtc.QStandardItem_RemoveRow(@ptrCast(self), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` column: i32 `
    ///
    pub fn RemoveColumn(self: ?*anyopaque, column: i32) void {
        qtc.QStandardItem_RemoveColumn(@ptrCast(self), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#removeRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32) void {
        qtc.QStandardItem_RemoveRows(@ptrCast(self), @bitCast(row), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#removeColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32) void {
        qtc.QStandardItem_RemoveColumns(@ptrCast(self), @bitCast(column), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#appendRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` items: []QtC.QStandardItem `
    ///
    pub fn AppendRow(self: ?*anyopaque, items: []?*anyopaque) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItem_AppendRow(@ptrCast(self), items_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#appendRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` items: []QtC.QStandardItem `
    ///
    pub fn AppendRows(self: ?*anyopaque, items: []?*anyopaque) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItem_AppendRows(@ptrCast(self), items_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#appendColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` items: []QtC.QStandardItem `
    ///
    pub fn AppendColumn(self: ?*anyopaque, items: []?*anyopaque) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItem_AppendColumn(@ptrCast(self), items_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` row: i32 `
    ///
    /// ` item: QtC.QStandardItem `
    ///
    pub fn InsertRow2(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        qtc.QStandardItem_InsertRow2(@ptrCast(self), @bitCast(row), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#appendRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` item: QtC.QStandardItem `
    ///
    pub fn AppendRow2(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QStandardItem_AppendRow2(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#takeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` row: i32 `
    ///
    pub fn TakeChild(self: ?*anyopaque, row: i32) QtC.QStandardItem {
        return qtc.QStandardItem_TakeChild(@ptrCast(self), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#takeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` row: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TakeRow(self: ?*anyopaque, row: i32, allocator: std.mem.Allocator) []QtC.QStandardItem {
        const _arr: qtc.libqt_list = qtc.QStandardItem_TakeRow(@ptrCast(self), @bitCast(row));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QStandardItem, _arr.len) catch @panic("qstandarditem.TakeRow: Memory allocation failed");
        const _data: [*]QtC.QStandardItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#takeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` column: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TakeColumn(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []QtC.QStandardItem {
        const _arr: qtc.libqt_list = qtc.QStandardItem_TakeColumn(@ptrCast(self), @bitCast(column));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QStandardItem, _arr.len) catch @panic("qstandarditem.TakeColumn: Memory allocation failed");
        const _data: [*]QtC.QStandardItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#sortChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` column: i32 `
    ///
    pub fn SortChildren(self: ?*anyopaque, column: i32) void {
        qtc.QStandardItem_SortChildren(@ptrCast(self), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QStandardItem {
        return qtc.QStandardItem_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QStandardItem `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QStandardItem) void {
        qtc.QStandardItem_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn SuperClone(self: ?*anyopaque) QtC.QStandardItem {
        return qtc.QStandardItem_SuperClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStandardItem_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QStandardItem_OnType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperType` instead
    ///
    pub const QBaseType = SuperType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn SuperType(self: ?*anyopaque) i32 {
        return qtc.QStandardItem_SuperType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` in: QtC.QDataStream `
    ///
    pub fn Read(self: ?*anyopaque, in: ?*anyopaque) void {
        qtc.QStandardItem_Read(@ptrCast(self), @ptrCast(in));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#read)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItem, in: QtC.QDataStream) callconv(.c) void `
    ///
    pub fn OnRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStandardItem_OnRead(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRead` instead
    ///
    pub const QBaseRead = SuperRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#read)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` in: QtC.QDataStream `
    ///
    pub fn SuperRead(self: ?*anyopaque, in: ?*anyopaque) void {
        qtc.QStandardItem_SuperRead(@ptrCast(self), @ptrCast(in));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` out: QtC.QDataStream `
    ///
    pub fn Write(self: ?*anyopaque, out: ?*anyopaque) void {
        qtc.QStandardItem_Write(@ptrCast(self), @ptrCast(out));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#write)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItem, out: QtC.QDataStream) callconv(.c) void `
    ///
    pub fn OnWrite(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStandardItem_OnWrite(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWrite` instead
    ///
    pub const QBaseWrite = SuperWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#write)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` out: QtC.QDataStream `
    ///
    pub fn SuperWrite(self: ?*anyopaque, out: ?*anyopaque) void {
        qtc.QStandardItem_SuperWrite(@ptrCast(self), @ptrCast(out));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` other: QtC.QStandardItem `
    ///
    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QStandardItem_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#operator-lt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItem, other: QtC.QStandardItem) callconv(.c) bool `
    ///
    pub fn OnOperatorLesser(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItem_OnOperatorLesser(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOperatorLesser` instead
    ///
    pub const QBaseOperatorLesser = SuperOperatorLesser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#operator-lt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` other: QtC.QStandardItem `
    ///
    pub fn SuperOperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QStandardItem_SuperOperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` other: QtC.QStandardItem `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStandardItem_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#operator-eq)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItem, other: QtC.QStandardItem) callconv(.c) void `
    ///
    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStandardItem_OnOperatorAssign(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOperatorAssign` instead
    ///
    pub const QBaseOperatorAssign = SuperOperatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#operator-eq)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` other: QtC.QStandardItem `
    ///
    pub fn SuperOperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStandardItem_SuperOperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#emitDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn EmitDataChanged(self: ?*anyopaque) void {
        qtc.QStandardItem_EmitDataChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#emitDataChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEmitDataChanged(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItem_OnEmitDataChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEmitDataChanged` instead
    ///
    pub const QBaseEmitDataChanged = SuperEmitDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#emitDataChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn SuperEmitDataChanged(self: ?*anyopaque) void {
        qtc.QStandardItem_SuperEmitDataChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn Child2(self: ?*anyopaque, row: i32, column: i32) QtC.QStandardItem {
        return qtc.QStandardItem_Child2(@ptrCast(self), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#takeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn TakeChild2(self: ?*anyopaque, row: i32, column: i32) QtC.QStandardItem {
        return qtc.QStandardItem_TakeChild2(@ptrCast(self), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#sortChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItem `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn SortChildren2(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QStandardItem_SortChildren2(@ptrCast(self), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#dtor.QStandardItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStandardItem `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QStandardItem_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html)
pub const qstandarditemmodel = struct {
    /// New constructs a new QStandardItemModel object.
    ///
    pub fn New() QtC.QStandardItemModel {
        return qtc.QStandardItemModel_new();
    }

    /// New2 constructs a new QStandardItemModel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rows: i32 `
    ///
    /// ` columns: i32 `
    ///
    pub fn New2(rows: i32, columns: i32) QtC.QStandardItemModel {
        return qtc.QStandardItemModel_new2(@bitCast(rows), @bitCast(columns));
    }

    /// New3 constructs a new QStandardItemModel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New3(parent: ?*anyopaque) QtC.QStandardItemModel {
        return qtc.QStandardItemModel_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QStandardItemModel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rows: i32 `
    ///
    /// ` columns: i32 `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New4(rows: i32, columns: i32, parent: ?*anyopaque) QtC.QStandardItemModel {
        return qtc.QStandardItemModel_new4(@bitCast(rows), @bitCast(columns), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QStandardItemModel_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QStandardItemModel_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QStandardItemModel_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStandardItemModel_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QStandardItemModel_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStandardItemModel_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QStandardItemModel_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QStandardItemModel_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QStandardItemModel_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditemmodel.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemRoleNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` roleNames: map_i32_u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetItemRoleNames(self: ?*anyopaque, roleNames: map_i32_u8, allocator: std.mem.Allocator) void {
        const roleNames_count = roleNames.count();
        const roleNames_keys = allocator.alloc(i32, roleNames_count) catch @panic("qstandarditemmodel.SetItemRoleNames: Memory allocation failed");
        defer allocator.free(roleNames_keys);
        const roleNames_values = allocator.alloc(qtc.libqt_string, roleNames_count) catch @panic("qstandarditemmodel.SetItemRoleNames: Memory allocation failed");
        defer allocator.free(roleNames_values);
        var i: usize = 0;
        var roleNames_it = roleNames.iterator();
        while (roleNames_it.next()) |it_entry| : (i += 1) {
            const roleNames_key = it_entry.key_ptr.*;
            roleNames_keys[i] = @bitCast(roleNames_key);
            const value = it_entry.value_ptr.*;
            roleNames_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const roleNames_map = qtc.libqt_map{
            .len = roleNames_count,
            .keys = @ptrCast(roleNames_keys.ptr),
            .values = @ptrCast(roleNames_values.ptr),
        };
        qtc.QStandardItemModel_SetItemRoleNames(@ptrCast(self), roleNames_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#roleNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RoleNames(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: qtc.libqt_map = qtc.QStandardItemModel_RoleNames(@ptrCast(self));
        var _ret: map_i32_u8 = .empty;
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("qstandarditemmodel.RoleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _key, _value_slice) catch @panic("qstandarditemmodel.RoleNames: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#roleNames)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of map_i32_u8 `
    ///
    pub fn OnRoleNames(self: ?*anyopaque, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.QStandardItemModel_OnRoleNames(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRoleNames` instead
    ///
    pub const QBaseRoleNames = SuperRoleNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#roleNames)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperRoleNames(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: qtc.libqt_map = qtc.QStandardItemModel_SuperRoleNames(@ptrCast(self));
        var _ret: map_i32_u8 = .empty;
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("qstandarditemmodel.RoleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _key, _value_slice) catch @panic("qstandarditemmodel.RoleNames: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn Index(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStandardItemModel_Index(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#index)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) QtC.QModelIndex `
    ///
    pub fn OnIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QStandardItemModel_OnIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndex` instead
    ///
    pub const QBaseIndex = SuperIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#index)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperIndex(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStandardItemModel_SuperIndex(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` child: QtC.QModelIndex `
    ///
    pub fn Parent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStandardItemModel_Parent(@ptrCast(self), @ptrCast(child));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#parent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, child: QtC.QModelIndex) callconv(.c) QtC.QModelIndex `
    ///
    pub fn OnParent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QStandardItemModel_OnParent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParent` instead
    ///
    pub const QBaseParent = SuperParent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#parent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` child: QtC.QModelIndex `
    ///
    pub fn SuperParent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStandardItemModel_SuperParent(@ptrCast(self), @ptrCast(child));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#rowCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parent: QtC.QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QStandardItemModel_OnRowCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRowCount` instead
    ///
    pub const QBaseRowCount = SuperRowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#rowCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_SuperRowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn ColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_ColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#columnCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parent: QtC.QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnColumnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QStandardItemModel_OnColumnCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperColumnCount` instead
    ///
    pub const QBaseColumnCount = SuperColumnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#columnCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_SuperColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#hasChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn HasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_HasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#hasChildren)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnHasChildren(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnHasChildren(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasChildren` instead
    ///
    pub const QBaseHasChildren = SuperHasChildren;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#hasChildren)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperHasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_SuperHasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn Data(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QStandardItemModel_Data(@ptrCast(self), @ptrCast(index), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, index: QtC.QModelIndex, role: i32) callconv(.c) QtC.QVariant `
    ///
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QStandardItemModel_OnData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperData` instead
    ///
    pub const QBaseData = SuperData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperData(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QStandardItemModel_SuperData(@ptrCast(self), @ptrCast(index), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#multiData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` roleDataSpan: QtC.QModelRoleDataSpan `
    ///
    pub fn MultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.QStandardItemModel_MultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#multiData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, index: QtC.QModelIndex, roleDataSpan: QtC.QModelRoleDataSpan) callconv(.c) void `
    ///
    pub fn OnMultiData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, QtC.QModelRoleDataSpan) callconv(.c) void) void {
        qtc.QStandardItemModel_OnMultiData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMultiData` instead
    ///
    pub const QBaseMultiData = SuperMultiData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#multiData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` roleDataSpan: QtC.QModelRoleDataSpan `
    ///
    pub fn SuperMultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.QStandardItemModel_SuperMultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QStandardItemModel_SetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, index: QtC.QModelIndex, value: QtC.QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnSetData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetData` instead
    ///
    pub const QBaseSetData = SuperSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperSetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QStandardItemModel_SuperSetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#clearItemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn ClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QStandardItemModel_ClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#clearItemData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, index: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnClearItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnClearItemData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClearItemData` instead
    ///
    pub const QBaseClearItemData = SuperClearItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#clearItemData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QStandardItemModel_SuperClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#headerData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QStandardItemModel_HeaderData(@ptrCast(self), @bitCast(section), @bitCast(orientation), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#headerData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32) callconv(.c) QtC.QVariant `
    ///
    pub fn OnHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) QtC.QVariant) void {
        qtc.QStandardItemModel_OnHeaderData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHeaderData` instead
    ///
    pub const QBaseHeaderData = SuperHeaderData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#headerData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperHeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QStandardItemModel_SuperHeaderData(@ptrCast(self), @bitCast(section), @bitCast(orientation), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHeaderData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QStandardItemModel_SetHeaderData(@ptrCast(self), @bitCast(section), @bitCast(orientation), @ptrCast(value), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHeaderData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, section: i32, orientation: qnamespace_enums.Orientation, value: QtC.QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn OnSetHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnSetHeaderData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetHeaderData` instead
    ///
    pub const QBaseSetHeaderData = SuperSetHeaderData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHeaderData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperSetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QStandardItemModel_SuperSetHeaderData(@ptrCast(self), @bitCast(section), @bitCast(orientation), @ptrCast(value), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn InsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_InsertRows(@ptrCast(self), @bitCast(row), @bitCast(count), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRows)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, row: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnInsertRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInsertRows` instead
    ///
    pub const QBaseInsertRows = SuperInsertRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRows)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperInsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_SuperInsertRows(@ptrCast(self), @bitCast(row), @bitCast(count), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn InsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_InsertColumns(@ptrCast(self), @bitCast(column), @bitCast(count), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumns)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, column: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnInsertColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInsertColumns` instead
    ///
    pub const QBaseInsertColumns = SuperInsertColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumns)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperInsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_SuperInsertColumns(@ptrCast(self), @bitCast(column), @bitCast(count), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_RemoveRows(@ptrCast(self), @bitCast(row), @bitCast(count), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeRows)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, row: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnRemoveRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemoveRows` instead
    ///
    pub const QBaseRemoveRows = SuperRemoveRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeRows)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperRemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_SuperRemoveRows(@ptrCast(self), @bitCast(row), @bitCast(count), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_RemoveColumns(@ptrCast(self), @bitCast(column), @bitCast(count), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeColumns)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, column: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnRemoveColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemoveColumns` instead
    ///
    pub const QBaseRemoveColumns = SuperRemoveColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeColumns)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperRemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_SuperRemoveColumns(@ptrCast(self), @bitCast(column), @bitCast(count), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#flags)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, index: QtC.QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnFlags(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QStandardItemModel_OnFlags(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFlags` instead
    ///
    pub const QBaseFlags = SuperFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#flags)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn SuperFlags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_SuperFlags(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#supportedDropActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SupportedDropActions(self: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_SupportedDropActions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#supportedDropActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSupportedDropActions(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QStandardItemModel_OnSupportedDropActions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSupportedDropActions` instead
    ///
    pub const QBaseSupportedDropActions = SuperSupportedDropActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#supportedDropActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperSupportedDropActions(self: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_SuperSupportedDropActions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ItemData(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) arraymap_i32_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QStandardItemModel_ItemData(@ptrCast(self), @ptrCast(index));
        var _ret: arraymap_i32_qtcqvariant = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, @ptrCast(_value)) catch @panic("qstandarditemmodel.ItemData: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, index: QtC.QModelIndex) callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of arraymap_i32_qtcqvariant `
    ///
    pub fn OnItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) qtc.libqt_map) void {
        qtc.QStandardItemModel_OnItemData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperItemData` instead
    ///
    pub const QBaseItemData = SuperItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperItemData(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) arraymap_i32_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QStandardItemModel_SuperItemData(@ptrCast(self), @ptrCast(index));
        var _ret: arraymap_i32_qtcqvariant = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, @ptrCast(_value)) catch @panic("qstandarditemmodel.ItemData: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` roles: arraymap_i32_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: arraymap_i32_qtcqvariant, allocator: std.mem.Allocator) bool {
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("qstandarditemmodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("qstandarditemmodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_values);
        var i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |it_entry| : (i += 1) {
            const roles_key = it_entry.key_ptr.*;
            roles_keys[i] = @bitCast(roles_key);
            roles_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const roles_map = qtc.libqt_map{
            .len = roles_count,
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return qtc.QStandardItemModel_SetItemData(@ptrCast(self), @ptrCast(index), roles_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, index: QtC.QModelIndex, roles: qtc.libqt_map (arraymap_i32_qtcqvariant)) callconv(.c) bool `
    ///
    pub fn OnSetItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, qtc.libqt_map) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnSetItemData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetItemData` instead
    ///
    pub const QBaseSetItemData = SuperSetItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` roles: arraymap_i32_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperSetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: arraymap_i32_qtcqvariant, allocator: std.mem.Allocator) bool {
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("qstandarditemmodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("qstandarditemmodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_values);
        var i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |it_entry| : (i += 1) {
            const roles_key = it_entry.key_ptr.*;
            roles_keys[i] = @bitCast(roles_key);
            roles_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const roles_map = qtc.libqt_map{
            .len = roles_count,
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return qtc.QStandardItemModel_SuperSetItemData(@ptrCast(self), @ptrCast(index), roles_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QStandardItemModel_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#sort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn Sort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QStandardItemModel_Sort(@ptrCast(self), @bitCast(column), @bitCast(order));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#sort)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void `
    ///
    pub fn OnSort(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QStandardItemModel_OnSort(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSort` instead
    ///
    pub const QBaseSort = SuperSort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#sort)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn SuperSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QStandardItemModel_SuperSort(@ptrCast(self), @bitCast(column), @bitCast(order));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemFromIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn ItemFromIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QStandardItem {
        return qtc.QStandardItemModel_ItemFromIndex(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#indexFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` item: QtC.QStandardItem `
    ///
    pub fn IndexFromItem(self: ?*anyopaque, item: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStandardItemModel_IndexFromItem(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#item)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    pub fn Item(self: ?*anyopaque, row: i32) QtC.QStandardItem {
        return qtc.QStandardItemModel_Item(@ptrCast(self), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` item: QtC.QStandardItem `
    ///
    pub fn SetItem(self: ?*anyopaque, row: i32, column: i32, item: ?*anyopaque) void {
        qtc.QStandardItemModel_SetItem(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` item: QtC.QStandardItem `
    ///
    pub fn SetItem2(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        qtc.QStandardItemModel_SetItem2(@ptrCast(self), @bitCast(row), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#invisibleRootItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn InvisibleRootItem(self: ?*anyopaque) QtC.QStandardItem {
        return qtc.QStandardItemModel_InvisibleRootItem(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#horizontalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` column: i32 `
    ///
    pub fn HorizontalHeaderItem(self: ?*anyopaque, column: i32) QtC.QStandardItem {
        return qtc.QStandardItemModel_HorizontalHeaderItem(@ptrCast(self), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHorizontalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` column: i32 `
    ///
    /// ` item: QtC.QStandardItem `
    ///
    pub fn SetHorizontalHeaderItem(self: ?*anyopaque, column: i32, item: ?*anyopaque) void {
        qtc.QStandardItemModel_SetHorizontalHeaderItem(@ptrCast(self), @bitCast(column), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#verticalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    pub fn VerticalHeaderItem(self: ?*anyopaque, row: i32) QtC.QStandardItem {
        return qtc.QStandardItemModel_VerticalHeaderItem(@ptrCast(self), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setVerticalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` item: QtC.QStandardItem `
    ///
    pub fn SetVerticalHeaderItem(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        qtc.QStandardItemModel_SetVerticalHeaderItem(@ptrCast(self), @bitCast(row), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHorizontalHeaderLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` labels: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetHorizontalHeaderLabels(self: ?*anyopaque, labels: []const []const u8, allocator: std.mem.Allocator) void {
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("qstandarditemmodel.SetHorizontalHeaderLabels: Memory allocation failed");
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
        qtc.QStandardItemModel_SetHorizontalHeaderLabels(@ptrCast(self), labels_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setVerticalHeaderLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` labels: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetVerticalHeaderLabels(self: ?*anyopaque, labels: []const []const u8, allocator: std.mem.Allocator) void {
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("qstandarditemmodel.SetVerticalHeaderLabels: Memory allocation failed");
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
        qtc.QStandardItemModel_SetVerticalHeaderLabels(@ptrCast(self), labels_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` rows: i32 `
    ///
    pub fn SetRowCount(self: ?*anyopaque, rows: i32) void {
        qtc.QStandardItemModel_SetRowCount(@ptrCast(self), @bitCast(rows));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setColumnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` columns: i32 `
    ///
    pub fn SetColumnCount(self: ?*anyopaque, columns: i32) void {
        qtc.QStandardItemModel_SetColumnCount(@ptrCast(self), @bitCast(columns));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#appendRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` items: []QtC.QStandardItem `
    ///
    pub fn AppendRow(self: ?*anyopaque, items: []?*anyopaque) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItemModel_AppendRow(@ptrCast(self), items_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#appendColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` items: []QtC.QStandardItem `
    ///
    pub fn AppendColumn(self: ?*anyopaque, items: []?*anyopaque) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItemModel_AppendColumn(@ptrCast(self), items_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#appendRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` item: QtC.QStandardItem `
    ///
    pub fn AppendRow2(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QStandardItemModel_AppendRow2(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` items: []QtC.QStandardItem `
    ///
    pub fn InsertRow(self: ?*anyopaque, row: i32, items: []?*anyopaque) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItemModel_InsertRow(@ptrCast(self), @bitCast(row), items_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` column: i32 `
    ///
    /// ` items: []QtC.QStandardItem `
    ///
    pub fn InsertColumn(self: ?*anyopaque, column: i32, items: []?*anyopaque) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItemModel_InsertColumn(@ptrCast(self), @bitCast(column), items_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` item: QtC.QStandardItem `
    ///
    pub fn InsertRow2(self: ?*anyopaque, row: i32, item: ?*anyopaque) void {
        qtc.QStandardItemModel_InsertRow2(@ptrCast(self), @bitCast(row), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    pub fn InsertRow3(self: ?*anyopaque, row: i32) bool {
        return qtc.QStandardItemModel_InsertRow3(@ptrCast(self), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` column: i32 `
    ///
    pub fn InsertColumn2(self: ?*anyopaque, column: i32) bool {
        return qtc.QStandardItemModel_InsertColumn2(@ptrCast(self), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    pub fn TakeItem(self: ?*anyopaque, row: i32) QtC.QStandardItem {
        return qtc.QStandardItemModel_TakeItem(@ptrCast(self), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TakeRow(self: ?*anyopaque, row: i32, allocator: std.mem.Allocator) []QtC.QStandardItem {
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_TakeRow(@ptrCast(self), @bitCast(row));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QStandardItem, _arr.len) catch @panic("qstandarditemmodel.TakeRow: Memory allocation failed");
        const _data: [*]QtC.QStandardItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` column: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TakeColumn(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []QtC.QStandardItem {
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_TakeColumn(@ptrCast(self), @bitCast(column));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QStandardItem, _arr.len) catch @panic("qstandarditemmodel.TakeColumn: Memory allocation failed");
        const _data: [*]QtC.QStandardItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeHorizontalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` column: i32 `
    ///
    pub fn TakeHorizontalHeaderItem(self: ?*anyopaque, column: i32) QtC.QStandardItem {
        return qtc.QStandardItemModel_TakeHorizontalHeaderItem(@ptrCast(self), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeVerticalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    pub fn TakeVerticalHeaderItem(self: ?*anyopaque, row: i32) QtC.QStandardItem {
        return qtc.QStandardItemModel_TakeVerticalHeaderItem(@ptrCast(self), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemPrototype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn ItemPrototype(self: ?*anyopaque) QtC.QStandardItem {
        return qtc.QStandardItemModel_ItemPrototype(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemPrototype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` item: QtC.QStandardItem `
    ///
    pub fn SetItemPrototype(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QStandardItemModel_SetItemPrototype(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#findItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` text: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FindItems(self: ?*anyopaque, text: []const u8, allocator: std.mem.Allocator) []QtC.QStandardItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_FindItems(@ptrCast(self), text_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QStandardItem, _arr.len) catch @panic("qstandarditemmodel.FindItems: Memory allocation failed");
        const _data: [*]QtC.QStandardItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#sortRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn SortRole(self: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_SortRole(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setSortRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` role: i32 `
    ///
    pub fn SetSortRole(self: ?*anyopaque, role: i32) void {
        qtc.QStandardItemModel_SetSortRole(@ptrCast(self), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_MimeTypes(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qstandarditemmodel.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qstandarditemmodel.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnMimeTypes(self: ?*anyopaque, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QStandardItemModel_OnMimeTypes(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMimeTypes` instead
    ///
    pub const QBaseMimeTypes = SuperMimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeTypes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_SuperMimeTypes(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qstandarditemmodel.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qstandarditemmodel.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` indexes: []QtC.QModelIndex `
    ///
    pub fn MimeData(self: ?*anyopaque, indexes: []QtC.QModelIndex) QtC.QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return qtc.QStandardItemModel_MimeData(@ptrCast(self), indexes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, indexes: qtc.libqt_list ([]QtC.QModelIndex)) callconv(.c) QtC.QMimeData `
    ///
    pub fn OnMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) QtC.QMimeData) void {
        qtc.QStandardItemModel_OnMimeData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMimeData` instead
    ///
    pub const QBaseMimeData = SuperMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` indexes: []QtC.QModelIndex `
    ///
    pub fn SuperMimeData(self: ?*anyopaque, indexes: []QtC.QModelIndex) QtC.QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return qtc.QStandardItemModel_SuperMimeData(@ptrCast(self), indexes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#dropMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` data: QtC.QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn DropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_DropMimeData(@ptrCast(self), @ptrCast(data), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#dropMimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnDropMimeData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDropMimeData` instead
    ///
    pub const QBaseDropMimeData = SuperDropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#dropMimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` data: QtC.QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_SuperDropMimeData(@ptrCast(self), @ptrCast(data), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` item: QtC.QStandardItem `
    ///
    pub fn ItemChanged(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QStandardItemModel_ItemChanged(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, item: QtC.QStandardItem) callconv(.c) void `
    ///
    pub fn OnItemChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStandardItemModel_Connect_ItemChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditemmodel.Tr2: Memory allocation failed");
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
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditemmodel.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#item)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn Item2(self: ?*anyopaque, row: i32, column: i32) QtC.QStandardItem {
        return qtc.QStandardItemModel_Item2(@ptrCast(self), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn InsertRow22(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_InsertRow22(@ptrCast(self), @bitCast(row), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn InsertColumn22(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_InsertColumn22(@ptrCast(self), @bitCast(column), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn TakeItem2(self: ?*anyopaque, row: i32, column: i32) QtC.QStandardItem {
        return qtc.QStandardItemModel_TakeItem2(@ptrCast(self), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#findItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` text: []const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FindItems2(self: ?*anyopaque, text: []const u8, flags: i32, allocator: std.mem.Allocator) []QtC.QStandardItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_FindItems2(@ptrCast(self), text_str, @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QStandardItem, _arr.len) catch @panic("qstandarditemmodel.FindItems2: Memory allocation failed");
        const _data: [*]QtC.QStandardItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#findItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` text: []const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    /// ` column: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FindItems3(self: ?*anyopaque, text: []const u8, flags: i32, column: i32, allocator: std.mem.Allocator) []QtC.QStandardItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_FindItems3(@ptrCast(self), text_str, @bitCast(flags), @bitCast(column));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QStandardItem, _arr.len) catch @panic("qstandarditemmodel.FindItems3: Memory allocation failed");
        const _data: [*]QtC.QStandardItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn HasIndex(self: ?*anyopaque, row: i32, column: i32) bool {
        return qtc.QAbstractItemModel_HasIndex(@ptrCast(self), @bitCast(row), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    pub fn RemoveRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAbstractItemModel_RemoveRow(@ptrCast(self), @bitCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` column: i32 `
    ///
    pub fn RemoveColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAbstractItemModel_RemoveColumn(@ptrCast(self), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveRow(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_MoveRow(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceRow), @ptrCast(destinationParent), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveColumn(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_MoveColumn(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceColumn), @ptrCast(destinationParent), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn CheckIndex(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_CheckIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` topLeft: QtC.QModelIndex `
    ///
    /// ` bottomRight: QtC.QModelIndex `
    ///
    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque) void {
        qtc.QAbstractItemModel_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn HeaderDataChanged(self: ?*anyopaque, orientation: i32, first: i32, last: i32) void {
        qtc.QAbstractItemModel_HeaderDataChanged(@ptrCast(self), @bitCast(orientation), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnHeaderDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_HeaderDataChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn LayoutChanged(self: ?*anyopaque) void {
        qtc.QAbstractItemModel_LayoutChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel) callconv(.c) void `
    ///
    pub fn OnLayoutChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn LayoutAboutToBeChanged(self: ?*anyopaque) void {
        qtc.QAbstractItemModel_LayoutAboutToBeChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn HasIndex3(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_HasIndex3(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn RemoveRow2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_RemoveRow2(@ptrCast(self), @bitCast(row), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn RemoveColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_RemoveColumn2(@ptrCast(self), @bitCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` options: flag of qabstractitemmodel_enums.CheckIndexOption `
    ///
    pub fn CheckIndex2(self: ?*anyopaque, index: ?*anyopaque, options: i32) bool {
        return qtc.QAbstractItemModel_CheckIndex2(@ptrCast(self), @ptrCast(index), @bitCast(options));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` topLeft: QtC.QModelIndex `
    ///
    /// ` bottomRight: QtC.QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn DataChanged3(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QAbstractItemModel_DataChanged3(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn OnDataChanged3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged3(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parents: []QtC.QPersistentModelIndex `
    ///
    pub fn LayoutChanged1(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged1(@ptrCast(self), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parents: qtc.libqt_list ([]QtC.QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn OnLayoutChanged1(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parents: []QtC.QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn LayoutChanged2(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged2(@ptrCast(self), parents_list, @bitCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parents: qtc.libqt_list ([]QtC.QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn OnLayoutChanged2(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parents: []QtC.QPersistentModelIndex `
    ///
    pub fn LayoutAboutToBeChanged1(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged1(@ptrCast(self), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parents: qtc.libqt_list ([]QtC.QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged1(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parents: []QtC.QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn LayoutAboutToBeChanged2(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged2(@ptrCast(self), parents_list, @bitCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parents: qtc.libqt_list ([]QtC.QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged2(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandarditemmodel.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qstandarditemmodel.Children: Memory allocation failed");
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
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
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
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
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
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
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
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qstandarditemmodel.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qstandarditemmodel.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
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
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
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
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
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
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QtC.QModelIndex `
    ///
    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStandardItemModel_Sibling(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(idx));
    }

    /// ### DEPRECATED: Use `SuperSibling` instead
    ///
    pub const QBaseSibling = SuperSibling;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QtC.QModelIndex `
    ///
    pub fn SuperSibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStandardItemModel_SuperSibling(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(idx));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, row: i32, column: i32, idx: QtC.QModelIndex) callconv(.c) QtC.QModelIndex `
    ///
    pub fn OnSibling(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QStandardItemModel_OnSibling(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` data: QtC.QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn CanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_CanDropMimeData(@ptrCast(self), @ptrCast(data), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// ### DEPRECATED: Use `SuperCanDropMimeData` instead
    ///
    pub const QBaseCanDropMimeData = SuperCanDropMimeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` data: QtC.QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperCanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_SuperCanDropMimeData(@ptrCast(self), @ptrCast(data), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnCanDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnCanDropMimeData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SupportedDragActions(self: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_SupportedDragActions(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSupportedDragActions` instead
    ///
    pub const QBaseSupportedDragActions = SuperSupportedDragActions;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperSupportedDragActions(self: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_SuperSupportedDragActions(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSupportedDragActions(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QStandardItemModel_OnSupportedDragActions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QStandardItemModel_MoveRows(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `SuperMoveRows` instead
    ///
    pub const QBaseMoveRows = SuperMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn SuperMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QStandardItemModel_SuperMoveRows(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, sourceParent: QtC.QModelIndex, sourceRow: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn OnMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnMoveRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QStandardItemModel_MoveColumns(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `SuperMoveColumns` instead
    ///
    pub const QBaseMoveColumns = SuperMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn SuperMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QStandardItemModel_SuperMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn OnMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnMoveColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn FetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QStandardItemModel_FetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// ### DEPRECATED: Use `SuperFetchMore` instead
    ///
    pub const QBaseFetchMore = SuperFetchMore;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperFetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QStandardItemModel_SuperFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parent: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStandardItemModel_OnFetchMore(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn CanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_CanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// ### DEPRECATED: Use `SuperCanFetchMore` instead
    ///
    pub const QBaseCanFetchMore = SuperCanFetchMore;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperCanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QStandardItemModel_SuperCanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnCanFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnCanFetchMore(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Buddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStandardItemModel_Buddy(@ptrCast(self), @ptrCast(index));
    }

    /// ### DEPRECATED: Use `SuperBuddy` instead
    ///
    pub const QBaseBuddy = SuperBuddy;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperBuddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QStandardItemModel_SuperBuddy(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, index: QtC.QModelIndex) callconv(.c) QtC.QModelIndex `
    ///
    pub fn OnBuddy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QStandardItemModel_OnBuddy(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` start: QtC.QModelIndex `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` hits: i32 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Match(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_Match(@ptrCast(self), @ptrCast(start), @bitCast(role), @ptrCast(value), @bitCast(hits), @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qstandarditemmodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperMatch` instead
    ///
    pub const QBaseMatch = SuperMatch;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` start: QtC.QModelIndex `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` hits: i32 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperMatch(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_SuperMatch(@ptrCast(self), @ptrCast(start), @bitCast(role), @ptrCast(value), @bitCast(hits), @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qstandarditemmodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, start: QtC.QModelIndex, role: i32, value: QtC.QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QtC.QModelIndex `
    ///
    pub fn OnMatch(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.QStandardItemModel_OnMatch(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Span(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QStandardItemModel_Span(@ptrCast(self), @ptrCast(index));
    }

    /// ### DEPRECATED: Use `SuperSpan` instead
    ///
    pub const QBaseSpan = SuperSpan;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperSpan(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QStandardItemModel_SuperSpan(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, index: QtC.QModelIndex) callconv(.c) QtC.QSize `
    ///
    pub fn OnSpan(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QStandardItemModel_OnSpan(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn Submit(self: ?*anyopaque) bool {
        return qtc.QStandardItemModel_Submit(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSubmit` instead
    ///
    pub const QBaseSubmit = SuperSubmit;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn SuperSubmit(self: ?*anyopaque) bool {
        return qtc.QStandardItemModel_SuperSubmit(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnSubmit(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QStandardItemModel_OnSubmit(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn Revert(self: ?*anyopaque) void {
        qtc.QStandardItemModel_Revert(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperRevert` instead
    ///
    pub const QBaseRevert = SuperRevert;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn SuperRevert(self: ?*anyopaque) void {
        qtc.QStandardItemModel_SuperRevert(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRevert(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnRevert(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn ResetInternalData(self: ?*anyopaque) void {
        qtc.QStandardItemModel_ResetInternalData(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperResetInternalData` instead
    ///
    pub const QBaseResetInternalData = SuperResetInternalData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn SuperResetInternalData(self: ?*anyopaque) void {
        qtc.QStandardItemModel_SuperResetInternalData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResetInternalData(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnResetInternalData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QStandardItemModel_Event(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QStandardItemModel_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QStandardItemModel_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QStandardItemModel_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStandardItemModel_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStandardItemModel_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStandardItemModel_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStandardItemModel_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStandardItemModel_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStandardItemModel_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStandardItemModel_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStandardItemModel_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStandardItemModel_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QStandardItemModel_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QStandardItemModel_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStandardItemModel_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QStandardItemModel_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QStandardItemModel_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStandardItemModel_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn CreateIndex(self: ?*anyopaque, row: i32, column: i32) QtC.QModelIndex {
        return qtc.QStandardItemModel_CreateIndex(@ptrCast(self), @bitCast(row), @bitCast(column));
    }

    /// ### DEPRECATED: Use `SuperCreateIndex` instead
    ///
    pub const QBaseCreateIndex = SuperCreateIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn SuperCreateIndex(self: ?*anyopaque, row: i32, column: i32) QtC.QModelIndex {
        return qtc.QStandardItemModel_SuperCreateIndex(@ptrCast(self), @bitCast(row), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, row: i32, column: i32) callconv(.c) QtC.QModelIndex `
    ///
    pub fn OnCreateIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) QtC.QModelIndex) void {
        qtc.QStandardItemModel_OnCreateIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` indexes: []QtC.QModelIndex `
    ///
    /// ` stream: QtC.QDataStream `
    ///
    pub fn EncodeData(self: ?*anyopaque, indexes: []QtC.QModelIndex, stream: ?*anyopaque) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        qtc.QStandardItemModel_EncodeData(@ptrCast(self), indexes_list, @ptrCast(stream));
    }

    /// ### DEPRECATED: Use `SuperEncodeData` instead
    ///
    pub const QBaseEncodeData = SuperEncodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` indexes: []QtC.QModelIndex `
    ///
    /// ` stream: QtC.QDataStream `
    ///
    pub fn SuperEncodeData(self: ?*anyopaque, indexes: []QtC.QModelIndex, stream: ?*anyopaque) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        qtc.QStandardItemModel_SuperEncodeData(@ptrCast(self), indexes_list, @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, indexes: qtc.libqt_list ([]QtC.QModelIndex), stream: QtC.QDataStream) callconv(.c) void `
    ///
    pub fn OnEncodeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list, ?*anyopaque) callconv(.c) void) void {
        qtc.QStandardItemModel_OnEncodeData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` stream: QtC.QDataStream `
    ///
    pub fn DecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return qtc.QStandardItemModel_DecodeData(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(parent), @ptrCast(stream));
    }

    /// ### DEPRECATED: Use `SuperDecodeData` instead
    ///
    pub const QBaseDecodeData = SuperDecodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` stream: QtC.QDataStream `
    ///
    pub fn SuperDecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return qtc.QStandardItemModel_SuperDecodeData(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(parent), @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, row: i32, column: i32, parent: QtC.QModelIndex, stream: QtC.QDataStream) callconv(.c) bool `
    ///
    pub fn OnDecodeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnDecodeData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QStandardItemModel_BeginInsertRows(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginInsertRows` instead
    ///
    pub const QBaseBeginInsertRows = SuperBeginInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QStandardItemModel_SuperBeginInsertRows(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QStandardItemModel_OnBeginInsertRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn EndInsertRows(self: ?*anyopaque) void {
        qtc.QStandardItemModel_EndInsertRows(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperEndInsertRows` instead
    ///
    pub const QBaseEndInsertRows = SuperEndInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn SuperEndInsertRows(self: ?*anyopaque) void {
        qtc.QStandardItemModel_SuperEndInsertRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndInsertRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnEndInsertRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QStandardItemModel_BeginRemoveRows(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginRemoveRows` instead
    ///
    pub const QBaseBeginRemoveRows = SuperBeginRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QStandardItemModel_SuperBeginRemoveRows(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QStandardItemModel_OnBeginRemoveRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn EndRemoveRows(self: ?*anyopaque) void {
        qtc.QStandardItemModel_EndRemoveRows(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperEndRemoveRows` instead
    ///
    pub const QBaseEndRemoveRows = SuperEndRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn SuperEndRemoveRows(self: ?*anyopaque) void {
        qtc.QStandardItemModel_SuperEndRemoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndRemoveRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnEndRemoveRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationRow: i32 `
    ///
    pub fn BeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return qtc.QStandardItemModel_BeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent), @bitCast(destinationRow));
    }

    /// ### DEPRECATED: Use `SuperBeginMoveRows` instead
    ///
    pub const QBaseBeginMoveRows = SuperBeginMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationRow: i32 `
    ///
    pub fn SuperBeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return qtc.QStandardItemModel_SuperBeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent), @bitCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) bool `
    ///
    pub fn OnBeginMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnBeginMoveRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn EndMoveRows(self: ?*anyopaque) void {
        qtc.QStandardItemModel_EndMoveRows(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperEndMoveRows` instead
    ///
    pub const QBaseEndMoveRows = SuperEndMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn SuperEndMoveRows(self: ?*anyopaque) void {
        qtc.QStandardItemModel_SuperEndMoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndMoveRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnEndMoveRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QStandardItemModel_BeginInsertColumns(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginInsertColumns` instead
    ///
    pub const QBaseBeginInsertColumns = SuperBeginInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QStandardItemModel_SuperBeginInsertColumns(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QStandardItemModel_OnBeginInsertColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn EndInsertColumns(self: ?*anyopaque) void {
        qtc.QStandardItemModel_EndInsertColumns(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperEndInsertColumns` instead
    ///
    pub const QBaseEndInsertColumns = SuperEndInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn SuperEndInsertColumns(self: ?*anyopaque) void {
        qtc.QStandardItemModel_SuperEndInsertColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndInsertColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnEndInsertColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QStandardItemModel_BeginRemoveColumns(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginRemoveColumns` instead
    ///
    pub const QBaseBeginRemoveColumns = SuperBeginRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QStandardItemModel_SuperBeginRemoveColumns(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QStandardItemModel_OnBeginRemoveColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn EndRemoveColumns(self: ?*anyopaque) void {
        qtc.QStandardItemModel_EndRemoveColumns(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperEndRemoveColumns` instead
    ///
    pub const QBaseEndRemoveColumns = SuperEndRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn SuperEndRemoveColumns(self: ?*anyopaque) void {
        qtc.QStandardItemModel_SuperEndRemoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndRemoveColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnEndRemoveColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationColumn: i32 `
    ///
    pub fn BeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return qtc.QStandardItemModel_BeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent), @bitCast(destinationColumn));
    }

    /// ### DEPRECATED: Use `SuperBeginMoveColumns` instead
    ///
    pub const QBaseBeginMoveColumns = SuperBeginMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationColumn: i32 `
    ///
    pub fn SuperBeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return qtc.QStandardItemModel_SuperBeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent), @bitCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) bool `
    ///
    pub fn OnBeginMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnBeginMoveColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn EndMoveColumns(self: ?*anyopaque) void {
        qtc.QStandardItemModel_EndMoveColumns(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperEndMoveColumns` instead
    ///
    pub const QBaseEndMoveColumns = SuperEndMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn SuperEndMoveColumns(self: ?*anyopaque) void {
        qtc.QStandardItemModel_SuperEndMoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndMoveColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnEndMoveColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn BeginResetModel(self: ?*anyopaque) void {
        qtc.QStandardItemModel_BeginResetModel(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperBeginResetModel` instead
    ///
    pub const QBaseBeginResetModel = SuperBeginResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn SuperBeginResetModel(self: ?*anyopaque) void {
        qtc.QStandardItemModel_SuperBeginResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnBeginResetModel(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnBeginResetModel(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn EndResetModel(self: ?*anyopaque) void {
        qtc.QStandardItemModel_EndResetModel(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperEndResetModel` instead
    ///
    pub const QBaseEndResetModel = SuperEndResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn SuperEndResetModel(self: ?*anyopaque) void {
        qtc.QStandardItemModel_SuperEndResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndResetModel(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnEndResetModel(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` from: QtC.QModelIndex `
    ///
    /// ` to: QtC.QModelIndex `
    ///
    pub fn ChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        qtc.QStandardItemModel_ChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// ### DEPRECATED: Use `SuperChangePersistentIndex` instead
    ///
    pub const QBaseChangePersistentIndex = SuperChangePersistentIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` from: QtC.QModelIndex `
    ///
    /// ` to: QtC.QModelIndex `
    ///
    pub fn SuperChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        qtc.QStandardItemModel_SuperChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, from: QtC.QModelIndex, to: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnChangePersistentIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStandardItemModel_OnChangePersistentIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` from: []QtC.QModelIndex `
    ///
    /// ` to: []QtC.QModelIndex `
    ///
    pub fn ChangePersistentIndexList(self: ?*anyopaque, from: []QtC.QModelIndex, to: []QtC.QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.QStandardItemModel_ChangePersistentIndexList(@ptrCast(self), from_list, to_list);
    }

    /// ### DEPRECATED: Use `SuperChangePersistentIndexList` instead
    ///
    pub const QBaseChangePersistentIndexList = SuperChangePersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` from: []QtC.QModelIndex `
    ///
    /// ` to: []QtC.QModelIndex `
    ///
    pub fn SuperChangePersistentIndexList(self: ?*anyopaque, from: []QtC.QModelIndex, to: []QtC.QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.QStandardItemModel_SuperChangePersistentIndexList(@ptrCast(self), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, from: qtc.libqt_list ([]QtC.QModelIndex), to: qtc.libqt_list ([]QtC.QModelIndex)) callconv(.c) void `
    ///
    pub fn OnChangePersistentIndexList(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list, qtc.libqt_list) callconv(.c) void) void {
        qtc.QStandardItemModel_OnChangePersistentIndexList(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PersistentIndexList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_PersistentIndexList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qstandarditemmodel.PersistentIndexList: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperPersistentIndexList` instead
    ///
    pub const QBasePersistentIndexList = SuperPersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperPersistentIndexList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_SuperPersistentIndexList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qstandarditemmodel.PersistentIndexList: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QtC.QModelIndex `
    ///
    pub fn OnPersistentIndexList(self: ?*anyopaque, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QStandardItemModel_OnPersistentIndexList(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QStandardItemModel_Sender(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QStandardItemModel_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QStandardItemModel_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_SenderSignalIndex(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QStandardItemModel_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QStandardItemModel_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QStandardItemModel_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QStandardItemModel_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QStandardItemModel_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QStandardItemModel_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QStandardItemModel_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeInserted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsInserted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeInserted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsInserted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel) callconv(.c) void `
    ///
    pub fn OnModelAboutToBeReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelAboutToBeReset(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel) callconv(.c) void `
    ///
    pub fn OnModelReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelReset(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeMoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn OnRowsMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsMoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeMoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn OnColumnsMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsMoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QtC.QStandardItemModel, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#dtor.QStandardItemModel)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStandardItemModel `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QStandardItemModel_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#public-types)
pub const enums = struct {
    pub const ItemType = enum(i32) {
        pub const Type: i32 = 0;
        pub const UserType: i32 = 1000;
    };
};
