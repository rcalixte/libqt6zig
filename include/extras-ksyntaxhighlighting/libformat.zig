const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const theme_enums = @import("libtheme.zig").enums;

/// https://api.kde.org/ksyntaxhighlighting-format.html
pub const ksyntaxhighlighting__format = struct {
    /// New constructs a new KSyntaxHighlighting::Format object.
    ///
    ///
    pub fn New() QtC.KSyntaxHighlighting__Format {
        return qtc.KSyntaxHighlighting__Format_new();
    }

    /// New2 constructs a new KSyntaxHighlighting::Format object.
    ///
    /// ``` other: QtC.KSyntaxHighlighting__Format ```
    pub fn New2(other: ?*anyopaque) QtC.KSyntaxHighlighting__Format {
        return qtc.KSyntaxHighlighting__Format_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#operator-eq)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format, other: QtC.KSyntaxHighlighting__Format ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__Format_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#isValid)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#name)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSyntaxHighlighting__Format_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting::format.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#id)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format ```
    pub fn Id(self: ?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__Format_Id(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#textStyle)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format ```
    ///
    /// Returns: ``` theme_enums.TextStyle ```
    pub fn TextStyle(self: ?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__Format_TextStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#isDefaultTextStyle)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format, theme: QtC.KSyntaxHighlighting__Theme ```
    pub fn IsDefaultTextStyle(self: ?*anyopaque, theme: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_IsDefaultTextStyle(@ptrCast(self), @ptrCast(theme));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasTextColor)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format, theme: QtC.KSyntaxHighlighting__Theme ```
    pub fn HasTextColor(self: ?*anyopaque, theme: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasTextColor(@ptrCast(self), @ptrCast(theme));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#textColor)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format, theme: QtC.KSyntaxHighlighting__Theme ```
    pub fn TextColor(self: ?*anyopaque, theme: ?*anyopaque) QtC.QColor {
        return qtc.KSyntaxHighlighting__Format_TextColor(@ptrCast(self), @ptrCast(theme));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#selectedTextColor)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format, theme: QtC.KSyntaxHighlighting__Theme ```
    pub fn SelectedTextColor(self: ?*anyopaque, theme: ?*anyopaque) QtC.QColor {
        return qtc.KSyntaxHighlighting__Format_SelectedTextColor(@ptrCast(self), @ptrCast(theme));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasBackgroundColor)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format, theme: QtC.KSyntaxHighlighting__Theme ```
    pub fn HasBackgroundColor(self: ?*anyopaque, theme: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasBackgroundColor(@ptrCast(self), @ptrCast(theme));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#backgroundColor)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format, theme: QtC.KSyntaxHighlighting__Theme ```
    pub fn BackgroundColor(self: ?*anyopaque, theme: ?*anyopaque) QtC.QColor {
        return qtc.KSyntaxHighlighting__Format_BackgroundColor(@ptrCast(self), @ptrCast(theme));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#selectedBackgroundColor)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format, theme: QtC.KSyntaxHighlighting__Theme ```
    pub fn SelectedBackgroundColor(self: ?*anyopaque, theme: ?*anyopaque) QtC.QColor {
        return qtc.KSyntaxHighlighting__Format_SelectedBackgroundColor(@ptrCast(self), @ptrCast(theme));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#isBold)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format, theme: QtC.KSyntaxHighlighting__Theme ```
    pub fn IsBold(self: ?*anyopaque, theme: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_IsBold(@ptrCast(self), @ptrCast(theme));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#isItalic)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format, theme: QtC.KSyntaxHighlighting__Theme ```
    pub fn IsItalic(self: ?*anyopaque, theme: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_IsItalic(@ptrCast(self), @ptrCast(theme));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#isUnderline)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format, theme: QtC.KSyntaxHighlighting__Theme ```
    pub fn IsUnderline(self: ?*anyopaque, theme: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_IsUnderline(@ptrCast(self), @ptrCast(theme));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#isStrikeThrough)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format, theme: QtC.KSyntaxHighlighting__Theme ```
    pub fn IsStrikeThrough(self: ?*anyopaque, theme: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_IsStrikeThrough(@ptrCast(self), @ptrCast(theme));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#spellCheck)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format ```
    pub fn SpellCheck(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_SpellCheck(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasBoldOverride)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format ```
    pub fn HasBoldOverride(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasBoldOverride(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasItalicOverride)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format ```
    pub fn HasItalicOverride(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasItalicOverride(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasUnderlineOverride)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format ```
    pub fn HasUnderlineOverride(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasUnderlineOverride(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasStrikeThroughOverride)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format ```
    pub fn HasStrikeThroughOverride(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasStrikeThroughOverride(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasTextColorOverride)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format ```
    pub fn HasTextColorOverride(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasTextColorOverride(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasBackgroundColorOverride)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format ```
    pub fn HasBackgroundColorOverride(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasBackgroundColorOverride(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasSelectedTextColorOverride)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format ```
    pub fn HasSelectedTextColorOverride(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasSelectedTextColorOverride(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasSelectedBackgroundColorOverride)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format ```
    pub fn HasSelectedBackgroundColorOverride(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasSelectedBackgroundColorOverride(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Format ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__Format_Delete(@ptrCast(self));
    }
};
