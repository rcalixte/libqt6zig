const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KLocalizedString = @import("libqt6").KLocalizedString;
const QChar = @import("libqt6").QChar;
const kuitsetup_enums = @import("libkuitsetup.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html)
pub const KLazyLocalizedString = extern struct {
    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KLazyLocalizedString,

    pub const _is_KLazyLocalizedString = {};

    /// New constructs a new KLazyLocalizedString object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KLazyLocalizedString `
    ///
    pub fn New(other: anytype) KLazyLocalizedString {
        comptime _ = @TypeOf(other)._is_KLazyLocalizedString;
        return .{ .ptr = qtc.KLazyLocalizedString_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new KLazyLocalizedString object and invalidates the source KLazyLocalizedString object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KLazyLocalizedString `
    ///
    pub fn New2(other: anytype) KLazyLocalizedString {
        comptime _ = @TypeOf(other)._is_KLazyLocalizedString;
        return .{ .ptr = qtc.KLazyLocalizedString_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new KLazyLocalizedString object.
    ///
    pub fn New3() KLazyLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_new3() };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` other: KLazyLocalizedString `
    ///
    pub fn CopyAssign(self: KLazyLocalizedString, other: KLazyLocalizedString) void {
        qtc.KLazyLocalizedString_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` other: KLazyLocalizedString `
    ///
    pub fn MoveAssign(self: KLazyLocalizedString, other: KLazyLocalizedString) void {
        qtc.KLazyLocalizedString_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    pub fn ToKLocalizedString(self: KLazyLocalizedString) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_ToKLocalizedString(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    pub fn IsEmpty(self: KLazyLocalizedString) bool {
        return qtc.KLazyLocalizedString_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#untranslatedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    pub fn UntranslatedText(self: KLazyLocalizedString) [:0]const u8 {
        const _ret = qtc.KLazyLocalizedString_UntranslatedText(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: KLazyLocalizedString, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KLazyLocalizedString_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klazylocalizedstring.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` languages: []const []const u8 `
    ///
    pub fn ToString2(self: KLazyLocalizedString, allocator: std.mem.Allocator, languages: []const []const u8) []const u8 {
        const languages_arr = allocator.alloc(qtc.libqt_string, languages.len) catch @panic("klazylocalizedstring.ToString2: Memory allocation failed");
        defer allocator.free(languages_arr);
        for (languages, 0..languages.len) |item, i|
            languages_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const languages_list = qtc.libqt_list{
            .len = languages.len,
            .data = languages_arr.ptr,
        };
        var _str = qtc.KLazyLocalizedString_ToString2(@ptrCast(self.ptr), languages_list);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klazylocalizedstring.ToString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: [:0]const u8 `
    ///
    pub fn ToString3(self: KLazyLocalizedString, allocator: std.mem.Allocator, domain: [:0]const u8) []const u8 {
        const domain_Cstring = domain.ptr;
        var _str = qtc.KLazyLocalizedString_ToString3(@ptrCast(self.ptr), domain_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klazylocalizedstring.ToString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` format: kuitsetup_enums.VisualFormat `
    ///
    pub fn ToString4(self: KLazyLocalizedString, allocator: std.mem.Allocator, format: i32) []const u8 {
        var _str = qtc.KLazyLocalizedString_ToString4(@ptrCast(self.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klazylocalizedstring.ToString4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#withLanguages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` languages: []const []const u8 `
    ///
    pub fn WithLanguages(self: KLazyLocalizedString, allocator: std.mem.Allocator, languages: []const []const u8) KLocalizedString {
        const languages_arr = allocator.alloc(qtc.libqt_string, languages.len) catch @panic("klazylocalizedstring.WithLanguages: Memory allocation failed");
        defer allocator.free(languages_arr);
        for (languages, 0..languages.len) |item, i|
            languages_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const languages_list = qtc.libqt_list{
            .len = languages.len,
            .data = languages_arr.ptr,
        };
        return .{ .ptr = qtc.KLazyLocalizedString_WithLanguages(@ptrCast(self.ptr), languages_list) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#withDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` domain: [:0]const u8 `
    ///
    pub fn WithDomain(self: KLazyLocalizedString, domain: [:0]const u8) KLocalizedString {
        const domain_Cstring = domain.ptr;
        return .{ .ptr = qtc.KLazyLocalizedString_WithDomain(@ptrCast(self.ptr), domain_Cstring) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#withFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` format: kuitsetup_enums.VisualFormat `
    ///
    pub fn WithFormat(self: KLazyLocalizedString, format: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_WithFormat(@ptrCast(self.ptr), @bitCast(format)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: i32 `
    ///
    pub fn Subs(self: KLazyLocalizedString, a: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: u32 `
    ///
    pub fn Subs2(self: KLazyLocalizedString, a: u32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs2(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: isize `
    ///
    pub fn Subs3(self: KLazyLocalizedString, a: isize) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs3(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: usize `
    ///
    pub fn Subs4(self: KLazyLocalizedString, a: usize) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs4(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: isize `
    ///
    pub fn Subs5(self: KLazyLocalizedString, a: isize) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs5(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: usize `
    ///
    pub fn Subs6(self: KLazyLocalizedString, a: usize) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs6(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: f64 `
    ///
    pub fn Subs7(self: KLazyLocalizedString, a: f64) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs7(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: QChar `
    ///
    pub fn Subs8(self: KLazyLocalizedString, a: anytype) KLocalizedString {
        comptime _ = @TypeOf(a)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs8(@ptrCast(self.ptr), @ptrCast(a.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: []const u8 `
    ///
    pub fn Subs9(self: KLazyLocalizedString, a: []const u8) KLocalizedString {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return .{ .ptr = qtc.KLazyLocalizedString_Subs9(@ptrCast(self.ptr), a_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: KLocalizedString `
    ///
    pub fn Subs10(self: KLazyLocalizedString, a: anytype) KLocalizedString {
        comptime _ = @TypeOf(a)._is_KLocalizedString;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs10(@ptrCast(self.ptr), @ptrCast(a.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#inContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn InContext(self: KLazyLocalizedString, key: []const u8, value: []const u8) KLocalizedString {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        return .{ .ptr = qtc.KLazyLocalizedString_InContext(@ptrCast(self.ptr), key_str, value_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#relaxSubs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    pub fn RelaxSubs(self: KLazyLocalizedString) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_RelaxSubs(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#ignoreMarkup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    pub fn IgnoreMarkup(self: KLazyLocalizedString) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_IgnoreMarkup(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: i32 `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs22(self: KLazyLocalizedString, a: i32, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs22(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: i32 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    pub fn Subs32(self: KLazyLocalizedString, a: i32, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs32(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: i32 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs42(self: KLazyLocalizedString, a: i32, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs42(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: u32 `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs23(self: KLazyLocalizedString, a: u32, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs23(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: u32 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    pub fn Subs33(self: KLazyLocalizedString, a: u32, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs33(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: u32 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs43(self: KLazyLocalizedString, a: u32, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs43(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: isize `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs24(self: KLazyLocalizedString, a: isize, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs24(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: isize `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    pub fn Subs34(self: KLazyLocalizedString, a: isize, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs34(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: isize `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs44(self: KLazyLocalizedString, a: isize, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs44(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: usize `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs25(self: KLazyLocalizedString, a: usize, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs25(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: usize `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    pub fn Subs35(self: KLazyLocalizedString, a: usize, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs35(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: usize `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs45(self: KLazyLocalizedString, a: usize, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs45(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: isize `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs26(self: KLazyLocalizedString, a: isize, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs26(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: isize `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    pub fn Subs36(self: KLazyLocalizedString, a: isize, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs36(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: isize `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs46(self: KLazyLocalizedString, a: isize, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs46(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: usize `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs27(self: KLazyLocalizedString, a: usize, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs27(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: usize `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    pub fn Subs37(self: KLazyLocalizedString, a: usize, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs37(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: usize `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs47(self: KLazyLocalizedString, a: usize, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs47(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: f64 `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs28(self: KLazyLocalizedString, a: f64, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs28(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: f64 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    pub fn Subs38(self: KLazyLocalizedString, a: f64, fieldWidth: i32, format: u8) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs38(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(format)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: f64 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    /// ` precision: i32 `
    ///
    pub fn Subs48(self: KLazyLocalizedString, a: f64, fieldWidth: i32, format: u8, precision: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs48(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: f64 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    /// ` precision: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs52(self: KLazyLocalizedString, a: f64, fieldWidth: i32, format: u8, precision: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs52(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision), @ptrCast(fillChar.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: QChar `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs29(self: KLazyLocalizedString, a: anytype, fieldWidth: i32) KLocalizedString {
        comptime _ = @TypeOf(a)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs29(@ptrCast(self.ptr), @ptrCast(a.ptr), @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: QChar `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs39(self: KLazyLocalizedString, a: anytype, fieldWidth: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(a)._is_QChar;
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs39(@ptrCast(self.ptr), @ptrCast(a.ptr), @bitCast(fieldWidth), @ptrCast(fillChar.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: []const u8 `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs210(self: KLazyLocalizedString, a: []const u8, fieldWidth: i32) KLocalizedString {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return .{ .ptr = qtc.KLazyLocalizedString_Subs210(@ptrCast(self.ptr), a_str, @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: []const u8 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs310(self: KLazyLocalizedString, a: []const u8, fieldWidth: i32, fillChar: anytype) KLocalizedString {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs310(@ptrCast(self.ptr), a_str, @bitCast(fieldWidth), @ptrCast(fillChar.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: KLocalizedString `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs211(self: KLazyLocalizedString, a: anytype, fieldWidth: i32) KLocalizedString {
        comptime _ = @TypeOf(a)._is_KLocalizedString;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs211(@ptrCast(self.ptr), @ptrCast(a.ptr), @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: KLocalizedString `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs311(self: KLazyLocalizedString, a: anytype, fieldWidth: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(a)._is_KLocalizedString;
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs311(@ptrCast(self.ptr), @ptrCast(a.ptr), @bitCast(fieldWidth), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#dtor.KLazyLocalizedString)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KLazyLocalizedString `
    ///
    pub fn Delete(self: KLazyLocalizedString) void {
        qtc.KLazyLocalizedString_Delete(@ptrCast(self.ptr));
    }
};
