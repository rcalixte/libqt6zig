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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KSyntaxHighlighting::Format object in C++ memory
    ///
    pub fn new() KSyntaxHighlighting__Format {
        return .{ .ptr = qtc.KSyntaxHighlighting__Format_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KSyntaxHighlighting::Format object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KSyntaxHighlighting__Format `
    ///
    pub fn new2(other: anytype) KSyntaxHighlighting__Format {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__Format;
        return .{ .ptr = qtc.KSyntaxHighlighting__Format_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` other: KSyntaxHighlighting__Format `
    ///
    pub fn operatorAssign(self: KSyntaxHighlighting__Format, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__Format;
        qtc.KSyntaxHighlighting__Format_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn isValid(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KSyntaxHighlighting__Format, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Format_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__Format.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn id(self: KSyntaxHighlighting__Format) i32 {
        return qtc.KSyntaxHighlighting__Format_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textStyle` instead
    ///
    pub const TextStyle = textStyle;

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
    pub fn textStyle(self: KSyntaxHighlighting__Format) i32 {
        return qtc.KSyntaxHighlighting__Format_TextStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDefaultTextStyle` instead
    ///
    pub const IsDefaultTextStyle = isDefaultTextStyle;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isDefaultTextStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn isDefaultTextStyle(self: KSyntaxHighlighting__Format, theme: anytype) bool {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return qtc.KSyntaxHighlighting__Format_IsDefaultTextStyle(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### DEPRECATED: Use `hasTextColor` instead
    ///
    pub const HasTextColor = hasTextColor;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn hasTextColor(self: KSyntaxHighlighting__Format, theme: anytype) bool {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return qtc.KSyntaxHighlighting__Format_HasTextColor(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### DEPRECATED: Use `textColor` instead
    ///
    pub const TextColor = textColor;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#textColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn textColor(self: KSyntaxHighlighting__Format, theme: anytype) QColor {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return .{ .ptr = qtc.KSyntaxHighlighting__Format_TextColor(@ptrCast(self.ptr), @ptrCast(theme.ptr)) };
    }

    /// ### DEPRECATED: Use `selectedTextColor` instead
    ///
    pub const SelectedTextColor = selectedTextColor;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#selectedTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn selectedTextColor(self: KSyntaxHighlighting__Format, theme: anytype) QColor {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return .{ .ptr = qtc.KSyntaxHighlighting__Format_SelectedTextColor(@ptrCast(self.ptr), @ptrCast(theme.ptr)) };
    }

    /// ### DEPRECATED: Use `hasBackgroundColor` instead
    ///
    pub const HasBackgroundColor = hasBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn hasBackgroundColor(self: KSyntaxHighlighting__Format, theme: anytype) bool {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return qtc.KSyntaxHighlighting__Format_HasBackgroundColor(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### DEPRECATED: Use `backgroundColor` instead
    ///
    pub const BackgroundColor = backgroundColor;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#backgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn backgroundColor(self: KSyntaxHighlighting__Format, theme: anytype) QColor {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return .{ .ptr = qtc.KSyntaxHighlighting__Format_BackgroundColor(@ptrCast(self.ptr), @ptrCast(theme.ptr)) };
    }

    /// ### DEPRECATED: Use `selectedBackgroundColor` instead
    ///
    pub const SelectedBackgroundColor = selectedBackgroundColor;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#selectedBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn selectedBackgroundColor(self: KSyntaxHighlighting__Format, theme: anytype) QColor {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return .{ .ptr = qtc.KSyntaxHighlighting__Format_SelectedBackgroundColor(@ptrCast(self.ptr), @ptrCast(theme.ptr)) };
    }

    /// ### DEPRECATED: Use `isBold` instead
    ///
    pub const IsBold = isBold;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isBold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn isBold(self: KSyntaxHighlighting__Format, theme: anytype) bool {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return qtc.KSyntaxHighlighting__Format_IsBold(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### DEPRECATED: Use `isItalic` instead
    ///
    pub const IsItalic = isItalic;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn isItalic(self: KSyntaxHighlighting__Format, theme: anytype) bool {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return qtc.KSyntaxHighlighting__Format_IsItalic(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### DEPRECATED: Use `isUnderline` instead
    ///
    pub const IsUnderline = isUnderline;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn isUnderline(self: KSyntaxHighlighting__Format, theme: anytype) bool {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return qtc.KSyntaxHighlighting__Format_IsUnderline(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### DEPRECATED: Use `isStrikeThrough` instead
    ///
    pub const IsStrikeThrough = isStrikeThrough;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isStrikeThrough)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn isStrikeThrough(self: KSyntaxHighlighting__Format, theme: anytype) bool {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        return qtc.KSyntaxHighlighting__Format_IsStrikeThrough(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### DEPRECATED: Use `spellCheck` instead
    ///
    pub const SpellCheck = spellCheck;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#spellCheck)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn spellCheck(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_SpellCheck(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasBoldOverride` instead
    ///
    pub const HasBoldOverride = hasBoldOverride;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasBoldOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn hasBoldOverride(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_HasBoldOverride(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasItalicOverride` instead
    ///
    pub const HasItalicOverride = hasItalicOverride;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasItalicOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn hasItalicOverride(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_HasItalicOverride(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasUnderlineOverride` instead
    ///
    pub const HasUnderlineOverride = hasUnderlineOverride;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasUnderlineOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn hasUnderlineOverride(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_HasUnderlineOverride(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasStrikeThroughOverride` instead
    ///
    pub const HasStrikeThroughOverride = hasStrikeThroughOverride;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasStrikeThroughOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn hasStrikeThroughOverride(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_HasStrikeThroughOverride(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasTextColorOverride` instead
    ///
    pub const HasTextColorOverride = hasTextColorOverride;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasTextColorOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn hasTextColorOverride(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_HasTextColorOverride(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasBackgroundColorOverride` instead
    ///
    pub const HasBackgroundColorOverride = hasBackgroundColorOverride;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasBackgroundColorOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn hasBackgroundColorOverride(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_HasBackgroundColorOverride(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasSelectedTextColorOverride` instead
    ///
    pub const HasSelectedTextColorOverride = hasSelectedTextColorOverride;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasSelectedTextColorOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn hasSelectedTextColorOverride(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_HasSelectedTextColorOverride(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasSelectedBackgroundColorOverride` instead
    ///
    pub const HasSelectedBackgroundColorOverride = hasSelectedBackgroundColorOverride;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasSelectedBackgroundColorOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn hasSelectedBackgroundColorOverride(self: KSyntaxHighlighting__Format) bool {
        return qtc.KSyntaxHighlighting__Format_HasSelectedBackgroundColorOverride(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KSyntaxHighlighting__Format `
    ///
    pub fn delete(self: KSyntaxHighlighting__Format) void {
        qtc.KSyntaxHighlighting__Format_Delete(@ptrCast(self.ptr));
    }
};
