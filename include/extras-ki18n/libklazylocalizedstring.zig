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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KLazyLocalizedString object in C++ memory
    ///
    pub fn new() KLazyLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KLazyLocalizedString object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KLazyLocalizedString `
    ///
    pub fn new2(other: anytype) KLazyLocalizedString {
        comptime _ = @TypeOf(other)._is_KLazyLocalizedString;
        return .{ .ptr = qtc.KLazyLocalizedString_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KLazyLocalizedString object and invalidate the source KLazyLocalizedString object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KLazyLocalizedString `
    ///
    pub fn new3(other: anytype) KLazyLocalizedString {
        comptime _ = @TypeOf(other)._is_KLazyLocalizedString;
        return .{ .ptr = qtc.KLazyLocalizedString_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` other: KLazyLocalizedString `
    ///
    pub fn copyAssign(self: KLazyLocalizedString, other: KLazyLocalizedString) void {
        qtc.KLazyLocalizedString_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` other: KLazyLocalizedString `
    ///
    pub fn moveAssign(self: KLazyLocalizedString, other: KLazyLocalizedString) void {
        qtc.KLazyLocalizedString_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toKLocalizedString` instead
    ///
    pub const ToKLocalizedString = toKLocalizedString;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    pub fn toKLocalizedString(self: KLazyLocalizedString) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_ToKLocalizedString(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    pub fn isEmpty(self: KLazyLocalizedString) bool {
        return qtc.KLazyLocalizedString_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `untranslatedText` instead
    ///
    pub const UntranslatedText = untranslatedText;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#untranslatedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    pub fn untranslatedText(self: KLazyLocalizedString) [:0]const u8 {
        const _ret = qtc.KLazyLocalizedString_UntranslatedText(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: KLazyLocalizedString, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KLazyLocalizedString_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLazyLocalizedString.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString2` instead
    ///
    pub const ToString2 = toString2;

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
    pub fn toString2(self: KLazyLocalizedString, allocator: std.mem.Allocator, languages: []const []const u8) []const u8 {
        const languages_arr = allocator.alloc(qtc.libqt_string, languages.len) catch @panic("KLazyLocalizedString.toString2: Memory allocation failed");
        defer allocator.free(languages_arr);
        for (languages, 0..languages.len) |str_item, i|
            languages_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const languages_list = qtc.libqt_list{
            .len = languages.len,
            .data = languages_arr.ptr,
        };
        var _str = qtc.KLazyLocalizedString_ToString2(@ptrCast(self.ptr), languages_list);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLazyLocalizedString.toString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString3` instead
    ///
    pub const ToString3 = toString3;

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
    pub fn toString3(self: KLazyLocalizedString, allocator: std.mem.Allocator, domain: [:0]const u8) []const u8 {
        const domain_Cstring = domain.ptr;
        var _str = qtc.KLazyLocalizedString_ToString3(@ptrCast(self.ptr), domain_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLazyLocalizedString.toString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString4` instead
    ///
    pub const ToString4 = toString4;

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
    pub fn toString4(self: KLazyLocalizedString, allocator: std.mem.Allocator, format: i32) []const u8 {
        var _str = qtc.KLazyLocalizedString_ToString4(@ptrCast(self.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLazyLocalizedString.toString4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `withLanguages` instead
    ///
    pub const WithLanguages = withLanguages;

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
    pub fn withLanguages(self: KLazyLocalizedString, allocator: std.mem.Allocator, languages: []const []const u8) KLocalizedString {
        const languages_arr = allocator.alloc(qtc.libqt_string, languages.len) catch @panic("KLazyLocalizedString.withLanguages: Memory allocation failed");
        defer allocator.free(languages_arr);
        for (languages, 0..languages.len) |str_item, i|
            languages_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const languages_list = qtc.libqt_list{
            .len = languages.len,
            .data = languages_arr.ptr,
        };
        return .{ .ptr = qtc.KLazyLocalizedString_WithLanguages(@ptrCast(self.ptr), languages_list) };
    }

    /// ### DEPRECATED: Use `withDomain` instead
    ///
    pub const WithDomain = withDomain;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#withDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` domain: [:0]const u8 `
    ///
    pub fn withDomain(self: KLazyLocalizedString, domain: [:0]const u8) KLocalizedString {
        const domain_Cstring = domain.ptr;
        return .{ .ptr = qtc.KLazyLocalizedString_WithDomain(@ptrCast(self.ptr), domain_Cstring) };
    }

    /// ### DEPRECATED: Use `withFormat` instead
    ///
    pub const WithFormat = withFormat;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#withFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` format: kuitsetup_enums.VisualFormat `
    ///
    pub fn withFormat(self: KLazyLocalizedString, format: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_WithFormat(@ptrCast(self.ptr), @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `subs` instead
    ///
    pub const Subs = subs;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: i32 `
    ///
    pub fn subs(self: KLazyLocalizedString, a: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `subs2` instead
    ///
    pub const Subs2 = subs2;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: u32 `
    ///
    pub fn subs2(self: KLazyLocalizedString, a: u32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs2(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `subs3` instead
    ///
    pub const Subs3 = subs3;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: isize `
    ///
    pub fn subs3(self: KLazyLocalizedString, a: isize) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs3(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `subs4` instead
    ///
    pub const Subs4 = subs4;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: usize `
    ///
    pub fn subs4(self: KLazyLocalizedString, a: usize) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs4(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `subs5` instead
    ///
    pub const Subs5 = subs5;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: isize `
    ///
    pub fn subs5(self: KLazyLocalizedString, a: isize) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs5(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `subs6` instead
    ///
    pub const Subs6 = subs6;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: usize `
    ///
    pub fn subs6(self: KLazyLocalizedString, a: usize) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs6(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `subs7` instead
    ///
    pub const Subs7 = subs7;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: f64 `
    ///
    pub fn subs7(self: KLazyLocalizedString, a: f64) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs7(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `subs8` instead
    ///
    pub const Subs8 = subs8;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: QChar `
    ///
    pub fn subs8(self: KLazyLocalizedString, a: anytype) KLocalizedString {
        comptime _ = @TypeOf(a)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs8(@ptrCast(self.ptr), @ptrCast(a.ptr)) };
    }

    /// ### DEPRECATED: Use `subs9` instead
    ///
    pub const Subs9 = subs9;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: []const u8 `
    ///
    pub fn subs9(self: KLazyLocalizedString, a: []const u8) KLocalizedString {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return .{ .ptr = qtc.KLazyLocalizedString_Subs9(@ptrCast(self.ptr), a_str) };
    }

    /// ### DEPRECATED: Use `subs10` instead
    ///
    pub const Subs10 = subs10;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    /// ` a: KLocalizedString `
    ///
    pub fn subs10(self: KLazyLocalizedString, a: anytype) KLocalizedString {
        comptime _ = @TypeOf(a)._is_KLocalizedString;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs10(@ptrCast(self.ptr), @ptrCast(a.ptr)) };
    }

    /// ### DEPRECATED: Use `inContext` instead
    ///
    pub const InContext = inContext;

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
    pub fn inContext(self: KLazyLocalizedString, key: []const u8, value: []const u8) KLocalizedString {
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

    /// ### DEPRECATED: Use `relaxSubs` instead
    ///
    pub const RelaxSubs = relaxSubs;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#relaxSubs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    pub fn relaxSubs(self: KLazyLocalizedString) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_RelaxSubs(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ignoreMarkup` instead
    ///
    pub const IgnoreMarkup = ignoreMarkup;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#ignoreMarkup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLazyLocalizedString `
    ///
    pub fn ignoreMarkup(self: KLazyLocalizedString) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_IgnoreMarkup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `subs22` instead
    ///
    pub const Subs22 = subs22;

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
    pub fn subs22(self: KLazyLocalizedString, a: i32, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs22(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs32` instead
    ///
    pub const Subs32 = subs32;

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
    pub fn subs32(self: KLazyLocalizedString, a: i32, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs32(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### DEPRECATED: Use `subs42` instead
    ///
    pub const Subs42 = subs42;

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
    pub fn subs42(self: KLazyLocalizedString, a: i32, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs42(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `subs23` instead
    ///
    pub const Subs23 = subs23;

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
    pub fn subs23(self: KLazyLocalizedString, a: u32, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs23(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs33` instead
    ///
    pub const Subs33 = subs33;

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
    pub fn subs33(self: KLazyLocalizedString, a: u32, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs33(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### DEPRECATED: Use `subs43` instead
    ///
    pub const Subs43 = subs43;

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
    pub fn subs43(self: KLazyLocalizedString, a: u32, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs43(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `subs24` instead
    ///
    pub const Subs24 = subs24;

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
    pub fn subs24(self: KLazyLocalizedString, a: isize, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs24(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs34` instead
    ///
    pub const Subs34 = subs34;

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
    pub fn subs34(self: KLazyLocalizedString, a: isize, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs34(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### DEPRECATED: Use `subs44` instead
    ///
    pub const Subs44 = subs44;

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
    pub fn subs44(self: KLazyLocalizedString, a: isize, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs44(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `subs25` instead
    ///
    pub const Subs25 = subs25;

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
    pub fn subs25(self: KLazyLocalizedString, a: usize, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs25(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs35` instead
    ///
    pub const Subs35 = subs35;

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
    pub fn subs35(self: KLazyLocalizedString, a: usize, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs35(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### DEPRECATED: Use `subs45` instead
    ///
    pub const Subs45 = subs45;

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
    pub fn subs45(self: KLazyLocalizedString, a: usize, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs45(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `subs26` instead
    ///
    pub const Subs26 = subs26;

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
    pub fn subs26(self: KLazyLocalizedString, a: isize, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs26(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs36` instead
    ///
    pub const Subs36 = subs36;

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
    pub fn subs36(self: KLazyLocalizedString, a: isize, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs36(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### DEPRECATED: Use `subs46` instead
    ///
    pub const Subs46 = subs46;

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
    pub fn subs46(self: KLazyLocalizedString, a: isize, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs46(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `subs27` instead
    ///
    pub const Subs27 = subs27;

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
    pub fn subs27(self: KLazyLocalizedString, a: usize, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs27(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs37` instead
    ///
    pub const Subs37 = subs37;

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
    pub fn subs37(self: KLazyLocalizedString, a: usize, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs37(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### DEPRECATED: Use `subs47` instead
    ///
    pub const Subs47 = subs47;

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
    pub fn subs47(self: KLazyLocalizedString, a: usize, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs47(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `subs28` instead
    ///
    pub const Subs28 = subs28;

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
    pub fn subs28(self: KLazyLocalizedString, a: f64, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs28(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs38` instead
    ///
    pub const Subs38 = subs38;

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
    pub fn subs38(self: KLazyLocalizedString, a: f64, fieldWidth: i32, format: u8) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs38(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `subs48` instead
    ///
    pub const Subs48 = subs48;

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
    pub fn subs48(self: KLazyLocalizedString, a: f64, fieldWidth: i32, format: u8, precision: i32) KLocalizedString {
        return .{ .ptr = qtc.KLazyLocalizedString_Subs48(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision)) };
    }

    /// ### DEPRECATED: Use `subs52` instead
    ///
    pub const Subs52 = subs52;

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
    pub fn subs52(self: KLazyLocalizedString, a: f64, fieldWidth: i32, format: u8, precision: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs52(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `subs29` instead
    ///
    pub const Subs29 = subs29;

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
    pub fn subs29(self: KLazyLocalizedString, a: anytype, fieldWidth: i32) KLocalizedString {
        comptime _ = @TypeOf(a)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs29(@ptrCast(self.ptr), @ptrCast(a.ptr), @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs39` instead
    ///
    pub const Subs39 = subs39;

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
    pub fn subs39(self: KLazyLocalizedString, a: anytype, fieldWidth: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(a)._is_QChar;
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs39(@ptrCast(self.ptr), @ptrCast(a.ptr), @bitCast(fieldWidth), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `subs210` instead
    ///
    pub const Subs210 = subs210;

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
    pub fn subs210(self: KLazyLocalizedString, a: []const u8, fieldWidth: i32) KLocalizedString {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return .{ .ptr = qtc.KLazyLocalizedString_Subs210(@ptrCast(self.ptr), a_str, @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs310` instead
    ///
    pub const Subs310 = subs310;

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
    pub fn subs310(self: KLazyLocalizedString, a: []const u8, fieldWidth: i32, fillChar: anytype) KLocalizedString {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs310(@ptrCast(self.ptr), a_str, @bitCast(fieldWidth), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `subs211` instead
    ///
    pub const Subs211 = subs211;

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
    pub fn subs211(self: KLazyLocalizedString, a: anytype, fieldWidth: i32) KLocalizedString {
        comptime _ = @TypeOf(a)._is_KLocalizedString;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs211(@ptrCast(self.ptr), @ptrCast(a.ptr), @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs311` instead
    ///
    pub const Subs311 = subs311;

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
    pub fn subs311(self: KLazyLocalizedString, a: anytype, fieldWidth: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(a)._is_KLocalizedString;
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLazyLocalizedString_Subs311(@ptrCast(self.ptr), @ptrCast(a.ptr), @bitCast(fieldWidth), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/klazylocalizedstring.html#dtor.KLazyLocalizedString)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KLazyLocalizedString `
    ///
    pub fn delete(self: KLazyLocalizedString) void {
        qtc.KLazyLocalizedString_Delete(@ptrCast(self.ptr));
    }
};
