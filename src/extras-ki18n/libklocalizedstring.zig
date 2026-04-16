const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const kuitsetup_enums = @import("libkuitsetup.zig").enums;
const std = @import("std");
const Set_constu8 = std.StringHashMapUnmanaged(void);

/// ### [Upstream resources](https://api.kde.org/klocalizedstring.html)
pub const KLocalizedString = extern struct {
    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KLocalizedString,

    pub const _is_KLocalizedString = {};

    /// New constructs a new KLocalizedString object.
    ///
    pub fn New() KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_new() };
    }

    /// New2 constructs a new KLocalizedString object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: KLocalizedString `
    ///
    pub fn New2(rhs: anytype) KLocalizedString {
        comptime _ = @TypeOf(rhs)._is_KLocalizedString;
        return .{ .ptr = qtc.KLocalizedString_new2(@ptrCast(rhs.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` rhs: KLocalizedString `
    ///
    pub fn OperatorAssign(self: KLocalizedString, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_KLocalizedString;
        qtc.KLocalizedString_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    pub fn IsEmpty(self: KLocalizedString) bool {
        return qtc.KLocalizedString_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: KLocalizedString, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KLocalizedString_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedstring.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` languages: []const []const u8 `
    ///
    pub fn ToString2(self: KLocalizedString, allocator: std.mem.Allocator, languages: []const []const u8) []const u8 {
        const languages_arr = allocator.alloc(qtc.libqt_string, languages.len) catch @panic("klocalizedstring.ToString2: Memory allocation failed");
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
        var _str = qtc.KLocalizedString_ToString2(@ptrCast(self.ptr), languages_list);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedstring.ToString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: [:0]const u8 `
    ///
    pub fn ToString3(self: KLocalizedString, allocator: std.mem.Allocator, domain: [:0]const u8) []const u8 {
        const domain_Cstring = domain.ptr;
        var _str = qtc.KLocalizedString_ToString3(@ptrCast(self.ptr), domain_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedstring.ToString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` format: kuitsetup_enums.VisualFormat `
    ///
    pub fn ToString4(self: KLocalizedString, allocator: std.mem.Allocator, format: i32) []const u8 {
        var _str = qtc.KLocalizedString_ToString4(@ptrCast(self.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedstring.ToString4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#withLanguages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` languages: []const []const u8 `
    ///
    pub fn WithLanguages(self: KLocalizedString, allocator: std.mem.Allocator, languages: []const []const u8) KLocalizedString {
        const languages_arr = allocator.alloc(qtc.libqt_string, languages.len) catch @panic("klocalizedstring.WithLanguages: Memory allocation failed");
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
        return .{ .ptr = qtc.KLocalizedString_WithLanguages(@ptrCast(self.ptr), languages_list) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#withDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` domain: [:0]const u8 `
    ///
    pub fn WithDomain(self: KLocalizedString, domain: [:0]const u8) KLocalizedString {
        const domain_Cstring = domain.ptr;
        return .{ .ptr = qtc.KLocalizedString_WithDomain(@ptrCast(self.ptr), domain_Cstring) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#withFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` format: kuitsetup_enums.VisualFormat `
    ///
    pub fn WithFormat(self: KLocalizedString, format: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_WithFormat(@ptrCast(self.ptr), @bitCast(format)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: i32 `
    ///
    pub fn Subs(self: KLocalizedString, a: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: u32 `
    ///
    pub fn Subs2(self: KLocalizedString, a: u32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs2(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: isize `
    ///
    pub fn Subs3(self: KLocalizedString, a: isize) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs3(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: usize `
    ///
    pub fn Subs4(self: KLocalizedString, a: usize) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs4(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: isize `
    ///
    pub fn Subs5(self: KLocalizedString, a: isize) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs5(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: usize `
    ///
    pub fn Subs6(self: KLocalizedString, a: usize) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs6(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: f64 `
    ///
    pub fn Subs7(self: KLocalizedString, a: f64) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs7(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: QChar `
    ///
    pub fn Subs8(self: KLocalizedString, a: anytype) KLocalizedString {
        comptime _ = @TypeOf(a)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs8(@ptrCast(self.ptr), @ptrCast(a.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: []const u8 `
    ///
    pub fn Subs9(self: KLocalizedString, a: []const u8) KLocalizedString {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return .{ .ptr = qtc.KLocalizedString_Subs9(@ptrCast(self.ptr), a_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: KLocalizedString `
    ///
    pub fn Subs10(self: KLocalizedString, a: anytype) KLocalizedString {
        comptime _ = @TypeOf(a)._is_KLocalizedString;
        return .{ .ptr = qtc.KLocalizedString_Subs10(@ptrCast(self.ptr), @ptrCast(a.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#inContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn InContext(self: KLocalizedString, key: []const u8, value: []const u8) KLocalizedString {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        return .{ .ptr = qtc.KLocalizedString_InContext(@ptrCast(self.ptr), key_str, value_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#relaxSubs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    pub fn RelaxSubs(self: KLocalizedString) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_RelaxSubs(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#ignoreMarkup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    pub fn IgnoreMarkup(self: KLocalizedString) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_IgnoreMarkup(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#untranslatedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UntranslatedText(self: KLocalizedString, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KLocalizedString_UntranslatedText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("klocalizedstring.UntranslatedText: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#setApplicationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` domain: []u8 `
    ///
    pub fn SetApplicationDomain(domain: []u8) void {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        qtc.KLocalizedString_SetApplicationDomain(domain_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#applicationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationDomain(allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KLocalizedString_ApplicationDomain();
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("klocalizedstring.ApplicationDomain: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#languages)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Languages(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KLocalizedString_Languages();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("klocalizedstring.Languages: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("klocalizedstring.Languages: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#setLanguages)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` languages: []const []const u8 `
    ///
    pub fn SetLanguages(allocator: std.mem.Allocator, languages: []const []const u8) void {
        const languages_arr = allocator.alloc(qtc.libqt_string, languages.len) catch @panic("klocalizedstring.SetLanguages: Memory allocation failed");
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
        qtc.KLocalizedString_SetLanguages(languages_list);
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#clearLanguages)
    ///
    pub fn ClearLanguages() void {
        qtc.KLocalizedString_ClearLanguages();
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#isApplicationTranslatedInto)
    ///
    /// ## Parameter(s):
    ///
    /// ` language: []const u8 `
    ///
    pub fn IsApplicationTranslatedInto(language: []const u8) bool {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        return qtc.KLocalizedString_IsApplicationTranslatedInto(language_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#availableApplicationTranslations)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableApplicationTranslations(allocator: std.mem.Allocator) Set_constu8 {
        const _set: qtc.libqt_list = qtc.KLocalizedString_AvailableApplicationTranslations();
        var _ret: Set_constu8 = .empty;
        const _data: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.put(allocator, _data[i].data[0.._data[i].len], {}) catch @panic("klocalizedstring.AvailableApplicationTranslations: Set insertion failed");
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#availableDomainTranslations)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []u8 `
    ///
    pub fn AvailableDomainTranslations(allocator: std.mem.Allocator, domain: []u8) Set_constu8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const _set: qtc.libqt_list = qtc.KLocalizedString_AvailableDomainTranslations(domain_str);
        var _ret: Set_constu8 = .empty;
        const _data: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.put(allocator, _data[i].data[0.._data[i].len], {}) catch @panic("klocalizedstring.AvailableDomainTranslations: Set insertion failed");
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#addDomainLocaleDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` domain: []u8 `
    ///
    /// ` path: []const u8 `
    ///
    pub fn AddDomainLocaleDir(domain: []u8, path: []const u8) void {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KLocalizedString_AddDomainLocaleDir(domain_str, path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#localizedFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn LocalizedFilePath(allocator: std.mem.Allocator, filePath: []const u8) []const u8 {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        var _str = qtc.KLocalizedString_LocalizedFilePath(filePath_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedstring.LocalizedFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#removeAcceleratorMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` label: []const u8 `
    ///
    pub fn RemoveAcceleratorMarker(allocator: std.mem.Allocator, label: []const u8) []const u8 {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        var _str = qtc.KLocalizedString_RemoveAcceleratorMarker(label_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedstring.RemoveAcceleratorMarker: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: i32 `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs22(self: KLocalizedString, a: i32, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs22(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: i32 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    pub fn Subs32(self: KLocalizedString, a: i32, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs32(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: i32 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs42(self: KLocalizedString, a: i32, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs42(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: u32 `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs23(self: KLocalizedString, a: u32, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs23(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: u32 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    pub fn Subs33(self: KLocalizedString, a: u32, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs33(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: u32 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs43(self: KLocalizedString, a: u32, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs43(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: isize `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs24(self: KLocalizedString, a: isize, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs24(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: isize `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    pub fn Subs34(self: KLocalizedString, a: isize, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs34(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: isize `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs44(self: KLocalizedString, a: isize, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs44(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: usize `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs25(self: KLocalizedString, a: usize, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs25(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: usize `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    pub fn Subs35(self: KLocalizedString, a: usize, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs35(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: usize `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs45(self: KLocalizedString, a: usize, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs45(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: isize `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs26(self: KLocalizedString, a: isize, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs26(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: isize `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    pub fn Subs36(self: KLocalizedString, a: isize, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs36(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: isize `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs46(self: KLocalizedString, a: isize, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs46(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: usize `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs27(self: KLocalizedString, a: usize, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs27(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: usize `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    pub fn Subs37(self: KLocalizedString, a: usize, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs37(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: usize `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` base: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs47(self: KLocalizedString, a: usize, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs47(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: f64 `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs28(self: KLocalizedString, a: f64, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs28(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: f64 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    pub fn Subs38(self: KLocalizedString, a: f64, fieldWidth: i32, format: u8) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs38(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(format)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: f64 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    /// ` precision: i32 `
    ///
    pub fn Subs48(self: KLocalizedString, a: f64, fieldWidth: i32, format: u8, precision: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs48(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
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
    pub fn Subs52(self: KLocalizedString, a: f64, fieldWidth: i32, format: u8, precision: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs52(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision), @ptrCast(fillChar.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: QChar `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs29(self: KLocalizedString, a: anytype, fieldWidth: i32) KLocalizedString {
        comptime _ = @TypeOf(a)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs29(@ptrCast(self.ptr), @ptrCast(a.ptr), @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: QChar `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs39(self: KLocalizedString, a: anytype, fieldWidth: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(a)._is_QChar;
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs39(@ptrCast(self.ptr), @ptrCast(a.ptr), @bitCast(fieldWidth), @ptrCast(fillChar.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: []const u8 `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs210(self: KLocalizedString, a: []const u8, fieldWidth: i32) KLocalizedString {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return .{ .ptr = qtc.KLocalizedString_Subs210(@ptrCast(self.ptr), a_str, @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: []const u8 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs310(self: KLocalizedString, a: []const u8, fieldWidth: i32, fillChar: anytype) KLocalizedString {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs310(@ptrCast(self.ptr), a_str, @bitCast(fieldWidth), @ptrCast(fillChar.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: KLocalizedString `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn Subs211(self: KLocalizedString, a: anytype, fieldWidth: i32) KLocalizedString {
        comptime _ = @TypeOf(a)._is_KLocalizedString;
        return .{ .ptr = qtc.KLocalizedString_Subs211(@ptrCast(self.ptr), @ptrCast(a.ptr), @bitCast(fieldWidth)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: KLocalizedString `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn Subs311(self: KLocalizedString, a: anytype, fieldWidth: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(a)._is_KLocalizedString;
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs311(@ptrCast(self.ptr), @ptrCast(a.ptr), @bitCast(fieldWidth), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#dtor.KLocalizedString)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KLocalizedString `
    ///
    pub fn Delete(self: KLocalizedString) void {
        qtc.KLocalizedString_Delete(@ptrCast(self.ptr));
    }
};
