const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kuitsetup_enums = @import("libkuitsetup.zig").enums;
const std = @import("std");

/// https://api.kde.org/klazylocalizedstring.html
pub const klazylocalizedstring = struct {
    /// New constructs a new KLazyLocalizedString object.
    ///
    /// ``` other: QtC.KLazyLocalizedString ```
    pub fn New(other: ?*anyopaque) QtC.KLazyLocalizedString {
        return qtc.KLazyLocalizedString_new(@ptrCast(other));
    }

    /// New2 constructs a new KLazyLocalizedString object and invalidates the source KLazyLocalizedString object.
    ///
    /// ``` other: QtC.KLazyLocalizedString ```
    pub fn New2(other: ?*anyopaque) QtC.KLazyLocalizedString {
        return qtc.KLazyLocalizedString_new2(@ptrCast(other));
    }

    /// New3 constructs a new KLazyLocalizedString object.
    ///
    ///
    pub fn New3() QtC.KLazyLocalizedString {
        return qtc.KLazyLocalizedString_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.KLazyLocalizedString, other: QtC.KLazyLocalizedString ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KLazyLocalizedString_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.KLazyLocalizedString, other: QtC.KLazyLocalizedString ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KLazyLocalizedString_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#operator)
    ///
    /// ``` self: QtC.KLazyLocalizedString ```
    pub fn ToKLocalizedString(self: ?*anyopaque) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_ToKLocalizedString(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#isEmpty)
    ///
    /// ``` self: QtC.KLazyLocalizedString ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.KLazyLocalizedString_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#untranslatedText)
    ///
    /// ``` self: QtC.KLazyLocalizedString ```
    pub fn UntranslatedText(self: ?*anyopaque) []const u8 {
        const _ret = qtc.KLazyLocalizedString_UntranslatedText(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#toString)
    ///
    /// ``` self: QtC.KLazyLocalizedString, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KLazyLocalizedString_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klazylocalizedstring.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#toString)
    ///
    /// ``` self: QtC.KLazyLocalizedString, languages: [][]const u8, allocator: std.mem.Allocator ```
    pub fn ToString2(self: ?*anyopaque, languages: [][]const u8, allocator: std.mem.Allocator) []const u8 {
        var languages_arr = allocator.alloc(qtc.libqt_string, languages.len) catch @panic("klazylocalizedstring.ToString2: Memory allocation failed");
        defer allocator.free(languages_arr);
        for (languages, 0..languages.len) |item, i| {
            languages_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const languages_list = qtc.libqt_list{
            .len = languages.len,
            .data = languages_arr.ptr,
        };
        const _str = qtc.KLazyLocalizedString_ToString2(@ptrCast(self), languages_list);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klazylocalizedstring.ToString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#toString)
    ///
    /// ``` self: QtC.KLazyLocalizedString, domain: []const u8, allocator: std.mem.Allocator ```
    pub fn ToString3(self: ?*anyopaque, domain: []const u8, allocator: std.mem.Allocator) []const u8 {
        const domain_Cstring = domain.ptr;
        const _str = qtc.KLazyLocalizedString_ToString3(@ptrCast(self), domain_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klazylocalizedstring.ToString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#toString)
    ///
    /// ``` self: QtC.KLazyLocalizedString, format: kuitsetup_enums.VisualFormat, allocator: std.mem.Allocator ```
    pub fn ToString4(self: ?*anyopaque, format: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KLazyLocalizedString_ToString4(@ptrCast(self), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klazylocalizedstring.ToString4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#withLanguages)
    ///
    /// ``` self: QtC.KLazyLocalizedString, languages: [][]const u8, allocator: std.mem.Allocator ```
    pub fn WithLanguages(self: ?*anyopaque, languages: [][]const u8, allocator: std.mem.Allocator) QtC.KLocalizedString {
        var languages_arr = allocator.alloc(qtc.libqt_string, languages.len) catch @panic("klazylocalizedstring.WithLanguages: Memory allocation failed");
        defer allocator.free(languages_arr);
        for (languages, 0..languages.len) |item, i| {
            languages_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const languages_list = qtc.libqt_list{
            .len = languages.len,
            .data = languages_arr.ptr,
        };
        return qtc.KLazyLocalizedString_WithLanguages(@ptrCast(self), languages_list);
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#withDomain)
    ///
    /// ``` self: QtC.KLazyLocalizedString, domain: []const u8 ```
    pub fn WithDomain(self: ?*anyopaque, domain: []const u8) QtC.KLocalizedString {
        const domain_Cstring = domain.ptr;
        return qtc.KLazyLocalizedString_WithDomain(@ptrCast(self), domain_Cstring);
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#withFormat)
    ///
    /// ``` self: QtC.KLazyLocalizedString, format: kuitsetup_enums.VisualFormat ```
    pub fn WithFormat(self: ?*anyopaque, format: i32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_WithFormat(@ptrCast(self), @intCast(format));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: i32 ```
    pub fn Subs(self: ?*anyopaque, a: i32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs(@ptrCast(self), @intCast(a));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: u32 ```
    pub fn Subs2(self: ?*anyopaque, a: u32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs2(@ptrCast(self), @intCast(a));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: i64 ```
    pub fn Subs3(self: ?*anyopaque, a: i64) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs3(@ptrCast(self), @intCast(a));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: u64 ```
    pub fn Subs4(self: ?*anyopaque, a: u64) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs4(@ptrCast(self), @intCast(a));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: i64 ```
    pub fn Subs5(self: ?*anyopaque, a: i64) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs5(@ptrCast(self), @intCast(a));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: u64 ```
    pub fn Subs6(self: ?*anyopaque, a: u64) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs6(@ptrCast(self), @intCast(a));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: f64 ```
    pub fn Subs7(self: ?*anyopaque, a: f64) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs7(@ptrCast(self), @floatCast(a));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: QtC.QChar ```
    pub fn Subs8(self: ?*anyopaque, a: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs8(@ptrCast(self), @ptrCast(a));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: []const u8 ```
    pub fn Subs9(self: ?*anyopaque, a: []const u8) QtC.KLocalizedString {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.KLazyLocalizedString_Subs9(@ptrCast(self), a_str);
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: QtC.KLocalizedString ```
    pub fn Subs10(self: ?*anyopaque, a: ?*anyopaque) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs10(@ptrCast(self), @ptrCast(a));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#inContext)
    ///
    /// ``` self: QtC.KLazyLocalizedString, key: []const u8, value: []const u8 ```
    pub fn InContext(self: ?*anyopaque, key: []const u8, value: []const u8) QtC.KLocalizedString {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        return qtc.KLazyLocalizedString_InContext(@ptrCast(self), key_str, value_str);
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#relaxSubs)
    ///
    /// ``` self: QtC.KLazyLocalizedString ```
    pub fn RelaxSubs(self: ?*anyopaque) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_RelaxSubs(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#ignoreMarkup)
    ///
    /// ``` self: QtC.KLazyLocalizedString ```
    pub fn IgnoreMarkup(self: ?*anyopaque) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_IgnoreMarkup(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: i32, fieldWidth: i32 ```
    pub fn Subs22(self: ?*anyopaque, a: i32, fieldWidth: i32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs22(@ptrCast(self), @intCast(a), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: i32, fieldWidth: i32, base: i32 ```
    pub fn Subs32(self: ?*anyopaque, a: i32, fieldWidth: i32, base: i32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs32(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: i32, fieldWidth: i32, base: i32, fillChar: QtC.QChar ```
    pub fn Subs42(self: ?*anyopaque, a: i32, fieldWidth: i32, base: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs42(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: u32, fieldWidth: i32 ```
    pub fn Subs23(self: ?*anyopaque, a: u32, fieldWidth: i32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs23(@ptrCast(self), @intCast(a), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: u32, fieldWidth: i32, base: i32 ```
    pub fn Subs33(self: ?*anyopaque, a: u32, fieldWidth: i32, base: i32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs33(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: u32, fieldWidth: i32, base: i32, fillChar: QtC.QChar ```
    pub fn Subs43(self: ?*anyopaque, a: u32, fieldWidth: i32, base: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs43(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: i64, fieldWidth: i32 ```
    pub fn Subs24(self: ?*anyopaque, a: i64, fieldWidth: i32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs24(@ptrCast(self), @intCast(a), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: i64, fieldWidth: i32, base: i32 ```
    pub fn Subs34(self: ?*anyopaque, a: i64, fieldWidth: i32, base: i32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs34(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: i64, fieldWidth: i32, base: i32, fillChar: QtC.QChar ```
    pub fn Subs44(self: ?*anyopaque, a: i64, fieldWidth: i32, base: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs44(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: u64, fieldWidth: i32 ```
    pub fn Subs25(self: ?*anyopaque, a: u64, fieldWidth: i32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs25(@ptrCast(self), @intCast(a), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: u64, fieldWidth: i32, base: i32 ```
    pub fn Subs35(self: ?*anyopaque, a: u64, fieldWidth: i32, base: i32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs35(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: u64, fieldWidth: i32, base: i32, fillChar: QtC.QChar ```
    pub fn Subs45(self: ?*anyopaque, a: u64, fieldWidth: i32, base: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs45(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: i64, fieldWidth: i32 ```
    pub fn Subs26(self: ?*anyopaque, a: i64, fieldWidth: i32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs26(@ptrCast(self), @intCast(a), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: i64, fieldWidth: i32, base: i32 ```
    pub fn Subs36(self: ?*anyopaque, a: i64, fieldWidth: i32, base: i32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs36(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: i64, fieldWidth: i32, base: i32, fillChar: QtC.QChar ```
    pub fn Subs46(self: ?*anyopaque, a: i64, fieldWidth: i32, base: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs46(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: u64, fieldWidth: i32 ```
    pub fn Subs27(self: ?*anyopaque, a: u64, fieldWidth: i32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs27(@ptrCast(self), @intCast(a), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: u64, fieldWidth: i32, base: i32 ```
    pub fn Subs37(self: ?*anyopaque, a: u64, fieldWidth: i32, base: i32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs37(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: u64, fieldWidth: i32, base: i32, fillChar: QtC.QChar ```
    pub fn Subs47(self: ?*anyopaque, a: u64, fieldWidth: i32, base: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs47(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: f64, fieldWidth: i32 ```
    pub fn Subs28(self: ?*anyopaque, a: f64, fieldWidth: i32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs28(@ptrCast(self), @floatCast(a), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: f64, fieldWidth: i32, format: i8 ```
    pub fn Subs38(self: ?*anyopaque, a: f64, fieldWidth: i32, format: i8) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs38(@ptrCast(self), @floatCast(a), @intCast(fieldWidth), @intCast(format));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: f64, fieldWidth: i32, format: i8, precision: i32 ```
    pub fn Subs48(self: ?*anyopaque, a: f64, fieldWidth: i32, format: i8, precision: i32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs48(@ptrCast(self), @floatCast(a), @intCast(fieldWidth), @intCast(format), @intCast(precision));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: f64, fieldWidth: i32, format: i8, precision: i32, fillChar: QtC.QChar ```
    pub fn Subs52(self: ?*anyopaque, a: f64, fieldWidth: i32, format: i8, precision: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs52(@ptrCast(self), @floatCast(a), @intCast(fieldWidth), @intCast(format), @intCast(precision), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: QtC.QChar, fieldWidth: i32 ```
    pub fn Subs29(self: ?*anyopaque, a: QtC.QChar, fieldWidth: i32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs29(@ptrCast(self), @ptrCast(a), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: QtC.QChar, fieldWidth: i32, fillChar: QtC.QChar ```
    pub fn Subs39(self: ?*anyopaque, a: QtC.QChar, fieldWidth: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs39(@ptrCast(self), @ptrCast(a), @intCast(fieldWidth), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: []const u8, fieldWidth: i32 ```
    pub fn Subs210(self: ?*anyopaque, a: []const u8, fieldWidth: i32) QtC.KLocalizedString {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.KLazyLocalizedString_Subs210(@ptrCast(self), a_str, @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: []const u8, fieldWidth: i32, fillChar: QtC.QChar ```
    pub fn Subs310(self: ?*anyopaque, a: []const u8, fieldWidth: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.KLazyLocalizedString_Subs310(@ptrCast(self), a_str, @intCast(fieldWidth), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: QtC.KLocalizedString, fieldWidth: i32 ```
    pub fn Subs211(self: ?*anyopaque, a: ?*anyopaque, fieldWidth: i32) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs211(@ptrCast(self), @ptrCast(a), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLazyLocalizedString, a: QtC.KLocalizedString, fieldWidth: i32, fillChar: QtC.QChar ```
    pub fn Subs311(self: ?*anyopaque, a: ?*anyopaque, fieldWidth: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLazyLocalizedString_Subs311(@ptrCast(self), @ptrCast(a), @intCast(fieldWidth), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klazylocalizedstring.html#dtor.KLazyLocalizedString)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KLazyLocalizedString ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KLazyLocalizedString_Delete(@ptrCast(self));
    }
};
