const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/sonnet-settings.html
pub const sonnet__settings = struct {
    /// New constructs a new Sonnet::Settings object.
    ///
    ///
    pub fn New() QtC.Sonnet__Settings {
        return qtc.Sonnet__Settings_new();
    }

    /// New2 constructs a new Sonnet::Settings object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.Sonnet__Settings {
        return qtc.Sonnet__Settings_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/qobject.html#metaObject)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.Sonnet__Settings_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.Sonnet__Settings, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Sonnet__Settings_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.Sonnet__Settings, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Sonnet__Settings_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.Sonnet__Settings_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.Sonnet__Settings, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Sonnet__Settings_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://api.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.Sonnet__Settings_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::settings.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#setDefaultLanguage)
    ///
    /// ``` self: QtC.Sonnet__Settings, lang: []const u8 ```
    pub fn SetDefaultLanguage(self: ?*anyopaque, lang: []const u8) void {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        qtc.Sonnet__Settings_SetDefaultLanguage(@ptrCast(self), lang_str);
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultLanguage)
    ///
    /// ``` self: QtC.Sonnet__Settings, allocator: std.mem.Allocator ```
    pub fn DefaultLanguage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Sonnet__Settings_DefaultLanguage(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::settings.DefaultLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#setPreferredLanguages)
    ///
    /// ``` self: QtC.Sonnet__Settings, lang: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetPreferredLanguages(self: ?*anyopaque, lang: [][]const u8, allocator: std.mem.Allocator) void {
        var lang_arr = allocator.alloc(qtc.libqt_string, lang.len) catch @panic("sonnet::settings.SetPreferredLanguages: Memory allocation failed");
        defer allocator.free(lang_arr);
        for (lang, 0..lang.len) |item, i| {
            lang_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const lang_list = qtc.libqt_list{
            .len = lang.len,
            .data = lang_arr.ptr,
        };
        qtc.Sonnet__Settings_SetPreferredLanguages(@ptrCast(self), lang_list);
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#preferredLanguages)
    ///
    /// ``` self: QtC.Sonnet__Settings, allocator: std.mem.Allocator ```
    pub fn PreferredLanguages(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Settings_PreferredLanguages(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet::settings.PreferredLanguages: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet::settings.PreferredLanguages: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#setDefaultClient)
    ///
    /// ``` self: QtC.Sonnet__Settings, client: []const u8 ```
    pub fn SetDefaultClient(self: ?*anyopaque, client: []const u8) void {
        const client_str = qtc.libqt_string{
            .len = client.len,
            .data = client.ptr,
        };
        qtc.Sonnet__Settings_SetDefaultClient(@ptrCast(self), client_str);
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultClient)
    ///
    /// ``` self: QtC.Sonnet__Settings, allocator: std.mem.Allocator ```
    pub fn DefaultClient(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Sonnet__Settings_DefaultClient(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::settings.DefaultClient: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#setSkipUppercase)
    ///
    /// ``` self: QtC.Sonnet__Settings, skipUppercase: bool ```
    pub fn SetSkipUppercase(self: ?*anyopaque, skipUppercase: bool) void {
        qtc.Sonnet__Settings_SetSkipUppercase(@ptrCast(self), skipUppercase);
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#skipUppercase)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn SkipUppercase(self: ?*anyopaque) bool {
        return qtc.Sonnet__Settings_SkipUppercase(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#setAutodetectLanguage)
    ///
    /// ``` self: QtC.Sonnet__Settings, autodetectLanguage: bool ```
    pub fn SetAutodetectLanguage(self: ?*anyopaque, autodetectLanguage: bool) void {
        qtc.Sonnet__Settings_SetAutodetectLanguage(@ptrCast(self), autodetectLanguage);
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#autodetectLanguage)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn AutodetectLanguage(self: ?*anyopaque) bool {
        return qtc.Sonnet__Settings_AutodetectLanguage(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#setSkipRunTogether)
    ///
    /// ``` self: QtC.Sonnet__Settings, skipRunTogether: bool ```
    pub fn SetSkipRunTogether(self: ?*anyopaque, skipRunTogether: bool) void {
        qtc.Sonnet__Settings_SetSkipRunTogether(@ptrCast(self), skipRunTogether);
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#skipRunTogether)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn SkipRunTogether(self: ?*anyopaque) bool {
        return qtc.Sonnet__Settings_SkipRunTogether(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#setBackgroundCheckerEnabled)
    ///
    /// ``` self: QtC.Sonnet__Settings, backgroundCheckerEnabled: bool ```
    pub fn SetBackgroundCheckerEnabled(self: ?*anyopaque, backgroundCheckerEnabled: bool) void {
        qtc.Sonnet__Settings_SetBackgroundCheckerEnabled(@ptrCast(self), backgroundCheckerEnabled);
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#backgroundCheckerEnabled)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn BackgroundCheckerEnabled(self: ?*anyopaque) bool {
        return qtc.Sonnet__Settings_BackgroundCheckerEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#setCheckerEnabledByDefault)
    ///
    /// ``` self: QtC.Sonnet__Settings, checkerEnabledByDefault: bool ```
    pub fn SetCheckerEnabledByDefault(self: ?*anyopaque, checkerEnabledByDefault: bool) void {
        qtc.Sonnet__Settings_SetCheckerEnabledByDefault(@ptrCast(self), checkerEnabledByDefault);
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#checkerEnabledByDefault)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn CheckerEnabledByDefault(self: ?*anyopaque) bool {
        return qtc.Sonnet__Settings_CheckerEnabledByDefault(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#setCurrentIgnoreList)
    ///
    /// ``` self: QtC.Sonnet__Settings, ignores: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetCurrentIgnoreList(self: ?*anyopaque, ignores: [][]const u8, allocator: std.mem.Allocator) void {
        var ignores_arr = allocator.alloc(qtc.libqt_string, ignores.len) catch @panic("sonnet::settings.SetCurrentIgnoreList: Memory allocation failed");
        defer allocator.free(ignores_arr);
        for (ignores, 0..ignores.len) |item, i| {
            ignores_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const ignores_list = qtc.libqt_list{
            .len = ignores.len,
            .data = ignores_arr.ptr,
        };
        qtc.Sonnet__Settings_SetCurrentIgnoreList(@ptrCast(self), ignores_list);
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#currentIgnoreList)
    ///
    /// ``` self: QtC.Sonnet__Settings, allocator: std.mem.Allocator ```
    pub fn CurrentIgnoreList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Settings_CurrentIgnoreList(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet::settings.CurrentIgnoreList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet::settings.CurrentIgnoreList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#clients)
    ///
    /// ``` self: QtC.Sonnet__Settings, allocator: std.mem.Allocator ```
    pub fn Clients(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Settings_Clients(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet::settings.Clients: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet::settings.Clients: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#modified)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn Modified(self: ?*anyopaque) bool {
        return qtc.Sonnet__Settings_Modified(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#dictionaryModel)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn DictionaryModel(self: ?*anyopaque) QtC.QAbstractListModel {
        return qtc.Sonnet__Settings_DictionaryModel(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#save)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn Save(self: ?*anyopaque) void {
        qtc.Sonnet__Settings_Save(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultIgnoreList)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn DefaultIgnoreList(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Settings_DefaultIgnoreList();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet::settings.DefaultIgnoreList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet::settings.DefaultIgnoreList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultSkipUppercase)
    ///
    ///
    pub fn DefaultSkipUppercase() bool {
        return qtc.Sonnet__Settings_DefaultSkipUppercase();
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultAutodetectLanguage)
    ///
    ///
    pub fn DefaultAutodetectLanguage() bool {
        return qtc.Sonnet__Settings_DefaultAutodetectLanguage();
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultBackgroundCheckerEnabled)
    ///
    ///
    pub fn DefaultBackgroundCheckerEnabled() bool {
        return qtc.Sonnet__Settings_DefaultBackgroundCheckerEnabled();
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultCheckerEnabledByDefault)
    ///
    ///
    pub fn DefaultCheckerEnabledByDefault() bool {
        return qtc.Sonnet__Settings_DefaultCheckerEnabledByDefault();
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#defauktSkipRunTogether)
    ///
    ///
    pub fn DefauktSkipRunTogether() bool {
        return qtc.Sonnet__Settings_DefauktSkipRunTogether();
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultDefaultLanguage)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn DefaultDefaultLanguage(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Sonnet__Settings_DefaultDefaultLanguage();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::settings.DefaultDefaultLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultPreferredLanguages)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn DefaultPreferredLanguages(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Settings_DefaultPreferredLanguages();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet::settings.DefaultPreferredLanguages: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet::settings.DefaultPreferredLanguages: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#skipUppercaseChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn SkipUppercaseChanged(self: ?*anyopaque) void {
        qtc.Sonnet__Settings_SkipUppercaseChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#skipUppercaseChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings) callconv(.c) void ```
    pub fn OnSkipUppercaseChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_SkipUppercaseChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#autodetectLanguageChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn AutodetectLanguageChanged(self: ?*anyopaque) void {
        qtc.Sonnet__Settings_AutodetectLanguageChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#autodetectLanguageChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings) callconv(.c) void ```
    pub fn OnAutodetectLanguageChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_AutodetectLanguageChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#backgroundCheckerEnabledChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn BackgroundCheckerEnabledChanged(self: ?*anyopaque) void {
        qtc.Sonnet__Settings_BackgroundCheckerEnabledChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#backgroundCheckerEnabledChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings) callconv(.c) void ```
    pub fn OnBackgroundCheckerEnabledChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_BackgroundCheckerEnabledChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultClientChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn DefaultClientChanged(self: ?*anyopaque) void {
        qtc.Sonnet__Settings_DefaultClientChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultClientChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings) callconv(.c) void ```
    pub fn OnDefaultClientChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_DefaultClientChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultLanguageChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn DefaultLanguageChanged(self: ?*anyopaque) void {
        qtc.Sonnet__Settings_DefaultLanguageChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultLanguageChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings) callconv(.c) void ```
    pub fn OnDefaultLanguageChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_DefaultLanguageChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#preferredLanguagesChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn PreferredLanguagesChanged(self: ?*anyopaque) void {
        qtc.Sonnet__Settings_PreferredLanguagesChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#preferredLanguagesChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings) callconv(.c) void ```
    pub fn OnPreferredLanguagesChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_PreferredLanguagesChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#skipRunTogetherChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn SkipRunTogetherChanged(self: ?*anyopaque) void {
        qtc.Sonnet__Settings_SkipRunTogetherChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#skipRunTogetherChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings) callconv(.c) void ```
    pub fn OnSkipRunTogetherChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_SkipRunTogetherChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#checkerEnabledByDefaultChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn CheckerEnabledByDefaultChanged(self: ?*anyopaque) void {
        qtc.Sonnet__Settings_CheckerEnabledByDefaultChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#checkerEnabledByDefaultChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings) callconv(.c) void ```
    pub fn OnCheckerEnabledByDefaultChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_CheckerEnabledByDefaultChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#currentIgnoreListChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn CurrentIgnoreListChanged(self: ?*anyopaque) void {
        qtc.Sonnet__Settings_CurrentIgnoreListChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#currentIgnoreListChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings) callconv(.c) void ```
    pub fn OnCurrentIgnoreListChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_CurrentIgnoreListChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#modifiedChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn ModifiedChanged(self: ?*anyopaque) void {
        qtc.Sonnet__Settings_ModifiedChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-settings.html#modifiedChanged)
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings) callconv(.c) void ```
    pub fn OnModifiedChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_ModifiedChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Sonnet__Settings_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::settings.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Sonnet__Settings_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::settings.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.Sonnet__Settings, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::settings.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.Sonnet__Settings, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.Sonnet__Settings, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Sonnet__Settings, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Sonnet__Settings, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Sonnet__Settings, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Sonnet__Settings, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.Sonnet__Settings, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("sonnet::settings.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.Sonnet__Settings, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.Sonnet__Settings, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.Sonnet__Settings, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.Sonnet__Settings, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.Sonnet__Settings, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.Sonnet__Settings, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.Sonnet__Settings, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("sonnet::settings.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet::settings.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.Sonnet__Settings, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Sonnet__Settings, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Sonnet__Settings, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.Sonnet__Settings, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Sonnet__Settings, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Sonnet__Settings_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Sonnet__Settings_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Sonnet__Settings_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Sonnet__Settings_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Sonnet__Settings_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Sonnet__Settings_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__Settings_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__Settings_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Settings_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__Settings_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__Settings_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Settings_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__Settings_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__Settings_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Settings_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Sonnet__Settings_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Sonnet__Settings_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Settings_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Sonnet__Settings_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Sonnet__Settings_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Settings_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.Sonnet__Settings_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.Sonnet__Settings_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.Sonnet__Settings_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Sonnet__Settings_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Sonnet__Settings_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.Sonnet__Settings_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__Settings_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__Settings_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.Sonnet__Settings_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Sonnet__Settings_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Sonnet__Settings_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Sonnet__Settings_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.Sonnet__Settings, slot: fn (self: QtC.Sonnet__Settings, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Sonnet__Settings ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Sonnet__Settings_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/sonnet-settings.html#types
pub const enums = struct {
    pub const DictionaryRoles = enum {
        pub const LanguageCodeRole: i32 = 257;
        pub const PreferredRole: i32 = 258;
        pub const DefaultRole: i32 = 259;
    };
};
