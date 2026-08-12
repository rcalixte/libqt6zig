const QtC = @import("qt6zig");
const qtc = @import("qt6c");
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
const QWidget = @import("libqt6").QWidget;
const TextTranslator__TranslatorEnginePlugin = @import("libqt6").TextTranslator__TranslatorEnginePlugin;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const translatorengineclient_enums = enums;
const translatorutil_enums = @import("libtranslatorutil.zig").enums;
const ArrayMap_i32_constu8 = std.array_hash_map.Auto(i32, []const u8);

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
pub const TextTranslator__TranslatorEngineClient = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextTranslator__TranslatorEngineClient,

    pub const _is_TextTranslator__TranslatorEngineClient = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new TextTranslator::TranslatorEngineClient object in C++ memory
    ///
    pub fn new() TextTranslator__TranslatorEngineClient {
        return .{ .ptr = qtc.TextTranslator__TranslatorEngineClient_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new TextTranslator::TranslatorEngineClient object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) TextTranslator__TranslatorEngineClient {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.TextTranslator__TranslatorEngineClient_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn metaObject(self: TextTranslator__TranslatorEngineClient) QMetaObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorEngineClient_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextTranslator__TranslatorEngineClient_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn superMetaObject(self: TextTranslator__TranslatorEngineClient) QMetaObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorEngineClient_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: TextTranslator__TranslatorEngineClient, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextTranslator__TranslatorEngineClient_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextTranslator__TranslatorEngineClient_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: TextTranslator__TranslatorEngineClient, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextTranslator__TranslatorEngineClient_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: TextTranslator__TranslatorEngineClient, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextTranslator__TranslatorEngineClient_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorEngineClient_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: TextTranslator__TranslatorEngineClient, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextTranslator__TranslatorEngineClient_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEngineClient.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextTranslator__TranslatorEngineClient_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEngineClient.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onName` instead
    ///
    pub const OnName = onName;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onName(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.TextTranslator__TranslatorEngineClient_OnName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superName` instead
    ///
    pub const SuperName = superName;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superName(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextTranslator__TranslatorEngineClient_SuperName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEngineClient.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `translatedName` instead
    ///
    pub const TranslatedName = translatedName;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn translatedName(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextTranslator__TranslatorEngineClient_TranslatedName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEngineClient.translatedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onTranslatedName` instead
    ///
    pub const OnTranslatedName = onTranslatedName;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onTranslatedName(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.TextTranslator__TranslatorEngineClient_OnTranslatedName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTranslatedName` instead
    ///
    pub const SuperTranslatedName = superTranslatedName;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superTranslatedName(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextTranslator__TranslatorEngineClient_SuperTranslatedName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEngineClient.translatedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createTranslator` instead
    ///
    pub const CreateTranslator = createTranslator;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn createTranslator(self: TextTranslator__TranslatorEngineClient) TextTranslator__TranslatorEnginePlugin {
        return .{ .ptr = qtc.TextTranslator__TranslatorEngineClient_CreateTranslator(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateTranslator` instead
    ///
    pub const OnCreateTranslator = onCreateTranslator;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn () callconv(.c) TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn onCreateTranslator(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) TextTranslator__TranslatorEnginePlugin) void {
        qtc.TextTranslator__TranslatorEngineClient_OnCreateTranslator(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateTranslator` instead
    ///
    pub const SuperCreateTranslator = superCreateTranslator;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn superCreateTranslator(self: TextTranslator__TranslatorEngineClient) TextTranslator__TranslatorEnginePlugin {
        return .{ .ptr = qtc.TextTranslator__TranslatorEngineClient_SuperCreateTranslator(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `supportedFromLanguages` instead
    ///
    pub const SupportedFromLanguages = supportedFromLanguages;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_constu8 (key: translatorutil_enums.Language) `
    ///
    pub fn supportedFromLanguages(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) ArrayMap_i32_constu8 {
        const _map: qtc.libqt_map = qtc.TextTranslator__TranslatorEngineClient_SupportedFromLanguages(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("TextTranslator__TranslatorEngineClient.supportedFromLanguages: Total capacity allocation failed");
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("TextTranslator__TranslatorEngineClient.supportedFromLanguages: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onSupportedFromLanguages` instead
    ///
    pub const OnSupportedFromLanguages = onSupportedFromLanguages;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of ArrayMap_i32_constu8 `
    ///
    pub fn onSupportedFromLanguages(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.TextTranslator__TranslatorEngineClient_OnSupportedFromLanguages(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSupportedFromLanguages` instead
    ///
    pub const SuperSupportedFromLanguages = superSupportedFromLanguages;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_constu8 (key: translatorutil_enums.Language) `
    ///
    pub fn superSupportedFromLanguages(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) ArrayMap_i32_constu8 {
        const _map: qtc.libqt_map = qtc.TextTranslator__TranslatorEngineClient_SuperSupportedFromLanguages(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("TextTranslator__TranslatorEngineClient.supportedFromLanguages: Total capacity allocation failed");
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("TextTranslator__TranslatorEngineClient.supportedFromLanguages: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `supportedToLanguages` instead
    ///
    pub const SupportedToLanguages = supportedToLanguages;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_constu8 (key: translatorutil_enums.Language) `
    ///
    pub fn supportedToLanguages(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) ArrayMap_i32_constu8 {
        const _map: qtc.libqt_map = qtc.TextTranslator__TranslatorEngineClient_SupportedToLanguages(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("TextTranslator__TranslatorEngineClient.supportedToLanguages: Total capacity allocation failed");
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("TextTranslator__TranslatorEngineClient.supportedToLanguages: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onSupportedToLanguages` instead
    ///
    pub const OnSupportedToLanguages = onSupportedToLanguages;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of ArrayMap_i32_constu8 `
    ///
    pub fn onSupportedToLanguages(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.TextTranslator__TranslatorEngineClient_OnSupportedToLanguages(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSupportedToLanguages` instead
    ///
    pub const SuperSupportedToLanguages = superSupportedToLanguages;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_constu8 (key: translatorutil_enums.Language) `
    ///
    pub fn superSupportedToLanguages(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) ArrayMap_i32_constu8 {
        const _map: qtc.libqt_map = qtc.TextTranslator__TranslatorEngineClient_SuperSupportedToLanguages(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("TextTranslator__TranslatorEngineClient.supportedToLanguages: Total capacity allocation failed");
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("TextTranslator__TranslatorEngineClient.supportedToLanguages: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `updateListLanguages` instead
    ///
    pub const UpdateListLanguages = updateListLanguages;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn updateListLanguages(self: TextTranslator__TranslatorEngineClient) void {
        qtc.TextTranslator__TranslatorEngineClient_UpdateListLanguages(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateListLanguages` instead
    ///
    pub const OnUpdateListLanguages = onUpdateListLanguages;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateListLanguages(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEngineClient_OnUpdateListLanguages(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateListLanguages` instead
    ///
    pub const SuperUpdateListLanguages = superUpdateListLanguages;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn superUpdateListLanguages(self: TextTranslator__TranslatorEngineClient) void {
        qtc.TextTranslator__TranslatorEngineClient_SuperUpdateListLanguages(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasConfigurationDialog` instead
    ///
    pub const HasConfigurationDialog = hasConfigurationDialog;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn hasConfigurationDialog(self: TextTranslator__TranslatorEngineClient) bool {
        return qtc.TextTranslator__TranslatorEngineClient_HasConfigurationDialog(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasConfigurationDialog` instead
    ///
    pub const OnHasConfigurationDialog = onHasConfigurationDialog;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasConfigurationDialog(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEngineClient_OnHasConfigurationDialog(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasConfigurationDialog` instead
    ///
    pub const SuperHasConfigurationDialog = superHasConfigurationDialog;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn superHasConfigurationDialog(self: TextTranslator__TranslatorEngineClient) bool {
        return qtc.TextTranslator__TranslatorEngineClient_SuperHasConfigurationDialog(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showConfigureDialog` instead
    ///
    pub const ShowConfigureDialog = showConfigureDialog;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` parentWidget: QWidget `
    ///
    pub fn showConfigureDialog(self: TextTranslator__TranslatorEngineClient, parentWidget: anytype) bool {
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return qtc.TextTranslator__TranslatorEngineClient_ShowConfigureDialog(@ptrCast(self.ptr), @ptrCast(parentWidget.ptr));
    }

    /// ### DEPRECATED: Use `onShowConfigureDialog` instead
    ///
    pub const OnShowConfigureDialog = onShowConfigureDialog;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient, parentWidget: QWidget) callconv(.c) bool `
    ///
    pub fn onShowConfigureDialog(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QWidget) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEngineClient_OnShowConfigureDialog(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superShowConfigureDialog` instead
    ///
    pub const SuperShowConfigureDialog = superShowConfigureDialog;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` parentWidget: QWidget `
    ///
    pub fn superShowConfigureDialog(self: TextTranslator__TranslatorEngineClient, parentWidget: anytype) bool {
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return qtc.TextTranslator__TranslatorEngineClient_SuperShowConfigureDialog(@ptrCast(self.ptr), @ptrCast(parentWidget.ptr));
    }

    /// ### DEPRECATED: Use `generateToListFromCurrentToLanguage` instead
    ///
    pub const GenerateToListFromCurrentToLanguage = generateToListFromCurrentToLanguage;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` languageCode: []const u8 `
    ///
    pub fn generateToListFromCurrentToLanguage(self: TextTranslator__TranslatorEngineClient, languageCode: []const u8) void {
        const languageCode_str = qtc.libqt_string{
            .len = languageCode.len,
            .data = languageCode.ptr,
        };
        qtc.TextTranslator__TranslatorEngineClient_GenerateToListFromCurrentToLanguage(@ptrCast(self.ptr), languageCode_str);
    }

    /// ### DEPRECATED: Use `onGenerateToListFromCurrentToLanguage` instead
    ///
    pub const OnGenerateToListFromCurrentToLanguage = onGenerateToListFromCurrentToLanguage;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient, languageCode: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onGenerateToListFromCurrentToLanguage(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, [*:0]const u8) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEngineClient_OnGenerateToListFromCurrentToLanguage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGenerateToListFromCurrentToLanguage` instead
    ///
    pub const SuperGenerateToListFromCurrentToLanguage = superGenerateToListFromCurrentToLanguage;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` languageCode: []const u8 `
    ///
    pub fn superGenerateToListFromCurrentToLanguage(self: TextTranslator__TranslatorEngineClient, languageCode: []const u8) void {
        const languageCode_str = qtc.libqt_string{
            .len = languageCode.len,
            .data = languageCode.ptr,
        };
        qtc.TextTranslator__TranslatorEngineClient_SuperGenerateToListFromCurrentToLanguage(@ptrCast(self.ptr), languageCode_str);
    }

    /// ### DEPRECATED: Use `hasInvertSupport` instead
    ///
    pub const HasInvertSupport = hasInvertSupport;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn hasInvertSupport(self: TextTranslator__TranslatorEngineClient) bool {
        return qtc.TextTranslator__TranslatorEngineClient_HasInvertSupport(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasInvertSupport` instead
    ///
    pub const OnHasInvertSupport = onHasInvertSupport;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasInvertSupport(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEngineClient_OnHasInvertSupport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasInvertSupport` instead
    ///
    pub const SuperHasInvertSupport = superHasInvertSupport;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn superHasInvertSupport(self: TextTranslator__TranslatorEngineClient) bool {
        return qtc.TextTranslator__TranslatorEngineClient_SuperHasInvertSupport(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `engineType` instead
    ///
    pub const EngineType = engineType;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ## Returns:
    ///
    /// ` translatorengineclient_enums.EngineType `
    ///
    pub fn engineType(self: TextTranslator__TranslatorEngineClient) i32 {
        return qtc.TextTranslator__TranslatorEngineClient_EngineType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEngineType` instead
    ///
    pub const OnEngineType = onEngineType;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onEngineType(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorEngineClient_OnEngineType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEngineType` instead
    ///
    pub const SuperEngineType = superEngineType;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ## Returns:
    ///
    /// ` translatorengineclient_enums.EngineType `
    ///
    pub fn superEngineType(self: TextTranslator__TranslatorEngineClient) i32 {
        return qtc.TextTranslator__TranslatorEngineClient_SuperEngineType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `configureChanged` instead
    ///
    pub const ConfigureChanged = configureChanged;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn configureChanged(self: TextTranslator__TranslatorEngineClient) void {
        qtc.TextTranslator__TranslatorEngineClient_ConfigureChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onConfigureChanged` instead
    ///
    pub const OnConfigureChanged = onConfigureChanged;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient) callconv(.c) void `
    ///
    pub fn onConfigureChanged(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEngineClient_Connect_ConfigureChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fillLanguages` instead
    ///
    pub const FillLanguages = fillLanguages;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_constu8 (key: translatorutil_enums.Language) `
    ///
    pub fn fillLanguages(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) ArrayMap_i32_constu8 {
        const _map: qtc.libqt_map = qtc.TextTranslator__TranslatorEngineClient_FillLanguages(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("TextTranslator__TranslatorEngineClient.fillLanguages: Total capacity allocation failed");
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("TextTranslator__TranslatorEngineClient.fillLanguages: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onFillLanguages` instead
    ///
    pub const OnFillLanguages = onFillLanguages;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of ArrayMap_i32_constu8 `
    ///
    pub fn onFillLanguages(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.TextTranslator__TranslatorEngineClient_OnFillLanguages(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFillLanguages` instead
    ///
    pub const SuperFillLanguages = superFillLanguages;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_constu8 (key: translatorutil_enums.Language) `
    ///
    pub fn superFillLanguages(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) ArrayMap_i32_constu8 {
        const _map: qtc.libqt_map = qtc.TextTranslator__TranslatorEngineClient_SuperFillLanguages(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("TextTranslator__TranslatorEngineClient.fillLanguages: Total capacity allocation failed");
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("TextTranslator__TranslatorEngineClient.fillLanguages: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` lang: translatorutil_enums.Language `
    ///
    pub fn isSupported(self: TextTranslator__TranslatorEngineClient, lang: i32) bool {
        return qtc.TextTranslator__TranslatorEngineClient_IsSupported(@ptrCast(self.ptr), @bitCast(lang));
    }

    /// ### DEPRECATED: Use `onIsSupported` instead
    ///
    pub const OnIsSupported = onIsSupported;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient, lang: translatorutil_enums.Language) callconv(.c) bool `
    ///
    pub fn onIsSupported(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, i32) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEngineClient_OnIsSupported(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsSupported` instead
    ///
    pub const SuperIsSupported = superIsSupported;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` lang: translatorutil_enums.Language `
    ///
    pub fn superIsSupported(self: TextTranslator__TranslatorEngineClient, lang: i32) bool {
        return qtc.TextTranslator__TranslatorEngineClient_SuperIsSupported(@ptrCast(self.ptr), @bitCast(lang));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEngineClient.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEngineClient.tr3: Memory allocation failed");
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEngineClient.objectName: Memory allocation failed");
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: TextTranslator__TranslatorEngineClient, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn isWidgetType(self: TextTranslator__TranslatorEngineClient) bool {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn isWindowType(self: TextTranslator__TranslatorEngineClient) bool {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn isQuickItemType(self: TextTranslator__TranslatorEngineClient) bool {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn signalsBlocked(self: TextTranslator__TranslatorEngineClient) bool {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: TextTranslator__TranslatorEngineClient, b: bool) bool {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn thread(self: TextTranslator__TranslatorEngineClient) QThread {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: TextTranslator__TranslatorEngineClient, _thread: anytype) bool {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: TextTranslator__TranslatorEngineClient, interval: i32) i32 {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: TextTranslator__TranslatorEngineClient, time: i64) i32 {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: TextTranslator__TranslatorEngineClient, id: i32) void {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: TextTranslator__TranslatorEngineClient, id: i32) void {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("TextTranslator__TranslatorEngineClient.children: Memory allocation failed");
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: TextTranslator__TranslatorEngineClient, _parent: anytype) void {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: TextTranslator__TranslatorEngineClient, filterObj: anytype) void {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: TextTranslator__TranslatorEngineClient, obj: anytype) void {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: TextTranslator__TranslatorEngineClient, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn disconnect3(self: TextTranslator__TranslatorEngineClient) bool {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: TextTranslator__TranslatorEngineClient, receiver: anytype) bool {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn dumpObjectTree(self: TextTranslator__TranslatorEngineClient) void {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn dumpObjectInfo(self: TextTranslator__TranslatorEngineClient) void {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: TextTranslator__TranslatorEngineClient, _name: [:0]const u8, value: anytype) bool {
        const name_Cstring = _name.ptr;
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: TextTranslator__TranslatorEngineClient, _name: [:0]const u8) QVariant {
        const name_Cstring = _name.ptr;
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("TextTranslator__TranslatorEngineClient.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextTranslator__TranslatorEngineClient.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn bindingStorage(self: TextTranslator__TranslatorEngineClient) QBindingStorage {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn bindingStorage2(self: TextTranslator__TranslatorEngineClient) QBindingStorage {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn destroyed(self: TextTranslator__TranslatorEngineClient) void {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient) callconv(.c) void `
    ///
    pub fn onDestroyed(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient) callconv(.c) void) void {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn parent(self: TextTranslator__TranslatorEngineClient) QObject {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: TextTranslator__TranslatorEngineClient, classname: [:0]const u8) bool {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn deleteLater(self: TextTranslator__TranslatorEngineClient) void {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: TextTranslator__TranslatorEngineClient, interval: i32, timerType: i32) i32 {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: TextTranslator__TranslatorEngineClient, time: i64, timerType: i32) i32 {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: TextTranslator__TranslatorEngineClient, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: TextTranslator__TranslatorEngineClient, signal: [:0]const u8) bool {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: TextTranslator__TranslatorEngineClient, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: TextTranslator__TranslatorEngineClient, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: TextTranslator__TranslatorEngineClient, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: TextTranslator__TranslatorEngineClient, param1: anytype) void {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QObject) callconv(.c) void) void {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: TextTranslator__TranslatorEngineClient, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.TextTranslator__TranslatorEngineClient_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: TextTranslator__TranslatorEngineClient, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.TextTranslator__TranslatorEngineClient_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QEvent) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEngineClient_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: TextTranslator__TranslatorEngineClient, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.TextTranslator__TranslatorEngineClient_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: TextTranslator__TranslatorEngineClient, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.TextTranslator__TranslatorEngineClient_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEngineClient_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: TextTranslator__TranslatorEngineClient, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.TextTranslator__TranslatorEngineClient_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: TextTranslator__TranslatorEngineClient, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.TextTranslator__TranslatorEngineClient_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QTimerEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEngineClient_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: TextTranslator__TranslatorEngineClient, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.TextTranslator__TranslatorEngineClient_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: TextTranslator__TranslatorEngineClient, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.TextTranslator__TranslatorEngineClient_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QChildEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEngineClient_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: TextTranslator__TranslatorEngineClient, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextTranslator__TranslatorEngineClient_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: TextTranslator__TranslatorEngineClient, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextTranslator__TranslatorEngineClient_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEngineClient_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: TextTranslator__TranslatorEngineClient, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorEngineClient_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: TextTranslator__TranslatorEngineClient, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorEngineClient_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QMetaMethod) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEngineClient_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: TextTranslator__TranslatorEngineClient, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorEngineClient_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: TextTranslator__TranslatorEngineClient, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorEngineClient_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QMetaMethod) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEngineClient_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn sender(self: TextTranslator__TranslatorEngineClient) QObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorEngineClient_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn superSender(self: TextTranslator__TranslatorEngineClient) QObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorEngineClient_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: TextTranslator__TranslatorEngineClient`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextTranslator__TranslatorEngineClient_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn senderSignalIndex(self: TextTranslator__TranslatorEngineClient) i32 {
        return qtc.TextTranslator__TranslatorEngineClient_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn superSenderSignalIndex(self: TextTranslator__TranslatorEngineClient) i32 {
        return qtc.TextTranslator__TranslatorEngineClient_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorEngineClient_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: TextTranslator__TranslatorEngineClient, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextTranslator__TranslatorEngineClient_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: TextTranslator__TranslatorEngineClient, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextTranslator__TranslatorEngineClient_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextTranslator__TranslatorEngineClient`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorEngineClient_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: TextTranslator__TranslatorEngineClient, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextTranslator__TranslatorEngineClient_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: TextTranslator__TranslatorEngineClient, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextTranslator__TranslatorEngineClient_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QMetaMethod) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEngineClient_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn delete(self: TextTranslator__TranslatorEngineClient) void {
        qtc.TextTranslator__TranslatorEngineClient_Delete(@ptrCast(self.ptr));
    }
};

pub const enums = struct {
    pub const EngineType = enum(i32) {
        pub const Locale: i32 = 0;
        pub const Network: i32 = 1;
    };
};
