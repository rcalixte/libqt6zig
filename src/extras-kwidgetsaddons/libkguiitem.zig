const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIcon = @import("libqt6").QIcon;
const QPushButton = @import("libqt6").QPushButton;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kguiitem.html)
pub const KGuiItem = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kguiitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KGuiItem,

    pub const _is_KGuiItem = {};

    /// New constructs a new KGuiItem object.
    ///
    pub fn New() KGuiItem {
        return .{ .ptr = qtc.KGuiItem_new() };
    }

    /// New2 constructs a new KGuiItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn New2(text: []const u8) KGuiItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.KGuiItem_new2(text_str) };
    }

    /// New3 constructs a new KGuiItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` icon: QIcon `
    ///
    pub fn New3(text: []const u8, icon: anytype) KGuiItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(icon)._is_QIcon;
        return .{ .ptr = qtc.KGuiItem_new3(text_str, @ptrCast(icon.ptr)) };
    }

    /// New4 constructs a new KGuiItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KGuiItem `
    ///
    pub fn New4(other: anytype) KGuiItem {
        comptime _ = @TypeOf(other)._is_KGuiItem;
        return .{ .ptr = qtc.KGuiItem_new4(@ptrCast(other.ptr)) };
    }

    /// New5 constructs a new KGuiItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` iconName: []const u8 `
    ///
    pub fn New5(text: []const u8, iconName: []const u8) KGuiItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        return .{ .ptr = qtc.KGuiItem_new5(text_str, iconName_str) };
    }

    /// New6 constructs a new KGuiItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn New6(text: []const u8, iconName: []const u8, toolTip: []const u8) KGuiItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        return .{ .ptr = qtc.KGuiItem_new6(text_str, iconName_str, toolTip_str) };
    }

    /// New7 constructs a new KGuiItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` toolTip: []const u8 `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn New7(text: []const u8, iconName: []const u8, toolTip: []const u8, whatsThis: []const u8) KGuiItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        return .{ .ptr = qtc.KGuiItem_new7(text_str, iconName_str, toolTip_str, whatsThis_str) };
    }

    /// New8 constructs a new KGuiItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` icon: QIcon `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn New8(text: []const u8, icon: anytype, toolTip: []const u8) KGuiItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(icon)._is_QIcon;
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        return .{ .ptr = qtc.KGuiItem_new8(text_str, @ptrCast(icon.ptr), toolTip_str) };
    }

    /// New9 constructs a new KGuiItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` icon: QIcon `
    ///
    /// ` toolTip: []const u8 `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn New9(text: []const u8, icon: anytype, toolTip: []const u8, whatsThis: []const u8) KGuiItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(icon)._is_QIcon;
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        return .{ .ptr = qtc.KGuiItem_new9(text_str, @ptrCast(icon.ptr), toolTip_str, whatsThis_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` other: KGuiItem `
    ///
    pub fn OperatorAssign(self: KGuiItem, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KGuiItem;
        qtc.KGuiItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: KGuiItem, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KGuiItem_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: KGuiItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KGuiItem_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kguiitem.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#plainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PlainText(self: KGuiItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KGuiItem_PlainText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kguiitem.PlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` iconset: QIcon `
    ///
    pub fn SetIcon(self: KGuiItem, iconset: anytype) void {
        comptime _ = @TypeOf(iconset)._is_QIcon;
        qtc.KGuiItem_SetIcon(@ptrCast(self.ptr), @ptrCast(iconset.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    pub fn Icon(self: KGuiItem) QIcon {
        return .{ .ptr = qtc.KGuiItem_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#setIconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` iconName: []const u8 `
    ///
    pub fn SetIconName(self: KGuiItem, iconName: []const u8) void {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        qtc.KGuiItem_SetIconName(@ptrCast(self.ptr), iconName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: KGuiItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KGuiItem_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kguiitem.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#hasIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    pub fn HasIcon(self: KGuiItem) bool {
        return qtc.KGuiItem_HasIcon(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` tooltip: []const u8 `
    ///
    pub fn SetToolTip(self: KGuiItem, tooltip: []const u8) void {
        const tooltip_str = qtc.libqt_string{
            .len = tooltip.len,
            .data = tooltip.ptr,
        };
        qtc.KGuiItem_SetToolTip(@ptrCast(self.ptr), tooltip_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KGuiItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KGuiItem_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kguiitem.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: KGuiItem, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.KGuiItem_SetWhatsThis(@ptrCast(self.ptr), whatsThis_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KGuiItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KGuiItem_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kguiitem.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` enable: bool `
    ///
    pub fn SetEnabled(self: KGuiItem, enable: bool) void {
        qtc.KGuiItem_SetEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    pub fn IsEnabled(self: KGuiItem) bool {
        return qtc.KGuiItem_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#assign)
    ///
    /// ## Parameter(s):
    ///
    /// ` button: QPushButton `
    ///
    /// ` item: KGuiItem `
    ///
    pub fn Assign(button: anytype, item: anytype) void {
        comptime _ = @TypeOf(button)._is_QPushButton;
        comptime _ = @TypeOf(item)._is_KGuiItem;
        qtc.KGuiItem_Assign(@ptrCast(button.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#dtor.KGuiItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KGuiItem `
    ///
    pub fn Delete(self: KGuiItem) void {
        qtc.KGuiItem_Delete(@ptrCast(self.ptr));
    }
};
