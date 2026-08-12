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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KLocalizedString object in C++ memory
    ///
    pub fn new() KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KLocalizedString object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: KLocalizedString `
    ///
    pub fn new2(rhs: anytype) KLocalizedString {
        comptime _ = @TypeOf(rhs)._is_KLocalizedString;
        return .{ .ptr = qtc.KLocalizedString_new2(@ptrCast(rhs.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` rhs: KLocalizedString `
    ///
    pub fn operatorAssign(self: KLocalizedString, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_KLocalizedString;
        qtc.KLocalizedString_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    pub fn isEmpty(self: KLocalizedString) bool {
        return qtc.KLocalizedString_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: KLocalizedString, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KLocalizedString_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedString.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString2` instead
    ///
    pub const ToString2 = toString2;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _languages: []const []const u8 `
    ///
    pub fn toString2(self: KLocalizedString, allocator: std.mem.Allocator, _languages: []const []const u8) []const u8 {
        const languages_arr = allocator.alloc(qtc.libqt_string, _languages.len) catch @panic("KLocalizedString.toString2: Memory allocation failed");
        defer allocator.free(languages_arr);
        for (_languages, 0.._languages.len) |str_item, i|
            languages_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const languages_list = qtc.libqt_list{
            .len = _languages.len,
            .data = languages_arr.ptr,
        };
        var _str = qtc.KLocalizedString_ToString2(@ptrCast(self.ptr), languages_list);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedString.toString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString3` instead
    ///
    pub const ToString3 = toString3;

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
    pub fn toString3(self: KLocalizedString, allocator: std.mem.Allocator, domain: [:0]const u8) []const u8 {
        const domain_Cstring = domain.ptr;
        var _str = qtc.KLocalizedString_ToString3(@ptrCast(self.ptr), domain_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedString.toString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString4` instead
    ///
    pub const ToString4 = toString4;

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
    pub fn toString4(self: KLocalizedString, allocator: std.mem.Allocator, format: i32) []const u8 {
        var _str = qtc.KLocalizedString_ToString4(@ptrCast(self.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedString.toString4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `withLanguages` instead
    ///
    pub const WithLanguages = withLanguages;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#withLanguages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _languages: []const []const u8 `
    ///
    pub fn withLanguages(self: KLocalizedString, allocator: std.mem.Allocator, _languages: []const []const u8) KLocalizedString {
        const languages_arr = allocator.alloc(qtc.libqt_string, _languages.len) catch @panic("KLocalizedString.withLanguages: Memory allocation failed");
        defer allocator.free(languages_arr);
        for (_languages, 0.._languages.len) |str_item, i|
            languages_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const languages_list = qtc.libqt_list{
            .len = _languages.len,
            .data = languages_arr.ptr,
        };
        return .{ .ptr = qtc.KLocalizedString_WithLanguages(@ptrCast(self.ptr), languages_list) };
    }

    /// ### DEPRECATED: Use `withDomain` instead
    ///
    pub const WithDomain = withDomain;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#withDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` domain: [:0]const u8 `
    ///
    pub fn withDomain(self: KLocalizedString, domain: [:0]const u8) KLocalizedString {
        const domain_Cstring = domain.ptr;
        return .{ .ptr = qtc.KLocalizedString_WithDomain(@ptrCast(self.ptr), domain_Cstring) };
    }

    /// ### DEPRECATED: Use `withFormat` instead
    ///
    pub const WithFormat = withFormat;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#withFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` format: kuitsetup_enums.VisualFormat `
    ///
    pub fn withFormat(self: KLocalizedString, format: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_WithFormat(@ptrCast(self.ptr), @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `subs` instead
    ///
    pub const Subs = subs;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: i32 `
    ///
    pub fn subs(self: KLocalizedString, a: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `subs2` instead
    ///
    pub const Subs2 = subs2;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: u32 `
    ///
    pub fn subs2(self: KLocalizedString, a: u32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs2(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `subs3` instead
    ///
    pub const Subs3 = subs3;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: isize `
    ///
    pub fn subs3(self: KLocalizedString, a: isize) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs3(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `subs4` instead
    ///
    pub const Subs4 = subs4;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: usize `
    ///
    pub fn subs4(self: KLocalizedString, a: usize) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs4(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `subs5` instead
    ///
    pub const Subs5 = subs5;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: isize `
    ///
    pub fn subs5(self: KLocalizedString, a: isize) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs5(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `subs6` instead
    ///
    pub const Subs6 = subs6;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: usize `
    ///
    pub fn subs6(self: KLocalizedString, a: usize) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs6(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `subs7` instead
    ///
    pub const Subs7 = subs7;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: f64 `
    ///
    pub fn subs7(self: KLocalizedString, a: f64) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs7(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `subs8` instead
    ///
    pub const Subs8 = subs8;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: QChar `
    ///
    pub fn subs8(self: KLocalizedString, a: anytype) KLocalizedString {
        comptime _ = @TypeOf(a)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs8(@ptrCast(self.ptr), @ptrCast(a.ptr)) };
    }

    /// ### DEPRECATED: Use `subs9` instead
    ///
    pub const Subs9 = subs9;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: []const u8 `
    ///
    pub fn subs9(self: KLocalizedString, a: []const u8) KLocalizedString {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return .{ .ptr = qtc.KLocalizedString_Subs9(@ptrCast(self.ptr), a_str) };
    }

    /// ### DEPRECATED: Use `subs10` instead
    ///
    pub const Subs10 = subs10;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` a: KLocalizedString `
    ///
    pub fn subs10(self: KLocalizedString, a: anytype) KLocalizedString {
        comptime _ = @TypeOf(a)._is_KLocalizedString;
        return .{ .ptr = qtc.KLocalizedString_Subs10(@ptrCast(self.ptr), @ptrCast(a.ptr)) };
    }

    /// ### DEPRECATED: Use `inContext` instead
    ///
    pub const InContext = inContext;

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
    pub fn inContext(self: KLocalizedString, key: []const u8, value: []const u8) KLocalizedString {
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

    /// ### DEPRECATED: Use `relaxSubs` instead
    ///
    pub const RelaxSubs = relaxSubs;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#relaxSubs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    pub fn relaxSubs(self: KLocalizedString) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_RelaxSubs(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ignoreMarkup` instead
    ///
    pub const IgnoreMarkup = ignoreMarkup;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#ignoreMarkup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    pub fn ignoreMarkup(self: KLocalizedString) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_IgnoreMarkup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `untranslatedText` instead
    ///
    pub const UntranslatedText = untranslatedText;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#untranslatedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedString `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn untranslatedText(self: KLocalizedString, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KLocalizedString_UntranslatedText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KLocalizedString.untranslatedText: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setApplicationDomain` instead
    ///
    pub const SetApplicationDomain = setApplicationDomain;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#setApplicationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` domain: []u8 `
    ///
    pub fn setApplicationDomain(domain: []u8) void {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        qtc.KLocalizedString_SetApplicationDomain(domain_str);
    }

    /// ### DEPRECATED: Use `applicationDomain` instead
    ///
    pub const ApplicationDomain = applicationDomain;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#applicationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn applicationDomain(allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KLocalizedString_ApplicationDomain();
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KLocalizedString.applicationDomain: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `languages` instead
    ///
    pub const Languages = languages;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#languages)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn languages(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KLocalizedString_Languages();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KLocalizedString.languages: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KLocalizedString.languages: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setLanguages` instead
    ///
    pub const SetLanguages = setLanguages;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#setLanguages)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _languages: []const []const u8 `
    ///
    pub fn setLanguages(allocator: std.mem.Allocator, _languages: []const []const u8) void {
        const languages_arr = allocator.alloc(qtc.libqt_string, _languages.len) catch @panic("KLocalizedString.setLanguages: Memory allocation failed");
        defer allocator.free(languages_arr);
        for (_languages, 0.._languages.len) |str_item, i|
            languages_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const languages_list = qtc.libqt_list{
            .len = _languages.len,
            .data = languages_arr.ptr,
        };
        qtc.KLocalizedString_SetLanguages(languages_list);
    }

    /// ### DEPRECATED: Use `clearLanguages` instead
    ///
    pub const ClearLanguages = clearLanguages;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#clearLanguages)
    ///
    pub fn clearLanguages() void {
        qtc.KLocalizedString_ClearLanguages();
    }

    /// ### DEPRECATED: Use `isApplicationTranslatedInto` instead
    ///
    pub const IsApplicationTranslatedInto = isApplicationTranslatedInto;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#isApplicationTranslatedInto)
    ///
    /// ## Parameter(s):
    ///
    /// ` language: []const u8 `
    ///
    pub fn isApplicationTranslatedInto(language: []const u8) bool {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        return qtc.KLocalizedString_IsApplicationTranslatedInto(language_str);
    }

    /// ### DEPRECATED: Use `availableApplicationTranslations` instead
    ///
    pub const AvailableApplicationTranslations = availableApplicationTranslations;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#availableApplicationTranslations)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableApplicationTranslations(allocator: std.mem.Allocator) Set_constu8 {
        const _set: qtc.libqt_list = qtc.KLocalizedString_AvailableApplicationTranslations();
        var _ret: Set_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_set.len)) catch @panic("KLocalizedString.availableApplicationTranslations: Total capacity allocation failed");
        const _data_val: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.putAssumeCapacity(_data_val[i].data[0.._data_val[i].len], {});
        return _ret;
    }

    /// ### DEPRECATED: Use `availableDomainTranslations` instead
    ///
    pub const AvailableDomainTranslations = availableDomainTranslations;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#availableDomainTranslations)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []u8 `
    ///
    pub fn availableDomainTranslations(allocator: std.mem.Allocator, domain: []u8) Set_constu8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const _set: qtc.libqt_list = qtc.KLocalizedString_AvailableDomainTranslations(domain_str);
        var _ret: Set_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_set.len)) catch @panic("KLocalizedString.availableDomainTranslations: Total capacity allocation failed");
        const _data_val: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.putAssumeCapacity(_data_val[i].data[0.._data_val[i].len], {});
        return _ret;
    }

    /// ### DEPRECATED: Use `addDomainLocaleDir` instead
    ///
    pub const AddDomainLocaleDir = addDomainLocaleDir;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#addDomainLocaleDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` domain: []u8 `
    ///
    /// ` path: []const u8 `
    ///
    pub fn addDomainLocaleDir(domain: []u8, path: []const u8) void {
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

    /// ### DEPRECATED: Use `localizedFilePath` instead
    ///
    pub const LocalizedFilePath = localizedFilePath;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#localizedFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn localizedFilePath(allocator: std.mem.Allocator, filePath: []const u8) []const u8 {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        var _str = qtc.KLocalizedString_LocalizedFilePath(filePath_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedString.localizedFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `removeAcceleratorMarker` instead
    ///
    pub const RemoveAcceleratorMarker = removeAcceleratorMarker;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#removeAcceleratorMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` label: []const u8 `
    ///
    pub fn removeAcceleratorMarker(allocator: std.mem.Allocator, label: []const u8) []const u8 {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        var _str = qtc.KLocalizedString_RemoveAcceleratorMarker(label_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedString.removeAcceleratorMarker: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `subs22` instead
    ///
    pub const Subs22 = subs22;

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
    pub fn subs22(self: KLocalizedString, a: i32, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs22(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs32` instead
    ///
    pub const Subs32 = subs32;

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
    pub fn subs32(self: KLocalizedString, a: i32, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs32(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### DEPRECATED: Use `subs42` instead
    ///
    pub const Subs42 = subs42;

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
    pub fn subs42(self: KLocalizedString, a: i32, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs42(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `subs23` instead
    ///
    pub const Subs23 = subs23;

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
    pub fn subs23(self: KLocalizedString, a: u32, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs23(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs33` instead
    ///
    pub const Subs33 = subs33;

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
    pub fn subs33(self: KLocalizedString, a: u32, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs33(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### DEPRECATED: Use `subs43` instead
    ///
    pub const Subs43 = subs43;

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
    pub fn subs43(self: KLocalizedString, a: u32, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs43(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `subs24` instead
    ///
    pub const Subs24 = subs24;

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
    pub fn subs24(self: KLocalizedString, a: isize, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs24(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs34` instead
    ///
    pub const Subs34 = subs34;

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
    pub fn subs34(self: KLocalizedString, a: isize, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs34(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### DEPRECATED: Use `subs44` instead
    ///
    pub const Subs44 = subs44;

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
    pub fn subs44(self: KLocalizedString, a: isize, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs44(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `subs25` instead
    ///
    pub const Subs25 = subs25;

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
    pub fn subs25(self: KLocalizedString, a: usize, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs25(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs35` instead
    ///
    pub const Subs35 = subs35;

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
    pub fn subs35(self: KLocalizedString, a: usize, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs35(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### DEPRECATED: Use `subs45` instead
    ///
    pub const Subs45 = subs45;

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
    pub fn subs45(self: KLocalizedString, a: usize, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs45(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `subs26` instead
    ///
    pub const Subs26 = subs26;

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
    pub fn subs26(self: KLocalizedString, a: isize, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs26(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs36` instead
    ///
    pub const Subs36 = subs36;

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
    pub fn subs36(self: KLocalizedString, a: isize, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs36(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### DEPRECATED: Use `subs46` instead
    ///
    pub const Subs46 = subs46;

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
    pub fn subs46(self: KLocalizedString, a: isize, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs46(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `subs27` instead
    ///
    pub const Subs27 = subs27;

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
    pub fn subs27(self: KLocalizedString, a: usize, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs27(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs37` instead
    ///
    pub const Subs37 = subs37;

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
    pub fn subs37(self: KLocalizedString, a: usize, fieldWidth: i32, base: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs37(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base)) };
    }

    /// ### DEPRECATED: Use `subs47` instead
    ///
    pub const Subs47 = subs47;

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
    pub fn subs47(self: KLocalizedString, a: usize, fieldWidth: i32, base: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs47(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(base), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `subs28` instead
    ///
    pub const Subs28 = subs28;

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
    pub fn subs28(self: KLocalizedString, a: f64, fieldWidth: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs28(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs38` instead
    ///
    pub const Subs38 = subs38;

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
    pub fn subs38(self: KLocalizedString, a: f64, fieldWidth: i32, format: u8) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs38(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `subs48` instead
    ///
    pub const Subs48 = subs48;

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
    pub fn subs48(self: KLocalizedString, a: f64, fieldWidth: i32, format: u8, precision: i32) KLocalizedString {
        return .{ .ptr = qtc.KLocalizedString_Subs48(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision)) };
    }

    /// ### DEPRECATED: Use `subs52` instead
    ///
    pub const Subs52 = subs52;

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
    pub fn subs52(self: KLocalizedString, a: f64, fieldWidth: i32, format: u8, precision: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs52(@ptrCast(self.ptr), @bitCast(a), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `subs29` instead
    ///
    pub const Subs29 = subs29;

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
    pub fn subs29(self: KLocalizedString, a: anytype, fieldWidth: i32) KLocalizedString {
        comptime _ = @TypeOf(a)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs29(@ptrCast(self.ptr), @ptrCast(a.ptr), @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs39` instead
    ///
    pub const Subs39 = subs39;

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
    pub fn subs39(self: KLocalizedString, a: anytype, fieldWidth: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(a)._is_QChar;
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs39(@ptrCast(self.ptr), @ptrCast(a.ptr), @bitCast(fieldWidth), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `subs210` instead
    ///
    pub const Subs210 = subs210;

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
    pub fn subs210(self: KLocalizedString, a: []const u8, fieldWidth: i32) KLocalizedString {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return .{ .ptr = qtc.KLocalizedString_Subs210(@ptrCast(self.ptr), a_str, @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs310` instead
    ///
    pub const Subs310 = subs310;

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
    pub fn subs310(self: KLocalizedString, a: []const u8, fieldWidth: i32, fillChar: anytype) KLocalizedString {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs310(@ptrCast(self.ptr), a_str, @bitCast(fieldWidth), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `subs211` instead
    ///
    pub const Subs211 = subs211;

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
    pub fn subs211(self: KLocalizedString, a: anytype, fieldWidth: i32) KLocalizedString {
        comptime _ = @TypeOf(a)._is_KLocalizedString;
        return .{ .ptr = qtc.KLocalizedString_Subs211(@ptrCast(self.ptr), @ptrCast(a.ptr), @bitCast(fieldWidth)) };
    }

    /// ### DEPRECATED: Use `subs311` instead
    ///
    pub const Subs311 = subs311;

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
    pub fn subs311(self: KLocalizedString, a: anytype, fieldWidth: i32, fillChar: anytype) KLocalizedString {
        comptime _ = @TypeOf(a)._is_KLocalizedString;
        comptime _ = @TypeOf(fillChar)._is_QChar;
        return .{ .ptr = qtc.KLocalizedString_Subs311(@ptrCast(self.ptr), @ptrCast(a.ptr), @bitCast(fieldWidth), @ptrCast(fillChar.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/klocalizedstring.html#dtor.KLocalizedString)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KLocalizedString `
    ///
    pub fn delete(self: KLocalizedString) void {
        qtc.KLocalizedString_Delete(@ptrCast(self.ptr));
    }
};
