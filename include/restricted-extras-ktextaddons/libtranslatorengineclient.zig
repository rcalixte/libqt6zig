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

    /// New constructs a new TextTranslator::TranslatorEngineClient object.
    ///
    pub fn New() TextTranslator__TranslatorEngineClient {
        return .{ .ptr = qtc.TextTranslator__TranslatorEngineClient_new() };
    }

    /// New2 constructs a new TextTranslator::TranslatorEngineClient object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) TextTranslator__TranslatorEngineClient {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.TextTranslator__TranslatorEngineClient_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn MetaObject(self: TextTranslator__TranslatorEngineClient) QMetaObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorEngineClient_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextTranslator__TranslatorEngineClient_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn SuperMetaObject(self: TextTranslator__TranslatorEngineClient) QMetaObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorEngineClient_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: TextTranslator__TranslatorEngineClient, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextTranslator__TranslatorEngineClient_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextTranslator__TranslatorEngineClient_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: TextTranslator__TranslatorEngineClient, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextTranslator__TranslatorEngineClient_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: TextTranslator__TranslatorEngineClient, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextTranslator__TranslatorEngineClient_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorEngineClient_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: TextTranslator__TranslatorEngineClient, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextTranslator__TranslatorEngineClient_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorengineclient.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextTranslator__TranslatorEngineClient_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorengineclient.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnName(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.TextTranslator__TranslatorEngineClient_OnName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperName` instead
    ///
    pub const QBaseName = SuperName;

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
    pub fn SuperName(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextTranslator__TranslatorEngineClient_SuperName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorengineclient.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TranslatedName(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextTranslator__TranslatorEngineClient_TranslatedName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorengineclient.TranslatedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnTranslatedName(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.TextTranslator__TranslatorEngineClient_OnTranslatedName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTranslatedName` instead
    ///
    pub const QBaseTranslatedName = SuperTranslatedName;

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
    pub fn SuperTranslatedName(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextTranslator__TranslatorEngineClient_SuperTranslatedName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorengineclient.TranslatedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn CreateTranslator(self: TextTranslator__TranslatorEngineClient) TextTranslator__TranslatorEnginePlugin {
        return .{ .ptr = qtc.TextTranslator__TranslatorEngineClient_CreateTranslator(@ptrCast(self.ptr)) };
    }

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
    pub fn OnCreateTranslator(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) TextTranslator__TranslatorEnginePlugin) void {
        qtc.TextTranslator__TranslatorEngineClient_OnCreateTranslator(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateTranslator` instead
    ///
    pub const QBaseCreateTranslator = SuperCreateTranslator;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn SuperCreateTranslator(self: TextTranslator__TranslatorEngineClient) TextTranslator__TranslatorEnginePlugin {
        return .{ .ptr = qtc.TextTranslator__TranslatorEngineClient_SuperCreateTranslator(@ptrCast(self.ptr)) };
    }

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
    pub fn SupportedFromLanguages(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) ArrayMap_i32_constu8 {
        const _map: qtc.libqt_map = qtc.TextTranslator__TranslatorEngineClient_SupportedFromLanguages(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, _map.len) catch @panic("texttranslator__translatorengineclient.SupportedFromLanguages: Total capacity allocation failed");
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("texttranslator__translatorengineclient.SupportedFromLanguages: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

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
    pub fn OnSupportedFromLanguages(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.TextTranslator__TranslatorEngineClient_OnSupportedFromLanguages(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSupportedFromLanguages` instead
    ///
    pub const QBaseSupportedFromLanguages = SuperSupportedFromLanguages;

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
    pub fn SuperSupportedFromLanguages(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) ArrayMap_i32_constu8 {
        const _map: qtc.libqt_map = qtc.TextTranslator__TranslatorEngineClient_SuperSupportedFromLanguages(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, _map.len) catch @panic("texttranslator__translatorengineclient.SupportedFromLanguages: Total capacity allocation failed");
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("texttranslator__translatorengineclient.SupportedFromLanguages: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

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
    pub fn SupportedToLanguages(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) ArrayMap_i32_constu8 {
        const _map: qtc.libqt_map = qtc.TextTranslator__TranslatorEngineClient_SupportedToLanguages(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, _map.len) catch @panic("texttranslator__translatorengineclient.SupportedToLanguages: Total capacity allocation failed");
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("texttranslator__translatorengineclient.SupportedToLanguages: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

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
    pub fn OnSupportedToLanguages(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.TextTranslator__TranslatorEngineClient_OnSupportedToLanguages(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSupportedToLanguages` instead
    ///
    pub const QBaseSupportedToLanguages = SuperSupportedToLanguages;

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
    pub fn SuperSupportedToLanguages(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) ArrayMap_i32_constu8 {
        const _map: qtc.libqt_map = qtc.TextTranslator__TranslatorEngineClient_SuperSupportedToLanguages(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, _map.len) catch @panic("texttranslator__translatorengineclient.SupportedToLanguages: Total capacity allocation failed");
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("texttranslator__translatorengineclient.SupportedToLanguages: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn UpdateListLanguages(self: TextTranslator__TranslatorEngineClient) void {
        qtc.TextTranslator__TranslatorEngineClient_UpdateListLanguages(@ptrCast(self.ptr));
    }

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
    pub fn OnUpdateListLanguages(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEngineClient_OnUpdateListLanguages(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateListLanguages` instead
    ///
    pub const QBaseUpdateListLanguages = SuperUpdateListLanguages;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn SuperUpdateListLanguages(self: TextTranslator__TranslatorEngineClient) void {
        qtc.TextTranslator__TranslatorEngineClient_SuperUpdateListLanguages(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn HasConfigurationDialog(self: TextTranslator__TranslatorEngineClient) bool {
        return qtc.TextTranslator__TranslatorEngineClient_HasConfigurationDialog(@ptrCast(self.ptr));
    }

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
    pub fn OnHasConfigurationDialog(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEngineClient_OnHasConfigurationDialog(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasConfigurationDialog` instead
    ///
    pub const QBaseHasConfigurationDialog = SuperHasConfigurationDialog;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn SuperHasConfigurationDialog(self: TextTranslator__TranslatorEngineClient) bool {
        return qtc.TextTranslator__TranslatorEngineClient_SuperHasConfigurationDialog(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` parentWidget: QWidget `
    ///
    pub fn ShowConfigureDialog(self: TextTranslator__TranslatorEngineClient, parentWidget: anytype) bool {
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return qtc.TextTranslator__TranslatorEngineClient_ShowConfigureDialog(@ptrCast(self.ptr), @ptrCast(parentWidget.ptr));
    }

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
    pub fn OnShowConfigureDialog(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QWidget) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEngineClient_OnShowConfigureDialog(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperShowConfigureDialog` instead
    ///
    pub const QBaseShowConfigureDialog = SuperShowConfigureDialog;

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
    pub fn SuperShowConfigureDialog(self: TextTranslator__TranslatorEngineClient, parentWidget: anytype) bool {
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return qtc.TextTranslator__TranslatorEngineClient_SuperShowConfigureDialog(@ptrCast(self.ptr), @ptrCast(parentWidget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` languageCode: []const u8 `
    ///
    pub fn GenerateToListFromCurrentToLanguage(self: TextTranslator__TranslatorEngineClient, languageCode: []const u8) void {
        const languageCode_str = qtc.libqt_string{
            .len = languageCode.len,
            .data = languageCode.ptr,
        };
        qtc.TextTranslator__TranslatorEngineClient_GenerateToListFromCurrentToLanguage(@ptrCast(self.ptr), languageCode_str);
    }

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
    pub fn OnGenerateToListFromCurrentToLanguage(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, [*:0]const u8) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEngineClient_OnGenerateToListFromCurrentToLanguage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGenerateToListFromCurrentToLanguage` instead
    ///
    pub const QBaseGenerateToListFromCurrentToLanguage = SuperGenerateToListFromCurrentToLanguage;

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
    pub fn SuperGenerateToListFromCurrentToLanguage(self: TextTranslator__TranslatorEngineClient, languageCode: []const u8) void {
        const languageCode_str = qtc.libqt_string{
            .len = languageCode.len,
            .data = languageCode.ptr,
        };
        qtc.TextTranslator__TranslatorEngineClient_SuperGenerateToListFromCurrentToLanguage(@ptrCast(self.ptr), languageCode_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn HasInvertSupport(self: TextTranslator__TranslatorEngineClient) bool {
        return qtc.TextTranslator__TranslatorEngineClient_HasInvertSupport(@ptrCast(self.ptr));
    }

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
    pub fn OnHasInvertSupport(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEngineClient_OnHasInvertSupport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasInvertSupport` instead
    ///
    pub const QBaseHasInvertSupport = SuperHasInvertSupport;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn SuperHasInvertSupport(self: TextTranslator__TranslatorEngineClient) bool {
        return qtc.TextTranslator__TranslatorEngineClient_SuperHasInvertSupport(@ptrCast(self.ptr));
    }

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
    pub fn EngineType(self: TextTranslator__TranslatorEngineClient) i32 {
        return qtc.TextTranslator__TranslatorEngineClient_EngineType(@ptrCast(self.ptr));
    }

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
    pub fn OnEngineType(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorEngineClient_OnEngineType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEngineType` instead
    ///
    pub const QBaseEngineType = SuperEngineType;

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
    pub fn SuperEngineType(self: TextTranslator__TranslatorEngineClient) i32 {
        return qtc.TextTranslator__TranslatorEngineClient_SuperEngineType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn ConfigureChanged(self: TextTranslator__TranslatorEngineClient) void {
        qtc.TextTranslator__TranslatorEngineClient_ConfigureChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEngineClient) callconv(.c) void `
    ///
    pub fn OnConfigureChanged(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEngineClient_Connect_ConfigureChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn FillLanguages(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) ArrayMap_i32_constu8 {
        const _map: qtc.libqt_map = qtc.TextTranslator__TranslatorEngineClient_FillLanguages(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, _map.len) catch @panic("texttranslator__translatorengineclient.FillLanguages: Total capacity allocation failed");
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("texttranslator__translatorengineclient.FillLanguages: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

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
    pub fn OnFillLanguages(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.TextTranslator__TranslatorEngineClient_OnFillLanguages(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFillLanguages` instead
    ///
    pub const QBaseFillLanguages = SuperFillLanguages;

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
    pub fn SuperFillLanguages(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) ArrayMap_i32_constu8 {
        const _map: qtc.libqt_map = qtc.TextTranslator__TranslatorEngineClient_SuperFillLanguages(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, _map.len) catch @panic("texttranslator__translatorengineclient.FillLanguages: Total capacity allocation failed");
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("texttranslator__translatorengineclient.FillLanguages: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` lang: translatorutil_enums.Language `
    ///
    pub fn IsSupported(self: TextTranslator__TranslatorEngineClient, lang: i32) bool {
        return qtc.TextTranslator__TranslatorEngineClient_IsSupported(@ptrCast(self.ptr), @bitCast(lang));
    }

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
    pub fn OnIsSupported(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, i32) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEngineClient_OnIsSupported(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsSupported` instead
    ///
    pub const QBaseIsSupported = SuperIsSupported;

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
    pub fn SuperIsSupported(self: TextTranslator__TranslatorEngineClient, lang: i32) bool {
        return qtc.TextTranslator__TranslatorEngineClient_SuperIsSupported(@ptrCast(self.ptr), @bitCast(lang));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorengineclient.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorengineclient.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ObjectName(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorengineclient.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: TextTranslator__TranslatorEngineClient, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn IsWidgetType(self: TextTranslator__TranslatorEngineClient) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn IsWindowType(self: TextTranslator__TranslatorEngineClient) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn IsQuickItemType(self: TextTranslator__TranslatorEngineClient) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn SignalsBlocked(self: TextTranslator__TranslatorEngineClient) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: TextTranslator__TranslatorEngineClient, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn Thread(self: TextTranslator__TranslatorEngineClient) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: TextTranslator__TranslatorEngineClient, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: TextTranslator__TranslatorEngineClient, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: TextTranslator__TranslatorEngineClient, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: TextTranslator__TranslatorEngineClient, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: TextTranslator__TranslatorEngineClient, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("texttranslator__translatorengineclient.Children: Memory allocation failed");
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: TextTranslator__TranslatorEngineClient, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: TextTranslator__TranslatorEngineClient, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: TextTranslator__TranslatorEngineClient, obj: anytype) void {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: TextTranslator__TranslatorEngineClient, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn Disconnect3(self: TextTranslator__TranslatorEngineClient) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: TextTranslator__TranslatorEngineClient, receiver: anytype) bool {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn DumpObjectTree(self: TextTranslator__TranslatorEngineClient) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn DumpObjectInfo(self: TextTranslator__TranslatorEngineClient) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: TextTranslator__TranslatorEngineClient, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: TextTranslator__TranslatorEngineClient, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: TextTranslator__TranslatorEngineClient, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("texttranslator__translatorengineclient.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("texttranslator__translatorengineclient.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn BindingStorage(self: TextTranslator__TranslatorEngineClient) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn BindingStorage2(self: TextTranslator__TranslatorEngineClient) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn Destroyed(self: TextTranslator__TranslatorEngineClient) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn Parent(self: TextTranslator__TranslatorEngineClient) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: TextTranslator__TranslatorEngineClient, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn DeleteLater(self: TextTranslator__TranslatorEngineClient) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: TextTranslator__TranslatorEngineClient, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: TextTranslator__TranslatorEngineClient, time: i64, timerType: i32) i32 {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: TextTranslator__TranslatorEngineClient, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: TextTranslator__TranslatorEngineClient, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: TextTranslator__TranslatorEngineClient, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: TextTranslator__TranslatorEngineClient, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: TextTranslator__TranslatorEngineClient, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: TextTranslator__TranslatorEngineClient, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QObject) callconv(.c) void) void {
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: TextTranslator__TranslatorEngineClient, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextTranslator__TranslatorEngineClient_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: TextTranslator__TranslatorEngineClient, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextTranslator__TranslatorEngineClient_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QEvent) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEngineClient_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: TextTranslator__TranslatorEngineClient, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextTranslator__TranslatorEngineClient_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: TextTranslator__TranslatorEngineClient, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextTranslator__TranslatorEngineClient_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEngineClient_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: TextTranslator__TranslatorEngineClient, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextTranslator__TranslatorEngineClient_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: TextTranslator__TranslatorEngineClient, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextTranslator__TranslatorEngineClient_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QTimerEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEngineClient_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: TextTranslator__TranslatorEngineClient, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextTranslator__TranslatorEngineClient_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: TextTranslator__TranslatorEngineClient, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextTranslator__TranslatorEngineClient_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QChildEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEngineClient_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: TextTranslator__TranslatorEngineClient, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextTranslator__TranslatorEngineClient_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: TextTranslator__TranslatorEngineClient, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextTranslator__TranslatorEngineClient_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEngineClient_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: TextTranslator__TranslatorEngineClient, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorEngineClient_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: TextTranslator__TranslatorEngineClient, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorEngineClient_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QMetaMethod) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEngineClient_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: TextTranslator__TranslatorEngineClient, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorEngineClient_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: TextTranslator__TranslatorEngineClient, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorEngineClient_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QMetaMethod) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEngineClient_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: TextTranslator__TranslatorEngineClient) QObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorEngineClient_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn SuperSender(self: TextTranslator__TranslatorEngineClient) QObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorEngineClient_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextTranslator__TranslatorEngineClient_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: TextTranslator__TranslatorEngineClient) i32 {
        return qtc.TextTranslator__TranslatorEngineClient_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn SuperSenderSignalIndex(self: TextTranslator__TranslatorEngineClient) i32 {
        return qtc.TextTranslator__TranslatorEngineClient_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: TextTranslator__TranslatorEngineClient, callback: *const fn () callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorEngineClient_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: TextTranslator__TranslatorEngineClient, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextTranslator__TranslatorEngineClient_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: TextTranslator__TranslatorEngineClient, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextTranslator__TranslatorEngineClient_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorEngineClient_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: TextTranslator__TranslatorEngineClient, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextTranslator__TranslatorEngineClient_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: TextTranslator__TranslatorEngineClient, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextTranslator__TranslatorEngineClient_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, QMetaMethod) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEngineClient_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: TextTranslator__TranslatorEngineClient, callback: *const fn (TextTranslator__TranslatorEngineClient, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineClient.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextTranslator__TranslatorEngineClient `
    ///
    pub fn Delete(self: TextTranslator__TranslatorEngineClient) void {
        qtc.TextTranslator__TranslatorEngineClient_Delete(@ptrCast(self.ptr));
    }
};

pub const enums = struct {
    pub const EngineType = enum(i32) {
        pub const Locale: i32 = 0;
        pub const Network: i32 = 1;
    };
};
