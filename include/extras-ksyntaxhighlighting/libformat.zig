const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const theme_enums = @import("libtheme.zig").enums;

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html)
pub const ksyntaxhighlighting__format = struct {
    /// New constructs a new KSyntaxHighlighting::Format object.
    ///
    pub fn New() QtC.KSyntaxHighlighting__Format {
        return qtc.KSyntaxHighlighting__Format_new();
    }

    /// New2 constructs a new KSyntaxHighlighting::Format object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.KSyntaxHighlighting__Format `
    ///
    pub fn New2(other: ?*anyopaque) QtC.KSyntaxHighlighting__Format {
        return qtc.KSyntaxHighlighting__Format_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    /// ` other: QtC.KSyntaxHighlighting__Format `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__Format_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Format_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__format.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    pub fn Id(self: ?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__Format_Id(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#textStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    /// ## Returns:
    ///
    /// ` theme_enums.TextStyle `
    ///
    pub fn TextStyle(self: ?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__Format_TextStyle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isDefaultTextStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    /// ` theme: QtC.KSyntaxHighlighting__Theme `
    ///
    pub fn IsDefaultTextStyle(self: ?*anyopaque, theme: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_IsDefaultTextStyle(@ptrCast(self), @ptrCast(theme));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    /// ` theme: QtC.KSyntaxHighlighting__Theme `
    ///
    pub fn HasTextColor(self: ?*anyopaque, theme: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasTextColor(@ptrCast(self), @ptrCast(theme));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#textColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    /// ` theme: QtC.KSyntaxHighlighting__Theme `
    ///
    pub fn TextColor(self: ?*anyopaque, theme: ?*anyopaque) QtC.QColor {
        return qtc.KSyntaxHighlighting__Format_TextColor(@ptrCast(self), @ptrCast(theme));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#selectedTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    /// ` theme: QtC.KSyntaxHighlighting__Theme `
    ///
    pub fn SelectedTextColor(self: ?*anyopaque, theme: ?*anyopaque) QtC.QColor {
        return qtc.KSyntaxHighlighting__Format_SelectedTextColor(@ptrCast(self), @ptrCast(theme));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    /// ` theme: QtC.KSyntaxHighlighting__Theme `
    ///
    pub fn HasBackgroundColor(self: ?*anyopaque, theme: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasBackgroundColor(@ptrCast(self), @ptrCast(theme));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#backgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    /// ` theme: QtC.KSyntaxHighlighting__Theme `
    ///
    pub fn BackgroundColor(self: ?*anyopaque, theme: ?*anyopaque) QtC.QColor {
        return qtc.KSyntaxHighlighting__Format_BackgroundColor(@ptrCast(self), @ptrCast(theme));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#selectedBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    /// ` theme: QtC.KSyntaxHighlighting__Theme `
    ///
    pub fn SelectedBackgroundColor(self: ?*anyopaque, theme: ?*anyopaque) QtC.QColor {
        return qtc.KSyntaxHighlighting__Format_SelectedBackgroundColor(@ptrCast(self), @ptrCast(theme));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isBold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    /// ` theme: QtC.KSyntaxHighlighting__Theme `
    ///
    pub fn IsBold(self: ?*anyopaque, theme: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_IsBold(@ptrCast(self), @ptrCast(theme));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    /// ` theme: QtC.KSyntaxHighlighting__Theme `
    ///
    pub fn IsItalic(self: ?*anyopaque, theme: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_IsItalic(@ptrCast(self), @ptrCast(theme));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    /// ` theme: QtC.KSyntaxHighlighting__Theme `
    ///
    pub fn IsUnderline(self: ?*anyopaque, theme: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_IsUnderline(@ptrCast(self), @ptrCast(theme));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isStrikeThrough)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    /// ` theme: QtC.KSyntaxHighlighting__Theme `
    ///
    pub fn IsStrikeThrough(self: ?*anyopaque, theme: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_IsStrikeThrough(@ptrCast(self), @ptrCast(theme));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#spellCheck)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    pub fn SpellCheck(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_SpellCheck(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasBoldOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    pub fn HasBoldOverride(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasBoldOverride(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasItalicOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    pub fn HasItalicOverride(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasItalicOverride(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasUnderlineOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    pub fn HasUnderlineOverride(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasUnderlineOverride(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasStrikeThroughOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    pub fn HasStrikeThroughOverride(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasStrikeThroughOverride(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasTextColorOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    pub fn HasTextColorOverride(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasTextColorOverride(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasBackgroundColorOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    pub fn HasBackgroundColorOverride(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasBackgroundColorOverride(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasSelectedTextColorOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    pub fn HasSelectedTextColorOverride(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasSelectedTextColorOverride(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasSelectedBackgroundColorOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    pub fn HasSelectedBackgroundColorOverride(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Format_HasSelectedBackgroundColorOverride(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KSyntaxHighlighting__Format `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__Format_Delete(@ptrCast(self));
    }
};
