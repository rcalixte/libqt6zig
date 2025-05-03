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
const qtreewidget_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qtreewidgetitem.html
pub const qtreewidgetitem = struct {
    /// New constructs a new QTreeWidgetItem object.
    ///
    ///
    pub fn New() ?*C.QTreeWidgetItem {
        return C.QTreeWidgetItem_new();
    }

    /// New2 constructs a new QTreeWidgetItem object.
    ///
    /// ``` strings: [][]const u8, allocator: std.mem.Allocator ```
    pub fn New2(strings: [][]const u8, allocator: std.mem.Allocator) ?*C.QTreeWidgetItem {
        var strings_arr = allocator.alloc(C.struct_libqt_string, strings.len) catch @panic("Memory allocation failed");
        defer allocator.free(strings_arr);
        for (strings, 0..strings.len) |item, _i| {
            strings_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const strings_list = C.struct_libqt_list{
            .len = strings.len,
            .data = strings_arr.ptr,
        };

        return C.QTreeWidgetItem_new2(strings_list);
    }

    /// New3 constructs a new QTreeWidgetItem object.
    ///
    /// ``` treeview: ?*C.QTreeWidget ```
    pub fn New3(treeview: ?*anyopaque) ?*C.QTreeWidgetItem {
        return C.QTreeWidgetItem_new3(@ptrCast(treeview));
    }

    /// New4 constructs a new QTreeWidgetItem object.
    ///
    /// ``` treeview: ?*C.QTreeWidget, strings: [][]const u8, allocator: std.mem.Allocator ```
    pub fn New4(treeview: ?*anyopaque, strings: [][]const u8, allocator: std.mem.Allocator) ?*C.QTreeWidgetItem {
        var strings_arr = allocator.alloc(C.struct_libqt_string, strings.len) catch @panic("Memory allocation failed");
        defer allocator.free(strings_arr);
        for (strings, 0..strings.len) |item, _i| {
            strings_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const strings_list = C.struct_libqt_list{
            .len = strings.len,
            .data = strings_arr.ptr,
        };

        return C.QTreeWidgetItem_new4(@ptrCast(treeview), strings_list);
    }

    /// New5 constructs a new QTreeWidgetItem object.
    ///
    /// ``` treeview: ?*C.QTreeWidget, after: ?*C.QTreeWidgetItem ```
    pub fn New5(treeview: ?*anyopaque, after: ?*anyopaque) ?*C.QTreeWidgetItem {
        return C.QTreeWidgetItem_new5(@ptrCast(treeview), @ptrCast(after));
    }

    /// New6 constructs a new QTreeWidgetItem object.
    ///
    /// ``` parent: ?*C.QTreeWidgetItem ```
    pub fn New6(parent: ?*anyopaque) ?*C.QTreeWidgetItem {
        return C.QTreeWidgetItem_new6(@ptrCast(parent));
    }

    /// New7 constructs a new QTreeWidgetItem object.
    ///
    /// ``` parent: ?*C.QTreeWidgetItem, strings: [][]const u8, allocator: std.mem.Allocator ```
    pub fn New7(parent: ?*anyopaque, strings: [][]const u8, allocator: std.mem.Allocator) ?*C.QTreeWidgetItem {
        var strings_arr = allocator.alloc(C.struct_libqt_string, strings.len) catch @panic("Memory allocation failed");
        defer allocator.free(strings_arr);
        for (strings, 0..strings.len) |item, _i| {
            strings_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const strings_list = C.struct_libqt_list{
            .len = strings.len,
            .data = strings_arr.ptr,
        };

        return C.QTreeWidgetItem_new7(@ptrCast(parent), strings_list);
    }

    /// New8 constructs a new QTreeWidgetItem object.
    ///
    /// ``` parent: ?*C.QTreeWidgetItem, after: ?*C.QTreeWidgetItem ```
    pub fn New8(parent: ?*anyopaque, after: ?*anyopaque) ?*C.QTreeWidgetItem {
        return C.QTreeWidgetItem_new8(@ptrCast(parent), @ptrCast(after));
    }

    /// New9 constructs a new QTreeWidgetItem object.
    ///
    /// ``` other: ?*C.QTreeWidgetItem ```
    pub fn New9(other: ?*anyopaque) ?*C.QTreeWidgetItem {
        return C.QTreeWidgetItem_new9(@ptrCast(other));
    }

    /// New10 constructs a new QTreeWidgetItem object.
    ///
    /// ``` typeVal: i32 ```
    pub fn New10(typeVal: i32) ?*C.QTreeWidgetItem {
        return C.QTreeWidgetItem_new10(@intCast(typeVal));
    }

    /// New11 constructs a new QTreeWidgetItem object.
    ///
    /// ``` strings: [][]const u8, typeVal: i32, allocator: std.mem.Allocator ```
    pub fn New11(strings: [][]const u8, typeVal: i32, allocator: std.mem.Allocator) ?*C.QTreeWidgetItem {
        var strings_arr = allocator.alloc(C.struct_libqt_string, strings.len) catch @panic("Memory allocation failed");
        defer allocator.free(strings_arr);
        for (strings, 0..strings.len) |item, _i| {
            strings_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const strings_list = C.struct_libqt_list{
            .len = strings.len,
            .data = strings_arr.ptr,
        };

        return C.QTreeWidgetItem_new11(strings_list, @intCast(typeVal));
    }

    /// New12 constructs a new QTreeWidgetItem object.
    ///
    /// ``` treeview: ?*C.QTreeWidget, typeVal: i32 ```
    pub fn New12(treeview: ?*anyopaque, typeVal: i32) ?*C.QTreeWidgetItem {
        return C.QTreeWidgetItem_new12(@ptrCast(treeview), @intCast(typeVal));
    }

    /// New13 constructs a new QTreeWidgetItem object.
    ///
    /// ``` treeview: ?*C.QTreeWidget, strings: [][]const u8, typeVal: i32, allocator: std.mem.Allocator ```
    pub fn New13(treeview: ?*anyopaque, strings: [][]const u8, typeVal: i32, allocator: std.mem.Allocator) ?*C.QTreeWidgetItem {
        var strings_arr = allocator.alloc(C.struct_libqt_string, strings.len) catch @panic("Memory allocation failed");
        defer allocator.free(strings_arr);
        for (strings, 0..strings.len) |item, _i| {
            strings_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const strings_list = C.struct_libqt_list{
            .len = strings.len,
            .data = strings_arr.ptr,
        };

        return C.QTreeWidgetItem_new13(@ptrCast(treeview), strings_list, @intCast(typeVal));
    }

    /// New14 constructs a new QTreeWidgetItem object.
    ///
    /// ``` treeview: ?*C.QTreeWidget, after: ?*C.QTreeWidgetItem, typeVal: i32 ```
    pub fn New14(treeview: ?*anyopaque, after: ?*anyopaque, typeVal: i32) ?*C.QTreeWidgetItem {
        return C.QTreeWidgetItem_new14(@ptrCast(treeview), @ptrCast(after), @intCast(typeVal));
    }

    /// New15 constructs a new QTreeWidgetItem object.
    ///
    /// ``` parent: ?*C.QTreeWidgetItem, typeVal: i32 ```
    pub fn New15(parent: ?*anyopaque, typeVal: i32) ?*C.QTreeWidgetItem {
        return C.QTreeWidgetItem_new15(@ptrCast(parent), @intCast(typeVal));
    }

    /// New16 constructs a new QTreeWidgetItem object.
    ///
    /// ``` parent: ?*C.QTreeWidgetItem, strings: [][]const u8, typeVal: i32, allocator: std.mem.Allocator ```
    pub fn New16(parent: ?*anyopaque, strings: [][]const u8, typeVal: i32, allocator: std.mem.Allocator) ?*C.QTreeWidgetItem {
        var strings_arr = allocator.alloc(C.struct_libqt_string, strings.len) catch @panic("Memory allocation failed");
        defer allocator.free(strings_arr);
        for (strings, 0..strings.len) |item, _i| {
            strings_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const strings_list = C.struct_libqt_list{
            .len = strings.len,
            .data = strings_arr.ptr,
        };

        return C.QTreeWidgetItem_new16(@ptrCast(parent), strings_list, @intCast(typeVal));
    }

    /// New17 constructs a new QTreeWidgetItem object.
    ///
    /// ``` parent: ?*C.QTreeWidgetItem, after: ?*C.QTreeWidgetItem, typeVal: i32 ```
    pub fn New17(parent: ?*anyopaque, after: ?*anyopaque, typeVal: i32) ?*C.QTreeWidgetItem {
        return C.QTreeWidgetItem_new17(@ptrCast(parent), @ptrCast(after), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#clone)
    ///
    /// ``` self: ?*C.QTreeWidgetItem ```
    pub fn Clone(self: ?*anyopaque) ?*C.QTreeWidgetItem {
        return C.QTreeWidgetItem_Clone(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTreeWidgetItem, slot: fn () callconv(.c) ?*C.QTreeWidgetItem ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QTreeWidgetItem) void {
        C.QTreeWidgetItem_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTreeWidgetItem ```
    pub fn QBaseClone(self: ?*anyopaque) ?*C.QTreeWidgetItem {
        return C.QTreeWidgetItem_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#treeWidget)
    ///
    /// ``` self: ?*C.QTreeWidgetItem ```
    pub fn TreeWidget(self: ?*anyopaque) ?*C.QTreeWidget {
        return C.QTreeWidgetItem_TreeWidget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setSelected)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, selectVal: bool ```
    pub fn SetSelected(self: ?*anyopaque, selectVal: bool) void {
        C.QTreeWidgetItem_SetSelected(@ptrCast(self), selectVal);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#isSelected)
    ///
    /// ``` self: ?*C.QTreeWidgetItem ```
    pub fn IsSelected(self: ?*anyopaque) bool {
        return C.QTreeWidgetItem_IsSelected(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setHidden)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, hide: bool ```
    pub fn SetHidden(self: ?*anyopaque, hide: bool) void {
        C.QTreeWidgetItem_SetHidden(@ptrCast(self), hide);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#isHidden)
    ///
    /// ``` self: ?*C.QTreeWidgetItem ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return C.QTreeWidgetItem_IsHidden(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setExpanded)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, expand: bool ```
    pub fn SetExpanded(self: ?*anyopaque, expand: bool) void {
        C.QTreeWidgetItem_SetExpanded(@ptrCast(self), expand);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#isExpanded)
    ///
    /// ``` self: ?*C.QTreeWidgetItem ```
    pub fn IsExpanded(self: ?*anyopaque) bool {
        return C.QTreeWidgetItem_IsExpanded(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setFirstColumnSpanned)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, span: bool ```
    pub fn SetFirstColumnSpanned(self: ?*anyopaque, span: bool) void {
        C.QTreeWidgetItem_SetFirstColumnSpanned(@ptrCast(self), span);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#isFirstColumnSpanned)
    ///
    /// ``` self: ?*C.QTreeWidgetItem ```
    pub fn IsFirstColumnSpanned(self: ?*anyopaque) bool {
        return C.QTreeWidgetItem_IsFirstColumnSpanned(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setDisabled)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, disabled: bool ```
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        C.QTreeWidgetItem_SetDisabled(@ptrCast(self), disabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#isDisabled)
    ///
    /// ``` self: ?*C.QTreeWidgetItem ```
    pub fn IsDisabled(self: ?*anyopaque) bool {
        return C.QTreeWidgetItem_IsDisabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setChildIndicatorPolicy)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, policy: qtreewidget_enums.ChildIndicatorPolicy ```
    pub fn SetChildIndicatorPolicy(self: ?*anyopaque, policy: i64) void {
        C.QTreeWidgetItem_SetChildIndicatorPolicy(@ptrCast(self), @intCast(policy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#childIndicatorPolicy)
    ///
    /// ``` self: ?*C.QTreeWidgetItem ```
    pub fn ChildIndicatorPolicy(self: ?*anyopaque) i64 {
        return C.QTreeWidgetItem_ChildIndicatorPolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#flags)
    ///
    /// ``` self: ?*C.QTreeWidgetItem ```
    pub fn Flags(self: ?*anyopaque) i64 {
        return C.QTreeWidgetItem_Flags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setFlags)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, flags: i32 ```
    pub fn SetFlags(self: ?*anyopaque, flags: i64) void {
        C.QTreeWidgetItem_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#text)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTreeWidgetItem_Text(@ptrCast(self), @intCast(column));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setText)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, column: i32, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QTreeWidgetItem_SetText(@ptrCast(self), @intCast(column), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#icon)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn Icon(self: ?*anyopaque, column: i32) ?*C.QIcon {
        return C.QTreeWidgetItem_Icon(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setIcon)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, icon: ?*C.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, column: i32, icon: ?*anyopaque) void {
        C.QTreeWidgetItem_SetIcon(@ptrCast(self), @intCast(column), @ptrCast(icon));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#statusTip)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTreeWidgetItem_StatusTip(@ptrCast(self), @intCast(column));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setStatusTip)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, column: i32, statusTip: []const u8) void {
        const statusTip_str = C.struct_libqt_string{
            .len = statusTip.len,
            .data = @constCast(statusTip.ptr),
        };
        C.QTreeWidgetItem_SetStatusTip(@ptrCast(self), @intCast(column), statusTip_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#toolTip)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTreeWidgetItem_ToolTip(@ptrCast(self), @intCast(column));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setToolTip)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, column: i32, toolTip: []const u8) void {
        const toolTip_str = C.struct_libqt_string{
            .len = toolTip.len,
            .data = @constCast(toolTip.ptr),
        };
        C.QTreeWidgetItem_SetToolTip(@ptrCast(self), @intCast(column), toolTip_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#whatsThis)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTreeWidgetItem_WhatsThis(@ptrCast(self), @intCast(column));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setWhatsThis)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, whatsThis: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, column: i32, whatsThis: []const u8) void {
        const whatsThis_str = C.struct_libqt_string{
            .len = whatsThis.len,
            .data = @constCast(whatsThis.ptr),
        };
        C.QTreeWidgetItem_SetWhatsThis(@ptrCast(self), @intCast(column), whatsThis_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#font)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn Font(self: ?*anyopaque, column: i32) ?*C.QFont {
        return C.QTreeWidgetItem_Font(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setFont)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, font: ?*C.QFont ```
    pub fn SetFont(self: ?*anyopaque, column: i32, font: ?*anyopaque) void {
        C.QTreeWidgetItem_SetFont(@ptrCast(self), @intCast(column), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#textAlignment)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn TextAlignment(self: ?*anyopaque, column: i32) i32 {
        return C.QTreeWidgetItem_TextAlignment(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setTextAlignment)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, alignment: i32 ```
    pub fn SetTextAlignment(self: ?*anyopaque, column: i32, alignment: i32) void {
        C.QTreeWidgetItem_SetTextAlignment(@ptrCast(self), @intCast(column), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setTextAlignment)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, alignment: qnamespace_enums.AlignmentFlag ```
    pub fn SetTextAlignment2(self: ?*anyopaque, column: i32, alignment: i64) void {
        C.QTreeWidgetItem_SetTextAlignment2(@ptrCast(self), @intCast(column), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setTextAlignment)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, alignment: i32 ```
    pub fn SetTextAlignment3(self: ?*anyopaque, column: i32, alignment: i64) void {
        C.QTreeWidgetItem_SetTextAlignment3(@ptrCast(self), @intCast(column), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#background)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn Background(self: ?*anyopaque, column: i32) ?*C.QBrush {
        return C.QTreeWidgetItem_Background(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setBackground)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, brush: ?*C.QBrush ```
    pub fn SetBackground(self: ?*anyopaque, column: i32, brush: ?*anyopaque) void {
        C.QTreeWidgetItem_SetBackground(@ptrCast(self), @intCast(column), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#foreground)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn Foreground(self: ?*anyopaque, column: i32) ?*C.QBrush {
        return C.QTreeWidgetItem_Foreground(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setForeground)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, brush: ?*C.QBrush ```
    pub fn SetForeground(self: ?*anyopaque, column: i32, brush: ?*anyopaque) void {
        C.QTreeWidgetItem_SetForeground(@ptrCast(self), @intCast(column), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#checkState)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn CheckState(self: ?*anyopaque, column: i32) i64 {
        return C.QTreeWidgetItem_CheckState(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setCheckState)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, state: qnamespace_enums.CheckState ```
    pub fn SetCheckState(self: ?*anyopaque, column: i32, state: i64) void {
        C.QTreeWidgetItem_SetCheckState(@ptrCast(self), @intCast(column), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#sizeHint)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn SizeHint(self: ?*anyopaque, column: i32) ?*C.QSize {
        return C.QTreeWidgetItem_SizeHint(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setSizeHint)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, size: ?*C.QSize ```
    pub fn SetSizeHint(self: ?*anyopaque, column: i32, size: ?*anyopaque) void {
        C.QTreeWidgetItem_SetSizeHint(@ptrCast(self), @intCast(column), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#data)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, role: i32 ```
    pub fn Data(self: ?*anyopaque, column: i32, role: i32) ?*C.QVariant {
        return C.QTreeWidgetItem_Data(@ptrCast(self), @intCast(column), @intCast(role));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTreeWidgetItem, slot: fn (?*C.QTreeWidgetItem, i32, i32) callconv(.c) ?*C.QVariant ```
    pub fn OnData(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) ?*C.QVariant) void {
        C.QTreeWidgetItem_OnData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, role: i32 ```
    pub fn QBaseData(self: ?*anyopaque, column: i32, role: i32) ?*C.QVariant {
        return C.QTreeWidgetItem_QBaseData(@ptrCast(self), @intCast(column), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setData)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, role: i32, value: ?*C.QVariant ```
    pub fn SetData(self: ?*anyopaque, column: i32, role: i32, value: ?*anyopaque) void {
        C.QTreeWidgetItem_SetData(@ptrCast(self), @intCast(column), @intCast(role), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTreeWidgetItem, slot: fn (?*C.QTreeWidgetItem, i32, i32, ?*C.QVariant) callconv(.c) void ```
    pub fn OnSetData(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidgetItem_OnSetData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, role: i32, value: ?*C.QVariant ```
    pub fn QBaseSetData(self: ?*anyopaque, column: i32, role: i32, value: ?*anyopaque) void {
        C.QTreeWidgetItem_QBaseSetData(@ptrCast(self), @intCast(column), @intCast(role), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#operator<)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, other: ?*C.QTreeWidgetItem ```
    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QTreeWidgetItem_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTreeWidgetItem, slot: fn (?*C.QTreeWidgetItem, ?*C.QTreeWidgetItem) callconv(.c) bool ```
    pub fn OnOperatorLesser(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTreeWidgetItem_OnOperatorLesser(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTreeWidgetItem, other: ?*C.QTreeWidgetItem ```
    pub fn QBaseOperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QTreeWidgetItem_QBaseOperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#read)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, in: ?*C.QDataStream ```
    pub fn Read(self: ?*anyopaque, in: ?*anyopaque) void {
        C.QTreeWidgetItem_Read(@ptrCast(self), @ptrCast(in));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTreeWidgetItem, slot: fn (?*C.QTreeWidgetItem, ?*C.QDataStream) callconv(.c) void ```
    pub fn OnRead(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidgetItem_OnRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTreeWidgetItem, in: ?*C.QDataStream ```
    pub fn QBaseRead(self: ?*anyopaque, in: ?*anyopaque) void {
        C.QTreeWidgetItem_QBaseRead(@ptrCast(self), @ptrCast(in));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#write)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, out: ?*C.QDataStream ```
    pub fn Write(self: ?*anyopaque, out: ?*anyopaque) void {
        C.QTreeWidgetItem_Write(@ptrCast(self), @ptrCast(out));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTreeWidgetItem, slot: fn (?*C.QTreeWidgetItem, ?*C.QDataStream) callconv(.c) void ```
    pub fn OnWrite(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidgetItem_OnWrite(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTreeWidgetItem, out: ?*C.QDataStream ```
    pub fn QBaseWrite(self: ?*anyopaque, out: ?*anyopaque) void {
        C.QTreeWidgetItem_QBaseWrite(@ptrCast(self), @ptrCast(out));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#operator=)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, other: ?*C.QTreeWidgetItem ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QTreeWidgetItem_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#parent)
    ///
    /// ``` self: ?*C.QTreeWidgetItem ```
    pub fn Parent(self: ?*anyopaque) ?*C.QTreeWidgetItem {
        return C.QTreeWidgetItem_Parent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#child)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, index: i32 ```
    pub fn Child(self: ?*anyopaque, index: i32) ?*C.QTreeWidgetItem {
        return C.QTreeWidgetItem_Child(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#childCount)
    ///
    /// ``` self: ?*C.QTreeWidgetItem ```
    pub fn ChildCount(self: ?*anyopaque) i32 {
        return C.QTreeWidgetItem_ChildCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#columnCount)
    ///
    /// ``` self: ?*C.QTreeWidgetItem ```
    pub fn ColumnCount(self: ?*anyopaque) i32 {
        return C.QTreeWidgetItem_ColumnCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#indexOfChild)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, child: ?*C.QTreeWidgetItem ```
    pub fn IndexOfChild(self: ?*anyopaque, child: ?*anyopaque) i32 {
        return C.QTreeWidgetItem_IndexOfChild(@ptrCast(self), @ptrCast(child));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#addChild)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, child: ?*C.QTreeWidgetItem ```
    pub fn AddChild(self: ?*anyopaque, child: ?*anyopaque) void {
        C.QTreeWidgetItem_AddChild(@ptrCast(self), @ptrCast(child));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#insertChild)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, index: i32, child: ?*C.QTreeWidgetItem ```
    pub fn InsertChild(self: ?*anyopaque, index: i32, child: ?*anyopaque) void {
        C.QTreeWidgetItem_InsertChild(@ptrCast(self), @intCast(index), @ptrCast(child));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#removeChild)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, child: ?*C.QTreeWidgetItem ```
    pub fn RemoveChild(self: ?*anyopaque, child: ?*anyopaque) void {
        C.QTreeWidgetItem_RemoveChild(@ptrCast(self), @ptrCast(child));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#takeChild)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, index: i32 ```
    pub fn TakeChild(self: ?*anyopaque, index: i32) ?*C.QTreeWidgetItem {
        return C.QTreeWidgetItem_TakeChild(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#addChildren)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, children: []?*C.QTreeWidgetItem ```
    pub fn AddChildren(self: ?*anyopaque, children: []?*anyopaque) void {
        const children_list = C.struct_libqt_list{
            .len = children.len,
            .data = @ptrCast(children.ptr),
        };
        C.QTreeWidgetItem_AddChildren(@ptrCast(self), children_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#insertChildren)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, index: i32, children: []?*C.QTreeWidgetItem ```
    pub fn InsertChildren(self: ?*anyopaque, index: i32, children: []?*anyopaque) void {
        const children_list = C.struct_libqt_list{
            .len = children.len,
            .data = @ptrCast(children.ptr),
        };
        C.QTreeWidgetItem_InsertChildren(@ptrCast(self), @intCast(index), children_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#takeChildren)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, allocator: std.mem.Allocator ```
    pub fn TakeChildren(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QTreeWidgetItem {
        const _arr: C.struct_libqt_list = C.QTreeWidgetItem_TakeChildren(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QTreeWidgetItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QTreeWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#type)
    ///
    /// ``` self: ?*C.QTreeWidgetItem ```
    pub fn Type(self: ?*anyopaque) i32 {
        return C.QTreeWidgetItem_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#sortChildren)
    ///
    /// ``` self: ?*C.QTreeWidgetItem, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn SortChildren(self: ?*anyopaque, column: i32, order: i64) void {
        C.QTreeWidgetItem_SortChildren(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#emitDataChanged)
    ///
    /// ``` self: ?*C.QTreeWidgetItem ```
    pub fn EmitDataChanged(self: ?*anyopaque) void {
        C.QTreeWidgetItem_EmitDataChanged(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTreeWidgetItem, slot: fn () callconv(.c) void ```
    pub fn OnEmitDataChanged(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTreeWidgetItem_OnEmitDataChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTreeWidgetItem ```
    pub fn QBaseEmitDataChanged(self: ?*anyopaque) void {
        C.QTreeWidgetItem_QBaseEmitDataChanged(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTreeWidgetItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTreeWidgetItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtreewidget.html
pub const qtreewidget = struct {
    /// New constructs a new QTreeWidget object.
    ///
    /// ``` parent: ?*C.QWidget ```
    pub fn New(parent: ?*anyopaque) ?*C.QTreeWidget {
        return C.QTreeWidget_new(@ptrCast(parent));
    }

    /// New2 constructs a new QTreeWidget object.
    ///
    ///
    pub fn New2() ?*C.QTreeWidget {
        return C.QTreeWidget_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QTreeWidget_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QTreeWidget, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QTreeWidget_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QTreeWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QTreeWidget_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QTreeWidget_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTreeWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QTreeWidget_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QTreeWidget_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#columnCount)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ColumnCount(self: ?*anyopaque) i32 {
        return C.QTreeWidget_ColumnCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setColumnCount)
    ///
    /// ``` self: ?*C.QTreeWidget, columns: i32 ```
    pub fn SetColumnCount(self: ?*anyopaque, columns: i32) void {
        C.QTreeWidget_SetColumnCount(@ptrCast(self), @intCast(columns));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#invisibleRootItem)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn InvisibleRootItem(self: ?*anyopaque) ?*C.QTreeWidgetItem {
        return C.QTreeWidget_InvisibleRootItem(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#topLevelItem)
    ///
    /// ``` self: ?*C.QTreeWidget, index: i32 ```
    pub fn TopLevelItem(self: ?*anyopaque, index: i32) ?*C.QTreeWidgetItem {
        return C.QTreeWidget_TopLevelItem(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#topLevelItemCount)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn TopLevelItemCount(self: ?*anyopaque) i32 {
        return C.QTreeWidget_TopLevelItemCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#insertTopLevelItem)
    ///
    /// ``` self: ?*C.QTreeWidget, index: i32, item: ?*C.QTreeWidgetItem ```
    pub fn InsertTopLevelItem(self: ?*anyopaque, index: i32, item: ?*anyopaque) void {
        C.QTreeWidget_InsertTopLevelItem(@ptrCast(self), @intCast(index), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#addTopLevelItem)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem ```
    pub fn AddTopLevelItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTreeWidget_AddTopLevelItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#takeTopLevelItem)
    ///
    /// ``` self: ?*C.QTreeWidget, index: i32 ```
    pub fn TakeTopLevelItem(self: ?*anyopaque, index: i32) ?*C.QTreeWidgetItem {
        return C.QTreeWidget_TakeTopLevelItem(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#indexOfTopLevelItem)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem ```
    pub fn IndexOfTopLevelItem(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return C.QTreeWidget_IndexOfTopLevelItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#insertTopLevelItems)
    ///
    /// ``` self: ?*C.QTreeWidget, index: i32, items: []?*C.QTreeWidgetItem ```
    pub fn InsertTopLevelItems(self: ?*anyopaque, index: i32, items: []?*anyopaque) void {
        const items_list = C.struct_libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        C.QTreeWidget_InsertTopLevelItems(@ptrCast(self), @intCast(index), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#addTopLevelItems)
    ///
    /// ``` self: ?*C.QTreeWidget, items: []?*C.QTreeWidgetItem ```
    pub fn AddTopLevelItems(self: ?*anyopaque, items: []?*anyopaque) void {
        const items_list = C.struct_libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        C.QTreeWidget_AddTopLevelItems(@ptrCast(self), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#headerItem)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn HeaderItem(self: ?*anyopaque) ?*C.QTreeWidgetItem {
        return C.QTreeWidget_HeaderItem(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setHeaderItem)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem ```
    pub fn SetHeaderItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTreeWidget_SetHeaderItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setHeaderLabels)
    ///
    /// ``` self: ?*C.QTreeWidget, labels: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetHeaderLabels(self: ?*anyopaque, labels: [][]const u8, allocator: std.mem.Allocator) void {
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
        C.QTreeWidget_SetHeaderLabels(@ptrCast(self), labels_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setHeaderLabel)
    ///
    /// ``` self: ?*C.QTreeWidget, label: []const u8 ```
    pub fn SetHeaderLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = C.struct_libqt_string{
            .len = label.len,
            .data = @constCast(label.ptr),
        };
        C.QTreeWidget_SetHeaderLabel(@ptrCast(self), label_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#currentItem)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn CurrentItem(self: ?*anyopaque) ?*C.QTreeWidgetItem {
        return C.QTreeWidget_CurrentItem(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#currentColumn)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn CurrentColumn(self: ?*anyopaque) i32 {
        return C.QTreeWidget_CurrentColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setCurrentItem)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem ```
    pub fn SetCurrentItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTreeWidget_SetCurrentItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setCurrentItem)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn SetCurrentItem2(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        C.QTreeWidget_SetCurrentItem2(@ptrCast(self), @ptrCast(item), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setCurrentItem)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem, column: i32, command: i32 ```
    pub fn SetCurrentItem3(self: ?*anyopaque, item: ?*anyopaque, column: i32, command: i64) void {
        C.QTreeWidget_SetCurrentItem3(@ptrCast(self), @ptrCast(item), @intCast(column), @intCast(command));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemAt)
    ///
    /// ``` self: ?*C.QTreeWidget, p: ?*C.QPoint ```
    pub fn ItemAt(self: ?*anyopaque, p: ?*anyopaque) ?*C.QTreeWidgetItem {
        return C.QTreeWidget_ItemAt(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemAt)
    ///
    /// ``` self: ?*C.QTreeWidget, x: i32, y: i32 ```
    pub fn ItemAt2(self: ?*anyopaque, x: i32, y: i32) ?*C.QTreeWidgetItem {
        return C.QTreeWidget_ItemAt2(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#visualItemRect)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem ```
    pub fn VisualItemRect(self: ?*anyopaque, item: ?*anyopaque) ?*C.QRect {
        return C.QTreeWidget_VisualItemRect(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#sortColumn)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn SortColumn(self: ?*anyopaque) i32 {
        return C.QTreeWidget_SortColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#sortItems)
    ///
    /// ``` self: ?*C.QTreeWidget, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn SortItems(self: ?*anyopaque, column: i32, order: i64) void {
        C.QTreeWidget_SortItems(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#editItem)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem ```
    pub fn EditItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTreeWidget_EditItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#openPersistentEditor)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem ```
    pub fn OpenPersistentEditor(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTreeWidget_OpenPersistentEditor(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#closePersistentEditor)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem ```
    pub fn ClosePersistentEditor(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTreeWidget_ClosePersistentEditor(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#isPersistentEditorOpen)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem ```
    pub fn IsPersistentEditorOpen(self: ?*anyopaque, item: ?*anyopaque) bool {
        return C.QTreeWidget_IsPersistentEditorOpen(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemWidget)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn ItemWidget(self: ?*anyopaque, item: ?*anyopaque, column: i32) ?*C.QWidget {
        return C.QTreeWidget_ItemWidget(@ptrCast(self), @ptrCast(item), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setItemWidget)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem, column: i32, widget: ?*C.QWidget ```
    pub fn SetItemWidget(self: ?*anyopaque, item: ?*anyopaque, column: i32, widget: ?*anyopaque) void {
        C.QTreeWidget_SetItemWidget(@ptrCast(self), @ptrCast(item), @intCast(column), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#removeItemWidget)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn RemoveItemWidget(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        C.QTreeWidget_RemoveItemWidget(@ptrCast(self), @ptrCast(item), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#selectedItems)
    ///
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
    pub fn SelectedItems(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QTreeWidgetItem {
        const _arr: C.struct_libqt_list = C.QTreeWidget_SelectedItems(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QTreeWidgetItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QTreeWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#findItems)
    ///
    /// ``` self: ?*C.QTreeWidget, text: []const u8, flags: i32, allocator: std.mem.Allocator ```
    pub fn FindItems(self: ?*anyopaque, text: []const u8, flags: i64, allocator: std.mem.Allocator) []?*C.QTreeWidgetItem {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        const _arr: C.struct_libqt_list = C.QTreeWidget_FindItems(@ptrCast(self), text_str, @intCast(flags));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QTreeWidgetItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QTreeWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemAbove)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem ```
    pub fn ItemAbove(self: ?*anyopaque, item: ?*anyopaque) ?*C.QTreeWidgetItem {
        return C.QTreeWidget_ItemAbove(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemBelow)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem ```
    pub fn ItemBelow(self: ?*anyopaque, item: ?*anyopaque) ?*C.QTreeWidgetItem {
        return C.QTreeWidget_ItemBelow(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#indexFromItem)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem ```
    pub fn IndexFromItem(self: ?*anyopaque, item: ?*anyopaque) ?*C.QModelIndex {
        return C.QTreeWidget_IndexFromItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemFromIndex)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn ItemFromIndex(self: ?*anyopaque, index: ?*anyopaque) ?*C.QTreeWidgetItem {
        return C.QTreeWidget_ItemFromIndex(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setSelectionModel)
    ///
    /// ``` self: ?*C.QTreeWidget, selectionModel: ?*C.QItemSelectionModel ```
    pub fn SetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        C.QTreeWidget_SetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QItemSelectionModel) callconv(.c) void ```
    pub fn OnSetSelectionModel(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnSetSelectionModel(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTreeWidget, selectionModel: ?*C.QItemSelectionModel ```
    pub fn QBaseSetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        C.QTreeWidget_QBaseSetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#scrollToItem)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem ```
    pub fn ScrollToItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTreeWidget_ScrollToItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#expandItem)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem ```
    pub fn ExpandItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTreeWidget_ExpandItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#collapseItem)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem ```
    pub fn CollapseItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTreeWidget_CollapseItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#clear)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Clear(self: ?*anyopaque) void {
        C.QTreeWidget_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemPressed)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn ItemPressed(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        C.QTreeWidget_ItemPressed(@ptrCast(self), @ptrCast(item), @intCast(column));
    }

    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QTreeWidgetItem, i32) callconv(.c) void ```
    pub fn OnItemPressed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QTreeWidget_Connect_ItemPressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemClicked)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn ItemClicked(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        C.QTreeWidget_ItemClicked(@ptrCast(self), @ptrCast(item), @intCast(column));
    }

    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QTreeWidgetItem, i32) callconv(.c) void ```
    pub fn OnItemClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QTreeWidget_Connect_ItemClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemDoubleClicked)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn ItemDoubleClicked(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        C.QTreeWidget_ItemDoubleClicked(@ptrCast(self), @ptrCast(item), @intCast(column));
    }

    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QTreeWidgetItem, i32) callconv(.c) void ```
    pub fn OnItemDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QTreeWidget_Connect_ItemDoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemActivated)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn ItemActivated(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        C.QTreeWidget_ItemActivated(@ptrCast(self), @ptrCast(item), @intCast(column));
    }

    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QTreeWidgetItem, i32) callconv(.c) void ```
    pub fn OnItemActivated(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QTreeWidget_Connect_ItemActivated(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemEntered)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn ItemEntered(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        C.QTreeWidget_ItemEntered(@ptrCast(self), @ptrCast(item), @intCast(column));
    }

    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QTreeWidgetItem, i32) callconv(.c) void ```
    pub fn OnItemEntered(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QTreeWidget_Connect_ItemEntered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemChanged)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn ItemChanged(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        C.QTreeWidget_ItemChanged(@ptrCast(self), @ptrCast(item), @intCast(column));
    }

    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QTreeWidgetItem, i32) callconv(.c) void ```
    pub fn OnItemChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QTreeWidget_Connect_ItemChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemExpanded)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem ```
    pub fn ItemExpanded(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTreeWidget_ItemExpanded(@ptrCast(self), @ptrCast(item));
    }

    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QTreeWidgetItem) callconv(.c) void ```
    pub fn OnItemExpanded(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_Connect_ItemExpanded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemCollapsed)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem ```
    pub fn ItemCollapsed(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QTreeWidget_ItemCollapsed(@ptrCast(self), @ptrCast(item));
    }

    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QTreeWidgetItem) callconv(.c) void ```
    pub fn OnItemCollapsed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_Connect_ItemCollapsed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#currentItemChanged)
    ///
    /// ``` self: ?*C.QTreeWidget, current: ?*C.QTreeWidgetItem, previous: ?*C.QTreeWidgetItem ```
    pub fn CurrentItemChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        C.QTreeWidget_CurrentItemChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QTreeWidgetItem, ?*C.QTreeWidgetItem) callconv(.c) void ```
    pub fn OnCurrentItemChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_Connect_CurrentItemChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemSelectionChanged)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ItemSelectionChanged(self: ?*anyopaque) void {
        C.QTreeWidget_ItemSelectionChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget) callconv(.c) void ```
    pub fn OnItemSelectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_Connect_ItemSelectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#event)
    ///
    /// ``` self: ?*C.QTreeWidget, e: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return C.QTreeWidget_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTreeWidget_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTreeWidget, e: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return C.QTreeWidget_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#mimeTypes)
    ///
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
    pub fn MimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QTreeWidget_MimeTypes(@ptrCast(self));
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
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) [][]const u8 ```
    pub fn OnMimeTypes(self: ?*anyopaque, slot: fn () callconv(.c) [][]const u8) void {
        C.QTreeWidget_OnMimeTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
    pub fn QBaseMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QTreeWidget_QBaseMimeTypes(@ptrCast(self));
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#mimeData)
    ///
    /// ``` self: ?*C.QTreeWidget, items: []?*C.QTreeWidgetItem ```
    pub fn MimeData(self: ?*anyopaque, items: []?*anyopaque) ?*C.QMimeData {
        const items_list = C.struct_libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return C.QTreeWidget_MimeData(@ptrCast(self), items_list);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, []?*C.QTreeWidgetItem) callconv(.c) ?*C.QMimeData ```
    pub fn OnMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, []?*anyopaque) callconv(.c) ?*C.QMimeData) void {
        C.QTreeWidget_OnMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTreeWidget, items: []?*C.QTreeWidgetItem ```
    pub fn QBaseMimeData(self: ?*anyopaque, items: []?*anyopaque) ?*C.QMimeData {
        const items_list = C.struct_libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return C.QTreeWidget_QBaseMimeData(@ptrCast(self), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#dropMimeData)
    ///
    /// ``` self: ?*C.QTreeWidget, parent: ?*C.QTreeWidgetItem, index: i32, data: ?*C.QMimeData, action: qnamespace_enums.DropAction ```
    pub fn DropMimeData(self: ?*anyopaque, parent: ?*anyopaque, index: i32, data: ?*anyopaque, action: i64) bool {
        return C.QTreeWidget_DropMimeData(@ptrCast(self), @ptrCast(parent), @intCast(index), @ptrCast(data), @intCast(action));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QTreeWidgetItem, i32, ?*C.QMimeData, qnamespace_enums.DropAction) callconv(.c) bool ```
    pub fn OnDropMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, i64) callconv(.c) bool) void {
        C.QTreeWidget_OnDropMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTreeWidget, parent: ?*C.QTreeWidgetItem, index: i32, data: ?*C.QMimeData, action: qnamespace_enums.DropAction ```
    pub fn QBaseDropMimeData(self: ?*anyopaque, parent: ?*anyopaque, index: i32, data: ?*anyopaque, action: i64) bool {
        return C.QTreeWidget_QBaseDropMimeData(@ptrCast(self), @ptrCast(parent), @intCast(index), @ptrCast(data), @intCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#supportedDropActions)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn SupportedDropActions(self: ?*anyopaque) i64 {
        return C.QTreeWidget_SupportedDropActions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) i64 ```
    pub fn OnSupportedDropActions(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QTreeWidget_OnSupportedDropActions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseSupportedDropActions(self: ?*anyopaque) i64 {
        return C.QTreeWidget_QBaseSupportedDropActions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#dropEvent)
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnDropEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QTreeWidget_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QTreeWidget_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#editItem)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn EditItem2(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        C.QTreeWidget_EditItem2(@ptrCast(self), @ptrCast(item), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#openPersistentEditor)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn OpenPersistentEditor2(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        C.QTreeWidget_OpenPersistentEditor2(@ptrCast(self), @ptrCast(item), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#closePersistentEditor)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn ClosePersistentEditor2(self: ?*anyopaque, item: ?*anyopaque, column: i32) void {
        C.QTreeWidget_ClosePersistentEditor2(@ptrCast(self), @ptrCast(item), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#isPersistentEditorOpen)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn IsPersistentEditorOpen2(self: ?*anyopaque, item: ?*anyopaque, column: i32) bool {
        return C.QTreeWidget_IsPersistentEditorOpen2(@ptrCast(self), @ptrCast(item), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#findItems)
    ///
    /// ``` self: ?*C.QTreeWidget, text: []const u8, flags: i32, column: i32, allocator: std.mem.Allocator ```
    pub fn FindItems3(self: ?*anyopaque, text: []const u8, flags: i64, column: i32, allocator: std.mem.Allocator) []?*C.QTreeWidgetItem {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        const _arr: C.struct_libqt_list = C.QTreeWidget_FindItems3(@ptrCast(self), text_str, @intCast(flags), @intCast(column));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QTreeWidgetItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QTreeWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#indexFromItem)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem, column: i32 ```
    pub fn IndexFromItem2(self: ?*anyopaque, item: ?*anyopaque, column: i32) ?*C.QModelIndex {
        return C.QTreeWidget_IndexFromItem2(@ptrCast(self), @ptrCast(item), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#scrollToItem)
    ///
    /// ``` self: ?*C.QTreeWidget, item: ?*C.QTreeWidgetItem, hint: qabstractitemview_enums.ScrollHint ```
    pub fn ScrollToItem2(self: ?*anyopaque, item: ?*anyopaque, hint: i64) void {
        C.QTreeWidget_ScrollToItem2(@ptrCast(self), @ptrCast(item), @intCast(hint));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setModel)
    ///
    /// ``` self: ?*C.QTreeWidget, model: ?*C.QAbstractItemModel ```
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        C.QTreeView_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Inherited from QTreeView
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTreeView, slot: fn (?*C.QTreeView, ?*C.QAbstractItemModel) callconv(.c) void ```
    pub fn OnSetModel(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeView_OnSetModel(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTreeWidget, model: ?*C.QAbstractItemModel ```
    pub fn QBaseSetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        C.QTreeView_QBaseSetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#header)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Header(self: ?*anyopaque) ?*C.QHeaderView {
        return C.QTreeView_Header(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setHeader)
    ///
    /// ``` self: ?*C.QTreeWidget, header: ?*C.QHeaderView ```
    pub fn SetHeader(self: ?*anyopaque, header: ?*anyopaque) void {
        C.QTreeView_SetHeader(@ptrCast(self), @ptrCast(header));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#autoExpandDelay)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn AutoExpandDelay(self: ?*anyopaque) i32 {
        return C.QTreeView_AutoExpandDelay(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setAutoExpandDelay)
    ///
    /// ``` self: ?*C.QTreeWidget, delay: i32 ```
    pub fn SetAutoExpandDelay(self: ?*anyopaque, delay: i32) void {
        C.QTreeView_SetAutoExpandDelay(@ptrCast(self), @intCast(delay));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indentation)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Indentation(self: ?*anyopaque) i32 {
        return C.QTreeView_Indentation(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setIndentation)
    ///
    /// ``` self: ?*C.QTreeWidget, i: i32 ```
    pub fn SetIndentation(self: ?*anyopaque, i: i32) void {
        C.QTreeView_SetIndentation(@ptrCast(self), @intCast(i));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#resetIndentation)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ResetIndentation(self: ?*anyopaque) void {
        C.QTreeView_ResetIndentation(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rootIsDecorated)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn RootIsDecorated(self: ?*anyopaque) bool {
        return C.QTreeView_RootIsDecorated(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRootIsDecorated)
    ///
    /// ``` self: ?*C.QTreeWidget, show: bool ```
    pub fn SetRootIsDecorated(self: ?*anyopaque, show: bool) void {
        C.QTreeView_SetRootIsDecorated(@ptrCast(self), show);
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#uniformRowHeights)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn UniformRowHeights(self: ?*anyopaque) bool {
        return C.QTreeView_UniformRowHeights(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setUniformRowHeights)
    ///
    /// ``` self: ?*C.QTreeWidget, uniform: bool ```
    pub fn SetUniformRowHeights(self: ?*anyopaque, uniform: bool) void {
        C.QTreeView_SetUniformRowHeights(@ptrCast(self), uniform);
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#itemsExpandable)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ItemsExpandable(self: ?*anyopaque) bool {
        return C.QTreeView_ItemsExpandable(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setItemsExpandable)
    ///
    /// ``` self: ?*C.QTreeWidget, enable: bool ```
    pub fn SetItemsExpandable(self: ?*anyopaque, enable: bool) void {
        C.QTreeView_SetItemsExpandable(@ptrCast(self), enable);
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandsOnDoubleClick)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ExpandsOnDoubleClick(self: ?*anyopaque) bool {
        return C.QTreeView_ExpandsOnDoubleClick(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setExpandsOnDoubleClick)
    ///
    /// ``` self: ?*C.QTreeWidget, enable: bool ```
    pub fn SetExpandsOnDoubleClick(self: ?*anyopaque, enable: bool) void {
        C.QTreeView_SetExpandsOnDoubleClick(@ptrCast(self), enable);
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnViewportPosition)
    ///
    /// ``` self: ?*C.QTreeWidget, column: i32 ```
    pub fn ColumnViewportPosition(self: ?*anyopaque, column: i32) i32 {
        return C.QTreeView_ColumnViewportPosition(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnWidth)
    ///
    /// ``` self: ?*C.QTreeWidget, column: i32 ```
    pub fn ColumnWidth(self: ?*anyopaque, column: i32) i32 {
        return C.QTreeView_ColumnWidth(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setColumnWidth)
    ///
    /// ``` self: ?*C.QTreeWidget, column: i32, width: i32 ```
    pub fn SetColumnWidth(self: ?*anyopaque, column: i32, width: i32) void {
        C.QTreeView_SetColumnWidth(@ptrCast(self), @intCast(column), @intCast(width));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnAt)
    ///
    /// ``` self: ?*C.QTreeWidget, x: i32 ```
    pub fn ColumnAt(self: ?*anyopaque, x: i32) i32 {
        return C.QTreeView_ColumnAt(@ptrCast(self), @intCast(x));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isColumnHidden)
    ///
    /// ``` self: ?*C.QTreeWidget, column: i32 ```
    pub fn IsColumnHidden(self: ?*anyopaque, column: i32) bool {
        return C.QTreeView_IsColumnHidden(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setColumnHidden)
    ///
    /// ``` self: ?*C.QTreeWidget, column: i32, hide: bool ```
    pub fn SetColumnHidden(self: ?*anyopaque, column: i32, hide: bool) void {
        C.QTreeView_SetColumnHidden(@ptrCast(self), @intCast(column), hide);
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isHeaderHidden)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsHeaderHidden(self: ?*anyopaque) bool {
        return C.QTreeView_IsHeaderHidden(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setHeaderHidden)
    ///
    /// ``` self: ?*C.QTreeWidget, hide: bool ```
    pub fn SetHeaderHidden(self: ?*anyopaque, hide: bool) void {
        C.QTreeView_SetHeaderHidden(@ptrCast(self), hide);
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isRowHidden)
    ///
    /// ``` self: ?*C.QTreeWidget, row: i32, parent: ?*C.QModelIndex ```
    pub fn IsRowHidden(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return C.QTreeView_IsRowHidden(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRowHidden)
    ///
    /// ``` self: ?*C.QTreeWidget, row: i32, parent: ?*C.QModelIndex, hide: bool ```
    pub fn SetRowHidden(self: ?*anyopaque, row: i32, parent: ?*anyopaque, hide: bool) void {
        C.QTreeView_SetRowHidden(@ptrCast(self), @intCast(row), @ptrCast(parent), hide);
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isFirstColumnSpanned)
    ///
    /// ``` self: ?*C.QTreeWidget, row: i32, parent: ?*C.QModelIndex ```
    pub fn IsFirstColumnSpanned(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return C.QTreeView_IsFirstColumnSpanned(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setFirstColumnSpanned)
    ///
    /// ``` self: ?*C.QTreeWidget, row: i32, parent: ?*C.QModelIndex, span: bool ```
    pub fn SetFirstColumnSpanned(self: ?*anyopaque, row: i32, parent: ?*anyopaque, span: bool) void {
        C.QTreeView_SetFirstColumnSpanned(@ptrCast(self), @intCast(row), @ptrCast(parent), span);
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isExpanded)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn IsExpanded(self: ?*anyopaque, index: ?*anyopaque) bool {
        return C.QTreeView_IsExpanded(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setExpanded)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex, expand: bool ```
    pub fn SetExpanded(self: ?*anyopaque, index: ?*anyopaque, expand: bool) void {
        C.QTreeView_SetExpanded(@ptrCast(self), @ptrCast(index), expand);
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setSortingEnabled)
    ///
    /// ``` self: ?*C.QTreeWidget, enable: bool ```
    pub fn SetSortingEnabled(self: ?*anyopaque, enable: bool) void {
        C.QTreeView_SetSortingEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isSortingEnabled)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsSortingEnabled(self: ?*anyopaque) bool {
        return C.QTreeView_IsSortingEnabled(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setAnimated)
    ///
    /// ``` self: ?*C.QTreeWidget, enable: bool ```
    pub fn SetAnimated(self: ?*anyopaque, enable: bool) void {
        C.QTreeView_SetAnimated(@ptrCast(self), enable);
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isAnimated)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsAnimated(self: ?*anyopaque) bool {
        return C.QTreeView_IsAnimated(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setAllColumnsShowFocus)
    ///
    /// ``` self: ?*C.QTreeWidget, enable: bool ```
    pub fn SetAllColumnsShowFocus(self: ?*anyopaque, enable: bool) void {
        C.QTreeView_SetAllColumnsShowFocus(@ptrCast(self), enable);
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#allColumnsShowFocus)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn AllColumnsShowFocus(self: ?*anyopaque) bool {
        return C.QTreeView_AllColumnsShowFocus(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setWordWrap)
    ///
    /// ``` self: ?*C.QTreeWidget, on: bool ```
    pub fn SetWordWrap(self: ?*anyopaque, on: bool) void {
        C.QTreeView_SetWordWrap(@ptrCast(self), on);
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#wordWrap)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn WordWrap(self: ?*anyopaque) bool {
        return C.QTreeView_WordWrap(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setTreePosition)
    ///
    /// ``` self: ?*C.QTreeWidget, logicalIndex: i32 ```
    pub fn SetTreePosition(self: ?*anyopaque, logicalIndex: i32) void {
        C.QTreeView_SetTreePosition(@ptrCast(self), @intCast(logicalIndex));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#treePosition)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn TreePosition(self: ?*anyopaque) i32 {
        return C.QTreeView_TreePosition(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexAbove)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn IndexAbove(self: ?*anyopaque, index: ?*anyopaque) ?*C.QModelIndex {
        return C.QTreeView_IndexAbove(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexBelow)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn IndexBelow(self: ?*anyopaque, index: ?*anyopaque) ?*C.QModelIndex {
        return C.QTreeView_IndexBelow(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expanded)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn Expanded(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QTreeView_Expanded(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// ``` self: ?*C.QTreeView, slot: fn (?*C.QTreeView, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnExpanded(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeView_Connect_Expanded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#collapsed)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn Collapsed(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QTreeView_Collapsed(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// ``` self: ?*C.QTreeView, slot: fn (?*C.QTreeView, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnCollapsed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeView_Connect_Collapsed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#hideColumn)
    ///
    /// ``` self: ?*C.QTreeWidget, column: i32 ```
    pub fn HideColumn(self: ?*anyopaque, column: i32) void {
        C.QTreeView_HideColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#showColumn)
    ///
    /// ``` self: ?*C.QTreeWidget, column: i32 ```
    pub fn ShowColumn(self: ?*anyopaque, column: i32) void {
        C.QTreeView_ShowColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expand)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn Expand(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QTreeView_Expand(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#collapse)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn Collapse(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QTreeView_Collapse(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#resizeColumnToContents)
    ///
    /// ``` self: ?*C.QTreeWidget, column: i32 ```
    pub fn ResizeColumnToContents(self: ?*anyopaque, column: i32) void {
        C.QTreeView_ResizeColumnToContents(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#sortByColumn)
    ///
    /// ``` self: ?*C.QTreeWidget, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn SortByColumn(self: ?*anyopaque, column: i32, order: i64) void {
        C.QTreeView_SortByColumn(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandAll)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ExpandAll(self: ?*anyopaque) void {
        C.QTreeView_ExpandAll(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandRecursively)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn ExpandRecursively(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QTreeView_ExpandRecursively(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#collapseAll)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn CollapseAll(self: ?*anyopaque) void {
        C.QTreeView_CollapseAll(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandToDepth)
    ///
    /// ``` self: ?*C.QTreeWidget, depth: i32 ```
    pub fn ExpandToDepth(self: ?*anyopaque, depth: i32) void {
        C.QTreeView_ExpandToDepth(@ptrCast(self), @intCast(depth));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandRecursively)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex, depth: i32 ```
    pub fn ExpandRecursively2(self: ?*anyopaque, index: ?*anyopaque, depth: i32) void {
        C.QTreeView_ExpandRecursively2(@ptrCast(self), @ptrCast(index), @intCast(depth));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Model(self: ?*anyopaque) ?*C.QAbstractItemModel {
        return C.QAbstractItemView_Model(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn SelectionModel(self: ?*anyopaque) ?*C.QItemSelectionModel {
        return C.QAbstractItemView_SelectionModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
    ///
    /// ``` self: ?*C.QTreeWidget, delegate: ?*C.QAbstractItemDelegate ```
    pub fn SetItemDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        C.QAbstractItemView_SetItemDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ItemDelegate(self: ?*anyopaque) ?*C.QAbstractItemDelegate {
        return C.QAbstractItemView_ItemDelegate(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
    ///
    /// ``` self: ?*C.QTreeWidget, mode: qabstractitemview_enums.SelectionMode ```
    pub fn SetSelectionMode(self: ?*anyopaque, mode: i64) void {
        C.QAbstractItemView_SetSelectionMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn SelectionMode(self: ?*anyopaque) i64 {
        return C.QAbstractItemView_SelectionMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
    ///
    /// ``` self: ?*C.QTreeWidget, behavior: qabstractitemview_enums.SelectionBehavior ```
    pub fn SetSelectionBehavior(self: ?*anyopaque, behavior: i64) void {
        C.QAbstractItemView_SetSelectionBehavior(@ptrCast(self), @intCast(behavior));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn SelectionBehavior(self: ?*anyopaque) i64 {
        return C.QAbstractItemView_SelectionBehavior(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn CurrentIndex(self: ?*anyopaque) ?*C.QModelIndex {
        return C.QAbstractItemView_CurrentIndex(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn RootIndex(self: ?*anyopaque) ?*C.QModelIndex {
        return C.QAbstractItemView_RootIndex(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
    ///
    /// ``` self: ?*C.QTreeWidget, triggers: i32 ```
    pub fn SetEditTriggers(self: ?*anyopaque, triggers: i64) void {
        C.QAbstractItemView_SetEditTriggers(@ptrCast(self), @intCast(triggers));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn EditTriggers(self: ?*anyopaque) i64 {
        return C.QAbstractItemView_EditTriggers(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
    ///
    /// ``` self: ?*C.QTreeWidget, mode: qabstractitemview_enums.ScrollMode ```
    pub fn SetVerticalScrollMode(self: ?*anyopaque, mode: i64) void {
        C.QAbstractItemView_SetVerticalScrollMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn VerticalScrollMode(self: ?*anyopaque) i64 {
        return C.QAbstractItemView_VerticalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ResetVerticalScrollMode(self: ?*anyopaque) void {
        C.QAbstractItemView_ResetVerticalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
    ///
    /// ``` self: ?*C.QTreeWidget, mode: qabstractitemview_enums.ScrollMode ```
    pub fn SetHorizontalScrollMode(self: ?*anyopaque, mode: i64) void {
        C.QAbstractItemView_SetHorizontalScrollMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn HorizontalScrollMode(self: ?*anyopaque) i64 {
        return C.QAbstractItemView_HorizontalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ResetHorizontalScrollMode(self: ?*anyopaque) void {
        C.QAbstractItemView_ResetHorizontalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
    ///
    /// ``` self: ?*C.QTreeWidget, enable: bool ```
    pub fn SetAutoScroll(self: ?*anyopaque, enable: bool) void {
        C.QAbstractItemView_SetAutoScroll(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn HasAutoScroll(self: ?*anyopaque) bool {
        return C.QAbstractItemView_HasAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
    ///
    /// ``` self: ?*C.QTreeWidget, margin: i32 ```
    pub fn SetAutoScrollMargin(self: ?*anyopaque, margin: i32) void {
        C.QAbstractItemView_SetAutoScrollMargin(@ptrCast(self), @intCast(margin));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn AutoScrollMargin(self: ?*anyopaque) i32 {
        return C.QAbstractItemView_AutoScrollMargin(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
    ///
    /// ``` self: ?*C.QTreeWidget, enable: bool ```
    pub fn SetTabKeyNavigation(self: ?*anyopaque, enable: bool) void {
        C.QAbstractItemView_SetTabKeyNavigation(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn TabKeyNavigation(self: ?*anyopaque) bool {
        return C.QAbstractItemView_TabKeyNavigation(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
    ///
    /// ``` self: ?*C.QTreeWidget, enable: bool ```
    pub fn SetDropIndicatorShown(self: ?*anyopaque, enable: bool) void {
        C.QAbstractItemView_SetDropIndicatorShown(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ShowDropIndicator(self: ?*anyopaque) bool {
        return C.QAbstractItemView_ShowDropIndicator(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
    ///
    /// ``` self: ?*C.QTreeWidget, enable: bool ```
    pub fn SetDragEnabled(self: ?*anyopaque, enable: bool) void {
        C.QAbstractItemView_SetDragEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn DragEnabled(self: ?*anyopaque) bool {
        return C.QAbstractItemView_DragEnabled(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
    ///
    /// ``` self: ?*C.QTreeWidget, overwrite: bool ```
    pub fn SetDragDropOverwriteMode(self: ?*anyopaque, overwrite: bool) void {
        C.QAbstractItemView_SetDragDropOverwriteMode(@ptrCast(self), overwrite);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn DragDropOverwriteMode(self: ?*anyopaque) bool {
        return C.QAbstractItemView_DragDropOverwriteMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
    ///
    /// ``` self: ?*C.QTreeWidget, behavior: qabstractitemview_enums.DragDropMode ```
    pub fn SetDragDropMode(self: ?*anyopaque, behavior: i64) void {
        C.QAbstractItemView_SetDragDropMode(@ptrCast(self), @intCast(behavior));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn DragDropMode(self: ?*anyopaque) i64 {
        return C.QAbstractItemView_DragDropMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
    ///
    /// ``` self: ?*C.QTreeWidget, dropAction: qnamespace_enums.DropAction ```
    pub fn SetDefaultDropAction(self: ?*anyopaque, dropAction: i64) void {
        C.QAbstractItemView_SetDefaultDropAction(@ptrCast(self), @intCast(dropAction));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn DefaultDropAction(self: ?*anyopaque) i64 {
        return C.QAbstractItemView_DefaultDropAction(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
    ///
    /// ``` self: ?*C.QTreeWidget, enable: bool ```
    pub fn SetAlternatingRowColors(self: ?*anyopaque, enable: bool) void {
        C.QAbstractItemView_SetAlternatingRowColors(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn AlternatingRowColors(self: ?*anyopaque) bool {
        return C.QAbstractItemView_AlternatingRowColors(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
    ///
    /// ``` self: ?*C.QTreeWidget, size: ?*C.QSize ```
    pub fn SetIconSize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QAbstractItemView_SetIconSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IconSize(self: ?*anyopaque) ?*C.QSize {
        return C.QAbstractItemView_IconSize(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
    ///
    /// ``` self: ?*C.QTreeWidget, mode: qnamespace_enums.TextElideMode ```
    pub fn SetTextElideMode(self: ?*anyopaque, mode: i64) void {
        C.QAbstractItemView_SetTextElideMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn TextElideMode(self: ?*anyopaque) i64 {
        return C.QAbstractItemView_TextElideMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn SizeHintForIndex(self: ?*anyopaque, index: ?*anyopaque) ?*C.QSize {
        return C.QAbstractItemView_SizeHintForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex, widget: ?*C.QWidget ```
    pub fn SetIndexWidget(self: ?*anyopaque, index: ?*anyopaque, widget: ?*anyopaque) void {
        C.QAbstractItemView_SetIndexWidget(@ptrCast(self), @ptrCast(index), @ptrCast(widget));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn IndexWidget(self: ?*anyopaque, index: ?*anyopaque) ?*C.QWidget {
        return C.QAbstractItemView_IndexWidget(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
    ///
    /// ``` self: ?*C.QTreeWidget, row: i32, delegate: ?*C.QAbstractItemDelegate ```
    pub fn SetItemDelegateForRow(self: ?*anyopaque, row: i32, delegate: ?*anyopaque) void {
        C.QAbstractItemView_SetItemDelegateForRow(@ptrCast(self), @intCast(row), @ptrCast(delegate));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
    ///
    /// ``` self: ?*C.QTreeWidget, row: i32 ```
    pub fn ItemDelegateForRow(self: ?*anyopaque, row: i32) ?*C.QAbstractItemDelegate {
        return C.QAbstractItemView_ItemDelegateForRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
    ///
    /// ``` self: ?*C.QTreeWidget, column: i32, delegate: ?*C.QAbstractItemDelegate ```
    pub fn SetItemDelegateForColumn(self: ?*anyopaque, column: i32, delegate: ?*anyopaque) void {
        C.QAbstractItemView_SetItemDelegateForColumn(@ptrCast(self), @intCast(column), @ptrCast(delegate));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
    ///
    /// ``` self: ?*C.QTreeWidget, column: i32 ```
    pub fn ItemDelegateForColumn(self: ?*anyopaque, column: i32) ?*C.QAbstractItemDelegate {
        return C.QAbstractItemView_ItemDelegateForColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn ItemDelegateWithIndex(self: ?*anyopaque, index: ?*anyopaque) ?*C.QAbstractItemDelegate {
        return C.QAbstractItemView_ItemDelegateWithIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn Edit(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QAbstractItemView_Edit(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ClearSelection(self: ?*anyopaque) void {
        C.QAbstractItemView_ClearSelection(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn SetCurrentIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QAbstractItemView_SetCurrentIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ScrollToTop(self: ?*anyopaque) void {
        C.QAbstractItemView_ScrollToTop(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ScrollToBottom(self: ?*anyopaque) void {
        C.QAbstractItemView_ScrollToBottom(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn Update(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QAbstractItemView_Update(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
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
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
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
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
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
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
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
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
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
    /// ``` self: ?*C.QTreeWidget ```
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
    /// ``` self: ?*C.QTreeWidget, size: ?*C.QSize ```
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
    /// ``` self: ?*C.QTreeWidget ```
    pub fn VerticalScrollBarPolicy(self: ?*anyopaque) i64 {
        return C.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ``` self: ?*C.QTreeWidget, verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetVerticalScrollBarPolicy(self: ?*anyopaque, verticalScrollBarPolicy: i64) void {
        C.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self), @intCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn VerticalScrollBar(self: ?*anyopaque) ?*C.QScrollBar {
        return C.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ``` self: ?*C.QTreeWidget, scrollbar: ?*C.QScrollBar ```
    pub fn SetVerticalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        C.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn HorizontalScrollBarPolicy(self: ?*anyopaque) i64 {
        return C.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ``` self: ?*C.QTreeWidget, horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetHorizontalScrollBarPolicy(self: ?*anyopaque, horizontalScrollBarPolicy: i64) void {
        C.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self), @intCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn HorizontalScrollBar(self: ?*anyopaque) ?*C.QScrollBar {
        return C.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ``` self: ?*C.QTreeWidget, scrollbar: ?*C.QScrollBar ```
    pub fn SetHorizontalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        C.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn CornerWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QAbstractScrollArea_CornerWidget(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ``` self: ?*C.QTreeWidget, widget: ?*C.QWidget ```
    pub fn SetCornerWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QAbstractScrollArea_SetCornerWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ``` self: ?*C.QTreeWidget, widget: ?*C.QWidget, alignment: i32 ```
    pub fn AddScrollBarWidget(self: ?*anyopaque, widget: ?*anyopaque, alignment: i64) void {
        C.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self), @ptrCast(widget), @intCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ``` self: ?*C.QTreeWidget, alignment: i32, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Viewport(self: ?*anyopaque) ?*C.QWidget {
        return C.QAbstractScrollArea_Viewport(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ``` self: ?*C.QTreeWidget, widget: ?*C.QWidget ```
    pub fn SetViewport(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QAbstractScrollArea_SetViewport(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn MaximumViewportSize(self: ?*anyopaque) ?*C.QSize {
        return C.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn SizeAdjustPolicy(self: ?*anyopaque) i64 {
        return C.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ``` self: ?*C.QTreeWidget, policy: qabstractscrollarea_enums.SizeAdjustPolicy ```
    pub fn SetSizeAdjustPolicy(self: ?*anyopaque, policy: i64) void {
        C.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn FrameStyle(self: ?*anyopaque) i32 {
        return C.QFrame_FrameStyle(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ``` self: ?*C.QTreeWidget, frameStyle: i32 ```
    pub fn SetFrameStyle(self: ?*anyopaque, frameStyle: i32) void {
        C.QFrame_SetFrameStyle(@ptrCast(self), @intCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn FrameWidth(self: ?*anyopaque) i32 {
        return C.QFrame_FrameWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn FrameShape(self: ?*anyopaque) i64 {
        return C.QFrame_FrameShape(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ``` self: ?*C.QTreeWidget, frameShape: qframe_enums.Shape ```
    pub fn SetFrameShape(self: ?*anyopaque, frameShape: i64) void {
        C.QFrame_SetFrameShape(@ptrCast(self), @intCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn FrameShadow(self: ?*anyopaque) i64 {
        return C.QFrame_FrameShadow(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ``` self: ?*C.QTreeWidget, frameShadow: qframe_enums.Shadow ```
    pub fn SetFrameShadow(self: ?*anyopaque, frameShadow: i64) void {
        C.QFrame_SetFrameShadow(@ptrCast(self), @intCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return C.QFrame_LineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ``` self: ?*C.QTreeWidget, lineWidth: i32 ```
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        C.QFrame_SetLineWidth(@ptrCast(self), @intCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return C.QFrame_MidLineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ``` self: ?*C.QTreeWidget, midLineWidth: i32 ```
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        C.QFrame_SetMidLineWidth(@ptrCast(self), @intCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn FrameRect(self: ?*anyopaque) ?*C.QRect {
        return C.QFrame_FrameRect(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ``` self: ?*C.QTreeWidget, frameRect: ?*C.QRect ```
    pub fn SetFrameRect(self: ?*anyopaque, frameRect: ?*anyopaque) void {
        C.QFrame_SetFrameRect(@ptrCast(self), @ptrCast(frameRect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn WinId(self: ?*anyopaque) usize {
        return C.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn CreateWinId(self: ?*anyopaque) void {
        C.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return C.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return C.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Style(self: ?*anyopaque) ?*C.QStyle {
        return C.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ``` self: ?*C.QTreeWidget, style: ?*C.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        C.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return C.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return C.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return C.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn WindowModality(self: ?*anyopaque) i64 {
        return C.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ``` self: ?*C.QTreeWidget, windowModality: qnamespace_enums.WindowModality ```
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i64) void {
        C.QWidget_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return C.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QWidget ```
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ``` self: ?*C.QTreeWidget, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ``` self: ?*C.QTreeWidget, disabled: bool ```
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        C.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ``` self: ?*C.QTreeWidget, windowModified: bool ```
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        C.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn FrameGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Geometry(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn NormalGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn X(self: ?*anyopaque) i32 {
        return C.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Y(self: ?*anyopaque) i32 {
        return C.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Pos(self: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn FrameSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Size(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Width(self: ?*anyopaque) i32 {
        return C.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Height(self: ?*anyopaque) i32 {
        return C.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Rect(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ChildrenRect(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ChildrenRegion(self: ?*anyopaque) ?*C.QRegion {
        return C.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn MinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn MaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return C.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return C.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return C.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return C.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: ?*C.QTreeWidget, minimumSize: ?*C.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        C.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: ?*C.QTreeWidget, minw: i32, minh: i32 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        C.QWidget_SetMinimumSize2(@ptrCast(self), @intCast(minw), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: ?*C.QTreeWidget, maximumSize: ?*C.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        C.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: ?*C.QTreeWidget, maxw: i32, maxh: i32 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        C.QWidget_SetMaximumSize2(@ptrCast(self), @intCast(maxw), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ``` self: ?*C.QTreeWidget, minw: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        C.QWidget_SetMinimumWidth(@ptrCast(self), @intCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ``` self: ?*C.QTreeWidget, minh: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        C.QWidget_SetMinimumHeight(@ptrCast(self), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ``` self: ?*C.QTreeWidget, maxw: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        C.QWidget_SetMaximumWidth(@ptrCast(self), @intCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ``` self: ?*C.QTreeWidget, maxh: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        C.QWidget_SetMaximumHeight(@ptrCast(self), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn SizeIncrement(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: ?*C.QTreeWidget, sizeIncrement: ?*C.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        C.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: ?*C.QTreeWidget, w: i32, h: i32 ```
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        C.QWidget_SetSizeIncrement2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn BaseSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: ?*C.QTreeWidget, baseSize: ?*C.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        C.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: ?*C.QTreeWidget, basew: i32, baseh: i32 ```
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        C.QWidget_SetBaseSize2(@ptrCast(self), @intCast(basew), @intCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: ?*C.QTreeWidget, fixedSize: ?*C.QSize ```
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        C.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: ?*C.QTreeWidget, w: i32, h: i32 ```
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        C.QWidget_SetFixedSize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ``` self: ?*C.QTreeWidget, w: i32 ```
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        C.QWidget_SetFixedWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ``` self: ?*C.QTreeWidget, h: i32 ```
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        C.QWidget_SetFixedHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QPoint ```
    pub fn MapToGlobalWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapToGlobalWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QPoint ```
    pub fn MapFromGlobalWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapFromGlobalWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QPoint ```
    pub fn MapToParentWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapToParentWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QPoint ```
    pub fn MapFromParentWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapFromParentWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QWidget, param2: ?*C.QPointF ```
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QWidget, param2: ?*C.QPoint ```
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QWidget, param2: ?*C.QPointF ```
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QWidget, param2: ?*C.QPoint ```
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Window(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn NativeParentWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn TopLevelWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Palette(self: ?*anyopaque) ?*C.QPalette {
        return C.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ``` self: ?*C.QTreeWidget, palette: ?*C.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        C.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ``` self: ?*C.QTreeWidget, backgroundRole: qpalette_enums.ColorRole ```
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i64) void {
        C.QWidget_SetBackgroundRole(@ptrCast(self), @intCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn BackgroundRole(self: ?*anyopaque) i64 {
        return C.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ``` self: ?*C.QTreeWidget, foregroundRole: qpalette_enums.ColorRole ```
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i64) void {
        C.QWidget_SetForegroundRole(@ptrCast(self), @intCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ForegroundRole(self: ?*anyopaque) i64 {
        return C.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Font(self: ?*anyopaque) ?*C.QFont {
        return C.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ``` self: ?*C.QTreeWidget, font: ?*C.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        C.QWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn FontMetrics(self: ?*anyopaque) ?*C.QFontMetrics {
        return C.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn FontInfo(self: ?*anyopaque) ?*C.QFontInfo {
        return C.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Cursor(self: ?*anyopaque) ?*C.QCursor {
        return C.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ``` self: ?*C.QTreeWidget, cursor: ?*C.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        C.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        C.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ``` self: ?*C.QTreeWidget, enable: bool ```
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        C.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return C.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return C.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ``` self: ?*C.QTreeWidget, enable: bool ```
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        C.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return C.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: ?*C.QTreeWidget, mask: ?*C.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        C.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: ?*C.QTreeWidget, mask: ?*C.QRegion ```
    pub fn SetMaskWithMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        C.QWidget_SetMaskWithMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Mask(self: ?*anyopaque) ?*C.QRegion {
        return C.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ClearMask(self: ?*anyopaque) void {
        C.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QTreeWidget, target: ?*C.QPaintDevice ```
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        C.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QTreeWidget, painter: ?*C.QPainter ```
    pub fn RenderWithPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        C.QWidget_RenderWithPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Grab(self: ?*anyopaque) ?*C.QPixmap {
        return C.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn GraphicsEffect(self: ?*anyopaque) ?*C.QGraphicsEffect {
        return C.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ``` self: ?*C.QTreeWidget, effect: ?*C.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        C.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: ?*C.QTreeWidget, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        C.QWidget_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ``` self: ?*C.QTreeWidget, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        C.QWidget_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ``` self: ?*C.QTreeWidget, windowTitle: []const u8 ```
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
    /// ``` self: ?*C.QTreeWidget, styleSheet: []const u8 ```
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
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTreeWidget, icon: ?*C.QIcon ```
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        C.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn WindowIcon(self: ?*anyopaque) ?*C.QIcon {
        return C.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ``` self: ?*C.QTreeWidget, windowIconText: []const u8 ```
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
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTreeWidget, windowRole: []const u8 ```
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
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTreeWidget, filePath: []const u8 ```
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
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTreeWidget, level: f64 ```
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        C.QWidget_SetWindowOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return C.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return C.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ``` self: ?*C.QTreeWidget, toolTip: []const u8 ```
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
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTreeWidget, msec: i32 ```
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        C.QWidget_SetToolTipDuration(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return C.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ``` self: ?*C.QTreeWidget, statusTip: []const u8 ```
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
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTreeWidget, whatsThis: []const u8 ```
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
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTreeWidget, name: []const u8 ```
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
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTreeWidget, description: []const u8 ```
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
    /// ``` self: ?*C.QTreeWidget, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        C.QWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return C.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        C.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ``` self: ?*C.QTreeWidget, locale: ?*C.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        C.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Locale(self: ?*anyopaque) ?*C.QLocale {
        return C.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn UnsetLocale(self: ?*anyopaque) void {
        C.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return C.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return C.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn SetFocus(self: ?*anyopaque) void {
        C.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return C.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ActivateWindow(self: ?*anyopaque) void {
        C.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        C.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: ?*C.QTreeWidget, reason: qnamespace_enums.FocusReason ```
    pub fn SetFocusWithReason(self: ?*anyopaque, reason: i64) void {
        C.QWidget_SetFocusWithReason(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn FocusPolicy(self: ?*anyopaque) i64 {
        return C.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ``` self: ?*C.QTreeWidget, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i64) void {
        C.QWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ``` self: ?*C.QTreeWidget ```
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
    /// ``` self: ?*C.QTreeWidget, focusProxy: ?*C.QWidget ```
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        C.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn FocusProxy(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ContextMenuPolicy(self: ?*anyopaque) i64 {
        return C.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ``` self: ?*C.QTreeWidget, policy: qnamespace_enums.ContextMenuPolicy ```
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i64) void {
        C.QWidget_SetContextMenuPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        C.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QCursor ```
    pub fn GrabMouseWithQCursor(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_GrabMouseWithQCursor(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        C.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        C.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        C.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: ?*C.QTreeWidget, key: ?*C.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return C.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ``` self: ?*C.QTreeWidget, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        C.QWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: ?*C.QTreeWidget, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        C.QWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: ?*C.QTreeWidget, id: i32 ```
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
    /// ``` self: ?*C.QTreeWidget ```
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return C.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ``` self: ?*C.QTreeWidget, enable: bool ```
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        C.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn GraphicsProxyWidget(self: ?*anyopaque) ?*C.QGraphicsProxyWidget {
        return C.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Repaint(self: ?*anyopaque) void {
        C.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: ?*C.QTreeWidget, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        C.QWidget_Update2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QRect ```
    pub fn UpdateWithQRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_UpdateWithQRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QRegion ```
    pub fn UpdateWithQRegion(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_UpdateWithQRegion(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: ?*C.QTreeWidget, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        C.QWidget_Repaint2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QRect ```
    pub fn RepaintWithQRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_RepaintWithQRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QRegion ```
    pub fn RepaintWithQRegion(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_RepaintWithQRegion(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ``` self: ?*C.QTreeWidget, hidden: bool ```
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        C.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Show(self: ?*anyopaque) void {
        C.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Hide(self: ?*anyopaque) void {
        C.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        C.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        C.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        C.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        C.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Close(self: ?*anyopaque) bool {
        return C.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Raise(self: ?*anyopaque) void {
        C.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Lower(self: ?*anyopaque) void {
        C.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QWidget ```
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: ?*C.QTreeWidget, x: i32, y: i32 ```
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        C.QWidget_Move(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QPoint ```
    pub fn MoveWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_MoveWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: ?*C.QTreeWidget, w: i32, h: i32 ```
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        C.QWidget_Resize(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QSize ```
    pub fn ResizeWithQSize(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_ResizeWithQSize(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: ?*C.QTreeWidget, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        C.QWidget_SetGeometry(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: ?*C.QTreeWidget, geometry: ?*C.QRect ```
    pub fn SetGeometryWithGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        C.QWidget_SetGeometryWithGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTreeWidget, geometry: []u8 ```
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
    /// ``` self: ?*C.QTreeWidget ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        C.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return C.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QWidget ```
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return C.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return C.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return C.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return C.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn WindowState(self: ?*anyopaque) i64 {
        return C.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ``` self: ?*C.QTreeWidget, state: i32 ```
    pub fn SetWindowState(self: ?*anyopaque, state: i64) void {
        C.QWidget_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ``` self: ?*C.QTreeWidget, state: i32 ```
    pub fn OverrideWindowState(self: ?*anyopaque, state: i64) void {
        C.QWidget_OverrideWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn SizePolicy(self: ?*anyopaque) ?*C.QSizePolicy {
        return C.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: ?*C.QTreeWidget, sizePolicy: ?*C.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: ?*C.QSizePolicy) void {
        C.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: ?*C.QTreeWidget, horizontal: qsizepolicy_enums.Policy, vertical: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i64, vertical: i64) void {
        C.QWidget_SetSizePolicy2(@ptrCast(self), @intCast(horizontal), @intCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn VisibleRegion(self: ?*anyopaque) ?*C.QRegion {
        return C.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QTreeWidget, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        C.QWidget_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QTreeWidget, margins: ?*C.QMargins ```
    pub fn SetContentsMarginsWithMargins(self: ?*anyopaque, margins: ?*anyopaque) void {
        C.QWidget_SetContentsMarginsWithMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ContentsMargins(self: ?*anyopaque) ?*C.QMargins {
        return C.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ContentsRect(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Layout(self: ?*anyopaque) ?*C.QLayout {
        return C.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ``` self: ?*C.QTreeWidget, layout: ?*C.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        C.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        C.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: ?*C.QTreeWidget, parent: ?*C.QWidget ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: ?*C.QTreeWidget, parent: ?*C.QWidget, f: i32 ```
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i64) void {
        C.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @intCast(f));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: ?*C.QTreeWidget, dx: i32, dy: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        C.QWidget_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: ?*C.QTreeWidget, dx: i32, dy: i32, param3: ?*C.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        C.QWidget_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn FocusWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn NextInFocusChain(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn PreviousInFocusChain(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return C.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ``` self: ?*C.QTreeWidget, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        C.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: ?*C.QTreeWidget, action: ?*C.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        C.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ``` self: ?*C.QTreeWidget, actions: []?*C.QAction ```
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
    /// ``` self: ?*C.QTreeWidget, before: ?*C.QAction, actions: []?*C.QAction ```
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
    /// ``` self: ?*C.QTreeWidget, before: ?*C.QAction, action: ?*C.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        C.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ``` self: ?*C.QTreeWidget, action: ?*C.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        C.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTreeWidget, text: []const u8 ```
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
    /// ``` self: ?*C.QTreeWidget, icon: ?*C.QIcon, text: []const u8 ```
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
    /// ``` self: ?*C.QTreeWidget, text: []const u8, shortcut: ?*C.QKeySequence ```
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
    /// ``` self: ?*C.QTreeWidget, icon: ?*C.QIcon, text: []const u8, shortcut: ?*C.QKeySequence ```
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
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ParentWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ``` self: ?*C.QTreeWidget, typeVal: i32 ```
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        C.QWidget_SetWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return C.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: qnamespace_enums.WindowType ```
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i64) void {
        C.QWidget_SetWindowFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ``` self: ?*C.QTreeWidget, typeVal: i32 ```
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        C.QWidget_OverrideWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ``` self: ?*C.QTreeWidget ```
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
    /// ``` self: ?*C.QTreeWidget, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) ?*C.QWidget {
        return C.QWidget_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: ?*C.QTreeWidget, p: ?*C.QPoint ```
    pub fn ChildAtWithQPoint(self: ?*anyopaque, p: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_ChildAtWithQPoint(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, param1: i64) void {
        C.QWidget_SetAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, param1: i64) bool {
        return C.QWidget_TestAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn EnsurePolished(self: ?*anyopaque) void {
        C.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ``` self: ?*C.QTreeWidget, child: ?*C.QWidget ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return C.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return C.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ``` self: ?*C.QTreeWidget, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        C.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn BackingStore(self: ?*anyopaque) ?*C.QBackingStore {
        return C.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn WindowHandle(self: ?*anyopaque) ?*C.QWindow {
        return C.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Screen(self: ?*anyopaque) ?*C.QScreen {
        return C.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ``` self: ?*C.QTreeWidget, screen: ?*C.QScreen ```
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
    /// ``` self: ?*C.QTreeWidget, title: []const u8 ```
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
    /// ``` self: ?*C.QTreeWidget, icon: ?*C.QIcon ```
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
    /// ``` self: ?*C.QTreeWidget, iconText: []const u8 ```
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
    /// ``` self: ?*C.QTreeWidget, pos: ?*C.QPoint ```
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
    /// ``` self: ?*C.QTreeWidget ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return C.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ``` self: ?*C.QTreeWidget, hints: i32 ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        C.QWidget_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QTreeWidget, target: ?*C.QPaintDevice, targetOffset: ?*C.QPoint ```
    pub fn Render2(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        C.QWidget_Render2(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QTreeWidget, target: ?*C.QPaintDevice, targetOffset: ?*C.QPoint, sourceRegion: ?*C.QRegion ```
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        C.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QTreeWidget, target: ?*C.QPaintDevice, targetOffset: ?*C.QPoint, sourceRegion: ?*C.QRegion, renderFlags: i32 ```
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i64) void {
        C.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QTreeWidget, painter: ?*C.QPainter, targetOffset: ?*C.QPoint ```
    pub fn Render22(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        C.QWidget_Render22(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QTreeWidget, painter: ?*C.QPainter, targetOffset: ?*C.QPoint, sourceRegion: ?*C.QRegion ```
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        C.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QTreeWidget, painter: ?*C.QPainter, targetOffset: ?*C.QPoint, sourceRegion: ?*C.QRegion, renderFlags: i32 ```
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i64) void {
        C.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: ?*C.QTreeWidget, rectangle: ?*C.QRect ```
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) ?*C.QPixmap {
        return C.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: ?*C.QTreeWidget, typeVal: qnamespace_enums.GestureType, flags: i32 ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i64) void {
        C.QWidget_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: ?*C.QTreeWidget, key: ?*C.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i64) i32 {
        return C.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @intCast(context));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: ?*C.QTreeWidget, id: i32, enable: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        C.QWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: ?*C.QTreeWidget, id: i32, enable: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        C.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        C.QWidget_SetWindowFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: qnamespace_enums.WidgetAttribute, on: bool ```
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
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTreeWidget, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QTreeWidget, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QTreeWidget, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QTreeWidget, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QTreeWidget, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTreeWidget, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QTreeWidget, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QTreeWidget, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QTreeWidget ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QTreeWidget, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QTreeWidget, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTreeWidget ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QTreeWidget ```
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
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QTreeWidget, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QTreeWidget, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QTreeWidget, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QObject ```
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
    /// ``` self: ?*C.QTreeWidget ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return C.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return C.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return C.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return C.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return C.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return C.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return C.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return C.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return C.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return C.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: ?*C.QTreeWidget ```
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

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRootIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn SetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QTreeWidget_SetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn QBaseSetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QTreeWidget_QBaseSetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnSetRootIndex(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnSetRootIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#keyboardSearch)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, search: []const u8 ```
    pub fn KeyboardSearch(self: ?*anyopaque, search: []const u8) void {
        const search_str = C.struct_libqt_string{
            .len = search.len,
            .data = @constCast(search.ptr),
        };
        C.QTreeWidget_KeyboardSearch(@ptrCast(self), search_str);
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, search: []const u8 ```
    pub fn QBaseKeyboardSearch(self: ?*anyopaque, search: []const u8) void {
        const search_str = C.struct_libqt_string{
            .len = search.len,
            .data = @constCast(search.ptr),
        };
        C.QTreeWidget_QBaseKeyboardSearch(@ptrCast(self), search_str);
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, []const u8) callconv(.c) void ```
    pub fn OnKeyboardSearch(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QTreeWidget_OnKeyboardSearch(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#visualRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn VisualRect(self: ?*anyopaque, index: ?*anyopaque) ?*C.QRect {
        return C.QTreeWidget_VisualRect(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn QBaseVisualRect(self: ?*anyopaque, index: ?*anyopaque) ?*C.QRect {
        return C.QTreeWidget_QBaseVisualRect(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QModelIndex) callconv(.c) ?*C.QRect ```
    pub fn OnVisualRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QRect) void {
        C.QTreeWidget_OnVisualRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#scrollTo)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex, hint: qabstractitemview_enums.ScrollHint ```
    pub fn ScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i64) void {
        C.QTreeWidget_ScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex, hint: qabstractitemview_enums.ScrollHint ```
    pub fn QBaseScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i64) void {
        C.QTreeWidget_QBaseScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QModelIndex, qabstractitemview_enums.ScrollHint) callconv(.c) void ```
    pub fn OnScrollTo(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) void) void {
        C.QTreeWidget_OnScrollTo(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, p: ?*C.QPoint ```
    pub fn IndexAt(self: ?*anyopaque, p: ?*anyopaque) ?*C.QModelIndex {
        return C.QTreeWidget_IndexAt(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, p: ?*C.QPoint ```
    pub fn QBaseIndexAt(self: ?*anyopaque, p: ?*anyopaque) ?*C.QModelIndex {
        return C.QTreeWidget_QBaseIndexAt(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QPoint) callconv(.c) ?*C.QModelIndex ```
    pub fn OnIndexAt(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QModelIndex) void {
        C.QTreeWidget_OnIndexAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#doItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn DoItemsLayout(self: ?*anyopaque) void {
        C.QTreeWidget_DoItemsLayout(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseDoItemsLayout(self: ?*anyopaque) void {
        C.QTreeWidget_QBaseDoItemsLayout(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) void ```
    pub fn OnDoItemsLayout(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTreeWidget_OnDoItemsLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Reset(self: ?*anyopaque) void {
        C.QTreeWidget_Reset(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseReset(self: ?*anyopaque) void {
        C.QTreeWidget_QBaseReset(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) void ```
    pub fn OnReset(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTreeWidget_OnReset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dataChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, topLeft: ?*C.QModelIndex, bottomRight: ?*C.QModelIndex, roles: []i32 ```
    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = C.struct_libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        C.QTreeWidget_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, topLeft: ?*C.QModelIndex, bottomRight: ?*C.QModelIndex, roles: []i32 ```
    pub fn QBaseDataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = C.struct_libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        C.QTreeWidget_QBaseDataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QModelIndex, ?*C.QModelIndex, []i32) callconv(.c) void ```
    pub fn OnDataChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, []i32) callconv(.c) void) void {
        C.QTreeWidget_OnDataChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectAll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn SelectAll(self: ?*anyopaque) void {
        C.QTreeWidget_SelectAll(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseSelectAll(self: ?*anyopaque) void {
        C.QTreeWidget_QBaseSelectAll(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) void ```
    pub fn OnSelectAll(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTreeWidget_OnSelectAll(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, value: i32 ```
    pub fn VerticalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        C.QTreeWidget_VerticalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, value: i32 ```
    pub fn QBaseVerticalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        C.QTreeWidget_QBaseVerticalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, i32) callconv(.c) void ```
    pub fn OnVerticalScrollbarValueChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QTreeWidget_OnVerticalScrollbarValueChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, dx: i32, dy: i32 ```
    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        C.QTreeWidget_ScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, dx: i32, dy: i32 ```
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        C.QTreeWidget_QBaseScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, i32, i32) callconv(.c) void ```
    pub fn OnScrollContentsBy(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QTreeWidget_OnScrollContentsBy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsInserted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, parent: ?*C.QModelIndex, start: i32, end: i32 ```
    pub fn RowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        C.QTreeWidget_RowsInserted(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, parent: ?*C.QModelIndex, start: i32, end: i32 ```
    pub fn QBaseRowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        C.QTreeWidget_QBaseRowsInserted(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QModelIndex, i32, i32) callconv(.c) void ```
    pub fn OnRowsInserted(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QTreeWidget_OnRowsInserted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, parent: ?*C.QModelIndex, start: i32, end: i32 ```
    pub fn RowsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        C.QTreeWidget_RowsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, parent: ?*C.QModelIndex, start: i32, end: i32 ```
    pub fn QBaseRowsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        C.QTreeWidget_QBaseRowsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QModelIndex, i32, i32) callconv(.c) void ```
    pub fn OnRowsAboutToBeRemoved(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QTreeWidget_OnRowsAboutToBeRemoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#moveCursor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, cursorAction: qabstractitemview_enums.CursorAction, modifiers: i32 ```
    pub fn MoveCursor(self: ?*anyopaque, cursorAction: i64, modifiers: i64) ?*C.QModelIndex {
        return C.QTreeWidget_MoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, cursorAction: qabstractitemview_enums.CursorAction, modifiers: i32 ```
    pub fn QBaseMoveCursor(self: ?*anyopaque, cursorAction: i64, modifiers: i64) ?*C.QModelIndex {
        return C.QTreeWidget_QBaseMoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, qabstractitemview_enums.CursorAction, i32) callconv(.c) ?*C.QModelIndex ```
    pub fn OnMoveCursor(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i64) callconv(.c) ?*C.QModelIndex) void {
        C.QTreeWidget_OnMoveCursor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#horizontalOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn HorizontalOffset(self: ?*anyopaque) i32 {
        return C.QTreeWidget_HorizontalOffset(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseHorizontalOffset(self: ?*anyopaque) i32 {
        return C.QTreeWidget_QBaseHorizontalOffset(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnHorizontalOffset(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QTreeWidget_OnHorizontalOffset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#verticalOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn VerticalOffset(self: ?*anyopaque) i32 {
        return C.QTreeWidget_VerticalOffset(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseVerticalOffset(self: ?*anyopaque) i32 {
        return C.QTreeWidget_QBaseVerticalOffset(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnVerticalOffset(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QTreeWidget_OnVerticalOffset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, rect: ?*C.QRect, command: i32 ```
    pub fn SetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i64) void {
        C.QTreeWidget_SetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, rect: ?*C.QRect, command: i32 ```
    pub fn QBaseSetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i64) void {
        C.QTreeWidget_QBaseSetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QRect, i32) callconv(.c) void ```
    pub fn OnSetSelection(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) void) void {
        C.QTreeWidget_OnSetSelection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, selection: ?*C.QItemSelection ```
    pub fn VisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) ?*C.QRegion {
        return C.QTreeWidget_VisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, selection: ?*C.QItemSelection ```
    pub fn QBaseVisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) ?*C.QRegion {
        return C.QTreeWidget_QBaseVisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QItemSelection) callconv(.c) ?*C.QRegion ```
    pub fn OnVisualRegionForSelection(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QRegion) void {
        C.QTreeWidget_OnVisualRegionForSelection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
    pub fn SelectedIndexes(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QTreeWidget_SelectedIndexes(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, allocator: std.mem.Allocator ```
    pub fn QBaseSelectedIndexes(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QTreeWidget_QBaseSelectedIndexes(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) []?*C.QModelIndex ```
    pub fn OnSelectedIndexes(self: ?*anyopaque, slot: fn () callconv(.c) []?*C.QModelIndex) void {
        C.QTreeWidget_OnSelectedIndexes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_ChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnChangeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_PaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBasePaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnPaintEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawRow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, painter: ?*C.QPainter, options: ?*C.QStyleOptionViewItem, index: ?*C.QModelIndex ```
    pub fn DrawRow(self: ?*anyopaque, painter: ?*anyopaque, options: ?*anyopaque, index: ?*anyopaque) void {
        C.QTreeWidget_DrawRow(@ptrCast(self), @ptrCast(painter), @ptrCast(options), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, painter: ?*C.QPainter, options: ?*C.QStyleOptionViewItem, index: ?*C.QModelIndex ```
    pub fn QBaseDrawRow(self: ?*anyopaque, painter: ?*anyopaque, options: ?*anyopaque, index: ?*anyopaque) void {
        C.QTreeWidget_QBaseDrawRow(@ptrCast(self), @ptrCast(painter), @ptrCast(options), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QPainter, ?*C.QStyleOptionViewItem, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnDrawRow(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnDrawRow(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawBranches)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, painter: ?*C.QPainter, rect: ?*C.QRect, index: ?*C.QModelIndex ```
    pub fn DrawBranches(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, index: ?*anyopaque) void {
        C.QTreeWidget_DrawBranches(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, painter: ?*C.QPainter, rect: ?*C.QRect, index: ?*C.QModelIndex ```
    pub fn QBaseDrawBranches(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, index: ?*anyopaque) void {
        C.QTreeWidget_QBaseDrawBranches(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QPainter, ?*C.QRect, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnDrawBranches(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnDrawBranches(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QDragMoveEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QDragMoveEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QDragMoveEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnDragMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QEvent ```
    pub fn ViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTreeWidget_ViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QEvent ```
    pub fn QBaseViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTreeWidget_QBaseViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnViewportEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTreeWidget_OnViewportEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#updateGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn UpdateGeometries(self: ?*anyopaque) void {
        C.QTreeWidget_UpdateGeometries(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseUpdateGeometries(self: ?*anyopaque) void {
        C.QTreeWidget_QBaseUpdateGeometries(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) void ```
    pub fn OnUpdateGeometries(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTreeWidget_OnUpdateGeometries(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ViewportSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QTreeWidget_ViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseViewportSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QTreeWidget_QBaseViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnViewportSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QTreeWidget_OnViewportSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, column: i32 ```
    pub fn SizeHintForColumn(self: ?*anyopaque, column: i32) i32 {
        return C.QTreeWidget_SizeHintForColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, column: i32 ```
    pub fn QBaseSizeHintForColumn(self: ?*anyopaque, column: i32) i32 {
        return C.QTreeWidget_QBaseSizeHintForColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, i32) callconv(.c) i32 ```
    pub fn OnSizeHintForColumn(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QTreeWidget_OnSizeHintForColumn(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, action: i32 ```
    pub fn HorizontalScrollbarAction(self: ?*anyopaque, action: i32) void {
        C.QTreeWidget_HorizontalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, action: i32 ```
    pub fn QBaseHorizontalScrollbarAction(self: ?*anyopaque, action: i32) void {
        C.QTreeWidget_QBaseHorizontalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, i32) callconv(.c) void ```
    pub fn OnHorizontalScrollbarAction(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QTreeWidget_OnHorizontalScrollbarAction(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isIndexHidden)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn IsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return C.QTreeWidget_IsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn QBaseIsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return C.QTreeWidget_QBaseIsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnIsIndexHidden(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTreeWidget_OnIsIndexHidden(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectionChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, selected: ?*C.QItemSelection, deselected: ?*C.QItemSelection ```
    pub fn SelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        C.QTreeWidget_SelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, selected: ?*C.QItemSelection, deselected: ?*C.QItemSelection ```
    pub fn QBaseSelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        C.QTreeWidget_QBaseSelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QItemSelection, ?*C.QItemSelection) callconv(.c) void ```
    pub fn OnSelectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnSelectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#currentChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, current: ?*C.QModelIndex, previous: ?*C.QModelIndex ```
    pub fn CurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        C.QTreeWidget_CurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, current: ?*C.QModelIndex, previous: ?*C.QModelIndex ```
    pub fn QBaseCurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        C.QTreeWidget_QBaseCurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QModelIndex, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnCurrentChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnCurrentChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, row: i32 ```
    pub fn SizeHintForRow(self: ?*anyopaque, row: i32) i32 {
        return C.QTreeWidget_SizeHintForRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, row: i32 ```
    pub fn QBaseSizeHintForRow(self: ?*anyopaque, row: i32) i32 {
        return C.QTreeWidget_QBaseSizeHintForRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, i32) callconv(.c) i32 ```
    pub fn OnSizeHintForRow(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QTreeWidget_OnSizeHintForRow(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn ItemDelegateForIndex(self: ?*anyopaque, index: ?*anyopaque) ?*C.QAbstractItemDelegate {
        return C.QTreeWidget_ItemDelegateForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn QBaseItemDelegateForIndex(self: ?*anyopaque, index: ?*anyopaque) ?*C.QAbstractItemDelegate {
        return C.QTreeWidget_QBaseItemDelegateForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QModelIndex) callconv(.c) ?*C.QAbstractItemDelegate ```
    pub fn OnItemDelegateForIndex(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QAbstractItemDelegate) void {
        C.QTreeWidget_OnItemDelegateForIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, query: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, query: i64) ?*C.QVariant {
        return C.QTreeWidget_InputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, query: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, query: i64) ?*C.QVariant {
        return C.QTreeWidget_QBaseInputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, qnamespace_enums.InputMethodQuery) callconv(.c) ?*C.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) ?*C.QVariant) void {
        C.QTreeWidget_OnInputMethodQuery(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn UpdateEditorData(self: ?*anyopaque) void {
        C.QTreeWidget_UpdateEditorData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseUpdateEditorData(self: ?*anyopaque) void {
        C.QTreeWidget_QBaseUpdateEditorData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) void ```
    pub fn OnUpdateEditorData(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTreeWidget_OnUpdateEditorData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn UpdateEditorGeometries(self: ?*anyopaque) void {
        C.QTreeWidget_UpdateEditorGeometries(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseUpdateEditorGeometries(self: ?*anyopaque) void {
        C.QTreeWidget_QBaseUpdateEditorGeometries(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) void ```
    pub fn OnUpdateEditorGeometries(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTreeWidget_OnUpdateEditorGeometries(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, action: i32 ```
    pub fn VerticalScrollbarAction(self: ?*anyopaque, action: i32) void {
        C.QTreeWidget_VerticalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, action: i32 ```
    pub fn QBaseVerticalScrollbarAction(self: ?*anyopaque, action: i32) void {
        C.QTreeWidget_QBaseVerticalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, i32) callconv(.c) void ```
    pub fn OnVerticalScrollbarAction(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QTreeWidget_OnVerticalScrollbarAction(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, value: i32 ```
    pub fn HorizontalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        C.QTreeWidget_HorizontalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, value: i32 ```
    pub fn QBaseHorizontalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        C.QTreeWidget_QBaseHorizontalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, i32) callconv(.c) void ```
    pub fn OnHorizontalScrollbarValueChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QTreeWidget_OnHorizontalScrollbarValueChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, editor: ?*C.QWidget, hint: qabstractitemdelegate_enums.EndEditHint ```
    pub fn CloseEditor(self: ?*anyopaque, editor: ?*anyopaque, hint: i64) void {
        C.QTreeWidget_CloseEditor(@ptrCast(self), @ptrCast(editor), @intCast(hint));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, editor: ?*C.QWidget, hint: qabstractitemdelegate_enums.EndEditHint ```
    pub fn QBaseCloseEditor(self: ?*anyopaque, editor: ?*anyopaque, hint: i64) void {
        C.QTreeWidget_QBaseCloseEditor(@ptrCast(self), @ptrCast(editor), @intCast(hint));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QWidget, qabstractitemdelegate_enums.EndEditHint) callconv(.c) void ```
    pub fn OnCloseEditor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) void) void {
        C.QTreeWidget_OnCloseEditor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, editor: ?*C.QWidget ```
    pub fn CommitData(self: ?*anyopaque, editor: ?*anyopaque) void {
        C.QTreeWidget_CommitData(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, editor: ?*C.QWidget ```
    pub fn QBaseCommitData(self: ?*anyopaque, editor: ?*anyopaque) void {
        C.QTreeWidget_QBaseCommitData(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QWidget) callconv(.c) void ```
    pub fn OnCommitData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnCommitData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, editor: ?*C.QObject ```
    pub fn EditorDestroyed(self: ?*anyopaque, editor: ?*anyopaque) void {
        C.QTreeWidget_EditorDestroyed(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, editor: ?*C.QObject ```
    pub fn QBaseEditorDestroyed(self: ?*anyopaque, editor: ?*anyopaque) void {
        C.QTreeWidget_QBaseEditorDestroyed(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QObject) callconv(.c) void ```
    pub fn OnEditorDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnEditorDestroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: ?*C.QEvent ```
    pub fn Edit2(self: ?*anyopaque, index: ?*anyopaque, trigger: i64, event: ?*anyopaque) bool {
        return C.QTreeWidget_Edit2(@ptrCast(self), @ptrCast(index), @intCast(trigger), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: ?*C.QEvent ```
    pub fn QBaseEdit2(self: ?*anyopaque, index: ?*anyopaque, trigger: i64, event: ?*anyopaque) bool {
        return C.QTreeWidget_QBaseEdit2(@ptrCast(self), @ptrCast(index), @intCast(trigger), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QModelIndex, qabstractitemview_enums.EditTrigger, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEdit2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64, ?*anyopaque) callconv(.c) bool) void {
        C.QTreeWidget_OnEdit2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex, event: ?*C.QEvent ```
    pub fn SelectionCommand(self: ?*anyopaque, index: ?*anyopaque, event: ?*anyopaque) i64 {
        return C.QTreeWidget_SelectionCommand(@ptrCast(self), @ptrCast(index), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex, event: ?*C.QEvent ```
    pub fn QBaseSelectionCommand(self: ?*anyopaque, index: ?*anyopaque, event: ?*anyopaque) i64 {
        return C.QTreeWidget_QBaseSelectionCommand(@ptrCast(self), @ptrCast(index), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QModelIndex, ?*C.QEvent) callconv(.c) i64 ```
    pub fn OnSelectionCommand(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i64) void {
        C.QTreeWidget_OnSelectionCommand(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, supportedActions: i32 ```
    pub fn StartDrag(self: ?*anyopaque, supportedActions: i64) void {
        C.QTreeWidget_StartDrag(@ptrCast(self), @intCast(supportedActions));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, supportedActions: i32 ```
    pub fn QBaseStartDrag(self: ?*anyopaque, supportedActions: i64) void {
        C.QTreeWidget_QBaseStartDrag(@ptrCast(self), @intCast(supportedActions));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, i32) callconv(.c) void ```
    pub fn OnStartDrag(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QTreeWidget_OnStartDrag(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, option: ?*C.QStyleOptionViewItem ```
    pub fn InitViewItemOption(self: ?*anyopaque, option: ?*anyopaque) void {
        C.QTreeWidget_InitViewItemOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, option: ?*C.QStyleOptionViewItem ```
    pub fn QBaseInitViewItemOption(self: ?*anyopaque, option: ?*anyopaque) void {
        C.QTreeWidget_QBaseInitViewItemOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QStyleOptionViewItem) callconv(.c) void ```
    pub fn OnInitViewItemOption(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnInitViewItemOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return C.QTreeWidget_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return C.QTreeWidget_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) bool) void {
        C.QTreeWidget_OnFocusNextPrevChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QDragEnterEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QDragEnterEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QDragEnterEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnDragEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QDragLeaveEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QDragLeaveEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QDragLeaveEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnDragLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnResizeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnInputMethodEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, object: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTreeWidget_EventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, object: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTreeWidget_QBaseEventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTreeWidget_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn MinimumSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QTreeWidget_MinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QTreeWidget_QBaseMinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnMinimumSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QTreeWidget_OnMinimumSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn SizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QTreeWidget_SizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QTreeWidget_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QTreeWidget_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, viewport: ?*C.QWidget ```
    pub fn SetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        C.QTreeWidget_SetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, viewport: ?*C.QWidget ```
    pub fn QBaseSetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        C.QTreeWidget_QBaseSetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QWidget) callconv(.c) void ```
    pub fn OnSetupViewport(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnSetupViewport(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTreeWidget_WheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTreeWidget_QBaseWheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTreeWidget_ContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTreeWidget_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnContextMenuEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, option: ?*C.QStyleOptionFrame ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        C.QTreeWidget_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, option: ?*C.QStyleOptionFrame ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        C.QTreeWidget_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QStyleOptionFrame) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnInitStyleOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return C.QTreeWidget_DevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return C.QTreeWidget_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QTreeWidget_OnDevType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        C.QTreeWidget_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, visible: bool ```
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        C.QTreeWidget_QBaseSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, bool) callconv(.c) void ```
    pub fn OnSetVisible(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QTreeWidget_OnSetVisible(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QTreeWidget_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QTreeWidget_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QTreeWidget_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return C.QTreeWidget_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return C.QTreeWidget_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QTreeWidget_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn PaintEngine(self: ?*anyopaque) ?*C.QPaintEngine {
        return C.QTreeWidget_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBasePaintEngine(self: ?*anyopaque) ?*C.QPaintEngine {
        return C.QTreeWidget_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) ?*C.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QPaintEngine) void {
        C.QTreeWidget_OnPaintEngine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QEnterEvent ```
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QEnterEvent ```
    pub fn QBaseEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QEnterEvent) callconv(.c) void ```
    pub fn OnEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QEvent ```
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QEvent ```
    pub fn QBaseLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QEvent) callconv(.c) void ```
    pub fn OnLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnCloseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnTabletEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QActionEvent ```
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QActionEvent ```
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QActionEvent) callconv(.c) void ```
    pub fn OnActionEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnActionEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnShowEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnHideEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, eventType: []u8, message: ?*anyopaque, result: ?*isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: ?*anyopaque) bool {
        const eventType_str = C.struct_libqt_string{
            .len = eventType.len,
            .data = @constCast(eventType.ptr),
        };
        return C.QTreeWidget_NativeEvent(@ptrCast(self), eventType_str, message, @intCast(result));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, eventType: []u8, message: ?*anyopaque, result: ?*isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: ?*anyopaque) bool {
        const eventType_str = C.struct_libqt_string{
            .len = eventType.len,
            .data = @constCast(eventType.ptr),
        };
        return C.QTreeWidget_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @intCast(result));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, []u8, ?*anyopaque, ?*isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, []u8, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTreeWidget_OnNativeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i64) i32 {
        return C.QTreeWidget_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i64) i32 {
        return C.QTreeWidget_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i32) void {
        C.QTreeWidget_OnMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, painter: ?*C.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        C.QTreeWidget_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, painter: ?*C.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        C.QTreeWidget_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnInitPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, offset: ?*C.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) ?*C.QPaintDevice {
        return C.QTreeWidget_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, offset: ?*C.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) ?*C.QPaintDevice {
        return C.QTreeWidget_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QPoint) callconv(.c) ?*C.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QPaintDevice) void {
        C.QTreeWidget_OnRedirected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn SharedPainter(self: ?*anyopaque) ?*C.QPainter {
        return C.QTreeWidget_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) ?*C.QPainter {
        return C.QTreeWidget_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) ?*C.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QPainter) void {
        C.QTreeWidget_OnSharedPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTreeWidget_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTreeWidget_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTreeWidget_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTreeWidget_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTreeWidget_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnResized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, column: i32, oldSize: i32, newSize: i32 ```
    pub fn ColumnResized(self: ?*anyopaque, column: i32, oldSize: i32, newSize: i32) void {
        C.QTreeWidget_ColumnResized(@ptrCast(self), @intCast(column), @intCast(oldSize), @intCast(newSize));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, column: i32, oldSize: i32, newSize: i32 ```
    pub fn QBaseColumnResized(self: ?*anyopaque, column: i32, oldSize: i32, newSize: i32) void {
        C.QTreeWidget_QBaseColumnResized(@ptrCast(self), @intCast(column), @intCast(oldSize), @intCast(newSize));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, i32, i32, i32) callconv(.c) void ```
    pub fn OnColumnResized(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        C.QTreeWidget_OnColumnResized(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnCountChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, oldCount: i32, newCount: i32 ```
    pub fn ColumnCountChanged(self: ?*anyopaque, oldCount: i32, newCount: i32) void {
        C.QTreeWidget_ColumnCountChanged(@ptrCast(self), @intCast(oldCount), @intCast(newCount));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, oldCount: i32, newCount: i32 ```
    pub fn QBaseColumnCountChanged(self: ?*anyopaque, oldCount: i32, newCount: i32) void {
        C.QTreeWidget_QBaseColumnCountChanged(@ptrCast(self), @intCast(oldCount), @intCast(newCount));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, i32, i32) callconv(.c) void ```
    pub fn OnColumnCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QTreeWidget_OnColumnCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnMoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ColumnMoved(self: ?*anyopaque) void {
        C.QTreeWidget_ColumnMoved(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseColumnMoved(self: ?*anyopaque) void {
        C.QTreeWidget_QBaseColumnMoved(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) void ```
    pub fn OnColumnMoved(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTreeWidget_OnColumnMoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#reexpand)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Reexpand(self: ?*anyopaque) void {
        C.QTreeWidget_Reexpand(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseReexpand(self: ?*anyopaque) void {
        C.QTreeWidget_QBaseReexpand(@ptrCast(self));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) void ```
    pub fn OnReexpand(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTreeWidget_OnReexpand(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsRemoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, parent: ?*C.QModelIndex, first: i32, last: i32 ```
    pub fn RowsRemoved(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        C.QTreeWidget_RowsRemoved(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, parent: ?*C.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseRowsRemoved(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        C.QTreeWidget_QBaseRowsRemoved(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QModelIndex, i32, i32) callconv(.c) void ```
    pub fn OnRowsRemoved(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QTreeWidget_OnRowsRemoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawTree)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, painter: ?*C.QPainter, region: ?*C.QRegion ```
    pub fn DrawTree(self: ?*anyopaque, painter: ?*anyopaque, region: ?*anyopaque) void {
        C.QTreeWidget_DrawTree(@ptrCast(self), @ptrCast(painter), @ptrCast(region));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, painter: ?*C.QPainter, region: ?*C.QRegion ```
    pub fn QBaseDrawTree(self: ?*anyopaque, painter: ?*anyopaque, region: ?*anyopaque) void {
        C.QTreeWidget_QBaseDrawTree(@ptrCast(self), @ptrCast(painter), @ptrCast(region));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QPainter, ?*C.QRegion) callconv(.c) void ```
    pub fn OnDrawTree(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnDrawTree(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexRowSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn IndexRowSizeHint(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return C.QTreeWidget_IndexRowSizeHint(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn QBaseIndexRowSizeHint(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return C.QTreeWidget_QBaseIndexRowSizeHint(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QModelIndex) callconv(.c) i32 ```
    pub fn OnIndexRowSizeHint(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QTreeWidget_OnIndexRowSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTreeView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowHeight)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn RowHeight(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return C.QTreeWidget_RowHeight(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, index: ?*C.QModelIndex ```
    pub fn QBaseRowHeight(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return C.QTreeWidget_QBaseRowHeight(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QTreeView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QModelIndex) callconv(.c) i32 ```
    pub fn OnRowHeight(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QTreeWidget_OnRowHeight(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn State(self: ?*anyopaque) i64 {
        return C.QTreeWidget_State(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseState(self: ?*anyopaque) i64 {
        return C.QTreeWidget_QBaseState(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) i64 ```
    pub fn OnState(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QTreeWidget_OnState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, state: qabstractitemview_enums.State ```
    pub fn SetState(self: ?*anyopaque, state: i64) void {
        C.QTreeWidget_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, state: qabstractitemview_enums.State ```
    pub fn QBaseSetState(self: ?*anyopaque, state: i64) void {
        C.QTreeWidget_QBaseSetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, qabstractitemview_enums.State) callconv(.c) void ```
    pub fn OnSetState(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QTreeWidget_OnSetState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ScheduleDelayedItemsLayout(self: ?*anyopaque) void {
        C.QTreeWidget_ScheduleDelayedItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseScheduleDelayedItemsLayout(self: ?*anyopaque) void {
        C.QTreeWidget_QBaseScheduleDelayedItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) void ```
    pub fn OnScheduleDelayedItemsLayout(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTreeWidget_OnScheduleDelayedItemsLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ExecuteDelayedItemsLayout(self: ?*anyopaque) void {
        C.QTreeWidget_ExecuteDelayedItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseExecuteDelayedItemsLayout(self: ?*anyopaque) void {
        C.QTreeWidget_QBaseExecuteDelayedItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) void ```
    pub fn OnExecuteDelayedItemsLayout(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTreeWidget_OnExecuteDelayedItemsLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, region: ?*C.QRegion ```
    pub fn SetDirtyRegion(self: ?*anyopaque, region: ?*anyopaque) void {
        C.QTreeWidget_SetDirtyRegion(@ptrCast(self), @ptrCast(region));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, region: ?*C.QRegion ```
    pub fn QBaseSetDirtyRegion(self: ?*anyopaque, region: ?*anyopaque) void {
        C.QTreeWidget_QBaseSetDirtyRegion(@ptrCast(self), @ptrCast(region));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QRegion) callconv(.c) void ```
    pub fn OnSetDirtyRegion(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnSetDirtyRegion(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, dx: i32, dy: i32 ```
    pub fn ScrollDirtyRegion(self: ?*anyopaque, dx: i32, dy: i32) void {
        C.QTreeWidget_ScrollDirtyRegion(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, dx: i32, dy: i32 ```
    pub fn QBaseScrollDirtyRegion(self: ?*anyopaque, dx: i32, dy: i32) void {
        C.QTreeWidget_QBaseScrollDirtyRegion(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, i32, i32) callconv(.c) void ```
    pub fn OnScrollDirtyRegion(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QTreeWidget_OnScrollDirtyRegion(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn DirtyRegionOffset(self: ?*anyopaque) ?*C.QPoint {
        return C.QTreeWidget_DirtyRegionOffset(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseDirtyRegionOffset(self: ?*anyopaque) ?*C.QPoint {
        return C.QTreeWidget_QBaseDirtyRegionOffset(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) ?*C.QPoint ```
    pub fn OnDirtyRegionOffset(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QPoint) void {
        C.QTreeWidget_OnDirtyRegionOffset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn StartAutoScroll(self: ?*anyopaque) void {
        C.QTreeWidget_StartAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseStartAutoScroll(self: ?*anyopaque) void {
        C.QTreeWidget_QBaseStartAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) void ```
    pub fn OnStartAutoScroll(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTreeWidget_OnStartAutoScroll(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn StopAutoScroll(self: ?*anyopaque) void {
        C.QTreeWidget_StopAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseStopAutoScroll(self: ?*anyopaque) void {
        C.QTreeWidget_QBaseStopAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) void ```
    pub fn OnStopAutoScroll(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTreeWidget_OnStopAutoScroll(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn DoAutoScroll(self: ?*anyopaque) void {
        C.QTreeWidget_DoAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseDoAutoScroll(self: ?*anyopaque) void {
        C.QTreeWidget_QBaseDoAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) void ```
    pub fn OnDoAutoScroll(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTreeWidget_OnDoAutoScroll(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemView
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn DropIndicatorPosition(self: ?*anyopaque) i64 {
        return C.QTreeWidget_DropIndicatorPosition(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseDropIndicatorPosition(self: ?*anyopaque) i64 {
        return C.QTreeWidget_QBaseDropIndicatorPosition(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) i64 ```
    pub fn OnDropIndicatorPosition(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QTreeWidget_OnDropIndicatorPosition(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        C.QTreeWidget_SetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn QBaseSetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        C.QTreeWidget_QBaseSetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, i32, i32, i32, i32) callconv(.c) void ```
    pub fn OnSetViewportMargins(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        C.QTreeWidget_OnSetViewportMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn ViewportMargins(self: ?*anyopaque) ?*C.QMargins {
        return C.QTreeWidget_ViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseViewportMargins(self: ?*anyopaque) ?*C.QMargins {
        return C.QTreeWidget_QBaseViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) ?*C.QMargins ```
    pub fn OnViewportMargins(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QMargins) void {
        C.QTreeWidget_OnViewportMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QPainter ```
    pub fn DrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTreeWidget_DrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, param1: ?*C.QPainter ```
    pub fn QBaseDrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTreeWidget_QBaseDrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QPainter) callconv(.c) void ```
    pub fn OnDrawFrame(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTreeWidget_OnDrawFrame(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        C.QTreeWidget_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        C.QTreeWidget_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTreeWidget_OnUpdateMicroFocus(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Create(self: ?*anyopaque) void {
        C.QTreeWidget_Create(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseCreate(self: ?*anyopaque) void {
        C.QTreeWidget_QBaseCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) void ```
    pub fn OnCreate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTreeWidget_OnCreate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Destroy(self: ?*anyopaque) void {
        C.QTreeWidget_Destroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseDestroy(self: ?*anyopaque) void {
        C.QTreeWidget_QBaseDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) void ```
    pub fn OnDestroy(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTreeWidget_OnDestroy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return C.QTreeWidget_FocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseFocusNextChild(self: ?*anyopaque) bool {
        return C.QTreeWidget_QBaseFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) bool ```
    pub fn OnFocusNextChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QTreeWidget_OnFocusNextChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return C.QTreeWidget_FocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseFocusPreviousChild(self: ?*anyopaque) bool {
        return C.QTreeWidget_QBaseFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) bool ```
    pub fn OnFocusPreviousChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QTreeWidget_OnFocusPreviousChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QTreeWidget_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QTreeWidget_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QTreeWidget_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QTreeWidget_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QTreeWidget_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QTreeWidget_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QTreeWidget_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QTreeWidget_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QTreeWidget_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QTreeWidget_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QTreeWidget_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTreeWidget, slot: fn (?*C.QTreeWidget, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTreeWidget_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTreeWidget ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTreeWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtreewidget.html#types
pub const enums = struct {
    pub const ItemType = enum {
        pub const Type: i32 = 0;
        pub const UserType: i32 = 1000;
    };

    pub const ChildIndicatorPolicy = enum {
        pub const ShowIndicator: i32 = 0;
        pub const DontShowIndicator: i32 = 1;
        pub const DontShowIndicatorWhenChildless: i32 = 2;
    };
};
