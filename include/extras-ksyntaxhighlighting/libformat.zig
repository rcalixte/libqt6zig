const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KSyntaxHighlighting__Theme = @import("libqt6").KSyntaxHighlighting__Theme;
const QColor = @import("libqt6").QColor;
const std = @import("std");
const theme_enums = @import("libtheme.zig").enums;

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html)
pub const KSyntaxHighlighting__Format = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSyntaxHighlighting__Format,

    pub const _is_KSyntaxHighlighting__Format = {};

    /// New constructs a new KSyntaxHighlighting::Format object.
    ///
    pub fn New() KSyntaxHighlighting__Format {
        return .{ .ptr = qtc.KSyntaxHighlighting__Format_new() };
    }

    /// New2 constructs a new KSyntaxHighlighting::Format object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KSyntaxHighlighting__Format `
    ///
    pub fn New2(other: anytype) KSyntaxHighlighting__Format {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__Format;
        return .{ .ptr = qtc.KSyntaxHighlighting__Format_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` other: KSyntaxHighlighting__Format `
    ///
    pub fn OperatorAssign(self: KSyntaxHighlighting__Format, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__Format;
        qtc.KSyntaxHighlighting__Format_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn IsValid(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KSyntaxHighlighting__Format, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Format_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__format.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn Id(self: KSyntaxHighlighting__Format) i32 {
        return qtc.KSyntaxHighlighting__Format_Id(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#textStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ## Returns:
    ///
    /// ` theme_enums.TextStyle `
    ///
    pub fn TextStyle(self: KSyntaxHighlighting__Format) i32 {
        return qtc.KSyntaxHighlighting__Format_TextStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isDefaultTextStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn IsDefaultTextStyle(self: KSyntaxHighlighting__Format, theme: anytype) bool {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return qtc.KSyntaxHighlighting__Format_IsDefaultTextStyle(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn HasTextColor(self: KSyntaxHighlighting__Format, theme: anytype) bool {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return qtc.KSyntaxHighlighting__Format_HasTextColor(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#textColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn TextColor(self: KSyntaxHighlighting__Format, theme: anytype) QColor {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return .{ .ptr = qtc.KSyntaxHighlighting__Format_TextColor(@ptrCast(self.ptr), @ptrCast(theme.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#selectedTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn SelectedTextColor(self: KSyntaxHighlighting__Format, theme: anytype) QColor {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return .{ .ptr = qtc.KSyntaxHighlighting__Format_SelectedTextColor(@ptrCast(self.ptr), @ptrCast(theme.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn HasBackgroundColor(self: KSyntaxHighlighting__Format, theme: anytype) bool {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return qtc.KSyntaxHighlighting__Format_HasBackgroundColor(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#backgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn BackgroundColor(self: KSyntaxHighlighting__Format, theme: anytype) QColor {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return .{ .ptr = qtc.KSyntaxHighlighting__Format_BackgroundColor(@ptrCast(self.ptr), @ptrCast(theme.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#selectedBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn SelectedBackgroundColor(self: KSyntaxHighlighting__Format, theme: anytype) QColor {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return .{ .ptr = qtc.KSyntaxHighlighting__Format_SelectedBackgroundColor(@ptrCast(self.ptr), @ptrCast(theme.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isBold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn IsBold(self: KSyntaxHighlighting__Format, theme: anytype) bool {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return qtc.KSyntaxHighlighting__Format_IsBold(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn IsItalic(self: KSyntaxHighlighting__Format, theme: anytype) bool {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return qtc.KSyntaxHighlighting__Format_IsItalic(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn IsUnderline(self: KSyntaxHighlighting__Format, theme: anytype) bool {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return qtc.KSyntaxHighlighting__Format_IsUnderline(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isStrikeThrough)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn IsStrikeThrough(self: KSyntaxHighlighting__Format, theme: anytype) bool {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return qtc.KSyntaxHighlighting__Format_IsStrikeThrough(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#spellCheck)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn SpellCheck(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_SpellCheck(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasBoldOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn HasBoldOverride(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_HasBoldOverride(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasItalicOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn HasItalicOverride(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_HasItalicOverride(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasUnderlineOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn HasUnderlineOverride(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_HasUnderlineOverride(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasStrikeThroughOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn HasStrikeThroughOverride(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_HasStrikeThroughOverride(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasTextColorOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn HasTextColorOverride(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_HasTextColorOverride(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasBackgroundColorOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn HasBackgroundColorOverride(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_HasBackgroundColorOverride(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasSelectedTextColorOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn HasSelectedTextColorOverride(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_HasSelectedTextColorOverride(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasSelectedBackgroundColorOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn HasSelectedBackgroundColorOverride(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_HasSelectedBackgroundColorOverride(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn Delete(self: KSyntaxHighlighting__Format) void {
        qtc.KSyntaxHighlighting__Format_Delete(@ptrCast(self.ptr));
    }
};
