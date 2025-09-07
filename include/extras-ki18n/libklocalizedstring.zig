const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kuitsetup_enums = @import("libkuitsetup.zig").enums;
const std = @import("std");
pub const set_constu8 = std.StringHashMapUnmanaged(void);

/// https://api.kde.org/klocalizedstring.html
pub const klocalizedstring = struct {
    /// New constructs a new KLocalizedString object.
    ///
    ///
    pub fn New() QtC.KLocalizedString {
        return qtc.KLocalizedString_new();
    }

    /// New2 constructs a new KLocalizedString object.
    ///
    /// ``` rhs: QtC.KLocalizedString ```
    pub fn New2(rhs: ?*anyopaque) QtC.KLocalizedString {
        return qtc.KLocalizedString_new2(@ptrCast(rhs));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#operator-eq)
    ///
    /// ``` self: QtC.KLocalizedString, rhs: QtC.KLocalizedString ```
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.KLocalizedString_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#isEmpty)
    ///
    /// ``` self: QtC.KLocalizedString ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.KLocalizedString_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#toString)
    ///
    /// ``` self: QtC.KLocalizedString, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KLocalizedString_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedstring.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#toString)
    ///
    /// ``` self: QtC.KLocalizedString, languages: [][]const u8, allocator: std.mem.Allocator ```
    pub fn ToString2(self: ?*anyopaque, languages: [][]const u8, allocator: std.mem.Allocator) []const u8 {
        var languages_arr = allocator.alloc(qtc.libqt_string, languages.len) catch @panic("klocalizedstring.ToString2: Memory allocation failed");
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
        const _str = qtc.KLocalizedString_ToString2(@ptrCast(self), languages_list);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedstring.ToString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#toString)
    ///
    /// ``` self: QtC.KLocalizedString, domain: []const u8, allocator: std.mem.Allocator ```
    pub fn ToString3(self: ?*anyopaque, domain: []const u8, allocator: std.mem.Allocator) []const u8 {
        const domain_Cstring = domain.ptr;
        const _str = qtc.KLocalizedString_ToString3(@ptrCast(self), domain_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedstring.ToString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#toString)
    ///
    /// ``` self: QtC.KLocalizedString, format: kuitsetup_enums.VisualFormat, allocator: std.mem.Allocator ```
    pub fn ToString4(self: ?*anyopaque, format: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KLocalizedString_ToString4(@ptrCast(self), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedstring.ToString4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#withLanguages)
    ///
    /// ``` self: QtC.KLocalizedString, languages: [][]const u8, allocator: std.mem.Allocator ```
    pub fn WithLanguages(self: ?*anyopaque, languages: [][]const u8, allocator: std.mem.Allocator) QtC.KLocalizedString {
        var languages_arr = allocator.alloc(qtc.libqt_string, languages.len) catch @panic("klocalizedstring.WithLanguages: Memory allocation failed");
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
        return qtc.KLocalizedString_WithLanguages(@ptrCast(self), languages_list);
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#withDomain)
    ///
    /// ``` self: QtC.KLocalizedString, domain: []const u8 ```
    pub fn WithDomain(self: ?*anyopaque, domain: []const u8) QtC.KLocalizedString {
        const domain_Cstring = domain.ptr;
        return qtc.KLocalizedString_WithDomain(@ptrCast(self), domain_Cstring);
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#withFormat)
    ///
    /// ``` self: QtC.KLocalizedString, format: kuitsetup_enums.VisualFormat ```
    pub fn WithFormat(self: ?*anyopaque, format: i32) QtC.KLocalizedString {
        return qtc.KLocalizedString_WithFormat(@ptrCast(self), @intCast(format));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: i32 ```
    pub fn Subs(self: ?*anyopaque, a: i32) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs(@ptrCast(self), @intCast(a));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: u32 ```
    pub fn Subs2(self: ?*anyopaque, a: u32) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs2(@ptrCast(self), @intCast(a));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: i64 ```
    pub fn Subs3(self: ?*anyopaque, a: i64) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs3(@ptrCast(self), @intCast(a));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: u64 ```
    pub fn Subs4(self: ?*anyopaque, a: u64) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs4(@ptrCast(self), @intCast(a));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: i64 ```
    pub fn Subs5(self: ?*anyopaque, a: i64) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs5(@ptrCast(self), @intCast(a));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: u64 ```
    pub fn Subs6(self: ?*anyopaque, a: u64) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs6(@ptrCast(self), @intCast(a));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: f64 ```
    pub fn Subs7(self: ?*anyopaque, a: f64) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs7(@ptrCast(self), @floatCast(a));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: QtC.QChar ```
    pub fn Subs8(self: ?*anyopaque, a: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs8(@ptrCast(self), @ptrCast(a));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: []const u8 ```
    pub fn Subs9(self: ?*anyopaque, a: []const u8) QtC.KLocalizedString {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.KLocalizedString_Subs9(@ptrCast(self), a_str);
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: QtC.KLocalizedString ```
    pub fn Subs10(self: ?*anyopaque, a: ?*anyopaque) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs10(@ptrCast(self), @ptrCast(a));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#inContext)
    ///
    /// ``` self: QtC.KLocalizedString, key: []const u8, value: []const u8 ```
    pub fn InContext(self: ?*anyopaque, key: []const u8, value: []const u8) QtC.KLocalizedString {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        return qtc.KLocalizedString_InContext(@ptrCast(self), key_str, value_str);
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#relaxSubs)
    ///
    /// ``` self: QtC.KLocalizedString ```
    pub fn RelaxSubs(self: ?*anyopaque) QtC.KLocalizedString {
        return qtc.KLocalizedString_RelaxSubs(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#ignoreMarkup)
    ///
    /// ``` self: QtC.KLocalizedString ```
    pub fn IgnoreMarkup(self: ?*anyopaque) QtC.KLocalizedString {
        return qtc.KLocalizedString_IgnoreMarkup(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#untranslatedText)
    ///
    /// ``` self: QtC.KLocalizedString, allocator: std.mem.Allocator ```
    pub fn UntranslatedText(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KLocalizedString_UntranslatedText(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("klocalizedstring.UntranslatedText: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#setApplicationDomain)
    ///
    /// ``` domain: []u8 ```
    pub fn SetApplicationDomain(domain: []u8) void {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        qtc.KLocalizedString_SetApplicationDomain(domain_str);
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#applicationDomain)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationDomain(allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KLocalizedString_ApplicationDomain();
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("klocalizedstring.ApplicationDomain: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#languages)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Languages(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KLocalizedString_Languages();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#setLanguages)
    ///
    /// ``` languages: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetLanguages(languages: [][]const u8, allocator: std.mem.Allocator) void {
        var languages_arr = allocator.alloc(qtc.libqt_string, languages.len) catch @panic("klocalizedstring.SetLanguages: Memory allocation failed");
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
        qtc.KLocalizedString_SetLanguages(languages_list);
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#clearLanguages)
    ///
    ///
    pub fn ClearLanguages() void {
        qtc.KLocalizedString_ClearLanguages();
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#isApplicationTranslatedInto)
    ///
    /// ``` language: []const u8 ```
    pub fn IsApplicationTranslatedInto(language: []const u8) bool {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        return qtc.KLocalizedString_IsApplicationTranslatedInto(language_str);
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#availableApplicationTranslations)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AvailableApplicationTranslations(allocator: std.mem.Allocator) set_constu8 {
        const _set: qtc.libqt_list = qtc.KLocalizedString_AvailableApplicationTranslations();
        var _ret: set_constu8 = .empty;
        const _data: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i| {
            _ret.put(allocator, _data[i].data[0.._data[i].len], {}) catch @panic("klocalizedstring.AvailableApplicationTranslations: Map insertion failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#availableDomainTranslations)
    ///
    /// ``` domain: []u8, allocator: std.mem.Allocator ```
    pub fn AvailableDomainTranslations(domain: []u8, allocator: std.mem.Allocator) set_constu8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const _set: qtc.libqt_list = qtc.KLocalizedString_AvailableDomainTranslations(domain_str);
        var _ret: set_constu8 = .empty;
        const _data: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i| {
            _ret.put(allocator, _data[i].data[0.._data[i].len], {}) catch @panic("klocalizedstring.AvailableDomainTranslations: Map insertion failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#addDomainLocaleDir)
    ///
    /// ``` domain: []u8, path: []const u8 ```
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

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#localizedFilePath)
    ///
    /// ``` filePath: []const u8, allocator: std.mem.Allocator ```
    pub fn LocalizedFilePath(filePath: []const u8, allocator: std.mem.Allocator) []const u8 {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        const _str = qtc.KLocalizedString_LocalizedFilePath(filePath_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedstring.LocalizedFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#removeAcceleratorMarker)
    ///
    /// ``` label: []const u8, allocator: std.mem.Allocator ```
    pub fn RemoveAcceleratorMarker(label: []const u8, allocator: std.mem.Allocator) []const u8 {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        const _str = qtc.KLocalizedString_RemoveAcceleratorMarker(label_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedstring.RemoveAcceleratorMarker: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: i32, fieldWidth: i32 ```
    pub fn Subs22(self: ?*anyopaque, a: i32, fieldWidth: i32) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs22(@ptrCast(self), @intCast(a), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: i32, fieldWidth: i32, base: i32 ```
    pub fn Subs32(self: ?*anyopaque, a: i32, fieldWidth: i32, base: i32) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs32(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: i32, fieldWidth: i32, base: i32, fillChar: QtC.QChar ```
    pub fn Subs42(self: ?*anyopaque, a: i32, fieldWidth: i32, base: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs42(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: u32, fieldWidth: i32 ```
    pub fn Subs23(self: ?*anyopaque, a: u32, fieldWidth: i32) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs23(@ptrCast(self), @intCast(a), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: u32, fieldWidth: i32, base: i32 ```
    pub fn Subs33(self: ?*anyopaque, a: u32, fieldWidth: i32, base: i32) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs33(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: u32, fieldWidth: i32, base: i32, fillChar: QtC.QChar ```
    pub fn Subs43(self: ?*anyopaque, a: u32, fieldWidth: i32, base: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs43(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: i64, fieldWidth: i32 ```
    pub fn Subs24(self: ?*anyopaque, a: i64, fieldWidth: i32) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs24(@ptrCast(self), @intCast(a), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: i64, fieldWidth: i32, base: i32 ```
    pub fn Subs34(self: ?*anyopaque, a: i64, fieldWidth: i32, base: i32) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs34(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: i64, fieldWidth: i32, base: i32, fillChar: QtC.QChar ```
    pub fn Subs44(self: ?*anyopaque, a: i64, fieldWidth: i32, base: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs44(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: u64, fieldWidth: i32 ```
    pub fn Subs25(self: ?*anyopaque, a: u64, fieldWidth: i32) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs25(@ptrCast(self), @intCast(a), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: u64, fieldWidth: i32, base: i32 ```
    pub fn Subs35(self: ?*anyopaque, a: u64, fieldWidth: i32, base: i32) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs35(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: u64, fieldWidth: i32, base: i32, fillChar: QtC.QChar ```
    pub fn Subs45(self: ?*anyopaque, a: u64, fieldWidth: i32, base: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs45(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: i64, fieldWidth: i32 ```
    pub fn Subs26(self: ?*anyopaque, a: i64, fieldWidth: i32) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs26(@ptrCast(self), @intCast(a), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: i64, fieldWidth: i32, base: i32 ```
    pub fn Subs36(self: ?*anyopaque, a: i64, fieldWidth: i32, base: i32) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs36(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: i64, fieldWidth: i32, base: i32, fillChar: QtC.QChar ```
    pub fn Subs46(self: ?*anyopaque, a: i64, fieldWidth: i32, base: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs46(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: u64, fieldWidth: i32 ```
    pub fn Subs27(self: ?*anyopaque, a: u64, fieldWidth: i32) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs27(@ptrCast(self), @intCast(a), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: u64, fieldWidth: i32, base: i32 ```
    pub fn Subs37(self: ?*anyopaque, a: u64, fieldWidth: i32, base: i32) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs37(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: u64, fieldWidth: i32, base: i32, fillChar: QtC.QChar ```
    pub fn Subs47(self: ?*anyopaque, a: u64, fieldWidth: i32, base: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs47(@ptrCast(self), @intCast(a), @intCast(fieldWidth), @intCast(base), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: f64, fieldWidth: i32 ```
    pub fn Subs28(self: ?*anyopaque, a: f64, fieldWidth: i32) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs28(@ptrCast(self), @floatCast(a), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: f64, fieldWidth: i32, format: i8 ```
    pub fn Subs38(self: ?*anyopaque, a: f64, fieldWidth: i32, format: i8) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs38(@ptrCast(self), @floatCast(a), @intCast(fieldWidth), @intCast(format));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: f64, fieldWidth: i32, format: i8, precision: i32 ```
    pub fn Subs48(self: ?*anyopaque, a: f64, fieldWidth: i32, format: i8, precision: i32) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs48(@ptrCast(self), @floatCast(a), @intCast(fieldWidth), @intCast(format), @intCast(precision));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: f64, fieldWidth: i32, format: i8, precision: i32, fillChar: QtC.QChar ```
    pub fn Subs52(self: ?*anyopaque, a: f64, fieldWidth: i32, format: i8, precision: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs52(@ptrCast(self), @floatCast(a), @intCast(fieldWidth), @intCast(format), @intCast(precision), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: QtC.QChar, fieldWidth: i32 ```
    pub fn Subs29(self: ?*anyopaque, a: QtC.QChar, fieldWidth: i32) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs29(@ptrCast(self), @ptrCast(a), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: QtC.QChar, fieldWidth: i32, fillChar: QtC.QChar ```
    pub fn Subs39(self: ?*anyopaque, a: QtC.QChar, fieldWidth: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs39(@ptrCast(self), @ptrCast(a), @intCast(fieldWidth), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: []const u8, fieldWidth: i32 ```
    pub fn Subs210(self: ?*anyopaque, a: []const u8, fieldWidth: i32) QtC.KLocalizedString {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.KLocalizedString_Subs210(@ptrCast(self), a_str, @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: []const u8, fieldWidth: i32, fillChar: QtC.QChar ```
    pub fn Subs310(self: ?*anyopaque, a: []const u8, fieldWidth: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.KLocalizedString_Subs310(@ptrCast(self), a_str, @intCast(fieldWidth), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: QtC.KLocalizedString, fieldWidth: i32 ```
    pub fn Subs211(self: ?*anyopaque, a: ?*anyopaque, fieldWidth: i32) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs211(@ptrCast(self), @ptrCast(a), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ``` self: QtC.KLocalizedString, a: QtC.KLocalizedString, fieldWidth: i32, fillChar: QtC.QChar ```
    pub fn Subs311(self: ?*anyopaque, a: ?*anyopaque, fieldWidth: i32, fillChar: QtC.QChar) QtC.KLocalizedString {
        return qtc.KLocalizedString_Subs311(@ptrCast(self), @ptrCast(a), @intCast(fieldWidth), @ptrCast(fillChar));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedstring.html#dtor.KLocalizedString)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KLocalizedString ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KLocalizedString_Delete(@ptrCast(self));
    }
};
