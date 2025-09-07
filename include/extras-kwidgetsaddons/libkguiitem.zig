const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kguiitem.html
pub const kguiitem = struct {
    /// New constructs a new KGuiItem object.
    ///
    ///
    pub fn New() QtC.KGuiItem {
        return qtc.KGuiItem_new();
    }

    /// New2 constructs a new KGuiItem object.
    ///
    /// ``` text: []const u8 ```
    pub fn New2(text: []const u8) QtC.KGuiItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.KGuiItem_new2(text_str);
    }

    /// New3 constructs a new KGuiItem object.
    ///
    /// ``` text: []const u8, icon: QtC.QIcon ```
    pub fn New3(text: []const u8, icon: ?*anyopaque) QtC.KGuiItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.KGuiItem_new3(text_str, @ptrCast(icon));
    }

    /// New4 constructs a new KGuiItem object.
    ///
    /// ``` other: QtC.KGuiItem ```
    pub fn New4(other: ?*anyopaque) QtC.KGuiItem {
        return qtc.KGuiItem_new4(@ptrCast(other));
    }

    /// New5 constructs a new KGuiItem object.
    ///
    /// ``` text: []const u8, iconName: []const u8 ```
    pub fn New5(text: []const u8, iconName: []const u8) QtC.KGuiItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };

        return qtc.KGuiItem_new5(text_str, iconName_str);
    }

    /// New6 constructs a new KGuiItem object.
    ///
    /// ``` text: []const u8, iconName: []const u8, toolTip: []const u8 ```
    pub fn New6(text: []const u8, iconName: []const u8, toolTip: []const u8) QtC.KGuiItem {
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

        return qtc.KGuiItem_new6(text_str, iconName_str, toolTip_str);
    }

    /// New7 constructs a new KGuiItem object.
    ///
    /// ``` text: []const u8, iconName: []const u8, toolTip: []const u8, whatsThis: []const u8 ```
    pub fn New7(text: []const u8, iconName: []const u8, toolTip: []const u8, whatsThis: []const u8) QtC.KGuiItem {
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

        return qtc.KGuiItem_new7(text_str, iconName_str, toolTip_str, whatsThis_str);
    }

    /// New8 constructs a new KGuiItem object.
    ///
    /// ``` text: []const u8, icon: QtC.QIcon, toolTip: []const u8 ```
    pub fn New8(text: []const u8, icon: ?*anyopaque, toolTip: []const u8) QtC.KGuiItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };

        return qtc.KGuiItem_new8(text_str, @ptrCast(icon), toolTip_str);
    }

    /// New9 constructs a new KGuiItem object.
    ///
    /// ``` text: []const u8, icon: QtC.QIcon, toolTip: []const u8, whatsThis: []const u8 ```
    pub fn New9(text: []const u8, icon: ?*anyopaque, toolTip: []const u8, whatsThis: []const u8) QtC.KGuiItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };

        return qtc.KGuiItem_new9(text_str, @ptrCast(icon), toolTip_str, whatsThis_str);
    }

    /// [Qt documentation](https://api.kde.org/kguiitem.html#operator-eq)
    ///
    /// ``` self: QtC.KGuiItem, other: QtC.KGuiItem ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KGuiItem_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kguiitem.html#setText)
    ///
    /// ``` self: QtC.KGuiItem, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KGuiItem_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://api.kde.org/kguiitem.html#text)
    ///
    /// ``` self: QtC.KGuiItem, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KGuiItem_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kguiitem.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kguiitem.html#plainText)
    ///
    /// ``` self: QtC.KGuiItem, allocator: std.mem.Allocator ```
    pub fn PlainText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KGuiItem_PlainText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kguiitem.PlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kguiitem.html#setIcon)
    ///
    /// ``` self: QtC.KGuiItem, iconset: QtC.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, iconset: ?*anyopaque) void {
        qtc.KGuiItem_SetIcon(@ptrCast(self), @ptrCast(iconset));
    }

    /// [Qt documentation](https://api.kde.org/kguiitem.html#icon)
    ///
    /// ``` self: QtC.KGuiItem ```
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.KGuiItem_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kguiitem.html#setIconName)
    ///
    /// ``` self: QtC.KGuiItem, iconName: []const u8 ```
    pub fn SetIconName(self: ?*anyopaque, iconName: []const u8) void {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        qtc.KGuiItem_SetIconName(@ptrCast(self), iconName_str);
    }

    /// [Qt documentation](https://api.kde.org/kguiitem.html#iconName)
    ///
    /// ``` self: QtC.KGuiItem, allocator: std.mem.Allocator ```
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KGuiItem_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kguiitem.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kguiitem.html#hasIcon)
    ///
    /// ``` self: QtC.KGuiItem ```
    pub fn HasIcon(self: ?*anyopaque) bool {
        return qtc.KGuiItem_HasIcon(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kguiitem.html#setToolTip)
    ///
    /// ``` self: QtC.KGuiItem, tooltip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, tooltip: []const u8) void {
        const tooltip_str = qtc.libqt_string{
            .len = tooltip.len,
            .data = tooltip.ptr,
        };
        qtc.KGuiItem_SetToolTip(@ptrCast(self), tooltip_str);
    }

    /// [Qt documentation](https://api.kde.org/kguiitem.html#toolTip)
    ///
    /// ``` self: QtC.KGuiItem, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KGuiItem_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kguiitem.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kguiitem.html#setWhatsThis)
    ///
    /// ``` self: QtC.KGuiItem, whatsThis: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.KGuiItem_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// [Qt documentation](https://api.kde.org/kguiitem.html#whatsThis)
    ///
    /// ``` self: QtC.KGuiItem, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KGuiItem_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kguiitem.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kguiitem.html#setEnabled)
    ///
    /// ``` self: QtC.KGuiItem, enable: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.KGuiItem_SetEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://api.kde.org/kguiitem.html#isEnabled)
    ///
    /// ``` self: QtC.KGuiItem ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.KGuiItem_IsEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kguiitem.html#assign)
    ///
    /// ``` button: QtC.QPushButton, item: QtC.KGuiItem ```
    pub fn Assign(button: ?*anyopaque, item: ?*anyopaque) void {
        qtc.KGuiItem_Assign(@ptrCast(button), @ptrCast(item));
    }

    /// [Qt documentation](https://api.kde.org/kguiitem.html#dtor.KGuiItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KGuiItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KGuiItem_Delete(@ptrCast(self));
    }
};
