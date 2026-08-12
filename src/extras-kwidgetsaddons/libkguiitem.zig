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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KGuiItem object in C++ memory
    ///
    pub fn new() KGuiItem {
        return .{ .ptr = qtc.KGuiItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KGuiItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    pub fn new2(_text: []const u8) KGuiItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.KGuiItem_new2(text_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KGuiItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn new3(_text: []const u8, _icon: anytype) KGuiItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_icon)._is_QIcon;
        return .{ .ptr = qtc.KGuiItem_new3(text_str, @ptrCast(_icon.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KGuiItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KGuiItem `
    ///
    pub fn new4(other: anytype) KGuiItem {
        comptime _ = @TypeOf(other)._is_KGuiItem;
        return .{ .ptr = qtc.KGuiItem_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KGuiItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _iconName: []const u8 `
    ///
    pub fn new5(_text: []const u8, _iconName: []const u8) KGuiItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = _iconName.len,
            .data = _iconName.ptr,
        };
        return .{ .ptr = qtc.KGuiItem_new5(text_str, iconName_str) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new KGuiItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _iconName: []const u8 `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn new6(_text: []const u8, _iconName: []const u8, _toolTip: []const u8) KGuiItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = _iconName.len,
            .data = _iconName.ptr,
        };
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        return .{ .ptr = qtc.KGuiItem_new6(text_str, iconName_str, toolTip_str) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new KGuiItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _iconName: []const u8 `
    ///
    /// ` _toolTip: []const u8 `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn new7(_text: []const u8, _iconName: []const u8, _toolTip: []const u8, _whatsThis: []const u8) KGuiItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = _iconName.len,
            .data = _iconName.ptr,
        };
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        const whatsThis_str = qtc.libqt_string{
            .len = _whatsThis.len,
            .data = _whatsThis.ptr,
        };
        return .{ .ptr = qtc.KGuiItem_new7(text_str, iconName_str, toolTip_str, whatsThis_str) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new KGuiItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _icon: QIcon `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn new8(_text: []const u8, _icon: anytype, _toolTip: []const u8) KGuiItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_icon)._is_QIcon;
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        return .{ .ptr = qtc.KGuiItem_new8(text_str, @ptrCast(_icon.ptr), toolTip_str) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new KGuiItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _icon: QIcon `
    ///
    /// ` _toolTip: []const u8 `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn new9(_text: []const u8, _icon: anytype, _toolTip: []const u8, _whatsThis: []const u8) KGuiItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_icon)._is_QIcon;
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        const whatsThis_str = qtc.libqt_string{
            .len = _whatsThis.len,
            .data = _whatsThis.ptr,
        };
        return .{ .ptr = qtc.KGuiItem_new9(text_str, @ptrCast(_icon.ptr), toolTip_str, whatsThis_str) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` other: KGuiItem `
    ///
    pub fn operatorAssign(self: KGuiItem, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KGuiItem;
        qtc.KGuiItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: KGuiItem, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.KGuiItem_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: KGuiItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KGuiItem_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KGuiItem.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `plainText` instead
    ///
    pub const PlainText = plainText;

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#plainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn plainText(self: KGuiItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KGuiItem_PlainText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KGuiItem.plainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` iconset: QIcon `
    ///
    pub fn setIcon(self: KGuiItem, iconset: anytype) void {
        comptime _ = @TypeOf(iconset)._is_QIcon;
        qtc.KGuiItem_SetIcon(@ptrCast(self.ptr), @ptrCast(iconset.ptr));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    pub fn icon(self: KGuiItem) QIcon {
        return .{ .ptr = qtc.KGuiItem_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIconName` instead
    ///
    pub const SetIconName = setIconName;

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#setIconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` _iconName: []const u8 `
    ///
    pub fn setIconName(self: KGuiItem, _iconName: []const u8) void {
        const iconName_str = qtc.libqt_string{
            .len = _iconName.len,
            .data = _iconName.ptr,
        };
        qtc.KGuiItem_SetIconName(@ptrCast(self.ptr), iconName_str);
    }

    /// ### DEPRECATED: Use `iconName` instead
    ///
    pub const IconName = iconName;

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconName(self: KGuiItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KGuiItem_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KGuiItem.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasIcon` instead
    ///
    pub const HasIcon = hasIcon;

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#hasIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    pub fn hasIcon(self: KGuiItem) bool {
        return qtc.KGuiItem_HasIcon(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` tooltip: []const u8 `
    ///
    pub fn setToolTip(self: KGuiItem, tooltip: []const u8) void {
        const tooltip_str = qtc.libqt_string{
            .len = tooltip.len,
            .data = tooltip.ptr,
        };
        qtc.KGuiItem_SetToolTip(@ptrCast(self.ptr), tooltip_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: KGuiItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KGuiItem_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KGuiItem.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWhatsThis` instead
    ///
    pub const SetWhatsThis = setWhatsThis;

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: KGuiItem, _whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = _whatsThis.len,
            .data = _whatsThis.ptr,
        };
        qtc.KGuiItem_SetWhatsThis(@ptrCast(self.ptr), whatsThis_str);
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: KGuiItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KGuiItem_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KGuiItem.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    /// ` enable: bool `
    ///
    pub fn setEnabled(self: KGuiItem, enable: bool) void {
        qtc.KGuiItem_SetEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGuiItem `
    ///
    pub fn isEnabled(self: KGuiItem) bool {
        return qtc.KGuiItem_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `assign` instead
    ///
    pub const Assign = assign;

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#assign)
    ///
    /// ## Parameter(s):
    ///
    /// ` button: QPushButton `
    ///
    /// ` item: KGuiItem `
    ///
    pub fn assign(button: anytype, item: anytype) void {
        comptime _ = @TypeOf(button)._is_QPushButton;
        comptime _ = @TypeOf(item)._is_KGuiItem;
        qtc.KGuiItem_Assign(@ptrCast(button.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kguiitem.html#dtor.KGuiItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KGuiItem `
    ///
    pub fn delete(self: KGuiItem) void {
        qtc.KGuiItem_Delete(@ptrCast(self.ptr));
    }
};
