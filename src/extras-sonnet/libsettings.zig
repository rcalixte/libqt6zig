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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Sonnet::Settings object in C++ memory
    ///
    pub fn new() Sonnet__Settings {
        return .{ .ptr = qtc.Sonnet__Settings_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Sonnet::Settings object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) Sonnet__Settings {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.Sonnet__Settings_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn metaObject(self: Sonnet__Settings) QMetaObject {
        return .{ .ptr = qtc.Sonnet__Settings_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: Sonnet__Settings, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Sonnet__Settings_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn superMetaObject(self: Sonnet__Settings) QMetaObject {
        return .{ .ptr = qtc.Sonnet__Settings_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: Sonnet__Settings, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Sonnet__Settings_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Sonnet__Settings_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: Sonnet__Settings, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Sonnet__Settings_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: Sonnet__Settings, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Sonnet__Settings_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Sonnet__Settings_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: Sonnet__Settings, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Sonnet__Settings_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__Settings.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDefaultLanguage` instead
    ///
    pub const SetDefaultLanguage = setDefaultLanguage;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#setDefaultLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` lang: []const u8 `
    ///
    pub fn setDefaultLanguage(self: Sonnet__Settings, lang: []const u8) void {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        qtc.Sonnet__Settings_SetDefaultLanguage(@ptrCast(self.ptr), lang_str);
    }

    /// ### DEPRECATED: Use `defaultLanguage` instead
    ///
    pub const DefaultLanguage = defaultLanguage;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultLanguage(self: Sonnet__Settings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__Settings_DefaultLanguage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__Settings.defaultLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPreferredLanguages` instead
    ///
    pub const SetPreferredLanguages = setPreferredLanguages;

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
    pub fn setPreferredLanguages(self: Sonnet__Settings, allocator: std.mem.Allocator, lang: []const []const u8) void {
        const lang_arr = allocator.alloc(qtc.libqt_string, lang.len) catch @panic("Sonnet__Settings.setPreferredLanguages: Memory allocation failed");
        defer allocator.free(lang_arr);
        for (lang, 0..lang.len) |str_item, i|
            lang_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const lang_list = qtc.libqt_list{
            .len = lang.len,
            .data = lang_arr.ptr,
        };
        qtc.Sonnet__Settings_SetPreferredLanguages(@ptrCast(self.ptr), lang_list);
    }

    /// ### DEPRECATED: Use `preferredLanguages` instead
    ///
    pub const PreferredLanguages = preferredLanguages;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#preferredLanguages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn preferredLanguages(self: Sonnet__Settings, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Settings_PreferredLanguages(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Sonnet__Settings.preferredLanguages: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Sonnet__Settings.preferredLanguages: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setDefaultClient` instead
    ///
    pub const SetDefaultClient = setDefaultClient;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#setDefaultClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` client: []const u8 `
    ///
    pub fn setDefaultClient(self: Sonnet__Settings, client: []const u8) void {
        const client_str = qtc.libqt_string{
            .len = client.len,
            .data = client.ptr,
        };
        qtc.Sonnet__Settings_SetDefaultClient(@ptrCast(self.ptr), client_str);
    }

    /// ### DEPRECATED: Use `defaultClient` instead
    ///
    pub const DefaultClient = defaultClient;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultClient(self: Sonnet__Settings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__Settings_DefaultClient(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__Settings.defaultClient: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSkipUppercase` instead
    ///
    pub const SetSkipUppercase = setSkipUppercase;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#setSkipUppercase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` _skipUppercase: bool `
    ///
    pub fn setSkipUppercase(self: Sonnet__Settings, _skipUppercase: bool) void {
        qtc.Sonnet__Settings_SetSkipUppercase(@ptrCast(self.ptr), _skipUppercase);
    }

    /// ### DEPRECATED: Use `skipUppercase` instead
    ///
    pub const SkipUppercase = skipUppercase;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#skipUppercase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn skipUppercase(self: Sonnet__Settings) bool {
        return qtc.Sonnet__Settings_SkipUppercase(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutodetectLanguage` instead
    ///
    pub const SetAutodetectLanguage = setAutodetectLanguage;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#setAutodetectLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` _autodetectLanguage: bool `
    ///
    pub fn setAutodetectLanguage(self: Sonnet__Settings, _autodetectLanguage: bool) void {
        qtc.Sonnet__Settings_SetAutodetectLanguage(@ptrCast(self.ptr), _autodetectLanguage);
    }

    /// ### DEPRECATED: Use `autodetectLanguage` instead
    ///
    pub const AutodetectLanguage = autodetectLanguage;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#autodetectLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn autodetectLanguage(self: Sonnet__Settings) bool {
        return qtc.Sonnet__Settings_AutodetectLanguage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSkipRunTogether` instead
    ///
    pub const SetSkipRunTogether = setSkipRunTogether;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#setSkipRunTogether)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` _skipRunTogether: bool `
    ///
    pub fn setSkipRunTogether(self: Sonnet__Settings, _skipRunTogether: bool) void {
        qtc.Sonnet__Settings_SetSkipRunTogether(@ptrCast(self.ptr), _skipRunTogether);
    }

    /// ### DEPRECATED: Use `skipRunTogether` instead
    ///
    pub const SkipRunTogether = skipRunTogether;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#skipRunTogether)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn skipRunTogether(self: Sonnet__Settings) bool {
        return qtc.Sonnet__Settings_SkipRunTogether(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBackgroundCheckerEnabled` instead
    ///
    pub const SetBackgroundCheckerEnabled = setBackgroundCheckerEnabled;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#setBackgroundCheckerEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` _backgroundCheckerEnabled: bool `
    ///
    pub fn setBackgroundCheckerEnabled(self: Sonnet__Settings, _backgroundCheckerEnabled: bool) void {
        qtc.Sonnet__Settings_SetBackgroundCheckerEnabled(@ptrCast(self.ptr), _backgroundCheckerEnabled);
    }

    /// ### DEPRECATED: Use `backgroundCheckerEnabled` instead
    ///
    pub const BackgroundCheckerEnabled = backgroundCheckerEnabled;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#backgroundCheckerEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn backgroundCheckerEnabled(self: Sonnet__Settings) bool {
        return qtc.Sonnet__Settings_BackgroundCheckerEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCheckerEnabledByDefault` instead
    ///
    pub const SetCheckerEnabledByDefault = setCheckerEnabledByDefault;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#setCheckerEnabledByDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` _checkerEnabledByDefault: bool `
    ///
    pub fn setCheckerEnabledByDefault(self: Sonnet__Settings, _checkerEnabledByDefault: bool) void {
        qtc.Sonnet__Settings_SetCheckerEnabledByDefault(@ptrCast(self.ptr), _checkerEnabledByDefault);
    }

    /// ### DEPRECATED: Use `checkerEnabledByDefault` instead
    ///
    pub const CheckerEnabledByDefault = checkerEnabledByDefault;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#checkerEnabledByDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn checkerEnabledByDefault(self: Sonnet__Settings) bool {
        return qtc.Sonnet__Settings_CheckerEnabledByDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentIgnoreList` instead
    ///
    pub const SetCurrentIgnoreList = setCurrentIgnoreList;

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
    pub fn setCurrentIgnoreList(self: Sonnet__Settings, allocator: std.mem.Allocator, ignores: []const []const u8) void {
        const ignores_arr = allocator.alloc(qtc.libqt_string, ignores.len) catch @panic("Sonnet__Settings.setCurrentIgnoreList: Memory allocation failed");
        defer allocator.free(ignores_arr);
        for (ignores, 0..ignores.len) |str_item, i|
            ignores_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const ignores_list = qtc.libqt_list{
            .len = ignores.len,
            .data = ignores_arr.ptr,
        };
        qtc.Sonnet__Settings_SetCurrentIgnoreList(@ptrCast(self.ptr), ignores_list);
    }

    /// ### DEPRECATED: Use `currentIgnoreList` instead
    ///
    pub const CurrentIgnoreList = currentIgnoreList;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#currentIgnoreList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentIgnoreList(self: Sonnet__Settings, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Settings_CurrentIgnoreList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Sonnet__Settings.currentIgnoreList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Sonnet__Settings.currentIgnoreList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `clients` instead
    ///
    pub const Clients = clients;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#clients)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn clients(self: Sonnet__Settings, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Settings_Clients(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Sonnet__Settings.clients: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Sonnet__Settings.clients: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `modified` instead
    ///
    pub const Modified = modified;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#modified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn modified(self: Sonnet__Settings) bool {
        return qtc.Sonnet__Settings_Modified(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dictionaryModel` instead
    ///
    pub const DictionaryModel = dictionaryModel;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#dictionaryModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn dictionaryModel(self: Sonnet__Settings) QAbstractListModel {
        return .{ .ptr = qtc.Sonnet__Settings_DictionaryModel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn save(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_Save(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `defaultIgnoreList` instead
    ///
    pub const DefaultIgnoreList = defaultIgnoreList;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultIgnoreList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultIgnoreList(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Settings_DefaultIgnoreList();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Sonnet__Settings.defaultIgnoreList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Sonnet__Settings.defaultIgnoreList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `defaultSkipUppercase` instead
    ///
    pub const DefaultSkipUppercase = defaultSkipUppercase;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultSkipUppercase)
    ///
    pub fn defaultSkipUppercase() bool {
        return qtc.Sonnet__Settings_DefaultSkipUppercase();
    }

    /// ### DEPRECATED: Use `defaultAutodetectLanguage` instead
    ///
    pub const DefaultAutodetectLanguage = defaultAutodetectLanguage;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultAutodetectLanguage)
    ///
    pub fn defaultAutodetectLanguage() bool {
        return qtc.Sonnet__Settings_DefaultAutodetectLanguage();
    }

    /// ### DEPRECATED: Use `defaultBackgroundCheckerEnabled` instead
    ///
    pub const DefaultBackgroundCheckerEnabled = defaultBackgroundCheckerEnabled;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultBackgroundCheckerEnabled)
    ///
    pub fn defaultBackgroundCheckerEnabled() bool {
        return qtc.Sonnet__Settings_DefaultBackgroundCheckerEnabled();
    }

    /// ### DEPRECATED: Use `defaultCheckerEnabledByDefault` instead
    ///
    pub const DefaultCheckerEnabledByDefault = defaultCheckerEnabledByDefault;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultCheckerEnabledByDefault)
    ///
    pub fn defaultCheckerEnabledByDefault() bool {
        return qtc.Sonnet__Settings_DefaultCheckerEnabledByDefault();
    }

    /// ### DEPRECATED: Use `defauktSkipRunTogether` instead
    ///
    pub const DefauktSkipRunTogether = defauktSkipRunTogether;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defauktSkipRunTogether)
    ///
    pub fn defauktSkipRunTogether() bool {
        return qtc.Sonnet__Settings_DefauktSkipRunTogether();
    }

    /// ### DEPRECATED: Use `defaultDefaultLanguage` instead
    ///
    pub const DefaultDefaultLanguage = defaultDefaultLanguage;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultDefaultLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultDefaultLanguage(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__Settings_DefaultDefaultLanguage();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__Settings.defaultDefaultLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `defaultPreferredLanguages` instead
    ///
    pub const DefaultPreferredLanguages = defaultPreferredLanguages;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultPreferredLanguages)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultPreferredLanguages(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Settings_DefaultPreferredLanguages();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Sonnet__Settings.defaultPreferredLanguages: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Sonnet__Settings.defaultPreferredLanguages: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `skipUppercaseChanged` instead
    ///
    pub const SkipUppercaseChanged = skipUppercaseChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#skipUppercaseChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn skipUppercaseChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_SkipUppercaseChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSkipUppercaseChanged` instead
    ///
    pub const OnSkipUppercaseChanged = onSkipUppercaseChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#skipUppercaseChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn onSkipUppercaseChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_SkipUppercaseChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autodetectLanguageChanged` instead
    ///
    pub const AutodetectLanguageChanged = autodetectLanguageChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#autodetectLanguageChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn autodetectLanguageChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_AutodetectLanguageChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAutodetectLanguageChanged` instead
    ///
    pub const OnAutodetectLanguageChanged = onAutodetectLanguageChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#autodetectLanguageChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn onAutodetectLanguageChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_AutodetectLanguageChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `backgroundCheckerEnabledChanged` instead
    ///
    pub const BackgroundCheckerEnabledChanged = backgroundCheckerEnabledChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#backgroundCheckerEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn backgroundCheckerEnabledChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_BackgroundCheckerEnabledChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBackgroundCheckerEnabledChanged` instead
    ///
    pub const OnBackgroundCheckerEnabledChanged = onBackgroundCheckerEnabledChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#backgroundCheckerEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn onBackgroundCheckerEnabledChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_BackgroundCheckerEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `defaultClientChanged` instead
    ///
    pub const DefaultClientChanged = defaultClientChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultClientChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn defaultClientChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_DefaultClientChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDefaultClientChanged` instead
    ///
    pub const OnDefaultClientChanged = onDefaultClientChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultClientChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn onDefaultClientChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_DefaultClientChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `defaultLanguageChanged` instead
    ///
    pub const DefaultLanguageChanged = defaultLanguageChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultLanguageChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn defaultLanguageChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_DefaultLanguageChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDefaultLanguageChanged` instead
    ///
    pub const OnDefaultLanguageChanged = onDefaultLanguageChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#defaultLanguageChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn onDefaultLanguageChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_DefaultLanguageChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `preferredLanguagesChanged` instead
    ///
    pub const PreferredLanguagesChanged = preferredLanguagesChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#preferredLanguagesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn preferredLanguagesChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_PreferredLanguagesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPreferredLanguagesChanged` instead
    ///
    pub const OnPreferredLanguagesChanged = onPreferredLanguagesChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#preferredLanguagesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn onPreferredLanguagesChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_PreferredLanguagesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `skipRunTogetherChanged` instead
    ///
    pub const SkipRunTogetherChanged = skipRunTogetherChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#skipRunTogetherChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn skipRunTogetherChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_SkipRunTogetherChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSkipRunTogetherChanged` instead
    ///
    pub const OnSkipRunTogetherChanged = onSkipRunTogetherChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#skipRunTogetherChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn onSkipRunTogetherChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_SkipRunTogetherChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `checkerEnabledByDefaultChanged` instead
    ///
    pub const CheckerEnabledByDefaultChanged = checkerEnabledByDefaultChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#checkerEnabledByDefaultChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn checkerEnabledByDefaultChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_CheckerEnabledByDefaultChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCheckerEnabledByDefaultChanged` instead
    ///
    pub const OnCheckerEnabledByDefaultChanged = onCheckerEnabledByDefaultChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#checkerEnabledByDefaultChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn onCheckerEnabledByDefaultChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_CheckerEnabledByDefaultChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentIgnoreListChanged` instead
    ///
    pub const CurrentIgnoreListChanged = currentIgnoreListChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#currentIgnoreListChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn currentIgnoreListChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_CurrentIgnoreListChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentIgnoreListChanged` instead
    ///
    pub const OnCurrentIgnoreListChanged = onCurrentIgnoreListChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#currentIgnoreListChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn onCurrentIgnoreListChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_CurrentIgnoreListChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `modifiedChanged` instead
    ///
    pub const ModifiedChanged = modifiedChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#modifiedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn modifiedChanged(self: Sonnet__Settings) void {
        qtc.Sonnet__Settings_ModifiedChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onModifiedChanged` instead
    ///
    pub const OnModifiedChanged = onModifiedChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-settings.html#modifiedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` callback: *const fn (self: Sonnet__Settings) callconv(.c) void `
    ///
    pub fn onModifiedChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.Sonnet__Settings_Connect_ModifiedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__Settings.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__Settings.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: Sonnet__Settings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__Settings.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: Sonnet__Settings, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn isWidgetType(self: Sonnet__Settings) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn isWindowType(self: Sonnet__Settings) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn isQuickItemType(self: Sonnet__Settings) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn signalsBlocked(self: Sonnet__Settings) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: Sonnet__Settings, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn thread(self: Sonnet__Settings) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: Sonnet__Settings, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: Sonnet__Settings, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: Sonnet__Settings, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: Sonnet__Settings, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: Sonnet__Settings, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: Sonnet__Settings, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("Sonnet__Settings.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: Sonnet__Settings, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: Sonnet__Settings, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: Sonnet__Settings, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: Sonnet__Settings, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn disconnect3(self: Sonnet__Settings) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: Sonnet__Settings, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn dumpObjectTree(self: Sonnet__Settings) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn dumpObjectInfo(self: Sonnet__Settings) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: Sonnet__Settings, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: Sonnet__Settings, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: Sonnet__Settings, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Sonnet__Settings.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Sonnet__Settings.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn bindingStorage(self: Sonnet__Settings) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn bindingStorage2(self: Sonnet__Settings) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn destroyed(self: Sonnet__Settings) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn parent(self: Sonnet__Settings) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: Sonnet__Settings, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn deleteLater(self: Sonnet__Settings) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: Sonnet__Settings, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: Sonnet__Settings, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Settings `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: Sonnet__Settings, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: Sonnet__Settings, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: Sonnet__Settings, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: Sonnet__Settings, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: Sonnet__Settings, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: Sonnet__Settings, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: Sonnet__Settings, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Sonnet__Settings_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: Sonnet__Settings, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Sonnet__Settings_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, QEvent) callconv(.c) bool) void {
        qtc.Sonnet__Settings_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: Sonnet__Settings, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Sonnet__Settings_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: Sonnet__Settings, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Sonnet__Settings_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, QObject, QEvent) callconv(.c) bool) void {
        qtc.Sonnet__Settings_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: Sonnet__Settings, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Sonnet__Settings_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: Sonnet__Settings, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Sonnet__Settings_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, QTimerEvent) callconv(.c) void) void {
        qtc.Sonnet__Settings_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: Sonnet__Settings, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Sonnet__Settings_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: Sonnet__Settings, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Sonnet__Settings_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, QChildEvent) callconv(.c) void) void {
        qtc.Sonnet__Settings_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: Sonnet__Settings, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Sonnet__Settings_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: Sonnet__Settings, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Sonnet__Settings_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, QEvent) callconv(.c) void) void {
        qtc.Sonnet__Settings_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: Sonnet__Settings, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__Settings_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: Sonnet__Settings, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__Settings_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, QMetaMethod) callconv(.c) void) void {
        qtc.Sonnet__Settings_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: Sonnet__Settings, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__Settings_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: Sonnet__Settings, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__Settings_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, QMetaMethod) callconv(.c) void) void {
        qtc.Sonnet__Settings_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: Sonnet__Settings) QObject {
        return .{ .ptr = qtc.Sonnet__Settings_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: Sonnet__Settings) QObject {
        return .{ .ptr = qtc.Sonnet__Settings_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: Sonnet__Settings, callback: *const fn () callconv(.c) QObject) void {
        qtc.Sonnet__Settings_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: Sonnet__Settings) i32 {
        return qtc.Sonnet__Settings_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: Sonnet__Settings) i32 {
        return qtc.Sonnet__Settings_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: Sonnet__Settings, callback: *const fn () callconv(.c) i32) void {
        qtc.Sonnet__Settings_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: Sonnet__Settings, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__Settings_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: Sonnet__Settings, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__Settings_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, [*:0]const u8) callconv(.c) i32) void {
        qtc.Sonnet__Settings_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: Sonnet__Settings, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Sonnet__Settings_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: Sonnet__Settings, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Sonnet__Settings_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, QMetaMethod) callconv(.c) bool) void {
        qtc.Sonnet__Settings_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: Sonnet__Settings, callback: *const fn (Sonnet__Settings, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Sonnet__Settings `
    ///
    pub fn delete(self: Sonnet__Settings) void {
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
