const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractListModel = @import("libqt6").QAbstractListModel;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/sonnet-settings.html)
pub const Sonnet__Settings = extern struct {
    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Sonnet__Settings,

    pub const _is_Sonnet__Settings = {};
    pub const _is_QObject = {};

    /// New constructs a new Sonnet::Settings object.
    ///
    pub fn New() Sonnet__Settings {
        return .{ .ptr = qtc.Sonnet__Settings_new() };
    }

    /// New2 constructs a new Sonnet::Settings object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) Sonnet__Settings {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.Sonnet__Settings_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn MetaObject(self: Sonnet__Settings) QMetaObject {
        return .{ .ptr = qtc.Sonnet__Settings_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: Sonnet__Settings, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Sonnet__Settings_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn SuperMetaObject(self: Sonnet__Settings) QMetaObject {
        return .{ .ptr = qtc.Sonnet__Settings_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: Sonnet__Settings, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Sonnet__Settings_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Sonnet__Settings_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: Sonnet__Settings, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Sonnet__Settings_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: Sonnet__Settings, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Sonnet__Settings_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Sonnet__Settings_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: Sonnet__Settings, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Sonnet__Settings_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__settings.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#setDefaultLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` lang: []const u8 `
    ///
    pub fn SetDefaultLanguage(self: Sonnet__Settings, lang: []const u8) void {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        qtc.Sonnet__Settings_SetDefaultLanguage(@ptrCast(self.ptr), lang_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultLanguage(self: Sonnet__Settings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__Settings_DefaultLanguage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__settings.DefaultLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#setPreferredLanguages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` lang: []const []const u8 `
    ///
    pub fn SetPreferredLanguages(self: Sonnet__Settings, allocator: std.mem.Allocator, lang: []const []const u8) void {
        const lang_arr = allocator.alloc(qtc.libqt_string, lang.len) catch @panic("sonnet__settings.SetPreferredLanguages: Memory allocation failed");
        defer allocator.free(lang_arr);
        for (lang, 0..lang.len) |item, i|
            lang_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const lang_list = qtc.libqt_list{
            .len = lang.len,
            .data = lang_arr.ptr,
        };
        qtc.Sonnet__Settings_SetPreferredLanguages(@ptrCast(self.ptr), lang_list);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#preferredLanguages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PreferredLanguages(self: Sonnet__Settings, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Settings_PreferredLanguages(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet__settings.PreferredLanguages: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet__settings.PreferredLanguages: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#setDefaultClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` client: []const u8 `
    ///
    pub fn SetDefaultClient(self: Sonnet__Settings, client: []const u8) void {
        const client_str = qtc.libqt_string{
            .len = client.len,
            .data = client.ptr,
        };
        qtc.Sonnet__Settings_SetDefaultClient(@ptrCast(self.ptr), client_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultClient(self: Sonnet__Settings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__Settings_DefaultClient(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__settings.DefaultClient: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#setSkipUppercase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` skipUppercase: bool `
    ///
    pub fn SetSkipUppercase(self: Sonnet__Settings, skipUppercase: bool) void {
        qtc.Sonnet__Settings_SetSkipUppercase(@ptrCast(self.ptr), skipUppercase);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#skipUppercase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn SkipUppercase(self: Sonnet__Settings) bool {
        return qtc.Sonnet__Settings_SkipUppercase(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#setAutodetectLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` autodetectLanguage: bool `
    ///
    pub fn SetAutodetectLanguage(self: Sonnet__Settings, autodetectLanguage: bool) void {
        qtc.Sonnet__Settings_SetAutodetectLanguage(@ptrCast(self.ptr), autodetectLanguage);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#autodetectLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn AutodetectLanguage(self: Sonnet__Settings) bool {
        return qtc.Sonnet__Settings_AutodetectLanguage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#setSkipRunTogether)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` skipRunTogether: bool `
    ///
    pub fn SetSkipRunTogether(self: Sonnet__Settings, skipRunTogether: bool) void {
        qtc.Sonnet__Settings_SetSkipRunTogether(@ptrCast(self.ptr), skipRunTogether);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#skipRunTogether)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn SkipRunTogether(self: Sonnet__Settings) bool {
        return qtc.Sonnet__Settings_SkipRunTogether(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#setBackgroundCheckerEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` backgroundCheckerEnabled: bool `
    ///
    pub fn SetBackgroundCheckerEnabled(self: Sonnet__Settings, backgroundCheckerEnabled: bool) void {
        qtc.Sonnet__Settings_SetBackgroundCheckerEnabled(@ptrCast(self.ptr), backgroundCheckerEnabled);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#backgroundCheckerEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn BackgroundCheckerEnabled(self: Sonnet__Settings) bool {
        return qtc.Sonnet__Settings_BackgroundCheckerEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#setCheckerEnabledByDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` checkerEnabledByDefault: bool `
    ///
    pub fn SetCheckerEnabledByDefault(self: Sonnet__Settings, checkerEnabledByDefault: bool) void {
        qtc.Sonnet__Settings_SetCheckerEnabledByDefault(@ptrCast(self.ptr), checkerEnabledByDefault);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#checkerEnabledByDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn CheckerEnabledByDefault(self: Sonnet__Settings) bool {
        return qtc.Sonnet__Settings_CheckerEnabledByDefault(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#setCurrentIgnoreList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` ignores: []const []const u8 `
    ///
    pub fn SetCurrentIgnoreList(self: Sonnet__Settings, allocator: std.mem.Allocator, ignores: []const []const u8) void {
        const ignores_arr = allocator.alloc(qtc.libqt_string, ignores.len) catch @panic("sonnet__settings.SetCurrentIgnoreList: Memory allocation failed");
        defer allocator.free(ignores_arr);
        for (ignores, 0..ignores.len) |item, i|
            ignores_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const ignores_list = qtc.libqt_list{
            .len = ignores.len,
            .data = ignores_arr.ptr,
        };
        qtc.Sonnet__Settings_SetCurrentIgnoreList(@ptrCast(self.ptr), ignores_list);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#currentIgnoreList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentIgnoreList(self: Sonnet__Settings, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Settings_CurrentIgnoreList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet__settings.CurrentIgnoreList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet__settings.CurrentIgnoreList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#clients)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Clients(self: Sonnet__Settings, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Settings_Clients(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet__settings.Clients: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet__settings.Clients: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#modified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn Modified(self: Sonnet__Settings) bool {
        return qtc.Sonnet__Settings_Modified(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#dictionaryModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn DictionaryModel(self: Sonnet__Settings) QAbstractListModel {
        return .{ .ptr = qtc.Sonnet__Settings_DictionaryModel(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn Save(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_Save(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultIgnoreList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultIgnoreList(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Settings_DefaultIgnoreList();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet__settings.DefaultIgnoreList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet__settings.DefaultIgnoreList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultSkipUppercase)
    ///
    pub fn DefaultSkipUppercase() bool {
        return qtc.Sonnet__Settings_DefaultSkipUppercase();
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultAutodetectLanguage)
    ///
    pub fn DefaultAutodetectLanguage() bool {
        return qtc.Sonnet__Settings_DefaultAutodetectLanguage();
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultBackgroundCheckerEnabled)
    ///
    pub fn DefaultBackgroundCheckerEnabled() bool {
        return qtc.Sonnet__Settings_DefaultBackgroundCheckerEnabled();
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultCheckerEnabledByDefault)
    ///
    pub fn DefaultCheckerEnabledByDefault() bool {
        return qtc.Sonnet__Settings_DefaultCheckerEnabledByDefault();
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defauktSkipRunTogether)
    ///
    pub fn DefauktSkipRunTogether() bool {
        return qtc.Sonnet__Settings_DefauktSkipRunTogether();
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultDefaultLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultDefaultLanguage(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__Settings_DefaultDefaultLanguage();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__settings.DefaultDefaultLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultPreferredLanguages)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultPreferredLanguages(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Settings_DefaultPreferredLanguages();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet__settings.DefaultPreferredLanguages: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet__settings.DefaultPreferredLanguages: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#skipUppercaseChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn SkipUppercaseChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_SkipUppercaseChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#skipUppercaseChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn OnSkipUppercaseChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_SkipUppercaseChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#autodetectLanguageChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn AutodetectLanguageChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_AutodetectLanguageChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#autodetectLanguageChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn OnAutodetectLanguageChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_AutodetectLanguageChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#backgroundCheckerEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn BackgroundCheckerEnabledChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_BackgroundCheckerEnabledChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#backgroundCheckerEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn OnBackgroundCheckerEnabledChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_BackgroundCheckerEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultClientChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn DefaultClientChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_DefaultClientChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultClientChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn OnDefaultClientChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_DefaultClientChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultLanguageChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn DefaultLanguageChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_DefaultLanguageChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultLanguageChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn OnDefaultLanguageChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_DefaultLanguageChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#preferredLanguagesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn PreferredLanguagesChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_PreferredLanguagesChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#preferredLanguagesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn OnPreferredLanguagesChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_PreferredLanguagesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#skipRunTogetherChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn SkipRunTogetherChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_SkipRunTogetherChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#skipRunTogetherChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn OnSkipRunTogetherChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_SkipRunTogetherChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#checkerEnabledByDefaultChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn CheckerEnabledByDefaultChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_CheckerEnabledByDefaultChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#checkerEnabledByDefaultChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn OnCheckerEnabledByDefaultChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_CheckerEnabledByDefaultChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#currentIgnoreListChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn CurrentIgnoreListChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_CurrentIgnoreListChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#currentIgnoreListChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn OnCurrentIgnoreListChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_CurrentIgnoreListChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#modifiedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn ModifiedChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_ModifiedChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#modifiedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn OnModifiedChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_ModifiedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__settings.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__settings.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: Sonnet__Settings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__settings.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: Sonnet__Settings, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn IsWidgetType(self: Sonnet__Settings) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn IsWindowType(self: Sonnet__Settings) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn IsQuickItemType(self: Sonnet__Settings) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn SignalsBlocked(self: Sonnet__Settings) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: Sonnet__Settings, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn Thread(self: Sonnet__Settings) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: Sonnet__Settings, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: Sonnet__Settings, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: Sonnet__Settings, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: Sonnet__Settings, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: Sonnet__Settings, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: Sonnet__Settings, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("sonnet__settings.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: Sonnet__Settings, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: Sonnet__Settings, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: Sonnet__Settings, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: Sonnet__Settings, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn Disconnect3(self: Sonnet__Settings) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: Sonnet__Settings, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn DumpObjectTree(self: Sonnet__Settings) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn DumpObjectInfo(self: Sonnet__Settings) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: Sonnet__Settings, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: Sonnet__Settings, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: Sonnet__Settings, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("sonnet__settings.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet__settings.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn BindingStorage(self: Sonnet__Settings) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn BindingStorage2(self: Sonnet__Settings) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn Destroyed(self: Sonnet__Settings) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn Parent(self: Sonnet__Settings) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: Sonnet__Settings, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn DeleteLater(self: Sonnet__Settings) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: Sonnet__Settings, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: Sonnet__Settings, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: Sonnet__Settings, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: Sonnet__Settings, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: Sonnet__Settings, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: Sonnet__Settings, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: Sonnet__Settings, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: Sonnet__Settings, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: Sonnet__Settings, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Sonnet__Settings_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: Sonnet__Settings, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Sonnet__Settings_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings`
    ///
    /// ` callback: *const fn (self: Sonnet__Settings, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, QEvent) callconv(.c) bool) void {
        qtc.Sonnet__Settings_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: Sonnet__Settings, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Sonnet__Settings_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: Sonnet__Settings, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Sonnet__Settings_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings`
    ///
    /// ` callback: *const fn (self: Sonnet__Settings, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, QObject, QEvent) callconv(.c) bool) void {
        qtc.Sonnet__Settings_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: Sonnet__Settings, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Sonnet__Settings_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: Sonnet__Settings, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Sonnet__Settings_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings`
    ///
    /// ` callback: *const fn (self: Sonnet__Settings, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, QTimerEvent) callconv(.c) void) void {
        qtc.Sonnet__Settings_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: Sonnet__Settings, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Sonnet__Settings_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: Sonnet__Settings, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Sonnet__Settings_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings`
    ///
    /// ` callback: *const fn (self: Sonnet__Settings, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, QChildEvent) callconv(.c) void) void {
        qtc.Sonnet__Settings_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: Sonnet__Settings, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Sonnet__Settings_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: Sonnet__Settings, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Sonnet__Settings_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings`
    ///
    /// ` callback: *const fn (self: Sonnet__Settings, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, QEvent) callconv(.c) void) void {
        qtc.Sonnet__Settings_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: Sonnet__Settings, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__Settings_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: Sonnet__Settings, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__Settings_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings`
    ///
    /// ` callback: *const fn (self: Sonnet__Settings, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, QMetaMethod) callconv(.c) void) void {
        qtc.Sonnet__Settings_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: Sonnet__Settings, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__Settings_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: Sonnet__Settings, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__Settings_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings`
    ///
    /// ` callback: *const fn (self: Sonnet__Settings, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, QMetaMethod) callconv(.c) void) void {
        qtc.Sonnet__Settings_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn Sender(self: Sonnet__Settings) QObject {
        return .{ .ptr = qtc.Sonnet__Settings_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn SuperSender(self: Sonnet__Settings) QObject {
        return .{ .ptr = qtc.Sonnet__Settings_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: Sonnet__Settings, callback: *const fn () callconv(.c) QObject) void {
        qtc.Sonnet__Settings_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn SenderSignalIndex(self: Sonnet__Settings) i32 {
        return qtc.Sonnet__Settings_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn SuperSenderSignalIndex(self: Sonnet__Settings) i32 {
        return qtc.Sonnet__Settings_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: Sonnet__Settings, callback: *const fn () callconv(.c) i32) void {
        qtc.Sonnet__Settings_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: Sonnet__Settings, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__Settings_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: Sonnet__Settings, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__Settings_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings`
    ///
    /// ` callback: *const fn (self: Sonnet__Settings, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, [*:0]const u8) callconv(.c) i32) void {
        qtc.Sonnet__Settings_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: Sonnet__Settings, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Sonnet__Settings_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: Sonnet__Settings, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Sonnet__Settings_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings`
    ///
    /// ` callback: *const fn (self: Sonnet__Settings, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, QMetaMethod) callconv(.c) bool) void {
        qtc.Sonnet__Settings_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn Delete(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#public-types)
pub const enums = struct {
    pub const DictionaryRoles = enum(i32) {
        pub const LanguageCodeRole: i32 = 257;
        pub const PreferredRole: i32 = 258;
        pub const DefaultRole: i32 = 259;
    };
};
